#ifndef _ROS_rostu_sas_NavigationSetting_h
#define _ROS_rostu_sas_NavigationSetting_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace rostu_sas
{

  class NavigationSetting : public ros::Msg
  {
    public:
      typedef double _speed_type;
      _speed_type speed;
      typedef double _direction_type;
      _direction_type direction;
      typedef double _rotation_type;
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
      union {
        double real;
        uint64_t base;
      } u_speed;
      u_speed.real = this->speed;
      *(outbuffer + offset + 0) = (u_speed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_speed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_speed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_speed.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_speed.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_speed.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_speed.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_speed.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->speed);
      union {
        double real;
        uint64_t base;
      } u_direction;
      u_direction.real = this->direction;
      *(outbuffer + offset + 0) = (u_direction.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_direction.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_direction.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_direction.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_direction.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_direction.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_direction.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_direction.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->direction);
      union {
        double real;
        uint64_t base;
      } u_rotation;
      u_rotation.real = this->rotation;
      *(outbuffer + offset + 0) = (u_rotation.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rotation.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rotation.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rotation.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_rotation.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_rotation.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_rotation.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_rotation.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->rotation);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_speed;
      u_speed.base = 0;
      u_speed.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_speed.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_speed.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_speed.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_speed.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_speed.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_speed.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_speed.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->speed = u_speed.real;
      offset += sizeof(this->speed);
      union {
        double real;
        uint64_t base;
      } u_direction;
      u_direction.base = 0;
      u_direction.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_direction.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_direction.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_direction.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_direction.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_direction.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_direction.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_direction.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->direction = u_direction.real;
      offset += sizeof(this->direction);
      union {
        double real;
        uint64_t base;
      } u_rotation;
      u_rotation.base = 0;
      u_rotation.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rotation.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rotation.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rotation.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_rotation.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_rotation.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_rotation.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_rotation.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->rotation = u_rotation.real;
      offset += sizeof(this->rotation);
     return offset;
    }

    virtual const char * getType() override { return "rostu_sas/NavigationSetting"; };
    virtual const char * getMD5() override { return "9f31eebfa73f5c8acdb331fc8bb73189"; };

  };

}
#endif
