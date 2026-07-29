/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define lcd_d0_Pin GPIO_PIN_0
#define lcd_d0_GPIO_Port GPIOA
#define lcd_d1_Pin GPIO_PIN_1
#define lcd_d1_GPIO_Port GPIOA
#define lcd_d2_Pin GPIO_PIN_2
#define lcd_d2_GPIO_Port GPIOA
#define lcd_d3_Pin GPIO_PIN_3
#define lcd_d3_GPIO_Port GPIOA
#define lcd_d4_Pin GPIO_PIN_4
#define lcd_d4_GPIO_Port GPIOA
#define lcd_d5_Pin GPIO_PIN_5
#define lcd_d5_GPIO_Port GPIOA
#define lcd_d6_Pin GPIO_PIN_6
#define lcd_d6_GPIO_Port GPIOA
#define lcd_d7_Pin GPIO_PIN_7
#define lcd_d7_GPIO_Port GPIOA
#define lcd_RW_Pin GPIO_PIN_2
#define lcd_RW_GPIO_Port GPIOB
#define lcd_RS_Pin GPIO_PIN_10
#define lcd_RS_GPIO_Port GPIOB
#define lcd_EN_Pin GPIO_PIN_11
#define lcd_EN_GPIO_Port GPIOB
#define START_TIMER_Pin GPIO_PIN_6
#define START_TIMER_GPIO_Port GPIOB
#define START_TIMER_EXTI_IRQn EXTI9_5_IRQn
#define STOP_TIMER_Pin GPIO_PIN_7
#define STOP_TIMER_GPIO_Port GPIOB
#define STOP_TIMER_EXTI_IRQn EXTI9_5_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
