// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_state:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_STATE__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
#define ROBOT_STATE__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_state/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_state
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotState & msg,
  std::ostream & out)
{
  out << "{";
  // member: foot_force
  {
    if (msg.foot_force.size() == 0) {
      out << "foot_force: []";
    } else {
      out << "foot_force: [";
      size_t pending_items = msg.foot_force.size();
      for (auto item : msg.foot_force) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: motor_q
  {
    if (msg.motor_q.size() == 0) {
      out << "motor_q: []";
    } else {
      out << "motor_q: [";
      size_t pending_items = msg.motor_q.size();
      for (auto item : msg.motor_q) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: motor_dq
  {
    if (msg.motor_dq.size() == 0) {
      out << "motor_dq: []";
    } else {
      out << "motor_dq: [";
      size_t pending_items = msg.motor_dq.size();
      for (auto item : msg.motor_dq) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: motor_ddq
  {
    if (msg.motor_ddq.size() == 0) {
      out << "motor_ddq: []";
    } else {
      out << "motor_ddq: [";
      size_t pending_items = msg.motor_ddq.size();
      for (auto item : msg.motor_ddq) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: motor_tau_est
  {
    if (msg.motor_tau_est.size() == 0) {
      out << "motor_tau_est: []";
    } else {
      out << "motor_tau_est: [";
      size_t pending_items = msg.motor_tau_est.size();
      for (auto item : msg.motor_tau_est) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: foot_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.foot_force.size() == 0) {
      out << "foot_force: []\n";
    } else {
      out << "foot_force:\n";
      for (auto item : msg.foot_force) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: motor_q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_q.size() == 0) {
      out << "motor_q: []\n";
    } else {
      out << "motor_q:\n";
      for (auto item : msg.motor_q) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: motor_dq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_dq.size() == 0) {
      out << "motor_dq: []\n";
    } else {
      out << "motor_dq:\n";
      for (auto item : msg.motor_dq) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: motor_ddq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_ddq.size() == 0) {
      out << "motor_ddq: []\n";
    } else {
      out << "motor_ddq:\n";
      for (auto item : msg.motor_ddq) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: motor_tau_est
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_tau_est.size() == 0) {
      out << "motor_tau_est: []\n";
    } else {
      out << "motor_tau_est:\n";
      for (auto item : msg.motor_tau_est) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot_state

namespace rosidl_generator_traits
{

[[deprecated("use robot_state::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_state::msg::RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_state::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_state::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_state::msg::RobotState & msg)
{
  return robot_state::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_state::msg::RobotState>()
{
  return "robot_state::msg::RobotState";
}

template<>
inline const char * name<robot_state::msg::RobotState>()
{
  return "robot_state/msg/RobotState";
}

template<>
struct has_fixed_size<robot_state::msg::RobotState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_state::msg::RobotState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_state::msg::RobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_STATE__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
