#ifndef LED_H
#define LED_H
#include "iocc2530.h"
#include "OnBoard.h"

#define LED1 P1_0     //定义LED1为P10口控制
#define LED2 P1_1     //定义LED2为P11口控制

/**********************
LED_Initial(void)为灯初始化的函数
用于P1_1灯的io口设置

***********************/
void LED_Initial(void);

/**********************
LED1_toggle()为灯翻转的函数
用于P0_1灯的亮灭交替

***********************/
void LED1_toggle(void);

/**********************
LED2_toggle()为灯翻转的函数
用于P1_1灯的亮灭交替

***********************/
void LED2_toggle(void);

/**********************
Delay_ms用于毫秒级的延时

***********************/
void Delay_us(void); //1 us延时
void Delay_10us(void); //10 us延时
void Delay_ms(int Time);//n ms延时

#endif