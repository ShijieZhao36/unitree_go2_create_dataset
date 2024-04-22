// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_state:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_STATE__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
#define ROBOT_STATE__MSG__DETAIL__ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RobotState in the package robot_state.
typedef struct robot_state__msg__RobotState
{
  int16_t foot_force[4];
  float motor_q[12];
  float motor_dq[12];
  float motor_ddq[12];
  float motor_tau_est[12];
} robot_state__msg__RobotState;

// Struct for a sequence of robot_state__msg__RobotState.
typedef struct robot_state__msg__RobotState__Sequence
{
  robot_state__msg__RobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_state__msg__RobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_STATE__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
