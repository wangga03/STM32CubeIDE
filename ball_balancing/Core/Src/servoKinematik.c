/*
 * servo.c
 *
 *  Created on: Aug 7, 2024
 *      Author: wgg
 */

#include "main.h"
#include "tim.h"
#include "gpio.h"
#include "servoKinematik.h"

int f = 0;

void servo_calculation(servo_t *servo, int servoInput){
	f = (325 + (325*servoInput/100));
	if(f<100)servo->servoOutput = 100;
	else if(f>550)servo->servoOutput = 550;
	else servo->servoOutput = f;
}
