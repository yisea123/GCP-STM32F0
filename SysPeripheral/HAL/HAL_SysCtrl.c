/**
  ******************************************************************************
  * @file    HAL_SysCtrl.h
  * @author  Duhanfneg
  * @version V1.0
  * @date    2017.10.19
  * @brief   MCU Ctrl Interface
  ******************************************************************************
  * @attention
  * 
  * 
  * 
  * 
  ******************************************************************************
  */
   
   
/***********************************<INCLUDES>**********************************/
#include "HAL_SysCtrl.h"
#include "chip.h"


/*****************************************************************************
 * 系统相关控制接口
 ****************************************************************************/

/**
  * @brief  系统复位函数
  * @param  None
  * @retval None
  */
void HAL_SystemReset(void)
{
    NVIC_SystemReset(); //复位
    
}


