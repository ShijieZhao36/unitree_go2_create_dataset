#include <chrono>
#include <functional>
#include <iostream>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp/serialization.hpp"
#include "rosbag2_cpp/reader.hpp"
#include "unitree_go/msg/low_state.hpp"
#include "unitree_go/msg/imu_state.hpp"
#include "unitree_go/msg/motor_state.hpp"
#include "robot_state/msg/robot_state.hpp"

using namespace std::chrono_literals;

class PlaybackNode : public rclcpp::Node
{
  public:
    PlaybackNode(const std::string & bag_filename)
    : Node("playback_node")
    {
      publisher_ = this->create_publisher<robot_state::msg::RobotState>("/dataset", 10);
      timer_ = this->create_wall_timer(
          1000ms, std::bind(&PlaybackNode::timer_callback, this));

      reader_.open(bag_filename);
      count = 0;
    }

  private:
    void timer_callback()
    {
      if (reader_.has_next()) {
        rosbag2_storage::SerializedBagMessageSharedPtr msg = reader_.read_next();

        // if (msg->topic_name != "/dataset") {
        //   continue;
        // }
        count++;
        rclcpp::SerializedMessage serialized_msg(*msg->serialized_data);
        robot_state::msg::RobotState::SharedPtr data_point = std::make_shared<robot_state::msg::RobotState>();

        serialization_.deserialize_message(&serialized_msg, data_point.get());

        publisher_->publish(*data_point);
        //int i=0;
        // RCLCPP_INFO(this->get_logger(), "Motor state -- num: %d; q: %f; dq: %f; ddq: %f; tau: %f",
        //           i, data_point->motor_q[i], data_point->motor_dq[i], data_point->motor_ddq[i], data_point->motor_tau_est[i]);
        RCLCPP_INFO(this->get_logger(),"num:%d",count);
          //break;
      }
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<robot_state::msg::RobotState>::SharedPtr publisher_;

    rclcpp::Serialization<robot_state::msg::RobotState> serialization_;
    rosbag2_cpp::Reader reader_;
    int count;
    };


int main(int argc, char ** argv)
{
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <bag>" << std::endl;
    return 1;
  }

  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PlaybackNode>(argv[1]));
  rclcpp::shutdown();

  return 0;
}