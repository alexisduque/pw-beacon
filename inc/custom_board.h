/**
 *
 * \file        inc/custom_board.h
 * \author      Alexis DUQUE (Rtone)
 * \date        29/12/2015
 * \brief       Header file of NRF Platform configuration
 *
 */

#ifndef CUSTOM_BOARD_H__
#define CUSTOM_BOARD_H__

#define LEDS_NUMBER    1

#define LED_START  15
#define BSP_LED_0  12
#define LED_STOP   16

#define BUTTONS_LIST {}
#define LEDS_LIST { BSP_LED_0 }

#define BSP_LED_0_MASK    (1<<BSP_LED_0)

// bsp.c assumes BSP_LED_1_MASK always exists
#define BSP_LED_1_MASK    (1<<BSP_LED_0)

#define LEDS_MASK      (BSP_LED_0_MASK)
#define LEDS_INV_MASK  LEDS_MASK

// there are no buttons on this board
#define BUTTONS_NUMBER 0
#define BUTTONS_MASK   0x00000000

// UART pins connected to J-Link
#define RX_PIN_NUMBER  11
#define TX_PIN_NUMBER  9
#define CTS_PIN_NUMBER 10
#define RTS_PIN_NUMBER 8
#define HWFC           false

#endif /* CUSTOM_BOARD_H__ */