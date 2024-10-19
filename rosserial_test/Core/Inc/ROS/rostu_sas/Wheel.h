#ifndef _ROS_rostu_sas_Wheel_h
#define _ROS_rostu_sas_Wheel_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace rostu_sas
{

  class Wheel : public ros::Msg
  {
    public:
      typedef double _left_wheel_cw_type;
      _left_wheel_cw_type left_wheel_cw;
      typedef double _left_wheel_ccw_type;
      _left_wheel_ccw_type left_wheel_ccw;
      typedef double _right_wheel_cw_type;
      _right_wheel_cw_type right_wheel_cw;
      typedef double _right_wheel_ccw_type;
      _right_wheel_ccw_type right_wheel_ccw;
      typedef double _bottom_wheel_cw_type;
      _bottom_wheel_cw_type bottom_wheel_cw;
      typedef double _bottom_wheel_ccw_type;
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
      union {
        double real;
        uint64_t base;
      } u_left_wheel_cw;
      u_left_wheel_cw.real = this->left_wheel_cw;
      *(outbuffer + offset + 0) = (u_left_wheel_cw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_left_wheel_cw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_left_wheel_cw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_left_wheel_cw.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_left_wheel_cw.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_left_wheel_cw.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_left_wheel_cw.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_left_wheel_cw.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->left_wheel_cw);
      union {
        double real;
        uint64_t base;
      } u_left_wheel_ccw;
      u_left_wheel_ccw.real = this->left_wheel_ccw;
      *(outbuffer + offset + 0) = (u_left_wheel_ccw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_left_wheel_ccw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_left_wheel_ccw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_left_wheel_ccw.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_left_wheel_ccw.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_left_wheel_ccw.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_left_wheel_ccw.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_left_wheel_ccw.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->left_wheel_ccw);
      union {
        double real;
        uint64_t base;
      } u_right_wheel_cw;
      u_right_wheel_cw.real = this->right_wheel_cw;
      *(outbuffer + offset + 0) = (u_right_wheel_cw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_right_wheel_cw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_right_wheel_cw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_right_wheel_cw.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_right_wheel_cw.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_right_wheel_cw.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_right_wheel_cw.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_right_wheel_cw.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->right_wheel_cw);
      union {
        double real;
        uint64_t base;
      } u_right_wheel_ccw;
      u_right_wheel_ccw.real = this->right_wheel_ccw;
      *(outbuffer + offset + 0) = (u_right_wheel_ccw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_right_wheel_ccw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_right_wheel_ccw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_right_wheel_ccw.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_right_wheel_ccw.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_right_wheel_ccw.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_right_wheel_ccw.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_right_wheel_ccw.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->right_wheel_ccw);
      union {
        double real;
        uint64_t base;
      } u_bottom_wheel_cw;
      u_bottom_wheel_cw.real = this->bottom_wheel_cw;
      *(outbuffer + offset + 0) = (u_bottom_wheel_cw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_bottom_wheel_cw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_bottom_wheel_cw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_bottom_wheel_cw.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_bottom_wheel_cw.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_bottom_wheel_cw.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_bottom_wheel_cw.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_bottom_wheel_cw.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->bottom_wheel_cw);
      union {
        double real;
        uint64_t base;
      } u_bottom_wheel_ccw;
      u_bottom_wheel_ccw.real = this->bottom_wheel_ccw;
      *(outbuffer + offset + 0) = (u_bottom_wheel_ccw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_bottom_wheel_ccw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_bottom_wheel_ccw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_bottom_wheel_ccw.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_bottom_wheel_ccw.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_bottom_wheel_ccw.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_bottom_wheel_ccw.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_bottom_wheel_ccw.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->bottom_wheel_ccw);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_left_wheel_cw;
      u_left_wheel_cw.base = 0;
      u_left_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_left_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_left_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_left_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_left_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_left_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_left_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_left_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->left_wheel_cw = u_left_wheel_cw.real;
      offset += sizeof(this->left_wheel_cw);
      union {
        double real;
        uint64_t base;
      } u_left_wheel_ccw;
      u_left_wheel_ccw.base = 0;
      u_left_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_left_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_left_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_left_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_left_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_left_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_left_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_left_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->left_wheel_ccw = u_left_wheel_ccw.real;
      offset += sizeof(this->left_wheel_ccw);
      union {
        double real;
        uint64_t base;
      } u_right_wheel_cw;
      u_right_wheel_cw.base = 0;
      u_right_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_right_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_right_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_right_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_right_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_right_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_right_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_right_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->right_wheel_cw = u_right_wheel_cw.real;
      offset += sizeof(this->right_wheel_cw);
      union {
        double real;
        uint64_t base;
      } u_right_wheel_ccw;
      u_right_wheel_ccw.base = 0;
      u_right_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_right_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_right_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_right_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_right_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_right_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_right_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_right_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->right_wheel_ccw = u_right_wheel_ccw.real;
      offset += sizeof(this->right_wheel_ccw);
      union {
        double real;
        uint64_t base;
      } u_bottom_wheel_cw;
      u_bottom_wheel_cw.base = 0;
      u_bottom_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_bottom_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_bottom_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_bottom_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_bottom_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_bottom_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_bottom_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_bottom_wheel_cw.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->bottom_wheel_cw = u_bottom_wheel_cw.real;
      offset += sizeof(this->bottom_wheel_cw);
      union {
        double real;
        uint64_t base;
      } u_bottom_wheel_ccw;
      u_bottom_wheel_ccw.base = 0;
      u_bottom_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_bottom_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_bottom_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_bottom_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_bottom_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_bottom_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_bottom_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_bottom_wheel_ccw.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->bottom_wheel_ccw = u_bottom_wheel_ccw.real;
      offset += sizeof(this->bottom_wheel_ccw);
     return offset;
    }

    virtual const char * getType() override { return "rostu_sas/Wheel"; };
    virtual const char * getMD5() override { return "23cc0e6db082887e7d28f8d9255b33a9"; };

  };

}
#endif
