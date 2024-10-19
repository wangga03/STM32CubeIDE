/*
 * pid.c
 *
 *  Created on: Aug 7, 2024
 *      Author: wgg
 */


#include "pid.h"
#include <math.h>
float error = 0, derivative;
void PID_Init(PID_Controller *pid, float kp, float ki, float kd, float min_output, float max_output) {
    pid->kp = kp;
    pid->ki = ki;
    pid->kd = kd;
    pid->setpoint = 0.0;
    pid->integral = 0.0;
    pid->previous_error = 0.0;
    pid->output = 0.0;
    pid->max_output = max_output;
    pid->min_output = min_output;
    pid->error = 0.0;
}

float PID_Update(PID_Controller *pid, float current_value, float error) {
    pid->error = error;
    pid->integral += pid->error;
    derivative = (pid->error - pid->previous_error);

    pid->output = (pid->kp * pid->error) + (pid->ki * pid->integral) + (pid->kd * derivative);

    if(pid->integral > pid->max_output){
    	pid->integral = pid->max_output;
    }else if (pid->output < pid->min_output) {
        pid->integral = pid->min_output;
    }

    if (pid->output > pid->max_output) {
        pid->output = pid->max_output;
    } else if (pid->output < pid->min_output) {
        pid->output = pid->min_output;
    }

    pid->previous_error = pid->error;

    return pid->output;
}

float error_sudut, error_jarak;
float error_sudut_calculation(float setPoint_sudut, float data_sudut){
	if(setPoint_sudut - data_sudut > 180) data_sudut += 360;
	else if ((data_sudut - setPoint_sudut > 180)) data_sudut -= 360;
	return setPoint_sudut - data_sudut;
}

float error_jarak_calculation(float setPoint_jarak, float data_jarak){
	return fabs(data_jarak - setPoint_jarak);
}
