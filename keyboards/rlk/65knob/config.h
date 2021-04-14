#pragma once

#include "config_common.h"


/* USB Device descriptor parameter */
#define VENDOR_ID       0x524B
#define PRODUCT_ID      0x0022
#define DEVICE_VER      0x0001
#define MANUFACTURER    RobotLovesKitten
#define PRODUCT         65Knob
#define DESCRIPTION     65Knob Keyboard


/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

/* key matrix pins */
#define MATRIX_COL_PINS { D3, D2, D7, E6, B4, B5, B7, D5, C7, F1, F0, B6, B2, B3 }
#define MATRIX_ROW_PINS { F4, F5, F6, F7, B1 }

#define UNUSED_PINS
#define DIODE_DIRECTION COL2ROW

/* ROTARY ENCODERS */

#define ENCODERS_PAD_A { C6 }
#define ENCODERS_PAD_B { D4 }
#define ENCODER_DIRECTION_FLIP

#define ENCODER_RESOLUTION 2

#define TAP_CODE_DELAY 10

#define BACKLIGHT_LEVELS 5

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

#ifdef LED_MATRIX_ENABLE

#define LED_DRIVER_ADDR_1 0x74
#define LED_DRIVER_COUNT 1
#define DRIVER_LED_TOTAL 105
#define LED_MATRIX_ROWS 15
#define LED_MATRIX_COLS 7
#define LED_MATRIX_MAXIMUM_BRIGHTNESS 20
#define LED_DISABLE_WHEN_USB_SUSPENDED true

#endif

/* Terrazzo animations */

// #define DISABLE_TERRAZZO_EFFECT_CANDLE
// #define DISABLE_TERRAZZO_EFFECT_STRIPES
// #define DISABLE_TERRAZZO_EFFECT_DINO
// #define DISABLE_TERRAZZO_EFFECT_DOT

// #define DEBUG_MATRIX_SCAN_RATE
