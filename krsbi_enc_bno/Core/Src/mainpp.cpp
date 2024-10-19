/*
 * main.cpp

 *
 *  Created on: 2018/01/17
 *      Author: yoneken
 */
#include <mainpp.h>
#include <ros.h>
#include <std_msgs/Float32.h>
#include <krsbi2025/BallPositionBasedOnCamera.h>
#include <krsbi2025/Wheel.h>


extern "C"{
	struct Magnetometer{
		float x, y, z;
	}bno;

	struct Wheel{
		float aCW, aCCW, bCW, bCCW, cCW, cCCW, force1, force2, force3;
	}roda;

	struct Cam{
		float distance, angle, x_on_camera, y_on_camera, x_real, y_real;
	}camera;

}

//typedef struct{
//	float x;
//	float y;
//	float z;
//}ros_rx;
//
//ros_rx receiving;
void cam_data_callback(const krsbi2025::BallPositionBasedOnCamera &data){
	camera.distance = data.distance;
	camera.angle = data.angle;
	camera.x_on_camera = data.x_on_camera;
	camera.y_on_camera = data.y_on_camera;
	camera.x_real = data.x_real;
	camera.y_real = data.y_real;
}

ros::NodeHandle nh;

std_msgs::Float32 float_msg;  // Tipe pesan ROS untuk data float
ros::Publisher pub("float_data", &float_msg);

krsbi2025::Wheel wheel_output;
ros::Publisher pub_outputControl("/arduino/topic_OutputControl", &wheel_output);  // Publisher dengan topik "float_data"
ros::Subscriber<krsbi2025::BallPositionBasedOnCamera> sub("BallPositionBasedOnCamera", &cam_data_callback);


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
	nh.subscribe(sub);
	nh.advertise(pub);  // Advertise topik
	nh.advertise(pub_outputControl);
}

void loop(void)
{
	float_msg.data = camera.distance;  // Mengisi pesan dengan nilai float
	wheel_output.left_wheel_ccw = roda.aCCW;
	wheel_output.left_wheel_cw = roda.aCW;
	wheel_output.right_wheel_ccw = roda.bCCW;
	wheel_output.right_wheel_cw = roda.bCW;
	wheel_output.bottom_wheel_ccw = roda.cCCW;
	wheel_output.bottom_wheel_cw = roda.cCW;
	pub_outputControl.publish(&wheel_output);  // Mengirim pesan ke ROS

	nh.spinOnce();  // Memproses komunikasi ROS;

}


