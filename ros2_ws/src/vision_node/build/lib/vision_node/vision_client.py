import rclpy
from rclpy.node import Node
from vision_interfaces.srv import DetectBoxes
from cv_bridge import CvBridge
import cv2
import numpy as np
import random


class VisionNode(Node):
    def __init__(self):
        super().__init__('vision_node')
        self.bridge = CvBridge()
        self.srv = self.create_service(DetectBoxes, 'detect_boxes', self.detect_boxes_callback)
        self.get_logger().info('Vision node ready. Service "detect_boxes" available')
    
    def detect_boxes_callback(self, request, response):
        self.get_logger().info('Box detection request received')
        
        # Convert ROS Image to OpenCV
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
        
    def detect_boxes_in_image(self, image):
        """Process image and detect boxes (from detect_boxes.py logic)"""
        original = image.copy()
        gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        
        # Apply Gaussian filter to reduce noise
        blurred = cv2.GaussianBlur(gray, (5, 5), 0)
        
        # Edge detection with Canny
        edges = cv2.Canny(blurred, 50, 150)
        
        # Apply morphological operations to close contours
        kernel = np.ones((5, 5), np.uint8)
        closed = cv2.morphologyEx(edges, cv2.MORPH_CLOSE, kernel, iterations=3)
        
        # Find all contours
        contours, hierarchy = cv2.findContours(closed, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
        
        # Create mask
        mask = np.zeros_like(gray)
        
        # Filter contours to detect rectangular boxes
        min_area = 2000
        max_area = 100000
        boxes = []
        valid_contours = []
        
        for contour in contours:
            area = cv2.contourArea(contour)
            if min_area < area < max_area:
                peri = cv2.arcLength(contour, True)
                approx = cv2.approxPolyDP(contour, 0.02 * peri, True)
                x, y, w, h = cv2.boundingRect(contour)
                aspect_ratio = float(w) / h if h > 0 else 0
                rect_area = w * h
                extent = float(area) / rect_area if rect_area > 0 else 0
                
                if 0.4 < aspect_ratio < 3.0 and extent > 0.55 and len(approx) >= 4:
                    boxes.append((x, y, w, h))
                    valid_contours.append(contour)
        
        # Filter outliers
        area_threshold = 15000
        filtered_boxes = []
        filtered_contours = []
        
        for i, (box, contour) in enumerate(zip(boxes, valid_contours)):
            x, y, w, h = box
            area = w * h
            
            if area < area_threshold:
                in_contact_with_larger = False
                for j, other_box in enumerate(boxes):
                    if i != j:
                        ox, oy, ow, oh = other_box
                        other_area = ow * oh
                        if other_area > area and self.boxes_in_contact(box, other_box):
                            in_contact_with_larger = True
                            break
                
                if not in_contact_with_larger:
                    filtered_boxes.append(box)
                    filtered_contours.append(contour)
            else:
                filtered_boxes.append(box)
                filtered_contours.append(contour)
        
        # Create mask with filtered detections
        temp_mask = np.zeros_like(gray)
        for contour in filtered_contours:
            cv2.drawContours(temp_mask, [contour], -1, 255, thickness=-1)
        
        # Smooth mask
        kernel_smooth = np.ones((15, 15), np.uint8)
        temp_mask = cv2.erode(temp_mask, kernel_smooth, iterations=5)
        temp_mask = cv2.dilate(temp_mask, kernel_smooth, iterations=4)
        
        # Keep only largest mask per bounding box
        final_mask = np.zeros_like(gray)
        final_boxes = []
        
        for i, (x, y, w, h) in enumerate(filtered_boxes):
            roi_mask = temp_mask[y:y+h, x:x+w].copy()
            contours_in_roi, _ = cv2.findContours(roi_mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
            
            if len(contours_in_roi) > 0:
                largest_contour = max(contours_in_roi, key=cv2.contourArea)
                largest_contour_adjusted = largest_contour + [x, y]
                cv2.drawContours(final_mask, [largest_contour_adjusted], -1, 255, thickness=-1)
                final_boxes.append((x, y, w, h))
        
        # Get oriented bounding boxes with dimensions
        final_contours, _ = cv2.findContours(final_mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        
        # Sort contours from left to right
        contours_with_centers = []
        for contour in final_contours:
            if cv2.contourArea(contour) > 100:
                M = cv2.moments(contour)
                if M["m00"] != 0:
                    cx = int(M["m10"] / M["m00"])
                    cy = int(M["m01"] / M["m00"])
                    contours_with_centers.append((contour, cx, cy))
        
        contours_with_centers.sort(key=lambda x: x[1])
        
        # Calculate spatial scale (vertical dimension = 1.5m = 150cm)
        image_height = original.shape[0]
        spatial_scale = 150.0 / image_height  # cm/pixel
        
        # Extract dimensions
        box_ids = []
        widths = []
        heights = []
        depths = []
        
        box_id = 1
        for contour, cx, cy in contours_with_centers:
            rect = cv2.minAreaRect(contour)
            (_, _), (width, height), angle = rect
            
            # Convert to cm
            width_cm = width * spatial_scale
            height_cm = height * spatial_scale
            depth_cm = random.uniform(20, 30)
            
            box_ids.append(box_id)
            widths.append(width_cm)
            heights.append(height_cm)
            depths.append(depth_cm)
            
            box_id += 1
        
        return box_ids, widths, heights, depths
    
    def boxes_in_contact(self, box1, box2, margin=5):
        x1, y1, w1, h1 = box1
        x2, y2, w2, h2 = box2
        
        if (x1 - margin <= x2 + w2 and x1 + w1 + margin >= x2 and
            y1 - margin <= y2 + h2 and y1 + h1 + margin >= y2):
            return True
        return False


def main(args=None):
    rclpy.init(args=args)
    node = VisionNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
