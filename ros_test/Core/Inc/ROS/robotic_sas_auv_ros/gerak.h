#ifndef _ROS_robotic_sas_auv_ros_gerak_h
#define _ROS_robotic_sas_auv_ros_gerak_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace robotic_sas_auv_ros
{

  class gerak : public ros::Msg
  {
    public:
      typedef float _thruster1_type;
      _thruster1_type thruster1;
      typedef float _thruster3_type;
      _thruster3_type thruster3;
      typedef float _thruster2_type;
      _thruster2_type thruster2;
      typedef float _thruster4_type;
      _thruster4_type thruster4;

    gerak():
      thruster1(0),
      thruster3(0),
      thruster2(0),
      thruster4(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_thruster1;
      u_thruster1.real = this->thruster1;
      *(outbuffer + offset + 0) = (u_thruster1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_thruster1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_thruster1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_thruster1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->thruster1);
      union {
        float real;
        uint32_t base;
      } u_thruster3;
      u_thruster3.real = this->thruster3;
      *(outbuffer + offset + 0) = (u_thruster3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_thruster3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_thruster3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_thruster3.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->thruster3);
      union {
        float real;
        uint32_t base;
      } u_thruster2;
      u_thruster2.real = this->thruster2;
      *(outbuffer + offset + 0) = (u_thruster2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_thruster2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_thruster2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_thruster2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->thruster2);
      union {
        float real;
        uint32_t base;
      } u_thruster4;
      u_thruster4.real = this->thruster4;
      *(outbuffer + offset + 0) = (u_thruster4.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_thruster4.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_thruster4.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_thruster4.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->thruster4);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_thruster1;
      u_thruster1.base = 0;
      u_thruster1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_thruster1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_thruster1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_thruster1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->thruster1 = u_thruster1.real;
      offset += sizeof(this->thruster1);
      union {
        float real;
        uint32_t base;
      } u_thruster3;
      u_thruster3.base = 0;
      u_thruster3.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_thruster3.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_thruster3.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_thruster3.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->thruster3 = u_thruster3.real;
      offset += sizeof(this->thruster3);
      union {
        float real;
        uint32_t base;
      } u_thruster2;
      u_thruster2.base = 0;
      u_thruster2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_thruster2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_thruster2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_thruster2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->thruster2 = u_thruster2.real;
      offset += sizeof(this->thruster2);
      union {
        float real;
        uint32_t base;
      } u_thruster4;
      u_thruster4.base = 0;
      u_thruster4.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_thruster4.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_thruster4.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_thruster4.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->thruster4 = u_thruster4.real;
      offset += sizeof(this->thruster4);
     return offset;
    }

    virtual const char * getType() override { return "robotic_sas_auv_ros/gerak"; };
    virtual const char * getMD5() override { return "84a3d203d29beb5108829ce819fec39c"; };

  };

}
#endif
