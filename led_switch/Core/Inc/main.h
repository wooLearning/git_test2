/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#define LEDUP1_Pin GPIO_PIN_0
#define LEDUP1_GPIO_Port GPIOC
#define LEDUP2_Pin GPIO_PIN_1
#define LEDUP2_GPIO_Port GPIOC
#define LEDDN2_Pin GPIO_PIN_2
#define LEDDN2_GPIO_Port GPIOC
#define LEDDN3_Pin GPIO_PIN_3
#define LEDDN3_GPIO_Port GPIOC
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define SENSOR1_Pin GPIO_PIN_13
#define SENSOR1_GPIO_Port GPIOB
#define SENSOR2_Pin GPIO_PIN_14
#define SENSOR2_GPIO_Port GPIOB
#define SENSOR3_Pin GPIO_PIN_15
#define SENSOR3_GPIO_Port GPIOB
#define SWF3_Pin GPIO_PIN_8
#define SWF3_GPIO_Port GPIOC
#define SWF2_Pin GPIO_PIN_9
#define SWF2_GPIO_Port GPIOC
#define SWF1_Pin GPIO_PIN_8
#define SWF1_GPIO_Port GPIOA
#define SWDN3_Pin GPIO_PIN_9
#define SWDN3_GPIO_Port GPIOA
#define SWDN2_Pin GPIO_PIN_10
#define SWDN2_GPIO_Port GPIOA
#define SWUP2_Pin GPIO_PIN_11
#define SWUP2_GPIO_Port GPIOA
#define SWUP1_Pin GPIO_PIN_12
#define SWUP1_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define LEDF1_Pin GPIO_PIN_10
#define LEDF1_GPIO_Port GPIOC
#define LEDF2_Pin GPIO_PIN_11
#define LEDF2_GPIO_Port GPIOC
#define LEDF3_Pin GPIO_PIN_12
#define LEDF3_GPIO_Port GPIOC
#define IN1_Pin GPIO_PIN_4
#define IN1_GPIO_Port GPIOB
#define IN2_Pin GPIO_PIN_5
#define IN2_GPIO_Port GPIOB
#define IN3_Pin GPIO_PIN_6
#define IN3_GPIO_Port GPIOB
#define IN4_Pin GPIO_PIN_7
#define IN4_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
