/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
/* USER CODE BEGIN Private defines */
#define cd_Pin GPIO_PIN_1
#define cd_GPIO_Port GPIOA
#define cv_Pin GPIO_PIN_2
#define cv_GPIO_Port GPIOA
#define cx_Pin GPIO_PIN_3
#define cx_GPIO_Port GPIOA
#define hd_Pin GPIO_PIN_4
#define hd_GPIO_Port GPIOA
#define hv_Pin GPIO_PIN_5
#define hv_GPIO_Port GPIOA
#define hx_Pin GPIO_PIN_6
#define hx_GPIO_Port GPIOA
#define aa_Pin GPIO_PIN_0
#define aa_GPIO_Port GPIOB
#define ab_Pin GPIO_PIN_1
#define ab_GPIO_Port GPIOB
#define ac_Pin GPIO_PIN_2
#define ac_GPIO_Port GPIOB
#define ad_Pin GPIO_PIN_3
#define ad_GPIO_Port GPIOB
#define ae_Pin GPIO_PIN_4
#define ae_GPIO_Port GPIOB
#define af_Pin GPIO_PIN_5
#define af_GPIO_Port GPIOB
#define ag_Pin GPIO_PIN_6
#define ag_GPIO_Port GPIOB
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
