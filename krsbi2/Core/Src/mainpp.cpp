#include <mainpp.h>
#include <ros.h>
#include <std_msgs/Bool.h>
#include <std_msgs/Float32.h>
#include <string.h>
#include <stdbool.h>


extern "C"{
	struct Magnetometer{
		float x, y, z, w, roll, pitch, yaw;
	}bno;

	bool state;

}



void kicker_status_callback(const std_msgs::Bool &data){
	state = data.data;
}

ros::NodeHandle nh;

std_msgs::Float32 bno_msg;  // Tipe pesan ROS untuk data float
ros::Publisher bno_publish("BNO", &bno_msg);

ros::Subscriber<std_msgs::Bool> kicker("Kicker", &kicker_status_callback);


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
	nh.subscribe(kicker);
////	nh.subscribe(coordinate_target_subs);
//	nh.subscribe(robot_status_subs);
//	nh.subscribe(realsense_subs);
//	nh.advertise(pub);  // Advertise topik
	nh.advertise(bno_publish);
}

void loop(void)
{
	bno_msg.data = bno.yaw;  // Mengisi pesan dengan nilai float
	bno_publish.publish(&bno_msg);  // Mengirim pesan ke ROS

	nh.spinOnce();  // Memproses komunikasi ROS;

}
