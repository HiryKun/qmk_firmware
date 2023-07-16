#pragma once

#include "config_common.h"

#define LAYER_STATE_8BIT

#define VENDOR_ID       0x0C74
#define PRODUCT_ID      0x00A1
#define DEVICE_VER      0x0001
#define MANUFACTURER    GOOD
#define PRODUCT         40
#define USB_POLLING_INTERVAL_MS 1

#define MATRIX_ROWS 4
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS { A15, B3, B4, B5 }
#define MATRIX_COL_PINS { A0,  A1, A2, B14, B13, B12, B11, B10, B1, B0, A7, A6 }

#define DIODE_DIRECTION ROW2COL

//RGB设置
#define RGB_DI_PIN A10
#define DRIVER_LED_TOTAL 42
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200


#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define RGB_MATRIX_KEYPRESSES
#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BREATHINGRGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYRELEASES

#define Debounce 5       //去抖（默认5）

/*
//编码器设置
#define ENCODERS_PAD_A { }   //编码器A引脚
#define ENCODERS_PAD_B { }   //编码器B引脚

//#define ENCODERS_PAD_A {1a,1b }      //多个编码器写法
//#define ENCODERS_PAD_B {2a,2b }

#define ENCODER_DIRECTION_FLIP       //编码器方向翻转
#define ENCODER_RESOLUTTON 4 

*/

/*
//OLED设置
#define OLED_BRIGHTNESS 160
#define OLED_TIMEOUT 0        //
#define OLED_SCEOLL_TIMEOUT 20000   //OLED超时多久后会滚动（避免烧屏）
*/