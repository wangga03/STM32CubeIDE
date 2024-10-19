/*
 * hcsr04.h
 *
 *  Created on: Aug 7, 2024
 *      Author: wgg
 */

#ifndef INC_HCSR04_H_
#define INC_HCSR04_H_


typedef struct{
	float distance;
}HCSR04_t;
void delay_uS(uint16_t time);
void HCSR04_Read (HCSR04_t *sensorVal);
//void getValue(HCSR04_t *sensorVal);

#endif /* INC_HCSR04_H_ */
