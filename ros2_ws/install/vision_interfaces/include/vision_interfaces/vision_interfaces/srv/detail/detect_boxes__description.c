// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from vision_interfaces:srv/DetectBoxes.idl
// generated code does not contain a copyright notice

#include "vision_interfaces/srv/detail/detect_boxes__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_type_hash_t *
vision_interfaces__srv__DetectBoxes__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x87, 0xfe, 0x50, 0x5b, 0x75, 0xb3, 0x8e, 0x2c,
      0xc0, 0x4c, 0x43, 0x37, 0x00, 0x22, 0x4f, 0x86,
      0xa7, 0xb5, 0x98, 0x38, 0x48, 0x77, 0xf3, 0x6a,
      0x8d, 0xf2, 0xa1, 0xbb, 0x08, 0x81, 0x5b, 0x3e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_type_hash_t *
vision_interfaces__srv__DetectBoxes_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa0, 0xf6, 0xe8, 0x82, 0xeb, 0xe2, 0x3b, 0xa2,
      0x68, 0x16, 0x6d, 0x00, 0x05, 0x62, 0xab, 0xe0,
      0xc4, 0x87, 0xfe, 0xad, 0x9a, 0xc0, 0x7a, 0xcf,
      0x24, 0xf1, 0x2d, 0x76, 0x0c, 0x3d, 0x7a, 0x7a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_type_hash_t *
vision_interfaces__srv__DetectBoxes_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x30, 0x5c, 0x0b, 0x1a, 0x65, 0x3e, 0x9f, 0xf1,
      0xeb, 0x86, 0xea, 0xc9, 0xae, 0x37, 0x5c, 0xe0,
      0xf8, 0x27, 0x49, 0x48, 0x8d, 0x1a, 0xf3, 0x4b,
      0xf6, 0xdd, 0x7f, 0xe7, 0x4b, 0x45, 0x8a, 0xf4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_vision_interfaces
const rosidl_type_hash_t *
vision_interfaces__srv__DetectBoxes_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x64, 0xdf, 0xde, 0xe4, 0x4d, 0x98, 0x32, 0x54,
      0xa2, 0x8c, 0xb5, 0xcb, 0x89, 0x4a, 0xde, 0xf8,
      0x6a, 0x64, 0xe1, 0x24, 0xeb, 0xec, 0x7e, 0x13,
      0x0d, 0xcd, 0x44, 0x89, 0xff, 0x93, 0xb8, 0x8b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "sensor_msgs/msg/detail/image__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t sensor_msgs__msg__Image__EXPECTED_HASH = {1, {
    0xd3, 0x1d, 0x41, 0xa9, 0xa4, 0xc4, 0xbc, 0x8e,
    0xae, 0x9b, 0xe7, 0x57, 0xb0, 0xbe, 0xed, 0x30,
    0x65, 0x64, 0xf7, 0x52, 0x6c, 0x88, 0xea, 0x6a,
    0x45, 0x88, 0xfb, 0x95, 0x82, 0x52, 0x7d, 0x47,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char vision_interfaces__srv__DetectBoxes__TYPE_NAME[] = "vision_interfaces/srv/DetectBoxes";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char sensor_msgs__msg__Image__TYPE_NAME[] = "sensor_msgs/msg/Image";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char vision_interfaces__srv__DetectBoxes_Event__TYPE_NAME[] = "vision_interfaces/srv/DetectBoxes_Event";
static char vision_interfaces__srv__DetectBoxes_Request__TYPE_NAME[] = "vision_interfaces/srv/DetectBoxes_Request";
static char vision_interfaces__srv__DetectBoxes_Response__TYPE_NAME[] = "vision_interfaces/srv/DetectBoxes_Response";

