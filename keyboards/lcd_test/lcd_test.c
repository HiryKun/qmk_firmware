#include QMK_KEYBOARD_H
#include "spi_master.h"
#include "qp.h"
#include "print.h"
#include "1_qgf.h"

void keyboard_pre_init_kb(void) {
    setPinOutputPushPull(C13);
    writePinHigh(C13);
}

void keyboard_post_init_kb(void) {
    painter_device_t display = qp_st7735_make_spi_device(128, 160, A4, B1, B0, 4, 0);
    qp_init(display, QP_ROTATION_180);
    qp_set_viewport_offsets(display, 2, 1);
    qp_power(display, true);
    qp_clear(display);
    // qp_rect(display, 10, 20, 100, 120, 100, 255, 255, true);
    painter_image_handle_t image1 = qp_load_image_mem(gfx_____1);
    qp_drawimage(display, 0, 0, image1);
    qp_flush(display);
}