#ifndef _ROS_krsbi2025_IsStable_h
#define _ROS_krsbi2025_IsStable_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace krsbi2025
{

  class IsStable : public ros::Msg
  {
    public:
      typedef bool _roll_type;
      _roll_type roll;
      typedef bool _pitch_type;
      _pitch_type pitch;
      typedef bool _yaw_type;
      _yaw_type yaw;
      typedef bool _sway_type;
      _sway_type sway;
      typedef bool _depth_type;
      _depth_type depth;
      typedef bool _pos_x_type;
      _pos_x_type pos_x;
      typedef bool _pos_y_type;
      _pos_y_type pos_y;
      typedef bool _pos_z_type;
      _pos_z_type pos_z;

    IsStable():
      roll(0),
      pitch(0),
      yaw(0),
      sway(0),
      depth(0),
      pos_x(0),
      pos_y(0),
      pos_z(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_roll;
      u_roll.real = this->roll;
      *(outbuffer + offset + 0) = (u_roll.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->roll);
      union {
        bool real;
        uint8_t base;
      } u_pitch;
      u_pitch.real = this->pitch;
      *(outbuffer + offset + 0) = (u_pitch.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->pitch);
      union {
        bool real;
        uint8_t base;
      } u_yaw;
      u_yaw.real = this->yaw;
      *(outbuffer + offset + 0) = (u_yaw.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->yaw);
      union {
        bool real;
        uint8_t base;
      } u_sway;
      u_sway.real = this->sway;
      *(outbuffer + offset + 0) = (u_sway.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->sway);
      union {
        bool real;
        uint8_t base;
      } u_depth;
      u_depth.real = this->depth;
      *(outbuffer + offset + 0) = (u_depth.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->depth);
      union {
        bool real;
        uint8_t base;
      } u_pos_x;
      u_pos_x.real = this->pos_x;
      *(outbuffer + offset + 0) = (u_pos_x.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->pos_x);
      union {
        bool real;
        uint8_t base;
      } u_pos_y;
      u_pos_y.real = this->pos_y;
      *(outbuffer + offset + 0) = (u_pos_y.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->pos_y);
      union {
        bool real;
        uint8_t base;
      } u_pos_z;
      u_pos_z.real = this->pos_z;
      *(outbuffer + offset + 0) = (u_pos_z.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->pos_z);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_roll;
      u_roll.base = 0;
      u_roll.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->roll = u_roll.real;
      offset += sizeof(this->roll);
      union {
        bool real;
        uint8_t base;
      } u_pitch;
      u_pitch.base = 0;
      u_pitch.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->pitch = u_pitch.real;
      offset += sizeof(this->pitch);
      union {
        bool real;
        uint8_t base;
      } u_yaw;
      u_yaw.base = 0;
      u_yaw.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->yaw = u_yaw.real;
      offset += sizeof(this->yaw);
      union {
        bool real;
        uint8_t base;
      } u_sway;
      u_sway.base = 0;
      u_sway.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->sway = u_sway.real;
      offset += sizeof(this->sway);
      union {
        bool real;
        uint8_t base;
      } u_depth;
      u_depth.base = 0;
      u_depth.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->depth = u_depth.real;
      offset += sizeof(this->depth);
      union {
        bool real;
        uint8_t base;
      } u_pos_x;
      u_pos_x.base = 0;
      u_pos_x.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->pos_x = u_pos_x.real;
      offset += sizeof(this->pos_x);
      union {
        bool real;
        uint8_t base;
      } u_pos_y;
      u_pos_y.base = 0;
      u_pos_y.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->pos_y = u_pos_y.real;
      offset += sizeof(this->pos_y);
      union {
        bool real;
        uint8_t base;
      } u_pos_z;
      u_pos_z.base = 0;
      u_pos_z.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->pos_z = u_pos_z.real;
      offset += sizeof(this->pos_z);
     return offset;
    }

    virtual const char * getType() override { return "krsbi2025/IsStable"; };
    virtual const char * getMD5() override { return "8902f97673632eb2ec3d56680ce224e6"; };

  };

}
#endif
