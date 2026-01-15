// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vision_interfaces:srv/ArrangePallet.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vision_interfaces/srv/arrange_pallet.h"


#ifndef VISION_INTERFACES__SRV__DETAIL__ARRANGE_PALLET__FUNCTIONS_H_
#define VISION_INTERFACES__SRV__DETAIL__ARRANGE_PALLET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "vision_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "vision_interfaces/srv/detail/arrange_pallet__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_type_hash_t *
vision_interfaces__srv__ArrangePallet__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
vision_interfaces__srv__ArrangePallet__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_runtime_c__type_description__TypeSource *
vision_interfaces__srv__ArrangePallet__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vision_interfaces__srv__ArrangePallet__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/ArrangePallet message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vision_interfaces__srv__ArrangePallet_Request
 * )) before or use
 * vision_interfaces__srv__ArrangePallet_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
bool
vision_interfaces__srv__ArrangePallet_Request__init(vision_interfaces__srv__ArrangePallet_Request * msg);

/// Finalize srv/ArrangePallet message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
void
vision_interfaces__srv__ArrangePallet_Request__fini(vision_interfaces__srv__ArrangePallet_Request * msg);

/// Create srv/ArrangePallet message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vision_interfaces__srv__ArrangePallet_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
vision_interfaces__srv__ArrangePallet_Request *
vision_interfaces__srv__ArrangePallet_Request__create(void);

