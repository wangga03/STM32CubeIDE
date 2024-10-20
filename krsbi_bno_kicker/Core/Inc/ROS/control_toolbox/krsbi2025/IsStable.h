// Generated by gencpp from file krsbi2025/IsStable.msg
// DO NOT EDIT!


#ifndef KRSBI2025_MESSAGE_ISSTABLE_H
#define KRSBI2025_MESSAGE_ISSTABLE_H


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
struct IsStable_
{
  typedef IsStable_<ContainerAllocator> Type;

  IsStable_()
    : roll(false)
    , pitch(false)
    , yaw(false)
    , sway(false)
    , depth(false)
    , pos_x(false)
    , pos_y(false)
    , pos_z(false)  {
    }
  IsStable_(const ContainerAllocator& _alloc)
    : roll(false)
    , pitch(false)
    , yaw(false)
    , sway(false)
    , depth(false)
    , pos_x(false)
    , pos_y(false)
    , pos_z(false)  {
  (void)_alloc;
    }



   typedef uint8_t _roll_type;
  _roll_type roll;

   typedef uint8_t _pitch_type;
  _pitch_type pitch;

   typedef uint8_t _yaw_type;
  _yaw_type yaw;

   typedef uint8_t _sway_type;
  _sway_type sway;

   typedef uint8_t _depth_type;
  _depth_type depth;

   typedef uint8_t _pos_x_type;
  _pos_x_type pos_x;

   typedef uint8_t _pos_y_type;
  _pos_y_type pos_y;

   typedef uint8_t _pos_z_type;
  _pos_z_type pos_z;





  typedef boost::shared_ptr< ::krsbi2025::IsStable_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::krsbi2025::IsStable_<ContainerAllocator> const> ConstPtr;

}; // struct IsStable_

typedef ::krsbi2025::IsStable_<std::allocator<void> > IsStable;

typedef boost::shared_ptr< ::krsbi2025::IsStable > IsStablePtr;
typedef boost::shared_ptr< ::krsbi2025::IsStable const> IsStableConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::krsbi2025::IsStable_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::krsbi2025::IsStable_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::krsbi2025::IsStable_<ContainerAllocator1> & lhs, const ::krsbi2025::IsStable_<ContainerAllocator2> & rhs)
{
  return lhs.roll == rhs.roll &&
    lhs.pitch == rhs.pitch &&
    lhs.yaw == rhs.yaw &&
    lhs.sway == rhs.sway &&
    lhs.depth == rhs.depth &&
    lhs.pos_x == rhs.pos_x &&
    lhs.pos_y == rhs.pos_y &&
    lhs.pos_z == rhs.pos_z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::krsbi2025::IsStable_<ContainerAllocator1> & lhs, const ::krsbi2025::IsStable_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace krsbi2025

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::krsbi2025::IsStable_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::krsbi2025::IsStable_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::krsbi2025::IsStable_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::krsbi2025::IsStable_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::krsbi2025::IsStable_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::krsbi2025::IsStable_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::krsbi2025::IsStable_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8902f97673632eb2ec3d56680ce224e6";
  }

  static const char* value(const ::krsbi2025::IsStable_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8902f97673632eb2ULL;
  static const uint64_t static_value2 = 0xec3d56680ce224e6ULL;
};

template<class ContainerAllocator>
struct DataType< ::krsbi2025::IsStable_<ContainerAllocator> >
{
  static const char* value()
  {
    return "krsbi2025/IsStable";
  }

  static const char* value(const ::krsbi2025::IsStable_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::krsbi2025::IsStable_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool roll\n"
"bool pitch\n"
"bool yaw\n"
"bool sway\n"
"bool depth\n"
"bool pos_x\n"
"bool pos_y\n"
"bool pos_z\n"
;
  }

  static const char* value(const ::krsbi2025::IsStable_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::krsbi2025::IsStable_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.roll);
      stream.next(m.pitch);
      stream.next(m.yaw);
      stream.next(m.sway);
      stream.next(m.depth);
      stream.next(m.pos_x);
      stream.next(m.pos_y);
      stream.next(m.pos_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IsStable_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::krsbi2025::IsStable_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::krsbi2025::IsStable_<ContainerAllocator>& v)
  {
    s << indent << "roll: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pitch);
    s << indent << "yaw: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.yaw);
    s << indent << "sway: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sway);
    s << indent << "depth: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.depth);
    s << indent << "pos_x: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pos_x);
    s << indent << "pos_y: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pos_y);
    s << indent << "pos_z: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pos_z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KRSBI2025_MESSAGE_ISSTABLE_H
