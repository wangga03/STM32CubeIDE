#ifndef _ROS_krsbi2025_ArduinoSensor_h
#define _ROS_krsbi2025_ArduinoSensor_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace krsbi2025
{

  class ArduinoSensor : public ros::Msg
  {
    public:
      typedef float _depth_type;
      _depth_type depth;
      typedef float _busvoltage_type;
      _busvoltage_type busvoltage;
      typedef float _shuntvoltage_type;
      _shuntvoltage_type shuntvoltage;
      typedef float _loadvoltage_type;
      _loadvoltage_type loadvoltage;
      typedef float _current_mA_type;
      _current_mA_type current_mA;
      typedef float _power_mW_type;
      _power_mW_type power_mW;
      typedef float _temperature_type;
      _temperature_type temperature;
      typedef float _humidity_type;
      _humidity_type humidity;
      typedef float _pressure_abs_type;
      _pressure_abs_type pressure_abs;
      typedef float _pressure_relative_type;
      _pressure_relative_type pressure_relative;
      typedef float _altitude_delta_type;
      _altitude_delta_type altitude_delta;

    ArduinoSensor():
      depth(0),
      busvoltage(0),
      shuntvoltage(0),
      loadvoltage(0),
      current_mA(0),
      power_mW(0),
      temperature(0),
      humidity(0),
      pressure_abs(0),
      pressure_relative(0),
      altitude_delta(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
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
      } u_busvoltage;
      u_busvoltage.real = this->busvoltage;
      *(outbuffer + offset + 0) = (u_busvoltage.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_busvoltage.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_busvoltage.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_busvoltage.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->busvoltage);
      union {
        float real;
        uint32_t base;
      } u_shuntvoltage;
      u_shuntvoltage.real = this->shuntvoltage;
      *(outbuffer + offset + 0) = (u_shuntvoltage.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_shuntvoltage.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_shuntvoltage.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_shuntvoltage.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->shuntvoltage);
      union {
        float real;
        uint32_t base;
      } u_loadvoltage;
      u_loadvoltage.real = this->loadvoltage;
      *(outbuffer + offset + 0) = (u_loadvoltage.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_loadvoltage.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_loadvoltage.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_loadvoltage.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->loadvoltage);
      union {
        float real;
        uint32_t base;
      } u_current_mA;
      u_current_mA.real = this->current_mA;
      *(outbuffer + offset + 0) = (u_current_mA.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_current_mA.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_current_mA.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_current_mA.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->current_mA);
      union {
        float real;
        uint32_t base;
      } u_power_mW;
      u_power_mW.real = this->power_mW;
      *(outbuffer + offset + 0) = (u_power_mW.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_power_mW.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_power_mW.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_power_mW.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->power_mW);
      union {
        float real;
        uint32_t base;
      } u_temperature;
      u_temperature.real = this->temperature;
      *(outbuffer + offset + 0) = (u_temperature.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_temperature.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_temperature.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_temperature.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->temperature);
      union {
        float real;
        uint32_t base;
      } u_humidity;
      u_humidity.real = this->humidity;
      *(outbuffer + offset + 0) = (u_humidity.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_humidity.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_humidity.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_humidity.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->humidity);
      union {
        float real;
        uint32_t base;
      } u_pressure_abs;
      u_pressure_abs.real = this->pressure_abs;
      *(outbuffer + offset + 0) = (u_pressure_abs.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pressure_abs.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pressure_abs.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pressure_abs.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pressure_abs);
      union {
        float real;
        uint32_t base;
      } u_pressure_relative;
      u_pressure_relative.real = this->pressure_relative;
      *(outbuffer + offset + 0) = (u_pressure_relative.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pressure_relative.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pressure_relative.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pressure_relative.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pressure_relative);
      union {
        float real;
        uint32_t base;
      } u_altitude_delta;
      u_altitude_delta.real = this->altitude_delta;
      *(outbuffer + offset + 0) = (u_altitude_delta.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_altitude_delta.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_altitude_delta.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_altitude_delta.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->altitude_delta);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
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
      } u_busvoltage;
      u_busvoltage.base = 0;
      u_busvoltage.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_busvoltage.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_busvoltage.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_busvoltage.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->busvoltage = u_busvoltage.real;
      offset += sizeof(this->busvoltage);
      union {
        float real;
        uint32_t base;
      } u_shuntvoltage;
      u_shuntvoltage.base = 0;
      u_shuntvoltage.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_shuntvoltage.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_shuntvoltage.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_shuntvoltage.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->shuntvoltage = u_shuntvoltage.real;
      offset += sizeof(this->shuntvoltage);
      union {
        float real;
        uint32_t base;
      } u_loadvoltage;
      u_loadvoltage.base = 0;
      u_loadvoltage.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_loadvoltage.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_loadvoltage.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_loadvoltage.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->loadvoltage = u_loadvoltage.real;
      offset += sizeof(this->loadvoltage);
      union {
        float real;
        uint32_t base;
      } u_current_mA;
      u_current_mA.base = 0;
      u_current_mA.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_current_mA.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_current_mA.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_current_mA.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->current_mA = u_current_mA.real;
      offset += sizeof(this->current_mA);
      union {
        float real;
        uint32_t base;
      } u_power_mW;
      u_power_mW.base = 0;
      u_power_mW.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_power_mW.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_power_mW.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_power_mW.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->power_mW = u_power_mW.real;
      offset += sizeof(this->power_mW);
      union {
        float real;
        uint32_t base;
      } u_temperature;
      u_temperature.base = 0;
      u_temperature.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_temperature.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_temperature.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_temperature.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->temperature = u_temperature.real;
      offset += sizeof(this->temperature);
      union {
        float real;
        uint32_t base;
      } u_humidity;
      u_humidity.base = 0;
      u_humidity.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_humidity.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_humidity.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_humidity.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->humidity = u_humidity.real;
      offset += sizeof(this->humidity);
      union {
        float real;
        uint32_t base;
      } u_pressure_abs;
      u_pressure_abs.base = 0;
      u_pressure_abs.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pressure_abs.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pressure_abs.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pressure_abs.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pressure_abs = u_pressure_abs.real;
      offset += sizeof(this->pressure_abs);
      union {
        float real;
        uint32_t base;
      } u_pressure_relative;
      u_pressure_relative.base = 0;
      u_pressure_relative.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pressure_relative.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pressure_relative.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pressure_relative.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pressure_relative = u_pressure_relative.real;
      offset += sizeof(this->pressure_relative);
      union {
        float real;
        uint32_t base;
      } u_altitude_delta;
      u_altitude_delta.base = 0;
      u_altitude_delta.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_altitude_delta.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_altitude_delta.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_altitude_delta.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->altitude_delta = u_altitude_delta.real;
      offset += sizeof(this->altitude_delta);
     return offset;
    }

    virtual const char * getType() override { return "krsbi2025/ArduinoSensor"; };
    virtual const char * getMD5() override { return "9964b1e9ff85fb1be300e253456f6d75"; };

  };

}
#endif
