// Copyright %(YEAR)s %(YOUR_NAME)s (@%(USER_NAME)s)
// SPDX-License-Identifier: GPL-2.0-or-later

// #include "ohgkb.h"

#include QMK_KEYBOARD_H
#include ohgkb.h


// Defines names for use in layer keycodes and the keymap
#define _GAME 0
#define _GAME_MIRRORED 1
#define _FUNCTION 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_GAME] = LAYOUT(
                                    KC_1,       KC_2,       KC_3,       KC_A,
            KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,
            KC_CAPS,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,
            KC_LSFT,  KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,
            KC_LCTL,   KC_LGUI,    KC_LALT,    OSL(2),
                                    KC_LALT,    KC_SPC,     KC_RSFT,      KC_LCTL,
                                                            KC_RALT,    OSL(1)
    ),
    [_GAME_MIRRORED] = LAYOUT(
                                    KC_8,       KC_7,       KC_6,       KC_5,
            KC_BSPC,  KC_P,       KC_O,       KC_I,       KC_U,       KC_Y,
            KC_ENTER,   KC_SCLN,  KC_L,       KC_K,       KC_J,       KC_H,
            KC_RSFT,  KC_DOT,     KC_COMMA,   KC_M,       KC_N,       KC_B,
            KC_LCTL,   _______,    KC_RALT,    _______,
                                    _______,    _______,     _______,    _______,
                                                            _______,    _______
    ),
    [_FUNCTION] = LAYOUT(
                                    KC_F1,      KC_F2,      KC_F3,      KC_F4,
            KC_ESC,     KC_GRAVE,   KC_F5,      KC_F6,      KC_F7,      KC_F8,
            _______,    _______,    KC_F9,      KC_F10,     KC_F11,     KC_F12,
            _______,    _______,    _______,    _______,    _______,    _______,
            _______,    _______,    KC_LGUI,    _______,
                                    _______,    _______,     _______,    _______,
                                                            _______,    _______
    )
};



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
