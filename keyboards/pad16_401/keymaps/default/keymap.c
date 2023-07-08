#include QMK_KEYBOARD_H

/*按键映射*/
/*关于keymap和层的解读，详见 https://docs.qmk.fm/#/feature_layers 和 https://docs.qmk.fm/#/keymap */
/*可用的键详见 https://docs.qmk.fm/#/keycodes */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/*默认层*/
    [0] = LAYOUT (
    KC_ESC , KC_SPC  , KC_SPC  , KC_SPC,
	KC_7   , KC_8    , KC_9    , KC_MINS,
	KC_4   , KC_5    , KC_6    , KC_EQL,
	KC_1   , KC_2    , KC_3    , KC_SPC
		//MO()所指层的相同位置，需要写KC_TRNS，不能是XXXXXXX
    ),
	/*Fn层*/
    [1] = LAYOUT (
	KC_ESC , KC_SPC  , KC_SPC  , KC_SPC,
	KC_7   , KC_8    , KC_9    , KC_MINS,
	KC_4   , KC_5    , KC_6    , KC_EQL,
	KC_1   , KC_2    , KC_3    , KC_SPC
	)
};	//这里的分号一定不要忘记
