/*
 * mainpp.c
 *
 *  Created on: Sep 10, 2024
 *      Author: wgg
 */


#include <mainpp.h>
#include <ros.h>
#include <std_msgs/Int32.h>

ros::NodeHandle nh;

std_msgs::Int32 num_msg;

ros::Publisher num_pub("num", &num_msgs);

void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart){
	if(huart->Instance == USART1) nh.getHardware()->flush();
}
