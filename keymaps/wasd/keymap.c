// Copyright %(YEAR)s %(YOUR_NAME)s (@%(USER_NAME)s)
// SPDX-License-Identifier: GPL-2.0-or-later

// #include "ohgkb.h"

#include QMK_KEYBOARD_H


// Defines names for use in layer keycodes and the keymap
#define _GAMING_BASE 0
#define _LAYER1 1
#define _F_LAYER 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_GAMING_BASE] = LAYOUT(
            KC_ESC,     KC_TAB,     KC_1,       KC_2,       KC_3,       KC_4,
            KC_GRV,     KC_CAPS,    KC_Q,       KC_W,       KC_E,       KC_R,
            KC_PGUP,    KC_LSFT,    KC_A,       KC_S,       KC_D,       KC_F,
            KC_PGDN,    KC_LCTL,    KC_Z,       KC_X,       KC_C,       KC_V,
                                    KC_1,       KC_2,
                                                            LT(1,KC_LALT),    KC_SPC,
                                                                                    LT(1,KC_HOME),  LT(2,KC_END),
                                                                                    KC_RALT,        KC_RCTL
    ),

    [_LAYER1] = LAYOUT(
            KC_P,       KC_O,       KC_8,       KC_7,       KC_6,       KC_5,
            KC_SCLN,    KC_L,       KC_I,       KC_U,       KC_Y,       KC_T,
            KC_SLSH,    KC_DOT,     KC_K,       KC_J,       KC_H,       KC_G,
            KC_TRNS,    KC_TRNS,    KC_COMM,    KC_M,       KC_N,       KC_B,
                                    KC_LGUI,    KC_TRNS,
                                                            KC_TRNS,    KC_TRNS,
                                                                                    KC_TRNS,    KC_TRNS,
                                                                                    KC_TRNS,    KC_TRNS
    ),
    [_F_LAYER] = LAYOUT(
            KC_TRNS,    KC_TRNS,    KC_F7,      KC_F8,      KC_F9,      KC_TRNS,
            KC_TRNS,    KC_TRNS,    KC_F4,      KC_F5,      KC_F6,      KC_TRNS,
            KC_TRNS,    KC_TRNS,    KC_F1,      KC_F2,      KC_F3,      KC_TRNS,
            KC_TRNS,    KC_TRNS,    KC_F10,     KC_F11,     KC_F12,     KC_TRNS,
                                    KC_TRNS,    KC_TRNS,
                                                            KC_TRNS,    KC_TRNS,
                                                                                    KC_TRNS,    KC_TRNS,
                                                                                    KC_TRNS,    KC_TRNS
    )

};

    // [_LAYER1] = LAYOUT(
    //         KC_TRNS,    KC_TRNS,    KC_P7,      KC_P8,      KC_P9,      KC_5,
    //         KC_TRNS,    KC_TRNS,    KC_P4,      KC_P5,      KC_P6,      KC_T,
    //         KC_TRNS,    KC_TRNS,    KC_P1,      KC_P2,      KC_P3,      KC_G,
    //         KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_B,
    //                                 KC_TRNS,    KC_TRNS,
    //                                                         KC_TRNS,    KC_TRNS,
    //                                                                                 KC_TRNS,    KC_TRNS,
    //                                                                                 KC_TRNS,    KC_TRNS
    // ),



// layer_state_t layer_state_set_kb(layer_state_t state) {
//     if (IS_LAYER_ON_STATE(state, _GAME))
//     {
//         rgblight_setrgb (0xD8, 0x0C, 0xF5);
//     }
//     else if (IS_LAYER_ON_STATE(state, _GAME_MIRRORED))
//     {
//         rgblight_setrgb (0x4B, 0xF2, 0xE2);
//     }
//     else if (IS_LAYER_ON_STATE(state, _FUNCTION))
//     {
//         rgblight_setrgb (0xFF, 0x17, 0x0D);
//     }

//     return state;
// }
