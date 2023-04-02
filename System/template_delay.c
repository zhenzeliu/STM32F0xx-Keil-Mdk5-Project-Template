#include "template_delay.h"

void delay_us(uint16_t time)
{   
   uint16_t i=0; 

   while(time--)
   {
      i=10;
      while(i--) ;   
   }
}

void delay_ms(uint16_t time)
{   
   uint16_t i=0; 

   while(time--)
   {
      i=12000; 
      while(i--) ;   
   }
}
