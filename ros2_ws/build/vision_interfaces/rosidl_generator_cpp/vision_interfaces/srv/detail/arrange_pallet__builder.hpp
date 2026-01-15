// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vision_interfaces:srv/ArrangePallet.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vision_interfaces/srv/arrange_pallet.hpp"


#ifndef VISION_INTERFACES__SRV__DETAIL__ARRANGE_PALLET__BUILDER_HPP_
#define VISION_INTERFACES__SRV__DETAIL__ARRANGE_PALLET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vision_interfaces/srv/detail/arrange_pallet__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vision_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArrangePallet_Request_depths
{
public:
  explicit Init_ArrangePallet_Request_depths(::vision_interfaces::srv::ArrangePallet_Request & msg)
  : msg_(msg)
  {}
  ::vision_interfaces::srv::ArrangePallet_Request depths(::vision_interfaces::srv::ArrangePallet_Request::_depths_type arg)
  {
    msg_.depths = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_interfaces::srv::ArrangePallet_Request msg_;
};

class Init_ArrangePallet_Request_heights
{
public:
  explicit Init_ArrangePallet_Request_heights(::vision_interfaces::srv::ArrangePallet_Request & msg)
  : msg_(msg)
  {}
  Init_ArrangePallet_Request_depths heights(::vision_interfaces::srv::ArrangePallet_Request::_heights_type arg)
  {
    msg_.heights = std::move(arg);
    return Init_ArrangePallet_Request_depths(msg_);
  }

private:
  ::vision_interfaces::srv::ArrangePallet_Request msg_;
};

class Init_ArrangePallet_Request_widths
{
public:
  explicit Init_ArrangePallet_Request_widths(::vision_interfaces::srv::ArrangePallet_Request & msg)
  : msg_(msg)
  {}
  Init_ArrangePallet_Request_heights widths(::vision_interfaces::srv::ArrangePallet_Request::_widths_type arg)
  {
    msg_.widths = std::move(arg);
    return Init_ArrangePallet_Request_heights(msg_);
  }

private:
  ::vision_interfaces::srv::ArrangePallet_Request msg_;
};

class Init_ArrangePallet_Request_box_ids
{
public:
  Init_ArrangePallet_Request_box_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArrangePallet_Request_widths box_ids(::vision_interfaces::srv::ArrangePallet_Request::_box_ids_type arg)
  {
    msg_.box_ids = std::move(arg);
    return Init_ArrangePallet_Request_widths(msg_);
  }

private:
  ::vision_interfaces::srv::ArrangePallet_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_interfaces::srv::ArrangePallet_Request>()
{
  return vision_interfaces::srv::builder::Init_ArrangePallet_Request_box_ids();
}

}  // namespace vision_interfaces


namespace vision_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArrangePallet_Response_success
{
public:
  explicit Init_ArrangePallet_Response_success(::vision_interfaces::srv::ArrangePallet_Response & msg)
  : msg_(msg)
  {}
  ::vision_interfaces::srv::ArrangePallet_Response success(::vision_interfaces::srv::ArrangePallet_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_interfaces::srv::ArrangePallet_Response msg_;
};

class Init_ArrangePallet_Response_pallet_fill_percentage
{
public:
  explicit Init_ArrangePallet_Response_pallet_fill_percentage(::vision_interfaces::srv::ArrangePallet_Response & msg)
  : msg_(msg)
  {}
  Init_ArrangePallet_Response_success pallet_fill_percentage(::vision_interfaces::srv::ArrangePallet_Response::_pallet_fill_percentage_type arg)
  {
    msg_.pallet_fill_percentage = std::move(arg);
    return Init_ArrangePallet_Response_success(msg_);
  }

private:
  ::vision_interfaces::srv::ArrangePallet_Response msg_;
};

class Init_ArrangePallet_Response_total_layers
{
public:
  explicit Init_ArrangePallet_Response_total_layers(::vision_interfaces::srv::ArrangePallet_Response & msg)
  : msg_(msg)
  {}
  Init_ArrangePallet_Response_pallet_fill_percentage total_layers(::vision_interfaces::srv::ArrangePallet_Response::_total_layers_type arg)
  {
    msg_.total_layers = std::move(arg);
    return Init_ArrangePallet_Response_pallet_fill_percentage(msg_);
  }

private:
  ::vision_interfaces::srv::ArrangePallet_Response msg_;
};

class Init_ArrangePallet_Response_layer_descriptions
{
public:
  explicit Init_ArrangePallet_Response_layer_descriptions(::vision_interfaces::srv::ArrangePallet_Response & msg)
  : msg_(msg)
  {}
  Init_ArrangePallet_Response_total_layers layer_descriptions(::vision_interfaces::srv::ArrangePallet_Response::_layer_descriptions_type arg)
  {
    msg_.layer_descriptions = std::move(arg);
    return Init_ArrangePallet_Response_total_layers(msg_);
  }

private:
  ::vision_interfaces::srv::ArrangePallet_Response msg_;
};

class Init_ArrangePallet_Response_strategy
{
public:
  Init_ArrangePallet_Response_strategy()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArrangePallet_Response_layer_descriptions strategy(::vision_interfaces::srv::ArrangePallet_Response::_strategy_type arg)
  {
    msg_.strategy = std::move(arg);
    return Init_ArrangePallet_Response_layer_descriptions(msg_);
  }

private:
  ::vision_interfaces::srv::ArrangePallet_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_interfaces::srv::ArrangePallet_Response>()
{
  return vision_interfaces::srv::builder::Init_ArrangePallet_Response_strategy();
}

}  // namespace vision_interfaces


namespace vision_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArrangePallet_Event_response
{
public:
  explicit Init_ArrangePallet_Event_response(::vision_interfaces::srv::ArrangePallet_Event & msg)
  : msg_(msg)
  {}
  ::vision_interfaces::srv::ArrangePallet_Event response(::vision_interfaces::srv::ArrangePallet_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_interfaces::srv::ArrangePallet_Event msg_;
};

class Init_ArrangePallet_Event_request
{
public:
  explicit Init_ArrangePallet_Event_request(::vision_interfaces::srv::ArrangePallet_Event & msg)
  : msg_(msg)
  {}
  Init_ArrangePallet_Event_response request(::vision_interfaces::srv::ArrangePallet_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ArrangePallet_Event_response(msg_);
  }

private:
  ::vision_interfaces::srv::ArrangePallet_Event msg_;
};

class Init_ArrangePallet_Event_info
{
public:
  Init_ArrangePallet_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArrangePallet_Event_request info(::vision_interfaces::srv::ArrangePallet_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ArrangePallet_Event_request(msg_);
  }

private:
  ::vision_interfaces::srv::ArrangePallet_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_interfaces::srv::ArrangePallet_Event>()
{
  return vision_interfaces::srv::builder::Init_ArrangePallet_Event_info();
}

}  // namespace vision_interfaces

#endif  // VISION_INTERFACES__SRV__DETAIL__ARRANGE_PALLET__BUILDER_HPP_
