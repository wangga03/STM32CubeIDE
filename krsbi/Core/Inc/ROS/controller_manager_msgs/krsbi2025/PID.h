#ifndef _ROS_krsbi2025_PID_h
#define _ROS_krsbi2025_PID_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace krsbi2025
{

  class PID : public ros::Msg
  {
    public:
      typedef float _outw_type;
      _outw_type outw;
      typedef float _outy_type;
      _outy_type outy;

    PID():
      outw(0),
      outy(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_outw;
      u_outw.real = this->outw;
      *(outbuffer + offset + 0) = (u_outw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_outw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_outw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_outw.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->outw);
      union {
        float real;
        uint32_t base;
      } u_outy;
      u_outy.real = this->outy;
      *(outbuffer + offset + 0) = (u_outy.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_outy.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_outy.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_outy.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->outy);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_outw;
      u_outw.base = 0;
      u_outw.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_outw.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_outw.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_outw.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->outw = u_outw.real;
      offset += sizeof(this->outw);
      union {
        float real;
        uint32_t base;
      } u_outy;
      u_outy.base = 0;
      u_outy.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_outy.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_outy.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_outy.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->outy = u_outy.real;
      offset += sizeof(this->outy);
     return offset;
    }

    virtual const char * getType() override { return "krsbi2025/PID"; };
    virtual const char * getMD5() override { return "379ea6ebbb86291b6b9b88c13f43196d"; };

  };

}
#endif
