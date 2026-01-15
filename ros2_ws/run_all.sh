#!/bin/bash
cd /home/marc/conveyor_packages/ros2_ws
source /opt/ros/jazzy/setup.bash
source install/setup.bash

# Create a file to store PIDs
PID_FILE="/tmp/ros2_nodes.pid"
rm -f $PID_FILE

# Start camera_node in background
echo "📷 Starting camera_node..."
python3 src/camera_node/camera_node/camera_service.py > /tmp/camera_node.log 2>&1 &
CAMERA_PID=$!
echo $CAMERA_PID >> $PID_FILE
echo "   ✓ camera_node ready (PID: $CAMERA_PID)"

sleep 1

# Start vision_node in background
echo "👁️  Starting vision_node..."
python3 src/vision_node/vision_node/vision_client.py > /tmp/vision_node.log 2>&1 &
VISION_PID=$!
echo $VISION_PID >> $PID_FILE
echo "   ✓ vision_node ready (PID: $VISION_PID)"

sleep 1

# Start pallet_node in background
echo "📦 Starting pallet_node..."
python3 src/pallet_node/pallet_node/pallet_service.py > /tmp/pallet_node.log 2>&1 &
PALLET_PID=$!
echo $PALLET_PID >> $PID_FILE
echo "   ✓ pallet_node ready (PID: $PALLET_PID)"

sleep 2

# Start controller in reactive mode
echo "🎮 Starting controller_node..."
python3 src/controller_node/controller_node/controller_service.py > /tmp/controller_node.log 2>&1 &
CONTROLLER_PID=$!
echo $CONTROLLER_PID >> $PID_FILE
echo "   ✓ controller_node ready (PID: $CONTROLLER_PID)"

sleep 2

echo ""
echo "🚀 To trigger image processing, call the service:"
echo ""
echo "   ros2 service call /trigger_capture std_srvs/srv/Trigger"
echo ""
echo "📊 To monitor controller output:"
echo "   tail -f /tmp/controller_node.log"
echo ""
echo "🛑 To stop all nodes: kill \$(cat $PID_FILE)"
echo ""
echo "Press Ctrl+C to exit (nodes will continue running)"
echo ""

# Monitor controller log
trap "echo ''; echo 'Nodes still running in background'; exit 0" INT
tail -f /tmp/controller_node.log
sleep 1

# Kill all node processes
echo "Controller finished. Shutting down all nodes..."
pkill -f "ros2 run camera_node"
pkill -f "ros2 run vision_node"
pkill -f "ros2 run pallet_node"
pkill -f "ros2 run controller_node"

# Clean up
rm -f /tmp/controller_done
rm -f $PID_FILE

echo "All nodes shut down successfully!"
