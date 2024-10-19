#include "mainpp.h"
#include "ros.h"
#include "std_msgs/Int32.h"

ros::NodeHandle nh;

int nowTick = 0;
int prevTick = 0;
int num_tick = 0;
std_msgs::Int32 num_msg;

ros::Publisher num_pub("num_node", &num_msg);


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


void setup()
{
	nh.initNode();
	nh.advertise(num_pub);
}


void loop()
{
	nowTick = HAL_GetTick();
	if(nowTick - prevTick >= 10)
	{
		prevTick = nowTick;
		num_msg.data = num_tick;
		num_pub.publish(&num_msg);
		num_tick++;
	}

	nh.spinOnce();
}
