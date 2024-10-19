#ifndef _ROS_rostu_sas_BNO_ENC_h
#define _ROS_rostu_sas_BNO_ENC_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace rostu_sas
{

  class BNO_ENC : public ros::Msg
  {
    public:
      typedef float _compas_type;
      _compas_type compas;
      typedef float _x_type;
      _x_type x;
      typedef float _y_type;
      _y_type y;

    BNO_ENC():
      compas(0),
      x(0),
      y(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_compas;
      u_compas.real = this->compas;
      *(outbuffer + offset + 0) = (u_compas.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_compas.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_compas.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_compas.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->compas);
      union {
        float real;
        uint32_t base;
      } u_x;
      u_x.real = this->x;
      *(outbuffer + offset + 0) = (u_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_x.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->x);
      union {
        float real;
        uint32_t base;
      } u_y;
      u_y.real = this->y;
      *(outbuffer + offset + 0) = (u_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_y.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->y);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_compas;
      u_compas.base = 0;
      u_compas.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_compas.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_compas.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_compas.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->compas = u_compas.real;
      offset += sizeof(this->compas);
      union {
        float real;
        uint32_t base;
      } u_x;
      u_x.base = 0;
      u_x.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_x.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_x.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_x.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->x = u_x.real;
      offset += sizeof(this->x);
      union {
        float real;
        uint32_t base;
      } u_y;
      u_y.base = 0;
      u_y.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_y.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_y.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_y.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->y = u_y.real;
      offset += sizeof(this->y);
     return offset;
    }

    virtual const char * getType() override { return "rostu_sas/BNO_ENC"; };
    virtual const char * getMD5() override { return "444cbdcc09ffd1f44774ec331f0b39de"; };

  };

}
#endif
