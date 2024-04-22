# Introduction
This package collects sensor data from the Unitree  Go2 robot and presents it in the form of a rosbag.
# Installation and Build the Package
Install the unitree_ros2 package by following the instructions at https://github.com/unitreerobotics/unitree_ros2.

Create a workspace directory and move the `src` folder into it. Then, build the package in the workspace direction: 
```
colcon build
```

Before running the nodes, run the following command  in the workspace directory:
```
source ./unitree_ros2_setup.sh
source ./install/setup.sh
```

# Rosbag Data Format

The rosbag data definition is in the `robot_state` package, and the data structure along with the specific meanings of the data are as follows:
```
int16[4] foot_force // forces on four feet
float32[12] motor_q // joint angle
float32[12] motor_dq // joint velocity
float32[12] motor_ddq // joint acceleration
float32[12] motor_tau_est // estimated torque
```
# Create_dataset Package
The `create_dataset` pakage contains three nodes.
### 1. control_speed
This node could control the speed in the x-direction and gait of the robot. Use the following command to run it:
```
ros2 run create_dataset control_speed <vx> <gait>
// <vx>: double, <gait>: int
```
`<vx>` represents the velocity in x direction of the robot. . Additional parameters can also be added to modify the velocity in y-direction `<vy>` and the angular velocity `<vyaw>`. 
However, the angular velocity`<vyaw>` needs to be within the range of [−4,4] rad/s, and `<vx>, <vy>`need to be within [−2.5,−5] m/s.

`<gait>` represents the gait of the robot.The values ranging from 0 to 4, where 0 is idle, 1 is trot, 2 is trot running, 3 is forward climbing mode, and 4 is reverse climbing mode.
### 2. record_data
This node can automatically collect data when running the robot. The data will be stored in the `/workspace_path/dataset` path. Use the following command to run it:
```
ros2 run create_dataset record_data
```

### 3. read_data
This node can read the data from the rosbag. Use the following command to run it:
```
ros2 run create_dataset read_data /path/to/your/dataset
```