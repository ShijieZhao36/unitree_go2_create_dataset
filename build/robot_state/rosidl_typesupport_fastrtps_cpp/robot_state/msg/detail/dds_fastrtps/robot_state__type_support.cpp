// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robot_state:msg/RobotState.idl
// generated code does not contain a copyright notice
#include "robot_state/msg/detail/robot_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robot_state/msg/detail/robot_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace robot_state
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_state
cdr_serialize(
  const robot_state::msg::RobotState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: foot_force
  {
    cdr << ros_message.foot_force;
  }
  // Member: motor_q
  {
    cdr << ros_message.motor_q;
  }
  // Member: motor_dq
  {
    cdr << ros_message.motor_dq;
  }
  // Member: motor_ddq
  {
    cdr << ros_message.motor_ddq;
  }
  // Member: motor_tau_est
  {
    cdr << ros_message.motor_tau_est;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_state
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robot_state::msg::RobotState & ros_message)
{
  // Member: foot_force
  {
    cdr >> ros_message.foot_force;
  }

  // Member: motor_q
  {
    cdr >> ros_message.motor_q;
  }

  // Member: motor_dq
  {
    cdr >> ros_message.motor_dq;
  }

  // Member: motor_ddq
  {
    cdr >> ros_message.motor_ddq;
  }

  // Member: motor_tau_est
  {
    cdr >> ros_message.motor_tau_est;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_state
get_serialized_size(
  const robot_state::msg::RobotState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: foot_force
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.foot_force[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_q
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.motor_q[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_dq
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.motor_dq[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_ddq
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.motor_ddq[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_tau_est
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.motor_tau_est[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_state
max_serialized_size_RobotState(
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


  // Member: foot_force
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: motor_q
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor_dq
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor_ddq
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor_tau_est
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
    using DataType = robot_state::msg::RobotState;
    is_plain =
      (
      offsetof(DataType, motor_tau_est) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RobotState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robot_state::msg::RobotState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robot_state::msg::RobotState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robot_state::msg::RobotState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RobotState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RobotState__callbacks = {
  "robot_state::msg",
  "RobotState",
  _RobotState__cdr_serialize,
  _RobotState__cdr_deserialize,
  _RobotState__get_serialized_size,
  _RobotState__max_serialized_size
};

static rosidl_message_type_support_t _RobotState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robot_state

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robot_state
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_state::msg::RobotState>()
{
  return &robot_state::msg::typesupport_fastrtps_cpp::_RobotState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_state, msg, RobotState)() {
  return &robot_state::msg::typesupport_fastrtps_cpp::_RobotState__handle;
}

#ifdef __cplusplus
}
#endif
