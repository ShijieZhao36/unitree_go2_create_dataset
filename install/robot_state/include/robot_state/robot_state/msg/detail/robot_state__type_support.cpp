// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robot_state:msg/RobotState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_state/msg/detail/robot_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_state
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RobotState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_state::msg::RobotState(_init);
}

void RobotState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_state::msg::RobotState *>(message_memory);
  typed_message->~RobotState();
}

size_t size_function__RobotState__foot_force(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__RobotState__foot_force(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotState__foot_force(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotState__foot_force(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int16_t *>(
    get_const_function__RobotState__foot_force(untyped_member, index));
  auto & value = *reinterpret_cast<int16_t *>(untyped_value);
  value = item;
}

void assign_function__RobotState__foot_force(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int16_t *>(
    get_function__RobotState__foot_force(untyped_member, index));
  const auto & value = *reinterpret_cast<const int16_t *>(untyped_value);
  item = value;
}

size_t size_function__RobotState__motor_q(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__RobotState__motor_q(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotState__motor_q(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotState__motor_q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RobotState__motor_q(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RobotState__motor_q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RobotState__motor_q(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__RobotState__motor_dq(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__RobotState__motor_dq(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotState__motor_dq(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotState__motor_dq(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RobotState__motor_dq(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RobotState__motor_dq(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RobotState__motor_dq(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__RobotState__motor_ddq(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__RobotState__motor_ddq(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotState__motor_ddq(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotState__motor_ddq(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RobotState__motor_ddq(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RobotState__motor_ddq(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RobotState__motor_ddq(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__RobotState__motor_tau_est(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__RobotState__motor_tau_est(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotState__motor_tau_est(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotState__motor_tau_est(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__RobotState__motor_tau_est(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__RobotState__motor_tau_est(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__RobotState__motor_tau_est(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotState_message_member_array[5] = {
  {
    "foot_force",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(robot_state::msg::RobotState, foot_force),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotState__foot_force,  // size() function pointer
    get_const_function__RobotState__foot_force,  // get_const(index) function pointer
    get_function__RobotState__foot_force,  // get(index) function pointer
    fetch_function__RobotState__foot_force,  // fetch(index, &value) function pointer
    assign_function__RobotState__foot_force,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motor_q",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(robot_state::msg::RobotState, motor_q),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotState__motor_q,  // size() function pointer
    get_const_function__RobotState__motor_q,  // get_const(index) function pointer
    get_function__RobotState__motor_q,  // get(index) function pointer
    fetch_function__RobotState__motor_q,  // fetch(index, &value) function pointer
    assign_function__RobotState__motor_q,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motor_dq",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(robot_state::msg::RobotState, motor_dq),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotState__motor_dq,  // size() function pointer
    get_const_function__RobotState__motor_dq,  // get_const(index) function pointer
    get_function__RobotState__motor_dq,  // get(index) function pointer
    fetch_function__RobotState__motor_dq,  // fetch(index, &value) function pointer
    assign_function__RobotState__motor_dq,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motor_ddq",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(robot_state::msg::RobotState, motor_ddq),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotState__motor_ddq,  // size() function pointer
    get_const_function__RobotState__motor_ddq,  // get_const(index) function pointer
    get_function__RobotState__motor_ddq,  // get(index) function pointer
    fetch_function__RobotState__motor_ddq,  // fetch(index, &value) function pointer
    assign_function__RobotState__motor_ddq,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motor_tau_est",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(robot_state::msg::RobotState, motor_tau_est),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotState__motor_tau_est,  // size() function pointer
    get_const_function__RobotState__motor_tau_est,  // get_const(index) function pointer
    get_function__RobotState__motor_tau_est,  // get(index) function pointer
    fetch_function__RobotState__motor_tau_est,  // fetch(index, &value) function pointer
    assign_function__RobotState__motor_tau_est,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotState_message_members = {
  "robot_state::msg",  // message namespace
  "RobotState",  // message name
  5,  // number of fields
  sizeof(robot_state::msg::RobotState),
  RobotState_message_member_array,  // message members
  RobotState_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robot_state


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_state::msg::RobotState>()
{
  return &::robot_state::msg::rosidl_typesupport_introspection_cpp::RobotState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_state, msg, RobotState)() {
  return &::robot_state::msg::rosidl_typesupport_introspection_cpp::RobotState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
