// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_state:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_STATE__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
#define ROBOT_STATE__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_state/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_state
{

namespace msg
{

namespace builder
{

class Init_RobotState_motor_tau_est
{
public:
  explicit Init_RobotState_motor_tau_est(::robot_state::msg::RobotState & msg)
  : msg_(msg)
  {}
  ::robot_state::msg::RobotState motor_tau_est(::robot_state::msg::RobotState::_motor_tau_est_type arg)
  {
    msg_.motor_tau_est = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_state::msg::RobotState msg_;
};

class Init_RobotState_motor_ddq
{
public:
  explicit Init_RobotState_motor_ddq(::robot_state::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_motor_tau_est motor_ddq(::robot_state::msg::RobotState::_motor_ddq_type arg)
  {
    msg_.motor_ddq = std::move(arg);
    return Init_RobotState_motor_tau_est(msg_);
  }

private:
  ::robot_state::msg::RobotState msg_;
};

class Init_RobotState_motor_dq
{
public:
  explicit Init_RobotState_motor_dq(::robot_state::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_motor_ddq motor_dq(::robot_state::msg::RobotState::_motor_dq_type arg)
  {
    msg_.motor_dq = std::move(arg);
    return Init_RobotState_motor_ddq(msg_);
  }

private:
  ::robot_state::msg::RobotState msg_;
};

class Init_RobotState_motor_q
{
public:
  explicit Init_RobotState_motor_q(::robot_state::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_motor_dq motor_q(::robot_state::msg::RobotState::_motor_q_type arg)
  {
    msg_.motor_q = std::move(arg);
    return Init_RobotState_motor_dq(msg_);
  }

private:
  ::robot_state::msg::RobotState msg_;
};

class Init_RobotState_foot_force
{
public:
  Init_RobotState_foot_force()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotState_motor_q foot_force(::robot_state::msg::RobotState::_foot_force_type arg)
  {
    msg_.foot_force = std::move(arg);
    return Init_RobotState_motor_q(msg_);
  }

private:
  ::robot_state::msg::RobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_state::msg::RobotState>()
{
  return robot_state::msg::builder::Init_RobotState_foot_force();
}

}  // namespace robot_state

#endif  // ROBOT_STATE__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
