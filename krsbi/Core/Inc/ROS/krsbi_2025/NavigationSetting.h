#ifndef _ROS_krsbi_2025_NavigationSetting_h
#define _ROS_krsbi_2025_NavigationSetting_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace krsbi_2025
{

  class NavigationSetting : public ros::Msg
  {
    public:
      typedef float _speed_type;
      _speed_type speed;
      typedef float _direction_type;
      _direction_type direction;
      typedef float _rotation_type;
      _rotation_type rotation;

    NavigationSetting():
      speed(0),
      direction(0),
      rotation(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->speed);
      offset += serializeAvrFloat64(outbuffer + offset, this->direction);
      offset += serializeAvrFloat64(outbuffer + offset, this->rotation);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->speed));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->direction));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->rotation));
     return offset;
    }

    virtual const char * getType() override { return "krsbi_2025/NavigationSetting"; };
    virtual const char * getMD5() override { return "9f31eebfa73f5c8acdb331fc8bb73189"; };

  };

}
#endif
