#ifndef _ROS_rostu_sas_ObjectDetection_h
#define _ROS_rostu_sas_ObjectDetection_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "rostu_sas/BoundingBox.h"

namespace rostu_sas
{

  class ObjectDetection : public ros::Msg
  {
    public:
      uint32_t bounding_boxes_length;
      typedef rostu_sas::BoundingBox _bounding_boxes_type;
      _bounding_boxes_type st_bounding_boxes;
      _bounding_boxes_type * bounding_boxes;

    ObjectDetection():
      bounding_boxes_length(0), st_bounding_boxes(), bounding_boxes(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->bounding_boxes_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->bounding_boxes_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->bounding_boxes_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->bounding_boxes_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->bounding_boxes_length);
      for( uint32_t i = 0; i < bounding_boxes_length; i++){
      offset += this->bounding_boxes[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t bounding_boxes_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      bounding_boxes_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      bounding_boxes_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      bounding_boxes_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->bounding_boxes_length);
      if(bounding_boxes_lengthT > bounding_boxes_length)
        this->bounding_boxes = (rostu_sas::BoundingBox*)realloc(this->bounding_boxes, bounding_boxes_lengthT * sizeof(rostu_sas::BoundingBox));
      bounding_boxes_length = bounding_boxes_lengthT;
      for( uint32_t i = 0; i < bounding_boxes_length; i++){
      offset += this->st_bounding_boxes.deserialize(inbuffer + offset);
        memcpy( &(this->bounding_boxes[i]), &(this->st_bounding_boxes), sizeof(rostu_sas::BoundingBox));
      }
     return offset;
    }

    virtual const char * getType() override { return "rostu_sas/ObjectDetection"; };
    virtual const char * getMD5() override { return "40ad3b92e9c42aa93297fa5d037336cf"; };

  };

}
#endif
