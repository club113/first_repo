/**
  ******************************************************************************
  * File Name          : mxconstants.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  *
  * COPYRIGHT(c) 2017 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MXCONSTANT_H
#define __MXCONSTANT_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define LED_9_Pin GPIO_PIN_2
#define LED_9_GPIO_Port GPIOE
#define LED_10_Pin GPIO_PIN_3
#define LED_10_GPIO_Port GPIOE
#define LED_11_Pin GPIO_PIN_4
#define LED_11_GPIO_Port GPIOE
#define LED_12_Pin GPIO_PIN_5
#define LED_12_GPIO_Port GPIOE
#define RS422_IO_Pin GPIO_PIN_0
#define RS422_IO_GPIO_Port GPIOC
#define RS_485_DE_3_Pin GPIO_PIN_1
#define RS_485_DE_3_GPIO_Port GPIOC
#define RS_485_RE_3_Pin GPIO_PIN_2
#define RS_485_RE_3_GPIO_Port GPIOC
#define IO_485_3_Pin GPIO_PIN_3
#define IO_485_3_GPIO_Port GPIOC
#define SPI1_CS_Pin GPIO_PIN_4
#define SPI1_CS_GPIO_Port GPIOA
#define RS_485_RE_2_Pin GPIO_PIN_9
#define RS_485_RE_2_GPIO_Port GPIOE
#define RS_485_DE_2_Pin GPIO_PIN_10
#define RS_485_DE_2_GPIO_Port GPIOE
#define IO_485_2_Pin GPIO_PIN_11
#define IO_485_2_GPIO_Port GPIOE
#define IO_485_1_Pin GPIO_PIN_13
#define IO_485_1_GPIO_Port GPIOE
#define RS_485_DE_1_Pin GPIO_PIN_14
#define RS_485_DE_1_GPIO_Port GPIOE
#define RS_485_RE_1_Pin GPIO_PIN_15
#define RS_485_RE_1_GPIO_Port GPIOE
#define LED_1_Pin GPIO_PIN_8
#define LED_1_GPIO_Port GPIOD
#define LED_2_Pin GPIO_PIN_9
#define LED_2_GPIO_Port GPIOD
#define LED_3_Pin GPIO_PIN_10
#define LED_3_GPIO_Port GPIOD
#define LED_4_Pin GPIO_PIN_11
#define LED_4_GPIO_Port GPIOD
#define LED_5_Pin GPIO_PIN_12
#define LED_5_GPIO_Port GPIOD
#define LED_6_Pin GPIO_PIN_13
#define LED_6_GPIO_Port GPIOD
#define LED_7_Pin GPIO_PIN_14
#define LED_7_GPIO_Port GPIOD
#define LED_8_Pin GPIO_PIN_15
#define LED_8_GPIO_Port GPIOD
#define TCM300_TX_Pin GPIO_PIN_5
#define TCM300_TX_GPIO_Port GPIOD
#define TCM300_RX_Pin GPIO_PIN_6
#define TCM300_RX_GPIO_Port GPIOD
#define WIFI_NREADY_Pin GPIO_PIN_7
#define WIFI_NREADY_GPIO_Port GPIOD
#define WIFI_NLINK_Pin GPIO_PIN_3
#define WIFI_NLINK_GPIO_Port GPIOB
#define WIFI_SMART_LINK_Pin GPIO_PIN_4
#define WIFI_SMART_LINK_GPIO_Port GPIOB
#define WIFI_REST_Pin GPIO_PIN_5
#define WIFI_REST_GPIO_Port GPIOB
#define WIFI_TX_Pin GPIO_PIN_6
#define WIFI_TX_GPIO_Port GPIOB
#define WIFI_RX_Pin GPIO_PIN_7
#define WIFI_RX_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MXCONSTANT_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
