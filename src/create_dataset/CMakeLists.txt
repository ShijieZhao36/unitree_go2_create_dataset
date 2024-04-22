cmake_minimum_required(VERSION 3.8)
project(create_dataset)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(unitree_go REQUIRED)
find_package(unitree_api REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosbag2_cpp REQUIRED)
find_package(robot_state REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

include_directories(
  include
  ${PROJECT_SOURCE_DIR}/include/common 
)

add_executable(record_data src/record_data.cpp)
ament_target_dependencies(record_data unitree_go unitree_api rclcpp std_msgs rosbag2_cpp robot_state)
add_executable(control_speed src/control_speed.cpp src/common/ros2_sport_client.cpp)
ament_target_dependencies(control_speed unitree_go unitree_api rclcpp std_msgs rosbag2_cpp)
add_executable(read_data src/read_data.cpp)
ament_target_dependencies(read_data unitree_go unitree_api rclcpp std_msgs rosbag2_cpp robot_state)

install(TARGETS
  record_data
  control_speed
  read_data
  DESTINATION lib/${PROJECT_NAME})


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
