#ifndef _ROS_krsbi2025_DribbleSetting_h
#define _ROS_krsbi2025_DribbleSetting_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace krsbi2025
{

  class DribbleSetting : public ros::Msg
  {
    public:
      typedef float _speed_type;
      _speed_type speed;
      typedef const char* _status_type;
      _status_type status;

    DribbleSetting():
      speed(0),
      status("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->speed);
      uint32_t length_status = strlen(this->status);
      varToArr(outbuffer + offset, length_status);
      offset += 4;
      memcpy(outbuffer + offset, this->status, length_status);
      offset += length_status;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->speed));
      uint32_t length_status;
      arrToVar(length_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_status-1]=0;
      this->status = (char *)(inbuffer + offset-1);
      offset += length_status;
     return offset;
    }

    virtual const char * getType() override { return "krsbi2025/DribbleSetting"; };
    virtual const char * getMD5() override { return "18668401ab651fdaa2cebd8927c1fb8f"; };

  };

}
#endif
