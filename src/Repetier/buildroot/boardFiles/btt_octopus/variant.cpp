/*
 *******************************************************************************
 * Copyright (c) 2017, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
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
 *******************************************************************************
 */

#include "pins_arduino.h"

#ifdef __cplusplus
extern "C" {
#endif

// Pin number
// This array allows to wrap Arduino pin number(Dx or x)
// to STM32 PinName (PX_n)
const PinName digitalPin[] = {
    PA_0,  //D0   //A7
    PA_1,  //D1   //A8
    PA_2,  //D2   //A9
    PA_3,  //D3   //A0
    PA_4,  //D4   //A1
    PA_5,  //D5   //A10
    PA_6,  //D6   //A11
    PA_7,  //D7   //A12
    PA_8,  //D8
    PA_9,  //D9
    PA_10, //D10
    PA_11, //D11
    PA_12, //D12
    PA_13, //D13
    PA_14, //D14
    PA_15, //D15
    PB_0,  //D16  //A13
    PB_1,  //D17  //A14
    PB_2,  //D18
    PB_3,  //D19
    PB_4,  //D20
    PB_5,  //D21
    PB_6,  //D22
    PB_7,  //D23
    PB_8,  //D24
    PB_9,  //D25
    PB_10, //D26
    PB_11, //D27
    PB_12, //D28
    PB_13, //D29
    PB_14, //D30
    PB_15, //D31
    PC_0,  //D32  //A2
    PC_1,  //D33  //A3
    PC_2,  //D34  //A4
    PC_3,  //D35  //A5
    PC_4,  //D36  //A6
    PC_5,  //D37  //A15
    PC_6,  //D38
    PC_7,  //D39
    PC_8,  //D40
    PC_9,  //D41
    PC_10, //D42
    PC_11, //D43
    PC_12, //D44
    PC_13, //D45
    PC_14, //D46
    PC_15, //D47
    PD_0,  //D48
    PD_1,  //D49
    PD_2,  //D50
    PD_3,  //D51
    PD_4,  //D52
    PD_5,  //D53
    PD_6,  //D54
    PD_7,  //D55
    PD_8,  //D56
    PD_9,  //D57
    PD_10, //D58
    PD_11, //D59
    PD_12, //D60
    PD_13, //D61
    PD_14, //D62
    PD_15, //D63
    PE_0,  //D64
    PE_1,  //D65
    PE_2,  //D66
    PE_3,  //D67
    PE_4,  //D68
    PE_5,  //D69
    PE_6,  //D70
    PE_7,  //D71
    PE_8,  //D72
    PE_9,  //D73
    PE_10, //D74
    PE_11, //D75
    PE_12, //D76
    PE_13, //D77
    PE_14, //D78
    PE_15,  //D79
    PF_0,  //D80
    PF_1,  //D81
    PF_2,  //D82
    PF_3,  //D83
    PF_4,  //D84
    PF_5,  //D85
    PF_6,  //D86
    PF_7,  //D87
    PF_8,  //D88
    PF_9,  //D89
    PF_10, //D90
    PF_11, //D91
    PF_12, //D92
    PF_13, //D93
    PF_14, //D94
    PF_15,  //D95
    PG_0,  //D96
    PG_1,  //D97
    PG_2,  //D98
    PG_3,  //D99
    PG_4,  //D100
    PG_5,  //D101
    PG_6,  //D102
    PG_7,  //D103
    PG_8,  //D104
    PG_9,  //D105
    PG_10, //D106
    PG_11, //D107
    PG_12, //D108
    PG_13, //D109
    PG_14, //D110
    PG_15  //D111
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
    83,  // A0,  PF3
    84,  // A1,  PF4
    85,  // A2,  PF5
    86,  // A3,  PF6
    87,  // A4,  PF7
    88,  // A5,  PF8
    /* 6,  // A6,  PA6
    7,  // A7,  PA7
    16, // A8,  PB0
    17, // A9,  PB1
    32, // A10, PC0
    33, // A11, PC1
    34, // A12, PC2
    35, // A13, PC3
    36, // A14, PC4
    37  // A15, PC5*/
};

#ifdef __cplusplus
}
#endif

// ----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

/**
  * @brief  System Clock Configuration
  * @param  None
  * @retval None
  */
WEAK void SystemClock_Config(void) {

    RCC_OscInitTypeDef RCC_OscInitStruct;
    RCC_ClkInitTypeDef RCC_ClkInitStruct;

    /**Configure the main internal regulator output voltage
  */
    __HAL_RCC_PWR_CLK_ENABLE();

    __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

    /**Initializes the CPU, AHB and APB busses clocks
  */
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
    RCC_OscInitStruct.HSEState = RCC_HSE_ON;
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
    RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
    RCC_OscInitStruct.PLL.PLLM = 8;
    RCC_OscInitStruct.PLL.PLLN = 336;
    RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
    RCC_OscInitStruct.PLL.PLLQ = 7;
    if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
        _Error_Handler(__FILE__, __LINE__);
    }

    /**Initializes the CPU, AHB and APB busses clocks
  */
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
        | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK) {
        _Error_Handler(__FILE__, __LINE__);
    }

    /**Configure the Systick interrupt time
  */
    HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq() / 1000);

    /**Configure the Systick
  */
    HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);

    /* SysTick_IRQn interrupt configuration */
    HAL_NVIC_SetPriority(SysTick_IRQn, 0, 0);
}

#ifdef __cplusplus
}
#endif
