// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "1_qgf.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x4(
        KC_P7,   KC_P8,   KC_P9,   KC_PSLS,
        KC_P4,   KC_P5,   KC_P6,   KC_PAST,
        KC_P1,   KC_P2,   KC_P3,   KC_PMNS,
        KC_P0,   KC_PDOT, KC_PENT, KC_PPLS
    )
};

void keyboard_post_init_kb(void) {
    painter_device_t display = qp_st7735_make_spi_device(128, 160, A4, B1, B0, 4, 0);
    qp_init(display, QP_ROTATION_180);
    qp_set_viewport_offsets(display, 2, 1);
    qp_power(display, true);
    qp_clear(display);
    painter_image_handle_t image1 = qp_load_image_mem(gfx_____1);
    qp_drawimage(display, 0, 0, image1);
    qp_flush(display);
}
