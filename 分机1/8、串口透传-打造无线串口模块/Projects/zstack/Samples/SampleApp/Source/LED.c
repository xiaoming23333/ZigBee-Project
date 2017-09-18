#include "LED.h"
void LED_Initial(void)
{
  P1SEL &= ~0x03;   //设置 P1_0 = 0  P1_1 = 0 为通用 I/O
  P1DIR |= 0x03;    //设置 P1_0 = 1  P1_1 = 1 为输出状态
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
void Delay_ms(unsigned int z)
{
  unsigned int x,y;
  for(x=z;x>0;x--)
     for(y=220;y>0;y--);
}