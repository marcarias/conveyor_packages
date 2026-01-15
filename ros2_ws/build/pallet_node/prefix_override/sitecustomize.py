import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/marc/conveyor_packages/ros2_ws/install/pallet_node'
