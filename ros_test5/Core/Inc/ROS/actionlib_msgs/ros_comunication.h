/*
 * ros_comunication.h
 *
 *  Created on: Sep 12, 2024
 *      Author: wgg
 */

#ifndef INC_ROS_COMUNICATION_H_
#define INC_ROS_COMUNICATION_H_

typedef struct{

	float bnoX;
	float bnoY;
	float bnoZ;

}ros_magnetometer;

void magnetometer(ros_magnetometer *ros_mag);


#endif /* INC_ROS_COMUNICATION_H_ */
