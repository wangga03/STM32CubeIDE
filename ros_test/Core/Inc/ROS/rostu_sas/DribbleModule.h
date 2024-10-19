#ifndef _ROS_rostu_sas_DribbleModule_h
#define _ROS_rostu_sas_DribbleModule_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace rostu_sas
{

  class DribbleModule : public ros::Msg
  {
    public:
      typedef double _left_motor_cw_type;
      _left_motor_cw_type left_motor_cw;
      typedef double _left_motor_ccw_type;
      _left_motor_ccw_type left_motor_ccw;
      typedef double _right_motor_cw_type;
      _right_motor_cw_type right_motor_cw;
      typedef double _right_motor_ccw_type;
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
      union {
        double real;
        uint64_t base;
      } u_left_motor_cw;
      u_left_motor_cw.real = this->left_motor_cw;
      *(outbuffer + offset + 0) = (u_left_motor_cw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_left_motor_cw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_left_motor_cw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_left_motor_cw.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_left_motor_cw.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_left_motor_cw.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_left_motor_cw.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_left_motor_cw.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->left_motor_cw);
      union {
        double real;
        uint64_t base;
      } u_left_motor_ccw;
      u_left_motor_ccw.real = this->left_motor_ccw;
      *(outbuffer + offset + 0) = (u_left_motor_ccw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_left_motor_ccw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_left_motor_ccw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_left_motor_ccw.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_left_motor_ccw.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_left_motor_ccw.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_left_motor_ccw.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_left_motor_ccw.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->left_motor_ccw);
      union {
        double real;
        uint64_t base;
      } u_right_motor_cw;
      u_right_motor_cw.real = this->right_motor_cw;
      *(outbuffer + offset + 0) = (u_right_motor_cw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_right_motor_cw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_right_motor_cw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_right_motor_cw.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_right_motor_cw.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_right_motor_cw.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_right_motor_cw.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_right_motor_cw.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->right_motor_cw);
      union {
        double real;
        uint64_t base;
      } u_right_motor_ccw;
      u_right_motor_ccw.real = this->right_motor_ccw;
      *(outbuffer + offset + 0) = (u_right_motor_ccw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_right_motor_ccw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_right_motor_ccw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_right_motor_ccw.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_right_motor_ccw.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_right_motor_ccw.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_right_motor_ccw.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_right_motor_ccw.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->right_motor_ccw);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_left_motor_cw;
      u_left_motor_cw.base = 0;
      u_left_motor_cw.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_left_motor_cw.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_left_motor_cw.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_left_motor_cw.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_left_motor_cw.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_left_motor_cw.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_left_motor_cw.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_left_motor_cw.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->left_motor_cw = u_left_motor_cw.real;
      offset += sizeof(this->left_motor_cw);
      union {
        double real;
        uint64_t base;
      } u_left_motor_ccw;
      u_left_motor_ccw.base = 0;
      u_left_motor_ccw.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_left_motor_ccw.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_left_motor_ccw.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_left_motor_ccw.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_left_motor_ccw.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_left_motor_ccw.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_left_motor_ccw.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_left_motor_ccw.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->left_motor_ccw = u_left_motor_ccw.real;
      offset += sizeof(this->left_motor_ccw);
      union {
        double real;
        uint64_t base;
      } u_right_motor_cw;
      u_right_motor_cw.base = 0;
      u_right_motor_cw.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_right_motor_cw.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_right_motor_cw.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_right_motor_cw.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_right_motor_cw.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_right_motor_cw.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_right_motor_cw.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_right_motor_cw.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->right_motor_cw = u_right_motor_cw.real;
      offset += sizeof(this->right_motor_cw);
      union {
        double real;
        uint64_t base;
      } u_right_motor_ccw;
      u_right_motor_ccw.base = 0;
      u_right_motor_ccw.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_right_motor_ccw.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_right_motor_ccw.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_right_motor_ccw.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_right_motor_ccw.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_right_motor_ccw.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_right_motor_ccw.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_right_motor_ccw.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->right_motor_ccw = u_right_motor_ccw.real;
      offset += sizeof(this->right_motor_ccw);
     return offset;
    }

    virtual const char * getType() override { return "rostu_sas/DribbleModule"; };
    virtual const char * getMD5() override { return "8999603c5bbfafec517920ea2273e31e"; };

  };

}
#endif
