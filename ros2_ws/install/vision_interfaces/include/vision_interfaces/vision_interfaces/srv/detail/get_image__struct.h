// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vision_interfaces:srv/GetImage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vision_interfaces/srv/get_image.h"


#ifndef VISION_INTERFACES__SRV__DETAIL__GET_IMAGE__STRUCT_H_
#define VISION_INTERFACES__SRV__DETAIL__GET_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetImage in the package vision_interfaces.
typedef struct vision_interfaces__srv__GetImage_Request
{
  uint8_t structure_needs_at_least_one_member;
} vision_interfaces__srv__GetImage_Request;

// Struct for a sequence of vision_interfaces__srv__GetImage_Request.
typedef struct vision_interfaces__srv__GetImage_Request__Sequence
{
  vision_interfaces__srv__GetImage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_interfaces__srv__GetImage_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/GetImage in the package vision_interfaces.
typedef struct vision_interfaces__srv__GetImage_Response
{
  sensor_msgs__msg__Image image;
  bool success;
} vision_interfaces__srv__GetImage_Response;

// Struct for a sequence of vision_interfaces__srv__GetImage_Response.
typedef struct vision_interfaces__srv__GetImage_Response__Sequence
{
  vision_interfaces__srv__GetImage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_interfaces__srv__GetImage_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  vision_interfaces__srv__GetImage_Event__request__MAX_SIZE = 1
};
// response
enum
{
  vision_interfaces__srv__GetImage_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetImage in the package vision_interfaces.
typedef struct vision_interfaces__srv__GetImage_Event
{
  service_msgs__msg__ServiceEventInfo info;
  vision_interfaces__srv__GetImage_Request__Sequence request;
  vision_interfaces__srv__GetImage_Response__Sequence response;
} vision_interfaces__srv__GetImage_Event;

// Struct for a sequence of vision_interfaces__srv__GetImage_Event.
typedef struct vision_interfaces__srv__GetImage_Event__Sequence
{
  vision_interfaces__srv__GetImage_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_interfaces__srv__GetImage_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISION_INTERFACES__SRV__DETAIL__GET_IMAGE__STRUCT_H_