/// Destroy srv/ArrangePallet message.
/**
 * It calls
 * vision_interfaces__srv__ArrangePallet_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
void
vision_interfaces__srv__ArrangePallet_Request__destroy(vision_interfaces__srv__ArrangePallet_Request * msg);

/// Check for srv/ArrangePallet message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
bool
vision_interfaces__srv__ArrangePallet_Request__are_equal(const vision_interfaces__srv__ArrangePallet_Request * lhs, const vision_interfaces__srv__ArrangePallet_Request * rhs);

/// Copy a srv/ArrangePallet message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
bool
vision_interfaces__srv__ArrangePallet_Request__copy(
  const vision_interfaces__srv__ArrangePallet_Request * input,
  vision_interfaces__srv__ArrangePallet_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_type_hash_t *
vision_interfaces__srv__ArrangePallet_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
vision_interfaces__srv__ArrangePallet_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_runtime_c__type_description__TypeSource *
vision_interfaces__srv__ArrangePallet_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vision_interfaces__srv__ArrangePallet_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/ArrangePallet messages.
/**
 * It allocates the memory for the number of elements and calls
 * vision_interfaces__srv__ArrangePallet_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
bool
vision_interfaces__srv__ArrangePallet_Request__Sequence__init(vision_interfaces__srv__ArrangePallet_Request__Sequence * array, size_t size);

/// Finalize array of srv/ArrangePallet messages.
/**
 * It calls
 * vision_interfaces__srv__ArrangePallet_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
void
vision_interfaces__srv__ArrangePallet_Request__Sequence__fini(vision_interfaces__srv__ArrangePallet_Request__Sequence * array);

/// Create array of srv/ArrangePallet messages.
/**
 * It allocates the memory for the array and calls
 * vision_interfaces__srv__ArrangePallet_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
vision_interfaces__srv__ArrangePallet_Request__Sequence *
vision_interfaces__srv__ArrangePallet_Request__Sequence__create(size_t size);

/// Destroy array of srv/ArrangePallet messages.
/**
 * It calls
 * vision_interfaces__srv__ArrangePallet_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
void
vision_interfaces__srv__ArrangePallet_Request__Sequence__destroy(vision_interfaces__srv__ArrangePallet_Request__Sequence * array);

/// Check for srv/ArrangePallet message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
bool
vision_interfaces__srv__ArrangePallet_Request__Sequence__are_equal(const vision_interfaces__srv__ArrangePallet_Request__Sequence * lhs, const vision_interfaces__srv__ArrangePallet_Request__Sequence * rhs);

/// Copy an array of srv/ArrangePallet messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
bool
vision_interfaces__srv__ArrangePallet_Request__Sequence__copy(
  const vision_interfaces__srv__ArrangePallet_Request__Sequence * input,
  vision_interfaces__srv__ArrangePallet_Request__Sequence * output);

/// Initialize srv/ArrangePallet message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vision_interfaces__srv__ArrangePallet_Response
 * )) before or use
 * vision_interfaces__srv__ArrangePallet_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
bool
vision_interfaces__srv__ArrangePallet_Response__init(vision_interfaces__srv__ArrangePallet_Response * msg);

/// Finalize srv/ArrangePallet message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
void
vision_interfaces__srv__ArrangePallet_Response__fini(vision_interfaces__srv__ArrangePallet_Response * msg);

/// Create srv/ArrangePallet message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vision_interfaces__srv__ArrangePallet_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
vision_interfaces__srv__ArrangePallet_Response *
vision_interfaces__srv__ArrangePallet_Response__create(void);

/// Destroy srv/ArrangePallet message.
/**
 * It calls
 * vision_interfaces__srv__ArrangePallet_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
void
vision_interfaces__srv__ArrangePallet_Response__destroy(vision_interfaces__srv__ArrangePallet_Response * msg);

/// Check for srv/ArrangePallet message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
bool
vision_interfaces__srv__ArrangePallet_Response__are_equal(const vision_interfaces__srv__ArrangePallet_Response * lhs, const vision_interfaces__srv__ArrangePallet_Response * rhs);

/// Copy a srv/ArrangePallet message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
bool
vision_interfaces__srv__ArrangePallet_Response__copy(
  const vision_interfaces__srv__ArrangePallet_Response * input,
  vision_interfaces__srv__ArrangePallet_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_type_hash_t *
vision_interfaces__srv__ArrangePallet_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
vision_interfaces__srv__ArrangePallet_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_runtime_c__type_description__TypeSource *
vision_interfaces__srv__ArrangePallet_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vision_interfaces__srv__ArrangePallet_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/ArrangePallet messages.
/**
 * It allocates the memory for the number of elements and calls
 * vision_interfaces__srv__ArrangePallet_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
bool
vision_interfaces__srv__ArrangePallet_Response__Sequence__init(vision_interfaces__srv__ArrangePallet_Response__Sequence * array, size_t size);

/// Finalize array of srv/ArrangePallet messages.
/**
 * It calls
 * vision_interfaces__srv__ArrangePallet_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
void
vision_interfaces__srv__ArrangePallet_Response__Sequence__fini(vision_interfaces__srv__ArrangePallet_Response__Sequence * array);

/// Create array of srv/ArrangePallet messages.
/**
 * It allocates the memory for the array and calls
 * vision_interfaces__srv__ArrangePallet_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
vision_interfaces__srv__ArrangePallet_Response__Sequence *
vision_interfaces__srv__ArrangePallet_Response__Sequence__create(size_t size);

/// Destroy array of srv/ArrangePallet messages.
/**
 * It calls
 * vision_interfaces__srv__ArrangePallet_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
void
vision_interfaces__srv__ArrangePallet_Response__Sequence__destroy(vision_interfaces__srv__ArrangePallet_Response__Sequence * array);

/// Check for srv/ArrangePallet message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
bool
vision_interfaces__srv__ArrangePallet_Response__Sequence__are_equal(const vision_interfaces__srv__ArrangePallet_Response__Sequence * lhs, const vision_interfaces__srv__ArrangePallet_Response__Sequence * rhs);

/// Copy an array of srv/ArrangePallet messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
bool
vision_interfaces__srv__ArrangePallet_Response__Sequence__copy(
  const vision_interfaces__srv__ArrangePallet_Response__Sequence * input,
  vision_interfaces__srv__ArrangePallet_Response__Sequence * output);

/// Initialize srv/ArrangePallet message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vision_interfaces__srv__ArrangePallet_Event
 * )) before or use
 * vision_interfaces__srv__ArrangePallet_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
bool
vision_interfaces__srv__ArrangePallet_Event__init(vision_interfaces__srv__ArrangePallet_Event * msg);

/// Finalize srv/ArrangePallet message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
void
vision_interfaces__srv__ArrangePallet_Event__fini(vision_interfaces__srv__ArrangePallet_Event * msg);

/// Create srv/ArrangePallet message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vision_interfaces__srv__ArrangePallet_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
vision_interfaces__srv__ArrangePallet_Event *
vision_interfaces__srv__ArrangePallet_Event__create(void);

/// Destroy srv/ArrangePallet message.
/**
 * It calls
 * vision_interfaces__srv__ArrangePallet_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
void
vision_interfaces__srv__ArrangePallet_Event__destroy(vision_interfaces__srv__ArrangePallet_Event * msg);

/// Check for srv/ArrangePallet message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
bool
vision_interfaces__srv__ArrangePallet_Event__are_equal(const vision_interfaces__srv__ArrangePallet_Event * lhs, const vision_interfaces__srv__ArrangePallet_Event * rhs);

/// Copy a srv/ArrangePallet message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
bool
vision_interfaces__srv__ArrangePallet_Event__copy(
  const vision_interfaces__srv__ArrangePallet_Event * input,
  vision_interfaces__srv__ArrangePallet_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_type_hash_t *
vision_interfaces__srv__ArrangePallet_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
vision_interfaces__srv__ArrangePallet_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_runtime_c__type_description__TypeSource *
vision_interfaces__srv__ArrangePallet_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vision_interfaces__srv__ArrangePallet_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/ArrangePallet messages.
/**
 * It allocates the memory for the number of elements and calls
 * vision_interfaces__srv__ArrangePallet_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
bool
vision_interfaces__srv__ArrangePallet_Event__Sequence__init(vision_interfaces__srv__ArrangePallet_Event__Sequence * array, size_t size);

/// Finalize array of srv/ArrangePallet messages.
/**
 * It calls
 * vision_interfaces__srv__ArrangePallet_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
void
vision_interfaces__srv__ArrangePallet_Event__Sequence__fini(vision_interfaces__srv__ArrangePallet_Event__Sequence * array);

/// Create array of srv/ArrangePallet messages.
/**
 * It allocates the memory for the array and calls
 * vision_interfaces__srv__ArrangePallet_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
vision_interfaces__srv__ArrangePallet_Event__Sequence *
vision_interfaces__srv__ArrangePallet_Event__Sequence__create(size_t size);

/// Destroy array of srv/ArrangePallet messages.
/**
 * It calls
 * vision_interfaces__srv__ArrangePallet_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
void
vision_interfaces__srv__ArrangePallet_Event__Sequence__destroy(vision_interfaces__srv__ArrangePallet_Event__Sequence * array);

/// Check for srv/ArrangePallet message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
bool
vision_interfaces__srv__ArrangePallet_Event__Sequence__are_equal(const vision_interfaces__srv__ArrangePallet_Event__Sequence * lhs, const vision_interfaces__srv__ArrangePallet_Event__Sequence * rhs);

/// Copy an array of srv/ArrangePallet messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
bool
vision_interfaces__srv__ArrangePallet_Event__Sequence__copy(
  const vision_interfaces__srv__ArrangePallet_Event__Sequence * input,
  vision_interfaces__srv__ArrangePallet_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // VISION_INTERFACES__SRV__DETAIL__ARRANGE_PALLET__FUNCTIONS_H_
