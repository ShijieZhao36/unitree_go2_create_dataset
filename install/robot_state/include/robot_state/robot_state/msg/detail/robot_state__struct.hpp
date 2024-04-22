// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_state:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_STATE__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
#define ROBOT_STATE__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_state__msg__RobotState __attribute__((deprecated))
#else
# define DEPRECATED__robot_state__msg__RobotState __declspec(deprecated)
#endif

namespace robot_state
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotState_
{
  using Type = RobotState_<ContainerAllocator>;

  explicit RobotState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->foot_force.begin(), this->foot_force.end(), 0);
      std::fill<typename std::array<float, 12>::iterator, float>(this->motor_q.begin(), this->motor_q.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->motor_dq.begin(), this->motor_dq.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->motor_ddq.begin(), this->motor_ddq.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->motor_tau_est.begin(), this->motor_tau_est.end(), 0.0f);
    }
  }

  explicit RobotState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : foot_force(_alloc),
    motor_q(_alloc),
    motor_dq(_alloc),
    motor_ddq(_alloc),
    motor_tau_est(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int16_t, 4>::iterator, int16_t>(this->foot_force.begin(), this->foot_force.end(), 0);
      std::fill<typename std::array<float, 12>::iterator, float>(this->motor_q.begin(), this->motor_q.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->motor_dq.begin(), this->motor_dq.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->motor_ddq.begin(), this->motor_ddq.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->motor_tau_est.begin(), this->motor_tau_est.end(), 0.0f);
    }
  }

  // field types and members
  using _foot_force_type =
    std::array<int16_t, 4>;
  _foot_force_type foot_force;
  using _motor_q_type =
    std::array<float, 12>;
  _motor_q_type motor_q;
  using _motor_dq_type =
    std::array<float, 12>;
  _motor_dq_type motor_dq;
  using _motor_ddq_type =
    std::array<float, 12>;
  _motor_ddq_type motor_ddq;
  using _motor_tau_est_type =
    std::array<float, 12>;
  _motor_tau_est_type motor_tau_est;

  // setters for named parameter idiom
  Type & set__foot_force(
    const std::array<int16_t, 4> & _arg)
  {
    this->foot_force = _arg;
    return *this;
  }
  Type & set__motor_q(
    const std::array<float, 12> & _arg)
  {
    this->motor_q = _arg;
    return *this;
  }
  Type & set__motor_dq(
    const std::array<float, 12> & _arg)
  {
    this->motor_dq = _arg;
    return *this;
  }
  Type & set__motor_ddq(
    const std::array<float, 12> & _arg)
  {
    this->motor_ddq = _arg;
    return *this;
  }
  Type & set__motor_tau_est(
    const std::array<float, 12> & _arg)
  {
    this->motor_tau_est = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_state::msg::RobotState_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_state::msg::RobotState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_state::msg::RobotState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_state::msg::RobotState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_state::msg::RobotState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_state::msg::RobotState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_state::msg::RobotState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_state::msg::RobotState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_state::msg::RobotState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_state::msg::RobotState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_state__msg__RobotState
    std::shared_ptr<robot_state::msg::RobotState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_state__msg__RobotState
    std::shared_ptr<robot_state::msg::RobotState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotState_ & other) const
  {
    if (this->foot_force != other.foot_force) {
      return false;
    }
    if (this->motor_q != other.motor_q) {
      return false;
    }
    if (this->motor_dq != other.motor_dq) {
      return false;
    }
    if (this->motor_ddq != other.motor_ddq) {
      return false;
    }
    if (this->motor_tau_est != other.motor_tau_est) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotState_

// alias to use template instance with default allocator
using RobotState =
  robot_state::msg::RobotState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_state

#endif  // ROBOT_STATE__MSG__DETAIL__ROBOT_STATE__STRUCT_HPP_
