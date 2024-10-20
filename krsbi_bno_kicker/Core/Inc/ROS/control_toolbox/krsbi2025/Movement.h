// Generated by gencpp from file krsbi2025/Movement.msg
// DO NOT EDIT!


#ifndef KRSBI2025_MESSAGE_MOVEMENT_H
#define KRSBI2025_MESSAGE_MOVEMENT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace krsbi2025
{
template <class ContainerAllocator>
struct Movement_
{
  typedef Movement_<ContainerAllocator> Type;

  Movement_()
    : type()
    , pwm(0.0)  {
    }
  Movement_(const ContainerAllocator& _alloc)
    : type(_alloc)
    , pwm(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _type_type;
  _type_type type;

   typedef float _pwm_type;
  _pwm_type pwm;





  typedef boost::shared_ptr< ::krsbi2025::Movement_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::krsbi2025::Movement_<ContainerAllocator> const> ConstPtr;

}; // struct Movement_

typedef ::krsbi2025::Movement_<std::allocator<void> > Movement;

typedef boost::shared_ptr< ::krsbi2025::Movement > MovementPtr;
typedef boost::shared_ptr< ::krsbi2025::Movement const> MovementConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::krsbi2025::Movement_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::krsbi2025::Movement_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::krsbi2025::Movement_<ContainerAllocator1> & lhs, const ::krsbi2025::Movement_<ContainerAllocator2> & rhs)
{
  return lhs.type == rhs.type &&
    lhs.pwm == rhs.pwm;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::krsbi2025::Movement_<ContainerAllocator1> & lhs, const ::krsbi2025::Movement_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace krsbi2025

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::krsbi2025::Movement_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::krsbi2025::Movement_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::krsbi2025::Movement_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::krsbi2025::Movement_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::krsbi2025::Movement_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::krsbi2025::Movement_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::krsbi2025::Movement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "49a76244863572bf412aebd7cc0e5ab4";
  }

  static const char* value(const ::krsbi2025::Movement_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x49a76244863572bfULL;
  static const uint64_t static_value2 = 0x412aebd7cc0e5ab4ULL;
};

template<class ContainerAllocator>
struct DataType< ::krsbi2025::Movement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "krsbi2025/Movement";
  }

  static const char* value(const ::krsbi2025::Movement_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::krsbi2025::Movement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string type\n"
"float32 pwm\n"
;
  }

  static const char* value(const ::krsbi2025::Movement_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::krsbi2025::Movement_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.pwm);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Movement_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::krsbi2025::Movement_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::krsbi2025::Movement_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.type);
    s << indent << "pwm: ";
    Printer<float>::stream(s, indent + "  ", v.pwm);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KRSBI2025_MESSAGE_MOVEMENT_H
