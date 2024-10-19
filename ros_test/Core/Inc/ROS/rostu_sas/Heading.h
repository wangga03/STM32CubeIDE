#ifndef _ROS_rostu_sas_Heading_h
#define _ROS_rostu_sas_Heading_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace rostu_sas
{

  class Heading : public ros::Msg
  {
    public:
      typedef int16_t _mag_x_type;
      _mag_x_type mag_x;
      typedef int16_t _mag_y_type;
      _mag_y_type mag_y;
      typedef int16_t _mag_z_type;
      _mag_z_type mag_z;
      typedef float _yaw_type;
      _yaw_type yaw;

    Heading():
      mag_x(0),
      mag_y(0),
      mag_z(0),
      yaw(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_mag_x;
      u_mag_x.real = this->mag_x;
      *(outbuffer + offset + 0) = (u_mag_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_mag_x.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->mag_x);
      union {
        int16_t real;
        uint16_t base;
      } u_mag_y;
      u_mag_y.real = this->mag_y;
      *(outbuffer + offset + 0) = (u_mag_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_mag_y.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->mag_y);
      union {
        int16_t real;
        uint16_t base;
      } u_mag_z;
      u_mag_z.real = this->mag_z;
      *(outbuffer + offset + 0) = (u_mag_z.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_mag_z.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->mag_z);
      union {
        float real;
        uint32_t base;
      } u_yaw;
      u_yaw.real = this->yaw;
      *(outbuffer + offset + 0) = (u_yaw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yaw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yaw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yaw.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->yaw);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_mag_x;
      u_mag_x.base = 0;
      u_mag_x.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_mag_x.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->mag_x = u_mag_x.real;
      offset += sizeof(this->mag_x);
      union {
        int16_t real;
        uint16_t base;
      } u_mag_y;
      u_mag_y.base = 0;
      u_mag_y.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_mag_y.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->mag_y = u_mag_y.real;
      offset += sizeof(this->mag_y);
      union {
        int16_t real;
        uint16_t base;
      } u_mag_z;
      u_mag_z.base = 0;
      u_mag_z.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_mag_z.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->mag_z = u_mag_z.real;
      offset += sizeof(this->mag_z);
      union {
        float real;
        uint32_t base;
      } u_yaw;
      u_yaw.base = 0;
      u_yaw.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yaw.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yaw.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yaw.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->yaw = u_yaw.real;
      offset += sizeof(this->yaw);
     return offset;
    }

    virtual const char * getType() override { return "rostu_sas/Heading"; };
    virtual const char * getMD5() override { return "ac8000ea2849b8c02f2b22d742581502"; };

  };

}
#endif
