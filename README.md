# pairs_octomap_planner

The path-planning component of the PAIRS mapping-and-planning stack. It searches an OctoMap occupancy grid with an A* planner to produce collision-free paths to a goal, then hands the resulting path off to the PAIRS trajectory trackers. It consumes the map published by `pairs_octomap_server` and builds on `pairs_subt_planning_lib`, and offers both a full-featured and a minimal planner.

## Contents

- **`OctomapPlanner` nodelet** (`pairs_octomap_planner/OctomapPlanner`) — full planner with replanning over the live OctoMap
- **`MinimalOctomapPlanner` nodelet** (`pairs_octomap_planner/MinimalOctomapPlanner`) — stripped-down planner for simpler use cases
- **A\* planner core** (`astar_planner.cpp`) — grid search over the occupancy map with Euclidean-distance-transform (EDT) clearance
- **`Path.srv`** — service to request a planned path
- Launch files `octomap_planner.launch`, `minimal_planner.launch`

## Branches

- `ros1` — ROS 1 Noetic (catkin)
- `ros2` — ROS 2 Jazzy (ament_cmake)

## Install (ROS 1 Noetic)

```bash
sudo apt install ros-noetic-pairs-octomap-planner
```

## Usage

```bash
roslaunch pairs_octomap_planner octomap_planner.launch
```

## License

BSD 3-Clause. Derived from the CTU-MRS `pairs_octomap_planner` package; the original
copyright is retained in [LICENSE](LICENSE).
