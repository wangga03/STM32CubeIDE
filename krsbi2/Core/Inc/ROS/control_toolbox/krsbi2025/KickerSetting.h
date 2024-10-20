// Generated by gencpp from file krsbi2025/KickerSetting.msg
// DO NOT EDIT!


#ifndef KRSBI2025_MESSAGE_KICKERSETTING_H
#define KRSBI2025_MESSAGE_KICKERSETTING_H


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
struct KickerSetting_
{
  typedef KickerSetting_<ContainerAllocator> Type;

  KickerSetting_()
    : charge_time(0)
    , action(false)  {
    }
  KickerSetting_(const ContainerAllocator& _alloc)
    : charge_time(0)
    , action(false)  {
  (void)_alloc;
    }



   typedef int64_t _charge_time_type;
  _charge_time_type charge_time;

   typedef uint8_t _action_type;
  _action_type action;





  typedef boost::shared_ptr< ::krsbi2025::KickerSetting_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::krsbi2025::KickerSetting_<ContainerAllocator> const> ConstPtr;

}; // struct KickerSetting_

typedef ::krsbi2025::KickerSetting_<std::allocator<void> > KickerSetting;

typedef boost::shared_ptr< ::krsbi2025::KickerSetting > KickerSettingPtr;
typedef boost::shared_ptr< ::krsbi2025::KickerSetting const> KickerSettingConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::krsbi2025::KickerSetting_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::krsbi2025::KickerSetting_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::krsbi2025::KickerSetting_<ContainerAllocator1> & lhs, const ::krsbi2025::KickerSetting_<ContainerAllocator2> & rhs)
{
  return lhs.charge_time == rhs.charge_time &&
    lhs.action == rhs.action;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::krsbi2025::KickerSetting_<ContainerAllocator1> & lhs, const ::krsbi2025::KickerSetting_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace krsbi2025

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::krsbi2025::KickerSetting_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::krsbi2025::KickerSetting_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::krsbi2025::KickerSetting_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::krsbi2025::KickerSetting_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::krsbi2025::KickerSetting_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::krsbi2025::KickerSetting_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::krsbi2025::KickerSetting_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5eb35c50ef959f485735294a09362452";
  }

  static const char* value(const ::krsbi2025::KickerSetting_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5eb35c50ef959f48ULL;
  static const uint64_t static_value2 = 0x5735294a09362452ULL;
};

template<class ContainerAllocator>
struct DataType< ::krsbi2025::KickerSetting_<ContainerAllocator> >
{
  static const char* value()
  {
    return "krsbi2025/KickerSetting";
  }

  static const char* value(const ::krsbi2025::KickerSetting_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::krsbi2025::KickerSetting_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 charge_time\n"
"bool action\n"
;
  }

  static const char* value(const ::krsbi2025::KickerSetting_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::krsbi2025::KickerSetting_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.charge_time);
      stream.next(m.action);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KickerSetting_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::krsbi2025::KickerSetting_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::krsbi2025::KickerSetting_<ContainerAllocator>& v)
  {
    s << indent << "charge_time: ";
    Printer<int64_t>::stream(s, indent + "  ", v.charge_time);
    s << indent << "action: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.action);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KRSBI2025_MESSAGE_KICKERSETTING_H
