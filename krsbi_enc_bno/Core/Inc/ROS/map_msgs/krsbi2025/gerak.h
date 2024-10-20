// Generated by gencpp from file krsbi2025/gerak.msg
// DO NOT EDIT!


#ifndef KRSBI2025_MESSAGE_GERAK_H
#define KRSBI2025_MESSAGE_GERAK_H


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
struct gerak_
{
  typedef gerak_<ContainerAllocator> Type;

  gerak_()
    : thruster1(0.0)
    , thruster3(0.0)
    , thruster2(0.0)
    , thruster4(0.0)  {
    }
  gerak_(const ContainerAllocator& _alloc)
    : thruster1(0.0)
    , thruster3(0.0)
    , thruster2(0.0)
    , thruster4(0.0)  {
  (void)_alloc;
    }



   typedef float _thruster1_type;
  _thruster1_type thruster1;

   typedef float _thruster3_type;
  _thruster3_type thruster3;

   typedef float _thruster2_type;
  _thruster2_type thruster2;

   typedef float _thruster4_type;
  _thruster4_type thruster4;





  typedef boost::shared_ptr< ::krsbi2025::gerak_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::krsbi2025::gerak_<ContainerAllocator> const> ConstPtr;

}; // struct gerak_

typedef ::krsbi2025::gerak_<std::allocator<void> > gerak;

typedef boost::shared_ptr< ::krsbi2025::gerak > gerakPtr;
typedef boost::shared_ptr< ::krsbi2025::gerak const> gerakConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::krsbi2025::gerak_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::krsbi2025::gerak_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::krsbi2025::gerak_<ContainerAllocator1> & lhs, const ::krsbi2025::gerak_<ContainerAllocator2> & rhs)
{
  return lhs.thruster1 == rhs.thruster1 &&
    lhs.thruster3 == rhs.thruster3 &&
    lhs.thruster2 == rhs.thruster2 &&
    lhs.thruster4 == rhs.thruster4;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::krsbi2025::gerak_<ContainerAllocator1> & lhs, const ::krsbi2025::gerak_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace krsbi2025

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::krsbi2025::gerak_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::krsbi2025::gerak_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::krsbi2025::gerak_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::krsbi2025::gerak_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::krsbi2025::gerak_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::krsbi2025::gerak_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::krsbi2025::gerak_<ContainerAllocator> >
{
  static const char* value()
  {
    return "84a3d203d29beb5108829ce819fec39c";
  }

  static const char* value(const ::krsbi2025::gerak_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x84a3d203d29beb51ULL;
  static const uint64_t static_value2 = 0x08829ce819fec39cULL;
};

template<class ContainerAllocator>
struct DataType< ::krsbi2025::gerak_<ContainerAllocator> >
{
  static const char* value()
  {
    return "krsbi2025/gerak";
  }

  static const char* value(const ::krsbi2025::gerak_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::krsbi2025::gerak_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 thruster1\n"
"float32 thruster3\n"
"float32 thruster2\n"
"float32 thruster4\n"
;
  }

  static const char* value(const ::krsbi2025::gerak_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::krsbi2025::gerak_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.thruster1);
      stream.next(m.thruster3);
      stream.next(m.thruster2);
      stream.next(m.thruster4);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct gerak_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::krsbi2025::gerak_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::krsbi2025::gerak_<ContainerAllocator>& v)
  {
    s << indent << "thruster1: ";
    Printer<float>::stream(s, indent + "  ", v.thruster1);
    s << indent << "thruster3: ";
    Printer<float>::stream(s, indent + "  ", v.thruster3);
    s << indent << "thruster2: ";
    Printer<float>::stream(s, indent + "  ", v.thruster2);
    s << indent << "thruster4: ";
    Printer<float>::stream(s, indent + "  ", v.thruster4);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KRSBI2025_MESSAGE_GERAK_H
