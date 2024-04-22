/**
 * This example demonstrates how to use ROS2 to receive low states of unitree go2 robot
 **/
#include "rclcpp/rclcpp.hpp"
#include "unitree_go/msg/low_state.hpp"
#include "unitree_go/msg/imu_state.hpp"
#include "unitree_go/msg/motor_state.hpp"
#include "robot_state/msg/robot_state.hpp"

#include <rosbag2_cpp/writer.hpp>


#define HIGH_FREQ 0 // Set 1 to subscribe to low states with high frequencies (500Hz)

using std::placeholders::_1;

class low_state_record : public rclcpp::Node
{
public:
  low_state_record() : Node("low_state_record")
  {
    // suber is set to subscribe "/lowcmd" or  "lf/lowstate" (low frequencies) topic
    auto topic_name = "lf/lowstate";
    if (HIGH_FREQ)
    {
      topic_name = "lowstate";
    }
    // The suber  callback function is bind to low_state_record::topic_callback
    suber = this->create_subscription<unitree_go::msg::LowState>(
        topic_name, 10, std::bind(&low_state_record::topic_callback, this, _1));
    
    writer_ = std::make_unique<rosbag2_cpp::Writer>();

    writer_->open("dataset");
    writer_->create_topic(
      {"synthetic",
       "robot_state/msg/RobotState",
       rmw_get_serialization_format(),
       ""});
  }

private:
  void topic_callback(unitree_go::msg::LowState::SharedPtr data) //unitree_go::msg::LowState::SharedPtr data
  {
    robot_state::msg::RobotState data_point;

    // Info motor states
    // q: angluar (rad)
    // dq: angluar velocity (rad/s)
    // ddq: angluar acceleration (rad/(s^2))
    // tau_est: Estimated external torque

    for (int i = 0; i < 12; i++)
    {
      data_point.motor_q[i] = data->motor_state[i].q;
      data_point.motor_dq[i] = data->motor_state[i].dq;
      data_point.motor_ddq[i] = data->motor_state[i].ddq;
      data_point.motor_tau_est[i] = data->motor_state[i].tau_est;
      RCLCPP_INFO(this->get_logger(), "Motor state -- num: %d; q: %f; dq: %f; ddq: %f; tau: %f",
                  i, data_point.motor_q[i], data_point.motor_dq[i], data_point.motor_ddq[i], data_point.motor_tau_est[i]);
    }
    
    // Info foot force value (int not true value)
    for (int i = 0; i < 4; i++)
    {
      //foot_force[i] = data->foot_force[i];
      //foot_force_est[i] = data->foot_force_est[i];
      data_point.foot_force[i] = data->foot_force[i];

    }

    RCLCPP_INFO(this->get_logger(), "Foot force -- foot0: %d; foot1: %d; foot2: %d; foot3: %d",
                data_point.foot_force[0], data_point.foot_force[1], data_point.foot_force[2], data_point.foot_force[3]);
    // RCLCPP_INFO(this->get_logger(), "Estimated foot force -- foot0: %d; foot1: %d; foot2: %d; foot3: %d",
    //             foot_force_est[0], foot_force_est[1], foot_force_est[2], foot_force_est[3]);
    

    // record the data
    rclcpp::Time time_stamp = this->now();

    writer_->write(data_point, "synthetic", time_stamp);
  }

  // Create the suber  to receive low state of robot
  rclcpp::Subscription<unitree_go::msg::LowState>::SharedPtr suber;

  // unitree_go::msg::IMUState imu;         // Unitree go2 IMU message
  // unitree_go::msg::MotorState motor[12]; // Unitree go2 motor state message
  // int16_t foot_force[4];                 // External contact force value (int)
  // int16_t foot_force_est[4];             // Estimated  external contact force value (int)
  // float battery_voltage;                 // Battery voltage
  // float battery_current;                 // Battery current

  std::unique_ptr<rosbag2_cpp::Writer> writer_;
};

int main(int argc, char *argv[]){
  rclcpp::init(argc, argv);                          // Initialize rclcpp
  rclcpp::spin(std::make_shared<low_state_record>()); // Run ROS2 node which is make share with low_state_record class
  rclcpp::shutdown();
  return 0;
}
