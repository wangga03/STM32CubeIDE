/*
 * pid.c
 *
 *  Created on: Aug 6, 2024
 *      Author: wgg
 */

#include "main.h"
#include "tim.h"
#include "gpio.h"

float error, result;
float integral, proportional, derivative, prev_error, output;

float pidCalculate(float kp, float ki, float kd, float setPoint, float input){

	error = setPoint - input;
	integral += error;
	derivative = error - prev_error;
	output = kp * error + ki * integral + kd * derivative;

	prev_error = error;

	return output;
}


