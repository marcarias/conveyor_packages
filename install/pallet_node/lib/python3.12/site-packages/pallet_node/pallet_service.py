import rclpy
from rclpy.node import Node
from vision_interfaces.srv import ArrangePallet
import matplotlib.pyplot as plt
import matplotlib.patches as patches
from matplotlib.colors import to_rgba
import numpy as np


class Box:
    """Representa una caja con sus dimensiones"""
    def __init__(self, box_id, width, height, depth):
        self.id = box_id
        self.width = width
        self.height = height
        self.depth = depth
        self.x = 0
        self.y = 0
        self.layer = 0
        
    def area(self):
        return self.width * self.height
    
    def volume(self):
        return self.width * self.height * self.depth


class PalletNode(Node):
    def __init__(self):
        super().__init__('pallet_node')
        self.srv = self.create_service(ArrangePallet, 'arrange_pallet', self.arrange_pallet_callback)
        
        # Pallet dimensions (cm)
        self.PALLET_WIDTH = 120.0
        self.PALLET_HEIGHT = 80.0
        
        self.get_logger().info('Pallet node ready. Service "arrange_pallet" available')
        self.get_logger().info(f'Pallet size: {self.PALLET_WIDTH} x {self.PALLET_HEIGHT} cm')
    
    def arrange_pallet_callback(self, request, response):
        self.get_logger().info('Pallet arrangement request received')
        
        # Create Box objects from request
        boxes = []
        for i in range(len(request.box_ids)):
            box = Box(
                request.box_ids[i],
                request.widths[i],
                request.heights[i],
                request.depths[i]
            )
            boxes.append(box)
        
        self.get_logger().info(f'Arranging {len(boxes)} boxes on pallet')
        
        # Apply palletizing algorithm
        layers, strategy_name = self.palletize_boxes(boxes)
        
        # Generate response
        response.strategy = strategy_name
        response.total_layers = len(layers)
        response.layer_descriptions = []
        
        total_box_area = 0
        for box in boxes:
            total_box_area += box.area()
        
        pallet_area = self.PALLET_WIDTH * self.PALLET_HEIGHT
        response.pallet_fill_percentage = min(100.0, (total_box_area / pallet_area) * 100.0)
        
        # Generate layer descriptions
        for layer_idx, layer in enumerate(layers):
            layer_desc = f"Layer {layer_idx + 1}: "
            box_descs = []
            for box in layer:
                box_descs.append(
                    f"Box{box.id}[{box.width:.1f}x{box.height:.1f}x{box.depth:.1f}cm @({box.x:.1f},{box.y:.1f})]"
                )
            layer_desc += ", ".join(box_descs)
            response.layer_descriptions.append(layer_desc)
        
        response.success = len(layers) > 0
        
        # Log results
        self.get_logger().info(f'=== Palletizing Results ===')
        self.get_logger().info(f'Strategy: {response.strategy}')
        self.get_logger().info(f'Total layers: {response.total_layers}')
        self.get_logger().info(f'Pallet fill: {response.pallet_fill_percentage:.1f}%')
        for desc in response.layer_descriptions:
            self.get_logger().info(desc)
        
        # Visualize the pallet arrangement
        self.visualize_pallet(layers, boxes)
        
        return response
    
    def palletize_boxes(self, boxes):
        """
        Bottom-Left-Fill algorithm with layer stacking
        Optimized for stability and space utilization
        """
        strategy_name = "Bottom-Left-Fill with Layer Stacking"
        
        # Sort boxes by area (largest first) for better packing
        sorted_boxes = sorted(boxes, key=lambda b: b.area(), reverse=True)
        
        layers = []
        remaining_boxes = sorted_boxes.copy()
        
        while remaining_boxes:
            layer, remaining_boxes = self.pack_single_layer(remaining_boxes)
            if not layer:
                # Could not fit any more boxes
                self.get_logger().warn(f'{len(remaining_boxes)} boxes could not fit on pallet')
                break
            layers.append(layer)
        
        return layers, strategy_name
    
    def pack_single_layer(self, boxes):
        """Pack boxes in a single layer using Bottom-Left algorithm"""
        placed_boxes = []
        remaining = []
        
        # Track occupied spaces
        occupied_spaces = []
        
        for box in boxes:
            # Try both orientations (width x height and height x width)
            orientations = [
                (box.width, box.height),
                (box.height, box.width)
            ]
            
            placed = False
            for w, h in orientations:
                # Try to find a position using bottom-left heuristic
                position = self.find_bottom_left_position(w, h, occupied_spaces)
                
                if position is not None:
                    x, y = position
                    # Create a copy of the box with potentially rotated dimensions
                    placed_box = Box(box.id, w, h, box.depth)
                    placed_box.x = x
                    placed_box.y = y
                    placed_box.layer = len(placed_boxes)
                    
                    placed_boxes.append(placed_box)
                    occupied_spaces.append((x, y, w, h))
                    placed = True
                    break
            
            if not placed:
                remaining.append(box)
        
        return placed_boxes, remaining
    
    def find_bottom_left_position(self, width, height, occupied_spaces):
        """
        Find the bottom-left position for a box using skyline algorithm
        Returns (x, y) or None if no position found
        """
        # Try positions from bottom-left, moving right and up
        candidate_positions = [(0, 0)]
        
        # Generate candidate positions based on occupied spaces
        for (ox, oy, ow, oh) in occupied_spaces:
            # Right of this box
            candidate_positions.append((ox + ow, oy))
            # Above this box
            candidate_positions.append((ox, oy + oh))
        
        # Sort by y (bottom first), then by x (left first)
        candidate_positions.sort(key=lambda p: (p[1], p[0]))
        
        for x, y in candidate_positions:
            if self.can_place_box(x, y, width, height, occupied_spaces):
                return (x, y)
        
        return None
    
    def can_place_box(self, x, y, width, height, occupied_spaces):
        """Check if a box can be placed at position (x, y)"""
        # Check pallet bounds
        if x + width > self.PALLET_WIDTH or y + height > self.PALLET_HEIGHT:
            return False
        
        # Check overlap with other boxes
        for (ox, oy, ow, oh) in occupied_spaces:
            if not (x + width <= ox or x >= ox + ow or 
                    y + height <= oy or y >= oy + oh):
                return False
        
        return True
    
    def visualize_pallet(self, layers, original_boxes):
        """
        Create a 2D top-view visualization of the pallet with boxes
        """
        # Create figure
        fig, ax = plt.subplots(figsize=(14, 10))
        
        # Draw pallet boundary
        pallet_rect = patches.Rectangle(
            (0, 0), self.PALLET_WIDTH, self.PALLET_HEIGHT,
            linewidth=3, edgecolor='black', facecolor='lightgray', alpha=0.3
        )
        ax.add_patch(pallet_rect)
        
        # Color palette for different layers
        layer_colors = ['#FF6B6B', '#4ECDC4', '#45B7D1', '#FFA07A', '#98D8C8', 
                       '#F7DC6F', '#BB8FCE', '#85C1E2', '#F8B88B', '#AAB7B8']
        
        # Create legend data
        legend_data = []
        
        # Draw boxes for each layer
        for layer_idx, layer in enumerate(layers):
            color = layer_colors[layer_idx % len(layer_colors)]
            
            for box in layer:
                # Draw box rectangle
                rect = patches.Rectangle(
                    (box.x, box.y), box.width, box.height,
                    linewidth=2, edgecolor='darkblue', 
                    facecolor=color, alpha=0.7
                )
                ax.add_patch(rect)
                
                # Add box ID in the center
                center_x = box.x + box.width / 2
                center_y = box.y + box.height / 2
                ax.text(center_x, center_y, f'ID {box.id}',
                       ha='center', va='center', fontsize=10,
                       fontweight='bold', color='white',
                       bbox=dict(boxstyle='round,pad=0.3', 
                                facecolor='darkblue', alpha=0.8))
                
                # Store legend info
                legend_data.append({
                    'id': box.id,
                    'width': box.width,
                    'height': box.height,
                    'depth': box.depth,
                    'layer': layer_idx + 1,
                    'color': color
                })
        
        # Set axis properties
        ax.set_xlim(-5, self.PALLET_WIDTH + 5)
        ax.set_ylim(-5, self.PALLET_HEIGHT + 5)
        ax.set_aspect('equal')
        ax.set_xlabel('Width (cm)', fontsize=12, fontweight='bold')
        ax.set_ylabel('Height (cm)', fontsize=12, fontweight='bold')
        ax.set_title('Pallet Layout - 2D Top View\n' + 
                    f'Pallet: {self.PALLET_WIDTH} x {self.PALLET_HEIGHT} cm',
                    fontsize=14, fontweight='bold', pad=20)
        ax.grid(True, alpha=0.3, linestyle='--')
        
        # Add pallet dimensions annotations
        ax.annotate('', xy=(self.PALLET_WIDTH, -3), xytext=(0, -3),
                   arrowprops=dict(arrowstyle='<->', color='black', lw=2))
        ax.text(self.PALLET_WIDTH/2, -3.5, f'{self.PALLET_WIDTH} cm',
               ha='center', va='top', fontsize=10, fontweight='bold')
        
        ax.annotate('', xy=(-3, self.PALLET_HEIGHT), xytext=(-3, 0),
                   arrowprops=dict(arrowstyle='<->', color='black', lw=2))
        ax.text(-3.5, self.PALLET_HEIGHT/2, f'{self.PALLET_HEIGHT} cm',
               ha='right', va='center', fontsize=10, fontweight='bold',
               rotation=90)
        
        # Create legend table
        legend_text = "Box Legend:\n" + "="*50 + "\n"
        legend_text += f"{'ID':<4} {'W(cm)':<8} {'D(cm)':<8} {'H(cm)':<8} {'Layer':<6}\n"
        legend_text += "-"*50 + "\n"
        
        # Sort legend data by ID
        legend_data_sorted = sorted(legend_data, key=lambda x: x['id'])
        
        for data in legend_data_sorted:
            legend_text += (f"{data['id']:<4} "
                          f"{data['width']:<8.1f} "
                          f"{data['height']:<8.1f} "
                          f"{data['depth']:<8.1f} "
                          f"{data['layer']:<6}\n")
        
        # Add legend as text box
        props = dict(boxstyle='round', facecolor='wheat', alpha=0.8)
        ax.text(1.02, 0.5, legend_text, transform=ax.transAxes,
               fontsize=9, verticalalignment='center',
               bbox=props, family='monospace')
        
        # Add layer color legend
        layer_legend_text = "\nLayer Colors:\n"
        for layer_idx in range(len(layers)):
            color = layer_colors[layer_idx % len(layer_colors)]
            layer_legend_text += f"  Layer {layer_idx + 1}\n"
        
        # Create custom legend patches for layers
        from matplotlib.patches import Patch
        legend_elements = []
        for layer_idx in range(len(layers)):
            color = layer_colors[layer_idx % len(layer_colors)]
            legend_elements.append(
                Patch(facecolor=color, edgecolor='darkblue', 
                     label=f'Layer {layer_idx + 1}')
            )
        
        ax.legend(handles=legend_elements, loc='upper left', 
                 bbox_to_anchor=(1.02, 1), fontsize=10)
        
        plt.tight_layout()
        
        # Save figure
        output_path = '/home/marc/conveyor_packages/ros2_ws/pallet_layout.png'
        plt.savefig(output_path, dpi=150, bbox_inches='tight')
        self.get_logger().info(f'Pallet visualization saved to: {output_path}')
        
        # Display the plot and keep it open
        # self.get_logger().info('Figure displayed - close the window to continue')
        # plt.show(block=True)  # Block until user closes the window


def main(args=None):
    rclpy.init(args=args)
    node = PalletNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
