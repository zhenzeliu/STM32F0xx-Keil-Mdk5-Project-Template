#ifndef __SYSDELAY_H
#define __SYSDELAY_H
#include "stm32f0xx.h"

/**
  * @brief  Delay function for microsecond.
  * @param  None
  * @retval None
  */
void delay_us(uint16_t time);

/**
  * @brief  Delay function for millisecond.
  * @param  None
  * @retval None
  */
void delay_ms(uint16_t time);

#endif