// Define type names, field names, and default values
static char vision_interfaces__srv__DetectBoxes__FIELD_NAME__request_message[] = "request_message";
static char vision_interfaces__srv__DetectBoxes__FIELD_NAME__response_message[] = "response_message";
static char vision_interfaces__srv__DetectBoxes__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field vision_interfaces__srv__DetectBoxes__FIELDS[] = {
  {
    {vision_interfaces__srv__DetectBoxes__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vision_interfaces__srv__DetectBoxes_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {vision_interfaces__srv__DetectBoxes__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vision_interfaces__srv__DetectBoxes_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {vision_interfaces__srv__DetectBoxes__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vision_interfaces__srv__DetectBoxes_Event__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription vision_interfaces__srv__DetectBoxes__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__Image__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {vision_interfaces__srv__DetectBoxes_Event__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {vision_interfaces__srv__DetectBoxes_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {vision_interfaces__srv__DetectBoxes_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
vision_interfaces__srv__DetectBoxes__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vision_interfaces__srv__DetectBoxes__TYPE_NAME, 33, 33},
      {vision_interfaces__srv__DetectBoxes__FIELDS, 3, 3},
    },
    {vision_interfaces__srv__DetectBoxes__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__Image__EXPECTED_HASH, sensor_msgs__msg__Image__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = sensor_msgs__msg__Image__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = vision_interfaces__srv__DetectBoxes_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = vision_interfaces__srv__DetectBoxes_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = vision_interfaces__srv__DetectBoxes_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char vision_interfaces__srv__DetectBoxes_Request__FIELD_NAME__image[] = "image";

static rosidl_runtime_c__type_description__Field vision_interfaces__srv__DetectBoxes_Request__FIELDS[] = {
  {
    {vision_interfaces__srv__DetectBoxes_Request__FIELD_NAME__image, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_msgs__msg__Image__TYPE_NAME, 21, 21},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription vision_interfaces__srv__DetectBoxes_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__Image__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
vision_interfaces__srv__DetectBoxes_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vision_interfaces__srv__DetectBoxes_Request__TYPE_NAME, 41, 41},
      {vision_interfaces__srv__DetectBoxes_Request__FIELDS, 1, 1},
    },
    {vision_interfaces__srv__DetectBoxes_Request__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__Image__EXPECTED_HASH, sensor_msgs__msg__Image__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = sensor_msgs__msg__Image__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char vision_interfaces__srv__DetectBoxes_Response__FIELD_NAME__box_ids[] = "box_ids";
static char vision_interfaces__srv__DetectBoxes_Response__FIELD_NAME__widths[] = "widths";
static char vision_interfaces__srv__DetectBoxes_Response__FIELD_NAME__heights[] = "heights";
static char vision_interfaces__srv__DetectBoxes_Response__FIELD_NAME__depths[] = "depths";
static char vision_interfaces__srv__DetectBoxes_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field vision_interfaces__srv__DetectBoxes_Response__FIELDS[] = {
  {
    {vision_interfaces__srv__DetectBoxes_Response__FIELD_NAME__box_ids, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {vision_interfaces__srv__DetectBoxes_Response__FIELD_NAME__widths, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {vision_interfaces__srv__DetectBoxes_Response__FIELD_NAME__heights, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {vision_interfaces__srv__DetectBoxes_Response__FIELD_NAME__depths, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {vision_interfaces__srv__DetectBoxes_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
vision_interfaces__srv__DetectBoxes_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vision_interfaces__srv__DetectBoxes_Response__TYPE_NAME, 42, 42},
      {vision_interfaces__srv__DetectBoxes_Response__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char vision_interfaces__srv__DetectBoxes_Event__FIELD_NAME__info[] = "info";
static char vision_interfaces__srv__DetectBoxes_Event__FIELD_NAME__request[] = "request";
static char vision_interfaces__srv__DetectBoxes_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field vision_interfaces__srv__DetectBoxes_Event__FIELDS[] = {
  {
    {vision_interfaces__srv__DetectBoxes_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {vision_interfaces__srv__DetectBoxes_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {vision_interfaces__srv__DetectBoxes_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {vision_interfaces__srv__DetectBoxes_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {vision_interfaces__srv__DetectBoxes_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription vision_interfaces__srv__DetectBoxes_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_msgs__msg__Image__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {vision_interfaces__srv__DetectBoxes_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {vision_interfaces__srv__DetectBoxes_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
vision_interfaces__srv__DetectBoxes_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vision_interfaces__srv__DetectBoxes_Event__TYPE_NAME, 39, 39},
      {vision_interfaces__srv__DetectBoxes_Event__FIELDS, 3, 3},
    },
    {vision_interfaces__srv__DetectBoxes_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&sensor_msgs__msg__Image__EXPECTED_HASH, sensor_msgs__msg__Image__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = sensor_msgs__msg__Image__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = vision_interfaces__srv__DetectBoxes_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = vision_interfaces__srv__DetectBoxes_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "sensor_msgs/Image image\n"
  "---\n"
  "uint32[] box_ids\n"
  "float32[] widths\n"
  "float32[] heights\n"
  "float32[] depths\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
vision_interfaces__srv__DetectBoxes__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vision_interfaces__srv__DetectBoxes__TYPE_NAME, 33, 33},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 110, 110},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
vision_interfaces__srv__DetectBoxes_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vision_interfaces__srv__DetectBoxes_Request__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
vision_interfaces__srv__DetectBoxes_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vision_interfaces__srv__DetectBoxes_Response__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
vision_interfaces__srv__DetectBoxes_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vision_interfaces__srv__DetectBoxes_Event__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vision_interfaces__srv__DetectBoxes__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vision_interfaces__srv__DetectBoxes__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sensor_msgs__msg__Image__get_individual_type_description_source(NULL);
    sources[3] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[5] = *vision_interfaces__srv__DetectBoxes_Event__get_individual_type_description_source(NULL);
    sources[6] = *vision_interfaces__srv__DetectBoxes_Request__get_individual_type_description_source(NULL);
    sources[7] = *vision_interfaces__srv__DetectBoxes_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vision_interfaces__srv__DetectBoxes_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vision_interfaces__srv__DetectBoxes_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sensor_msgs__msg__Image__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vision_interfaces__srv__DetectBoxes_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vision_interfaces__srv__DetectBoxes_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vision_interfaces__srv__DetectBoxes_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vision_interfaces__srv__DetectBoxes_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sensor_msgs__msg__Image__get_individual_type_description_source(NULL);
    sources[3] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[5] = *vision_interfaces__srv__DetectBoxes_Request__get_individual_type_description_source(NULL);
    sources[6] = *vision_interfaces__srv__DetectBoxes_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
