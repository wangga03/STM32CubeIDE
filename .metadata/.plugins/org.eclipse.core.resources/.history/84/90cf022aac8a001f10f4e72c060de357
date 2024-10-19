#include <mainpp.h>
#include <ros.h>
#include <std_msgs/Float32.h>
#include <string.h>


extern "C"{
	struct Magnetometer{
		float x, y, z, w, roll, pitch, yaw;
	}bno;

	struct Wheel{
		float aCW, aCCW, bCW, bCCW, cCW, cCCW, force1, force2, force3;
	}roda;

	struct Cam{
		float distance, angle, x_on_camera, y_on_camera, x_real, y_real;
	}camera;

	struct outputControl{
		float ay, w;
	}PID_Output;
	struct setPoint{

		float angle, distance;

	}setPoint;

	struct Odometry{
		float x, y, z, heading;
	}realsense;

	struct Coordinate{
			float x, y, z;
	}target;

	char robotStatus[20];

}

//typedef struct{
//	float x;
//	float y;
//	float z;
//}ros_rx;
//
//ros_rx receiving;

//void target_coordinate_callback(const krsbi_2025::Coordinate &data){
//	target.x = data.x;
//	target.y = data.y;
//	target.z = data.z;
//}
//
//void realsense_callback(const krsbi_2025::RealsenseT265 &t265){
//	realsense.x = t265.x;
//	realsense.y = t265.y;
//	realsense.z = t265.z;
//	realsense.heading = t265.heading;
//}
//
//void cam_data_callback(const krsbi_2025::BallPositionBasedOnCamera &data){
//	camera.distance = data.distance;
//	camera.angle = data.angle;
//	camera.x_on_camera = data.x_on_camera;
//	camera.y_on_camera = data.y_on_camera;
//	camera.x_real = data.x_real;
//	camera.y_real = data.y_real;
//}
//
//void control_output_callback(const krsbi_2025::ControlOutput &pid){
//	PID_Output.ay = pid.outy;
//	PID_Output.w = pid.outw;
//}
//
//void robot_status_callback(const krsbi_2025::RobotStatus &robot){
////	memcpy(&robotStatus, robot.status, sizeof(char));
//	strcpy(robotStatus, robot.status);
// }
ros::NodeHandle nh;

std_msgs::Float32 bno_msg;  // Tipe pesan ROS untuk data float
ros::Publisher pub("BNO", &bno_msg);

//krsbi_2025::Wheel wheel_output;
//ros::Publisher pub_outputControl("/Wheel", &wheel_output);  // Publisher dengan topik "float_data"
//ros::Subscriber<krsbi_2025::SetPoint> robot_setPoint_subs("SetPoint", &setPoint_callback);
//ros::Subscriber<krsbi_2025::ControlOutput> sub("/nuc/ControlOutput", &control_output_callback);


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
//	nh.subscribe(sub);
////	nh.subscribe(coordinate_target_subs);
//	nh.subscribe(robot_status_subs);
//	nh.subscribe(realsense_subs);
//	nh.advertise(pub);  // Advertise topik
	nh.advertise(pub);
}

void loop(void)
{
	bno_msg.data = bno.yaw;  // Mengisi pesan dengan nilai float
//	wheel_output.left_wheel_ccw = roda.aCCW;
//	wheel_output.left_wheel_cw = roda.aCW;
//	wheel_output.right_wheel_ccw = roda.bCCW;
//	wheel_output.right_wheel_cw = roda.bCW;
//	wheel_output.bottom_wheel_ccw = roda.cCCW;
//	wheel_output.bottom_wheel_cw = roda.cCW;
	pub.publish(&bno_msg);  // Mengirim pesan ke ROS

	nh.spinOnce();  // Memproses komunikasi ROS;

}
