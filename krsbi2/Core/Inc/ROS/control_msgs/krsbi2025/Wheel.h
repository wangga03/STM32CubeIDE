#ifndef _ROS_krsbi2025_Wheel_h
#define _ROS_krsbi2025_Wheel_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace krsbi2025
{

  class Wheel : public ros::Msg
  {
    public:
      typedef float _left_wheel_cw_type;
      _left_wheel_cw_type left_wheel_cw;
      typedef float _left_wheel_ccw_type;
      _left_wheel_ccw_type left_wheel_ccw;
      typedef float _right_wheel_cw_type;
      _right_wheel_cw_type right_wheel_cw;
      typedef float _right_wheel_ccw_type;
      _right_wheel_ccw_type right_wheel_ccw;
      typedef float _bottom_wheel_cw_type;
      _bottom_wheel_cw_type bottom_wheel_cw;
      typedef float _bottom_wheel_ccw_type;
      _bottom_wheel_ccw_type bottom_wheel_ccw;

    Wheel():
      left_wheel_cw(0),
      left_wheel_ccw(0),
      right_wheel_cw(0),
      right_wheel_ccw(0),
      bottom_wheel_cw(0),
      bottom_wheel_ccw(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->left_wheel_cw);
      offset += serializeAvrFloat64(outbuffer + offset, this->left_wheel_ccw);
      offset += serializeAvrFloat64(outbuffer + offset, this->right_wheel_cw);
      offset += serializeAvrFloat64(outbuffer + offset, this->right_wheel_ccw);
      offset += serializeAvrFloat64(outbuffer + offset, this->bottom_wheel_cw);
      offset += serializeAvrFloat64(outbuffer + offset, this->bottom_wheel_ccw);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->left_wheel_cw));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->left_wheel_ccw));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->right_wheel_cw));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->right_wheel_ccw));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->bottom_wheel_cw));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->bottom_wheel_ccw));
     return offset;
    }

    virtual const char * getType() override { return "krsbi2025/Wheel"; };
    virtual const char * getMD5() override { return "23cc0e6db082887e7d28f8d9255b33a9"; };

  };

}
#endif
