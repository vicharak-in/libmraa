/*
 * Author: Utsav Balar <utsavbalar1231@gmail.com>
 * Copyright (c) 2023 Vicharak Computers LLP.
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <mraa_internal.h>

#define MRAA_VAAMAN_GPIO_COUNT 27
#define MRAA_VAAMAN_I2C_COUNT  3
#define MRAA_VAAMAN_SPI_COUNT  2
#define MRAA_VAAMAN_UART_COUNT 2
#define MRAA_VAAMAN_PWM_COUNT  2
#define MRAA_VAAMAN_AIO_COUNT  1
#define MRAA_VAAMAN_PIN_COUNT  40

mraa_board_t *
        mraa_vaaman();

#ifdef __cplusplus
}
#endif
