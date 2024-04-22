// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robot_state:msg/RobotState.idl
// generated code does not contain a copyright notice
#include "robot_state/msg/detail/robot_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robot_state/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robot_state/msg/detail/robot_state__struct.h"
#include "robot_state/msg/detail/robot_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RobotState__ros_msg_type = robot_state__msg__RobotState;

static bool _RobotState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RobotState__ros_msg_type * ros_message = static_cast<const _RobotState__ros_msg_type *>(untyped_ros_message);
  // Field name: foot_force
  {
    size_t size = 4;
    auto array_ptr = ros_message->foot_force;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: motor_q
  {
    size_t size = 12;
    auto array_ptr = ros_message->motor_q;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: motor_dq
  {
    size_t size = 12;
    auto array_ptr = ros_message->motor_dq;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: motor_ddq
  {
    size_t size = 12;
    auto array_ptr = ros_message->motor_ddq;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: motor_tau_est
  {
    size_t size = 12;
    auto array_ptr = ros_message->motor_tau_est;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _RobotState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RobotState__ros_msg_type * ros_message = static_cast<_RobotState__ros_msg_type *>(untyped_ros_message);
  // Field name: foot_force
  {
    size_t size = 4;
    auto array_ptr = ros_message->foot_force;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: motor_q
  {
    size_t size = 12;
    auto array_ptr = ros_message->motor_q;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: motor_dq
  {
    size_t size = 12;
    auto array_ptr = ros_message->motor_dq;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: motor_ddq
  {
    size_t size = 12;
    auto array_ptr = ros_message->motor_ddq;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: motor_tau_est
  {
    size_t size = 12;
    auto array_ptr = ros_message->motor_tau_est;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_state
size_t get_serialized_size_robot_state__msg__RobotState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RobotState__ros_msg_type * ros_message = static_cast<const _RobotState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name foot_force
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->foot_force;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_q
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->motor_q;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_dq
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->motor_dq;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_ddq
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->motor_ddq;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_tau_est
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->motor_tau_est;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RobotState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robot_state__msg__RobotState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_state
size_t max_serialized_size_robot_state__msg__RobotState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: foot_force
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: motor_q
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor_dq
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor_ddq
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor_tau_est
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robot_state__msg__RobotState;
    is_plain =
      (
      offsetof(DataType, motor_tau_est) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RobotState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robot_state__msg__RobotState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RobotState = {
  "robot_state::msg",
  "RobotState",
  _RobotState__cdr_serialize,
  _RobotState__cdr_deserialize,
  _RobotState__get_serialized_size,
  _RobotState__max_serialized_size
};

static rosidl_message_type_support_t _RobotState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RobotState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_state, msg, RobotState)() {
  return &_RobotState__type_support;
}

#if defined(__cplusplus)
}
#endif
