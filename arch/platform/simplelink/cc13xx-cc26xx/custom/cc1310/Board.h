/*
 * Copyright (c) 2015-2019, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __BOARD_H
#define __BOARD_H

#ifdef __cplusplus
extern "C" {
#endif

#include <ti/drivers/Board.h>
#include "CC1310_LAUNCHXL.h"

#define Board_CC1310_LAUNCHXL
#define BOARD_STRING             "TI CC1310 LaunchPad"

#define Board_initGeneral()      Board_init()  /* deprecated */

/* These #defines allow us to reuse TI-RTOS across other device families */

#define Board_ADC0              PIN_UNASSIGNED
#define Board_ADC1              PIN_UNASSIGNED

#define Board_ADCBUF0           PIN_UNASSIGNED
#define Board_ADCBUF0CHANNEL0   PIN_UNASSIGNED
#define Board_ADCBUF0CHANNEL1   PIN_UNASSIGNED

#define Board_CRYPTO0           PIN_UNASSIGNED
#define Board_AESCCM0           PIN_UNASSIGNED
#define Board_AESGCM0           PIN_UNASSIGNED
#define Board_AESCBC0           PIN_UNASSIGNED
#define Board_AESCTR0           PIN_UNASSIGNED
#define Board_AESECB0           PIN_UNASSIGNED
#define Board_AESCTRDRBG0       PIN_UNASSIGNED
#define Board_TRNG0             PIN_UNASSIGNED

#define Board_DIO0              PIN_UNASSIGNED
#define Board_DIO1              PIN_UNASSIGNED
#define Board_DIO12             PIN_UNASSIGNED
#define Board_DIO15             PIN_UNASSIGNED
#define Board_DIO16_TDO         PIN_UNASSIGNED
#define Board_DIO17_TDI         PIN_UNASSIGNED
#define Board_DIO21             PIN_UNASSIGNED
#define Board_DIO22             PIN_UNASSIGNED

#define Board_GPIO_BUTTON0      PIN_UNASSIGNED
#define Board_GPIO_BUTTON1      PIN_UNASSIGNED
#define Board_GPIO_BTN1         PIN_UNASSIGNED
#define Board_GPIO_BTN2         PIN_UNASSIGNED
#define Board_GPIO_LED0         PIN_UNASSIGNED
#define Board_GPIO_LED1         PIN_UNASSIGNED
#define Board_GPIO_RLED         PIN_UNASSIGNED
#define Board_GPIO_GLED         PIN_UNASSIGNED
#define Board_GPIO_LED_ON       PIN_UNASSIGNED
#define Board_GPIO_LED_OFF      PIN_UNASSIGNED

#define Board_GPTIMER0A         PIN_UNASSIGNED
#define Board_GPTIMER0B         PIN_UNASSIGNED
#define Board_GPTIMER1A         PIN_UNASSIGNED
#define Board_GPTIMER1B         PIN_UNASSIGNED
#define Board_GPTIMER2A         PIN_UNASSIGNED
#define Board_GPTIMER2B         PIN_UNASSIGNED
#define Board_GPTIMER3A         PIN_UNASSIGNED
#define Board_GPTIMER3B         PIN_UNASSIGNED

#define Board_I2C0              PIN_UNASSIGNED
#define Board_I2C_TMP           PIN_UNASSIGNED

#define Board_I2S0              PIN_UNASSIGNED
#define Board_I2S_ADO           PIN_UNASSIGNED
#define Board_I2S_ADI           PIN_UNASSIGNED
#define Board_I2S_BCLK          PIN_UNASSIGNED
#define Board_I2S_MCLK          PIN_UNASSIGNED
#define Board_I2S_WCLK          PIN_UNASSIGNED

#define Board_NVSINTERNAL       PIN_UNASSIGNED
#define Board_NVSEXTERNAL       PIN_UNASSIGNED

#define Board_PIN_BUTTON0       PIN_UNASSIGNED
#define Board_PIN_BUTTON1       PIN_UNASSIGNED
#define Board_PIN_BTN1          PIN_UNASSIGNED
#define Board_PIN_BTN2          PIN_UNASSIGNED
#define Board_PIN_LED0          PIN_UNASSIGNED
#define Board_PIN_LED1          PIN_UNASSIGNED
#define Board_PIN_LED2          PIN_UNASSIGNED
#define Board_PIN_RLED          PIN_UNASSIGNED
#define Board_PIN_GLED          PIN_UNASSIGNED

#define Board_PWM0              PIN_UNASSIGNED
#define Board_PWM1              PIN_UNASSIGNED
#define Board_PWM2              PIN_UNASSIGNED
#define Board_PWM3              PIN_UNASSIGNED
#define Board_PWM4              PIN_UNASSIGNED
#define Board_PWM5              PIN_UNASSIGNED
#define Board_PWM6              PIN_UNASSIGNED
#define Board_PWM7              PIN_UNASSIGNED

#define Board_SD0               PIN_UNASSIGNED

#define Board_SPI0              PIN_UNASSIGNED
#define Board_SPI0_MISO         PIN_UNASSIGNED
#define Board_SPI0_MOSI         PIN_UNASSIGNED
#define Board_SPI0_CLK          PIN_UNASSIGNED
#define Board_SPI0_CSN          PIN_UNASSIGNED
#define Board_SPI1              PIN_UNASSIGNED
#define Board_SPI1_MISO         PIN_UNASSIGNED
#define Board_SPI1_MOSI         PIN_UNASSIGNED
#define Board_SPI1_CLK          PIN_UNASSIGNED
#define Board_SPI1_CSN          PIN_UNASSIGNED
#define Board_SPI_FLASH_CS      PIN_UNASSIGNED
#define Board_FLASH_CS_ON       PIN_UNASSIGNED
#define Board_FLASH_CS_OFF      PIN_UNASSIGNED

#define Board_SPI_MASTER        PIN_UNASSIGNED
#define Board_SPI_SLAVE         PIN_UNASSIGNED
#define Board_SPI_MASTER_READY  PIN_UNASSIGNED
#define Board_SPI_SLAVE_READY   PIN_UNASSIGNED

#define Board_UART0             -1

#define Board_WATCHDOG0         PIN_UNASSIGNED

#ifdef __cplusplus
}
#endif

#endif /* __BOARD_H */
