// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vision_interfaces:srv/DetectBoxes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vision_interfaces/srv/detect_boxes.hpp"


#ifndef VISION_INTERFACES__SRV__DETAIL__DETECT_BOXES__TRAITS_HPP_
#define VISION_INTERFACES__SRV__DETAIL__DETECT_BOXES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vision_interfaces/srv/detail/detect_boxes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace vision_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectBoxes_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectBoxes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectBoxes_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace vision_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use vision_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vision_interfaces::srv::DetectBoxes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  vision_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vision_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const vision_interfaces::srv::DetectBoxes_Request & msg)
{
  return vision_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vision_interfaces::srv::DetectBoxes_Request>()
{
  return "vision_interfaces::srv::DetectBoxes_Request";
}

template<>
inline const char * name<vision_interfaces::srv::DetectBoxes_Request>()
{
  return "vision_interfaces/srv/DetectBoxes_Request";
}

template<>
struct has_fixed_size<vision_interfaces::srv::DetectBoxes_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<vision_interfaces::srv::DetectBoxes_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<vision_interfaces::srv::DetectBoxes_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace vision_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectBoxes_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: box_ids
  {
    if (msg.box_ids.size() == 0) {
      out << "box_ids: []";
    } else {
      out << "box_ids: [";
      size_t pending_items = msg.box_ids.size();
      for (auto item : msg.box_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: widths
  {
    if (msg.widths.size() == 0) {
      out << "widths: []";
    } else {
      out << "widths: [";
      size_t pending_items = msg.widths.size();
      for (auto item : msg.widths) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: heights
  {
    if (msg.heights.size() == 0) {
      out << "heights: []";
    } else {
      out << "heights: [";
      size_t pending_items = msg.heights.size();
      for (auto item : msg.heights) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: depths
  {
    if (msg.depths.size() == 0) {
      out << "depths: []";
    } else {
      out << "depths: [";
      size_t pending_items = msg.depths.size();
      for (auto item : msg.depths) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectBoxes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: box_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.box_ids.size() == 0) {
      out << "box_ids: []\n";
    } else {
      out << "box_ids:\n";
      for (auto item : msg.box_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: widths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.widths.size() == 0) {
      out << "widths: []\n";
    } else {
      out << "widths:\n";
      for (auto item : msg.widths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: heights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.heights.size() == 0) {
      out << "heights: []\n";
    } else {
      out << "heights:\n";
      for (auto item : msg.heights) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: depths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.depths.size() == 0) {
      out << "depths: []\n";
    } else {
      out << "depths:\n";
      for (auto item : msg.depths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectBoxes_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace vision_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use vision_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vision_interfaces::srv::DetectBoxes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  vision_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vision_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const vision_interfaces::srv::DetectBoxes_Response & msg)
{
  return vision_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vision_interfaces::srv::DetectBoxes_Response>()
{
  return "vision_interfaces::srv::DetectBoxes_Response";
}

template<>
inline const char * name<vision_interfaces::srv::DetectBoxes_Response>()
{
  return "vision_interfaces/srv/DetectBoxes_Response";
}

template<>
struct has_fixed_size<vision_interfaces::srv::DetectBoxes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vision_interfaces::srv::DetectBoxes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vision_interfaces::srv::DetectBoxes_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace vision_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectBoxes_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
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
  const DetectBoxes_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectBoxes_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace vision_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use vision_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vision_interfaces::srv::DetectBoxes_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  vision_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vision_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const vision_interfaces::srv::DetectBoxes_Event & msg)
{
  return vision_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vision_interfaces::srv::DetectBoxes_Event>()
{
  return "vision_interfaces::srv::DetectBoxes_Event";
}

template<>
inline const char * name<vision_interfaces::srv::DetectBoxes_Event>()
{
  return "vision_interfaces/srv/DetectBoxes_Event";
}

template<>
struct has_fixed_size<vision_interfaces::srv::DetectBoxes_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vision_interfaces::srv::DetectBoxes_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<vision_interfaces::srv::DetectBoxes_Request>::value && has_bounded_size<vision_interfaces::srv::DetectBoxes_Response>::value> {};

template<>
struct is_message<vision_interfaces::srv::DetectBoxes_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vision_interfaces::srv::DetectBoxes>()
{
  return "vision_interfaces::srv::DetectBoxes";
}

template<>
inline const char * name<vision_interfaces::srv::DetectBoxes>()
{
  return "vision_interfaces/srv/DetectBoxes";
}

template<>
struct has_fixed_size<vision_interfaces::srv::DetectBoxes>
  : std::integral_constant<
    bool,
    has_fixed_size<vision_interfaces::srv::DetectBoxes_Request>::value &&
    has_fixed_size<vision_interfaces::srv::DetectBoxes_Response>::value
  >
{
};

template<>
struct has_bounded_size<vision_interfaces::srv::DetectBoxes>
  : std::integral_constant<
    bool,
    has_bounded_size<vision_interfaces::srv::DetectBoxes_Request>::value &&
    has_bounded_size<vision_interfaces::srv::DetectBoxes_Response>::value
  >
{
};

template<>
struct is_service<vision_interfaces::srv::DetectBoxes>
  : std::true_type
{
};

template<>
struct is_service_request<vision_interfaces::srv::DetectBoxes_Request>
  : std::true_type
{
};

template<>
struct is_service_response<vision_interfaces::srv::DetectBoxes_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VISION_INTERFACES__SRV__DETAIL__DETECT_BOXES__TRAITS_HPP_
