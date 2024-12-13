// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┐  ┌───┬───┬───┬───┬───┬───┐
     * │ply│mut│  │esc│f1 │f2 │f3 │f4 │f5 │
     * └───┴───┘  └───┴───┴───┴───┴───┴───┘
     *
     * ┌───┬───┐  ┌───┬───┬───┬───┬───┬───┐
     * │   │   │  │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │
     * ├───┼───┤  ├───┼───┼───┼───┼───┼───┤
     * │   │   │  │tab│ q │ w │ e │ r │ t │
     * ├───┼───┤  ├───┼───┼───┼───┼───┼───┤
     * │   │   │  │cap│ a │ s │ d │ f │ g │
     * ├───┼───┤  ├───┼───┼───┼───┼───┼───┤
     * │<--│-->│  │sft│ z │ x │ c │ v │ b │
     * ├───┼───┤  ├───┼───┼───┼───┼───┼───┤
     * │v+ │v- │  │ctr│win│alt│   │lay│spc│
     * └───┴───┘  └───┴───┴───┘   └───┴───┘
     */
    [0] = LAYOUT(
        KC_MPLY,   KC_MUTE,     KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,

        KC_P2,     KC_P2,       KC_GRV,  KC_2,    KC_3,    KC_4,    KC_5,    KC_6,
        KC_P2,     KC_P2,       KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_P2,     KC_P2,       KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        KC_MPRV,   KC_MNXT,     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
        KC_VOLD,   KC_VOLU,     KC_LCTL, KC_LWIN, KC_LALT, KC_P2,   KC_SPC,  KC_SPC
    )
};
