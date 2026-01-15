import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge
from vision_interfaces.srv import GetImage
import cv2
import os


class CameraNode(Node):
    def __init__(self):
        super().__init__('camera_node')
        self.bridge = CvBridge()
        self.srv = self.create_service(GetImage, 'get_image', self.get_image_callback)
        
        # Get image path - busca en el directorio raíz del workspace
        self.image_path = '/home/marc/conveyor_packages/ros2_ws/conveyor.png'
        
        # Verificar que la imagen existe
        if not os.path.exists(self.image_path):
            self.get_logger().error(f'Image not found: {self.image_path}')
        
        self.get_logger().info(f'Camera node ready. Image path: {self.image_path}')
        self.get_logger().info('Service "get_image" available')

    def get_image_callback(self, request, response):
        self.get_logger().info('Image request received')
        
        # Load image
        image = cv2.imread(self.image_path)
        if image is None:
            self.get_logger().error(f'Could not load image: {self.image_path}')
            response.success = False
            return response
        
        # Convert OpenCV image to ROS Image message
        response.image = self.bridge.cv2_to_imgmsg(image, encoding='bgr8')
        response.success = True
        
        self.get_logger().info('Image loaded and sent in response')
        return response


def main(args=None):
    rclpy.init(args=args)
    node = CameraNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
