//
// Created by siasunhebo on 8/26/19.
//

#ifndef _AGV_H
#define _AGV_H


//错误事件定义
#define NO_EVENT                           0    //没有事件
#define OBSTACLE_STOP_EVENT               1    //避障停车事件
#define OBSTACLE_LOW_EVENT                2    //避障减速事件
#define OUT_OF_TRACK_EVENT                 3    //脱轨事件
#define PRESSING_STOP_EVENT               4    //紧急停车事件
#define SERVO_INVALID_EVENT                5    //伺服失效事件
#define CONTROL_RESUMABLE_STOP_EVENT       6    //网络通信中断停车事件
#define WAY_POINT_ERROR                    7    //路线点校验错误
#define BMS_COM_OUTOFTM                  8
#define GS_COMM_BREAK_EVENT                9    //导航传感器通讯中断事件//


void paramter_define();    //车辆参数定义
//void Prase_Sensor_Data();  //传感器处理
void *myprocess2();
void *myprocess3();
void *myprocess1();
//void *myprocess4();
void Location_AGV();       //车体定位
void get_can();
void get_pgv();
void get_pid();
//void get_location();


//struct Coordinate_Class Coor_delta;
struct Velocity_Class AGV_Current_Velocity_By_Encoder;    //PLC上传由编码器得到速度
int data_Ok;

#endif //IMUTEST_AGV_H
