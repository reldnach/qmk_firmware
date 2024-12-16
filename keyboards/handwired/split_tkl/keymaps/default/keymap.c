// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*   0      1   2      3   4   5   6   7   8            0   1   2   3   4   5   6   7     8
     *   ┌───┐  ┌───┬───┐  ┌───┬───┬───┬───┬───┬───┐        ┌───┬───┬───┬───┬───┬───┬───┬───┐ ┌───┐
     * 0 │na │  │hom│end│  │esc│f1 │f2 │f3 │f4 │f5 │        │f6 │f7 │f8 │f9 │f10│f11│f12│   │ │del│
     *   └───┘  └───┴───┘  └───┴───┴───┴───┴───┴───┘        └───┴───┴───┴───┴───┴───┴───┴───┘ └───┘
     *                                                                                          
     *   ┌───┐  ┌───┬───┐  ┌───┬───┬───┬───┬───┬───┐        ┌───┬───┬───┬───┬───┬───┬───┬───┐ ┌───┐
     * 1 │na │  │ply│mut│  │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │        │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │bks│ │pgu│
     *   ├───┤  ├───┼───┤  ├───┼───┼───┼───┼───┼───┤        ├───┼───┼───┼───┼───┼───┼───┼───┤ ├───┤
     * 2 │na │  │   │   │  │tab│ q │ w │ e │ r │ t │        │ y │ u │ i │ o │ p │ [ │ ] │ \ │ │pgd│
     *   ├───┤  ├───┼───┤  ├───┼───┼───┼───┼───┼───┤        ├───┼───┼───┼───┼───┼───┼───┼───┘ └───┘
     * 3 │na │  │   │   │  │cap│ a │ s │ d │ f │ g │        │ h │ j │ k │ l │ ; │ ' │rtn│ ┌───┐
     *   ├───┤  ├───┼───┤  ├───┼───┼───┼───┼───┼───┤        ├───┼───┼───┼───┼───┼───┼───┘ │ ^ │
     * 4 │na │  │<--│-->│  │sft│ z │ x │ c │ v │ b │        │ n │ m │ , │ . │ / │sft│ ┌───┼───┼───┐
     *   ├───┤  ├───┼───┤  ├───┼───┼───┼───┼───┼───┤        ├───┼───┼───┼───┼───┼───│ │ < │ v │ > │
     * 5 │na │  │v+ │v- │  │ctr│win│alt│   │lay│spc│        │spc│lay│   │alt│win│ctr│ └───┴───┴───┘
     *   └───┘  └───┴───┘  └───┴───┴───┘   └───┴───┘        └───┴───┘   └───┴───┴───┘              
     */
    [0] = LAYOUT(
        // left
        KC_P2,     KC_HOME,   KC_END,      KC_ESC,  KC_F1,   KC_F2,   KC_F3, KC_F4,  KC_F5,

        KC_P2,     KC_MPLY,   KC_MUTE,     KC_GRV,  KC_2,    KC_3,    KC_4,  KC_5,   KC_6,
        KC_P2,     KC_P2,     KC_P2,       KC_TAB,  KC_Q,    KC_W,    KC_E,  KC_R,   KC_T,
        KC_P2,     KC_P2,     KC_P2,       KC_CAPS, KC_A,    KC_S,    KC_D,  KC_F,   KC_G,
        KC_P2,     KC_MPRV,   KC_MNXT,     KC_LSFT, KC_Z,    KC_X,    KC_C,  KC_V,   KC_B,
        KC_P2,     KC_VOLD,   KC_VOLU,     KC_LCTL, KC_LWIN, KC_LALT, KC_P2, KC_SPC, KC_SPC,

        // right (TODO: Update, currently copy of left)
        KC_F6,  KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_P2,       KC_DEL,

        KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,     KC_PGUP,
        KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,     KC_PGDN,
        KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,      KC_UP,   KC_P2,
        KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,     KC_LEFT, KC_DOWN, KC_RGHT,
        KC_SPC, KC_SPC, KC_P2,   KC_RALT, KC_RWIN, KC_RCTL,     KC_P2,   KC_P2,   KC_P2
    )
};
