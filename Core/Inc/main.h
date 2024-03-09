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

#include "stm32f3xx_ll_rcc.h"
#include "stm32f3xx_ll_bus.h"
#include "stm32f3xx_ll_system.h"
#include "stm32f3xx_ll_exti.h"
#include "stm32f3xx_ll_cortex.h"
#include "stm32f3xx_ll_utils.h"
#include "stm32f3xx_ll_pwr.h"
#include "stm32f3xx_ll_dma.h"
#include "stm32f3xx_ll_tim.h"
#include "stm32f3xx_ll_usart.h"
#include "stm32f3xx_ll_gpio.h"

#if defined(USE_FULL_ASSERT)
#include "stm32_assert.h"
#endif /* USE_FULL_ASSERT */

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
#define Denjiben6_Pin LL_GPIO_PIN_2
#define Denjiben6_GPIO_Port GPIOF
#define Denjiben5_Pin LL_GPIO_PIN_6
#define Denjiben5_GPIO_Port GPIOF
#define Denjiben4_Pin LL_GPIO_PIN_7
#define Denjiben4_GPIO_Port GPIOF
#define Denjiben3_Pin LL_GPIO_PIN_8
#define Denjiben3_GPIO_Port GPIOF
#define Denjiben2_Pin LL_GPIO_PIN_9
#define Denjiben2_GPIO_Port GPIOF
#define Denjiben1_Pin LL_GPIO_PIN_10
#define Denjiben1_GPIO_Port GPIOF
#define Encoder3A_Pin LL_GPIO_PIN_0
#define Encoder3A_GPIO_Port GPIOA
#define Encoder3B_Pin LL_GPIO_PIN_1
#define Encoder3B_GPIO_Port GPIOA
#define Encoder1A_Pin LL_GPIO_PIN_6
#define Encoder1A_GPIO_Port GPIOA
#define Encoder1B_Pin LL_GPIO_PIN_7
#define Encoder1B_GPIO_Port GPIOA
#define LED1_Pin LL_GPIO_PIN_12
#define LED1_GPIO_Port GPIOE
#define LED2_Pin LL_GPIO_PIN_13
#define LED2_GPIO_Port GPIOE
#define LED3_Pin LL_GPIO_PIN_14
#define LED3_GPIO_Port GPIOE
#define LED4_Pin LL_GPIO_PIN_15
#define LED4_GPIO_Port GPIOE
#define MD5Dir_Pin LL_GPIO_PIN_12
#define MD5Dir_GPIO_Port GPIOB
#define MD6Dir_Pin LL_GPIO_PIN_13
#define MD6Dir_GPIO_Port GPIOB
#define MD7Dir_Pin LL_GPIO_PIN_14
#define MD7Dir_GPIO_Port GPIOB
#define MD8Dir_Pin LL_GPIO_PIN_15
#define MD8Dir_GPIO_Port GPIOB
#define MD1Pwm_Pin LL_GPIO_PIN_12
#define MD1Pwm_GPIO_Port GPIOD
#define MD2Pwm_Pin LL_GPIO_PIN_13
#define MD2Pwm_GPIO_Port GPIOD
#define MD3Pwm_Pin LL_GPIO_PIN_14
#define MD3Pwm_GPIO_Port GPIOD
#define MD4Pwm_Pin LL_GPIO_PIN_15
#define MD4Pwm_GPIO_Port GPIOD
#define MD5Pwm_Pin LL_GPIO_PIN_6
#define MD5Pwm_GPIO_Port GPIOC
#define MD6Pwm_Pin LL_GPIO_PIN_7
#define MD6Pwm_GPIO_Port GPIOC
#define MD7Pwm_Pin LL_GPIO_PIN_8
#define MD7Pwm_GPIO_Port GPIOC
#define MD8Pwm_Pin LL_GPIO_PIN_9
#define MD8Pwm_GPIO_Port GPIOC
#define Encoder2A_Pin LL_GPIO_PIN_8
#define Encoder2A_GPIO_Port GPIOA
#define Encoder2B_Pin LL_GPIO_PIN_9
#define Encoder2B_GPIO_Port GPIOA
#define MD4Dir_Pin LL_GPIO_PIN_10
#define MD4Dir_GPIO_Port GPIOG
#define MD3Dir_Pin LL_GPIO_PIN_11
#define MD3Dir_GPIO_Port GPIOG
#define MD2Dir_Pin LL_GPIO_PIN_12
#define MD2Dir_GPIO_Port GPIOG
#define MD1Dir_Pin LL_GPIO_PIN_13
#define MD1Dir_GPIO_Port GPIOG
#ifndef NVIC_PRIORITYGROUP_0
#define NVIC_PRIORITYGROUP_0         ((uint32_t)0x00000007) /*!< 0 bit  for pre-emption priority,
                                                                 4 bits for subpriority */
#define NVIC_PRIORITYGROUP_1         ((uint32_t)0x00000006) /*!< 1 bit  for pre-emption priority,
                                                                 3 bits for subpriority */
#define NVIC_PRIORITYGROUP_2         ((uint32_t)0x00000005) /*!< 2 bits for pre-emption priority,
                                                                 2 bits for subpriority */
#define NVIC_PRIORITYGROUP_3         ((uint32_t)0x00000004) /*!< 3 bits for pre-emption priority,
                                                                 1 bit  for subpriority */
#define NVIC_PRIORITYGROUP_4         ((uint32_t)0x00000003) /*!< 4 bits for pre-emption priority,
                                                                 0 bit  for subpriority */
#endif

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
