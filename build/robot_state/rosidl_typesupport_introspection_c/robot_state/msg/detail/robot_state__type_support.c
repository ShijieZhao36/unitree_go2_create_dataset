// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_state:msg/RobotState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_state/msg/detail/robot_state__rosidl_typesupport_introspection_c.h"
#include "robot_state/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_state/msg/detail/robot_state__functions.h"
#include "robot_state/msg/detail/robot_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robot_state__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_state__msg__RobotState__init(message_memory);
}

void robot_state__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_fini_function(void * message_memory)
{
  robot_state__msg__RobotState__fini(message_memory);
}

size_t robot_state__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__foot_force(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__foot_force(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__foot_force(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void robot_state__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__foot_force(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__foot_force(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void robot_state__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__foot_force(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__foot_force(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

size_t robot_state__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__motor_q(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__motor_q(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__motor_q(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void robot_state__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__motor_q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__motor_q(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void robot_state__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__motor_q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__motor_q(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t robot_state__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__motor_dq(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__motor_dq(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__motor_dq(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void robot_state__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__motor_dq(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__motor_dq(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void robot_state__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__motor_dq(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__motor_dq(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t robot_state__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__motor_ddq(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__motor_ddq(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__motor_ddq(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void robot_state__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__motor_ddq(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__motor_ddq(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void robot_state__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__motor_ddq(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__motor_ddq(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t robot_state__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__motor_tau_est(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__motor_tau_est(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__motor_tau_est(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void robot_state__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__motor_tau_est(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__motor_tau_est(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void robot_state__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__motor_tau_est(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__motor_tau_est(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember robot_state__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[5] = {
  {
    "foot_force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(robot_state__msg__RobotState, foot_force),  // bytes offset in struct
    NULL,  // default value
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__foot_force,  // size() function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__foot_force,  // get_const(index) function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__foot_force,  // get(index) function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__foot_force,  // fetch(index, &value) function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__foot_force,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_q",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(robot_state__msg__RobotState, motor_q),  // bytes offset in struct
    NULL,  // default value
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__motor_q,  // size() function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__motor_q,  // get_const(index) function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__motor_q,  // get(index) function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__motor_q,  // fetch(index, &value) function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__motor_q,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_dq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(robot_state__msg__RobotState, motor_dq),  // bytes offset in struct
    NULL,  // default value
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__motor_dq,  // size() function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__motor_dq,  // get_const(index) function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__motor_dq,  // get(index) function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__motor_dq,  // fetch(index, &value) function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__motor_dq,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_ddq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(robot_state__msg__RobotState, motor_ddq),  // bytes offset in struct
    NULL,  // default value
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__motor_ddq,  // size() function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__motor_ddq,  // get_const(index) function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__motor_ddq,  // get(index) function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__motor_ddq,  // fetch(index, &value) function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__motor_ddq,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_tau_est",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(robot_state__msg__RobotState, motor_tau_est),  // bytes offset in struct
    NULL,  // default value
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__motor_tau_est,  // size() function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__motor_tau_est,  // get_const(index) function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__motor_tau_est,  // get(index) function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__motor_tau_est,  // fetch(index, &value) function pointer
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__motor_tau_est,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_state__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_members = {
  "robot_state__msg",  // message namespace
  "RobotState",  // message name
  5,  // number of fields
  sizeof(robot_state__msg__RobotState),
  robot_state__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array,  // message members
  robot_state__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_state__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_state__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle = {
  0,
  &robot_state__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_state
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_state, msg, RobotState)() {
  if (!robot_state__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle.typesupport_identifier) {
    robot_state__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_state__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
