/*
 * motor.c
 *
 *  Created on: Sep 16, 2024
 *      Author: wgg
 */


//force1 = ((-0.5773509529248335 * ax) + (-0.33333368867682667 * ay) + (0.33333368867682667 * w))
//force2 = ((0.5773509529248335 * ax) + (-0.3333329779898402 * ay) + (0.3333329779898402 * w))
//force3 = ((0 * ax) + (0.6666666666666669 * ay) + (0.33333333333333326 * w))

#include "motor.h"
#include <math.h>


void remap(float *force, float fromMinMax[2], float toMinMax[2]){
	*force = ((*force - fromMinMax[0]) / (fromMinMax[1] - fromMinMax[0])) * (toMinMax[1] - toMinMax[0]) + toMinMax[0];
}

extern struct Wheel_Data {
	float aCW, aCCW, bCW, bCCW, cCW, cCCW, force1, force2, force3;
} roda;

//float error_sudut, error_jarak;
//float error_sudut_calculation(float setPoint_sudut, float data_sudut){
//	if((setPoint_sudut - data_sudut) > 180) data_sudut += 360;
//	else if ((data_sudut - setPoint_sudut > 180) > 180) data_sudut -= 360;
//	return setPoint_sudut - data_sudut;
//}
//
//float error_jarak_calculation(float setPoint_jarak, float data_jarak){
//	return fabs(data_jarak - setPoint_jarak);
//}

	float force1, force2, force3, test;
void motor_calculation(float ax, float ay, float w) {

	// Menghitung force untuk setiap motor
	roda.force1 = ((-0.5773509529248335 * ax) + (-0.33333368867682667 * ay) + (0.33333368867682667 * w));
	roda.force2 = ((0.5773509529248335 * ax) + (-0.3333329779898402 * ay) + (0.3333329779898402 * w));
	roda.force3 = ((0 * ax) + (0.6666666666666669 * ay) + (0.33333333333333326 * w));

	// Remap jika force1 >= 0
	if (roda.force1 >= 0) {
		float fromRange[2] = {0, 0.91};
		float toRange[2] = {0, 255};
		remap(&roda.force1, fromRange, toRange);
		roda.aCW = roda.force1;
		roda.aCCW = 0;
	}
	else if(roda.force1 < 0){
		roda.force1 = fabs(roda.force1);
		float fromRange[2] = {0, 0.91};
		float toRange[2] = {0, 255};
		remap(&roda.force1, fromRange, toRange);
		roda.aCW = 0;
		roda.aCCW = roda.force1;

	}
	if (roda.force2 >= 0) {
		float fromRange[2] = {0, 0.91};
		float toRange[2] = {0, 255};
		remap(&roda.force2, fromRange, toRange);
		roda.bCW = roda.force2;
		roda.bCCW = 0;
	}
	else if(roda.force2 < 0){
		roda.force2 = fabs(roda.force2);
		float fromRange[2] = {0, 0.91};
		float toRange[2] = {0, 255};
		remap(&roda.force2, fromRange, toRange);
		roda.bCW = 0;
		roda.bCCW = roda.force2;

	}if (roda.force3 >= 0) {
		float fromRange[2] = {0, 0.91};
		float toRange[2] = {0, 255};
		remap(&roda.force3, fromRange, toRange);
		roda.cCW = roda.force3;
		roda.cCCW = 0;
	}
	else if(roda.force3 < 0){
		roda.force3 = fabs(roda.force3);
		float fromRange[2] = {0, 0.91};
		float toRange[2] = {0, 255};
		remap(&roda.force3, fromRange, toRange);
		roda.cCW = 0;
		roda.cCCW = roda.force3;

	}


	// Lakukan hal yang sama untuk force2 dan force3 jika diperlukan
}
