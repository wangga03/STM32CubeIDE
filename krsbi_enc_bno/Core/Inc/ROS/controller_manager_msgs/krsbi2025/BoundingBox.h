#ifndef _ROS_krsbi2025_BoundingBox_h
#define _ROS_krsbi2025_BoundingBox_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace krsbi2025
{

  class BoundingBox : public ros::Msg
  {
    public:
      typedef const char* _class_name_type;
      _class_name_type class_name;
      typedef float _probability_type;
      _probability_type probability;
      typedef int16_t _x_min_type;
      _x_min_type x_min;
      typedef int16_t _y_min_type;
      _y_min_type y_min;
      typedef int16_t _x_max_type;
      _x_max_type x_max;
      typedef int16_t _y_max_type;
      _y_max_type y_max;

    BoundingBox():
      class_name(""),
      probability(0),
      x_min(0),
      y_min(0),
      x_max(0),
      y_max(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      uint32_t length_class_name = strlen(this->class_name);
      varToArr(outbuffer + offset, length_class_name);
      offset += 4;
      memcpy(outbuffer + offset, this->class_name, length_class_name);
      offset += length_class_name;
      union {
        float real;
        uint32_t base;
      } u_probability;
      u_probability.real = this->probability;
      *(outbuffer + offset + 0) = (u_probability.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_probability.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_probability.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_probability.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->probability);
      union {
        int16_t real;
        uint16_t base;
      } u_x_min;
      u_x_min.real = this->x_min;
      *(outbuffer + offset + 0) = (u_x_min.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_x_min.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->x_min);
      union {
        int16_t real;
        uint16_t base;
      } u_y_min;
      u_y_min.real = this->y_min;
      *(outbuffer + offset + 0) = (u_y_min.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_y_min.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->y_min);
      union {
        int16_t real;
        uint16_t base;
      } u_x_max;
      u_x_max.real = this->x_max;
      *(outbuffer + offset + 0) = (u_x_max.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_x_max.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->x_max);
      union {
        int16_t real;
        uint16_t base;
      } u_y_max;
      u_y_max.real = this->y_max;
      *(outbuffer + offset + 0) = (u_y_max.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_y_max.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->y_max);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t length_class_name;
      arrToVar(length_class_name, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_class_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_class_name-1]=0;
      this->class_name = (char *)(inbuffer + offset-1);
      offset += length_class_name;
      union {
        float real;
        uint32_t base;
      } u_probability;
      u_probability.base = 0;
      u_probability.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_probability.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_probability.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_probability.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->probability = u_probability.real;
      offset += sizeof(this->probability);
      union {
        int16_t real;
        uint16_t base;
      } u_x_min;
      u_x_min.base = 0;
      u_x_min.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_x_min.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->x_min = u_x_min.real;
      offset += sizeof(this->x_min);
      union {
        int16_t real;
        uint16_t base;
      } u_y_min;
      u_y_min.base = 0;
      u_y_min.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_y_min.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->y_min = u_y_min.real;
      offset += sizeof(this->y_min);
      union {
        int16_t real;
        uint16_t base;
      } u_x_max;
      u_x_max.base = 0;
      u_x_max.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_x_max.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->x_max = u_x_max.real;
      offset += sizeof(this->x_max);
      union {
        int16_t real;
        uint16_t base;
      } u_y_max;
      u_y_max.base = 0;
      u_y_max.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_y_max.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->y_max = u_y_max.real;
      offset += sizeof(this->y_max);
     return offset;
    }

    virtual const char * getType() override { return "krsbi2025/BoundingBox"; };
    virtual const char * getMD5() override { return "bab830745238c189a819fc237712823a"; };

  };

}
#endif
