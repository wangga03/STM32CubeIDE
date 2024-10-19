#ifndef _ROS_robotic_sas_auv_ros_Error_h
#define _ROS_robotic_sas_auv_ros_Error_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace robotic_sas_auv_ros
{

  class Error : public ros::Msg
  {
    public:
      typedef float _roll_type;
      _roll_type roll;
      typedef float _pitch_type;
      _pitch_type pitch;
      typedef float _yaw_type;
      _yaw_type yaw;
      typedef float _sway_type;
      _sway_type sway;
      typedef float _depth_type;
      _depth_type depth;
      typedef float _pos_x_type;
      _pos_x_type pos_x;
      typedef float _pos_y_type;
      _pos_y_type pos_y;
      typedef float _pos_z_type;
      _pos_z_type pos_z;

    Error():
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
        float real;
        uint32_t base;
      } u_roll;
      u_roll.real = this->roll;
      *(outbuffer + offset + 0) = (u_roll.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_roll.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_roll.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_roll.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->roll);
      union {
        float real;
        uint32_t base;
      } u_pitch;
      u_pitch.real = this->pitch;
      *(outbuffer + offset + 0) = (u_pitch.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pitch.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pitch.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pitch.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pitch);
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
      union {
        float real;
        uint32_t base;
      } u_sway;
      u_sway.real = this->sway;
      *(outbuffer + offset + 0) = (u_sway.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_sway.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_sway.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_sway.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->sway);
      union {
        float real;
        uint32_t base;
      } u_depth;
      u_depth.real = this->depth;
      *(outbuffer + offset + 0) = (u_depth.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_depth.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_depth.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_depth.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->depth);
      union {
        float real;
        uint32_t base;
      } u_pos_x;
      u_pos_x.real = this->pos_x;
      *(outbuffer + offset + 0) = (u_pos_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos_x.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pos_x);
      union {
        float real;
        uint32_t base;
      } u_pos_y;
      u_pos_y.real = this->pos_y;
      *(outbuffer + offset + 0) = (u_pos_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos_y.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pos_y);
      union {
        float real;
        uint32_t base;
      } u_pos_z;
      u_pos_z.real = this->pos_z;
      *(outbuffer + offset + 0) = (u_pos_z.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos_z.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos_z.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos_z.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pos_z);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_roll;
      u_roll.base = 0;
      u_roll.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_roll.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_roll.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_roll.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->roll = u_roll.real;
      offset += sizeof(this->roll);
      union {
        float real;
        uint32_t base;
      } u_pitch;
      u_pitch.base = 0;
      u_pitch.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pitch.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pitch.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pitch.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pitch = u_pitch.real;
      offset += sizeof(this->pitch);
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
      union {
        float real;
        uint32_t base;
      } u_sway;
      u_sway.base = 0;
      u_sway.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_sway.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_sway.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_sway.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->sway = u_sway.real;
      offset += sizeof(this->sway);
      union {
        float real;
        uint32_t base;
      } u_depth;
      u_depth.base = 0;
      u_depth.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_depth.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_depth.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_depth.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->depth = u_depth.real;
      offset += sizeof(this->depth);
      union {
        float real;
        uint32_t base;
      } u_pos_x;
      u_pos_x.base = 0;
      u_pos_x.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos_x.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos_x.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos_x.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pos_x = u_pos_x.real;
      offset += sizeof(this->pos_x);
      union {
        float real;
        uint32_t base;
      } u_pos_y;
      u_pos_y.base = 0;
      u_pos_y.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos_y.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos_y.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos_y.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pos_y = u_pos_y.real;
      offset += sizeof(this->pos_y);
      union {
        float real;
        uint32_t base;
      } u_pos_z;
      u_pos_z.base = 0;
      u_pos_z.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos_z.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos_z.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos_z.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pos_z = u_pos_z.real;
      offset += sizeof(this->pos_z);
     return offset;
    }

    virtual const char * getType() override { return "robotic_sas_auv_ros/Error"; };
    virtual const char * getMD5() override { return "2cbf2903a11fcb412a88b4edd43ccaec"; };

  };

}
#endif
