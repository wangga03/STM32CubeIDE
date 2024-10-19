#ifndef _ROS_rostu_sas_KickerSetting_h
#define _ROS_rostu_sas_KickerSetting_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace rostu_sas
{

  class KickerSetting : public ros::Msg
  {
    public:
      typedef int64_t _charge_time_type;
      _charge_time_type charge_time;
      typedef bool _action_type;
      _action_type action;

    KickerSetting():
      charge_time(0),
      action(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_charge_time;
      u_charge_time.real = this->charge_time;
      *(outbuffer + offset + 0) = (u_charge_time.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_charge_time.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_charge_time.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_charge_time.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_charge_time.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_charge_time.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_charge_time.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_charge_time.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->charge_time);
      union {
        bool real;
        uint8_t base;
      } u_action;
      u_action.real = this->action;
      *(outbuffer + offset + 0) = (u_action.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->action);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_charge_time;
      u_charge_time.base = 0;
      u_charge_time.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_charge_time.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_charge_time.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_charge_time.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_charge_time.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_charge_time.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_charge_time.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_charge_time.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->charge_time = u_charge_time.real;
      offset += sizeof(this->charge_time);
      union {
        bool real;
        uint8_t base;
      } u_action;
      u_action.base = 0;
      u_action.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->action = u_action.real;
      offset += sizeof(this->action);
     return offset;
    }

    virtual const char * getType() override { return "rostu_sas/KickerSetting"; };
    virtual const char * getMD5() override { return "5eb35c50ef959f485735294a09362452"; };

  };

}
#endif
