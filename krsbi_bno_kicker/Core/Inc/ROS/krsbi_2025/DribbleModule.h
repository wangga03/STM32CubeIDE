#ifndef _ROS_krsbi_2025_DribbleModule_h
#define _ROS_krsbi_2025_DribbleModule_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace krsbi_2025
{

  class DribbleModule : public ros::Msg
  {
    public:
      typedef float _left_motor_cw_type;
      _left_motor_cw_type left_motor_cw;
      typedef float _left_motor_ccw_type;
      _left_motor_ccw_type left_motor_ccw;
      typedef float _right_motor_cw_type;
      _right_motor_cw_type right_motor_cw;
      typedef float _right_motor_ccw_type;
      _right_motor_ccw_type right_motor_ccw;

    DribbleModule():
      left_motor_cw(0),
      left_motor_ccw(0),
      right_motor_cw(0),
      right_motor_ccw(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->left_motor_cw);
      offset += serializeAvrFloat64(outbuffer + offset, this->left_motor_ccw);
      offset += serializeAvrFloat64(outbuffer + offset, this->right_motor_cw);
      offset += serializeAvrFloat64(outbuffer + offset, this->right_motor_ccw);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->left_motor_cw));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->left_motor_ccw));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->right_motor_cw));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->right_motor_ccw));
     return offset;
    }

    virtual const char * getType() override { return "krsbi_2025/DribbleModule"; };
    virtual const char * getMD5() override { return "8999603c5bbfafec517920ea2273e31e"; };

  };

}
#endif
