// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vision_interfaces:srv/GetImage.idl
// generated code does not contain a copyright notice
#include "vision_interfaces/srv/detail/get_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
vision_interfaces__srv__GetImage_Request__init(vision_interfaces__srv__GetImage_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
vision_interfaces__srv__GetImage_Request__fini(vision_interfaces__srv__GetImage_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
vision_interfaces__srv__GetImage_Request__are_equal(const vision_interfaces__srv__GetImage_Request * lhs, const vision_interfaces__srv__GetImage_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
vision_interfaces__srv__GetImage_Request__copy(
  const vision_interfaces__srv__GetImage_Request * input,
  vision_interfaces__srv__GetImage_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

vision_interfaces__srv__GetImage_Request *
vision_interfaces__srv__GetImage_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__srv__GetImage_Request * msg = (vision_interfaces__srv__GetImage_Request *)allocator.allocate(sizeof(vision_interfaces__srv__GetImage_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vision_interfaces__srv__GetImage_Request));
  bool success = vision_interfaces__srv__GetImage_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vision_interfaces__srv__GetImage_Request__destroy(vision_interfaces__srv__GetImage_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vision_interfaces__srv__GetImage_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vision_interfaces__srv__GetImage_Request__Sequence__init(vision_interfaces__srv__GetImage_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__srv__GetImage_Request * data = NULL;

  if (size) {
    data = (vision_interfaces__srv__GetImage_Request *)allocator.zero_allocate(size, sizeof(vision_interfaces__srv__GetImage_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vision_interfaces__srv__GetImage_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vision_interfaces__srv__GetImage_Request__fini(&data[i - 1]);
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
vision_interfaces__srv__GetImage_Request__Sequence__fini(vision_interfaces__srv__GetImage_Request__Sequence * array)
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
      vision_interfaces__srv__GetImage_Request__fini(&array->data[i]);
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

vision_interfaces__srv__GetImage_Request__Sequence *
vision_interfaces__srv__GetImage_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__srv__GetImage_Request__Sequence * array = (vision_interfaces__srv__GetImage_Request__Sequence *)allocator.allocate(sizeof(vision_interfaces__srv__GetImage_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vision_interfaces__srv__GetImage_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vision_interfaces__srv__GetImage_Request__Sequence__destroy(vision_interfaces__srv__GetImage_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vision_interfaces__srv__GetImage_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vision_interfaces__srv__GetImage_Request__Sequence__are_equal(const vision_interfaces__srv__GetImage_Request__Sequence * lhs, const vision_interfaces__srv__GetImage_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vision_interfaces__srv__GetImage_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vision_interfaces__srv__GetImage_Request__Sequence__copy(
  const vision_interfaces__srv__GetImage_Request__Sequence * input,
  vision_interfaces__srv__GetImage_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vision_interfaces__srv__GetImage_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vision_interfaces__srv__GetImage_Request * data =
      (vision_interfaces__srv__GetImage_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vision_interfaces__srv__GetImage_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vision_interfaces__srv__GetImage_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vision_interfaces__srv__GetImage_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
vision_interfaces__srv__GetImage_Response__init(vision_interfaces__srv__GetImage_Response * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    vision_interfaces__srv__GetImage_Response__fini(msg);
    return false;
  }
  // success
  return true;
}

void
vision_interfaces__srv__GetImage_Response__fini(vision_interfaces__srv__GetImage_Response * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // success
}

bool
vision_interfaces__srv__GetImage_Response__are_equal(const vision_interfaces__srv__GetImage_Response * lhs, const vision_interfaces__srv__GetImage_Response * rhs)
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
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
vision_interfaces__srv__GetImage_Response__copy(
  const vision_interfaces__srv__GetImage_Response * input,
  vision_interfaces__srv__GetImage_Response * output)
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
  // success
  output->success = input->success;
  return true;
}

vision_interfaces__srv__GetImage_Response *
vision_interfaces__srv__GetImage_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__srv__GetImage_Response * msg = (vision_interfaces__srv__GetImage_Response *)allocator.allocate(sizeof(vision_interfaces__srv__GetImage_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vision_interfaces__srv__GetImage_Response));
  bool success = vision_interfaces__srv__GetImage_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vision_interfaces__srv__GetImage_Response__destroy(vision_interfaces__srv__GetImage_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vision_interfaces__srv__GetImage_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vision_interfaces__srv__GetImage_Response__Sequence__init(vision_interfaces__srv__GetImage_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__srv__GetImage_Response * data = NULL;

  if (size) {
    data = (vision_interfaces__srv__GetImage_Response *)allocator.zero_allocate(size, sizeof(vision_interfaces__srv__GetImage_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vision_interfaces__srv__GetImage_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vision_interfaces__srv__GetImage_Response__fini(&data[i - 1]);
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
vision_interfaces__srv__GetImage_Response__Sequence__fini(vision_interfaces__srv__GetImage_Response__Sequence * array)
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
      vision_interfaces__srv__GetImage_Response__fini(&array->data[i]);
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

vision_interfaces__srv__GetImage_Response__Sequence *
vision_interfaces__srv__GetImage_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__srv__GetImage_Response__Sequence * array = (vision_interfaces__srv__GetImage_Response__Sequence *)allocator.allocate(sizeof(vision_interfaces__srv__GetImage_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vision_interfaces__srv__GetImage_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vision_interfaces__srv__GetImage_Response__Sequence__destroy(vision_interfaces__srv__GetImage_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vision_interfaces__srv__GetImage_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vision_interfaces__srv__GetImage_Response__Sequence__are_equal(const vision_interfaces__srv__GetImage_Response__Sequence * lhs, const vision_interfaces__srv__GetImage_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vision_interfaces__srv__GetImage_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vision_interfaces__srv__GetImage_Response__Sequence__copy(
  const vision_interfaces__srv__GetImage_Response__Sequence * input,
  vision_interfaces__srv__GetImage_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vision_interfaces__srv__GetImage_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vision_interfaces__srv__GetImage_Response * data =
      (vision_interfaces__srv__GetImage_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vision_interfaces__srv__GetImage_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vision_interfaces__srv__GetImage_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vision_interfaces__srv__GetImage_Response__copy(
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
// #include "vision_interfaces/srv/detail/get_image__functions.h"

bool
vision_interfaces__srv__GetImage_Event__init(vision_interfaces__srv__GetImage_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    vision_interfaces__srv__GetImage_Event__fini(msg);
    return false;
  }
  // request
  if (!vision_interfaces__srv__GetImage_Request__Sequence__init(&msg->request, 0)) {
    vision_interfaces__srv__GetImage_Event__fini(msg);
    return false;
  }
  // response
  if (!vision_interfaces__srv__GetImage_Response__Sequence__init(&msg->response, 0)) {
    vision_interfaces__srv__GetImage_Event__fini(msg);
    return false;
  }
  return true;
}

void
vision_interfaces__srv__GetImage_Event__fini(vision_interfaces__srv__GetImage_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  vision_interfaces__srv__GetImage_Request__Sequence__fini(&msg->request);
  // response
  vision_interfaces__srv__GetImage_Response__Sequence__fini(&msg->response);
}

bool
vision_interfaces__srv__GetImage_Event__are_equal(const vision_interfaces__srv__GetImage_Event * lhs, const vision_interfaces__srv__GetImage_Event * rhs)
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
  if (!vision_interfaces__srv__GetImage_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!vision_interfaces__srv__GetImage_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
vision_interfaces__srv__GetImage_Event__copy(
  const vision_interfaces__srv__GetImage_Event * input,
  vision_interfaces__srv__GetImage_Event * output)
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
  if (!vision_interfaces__srv__GetImage_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!vision_interfaces__srv__GetImage_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

vision_interfaces__srv__GetImage_Event *
vision_interfaces__srv__GetImage_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__srv__GetImage_Event * msg = (vision_interfaces__srv__GetImage_Event *)allocator.allocate(sizeof(vision_interfaces__srv__GetImage_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vision_interfaces__srv__GetImage_Event));
  bool success = vision_interfaces__srv__GetImage_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vision_interfaces__srv__GetImage_Event__destroy(vision_interfaces__srv__GetImage_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vision_interfaces__srv__GetImage_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vision_interfaces__srv__GetImage_Event__Sequence__init(vision_interfaces__srv__GetImage_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__srv__GetImage_Event * data = NULL;

  if (size) {
    data = (vision_interfaces__srv__GetImage_Event *)allocator.zero_allocate(size, sizeof(vision_interfaces__srv__GetImage_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vision_interfaces__srv__GetImage_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vision_interfaces__srv__GetImage_Event__fini(&data[i - 1]);
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
vision_interfaces__srv__GetImage_Event__Sequence__fini(vision_interfaces__srv__GetImage_Event__Sequence * array)
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
      vision_interfaces__srv__GetImage_Event__fini(&array->data[i]);
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

vision_interfaces__srv__GetImage_Event__Sequence *
vision_interfaces__srv__GetImage_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_interfaces__srv__GetImage_Event__Sequence * array = (vision_interfaces__srv__GetImage_Event__Sequence *)allocator.allocate(sizeof(vision_interfaces__srv__GetImage_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vision_interfaces__srv__GetImage_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vision_interfaces__srv__GetImage_Event__Sequence__destroy(vision_interfaces__srv__GetImage_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vision_interfaces__srv__GetImage_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vision_interfaces__srv__GetImage_Event__Sequence__are_equal(const vision_interfaces__srv__GetImage_Event__Sequence * lhs, const vision_interfaces__srv__GetImage_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vision_interfaces__srv__GetImage_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vision_interfaces__srv__GetImage_Event__Sequence__copy(
  const vision_interfaces__srv__GetImage_Event__Sequence * input,
  vision_interfaces__srv__GetImage_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vision_interfaces__srv__GetImage_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vision_interfaces__srv__GetImage_Event * data =
      (vision_interfaces__srv__GetImage_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vision_interfaces__srv__GetImage_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vision_interfaces__srv__GetImage_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vision_interfaces__srv__GetImage_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
