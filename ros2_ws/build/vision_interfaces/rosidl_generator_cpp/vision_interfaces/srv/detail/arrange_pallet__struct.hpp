// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vision_interfaces:srv/ArrangePallet.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vision_interfaces/srv/arrange_pallet.hpp"


#ifndef VISION_INTERFACES__SRV__DETAIL__ARRANGE_PALLET__STRUCT_HPP_
#define VISION_INTERFACES__SRV__DETAIL__ARRANGE_PALLET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__vision_interfaces__srv__ArrangePallet_Request __attribute__((deprecated))
#else
# define DEPRECATED__vision_interfaces__srv__ArrangePallet_Request __declspec(deprecated)
#endif

namespace vision_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArrangePallet_Request_
{
  using Type = ArrangePallet_Request_<ContainerAllocator>;

  explicit ArrangePallet_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ArrangePallet_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _box_ids_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _box_ids_type box_ids;
  using _widths_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _widths_type widths;
  using _heights_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _heights_type heights;
  using _depths_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _depths_type depths;

  // setters for named parameter idiom
  Type & set__box_ids(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->box_ids = _arg;
    return *this;
  }
  Type & set__widths(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->widths = _arg;
    return *this;
  }
  Type & set__heights(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->heights = _arg;
    return *this;
  }
  Type & set__depths(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->depths = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vision_interfaces::srv::ArrangePallet_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const vision_interfaces::srv::ArrangePallet_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vision_interfaces::srv::ArrangePallet_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vision_interfaces::srv::ArrangePallet_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vision_interfaces::srv::ArrangePallet_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vision_interfaces::srv::ArrangePallet_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vision_interfaces::srv::ArrangePallet_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vision_interfaces::srv::ArrangePallet_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vision_interfaces::srv::ArrangePallet_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vision_interfaces::srv::ArrangePallet_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vision_interfaces__srv__ArrangePallet_Request
    std::shared_ptr<vision_interfaces::srv::ArrangePallet_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vision_interfaces__srv__ArrangePallet_Request
    std::shared_ptr<vision_interfaces::srv::ArrangePallet_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArrangePallet_Request_ & other) const
  {
    if (this->box_ids != other.box_ids) {
      return false;
    }
    if (this->widths != other.widths) {
      return false;
    }
    if (this->heights != other.heights) {
      return false;
    }
    if (this->depths != other.depths) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArrangePallet_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArrangePallet_Request_

// alias to use template instance with default allocator
using ArrangePallet_Request =
  vision_interfaces::srv::ArrangePallet_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vision_interfaces


#ifndef _WIN32
# define DEPRECATED__vision_interfaces__srv__ArrangePallet_Response __attribute__((deprecated))
#else
# define DEPRECATED__vision_interfaces__srv__ArrangePallet_Response __declspec(deprecated)
#endif

namespace vision_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArrangePallet_Response_
{
  using Type = ArrangePallet_Response_<ContainerAllocator>;

  explicit ArrangePallet_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->strategy = "";
      this->total_layers = 0ul;
      this->pallet_fill_percentage = 0.0f;
      this->success = false;
    }
  }

  explicit ArrangePallet_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : strategy(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->strategy = "";
      this->total_layers = 0ul;
      this->pallet_fill_percentage = 0.0f;
      this->success = false;
    }
  }

  // field types and members
  using _strategy_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _strategy_type strategy;
  using _layer_descriptions_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _layer_descriptions_type layer_descriptions;
  using _total_layers_type =
    uint32_t;
  _total_layers_type total_layers;
  using _pallet_fill_percentage_type =
    float;
  _pallet_fill_percentage_type pallet_fill_percentage;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__strategy(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->strategy = _arg;
    return *this;
  }
  Type & set__layer_descriptions(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->layer_descriptions = _arg;
    return *this;
  }
  Type & set__total_layers(
    const uint32_t & _arg)
  {
    this->total_layers = _arg;
    return *this;
  }
  Type & set__pallet_fill_percentage(
    const float & _arg)
  {
    this->pallet_fill_percentage = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vision_interfaces::srv::ArrangePallet_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const vision_interfaces::srv::ArrangePallet_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vision_interfaces::srv::ArrangePallet_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vision_interfaces::srv::ArrangePallet_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vision_interfaces::srv::ArrangePallet_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vision_interfaces::srv::ArrangePallet_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vision_interfaces::srv::ArrangePallet_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vision_interfaces::srv::ArrangePallet_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vision_interfaces::srv::ArrangePallet_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vision_interfaces::srv::ArrangePallet_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vision_interfaces__srv__ArrangePallet_Response
    std::shared_ptr<vision_interfaces::srv::ArrangePallet_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vision_interfaces__srv__ArrangePallet_Response
    std::shared_ptr<vision_interfaces::srv::ArrangePallet_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArrangePallet_Response_ & other) const
  {
    if (this->strategy != other.strategy) {
      return false;
    }
    if (this->layer_descriptions != other.layer_descriptions) {
      return false;
    }
    if (this->total_layers != other.total_layers) {
      return false;
    }
    if (this->pallet_fill_percentage != other.pallet_fill_percentage) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArrangePallet_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArrangePallet_Response_

// alias to use template instance with default allocator
using ArrangePallet_Response =
  vision_interfaces::srv::ArrangePallet_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vision_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vision_interfaces__srv__ArrangePallet_Event __attribute__((deprecated))
#else
# define DEPRECATED__vision_interfaces__srv__ArrangePallet_Event __declspec(deprecated)
#endif

namespace vision_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArrangePallet_Event_
{
  using Type = ArrangePallet_Event_<ContainerAllocator>;

  explicit ArrangePallet_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ArrangePallet_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<vision_interfaces::srv::ArrangePallet_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vision_interfaces::srv::ArrangePallet_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<vision_interfaces::srv::ArrangePallet_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vision_interfaces::srv::ArrangePallet_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<vision_interfaces::srv::ArrangePallet_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vision_interfaces::srv::ArrangePallet_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<vision_interfaces::srv::ArrangePallet_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vision_interfaces::srv::ArrangePallet_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vision_interfaces::srv::ArrangePallet_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const vision_interfaces::srv::ArrangePallet_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vision_interfaces::srv::ArrangePallet_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vision_interfaces::srv::ArrangePallet_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vision_interfaces::srv::ArrangePallet_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vision_interfaces::srv::ArrangePallet_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vision_interfaces::srv::ArrangePallet_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vision_interfaces::srv::ArrangePallet_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vision_interfaces::srv::ArrangePallet_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vision_interfaces::srv::ArrangePallet_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vision_interfaces__srv__ArrangePallet_Event
    std::shared_ptr<vision_interfaces::srv::ArrangePallet_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vision_interfaces__srv__ArrangePallet_Event
    std::shared_ptr<vision_interfaces::srv::ArrangePallet_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArrangePallet_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArrangePallet_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArrangePallet_Event_

// alias to use template instance with default allocator
using ArrangePallet_Event =
  vision_interfaces::srv::ArrangePallet_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vision_interfaces

namespace vision_interfaces
{

namespace srv
{

struct ArrangePallet
{
  using Request = vision_interfaces::srv::ArrangePallet_Request;
  using Response = vision_interfaces::srv::ArrangePallet_Response;
  using Event = vision_interfaces::srv::ArrangePallet_Event;
};

}  // namespace srv

}  // namespace vision_interfaces

#endif  // VISION_INTERFACES__SRV__DETAIL__ARRANGE_PALLET__STRUCT_HPP_
