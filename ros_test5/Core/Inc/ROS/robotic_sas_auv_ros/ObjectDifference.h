#ifndef _ROS_robotic_sas_auv_ros_ObjectDifference_h
#define _ROS_robotic_sas_auv_ros_ObjectDifference_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace robotic_sas_auv_ros
{

  class ObjectDifference : public ros::Msg
  {
    public:
      typedef const char* _object_type_type;
      _object_type_type object_type;
      typedef int16_t _x_difference_type;
      _x_difference_type x_difference;

    ObjectDifference():
      object_type(""),
      x_difference(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      uint32_t length_object_type = strlen(this->object_type);
      varToArr(outbuffer + offset, length_object_type);
      offset += 4;
      memcpy(outbuffer + offset, this->object_type, length_object_type);
      offset += length_object_type;
      union {
        int16_t real;
        uint16_t base;
      } u_x_difference;
      u_x_difference.real = this->x_difference;
      *(outbuffer + offset + 0) = (u_x_difference.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_x_difference.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->x_difference);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t length_object_type;
      arrToVar(length_object_type, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_object_type; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_object_type-1]=0;
      this->object_type = (char *)(inbuffer + offset-1);
      offset += length_object_type;
      union {
        int16_t real;
        uint16_t base;
      } u_x_difference;
      u_x_difference.base = 0;
      u_x_difference.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_x_difference.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->x_difference = u_x_difference.real;
      offset += sizeof(this->x_difference);
     return offset;
    }

    virtual const char * getType() override { return "robotic_sas_auv_ros/ObjectDifference"; };
    virtual const char * getMD5() override { return "9805b6fd573c60efaf93d832bb6035b2"; };

  };

}
#endif
