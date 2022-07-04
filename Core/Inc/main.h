/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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
#define HINSON1_IN5_Pin GPIO_PIN_2
#define HINSON1_IN5_GPIO_Port GPIOE
#define HINSON1_IN6_Pin GPIO_PIN_3
#define HINSON1_IN6_GPIO_Port GPIOE
#define HINSON1_OUT1_Pin GPIO_PIN_4
#define HINSON1_OUT1_GPIO_Port GPIOE
#define HINSON1_OUT2_Pin GPIO_PIN_5
#define HINSON1_OUT2_GPIO_Port GPIOE
#define HINSON1_OUT3_Pin GPIO_PIN_6
#define HINSON1_OUT3_GPIO_Port GPIOE
#define HINSON1_ERROR_Pin GPIO_PIN_13
#define HINSON1_ERROR_GPIO_Port GPIOC
#define INPOS_LEFT_Pin GPIO_PIN_0
#define INPOS_LEFT_GPIO_Port GPIOC
#define INPOS_RIGHT_Pin GPIO_PIN_1
#define INPOS_RIGHT_GPIO_Port GPIOC
#define BUMPER_Pin GPIO_PIN_2
#define BUMPER_GPIO_Port GPIOC
#define START_BUT_Pin GPIO_PIN_3
#define START_BUT_GPIO_Port GPIOC
#define RS232_1_RX_Pin GPIO_PIN_0
#define RS232_1_RX_GPIO_Port GPIOA
#define RS232_1_TX_Pin GPIO_PIN_1
#define RS232_1_TX_GPIO_Port GPIOA
#define RS485_1_RX_Pin GPIO_PIN_2
#define RS485_1_RX_GPIO_Port GPIOA
#define RS485_1_TX_Pin GPIO_PIN_3
#define RS485_1_TX_GPIO_Port GPIOA
#define INPOS_DOWN_Pin GPIO_PIN_4
#define INPOS_DOWN_GPIO_Port GPIOA
#define TR1_485_Pin GPIO_PIN_5
#define TR1_485_GPIO_Port GPIOA
#define ESTOP_Pin GPIO_PIN_6
#define ESTOP_GPIO_Port GPIOA
#define ESTOP_EXTI_IRQn EXTI9_5_IRQn
#define WARN_Pin GPIO_PIN_7
#define WARN_GPIO_Port GPIOA
#define LIGHT_LEFT_Pin GPIO_PIN_4
#define LIGHT_LEFT_GPIO_Port GPIOC
#define LIGHT_RIGHT_Pin GPIO_PIN_5
#define LIGHT_RIGHT_GPIO_Port GPIOC
#define CHARGE_Pin GPIO_PIN_0
#define CHARGE_GPIO_Port GPIOB
#define PUMP_UP_Pin GPIO_PIN_1
#define PUMP_UP_GPIO_Port GPIOB
#define PUMP_DOWN_Pin GPIO_PIN_2
#define PUMP_DOWN_GPIO_Port GPIOB
#define FORK_LEFT_Pin GPIO_PIN_7
#define FORK_LEFT_GPIO_Port GPIOE
#define FORK_RIGHT_Pin GPIO_PIN_8
#define FORK_RIGHT_GPIO_Port GPIOE
#define INPOS_UP_Pin GPIO_PIN_9
#define INPOS_UP_GPIO_Port GPIOE
#define TR2_485_Pin GPIO_PIN_15
#define TR2_485_GPIO_Port GPIOE
#define RS485_2_RX_Pin GPIO_PIN_10
#define RS485_2_RX_GPIO_Port GPIOB
#define RS485_2_TX_Pin GPIO_PIN_11
#define RS485_2_TX_GPIO_Port GPIOB
#define LED_232_1_Pin GPIO_PIN_14
#define LED_232_1_GPIO_Port GPIOB
#define LED_232_2_Pin GPIO_PIN_15
#define LED_232_2_GPIO_Port GPIOB
#define LED_485_1_Pin GPIO_PIN_8
#define LED_485_1_GPIO_Port GPIOD
#define LED_485_2_Pin GPIO_PIN_9
#define LED_485_2_GPIO_Port GPIOD
#define LED_CAN2_OPEN_Pin GPIO_PIN_10
#define LED_CAN2_OPEN_GPIO_Port GPIOD
#define LED_CAN2_REC_Pin GPIO_PIN_11
#define LED_CAN2_REC_GPIO_Port GPIOD
#define LED_SYS_Pin GPIO_PIN_12
#define LED_SYS_GPIO_Port GPIOD
#define RS232_2_RX_Pin GPIO_PIN_6
#define RS232_2_RX_GPIO_Port GPIOC
#define RS232_2_TX_Pin GPIO_PIN_7
#define RS232_2_TX_GPIO_Port GPIOC
#define TTL_TX_Pin GPIO_PIN_9
#define TTL_TX_GPIO_Port GPIOA
#define TTL_RX_Pin GPIO_PIN_10
#define TTL_RX_GPIO_Port GPIOA
#define LED_CAN1_REC_Pin GPIO_PIN_15
#define LED_CAN1_REC_GPIO_Port GPIOA
#define LED_CAN1_OPEN_Pin GPIO_PIN_10
#define LED_CAN1_OPEN_GPIO_Port GPIOC
#define HINSON2_IN1_Pin GPIO_PIN_3
#define HINSON2_IN1_GPIO_Port GPIOD
#define HINSON2_IN2_Pin GPIO_PIN_4
#define HINSON2_IN2_GPIO_Port GPIOD
#define HINSON2_IN3_Pin GPIO_PIN_5
#define HINSON2_IN3_GPIO_Port GPIOD
#define HINSON2_IN4_Pin GPIO_PIN_6
#define HINSON2_IN4_GPIO_Port GPIOD
#define HINSON2_IN5_Pin GPIO_PIN_7
#define HINSON2_IN5_GPIO_Port GPIOD
#define HINSON2_IN6_Pin GPIO_PIN_3
#define HINSON2_IN6_GPIO_Port GPIOB
#define HINSON2_OUT1_Pin GPIO_PIN_4
#define HINSON2_OUT1_GPIO_Port GPIOB
#define HINSON2_OUT2_Pin GPIO_PIN_5
#define HINSON2_OUT2_GPIO_Port GPIOB
#define HINSON2_OUT3_Pin GPIO_PIN_6
#define HINSON2_OUT3_GPIO_Port GPIOB
#define HINSON2_ERROR_Pin GPIO_PIN_7
#define HINSON2_ERROR_GPIO_Port GPIOB
#define HINSON1_IN1_Pin GPIO_PIN_8
#define HINSON1_IN1_GPIO_Port GPIOB
#define HINSON1_IN2_Pin GPIO_PIN_9
#define HINSON1_IN2_GPIO_Port GPIOB
#define HINSON1_IN3_Pin GPIO_PIN_0
#define HINSON1_IN3_GPIO_Port GPIOE
#define HINSON1_IN4_Pin GPIO_PIN_1
#define HINSON1_IN4_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
