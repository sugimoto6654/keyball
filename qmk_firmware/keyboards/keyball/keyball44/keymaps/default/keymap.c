/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "quantum.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // keymap for default
  [0] = LAYOUT_universal(
    // ---------------+-----+--------+--------+---------------+-------+                             +--------------+-----+--------+--------+---------------+----------
        LT(4, KC_ESC) , KC_Q, KC_W   , KC_E   , KC_R          , KC_T  ,                              KC_Y          , KC_U, KC_I   , KC_O   , KC_P          , KC_MINS,
    // ---------------+-----+--------+--------+---------------+-------+                             +--------------+-----+--------+--------+---------------+----------
        KC_TAB        , KC_A, KC_S   , KC_D   , KC_F          , KC_G  ,                              KC_H          , KC_J, KC_K   , KC_L   , LT(3, KC_SCLN), KC_QUOT,
    // ---------------+-----+--------+--------+---------------+-------+                             +--------------+-----+--------+--------+---------------+----------
        KC_LSFT       , KC_Z, KC_X   , KC_C   , KC_V          , KC_B  ,                              KC_N          , KC_M, KC_COMM, KC_DOT , KC_SLSH       , KC_BSLS,
    // ---------------+-----+--------+--------+---------------+-------+-----------------     -------+--------------+-----+--------+--------+---------------+----------
                              KC_LALT, KC_LGUI, LT(2, KC_LNG2), KC_SPC, LCTL_T(KC_LNG1),     KC_BSPC, LT(1, KC_ENT),       XXXXXXX, XXXXXXX, KC_PSCR
    //                       --------+--------+---------------+------ +-----------------     -------+--------------+     +--------+--------+----------------
  ),

  [1] = LAYOUT_universal(
    // --------+------+-------+--------+--------+--------+                     +--------+--------+--------+--------+--------+----------
        _______, KC_F1, KC_F2 , KC_F3  , KC_F4  , XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // --------+------+-------+--------+--------+--------+                     +--------+--------+--------+--------+--------+----------
        _______, KC_F5, KC_F6 , KC_F7  , KC_F8  , XXXXXXX,                       KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_BTN3, XXXXXXX,
    // --------+------+-------+--------+--------+--------+                     +--------+--------+--------+--------+--------+----------
        _______, KC_F9, KC_F10, KC_F11 , KC_F12 , XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // --------+------+-------+--------+--------+--------+---------     -------+--------+--------+--------+--------+--------+----------
                       _______, _______, _______, _______, _______,     _______, _______,          XXXXXXX, XXXXXXX, _______
    //                --------+--------+--------+--------+---------     -------+--------+        +--------+--------+---------
  ),

  [2] = LAYOUT_universal(
    // --------+--------+--------+--------+--------+--------+                     +--------+--------+--------+--------+--------+----------
        KC_GRV , S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),                       S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), KC_EQL ,
    // --------+--------+--------+--------+--------+--------+                     +--------+--------+--------+--------+--------+----------
        _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                       KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , XXXXXXX,
    // --------+--------+--------+--------+--------+--------+                     +--------+--------+--------+--------+--------+----------
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, XXXXXXX,
    // --------+--------+--------+--------+--------+--------+---------     -------+--------+--------+--------+--------+--------+----------
                          _______, _______, _______, _______, _______,     _______, _______,          XXXXXXX, XXXXXXX, _______
    //                  ---------+--------+--------+--------+---------     -------+--------+        +--------+--------+---------
  ),

  [3] = LAYOUT_universal(
    // --------+--------+--------+--------+--------+--------+                     +--------+--------+--------+--------+--------+----------
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // --------+--------+--------+--------+--------+--------+                     +--------+--------+--------+--------+--------+----------
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // --------+--------+--------+--------+--------+--------+                     +--------+--------+--------+--------+--------+----------
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    // --------+--------+--------+--------+--------+--------+---------     -------+--------+--------+--------+--------+--------+----------
                          _______, _______, _______, _______, _______,     _______, _______,          XXXXXXX, XXXXXXX, _______
    //                   --------+--------+--------+--------+---------     -------+--------+        +--------+--------+---------
  ),

  [4] = LAYOUT_universal(
    // ---------+--------+---------+---------+--------+--------+                     +---------+--------+--------+--------+---------+-----------
        XXXXXXX , CPI_D1K, CPI_D100, CPI_I100, CPI_I1K, XXXXXXX,                       RGB_HUD , RGB_HUI, RGB_SAD, RGB_SAI, RGB_VAD , RGB_VAI ,
    // ---------+--------+---------+---------+--------+--------+                     +---------+--------+--------+--------+---------+-----------
        KBC_RST , SCRL_TO, SCRL_DVD, SCRL_DVI, XXXXXXX, XXXXXXX,                       RGB_MOD , RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN,
    // ---------+--------+---------+---------+--------+--------+                     +---------+--------+--------+--------+---------+-----------
        KBC_SAVE, AML_TO , AML_D50 , AML_I50 , XXXXXXX, QK_BOOT,                       RGB_RMOD, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T , XXXXXXX ,
    // ---------+--------+---------+---------+--------+--------+---------     -------+---------+--------+--------+--------+---------+-----------
                            _______, _______ , _______, _______, _______,     _______, _______ ,         XXXXXXX, XXXXXXX, RGB_TOG
    //                   +---------+---------+--------+--------+---------     -------+---------+        +--------+--------+----------
  ),
};

// clang-format on
layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 3
    keyball_set_scroll_mode(get_highest_layer(state) == 3);
    return state;
}

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif

const uint16_t PROGMEM mouse_click1[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM mouse_click2[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM mouse_click4[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM mouse_click5[] = {KC_COMM, KC_DOT, COMBO_END};
combo_t key_combos[] = {
    COMBO(mouse_click1, KC_BTN1),
    COMBO(mouse_click2, KC_BTN2),
    COMBO(mouse_click4, KC_BTN4),
    COMBO(mouse_click5, KC_BTN5),
};
