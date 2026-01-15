// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vision_interfaces:srv/DetectBoxes.idl
// generated code does not contain a copyright notice
#include "vision_interfaces/srv/detail/detect_boxes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
vision_interfaces__srv__DetectBoxes_Request__init(vision_interfaces__srv__DetectBoxes_Request * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    vision_interfaces__srv__DetectBoxes_Request__fini(msg);
    return false;
  }
  return true;
}

void
vision_interfaces__srv__DetectBoxes_Request__fini(vision_interfaces__srv__DetectBoxes_Request * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
}

bool
vision_interfaces__srv__DetectBoxes_Request__are_equal(const vision_interfaces__srv__DetectBoxes_Request * lhs, const vision_interfaces__srv__DetectBoxes_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  return true;
}

bool
vision_interfaces__srv__DetectBoxes_Request__copy(
  const vision_interfaces__srv__DetectBoxes_Request * input,
  vision_interfaces__srv__DetectBoxes_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  return true;
}

vision_interfaces__srv__DetectBoxes_Request *
vision_interfaces__srv__DetectBoxes_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__srv__DetectBoxes_Request * msg = (vision_interfaces__srv__DetectBoxes_Request *)allocator.allocate(sizeof(vision_interfaces__srv__DetectBoxes_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vision_interfaces__srv__DetectBoxes_Request));
  bool success = vision_interfaces__srv__DetectBoxes_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vision_interfaces__srv__DetectBoxes_Request__destroy(vision_interfaces__srv__DetectBoxes_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vision_interfaces__srv__DetectBoxes_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vision_interfaces__srv__DetectBoxes_Request__Sequence__init(vision_interfaces__srv__DetectBoxes_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__srv__DetectBoxes_Request * data = NULL;

  if (size) {
    data = (vision_interfaces__srv__DetectBoxes_Request *)allocator.zero_allocate(size, sizeof(vision_interfaces__srv__DetectBoxes_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vision_interfaces__srv__DetectBoxes_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vision_interfaces__srv__DetectBoxes_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vision_interfaces__srv__DetectBoxes_Request__Sequence__fini(vision_interfaces__srv__DetectBoxes_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vision_interfaces__srv__DetectBoxes_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vision_interfaces__srv__DetectBoxes_Request__Sequence *
vision_interfaces__srv__DetectBoxes_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__srv__DetectBoxes_Request__Sequence * array = (vision_interfaces__srv__DetectBoxes_Request__Sequence *)allocator.allocate(sizeof(vision_interfaces__srv__DetectBoxes_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vision_interfaces__srv__DetectBoxes_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vision_interfaces__srv__DetectBoxes_Request__Sequence__destroy(vision_interfaces__srv__DetectBoxes_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vision_interfaces__srv__DetectBoxes_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vision_interfaces__srv__DetectBoxes_Request__Sequence__are_equal(const vision_interfaces__srv__DetectBoxes_Request__Sequence * lhs, const vision_interfaces__srv__DetectBoxes_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vision_interfaces__srv__DetectBoxes_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vision_interfaces__srv__DetectBoxes_Request__Sequence__copy(
  const vision_interfaces__srv__DetectBoxes_Request__Sequence * input,
  vision_interfaces__srv__DetectBoxes_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vision_interfaces__srv__DetectBoxes_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vision_interfaces__srv__DetectBoxes_Request * data =
      (vision_interfaces__srv__DetectBoxes_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vision_interfaces__srv__DetectBoxes_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vision_interfaces__srv__DetectBoxes_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vision_interfaces__srv__DetectBoxes_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `box_ids`
// Member `widths`
// Member `heights`
// Member `depths`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
vision_interfaces__srv__DetectBoxes_Response__init(vision_interfaces__srv__DetectBoxes_Response * msg)
{
  if (!msg) {
    return false;
  }
  // box_ids
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->box_ids, 0)) {
    vision_interfaces__srv__DetectBoxes_Response__fini(msg);
    return false;
  }
  // widths
  if (!rosidl_runtime_c__float__Sequence__init(&msg->widths, 0)) {
    vision_interfaces__srv__DetectBoxes_Response__fini(msg);
    return false;
  }
  // heights
  if (!rosidl_runtime_c__float__Sequence__init(&msg->heights, 0)) {
    vision_interfaces__srv__DetectBoxes_Response__fini(msg);
    return false;
  }
  // depths
  if (!rosidl_runtime_c__float__Sequence__init(&msg->depths, 0)) {
    vision_interfaces__srv__DetectBoxes_Response__fini(msg);
    return false;
  }
  // success
  return true;
}

void
vision_interfaces__srv__DetectBoxes_Response__fini(vision_interfaces__srv__DetectBoxes_Response * msg)
{
  if (!msg) {
    return;
  }
  // box_ids
  rosidl_runtime_c__uint32__Sequence__fini(&msg->box_ids);
  // widths
  rosidl_runtime_c__float__Sequence__fini(&msg->widths);
  // heights
  rosidl_runtime_c__float__Sequence__fini(&msg->heights);
  // depths
  rosidl_runtime_c__float__Sequence__fini(&msg->depths);
  // success
}

bool
vision_interfaces__srv__DetectBoxes_Response__are_equal(const vision_interfaces__srv__DetectBoxes_Response * lhs, const vision_interfaces__srv__DetectBoxes_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // box_ids
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->box_ids), &(rhs->box_ids)))
  {
    return false;
  }
  // widths
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->widths), &(rhs->widths)))
  {
    return false;
  }
  // heights
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->heights), &(rhs->heights)))
  {
    return false;
  }
  // depths
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->depths), &(rhs->depths)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
vision_interfaces__srv__DetectBoxes_Response__copy(
  const vision_interfaces__srv__DetectBoxes_Response * input,
  vision_interfaces__srv__DetectBoxes_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // box_ids
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->box_ids), &(output->box_ids)))
  {
    return false;
  }
  // widths
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->widths), &(output->widths)))
  {
    return false;
  }
  // heights
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->heights), &(output->heights)))
  {
    return false;
  }
  // depths
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->depths), &(output->depths)))
  {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

vision_interfaces__srv__DetectBoxes_Response *
vision_interfaces__srv__DetectBoxes_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__srv__DetectBoxes_Response * msg = (vision_interfaces__srv__DetectBoxes_Response *)allocator.allocate(sizeof(vision_interfaces__srv__DetectBoxes_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vision_interfaces__srv__DetectBoxes_Response));
  bool success = vision_interfaces__srv__DetectBoxes_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vision_interfaces__srv__DetectBoxes_Response__destroy(vision_interfaces__srv__DetectBoxes_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vision_interfaces__srv__DetectBoxes_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vision_interfaces__srv__DetectBoxes_Response__Sequence__init(vision_interfaces__srv__DetectBoxes_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__srv__DetectBoxes_Response * data = NULL;

  if (size) {
    data = (vision_interfaces__srv__DetectBoxes_Response *)allocator.zero_allocate(size, sizeof(vision_interfaces__srv__DetectBoxes_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vision_interfaces__srv__DetectBoxes_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vision_interfaces__srv__DetectBoxes_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vision_interfaces__srv__DetectBoxes_Response__Sequence__fini(vision_interfaces__srv__DetectBoxes_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vision_interfaces__srv__DetectBoxes_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vision_interfaces__srv__DetectBoxes_Response__Sequence *
vision_interfaces__srv__DetectBoxes_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__srv__DetectBoxes_Response__Sequence * array = (vision_interfaces__srv__DetectBoxes_Response__Sequence *)allocator.allocate(sizeof(vision_interfaces__srv__DetectBoxes_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vision_interfaces__srv__DetectBoxes_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vision_interfaces__srv__DetectBoxes_Response__Sequence__destroy(vision_interfaces__srv__DetectBoxes_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vision_interfaces__srv__DetectBoxes_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vision_interfaces__srv__DetectBoxes_Response__Sequence__are_equal(const vision_interfaces__srv__DetectBoxes_Response__Sequence * lhs, const vision_interfaces__srv__DetectBoxes_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vision_interfaces__srv__DetectBoxes_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vision_interfaces__srv__DetectBoxes_Response__Sequence__copy(
  const vision_interfaces__srv__DetectBoxes_Response__Sequence * input,
  vision_interfaces__srv__DetectBoxes_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vision_interfaces__srv__DetectBoxes_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vision_interfaces__srv__DetectBoxes_Response * data =
      (vision_interfaces__srv__DetectBoxes_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vision_interfaces__srv__DetectBoxes_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vision_interfaces__srv__DetectBoxes_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vision_interfaces__srv__DetectBoxes_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "vision_interfaces/srv/detail/detect_boxes__functions.h"

bool
vision_interfaces__srv__DetectBoxes_Event__init(vision_interfaces__srv__DetectBoxes_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    vision_interfaces__srv__DetectBoxes_Event__fini(msg);
    return false;
  }
  // request
  if (!vision_interfaces__srv__DetectBoxes_Request__Sequence__init(&msg->request, 0)) {
    vision_interfaces__srv__DetectBoxes_Event__fini(msg);
    return false;
  }
  // response
  if (!vision_interfaces__srv__DetectBoxes_Response__Sequence__init(&msg->response, 0)) {
    vision_interfaces__srv__DetectBoxes_Event__fini(msg);
    return false;
  }
  return true;
}

void
vision_interfaces__srv__DetectBoxes_Event__fini(vision_interfaces__srv__DetectBoxes_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  vision_interfaces__srv__DetectBoxes_Request__Sequence__fini(&msg->request);
  // response
  vision_interfaces__srv__DetectBoxes_Response__Sequence__fini(&msg->response);
}

bool
vision_interfaces__srv__DetectBoxes_Event__are_equal(const vision_interfaces__srv__DetectBoxes_Event * lhs, const vision_interfaces__srv__DetectBoxes_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!vision_interfaces__srv__DetectBoxes_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!vision_interfaces__srv__DetectBoxes_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
vision_interfaces__srv__DetectBoxes_Event__copy(
  const vision_interfaces__srv__DetectBoxes_Event * input,
  vision_interfaces__srv__DetectBoxes_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!vision_interfaces__srv__DetectBoxes_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!vision_interfaces__srv__DetectBoxes_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

vision_interfaces__srv__DetectBoxes_Event *
vision_interfaces__srv__DetectBoxes_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__srv__DetectBoxes_Event * msg = (vision_interfaces__srv__DetectBoxes_Event *)allocator.allocate(sizeof(vision_interfaces__srv__DetectBoxes_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vision_interfaces__srv__DetectBoxes_Event));
  bool success = vision_interfaces__srv__DetectBoxes_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vision_interfaces__srv__DetectBoxes_Event__destroy(vision_interfaces__srv__DetectBoxes_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vision_interfaces__srv__DetectBoxes_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vision_interfaces__srv__DetectBoxes_Event__Sequence__init(vision_interfaces__srv__DetectBoxes_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__srv__DetectBoxes_Event * data = NULL;

  if (size) {
    data = (vision_interfaces__srv__DetectBoxes_Event *)allocator.zero_allocate(size, sizeof(vision_interfaces__srv__DetectBoxes_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vision_interfaces__srv__DetectBoxes_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vision_interfaces__srv__DetectBoxes_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vision_interfaces__srv__DetectBoxes_Event__Sequence__fini(vision_interfaces__srv__DetectBoxes_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vision_interfaces__srv__DetectBoxes_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vision_interfaces__srv__DetectBoxes_Event__Sequence *
vision_interfaces__srv__DetectBoxes_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__srv__DetectBoxes_Event__Sequence * array = (vision_interfaces__srv__DetectBoxes_Event__Sequence *)allocator.allocate(sizeof(vision_interfaces__srv__DetectBoxes_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vision_interfaces__srv__DetectBoxes_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vision_interfaces__srv__DetectBoxes_Event__Sequence__destroy(vision_interfaces__srv__DetectBoxes_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vision_interfaces__srv__DetectBoxes_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vision_interfaces__srv__DetectBoxes_Event__Sequence__are_equal(const vision_interfaces__srv__DetectBoxes_Event__Sequence * lhs, const vision_interfaces__srv__DetectBoxes_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vision_interfaces__srv__DetectBoxes_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vision_interfaces__srv__DetectBoxes_Event__Sequence__copy(
  const vision_interfaces__srv__DetectBoxes_Event__Sequence * input,
  vision_interfaces__srv__DetectBoxes_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vision_interfaces__srv__DetectBoxes_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vision_interfaces__srv__DetectBoxes_Event * data =
      (vision_interfaces__srv__DetectBoxes_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vision_interfaces__srv__DetectBoxes_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vision_interfaces__srv__DetectBoxes_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vision_interfaces__srv__DetectBoxes_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
