#ifndef _ROS_krsbi2025_BallPositionBasedOnCamera_h
#define _ROS_krsbi2025_BallPositionBasedOnCamera_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace krsbi2025
{

  class BallPositionBasedOnCamera : public ros::Msg
  {
    public:
      typedef int64_t _distance_type;
      _distance_type distance;
      typedef int64_t _angle_type;
      _angle_type angle;
      typedef int64_t _x_on_camera_type;
      _x_on_camera_type x_on_camera;
      typedef int64_t _y_on_camera_type;
      _y_on_camera_type y_on_camera;
      typedef int64_t _x_real_type;
      _x_real_type x_real;
      typedef int64_t _y_real_type;
      _y_real_type y_real;

    BallPositionBasedOnCamera():
      distance(0),
      angle(0),
      x_on_camera(0),
      y_on_camera(0),
      x_real(0),
      y_real(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_distance;
      u_distance.real = this->distance;
      *(outbuffer + offset + 0) = (u_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_distance.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_distance.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_distance.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_distance.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_distance.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->distance);
      union {
        int64_t real;
        uint64_t base;
      } u_angle;
      u_angle.real = this->angle;
      *(outbuffer + offset + 0) = (u_angle.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_angle.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_angle.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_angle.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_angle.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_angle.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_angle.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_angle.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->angle);
      union {
        int64_t real;
        uint64_t base;
      } u_x_on_camera;
      u_x_on_camera.real = this->x_on_camera;
      *(outbuffer + offset + 0) = (u_x_on_camera.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_x_on_camera.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_x_on_camera.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_x_on_camera.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_x_on_camera.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_x_on_camera.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_x_on_camera.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_x_on_camera.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->x_on_camera);
      union {
        int64_t real;
        uint64_t base;
      } u_y_on_camera;
      u_y_on_camera.real = this->y_on_camera;
      *(outbuffer + offset + 0) = (u_y_on_camera.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_y_on_camera.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_y_on_camera.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_y_on_camera.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_y_on_camera.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_y_on_camera.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_y_on_camera.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_y_on_camera.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->y_on_camera);
      union {
        int64_t real;
        uint64_t base;
      } u_x_real;
      u_x_real.real = this->x_real;
      *(outbuffer + offset + 0) = (u_x_real.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_x_real.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_x_real.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_x_real.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_x_real.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_x_real.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_x_real.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_x_real.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->x_real);
      union {
        int64_t real;
        uint64_t base;
      } u_y_real;
      u_y_real.real = this->y_real;
      *(outbuffer + offset + 0) = (u_y_real.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_y_real.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_y_real.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_y_real.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_y_real.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_y_real.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_y_real.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_y_real.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->y_real);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_distance;
      u_distance.base = 0;
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_distance.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->distance = u_distance.real;
      offset += sizeof(this->distance);
      union {
        int64_t real;
        uint64_t base;
      } u_angle;
      u_angle.base = 0;
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_angle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->angle = u_angle.real;
      offset += sizeof(this->angle);
      union {
        int64_t real;
        uint64_t base;
      } u_x_on_camera;
      u_x_on_camera.base = 0;
      u_x_on_camera.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_x_on_camera.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_x_on_camera.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_x_on_camera.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_x_on_camera.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_x_on_camera.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_x_on_camera.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_x_on_camera.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->x_on_camera = u_x_on_camera.real;
      offset += sizeof(this->x_on_camera);
      union {
        int64_t real;
        uint64_t base;
      } u_y_on_camera;
      u_y_on_camera.base = 0;
      u_y_on_camera.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_y_on_camera.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_y_on_camera.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_y_on_camera.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_y_on_camera.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_y_on_camera.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_y_on_camera.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_y_on_camera.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->y_on_camera = u_y_on_camera.real;
      offset += sizeof(this->y_on_camera);
      union {
        int64_t real;
        uint64_t base;
      } u_x_real;
      u_x_real.base = 0;
      u_x_real.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_x_real.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_x_real.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_x_real.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_x_real.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_x_real.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_x_real.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_x_real.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->x_real = u_x_real.real;
      offset += sizeof(this->x_real);
      union {
        int64_t real;
        uint64_t base;
      } u_y_real;
      u_y_real.base = 0;
      u_y_real.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_y_real.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_y_real.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_y_real.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_y_real.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_y_real.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_y_real.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_y_real.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->y_real = u_y_real.real;
      offset += sizeof(this->y_real);
     return offset;
    }

    virtual const char * getType() override { return "krsbi2025/BallPositionBasedOnCamera"; };
    virtual const char * getMD5() override { return "c32d588a00265202dbcab5311745340d"; };

  };

}
#endif
