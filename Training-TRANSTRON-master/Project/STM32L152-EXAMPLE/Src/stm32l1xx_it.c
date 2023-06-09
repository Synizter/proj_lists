/**
  ******************************************************************************
  * @file    stm32l1xx_it.c
  * @brief   Interrupt Service Routines.
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
/* Includes ------------------------------------------------------------------*/
#include "stm32l1xx_hal.h"
#include "stm32l1xx.h"
#include "stm32l1xx_it.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/* External variables --------------------------------------------------------*/
//extern TIM_HandleTypeDef hTIM2; //Tim2 instance associated with one on main.c
extern UART_HandleTypeDef hUARTx;
//extern DMA_HandleTypeDef hDMA_RX;
extern DMA_HandleTypeDef hDMAx_SPI_RX;
extern DMA_HandleTypeDef hDMAx_SPI_TX;


/******************************************************************************/
/*            Cortex-M3 Processor Interruption and Exception Handlers         */ 
/******************************************************************************/

/**
* @brief This function handles System tick timer.
*/
void SysTick_Handler(void)
{
  /* USER CODE BEGIN SysTick_IRQn 0 */

  /* USER CODE END SysTick_IRQn 0 */
  HAL_IncTick();
  HAL_SYSTICK_IRQHandler();
  /* USER CODE BEGIN SysTick_IRQn 1 */

  /* USER CODE END SysTick_IRQn 1 */
}


/** EXTI Interrupt */
void EXTI0_IRQHandler(void)
{
	HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_0);

}

/* TIMER Interrupt */
void TIM2_IRQHandler(void)
{
	//HAL_TIM_IRQHandler(&hTIM2);

}



///**
//  * @brief  This function handles DMA interrupt request.  
//  * @param  None
//  * @retval None
//  * @Note   This function is redefined in "main.h" and related to DMA  
//  *         used for USART data transmission     
//  */
//void DMA1_Channel3_IRQHandler(void)
//{
//	HAL_NVIC_ClearPendingIRQ(DMA1_Channel3_IRQn);
//  HAL_DMA_IRQHandler(&hDMA_RX);
//}

//void DMA1_Channel4_IRQHandler(void)
//{
//	__HAL_DMA_CLEAR_FLAG(hDMAx_SPI_RX, __HAL_DMA_GET_TC_FLAG_INDEX(&hDMAx_SPI_RX));
//	HAL_NVIC_ClearPendingIRQ(DMA1_Channel4_IRQn);
//  HAL_DMA_IRQHandler(&hDMAx_SPI_RX);
//}

//void DMA1_Channel5_IRQHandler(void)
//{
//	__HAL_DMA_CLEAR_FLAG(hDMAx_SPI_TX, __HAL_DMA_GET_TC_FLAG_INDEX(&hDMAx_SPI_TX));
//	HAL_NVIC_ClearPendingIRQ(DMA1_Channel5_IRQn);
//  HAL_DMA_IRQHandler(&hDMAx_SPI_TX);
//}

/******************************************************************************/
/* STM32L1xx Peripheral Interrupt Handlers                                    */
/* Add here the Interrupt Handlers for the used peripherals.                  */
/* For the available peripheral interrupt handler names,                      */
/* please refer to the startup file (startup_stm32l1xx.s).                    */
/******************************************************************************/

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
