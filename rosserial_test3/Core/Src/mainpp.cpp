/*
 * main.cpp

 *
 *  Created on: 2018/01/17
 *      Author: yoneken
 */
#include <mainpp.h>
#include <ros.h>
#include <std_msgs/String.h>
#include <robotic_sas_auv_ros/Actuator.h>

ros::NodeHandle nh;

std_msgs::String str_msg;
ros::Publisher chatter("chatter", &str_msg);
char hello[] = "Hello world!";

void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart)
{
	if(huart == &huart2)
	{
		nh.getHardware()->flush();
	}
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	if(huart == &huart2)
	{
		nh.getHardware()->reset_rbuf();
	}
}

void setup(void)
{
  nh.initNode();
  nh.advertise(chatter);
}

void loop(void)
{
  str_msg.data = hello;
  chatter.publish(&str_msg);
  nh.spinOnce();

}
