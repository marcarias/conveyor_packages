// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vision_interfaces:srv/DetectBoxes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vision_interfaces/srv/detect_boxes.hpp"


#ifndef VISION_INTERFACES__SRV__DETAIL__DETECT_BOXES__BUILDER_HPP_
#define VISION_INTERFACES__SRV__DETAIL__DETECT_BOXES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vision_interfaces/srv/detail/detect_boxes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vision_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectBoxes_Request_image
{
public:
  Init_DetectBoxes_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vision_interfaces::srv::DetectBoxes_Request image(::vision_interfaces::srv::DetectBoxes_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_interfaces::srv::DetectBoxes_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_interfaces::srv::DetectBoxes_Request>()
{
  return vision_interfaces::srv::builder::Init_DetectBoxes_Request_image();
}

}  // namespace vision_interfaces


namespace vision_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectBoxes_Response_success
{
public:
  explicit Init_DetectBoxes_Response_success(::vision_interfaces::srv::DetectBoxes_Response & msg)
  : msg_(msg)
  {}
  ::vision_interfaces::srv::DetectBoxes_Response success(::vision_interfaces::srv::DetectBoxes_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_interfaces::srv::DetectBoxes_Response msg_;
};

class Init_DetectBoxes_Response_depths
{
public:
  explicit Init_DetectBoxes_Response_depths(::vision_interfaces::srv::DetectBoxes_Response & msg)
  : msg_(msg)
  {}
  Init_DetectBoxes_Response_success depths(::vision_interfaces::srv::DetectBoxes_Response::_depths_type arg)
  {
    msg_.depths = std::move(arg);
    return Init_DetectBoxes_Response_success(msg_);
  }

private:
  ::vision_interfaces::srv::DetectBoxes_Response msg_;
};

class Init_DetectBoxes_Response_heights
{
public:
  explicit Init_DetectBoxes_Response_heights(::vision_interfaces::srv::DetectBoxes_Response & msg)
  : msg_(msg)
  {}
  Init_DetectBoxes_Response_depths heights(::vision_interfaces::srv::DetectBoxes_Response::_heights_type arg)
  {
    msg_.heights = std::move(arg);
    return Init_DetectBoxes_Response_depths(msg_);
  }

private:
  ::vision_interfaces::srv::DetectBoxes_Response msg_;
};

class Init_DetectBoxes_Response_widths
{
public:
  explicit Init_DetectBoxes_Response_widths(::vision_interfaces::srv::DetectBoxes_Response & msg)
  : msg_(msg)
  {}
  Init_DetectBoxes_Response_heights widths(::vision_interfaces::srv::DetectBoxes_Response::_widths_type arg)
  {
    msg_.widths = std::move(arg);
    return Init_DetectBoxes_Response_heights(msg_);
  }

private:
  ::vision_interfaces::srv::DetectBoxes_Response msg_;
};

class Init_DetectBoxes_Response_box_ids
{
public:
  Init_DetectBoxes_Response_box_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectBoxes_Response_widths box_ids(::vision_interfaces::srv::DetectBoxes_Response::_box_ids_type arg)
  {
    msg_.box_ids = std::move(arg);
    return Init_DetectBoxes_Response_widths(msg_);
  }

private:
  ::vision_interfaces::srv::DetectBoxes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_interfaces::srv::DetectBoxes_Response>()
{
  return vision_interfaces::srv::builder::Init_DetectBoxes_Response_box_ids();
}

}  // namespace vision_interfaces


namespace vision_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectBoxes_Event_response
{
public:
  explicit Init_DetectBoxes_Event_response(::vision_interfaces::srv::DetectBoxes_Event & msg)
  : msg_(msg)
  {}
  ::vision_interfaces::srv::DetectBoxes_Event response(::vision_interfaces::srv::DetectBoxes_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_interfaces::srv::DetectBoxes_Event msg_;
};

class Init_DetectBoxes_Event_request
{
public:
  explicit Init_DetectBoxes_Event_request(::vision_interfaces::srv::DetectBoxes_Event & msg)
  : msg_(msg)
  {}
  Init_DetectBoxes_Event_response request(::vision_interfaces::srv::DetectBoxes_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DetectBoxes_Event_response(msg_);
  }

private:
  ::vision_interfaces::srv::DetectBoxes_Event msg_;
};

class Init_DetectBoxes_Event_info
{
public:
  Init_DetectBoxes_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectBoxes_Event_request info(::vision_interfaces::srv::DetectBoxes_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_DetectBoxes_Event_request(msg_);
  }

private:
  ::vision_interfaces::srv::DetectBoxes_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_interfaces::srv::DetectBoxes_Event>()
{
  return vision_interfaces::srv::builder::Init_DetectBoxes_Event_info();
}

}  // namespace vision_interfaces

#endif  // VISION_INTERFACES__SRV__DETAIL__DETECT_BOXES__BUILDER_HPP_
