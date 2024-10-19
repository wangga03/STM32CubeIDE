#ifndef _ROS_krsbi2025_KickerModule_h
#define _ROS_krsbi2025_KickerModule_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace krsbi2025
{

  class KickerModule : public ros::Msg
  {
    public:
      typedef bool _trigger_type;
      _trigger_type trigger;
      typedef bool _charger_type;
      _charger_type charger;
      typedef const char* _status_type;
      _status_type status;

    KickerModule():
      trigger(0),
      charger(0),
      status("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_trigger;
      u_trigger.real = this->trigger;
      *(outbuffer + offset + 0) = (u_trigger.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->trigger);
      union {
        bool real;
        uint8_t base;
      } u_charger;
      u_charger.real = this->charger;
      *(outbuffer + offset + 0) = (u_charger.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->charger);
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
      union {
        bool real;
        uint8_t base;
      } u_trigger;
      u_trigger.base = 0;
      u_trigger.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->trigger = u_trigger.real;
      offset += sizeof(this->trigger);
      union {
        bool real;
        uint8_t base;
      } u_charger;
      u_charger.base = 0;
      u_charger.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->charger = u_charger.real;
      offset += sizeof(this->charger);
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

    virtual const char * getType() override { return "krsbi2025/KickerModule"; };
    virtual const char * getMD5() override { return "ba394d88a5c3e539dd36bff996be48d9"; };

  };

}
#endif
