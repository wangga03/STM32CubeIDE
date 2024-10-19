#ifndef _ROS_test_wgg_h
#define _ROS_test_wgg_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace test
{

  class wgg : public ros::Msg
  {
    public:
      typedef const char* _namaDepan_type;
      _namaDepan_type namaDepan;

    wgg():
      namaDepan("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      uint32_t length_namaDepan = strlen(this->namaDepan);
      varToArr(outbuffer + offset, length_namaDepan);
      offset += 4;
      memcpy(outbuffer + offset, this->namaDepan, length_namaDepan);
      offset += length_namaDepan;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t length_namaDepan;
      arrToVar(length_namaDepan, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_namaDepan; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_namaDepan-1]=0;
      this->namaDepan = (char *)(inbuffer + offset-1);
      offset += length_namaDepan;
     return offset;
    }

    virtual const char * getType() override { return "test/wgg"; };
    virtual const char * getMD5() override { return "c7f740773f5889a7b8d0df44d7ab4cb5"; };

  };

}
#endif
