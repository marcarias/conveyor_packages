import rclpy
from rclpy.node import Node
from vision_interfaces.srv import DetectBoxes
from cv_bridge import CvBridge
import cv2
import numpy as np
import random
import torch
from PIL import Image
from transformers import AutoProcessor, AutoModelForZeroShotObjectDetection
from torchvision.ops import nms
from ultralytics import FastSAM
import warnings
warnings.filterwarnings('ignore')


class VisionNode(Node):
    def __init__(self):
        super().__init__('vision_node')
        self.bridge = CvBridge()
        
        # Initialize models
        self.device = "cuda" if torch.cuda.is_available() else "cpu"
        self.get_logger().info(f'Using device: {self.device}')
        
        # Load Grounding DINO model
        self.get_logger().info('Loading Grounding DINO model...')
        model_id = "IDEA-Research/grounding-dino-tiny"
        self.processor = AutoProcessor.from_pretrained(model_id)
        self.model = AutoModelForZeroShotObjectDetection.from_pretrained(model_id).to(self.device)
        self.get_logger().info('Grounding DINO model loaded')
        
        # Load FastSAM model
        self.get_logger().info('Loading FastSAM model...')
        fastsam_checkpoint = "FastSAM-x.pt"
        self.fastsam_model = FastSAM(fastsam_checkpoint)
        self.get_logger().info('FastSAM model loaded')
        
        # Create service
        self.srv = self.create_service(DetectBoxes, 'detect_boxes', self.detect_boxes_callback)
        self.get_logger().info('Vision node ready. Service "detect_boxes" available')
    
    def detect_boxes_callback(self, request, response):
        self.get_logger().info('Box detection request received')
        
        # Convert ROS Image to OpenCV (BGR)
        try:
            cv_image = self.bridge.imgmsg_to_cv2(request.image, desired_encoding='bgr8')
        except Exception as e:
            self.get_logger().error(f'Failed to convert image: {str(e)}')
            response.success = False
            return response
        
        # Process image
        box_ids, widths, heights, depths = self.detect_boxes_in_image(cv_image)
        
        # Fill response
        response.box_ids = box_ids
        response.widths = widths
        response.heights = heights
        response.depths = depths
        response.success = True
        
        # Display results
        self.get_logger().info(f'Detected {len(box_ids)} boxes')
        for i in range(len(box_ids)):
            self.get_logger().info(
                f'Box ID {box_ids[i]}: {widths[i]:.1f} x {heights[i]:.1f} x {depths[i]:.1f} cm'
            )
        
        return response
    
    def remove_shadows_from_mask(self, image_np, mask, threshold_value=100, erode_kernel_size=5):
        """Remove shadow regions from a mask"""
        if mask is None:
            return None
        
        # Convert image to grayscale
        gray = cv2.cvtColor(image_np, cv2.COLOR_RGB2GRAY)
        
        # Apply mask: only consider pixels where mask is True
        masked_gray = np.where(mask, gray, 255)
        
        # Binarize: pixels darker than threshold are considered shadows
        bright_mask = masked_gray >= threshold_value
        
        # Combine with original mask (intersection)
        cleaned_mask = mask & bright_mask
        
        # Apply morphological erosion
        kernel = np.ones((erode_kernel_size, erode_kernel_size), np.uint8)
        cleaned_mask_uint8 = cleaned_mask.astype(np.uint8)
        eroded_mask = cv2.erode(cleaned_mask_uint8, kernel, iterations=1)
        
        return eroded_mask.astype(bool)
    
    def get_oriented_bounding_box(self, mask):
        """Calculate oriented bounding box from a binary mask"""
        if mask is None:
            return None
        
        # Get contours from mask
        mask_uint8 = mask.astype(np.uint8) * 255
        contours, _ = cv2.findContours(mask_uint8, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        
        if len(contours) == 0:
            return None
        
        # Get the largest contour
        largest_contour = max(contours, key=cv2.contourArea)
        
        # Calculate minimum area rectangle (oriented bounding box)
        rect = cv2.minAreaRect(largest_contour)
        
        # rect format: ((center_x, center_y), (width, height), angle)
        center, size, angle = rect
        
        # Get the 4 corners of the rectangle
        box_points = cv2.boxPoints(rect)
        
        return {
            'center': center,
            'size': size,
            'angle': angle,
            'corners': box_points
        }
    
    def segment_box(self, image_np, bbox):
        """Use FastSAM to segment the box within the bounding box"""
        x_min, y_min, x_max, y_max = [int(v) for v in bbox]
        
        # Run FastSAM with the bounding box as prompt
        results = self.fastsam_model(
            image_np,
            device=self.device,
            retina_masks=True,
            imgsz=1024,
            conf=0.4,
            iou=0.9,
            bboxes=[[x_min, y_min, x_max, y_max]]
        )
        
        # Get the mask
        if len(results) == 0 or results[0].masks is None:
            return None
        
        mask = results[0].masks.data[0].cpu().numpy().astype(bool)
        
        return mask
        
    def detect_boxes_in_image(self, cv_image):
        """Detect boxes using Grounding DINO + FastSAM"""
        
        # Convert BGR to RGB
        image_rgb = cv2.cvtColor(cv_image, cv2.COLOR_BGR2RGB)
        image_pil = Image.fromarray(image_rgb)
        img_width, img_height = image_pil.size
        img_area = img_width * img_height
        
        # Calculate spatial scale (vertical dimension = 1.5m = 150cm)
        spatial_scale = 150.0 / img_height  # cm/pixel
        
        self.get_logger().info(f'Image size: {img_width}x{img_height}, scale: {spatial_scale:.4f} cm/pixel')
        
        # Multi-prompt detection with Grounding DINO
        self.get_logger().info('🔍 Calculando DINO...')
        all_boxes, all_scores, all_labels = [], [], []
        prompts = ["cardboard", "cardboard box"]
        threshold = 0.10  # Lower threshold to detect more small boxes
        
        for prompt in prompts:
            inputs = self.processor(images=image_pil, text=prompt, return_tensors="pt").to(self.device)
            with torch.no_grad():
                outputs = self.model(**inputs)
            
            results = self.processor.post_process_grounded_object_detection(
                outputs, inputs.input_ids, threshold=threshold, target_sizes=[image_pil.size[::-1]]
            )[0]
            
            if len(results["boxes"]) > 0:
                all_boxes.extend(results["boxes"].cpu().numpy())
                all_scores.extend(results["scores"].cpu().numpy())
                all_labels.extend([prompt] * len(results["boxes"]))
                self.get_logger().info(f'"{prompt}": {len(results["boxes"])} detections')
        
        if len(all_boxes) == 0:
            self.get_logger().warn('No detections found')
            return [], [], [], []
        
        # Filter and NMS
        boxes_tensor = torch.tensor(all_boxes)
        scores_tensor = torch.tensor(all_scores)
        
        # Remove very large boxes (pallet) and very small boxes (noise)
        min_area = 30000  # Reduced minimum area for small boxes
        valid_indices = []
        for i, box in enumerate(boxes_tensor):
            box_area = (box[2] - box[0]) * (box[3] - box[1])
            area_ratio = box_area / img_area
            if area_ratio < 0.4 and box_area >= min_area:
                valid_indices.append(i)
        
        if len(valid_indices) == 0:
            self.get_logger().warn('All detections filtered out')
            return [], [], [], []
        
        boxes_tensor = boxes_tensor[valid_indices]
        scores_tensor = scores_tensor[valid_indices]
        labels_filtered = [all_labels[i] for i in valid_indices]
        
        # NMS
        keep_indices = nms(boxes_tensor, scores_tensor, iou_threshold=0.5)
        final_boxes = boxes_tensor[keep_indices].numpy()
        final_scores = scores_tensor[keep_indices].numpy()
        final_labels = [labels_filtered[i] for i in keep_indices.tolist()]
        
        # Sort boxes left to right (by x_min coordinate)
        sorted_indices = np.argsort(final_boxes[:, 0])
        final_boxes = final_boxes[sorted_indices]
        final_scores = final_scores[sorted_indices]
        final_labels = [final_labels[i] for i in sorted_indices]
        
        self.get_logger().info(f'After NMS and filtering: {len(final_boxes)} packages')
        
        # FastSAM segmentation
        self.get_logger().info(' Calculando FastSAM...')
        oriented_boxes = []
        image_np = np.array(image_pil)
        
        for i, box in enumerate(final_boxes):
            # Segment the box
            mask = self.segment_box(image_np, box)
            
            if mask is not None:
                # Remove shadows from mask
                cleaned_mask = self.remove_shadows_from_mask(image_np, mask, threshold_value=100)
                
                # Calculate oriented bounding box on cleaned mask
                obb = self.get_oriented_bounding_box(cleaned_mask)
                oriented_boxes.append(obb)
            else:
                oriented_boxes.append(None)
        
        # Extract dimensions from oriented bounding boxes
        box_ids = []
        widths = []
        heights = []
        depths = []
        
        for i, obb in enumerate(oriented_boxes):
            if obb is not None:
                # Get OBB dimensions in pixels
                width_px = obb['size'][0]
                height_px = obb['size'][1]
                
                # Convert to cm
                width_cm = width_px * spatial_scale
                height_cm = height_px * spatial_scale
                
                # Generate random depth between 20-30 cm
                depth_cm = random.uniform(20.0, 30.0)
                
                box_ids.append(i + 1)
                widths.append(width_cm)
                heights.append(height_cm)
                depths.append(depth_cm)
        
        return box_ids, widths, heights, depths


def main(args=None):
    rclpy.init(args=args)
    node = VisionNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
