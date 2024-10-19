/*
 * servoKinematik.h
 *
 *  Created on: Aug 7, 2024
 *      Author: wgg
 */

#ifndef INC_SERVOKINEMATIK_H_
#define INC_SERVOKINEMATIK_H_

typedef struct{
	int input;
	int servoOutput;
}servo_t;

void servo_calculation(servo_t *servo, int servoInput);
#endif /* INC_SERVOKINEMATIK_H_ */
