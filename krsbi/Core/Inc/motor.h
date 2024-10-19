/*
 * motor.h
 *
 *  Created on: Sep 16, 2024
 *      Author: wgg
 */

#ifndef INC_MOTOR_H_
#define INC_MOTOR_H_


void remap(float *force, float fromMinMax[2], float toMinMax[2]);
void motor_calculation(float ax, float ay, float w);

#endif /* INC_MOTOR_H_ */
