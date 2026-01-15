import rclpy
from rclpy.node import Node
from vision_interfaces.srv import GetImage, DetectBoxes, ArrangePallet


class ControllerNode(Node):
    def __init__(self):
        super().__init__('controller_node')
        
        # Create clients for all services
        self.camera_client = self.create_client(GetImage, 'get_image')
        self.vision_client = self.create_client(DetectBoxes, 'detect_boxes')
        self.pallet_client = self.create_client(ArrangePallet, 'arrange_pallet')
        
        self.get_logger().info('Controller node starting...')
        
        # Wait for all services to be available
        self.wait_for_services()
    
    def wait_for_services(self):
        """Wait for all required services to become available"""
        self.get_logger().info('Waiting for camera_node service...')
        while not self.camera_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('  camera_node not available, waiting...')
        
        self.get_logger().info('Waiting for vision_node service...')
        while not self.vision_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('  vision_node not available, waiting...')
        
        self.get_logger().info('Waiting for pallet_node service...')
        while not self.pallet_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('  pallet_node not available, waiting...')
        
        self.get_logger().info('All services available!')
    
    def get_camera_image(self):
        """Request image from camera service asynchronously"""
        request = GetImage.Request()
        future = self.camera_client.call_async(request)
        return future
    
    def detect_boxes(self, image):
        """Request box detection from vision service asynchronously"""
        request = DetectBoxes.Request()
        request.image = image
        future = self.vision_client.call_async(request)
        return future
    
    def arrange_pallet(self, boxes_data):
        """Request pallet arrangement asynchronously"""
        request = ArrangePallet.Request()
        request.box_ids = boxes_data['box_ids']
        request.widths = boxes_data['widths']
        request.heights = boxes_data['heights']
        request.depths = boxes_data['depths']
        future = self.pallet_client.call_async(request)
        return future
    
    def run_pipeline(self):
        """Execute the complete pipeline using async callbacks to avoid deadlocks"""
        self.get_logger().info('\n' + '='*60)
        self.get_logger().info('Starting palletizing pipeline...')
        self.get_logger().info('='*60)
        
        # Step 1: Get image from camera
        self.get_logger().info('\n[Step 1/3] Requesting image from camera_node...')
        future_image = self.get_camera_image()
        future_image.add_done_callback(self.on_image_received)
    
    def on_image_received(self, future):
        """Callback when camera image is received"""
        try:
            response = future.result()
            if not response.success:
                self.get_logger().error('Failed to get image from camera')
                self.get_logger().error('Exiting due to camera failure')
                return
            
            image = response.image
            self.get_logger().info('✓ Image received from camera')
            
            # Step 2: Detect boxes with vision
            self.get_logger().info('\n[Step 2/3] Detecting boxes with vision_node...')
            future_vision = self.detect_boxes(image)
            future_vision.add_done_callback(self.on_boxes_detected)
        except Exception as e:
            self.get_logger().error(f'Error in on_image_received: {e}')
    
    def on_boxes_detected(self, future):
        """Callback when boxes are detected"""
        try:
            response = future.result()
            if not response.success:
                self.get_logger().error('Failed to detect boxes')
                return
            
            num_boxes = len(response.box_ids)
            self.get_logger().info(f'✓ Detected {num_boxes} boxes')
            for i in range(num_boxes):
                self.get_logger().info(
                    f'  Box {response.box_ids[i]}: '
                    f'{response.widths[i]:.1f} x '
                    f'{response.heights[i]:.1f} x '
                    f'{response.depths[i]:.1f} cm'
                )
            
            # Step 3: Arrange boxes on pallet
            self.get_logger().info('\n[Step 3/3] Arranging boxes on pallet with pallet_node...')
            boxes_data = {
                'box_ids': response.box_ids,
                'widths': response.widths,
                'heights': response.heights,
                'depths': response.depths
            }
            future_pallet = self.arrange_pallet(boxes_data)
            future_pallet.add_done_callback(self.on_pallet_arranged)
        except Exception as e:
            self.get_logger().error(f'Error in on_boxes_detected: {e}')
    
    def on_pallet_arranged(self, future):
        """Callback when pallet arrangement is complete"""
        try:
            response = future.result()
            if not response.success:
                self.get_logger().error('Failed to arrange boxes on pallet')
                return
            
            # Display final results
            self.get_logger().info('\n' + '='*60)
            self.get_logger().info('✓ PALLETIZING COMPLETE!')
            self.get_logger().info('='*60)
            self.get_logger().info(f'Strategy: {response.strategy}')
            self.get_logger().info(f'Total layers: {response.total_layers}')
            self.get_logger().info(f'Pallet utilization: {response.pallet_fill_percentage:.1f}%')
            self.get_logger().info('\nLayer arrangement:')
            for desc in response.layer_descriptions:
                self.get_logger().info(f'  {desc}')
            self.get_logger().info('='*60 + '\n')
            
            # Shutdown after pipeline completes
            self.get_logger().info('Pipeline completed. Shutting down controller node...')
            raise KeyboardInterrupt  # Signal to stop spinning
        except Exception as e:
            self.get_logger().error(f'Error in on_pallet_arranged: {e}')
            raise KeyboardInterrupt  # Signal to stop spinning


def main(args=None):
    rclpy.init(args=args)
    node = ControllerNode()
    
    try:
        # Start the pipeline asynchronously
        node.run_pipeline()
        # Keep the node spinning to process callbacks
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
