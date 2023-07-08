#pragma once
/*
 #ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

USB Device descriptor parameter 
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Made in China
#define PRODUCT         RGB键盘
*/


/* key matrix size */
//#define MATRIX_ROWS 5
//#define MATRIX_COLS 4


/* key matrix pins */
//#define MATRIX_ROW_PINS { D2, B6, A9, C9, B11 }
//#define MATRIX_COL_PINS { B10, C6, C10, A3 }
//#define UNUSED_PINS

/* COL2ROW or ROW2COL */
//#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

/* key combination for command 
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)
*/

/* prevent stuck modifiers */
//#define PREVENT_STUCK_MODIFIERS

/* RGBPWM */
//#ifdef  RGB_MATRIX_ENABLE
#define WS2812_PWM_DRIVER PWMD1  // default: PWMD2
#define WS2812_PWM_CHANNEL 3  // default: 2
#define WS2812_PWM_PAL_MODE 2  // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 2
//#define WS2812_PWM_COMPLEMENTARY_OUTPUT // Define for a complementary timer output (TIMx_CHyN); omit for a normal timer output (TIMx_CHy).
#define WS2812_DMA_STREAM STM32_DMA1_STREAM5  // DMA Stream for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
#define WS2812_DMA_CHANNEL 5  // DMA Channel for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
//#define WS2812_DMAMUX_ID STM32_DMAMUX1_TIM2_UP // DMAMUX configuration for TIMx_UP -- only required if your MCU has a DMAMUX peripheral, see the respective reference manual for the appropriate values for your MCU.

/* RGB参数 */
//#define RGB_DI_PIN A10
#define WS2812_DI_PIN A10
//#define RGBLED_NUM 17
#define RGB_MATRIX_LED_COUNT 17
//#define DRIVER_LED_TOTAL 17
//#define RGB_MATRIX_KEYPRESSES
//#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
//#define RGB_DISABLE_WHEN_USB_SUSPENDED false
//#define RGB_MATRIX_CENTER { 112, 32 }
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 40 //led亮度



//#define RGBLED_NUM 17
//#define RGBLIGHT_LIMIT_VAL	100	 /* 最大亮度级别 */
//#define RGBLIGHT_HUE_STEP 8
//#define RGBLIGHT_SAT_STEP 8
//#define RGBLIGHT_VAL_STEP 8
//#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
//#define RGB_MATRIX_KEYPRESSES

/* RGB灯效 */

 
#define ENABLE_RGB_MATRIX_ALPHAS_MODS	//使RGB_MATRIX_ALPHAS_MODS

