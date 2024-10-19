/*
 * utility.c
 *
 *  Created on: Oct 3, 2024
 *      Author: wgg
 */


#include "utility.h"
#include <math.h>

float error_sudut, error_jarak;
float error_sudut_calculation(float setPoint_sudut, float data_sudut){
	if(setPoint_sudut - data_sudut > 180) data_sudut += 360;
	else if ((data_sudut - setPoint_sudut > 180)) data_sudut -= 360;
	return setPoint_sudut - data_sudut;
}

float error_jarak_calculation(float setPoint_jarak, float data_jarak){
	return fabs(data_jarak - setPoint_jarak);
}

void distance_odom_calculation(float *distance, float x_now, float z_now, float target_x, float target_z){
	float vector_x = fabs(target_x - x_now);
	float vector_z = fabs(target_z - z_now);

	*distance = sqrt(vector_x*vector_x+vector_z*vector_z);

}
