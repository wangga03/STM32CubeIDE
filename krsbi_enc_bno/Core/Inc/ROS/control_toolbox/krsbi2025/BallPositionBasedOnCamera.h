// Generated by gencpp from file krsbi2025/BallPositionBasedOnCamera.msg
// DO NOT EDIT!


#ifndef KRSBI2025_MESSAGE_BALLPOSITIONBASEDONCAMERA_H
#define KRSBI2025_MESSAGE_BALLPOSITIONBASEDONCAMERA_H


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
struct BallPositionBasedOnCamera_
{
  typedef BallPositionBasedOnCamera_<ContainerAllocator> Type;

  BallPositionBasedOnCamera_()
    : distance(0)
    , angle(0)
    , x_on_camera(0)
    , y_on_camera(0)
    , x_real(0)
    , y_real(0)  {
    }
  BallPositionBasedOnCamera_(const ContainerAllocator& _alloc)
    : distance(0)
    , angle(0)
    , x_on_camera(0)
    , y_on_camera(0)
    , x_real(0)
    , y_real(0)  {
  (void)_alloc;
    }



   typedef int64_t _distance_type;
  _distance_type distance;

   typedef int64_t _angle_type;
  _angle_type angle;

   typedef int64_t _x_on_camera_type;
  _x_on_camera_type x_on_camera;

   typedef int64_t _y_on_camera_type;
  _y_on_camera_type y_on_camera;

   typedef int64_t _x_real_type;
  _x_real_type x_real;

   typedef int64_t _y_real_type;
  _y_real_type y_real;





  typedef boost::shared_ptr< ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator> const> ConstPtr;

}; // struct BallPositionBasedOnCamera_

typedef ::krsbi2025::BallPositionBasedOnCamera_<std::allocator<void> > BallPositionBasedOnCamera;

typedef boost::shared_ptr< ::krsbi2025::BallPositionBasedOnCamera > BallPositionBasedOnCameraPtr;
typedef boost::shared_ptr< ::krsbi2025::BallPositionBasedOnCamera const> BallPositionBasedOnCameraConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator1> & lhs, const ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator2> & rhs)
{
  return lhs.distance == rhs.distance &&
    lhs.angle == rhs.angle &&
    lhs.x_on_camera == rhs.x_on_camera &&
    lhs.y_on_camera == rhs.y_on_camera &&
    lhs.x_real == rhs.x_real &&
    lhs.y_real == rhs.y_real;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator1> & lhs, const ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace krsbi2025

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c32d588a00265202dbcab5311745340d";
  }

  static const char* value(const ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc32d588a00265202ULL;
  static const uint64_t static_value2 = 0xdbcab5311745340dULL;
};

template<class ContainerAllocator>
struct DataType< ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator> >
{
  static const char* value()
  {
    return "krsbi2025/BallPositionBasedOnCamera";
  }

  static const char* value(const ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 distance\n"
"int64 angle\n"
"int64 x_on_camera\n"
"int64 y_on_camera\n"
"int64 x_real\n"
"int64 y_real\n"
;
  }

  static const char* value(const ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distance);
      stream.next(m.angle);
      stream.next(m.x_on_camera);
      stream.next(m.y_on_camera);
      stream.next(m.x_real);
      stream.next(m.y_real);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BallPositionBasedOnCamera_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::krsbi2025::BallPositionBasedOnCamera_<ContainerAllocator>& v)
  {
    s << indent << "distance: ";
    Printer<int64_t>::stream(s, indent + "  ", v.distance);
    s << indent << "angle: ";
    Printer<int64_t>::stream(s, indent + "  ", v.angle);
    s << indent << "x_on_camera: ";
    Printer<int64_t>::stream(s, indent + "  ", v.x_on_camera);
    s << indent << "y_on_camera: ";
    Printer<int64_t>::stream(s, indent + "  ", v.y_on_camera);
    s << indent << "x_real: ";
    Printer<int64_t>::stream(s, indent + "  ", v.x_real);
    s << indent << "y_real: ";
    Printer<int64_t>::stream(s, indent + "  ", v.y_real);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KRSBI2025_MESSAGE_BALLPOSITIONBASEDONCAMERA_H
