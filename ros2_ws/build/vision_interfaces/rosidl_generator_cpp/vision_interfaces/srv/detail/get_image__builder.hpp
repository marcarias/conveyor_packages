// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vision_interfaces:srv/GetImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vision_interfaces/srv/get_image.hpp"


#ifndef VISION_INTERFACES__SRV__DETAIL__GET_IMAGE__BUILDER_HPP_
#define VISION_INTERFACES__SRV__DETAIL__GET_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vision_interfaces/srv/detail/get_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vision_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_interfaces::srv::GetImage_Request>()
{
  return ::vision_interfaces::srv::GetImage_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace vision_interfaces


namespace vision_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetImage_Response_success
{
public:
  explicit Init_GetImage_Response_success(::vision_interfaces::srv::GetImage_Response & msg)
  : msg_(msg)
  {}
  ::vision_interfaces::srv::GetImage_Response success(::vision_interfaces::srv::GetImage_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_interfaces::srv::GetImage_Response msg_;
};

class Init_GetImage_Response_image
{
public:
  Init_GetImage_Response_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetImage_Response_success image(::vision_interfaces::srv::GetImage_Response::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_GetImage_Response_success(msg_);
  }

private:
  ::vision_interfaces::srv::GetImage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_interfaces::srv::GetImage_Response>()
{
  return vision_interfaces::srv::builder::Init_GetImage_Response_image();
}

}  // namespace vision_interfaces


namespace vision_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetImage_Event_response
{
public:
  explicit Init_GetImage_Event_response(::vision_interfaces::srv::GetImage_Event & msg)
  : msg_(msg)
  {}
  ::vision_interfaces::srv::GetImage_Event response(::vision_interfaces::srv::GetImage_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_interfaces::srv::GetImage_Event msg_;
};

class Init_GetImage_Event_request
{
public:
  explicit Init_GetImage_Event_request(::vision_interfaces::srv::GetImage_Event & msg)
  : msg_(msg)
  {}
  Init_GetImage_Event_response request(::vision_interfaces::srv::GetImage_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetImage_Event_response(msg_);
  }

private:
  ::vision_interfaces::srv::GetImage_Event msg_;
};

class Init_GetImage_Event_info
{
public:
  Init_GetImage_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetImage_Event_request info(::vision_interfaces::srv::GetImage_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetImage_Event_request(msg_);
  }

private:
  ::vision_interfaces::srv::GetImage_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_interfaces::srv::GetImage_Event>()
{
  return vision_interfaces::srv::builder::Init_GetImage_Event_info();
}

}  // namespace vision_interfaces

#endif  // VISION_INTERFACES__SRV__DETAIL__GET_IMAGE__BUILDER_HPP_
