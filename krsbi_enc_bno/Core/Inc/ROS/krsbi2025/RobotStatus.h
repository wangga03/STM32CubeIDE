#ifndef _ROS_krsbi2025_RobotStatus_h
#define _ROS_krsbi2025_RobotStatus_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace krsbi2025
{

  class RobotStatus : public ros::Msg
  {
    public:
      typedef const char* _status_type;
      _status_type status;

    RobotStatus():
      status("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
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

    virtual const char * getType() override { return "krsbi2025/RobotStatus"; };
    virtual const char * getMD5() override { return "4fe5af303955c287688e7347e9b00278"; };

  };

}
#endif
