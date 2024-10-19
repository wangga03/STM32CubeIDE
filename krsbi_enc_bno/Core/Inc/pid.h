/*
 * pid.h
 *
 *  Created on: Aug 7, 2024
 *      Author: wgg
 */

#ifndef INC_PID_H_
#define INC_PID_H_

typedef struct {
    float kp;         // Proportional gain
    float ki;         // Integral gain
    float kd;         // Derivative gain
    float setpoint;   // Desired value
    float integral;   // Integral term
    float previous_error; // Previous error value
    float output;     // Output value
    float min_output; // Minimum output limit
    float max_output; // Maximum output limit
    float error;
} PID_Controller;

// Inisialisasi PID
void PID_Init(PID_Controller *pid, float kp, float ki, float kd, float min_output, float max_output);

// Update PID
float PID_Update(PID_Controller *pid, float current_value, float error);

float error_sudut_calculation(float setPoint_sudut, float data_sudut);
float error_jarak_calculation(float setPoint_jarak, float data_jarak);

#endif /* INC_PID_H_ */
