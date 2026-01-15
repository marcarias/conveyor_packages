// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from vision_interfaces:srv/DetectBoxes.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "vision_interfaces/srv/detail/detect_boxes__functions.h"
#include "vision_interfaces/srv/detail/detect_boxes__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace vision_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void DetectBoxes_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vision_interfaces::srv::DetectBoxes_Request(_init);
}

void DetectBoxes_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vision_interfaces::srv::DetectBoxes_Request *>(message_memory);
  typed_message->~DetectBoxes_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DetectBoxes_Request_message_member_array[1] = {
  {
    "image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_interfaces::srv::DetectBoxes_Request, image),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DetectBoxes_Request_message_members = {
  "vision_interfaces::srv",  // message namespace
  "DetectBoxes_Request",  // message name
  1,  // number of fields
  sizeof(vision_interfaces::srv::DetectBoxes_Request),
  false,  // has_any_key_member_
  DetectBoxes_Request_message_member_array,  // message members
  DetectBoxes_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectBoxes_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DetectBoxes_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectBoxes_Request_message_members,
  get_message_typesupport_handle_function,
  &vision_interfaces__srv__DetectBoxes_Request__get_type_hash,
  &vision_interfaces__srv__DetectBoxes_Request__get_type_description,
  &vision_interfaces__srv__DetectBoxes_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace vision_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vision_interfaces::srv::DetectBoxes_Request>()
{
  return &::vision_interfaces::srv::rosidl_typesupport_introspection_cpp::DetectBoxes_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vision_interfaces, srv, DetectBoxes_Request)() {
  return &::vision_interfaces::srv::rosidl_typesupport_introspection_cpp::DetectBoxes_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "vision_interfaces/srv/detail/detect_boxes__functions.h"
// already included above
// #include "vision_interfaces/srv/detail/detect_boxes__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace vision_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void DetectBoxes_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vision_interfaces::srv::DetectBoxes_Response(_init);
}

void DetectBoxes_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vision_interfaces::srv::DetectBoxes_Response *>(message_memory);
  typed_message->~DetectBoxes_Response();
}

size_t size_function__DetectBoxes_Response__box_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectBoxes_Response__box_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectBoxes_Response__box_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__DetectBoxes_Response__box_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__DetectBoxes_Response__box_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__DetectBoxes_Response__box_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__DetectBoxes_Response__box_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__DetectBoxes_Response__box_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DetectBoxes_Response__widths(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectBoxes_Response__widths(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectBoxes_Response__widths(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__DetectBoxes_Response__widths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__DetectBoxes_Response__widths(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__DetectBoxes_Response__widths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__DetectBoxes_Response__widths(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__DetectBoxes_Response__widths(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DetectBoxes_Response__heights(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectBoxes_Response__heights(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectBoxes_Response__heights(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__DetectBoxes_Response__heights(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__DetectBoxes_Response__heights(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__DetectBoxes_Response__heights(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__DetectBoxes_Response__heights(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__DetectBoxes_Response__heights(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DetectBoxes_Response__depths(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectBoxes_Response__depths(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectBoxes_Response__depths(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__DetectBoxes_Response__depths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__DetectBoxes_Response__depths(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__DetectBoxes_Response__depths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__DetectBoxes_Response__depths(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__DetectBoxes_Response__depths(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DetectBoxes_Response_message_member_array[5] = {
  {
    "box_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_interfaces::srv::DetectBoxes_Response, box_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectBoxes_Response__box_ids,  // size() function pointer
    get_const_function__DetectBoxes_Response__box_ids,  // get_const(index) function pointer
    get_function__DetectBoxes_Response__box_ids,  // get(index) function pointer
    fetch_function__DetectBoxes_Response__box_ids,  // fetch(index, &value) function pointer
    assign_function__DetectBoxes_Response__box_ids,  // assign(index, value) function pointer
    resize_function__DetectBoxes_Response__box_ids  // resize(index) function pointer
  },
  {
    "widths",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_interfaces::srv::DetectBoxes_Response, widths),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectBoxes_Response__widths,  // size() function pointer
    get_const_function__DetectBoxes_Response__widths,  // get_const(index) function pointer
    get_function__DetectBoxes_Response__widths,  // get(index) function pointer
    fetch_function__DetectBoxes_Response__widths,  // fetch(index, &value) function pointer
    assign_function__DetectBoxes_Response__widths,  // assign(index, value) function pointer
    resize_function__DetectBoxes_Response__widths  // resize(index) function pointer
  },
  {
    "heights",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_interfaces::srv::DetectBoxes_Response, heights),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectBoxes_Response__heights,  // size() function pointer
    get_const_function__DetectBoxes_Response__heights,  // get_const(index) function pointer
    get_function__DetectBoxes_Response__heights,  // get(index) function pointer
    fetch_function__DetectBoxes_Response__heights,  // fetch(index, &value) function pointer
    assign_function__DetectBoxes_Response__heights,  // assign(index, value) function pointer
    resize_function__DetectBoxes_Response__heights  // resize(index) function pointer
  },
  {
    "depths",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_interfaces::srv::DetectBoxes_Response, depths),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectBoxes_Response__depths,  // size() function pointer
    get_const_function__DetectBoxes_Response__depths,  // get_const(index) function pointer
    get_function__DetectBoxes_Response__depths,  // get(index) function pointer
    fetch_function__DetectBoxes_Response__depths,  // fetch(index, &value) function pointer
    assign_function__DetectBoxes_Response__depths,  // assign(index, value) function pointer
    resize_function__DetectBoxes_Response__depths  // resize(index) function pointer
  },
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_interfaces::srv::DetectBoxes_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DetectBoxes_Response_message_members = {
  "vision_interfaces::srv",  // message namespace
  "DetectBoxes_Response",  // message name
  5,  // number of fields
  sizeof(vision_interfaces::srv::DetectBoxes_Response),
  false,  // has_any_key_member_
  DetectBoxes_Response_message_member_array,  // message members
  DetectBoxes_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectBoxes_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DetectBoxes_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectBoxes_Response_message_members,
  get_message_typesupport_handle_function,
  &vision_interfaces__srv__DetectBoxes_Response__get_type_hash,
  &vision_interfaces__srv__DetectBoxes_Response__get_type_description,
  &vision_interfaces__srv__DetectBoxes_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace vision_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vision_interfaces::srv::DetectBoxes_Response>()
{
  return &::vision_interfaces::srv::rosidl_typesupport_introspection_cpp::DetectBoxes_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vision_interfaces, srv, DetectBoxes_Response)() {
  return &::vision_interfaces::srv::rosidl_typesupport_introspection_cpp::DetectBoxes_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "vision_interfaces/srv/detail/detect_boxes__functions.h"
// already included above
// #include "vision_interfaces/srv/detail/detect_boxes__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace vision_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void DetectBoxes_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vision_interfaces::srv::DetectBoxes_Event(_init);
}

void DetectBoxes_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vision_interfaces::srv::DetectBoxes_Event *>(message_memory);
  typed_message->~DetectBoxes_Event();
}

size_t size_function__DetectBoxes_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<vision_interfaces::srv::DetectBoxes_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectBoxes_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<vision_interfaces::srv::DetectBoxes_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectBoxes_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<vision_interfaces::srv::DetectBoxes_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__DetectBoxes_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const vision_interfaces::srv::DetectBoxes_Request *>(
    get_const_function__DetectBoxes_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<vision_interfaces::srv::DetectBoxes_Request *>(untyped_value);
  value = item;
}

void assign_function__DetectBoxes_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<vision_interfaces::srv::DetectBoxes_Request *>(
    get_function__DetectBoxes_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const vision_interfaces::srv::DetectBoxes_Request *>(untyped_value);
  item = value;
}

void resize_function__DetectBoxes_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<vision_interfaces::srv::DetectBoxes_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DetectBoxes_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<vision_interfaces::srv::DetectBoxes_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectBoxes_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<vision_interfaces::srv::DetectBoxes_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectBoxes_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<vision_interfaces::srv::DetectBoxes_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__DetectBoxes_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const vision_interfaces::srv::DetectBoxes_Response *>(
    get_const_function__DetectBoxes_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<vision_interfaces::srv::DetectBoxes_Response *>(untyped_value);
  value = item;
}

void assign_function__DetectBoxes_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<vision_interfaces::srv::DetectBoxes_Response *>(
    get_function__DetectBoxes_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const vision_interfaces::srv::DetectBoxes_Response *>(untyped_value);
  item = value;
}

void resize_function__DetectBoxes_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<vision_interfaces::srv::DetectBoxes_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DetectBoxes_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_interfaces::srv::DetectBoxes_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vision_interfaces::srv::DetectBoxes_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(vision_interfaces::srv::DetectBoxes_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectBoxes_Event__request,  // size() function pointer
    get_const_function__DetectBoxes_Event__request,  // get_const(index) function pointer
    get_function__DetectBoxes_Event__request,  // get(index) function pointer
    fetch_function__DetectBoxes_Event__request,  // fetch(index, &value) function pointer
    assign_function__DetectBoxes_Event__request,  // assign(index, value) function pointer
    resize_function__DetectBoxes_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vision_interfaces::srv::DetectBoxes_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(vision_interfaces::srv::DetectBoxes_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectBoxes_Event__response,  // size() function pointer
    get_const_function__DetectBoxes_Event__response,  // get_const(index) function pointer
    get_function__DetectBoxes_Event__response,  // get(index) function pointer
    fetch_function__DetectBoxes_Event__response,  // fetch(index, &value) function pointer
    assign_function__DetectBoxes_Event__response,  // assign(index, value) function pointer
    resize_function__DetectBoxes_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DetectBoxes_Event_message_members = {
  "vision_interfaces::srv",  // message namespace
  "DetectBoxes_Event",  // message name
  3,  // number of fields
  sizeof(vision_interfaces::srv::DetectBoxes_Event),
  false,  // has_any_key_member_
  DetectBoxes_Event_message_member_array,  // message members
  DetectBoxes_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectBoxes_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DetectBoxes_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectBoxes_Event_message_members,
  get_message_typesupport_handle_function,
  &vision_interfaces__srv__DetectBoxes_Event__get_type_hash,
  &vision_interfaces__srv__DetectBoxes_Event__get_type_description,
  &vision_interfaces__srv__DetectBoxes_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace vision_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vision_interfaces::srv::DetectBoxes_Event>()
{
  return &::vision_interfaces::srv::rosidl_typesupport_introspection_cpp::DetectBoxes_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vision_interfaces, srv, DetectBoxes_Event)() {
  return &::vision_interfaces::srv::rosidl_typesupport_introspection_cpp::DetectBoxes_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "vision_interfaces/srv/detail/detect_boxes__functions.h"
// already included above
// #include "vision_interfaces/srv/detail/detect_boxes__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace vision_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers DetectBoxes_service_members = {
  "vision_interfaces::srv",  // service namespace
  "DetectBoxes",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<vision_interfaces::srv::DetectBoxes>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t DetectBoxes_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectBoxes_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vision_interfaces::srv::DetectBoxes_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vision_interfaces::srv::DetectBoxes_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vision_interfaces::srv::DetectBoxes_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<vision_interfaces::srv::DetectBoxes>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<vision_interfaces::srv::DetectBoxes>,
  &vision_interfaces__srv__DetectBoxes__get_type_hash,
  &vision_interfaces__srv__DetectBoxes__get_type_description,
  &vision_interfaces__srv__DetectBoxes__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace vision_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<vision_interfaces::srv::DetectBoxes>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::vision_interfaces::srv::rosidl_typesupport_introspection_cpp::DetectBoxes_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::vision_interfaces::srv::DetectBoxes_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::vision_interfaces::srv::DetectBoxes_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::vision_interfaces::srv::DetectBoxes_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vision_interfaces, srv, DetectBoxes)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<vision_interfaces::srv::DetectBoxes>();
}

#ifdef __cplusplus
}
#endif
