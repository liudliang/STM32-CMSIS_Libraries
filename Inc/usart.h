/*
 * usart.h
 *
 * Updated on: 15.06.2020
 * Created on: 13.11.2018
 *     Author: Admin
 */

#ifndef __USART_H_
#define __USART_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include "stm32f1xx.h"

#define USART1_BUFFER_SIZE ((uint8_t)25)
#define APB2_CLK           ((uint32_t)72000000)
#define USART1_BAUD_RATE   ((uint32_t)115200)

void USART1_Init();
void USART1_SendChar(char chr);
void USART1_SendString(char *str);
uint8_t USART1_ReadString(char *str);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __USART_H_ */

