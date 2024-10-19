#ifndef _ROS_krsbi_2025_ControlOutput_h
#define _ROS_krsbi_2025_ControlOutput_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace krsbi_2025
{

  class ControlOutput : public ros::Msg
  {
    public:
      typedef float _outw_type;
      _outw_type outw;
      typedef float _outy_type;
      _outy_type outy;

    ControlOutput():
      outw(0),
      outy(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->outw);
      offset += serializeAvrFloat64(outbuffer + offset, this->outy);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->outw));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->outy));
     return offset;
    }

    virtual const char * getType() override { return "krsbi_2025/ControlOutput"; };
    virtual const char * getMD5() override { return "2c7915d3f5afaa8271d2c41f5917d643"; };

  };

}
#endif
