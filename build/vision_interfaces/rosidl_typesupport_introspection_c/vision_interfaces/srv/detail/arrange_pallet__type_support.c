// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vision_interfaces:srv/ArrangePallet.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vision_interfaces/srv/detail/arrange_pallet__rosidl_typesupport_introspection_c.h"
#include "vision_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vision_interfaces/srv/detail/arrange_pallet__functions.h"
#include "vision_interfaces/srv/detail/arrange_pallet__struct.h"


// Include directives for member types
// Member `box_ids`
// Member `widths`
// Member `heights`
// Member `depths`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__ArrangePallet_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vision_interfaces__srv__ArrangePallet_Request__init(message_memory);
}

void vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__ArrangePallet_Request_fini_function(void * message_memory)
{
  vision_interfaces__srv__ArrangePallet_Request__fini(message_memory);
}

size_t vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__size_function__ArrangePallet_Request__box_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Request__box_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Request__box_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__fetch_function__ArrangePallet_Request__box_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Request__box_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__assign_function__ArrangePallet_Request__box_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Request__box_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__resize_function__ArrangePallet_Request__box_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__size_function__ArrangePallet_Request__widths(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Request__widths(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Request__widths(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__fetch_function__ArrangePallet_Request__widths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Request__widths(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__assign_function__ArrangePallet_Request__widths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Request__widths(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__resize_function__ArrangePallet_Request__widths(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__size_function__ArrangePallet_Request__heights(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Request__heights(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Request__heights(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__fetch_function__ArrangePallet_Request__heights(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Request__heights(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__assign_function__ArrangePallet_Request__heights(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Request__heights(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__resize_function__ArrangePallet_Request__heights(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__size_function__ArrangePallet_Request__depths(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Request__depths(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Request__depths(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__fetch_function__ArrangePallet_Request__depths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Request__depths(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__assign_function__ArrangePallet_Request__depths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Request__depths(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__resize_function__ArrangePallet_Request__depths(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__ArrangePallet_Request_message_member_array[4] = {
  {
    "box_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_interfaces__srv__ArrangePallet_Request, box_ids),  // bytes offset in struct
    NULL,  // default value
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__size_function__ArrangePallet_Request__box_ids,  // size() function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Request__box_ids,  // get_const(index) function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Request__box_ids,  // get(index) function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__fetch_function__ArrangePallet_Request__box_ids,  // fetch(index, &value) function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__assign_function__ArrangePallet_Request__box_ids,  // assign(index, value) function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__resize_function__ArrangePallet_Request__box_ids  // resize(index) function pointer
  },
  {
    "widths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_interfaces__srv__ArrangePallet_Request, widths),  // bytes offset in struct
    NULL,  // default value
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__size_function__ArrangePallet_Request__widths,  // size() function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Request__widths,  // get_const(index) function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Request__widths,  // get(index) function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__fetch_function__ArrangePallet_Request__widths,  // fetch(index, &value) function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__assign_function__ArrangePallet_Request__widths,  // assign(index, value) function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__resize_function__ArrangePallet_Request__widths  // resize(index) function pointer
  },
  {
    "heights",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_interfaces__srv__ArrangePallet_Request, heights),  // bytes offset in struct
    NULL,  // default value
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__size_function__ArrangePallet_Request__heights,  // size() function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Request__heights,  // get_const(index) function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Request__heights,  // get(index) function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__fetch_function__ArrangePallet_Request__heights,  // fetch(index, &value) function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__assign_function__ArrangePallet_Request__heights,  // assign(index, value) function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__resize_function__ArrangePallet_Request__heights  // resize(index) function pointer
  },
  {
    "depths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_interfaces__srv__ArrangePallet_Request, depths),  // bytes offset in struct
    NULL,  // default value
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__size_function__ArrangePallet_Request__depths,  // size() function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Request__depths,  // get_const(index) function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Request__depths,  // get(index) function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__fetch_function__ArrangePallet_Request__depths,  // fetch(index, &value) function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__assign_function__ArrangePallet_Request__depths,  // assign(index, value) function pointer
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__resize_function__ArrangePallet_Request__depths  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__ArrangePallet_Request_message_members = {
  "vision_interfaces__srv",  // message namespace
  "ArrangePallet_Request",  // message name
  4,  // number of fields
  sizeof(vision_interfaces__srv__ArrangePallet_Request),
  false,  // has_any_key_member_
  vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__ArrangePallet_Request_message_member_array,  // message members
  vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__ArrangePallet_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__ArrangePallet_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__ArrangePallet_Request_message_type_support_handle = {
  0,
  &vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__ArrangePallet_Request_message_members,
  get_message_typesupport_handle_function,
  &vision_interfaces__srv__ArrangePallet_Request__get_type_hash,
  &vision_interfaces__srv__ArrangePallet_Request__get_type_description,
  &vision_interfaces__srv__ArrangePallet_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vision_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_interfaces, srv, ArrangePallet_Request)() {
  if (!vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__ArrangePallet_Request_message_type_support_handle.typesupport_identifier) {
    vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__ArrangePallet_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__ArrangePallet_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "vision_interfaces/srv/detail/arrange_pallet__rosidl_typesupport_introspection_c.h"
// already included above
// #include "vision_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "vision_interfaces/srv/detail/arrange_pallet__functions.h"
// already included above
// #include "vision_interfaces/srv/detail/arrange_pallet__struct.h"


// Include directives for member types
// Member `strategy`
// Member `layer_descriptions`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__ArrangePallet_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vision_interfaces__srv__ArrangePallet_Response__init(message_memory);
}

void vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__ArrangePallet_Response_fini_function(void * message_memory)
{
  vision_interfaces__srv__ArrangePallet_Response__fini(message_memory);
}

size_t vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__size_function__ArrangePallet_Response__layer_descriptions(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Response__layer_descriptions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Response__layer_descriptions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__fetch_function__ArrangePallet_Response__layer_descriptions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Response__layer_descriptions(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__assign_function__ArrangePallet_Response__layer_descriptions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Response__layer_descriptions(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__resize_function__ArrangePallet_Response__layer_descriptions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__ArrangePallet_Response_message_member_array[5] = {
  {
    "strategy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_interfaces__srv__ArrangePallet_Response, strategy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "layer_descriptions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_interfaces__srv__ArrangePallet_Response, layer_descriptions),  // bytes offset in struct
    NULL,  // default value
    vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__size_function__ArrangePallet_Response__layer_descriptions,  // size() function pointer
    vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Response__layer_descriptions,  // get_const(index) function pointer
    vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Response__layer_descriptions,  // get(index) function pointer
    vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__fetch_function__ArrangePallet_Response__layer_descriptions,  // fetch(index, &value) function pointer
    vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__assign_function__ArrangePallet_Response__layer_descriptions,  // assign(index, value) function pointer
    vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__resize_function__ArrangePallet_Response__layer_descriptions  // resize(index) function pointer
  },
  {
    "total_layers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_interfaces__srv__ArrangePallet_Response, total_layers),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pallet_fill_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_interfaces__srv__ArrangePallet_Response, pallet_fill_percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_interfaces__srv__ArrangePallet_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__ArrangePallet_Response_message_members = {
  "vision_interfaces__srv",  // message namespace
  "ArrangePallet_Response",  // message name
  5,  // number of fields
  sizeof(vision_interfaces__srv__ArrangePallet_Response),
  false,  // has_any_key_member_
  vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__ArrangePallet_Response_message_member_array,  // message members
  vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__ArrangePallet_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__ArrangePallet_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__ArrangePallet_Response_message_type_support_handle = {
  0,
  &vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__ArrangePallet_Response_message_members,
  get_message_typesupport_handle_function,
  &vision_interfaces__srv__ArrangePallet_Response__get_type_hash,
  &vision_interfaces__srv__ArrangePallet_Response__get_type_description,
  &vision_interfaces__srv__ArrangePallet_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vision_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_interfaces, srv, ArrangePallet_Response)() {
  if (!vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__ArrangePallet_Response_message_type_support_handle.typesupport_identifier) {
    vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__ArrangePallet_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__ArrangePallet_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "vision_interfaces/srv/detail/arrange_pallet__rosidl_typesupport_introspection_c.h"
// already included above
// #include "vision_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "vision_interfaces/srv/detail/arrange_pallet__functions.h"
// already included above
// #include "vision_interfaces/srv/detail/arrange_pallet__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "vision_interfaces/srv/arrange_pallet.h"
// Member `request`
// Member `response`
// already included above
// #include "vision_interfaces/srv/detail/arrange_pallet__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__ArrangePallet_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vision_interfaces__srv__ArrangePallet_Event__init(message_memory);
}

void vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__ArrangePallet_Event_fini_function(void * message_memory)
{
  vision_interfaces__srv__ArrangePallet_Event__fini(message_memory);
}

size_t vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__size_function__ArrangePallet_Event__request(
  const void * untyped_member)
{
  const vision_interfaces__srv__ArrangePallet_Request__Sequence * member =
    (const vision_interfaces__srv__ArrangePallet_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Event__request(
  const void * untyped_member, size_t index)
{
  const vision_interfaces__srv__ArrangePallet_Request__Sequence * member =
    (const vision_interfaces__srv__ArrangePallet_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Event__request(
  void * untyped_member, size_t index)
{
  vision_interfaces__srv__ArrangePallet_Request__Sequence * member =
    (vision_interfaces__srv__ArrangePallet_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__fetch_function__ArrangePallet_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const vision_interfaces__srv__ArrangePallet_Request * item =
    ((const vision_interfaces__srv__ArrangePallet_Request *)
    vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Event__request(untyped_member, index));
  vision_interfaces__srv__ArrangePallet_Request * value =
    (vision_interfaces__srv__ArrangePallet_Request *)(untyped_value);
  *value = *item;
}

void vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__assign_function__ArrangePallet_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  vision_interfaces__srv__ArrangePallet_Request * item =
    ((vision_interfaces__srv__ArrangePallet_Request *)
    vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Event__request(untyped_member, index));
  const vision_interfaces__srv__ArrangePallet_Request * value =
    (const vision_interfaces__srv__ArrangePallet_Request *)(untyped_value);
  *item = *value;
}

bool vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__resize_function__ArrangePallet_Event__request(
  void * untyped_member, size_t size)
{
  vision_interfaces__srv__ArrangePallet_Request__Sequence * member =
    (vision_interfaces__srv__ArrangePallet_Request__Sequence *)(untyped_member);
  vision_interfaces__srv__ArrangePallet_Request__Sequence__fini(member);
  return vision_interfaces__srv__ArrangePallet_Request__Sequence__init(member, size);
}

size_t vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__size_function__ArrangePallet_Event__response(
  const void * untyped_member)
{
  const vision_interfaces__srv__ArrangePallet_Response__Sequence * member =
    (const vision_interfaces__srv__ArrangePallet_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Event__response(
  const void * untyped_member, size_t index)
{
  const vision_interfaces__srv__ArrangePallet_Response__Sequence * member =
    (const vision_interfaces__srv__ArrangePallet_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Event__response(
  void * untyped_member, size_t index)
{
  vision_interfaces__srv__ArrangePallet_Response__Sequence * member =
    (vision_interfaces__srv__ArrangePallet_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__fetch_function__ArrangePallet_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const vision_interfaces__srv__ArrangePallet_Response * item =
    ((const vision_interfaces__srv__ArrangePallet_Response *)
    vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Event__response(untyped_member, index));
  vision_interfaces__srv__ArrangePallet_Response * value =
    (vision_interfaces__srv__ArrangePallet_Response *)(untyped_value);
  *value = *item;
}

void vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__assign_function__ArrangePallet_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  vision_interfaces__srv__ArrangePallet_Response * item =
    ((vision_interfaces__srv__ArrangePallet_Response *)
    vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Event__response(untyped_member, index));
  const vision_interfaces__srv__ArrangePallet_Response * value =
    (const vision_interfaces__srv__ArrangePallet_Response *)(untyped_value);
  *item = *value;
}

bool vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__resize_function__ArrangePallet_Event__response(
  void * untyped_member, size_t size)
{
  vision_interfaces__srv__ArrangePallet_Response__Sequence * member =
    (vision_interfaces__srv__ArrangePallet_Response__Sequence *)(untyped_member);
  vision_interfaces__srv__ArrangePallet_Response__Sequence__fini(member);
  return vision_interfaces__srv__ArrangePallet_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__ArrangePallet_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_interfaces__srv__ArrangePallet_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(vision_interfaces__srv__ArrangePallet_Event, request),  // bytes offset in struct
    NULL,  // default value
    vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__size_function__ArrangePallet_Event__request,  // size() function pointer
    vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Event__request,  // get_const(index) function pointer
    vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Event__request,  // get(index) function pointer
    vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__fetch_function__ArrangePallet_Event__request,  // fetch(index, &value) function pointer
    vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__assign_function__ArrangePallet_Event__request,  // assign(index, value) function pointer
    vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__resize_function__ArrangePallet_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(vision_interfaces__srv__ArrangePallet_Event, response),  // bytes offset in struct
    NULL,  // default value
    vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__size_function__ArrangePallet_Event__response,  // size() function pointer
    vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__get_const_function__ArrangePallet_Event__response,  // get_const(index) function pointer
    vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__get_function__ArrangePallet_Event__response,  // get(index) function pointer
    vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__fetch_function__ArrangePallet_Event__response,  // fetch(index, &value) function pointer
    vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__assign_function__ArrangePallet_Event__response,  // assign(index, value) function pointer
    vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__resize_function__ArrangePallet_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__ArrangePallet_Event_message_members = {
  "vision_interfaces__srv",  // message namespace
  "ArrangePallet_Event",  // message name
  3,  // number of fields
  sizeof(vision_interfaces__srv__ArrangePallet_Event),
  false,  // has_any_key_member_
  vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__ArrangePallet_Event_message_member_array,  // message members
  vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__ArrangePallet_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__ArrangePallet_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__ArrangePallet_Event_message_type_support_handle = {
  0,
  &vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__ArrangePallet_Event_message_members,
  get_message_typesupport_handle_function,
  &vision_interfaces__srv__ArrangePallet_Event__get_type_hash,
  &vision_interfaces__srv__ArrangePallet_Event__get_type_description,
  &vision_interfaces__srv__ArrangePallet_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vision_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_interfaces, srv, ArrangePallet_Event)() {
  vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__ArrangePallet_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__ArrangePallet_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_interfaces, srv, ArrangePallet_Request)();
  vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__ArrangePallet_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_interfaces, srv, ArrangePallet_Response)();
  if (!vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__ArrangePallet_Event_message_type_support_handle.typesupport_identifier) {
    vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__ArrangePallet_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__ArrangePallet_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "vision_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "vision_interfaces/srv/detail/arrange_pallet__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers vision_interfaces__srv__detail__arrange_pallet__rosidl_typesupport_introspection_c__ArrangePallet_service_members = {
  "vision_interfaces__srv",  // service namespace
  "ArrangePallet",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // vision_interfaces__srv__detail__arrange_pallet__rosidl_typesupport_introspection_c__ArrangePallet_Request_message_type_support_handle,
  NULL,  // response message
  // vision_interfaces__srv__detail__arrange_pallet__rosidl_typesupport_introspection_c__ArrangePallet_Response_message_type_support_handle
  NULL  // event_message
  // vision_interfaces__srv__detail__arrange_pallet__rosidl_typesupport_introspection_c__ArrangePallet_Response_message_type_support_handle
};


static rosidl_service_type_support_t vision_interfaces__srv__detail__arrange_pallet__rosidl_typesupport_introspection_c__ArrangePallet_service_type_support_handle = {
  0,
  &vision_interfaces__srv__detail__arrange_pallet__rosidl_typesupport_introspection_c__ArrangePallet_service_members,
  get_service_typesupport_handle_function,
  &vision_interfaces__srv__ArrangePallet_Request__rosidl_typesupport_introspection_c__ArrangePallet_Request_message_type_support_handle,
  &vision_interfaces__srv__ArrangePallet_Response__rosidl_typesupport_introspection_c__ArrangePallet_Response_message_type_support_handle,
  &vision_interfaces__srv__ArrangePallet_Event__rosidl_typesupport_introspection_c__ArrangePallet_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    vision_interfaces,
    srv,
    ArrangePallet
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    vision_interfaces,
    srv,
    ArrangePallet
  ),
  &vision_interfaces__srv__ArrangePallet__get_type_hash,
  &vision_interfaces__srv__ArrangePallet__get_type_description,
  &vision_interfaces__srv__ArrangePallet__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_interfaces, srv, ArrangePallet_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_interfaces, srv, ArrangePallet_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_interfaces, srv, ArrangePallet_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vision_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_interfaces, srv, ArrangePallet)(void) {
  if (!vision_interfaces__srv__detail__arrange_pallet__rosidl_typesupport_introspection_c__ArrangePallet_service_type_support_handle.typesupport_identifier) {
    vision_interfaces__srv__detail__arrange_pallet__rosidl_typesupport_introspection_c__ArrangePallet_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)vision_interfaces__srv__detail__arrange_pallet__rosidl_typesupport_introspection_c__ArrangePallet_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_interfaces, srv, ArrangePallet_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_interfaces, srv, ArrangePallet_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_interfaces, srv, ArrangePallet_Event)()->data;
  }

  return &vision_interfaces__srv__detail__arrange_pallet__rosidl_typesupport_introspection_c__ArrangePallet_service_type_support_handle;
}
