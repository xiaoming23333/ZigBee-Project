#include "LED.h"

void LED_Initial(void)
{
  P1SEL &= ~0x03;   //设置 P1_0 P1_1 为 0:通用 I/O
  P1DIR |= 0x03;    //设置 P1_0 P1_1 为 1:输出状态
  LED1= 0;          //初始化 LED1 为灭
  LED2= 0;          //初始化 LED2 为灭
}
void LED1_toggle(void)
{
  LED1=!LED1;
}
void LED2_toggle(void)
{
  LED2=!LED2;
}
void Delay_us(void) //1 us延时
{
   MicroWait(1);   
}
void Delay_10us(void) //10 us延时
{
  MicroWait(10);
}

void Delay_ms(int Time)//n ms延时
{
  unsigned char i;
  while(Time--)
  {
    for(i=0;i<100;i++)
     Delay_10us();
  }
}