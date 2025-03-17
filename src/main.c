/**
  ******************************************************************************
  * @file    main.c
  * @author  Luis Lopez
  * @version V1.0
  * @date    17-march.2025
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f4xx.h"
#include "stm32f429i_discovery.h"
			

int main(void)
{
	HAL_Init();

	LED3_GPIO_CLK_ENABLE();

	GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.Pin = LED3_PIN;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_PULLUP;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
	HAL_GPIO_Init(LED3_GPIO_PORT, &GPIO_InitStruct);

	for(;;) {
		HAL_GPIO_WritePin(LED3_GPIO_PORT, LED3_PIN, GPIO_PIN_SET);
		HAL_Delay(500);
		HAL_GPIO_WritePin(LED3_GPIO_PORT, LED3_PIN, GPIO_PIN_RESET);
		HAL_Delay(500);
	}
}
