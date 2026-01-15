# ROS2 Palletizing System

Package detection and palletizing system using ROS2 with service-based architecture.

---

## Detection and Size Estimation

### Two-Stage Vision Pipeline

**Stage 1: Object Detection with Grounding DINO**
- Model: IDEA-Research/grounding-dino-tiny (zero-shot object detection)
- Prompts: Multiple text prompts ("cardboard", "cardboard box") to improve recall
- Process:
  1. Image processed with each text prompt
  2. Bounding boxes extracted (confidence threshold: 0.10)
  3. Non-Maximum Suppression applied (IoU: 0.5)
  4. Filtering removes:
     - Large boxes >40% image area (pallet itself)
     - Small boxes <800 pixels² (noise)
  5. Boxes sorted left-to-right for consistent IDs

**Stage 2: Precise Segmentation with FastSAM**
- Model: FastSAM-x (Fast Segment Anything Model)
- Process:
  1. Each bounding box used as segmentation prompt
  2. FastSAM generates pixel-precise binary mask
  3. Oriented Bounding Box calculation:
     - Largest contour extraction
     - Minimum area rectangle fitting (`cv2.minAreaRect()`)
     - Width, height, and rotation angle extraction

**Size Estimation**

*2D Dimensions (Width × Height):*
- Spatial calibration: Image vertical dimension = 150 cm
- Scale factor: `spatial_scale = 150.0 / image_height_pixels` (cm/pixel)
- Conversion: `dimension_cm = dimension_px × spatial_scale`

*Depth Dimension:*
- Randomly generated between 20-30 cm (typical cardboard box range)
- Single 2D image cannot provide actual depth
- Real solution: stereo cameras or depth sensors

**Output:**
- Box IDs: Sequential (1, 2, 3, ...)
- Dimensions: Width × Height × Depth (cm)
- Accuracy: ±2-5 cm for width/height, depth is randomized

---

---

## Stacking Algorithm

### Bottom-Left-Fill with Multi-Layer Stacking

**Algorithm Philosophy:**  
Prioritize stability and space efficiency with safe stacking constraints.

**Process:**

1. **Pre-sorting**
   ```python
   sorted_boxes = sorted(boxes, key=lambda b: b.area(), reverse=True)
   ```
   - Largest boxes first for better stability

2. **Layer Packing (Bottom-Left Heuristic)**
   - For each layer:
     - Try both orientations (0°, 90°) for each box
     - Find bottom-left position in grid
     - Validate: fits within bounds, no overlap, no floating
     - Place box and mark space occupied

3. **Multi-Layer Stacking**
   ```python
   while remaining_boxes:
       layer = pack_single_layer(remaining_boxes)
       if layer is empty:
           break
       layers.append(layer)
   ```



**Metric:**
```python
pallet_fill_percentage = (total_box_area / pallet_area) × 100
```

---

## Architecture

The system consists of 5 ROS2 packages with decoupled service-based architecture:

```
          /trigger_capture
                │
                ▼
      ┌─────────────────────┐
      │  controller_node    │
      │   (Orchestrator)    │
      └──────────┬──────────┘
                 │
  ┌──────────────┼──────────────────┐
  │              │                  │
  ▼              ▼                  ▼
┌──────────┐ ┌──────────┐    ┌──────────┐
│  camera  │ │  vision  │    │  pallet  │
│   node   │ │   node   │    │   node   │
└──────────┘ └──────────┘    └──────────┘
 Service:     Service:        Service:
/get_image  /detect_boxes  /arrange_pallet

All nodes are independent ROS2 services.
Controller orchestrates the pipeline by calling services sequentially:
  1. User → controller (/trigger_capture)
  2. controller → camera (get image)
  3. controller → vision (detect boxes from image)
  4. controller → pallet (arrange boxes on pallet)
```

**Flow:**
1. User → controller (`/trigger_capture`)
2. controller → camera (get image)
3. controller → vision (detect boxes)
4. controller → pallet (arrange boxes)

---

## Usage

### Build
```bash
cd /home/marc/conveyor_packages/ros2_ws
source /opt/ros/jazzy/setup.bash
colcon build
source install/setup.bash
```

### Run (5 Terminals)

**Terminal 1 - Camera:**
```bash
cd /home/marc/conveyor_packages/ros2_ws
source /opt/ros/jazzy/setup.bash
source install/setup.bash
ros2 run camera_node camera_service
```

**Terminal 2 - Vision Node:**
```bash
cd /home/marc/conveyor_packages/ros2_ws
source /opt/ros/jazzy/setup.bash
source install/setup.bash
ros2 run vision_node vision_service
```

**Terminal 3 - Pallet Node:**
```bash
cd /home/marc/conveyor_packages/ros2_ws
source /opt/ros/jazzy/setup.bash
source install/setup.bash
ros2 run pallet_node pallet_service
```

**Terminal 4 - Controller Node:**
```bash
cd /home/marc/conveyor_packages/ros2_ws
source /opt/ros/jazzy/setup.bash
source install/setup.bash
ros2 run controller_node controller
```

**Terminal 5 - Trigger Pipeline (when all nodes ready):**
```bash
cd /home/marc/conveyor_packages/ros2_ws
source /opt/ros/jazzy/setup.bash
source install/setup.bash
ros2 service call /trigger_capture std_srvs/srv/Trigger
```

### Usage - Automated Mode

Run all nodes automatically with the script:

```bash
./run_all.sh
```

This will launch all 4 service nodes in background and wait for manual trigger.

---

---

## Assumptions and Simplifications

### Image Processing
1. **Single 2D view** - Top-down image only, no depth information
2. **Lighting** - Reasonable conditions, shadow removal handles some darkness
3. **Cardboard boxes** - Detection optimized for standard cardboard appearance

### Size Estimation
1. **Fixed spatial scale** - Assumes 150 cm vertical dimension
2. **Random depth** - Generated 20-30 cm (no depth sensor)
3. **Orthogonal boxes** - Assumes boxes roughly aligned with image axes

### Palletizing
1. **Standard pallet** - Fixed 120×80 cm Euro pallet
2. **Uniform weight** - No weight distribution or center of gravity
3. **Rigid boxes** - No deformation under load
4. **No height limit** - Unlimited stacking layers
5. **Perfect placement** - Robot can place exactly at calculated positions

### Algorithm
1. **Greedy approach** - Bottom-Left-Fill is locally optimal, not globally optimal
2. **2D metric** - Utilization measures footprint only, not 3D volume
3. **No stability analysis** - Assumes all configurations stable
4. **Sequential processing** - One box at a time

---

## Author

Marc Arias
mariasmitja@gmail.com
