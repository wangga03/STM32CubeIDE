/*
 * main.cpp

 *
 *  Created on: 2018/01/17
 *      Author: yoneken
 */
#include <mainpp.h>
#include <ros.h>
#include <std_msgs/Float32.h>

extern "C"{
	struct Magnetometer{
		float x, y, z;
	}bno;

}

//typedef struct{
//	float x;
//	float y;
//	float z;
//}ros_rx;
//
//ros_rx receiving;


ros::NodeHandle nh;

std_msgs::Float32 float_msg;  // Tipe pesan ROS untuk data float
ros::Publisher pub("float_data", &float_msg);  // Publisher dengan topik "float_data"


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
	nh.initNode();  // Inisialisasi node ROS
	nh.advertise(pub);  // Advertise topik
}

void loop(void)
{

	float_msg.data = bno.x;  // Mengisi pesan dengan nilai float
  pub.publish(&float_msg);  // Mengirim pesan ke ROS

  nh.spinOnce();  // Memproses komunikasi ROS;

}

//void rx_ros(float x, float y, float z){
//
//	receiving.bnoX = x;
//
//}
