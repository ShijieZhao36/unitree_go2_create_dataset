#include <unistd.h>
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "unitree_go/msg/sport_mode_state.hpp"

#include "unitree_api/msg/request.hpp"
#include "common/ros2_sport_client.h"

using std::placeholders::_1;
// Create a soprt_request class for soprt commond request
class soprt_request : public rclcpp::Node
{
public:
    soprt_request(double vx_input,int gait_input) : Node("req_sender"),vx(vx_input),gait(gait_input)
    {
        // the state_suber is set to subscribe "sportmodestate" topic
        state_suber = this->create_subscription<unitree_go::msg::SportModeState>(
            "sportmodestate", 10, std::bind(&soprt_request::state_callback, this, _1));
        // the req_puber is set to subscribe "/api/sport/request" topic with dt
        req_puber = this->create_publisher<unitree_api::msg::Request>("/api/sport/request", 10);
        timer_ = this->create_wall_timer(std::chrono::milliseconds(int(dt * 1000)), std::bind(&soprt_request::timer_callback, this));

        t = -1; // Runing time count
    };

private:
    void timer_callback()
    {
        t += dt;
        if (t > 0)
        {
            sport_req.SwitchGait(req, gait);
            sport_req.Move(req, vx, vy, vyaw);
            // Publish request messages
            req_puber->publish(req);
        }
    };

    void state_callback(unitree_go::msg::SportModeState::SharedPtr data)
    {
        // Get current position of robot when t<0
        // This position is used as the initial coordinate system

        if (t < 0)
        {
            // Get initial position
            px0 = data->position[0];
            py0 = data->position[1];
            yaw0 = data->imu_state.rpy[2];
            std::cout << px0 << ", " << py0 << ", " << yaw0 << std::endl;
        }
    }

    rclcpp::Subscription<unitree_go::msg::SportModeState>::SharedPtr state_suber;

    rclcpp::TimerBase::SharedPtr timer_; // ROS2 timer
    rclcpp::Publisher<unitree_api::msg::Request>::SharedPtr req_puber;

    unitree_api::msg::Request req; // Unitree Go2 ROS2 request message
    SportClient sport_req;

    double t; // runing time count
    double dt = 0.002; //control time step

    double px0 = 0;  // initial x position
    double py0 = 0;  // initial y position
    double yaw0 = 0; // initial yaw angle

    double vx = 0.0;
    double vy = 0.0;
    double vyaw = 0.0;
    int gait = 0;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv); // Initialize rclcpp
    rclcpp::TimerBase::SharedPtr timer_; // Create a timer callback object to send sport request in time intervals

    // Check for correct number of command-line arguments
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <vx>, <gait>" << std::endl;
        return 1;
    }
    double vx = std::stod(argv[1]);
    int gait = std::stoi(argv[2]);

    rclcpp::spin(std::make_shared<soprt_request>(vx,gait)); //Run ROS2 node

    rclcpp::shutdown();
    return 0;
}
