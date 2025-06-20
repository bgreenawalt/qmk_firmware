// Copyright 2023 Danny Nguyen (danny@keeb.io)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        QK_GESC, KC_1, KC_2, KC_3, KC_4,  KC_5,                                            KC_6,           KC_7,   KC_8,    KC_9,   KC_0,    KC_MINS,
        KC_TAB,  KC_Q, KC_W, KC_F, KC_P,  KC_G,                                            KC_J,           KC_L,   KC_U,    KC_Y,   KC_SCLN, KC_BSLS,
        KC_LSFT, KC_A, KC_R, KC_S, KC_T,  KC_D,                                            KC_H,           KC_N,   KC_E,    KC_I,   KC_O,    KC_QUOT,
        KC_LCTL, KC_Z, KC_X, KC_C, KC_V,  KC_B,           KC_LGUI,         KC_RGUI,        KC_K,           KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_EQL,
                                   MO(4), LALT_T(KC_DEL), LSFT_T(KC_BSPC), RSFT_T(KC_SPC), RALT_T(KC_ENT), MO(5)),
    [1] = LAYOUT(
        QK_GESC, KC_1, KC_2, KC_3, KC_4,  KC_5,                                            KC_6,           KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,  KC_Q, KC_W, KC_E, KC_R,  KC_T,                                            KC_Y,           KC_U,   KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_LSFT, KC_A, KC_S, KC_D, KC_F,  KC_G,                                            KC_H,           KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z, KC_X, KC_C, KC_V,  KC_B,           KC_LGUI,         KC_LALT,        KC_N,           KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_EQL,
                                   MO(4), LALT_T(KC_DEL), LSFT_T(KC_BSPC), RSFT_T(KC_SPC), RALT_T(KC_ENT), MO(5)),
    [2] = LAYOUT(
        QK_GESC, KC_1,    KC_2,    KC_3,   KC_4,  KC_5,                                            KC_6,           KC_7,   KC_8, KC_9, KC_0, KC_MINS,
        KC_TAB,  KC_QUOT, KC_COMM, KC_DOT, KC_P,  KC_Y,                                            KC_F,           KC_G,   KC_C, KC_R, KC_L, KC_BSLS,
        KC_LSFT, KC_A,    KC_O,    KC_E,   KC_U,  KC_I,                                            KC_D,           KC_H,   KC_T, KC_N, KC_S, KC_QUOT,
        KC_LCTL, KC_SCLN, KC_Q,    KC_J,   KC_K,  KC_X,           KC_LGUI,         KC_LALT,        KC_B,           KC_M,   KC_W, KC_V, KC_Z, KC_EQL,
                                           MO(4), LALT_T(KC_DEL), LSFT_T(KC_BSPC), RSFT_T(KC_SPC), RALT_T(KC_ENT), MO(5)),
    [3] = LAYOUT(
        QK_GESC, KC_1, KC_2, KC_3, KC_4,  KC_5,                                             KC_6,           KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,  KC_Q, KC_W, KC_E, KC_R,  KC_T,                                             KC_Y,           KC_U,   KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_LSFT, KC_A, KC_S, KC_D, KC_F,  KC_G,                                             KC_H,           KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z, KC_X, KC_C, KC_V,  KC_B,           KC_LGUI,         KC_LALT,         KC_N,           KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_EQL,
                                   MO(4), LALT_T(KC_DEL), KC_SPC,          RSFT_T(KC_BSPC), RALT_T(KC_ENT), MO(5)),
    [4] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_TRNS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,
        KC_TRNS, KC_LPRN, KC_LCBR, KC_LBRC, KC_LT,   KC_BSLS,                   KC_SLSH, KC_GT,   KC_RBRC, KC_RCBR, KC_RPRN, KC_TRNS,
        QK_BOOT, KC_NO,   KC_NO,   KC_NO,   KC_GRV,   KC_MINS, KC_TRNS, KC_TRNS, KC_EQL,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(6)),
    [5] = LAYOUT(
        KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
        KC_NO,   KC_NO, KC_NO,   KC_WH_U, KC_NO,   KC_NO,                     KC_NO,   KC_NO,   KC_MS_U, KC_NO,   KC_NO, KC_NO,
        KC_TRNS, KC_NO, KC_WH_L, KC_WH_D, KC_WH_R, KC_NO,                     KC_NO,   KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO,
        KC_TRNS, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, QK_BOOT,
                                          MO(6),   KC_BTN1, KC_BTN2, KC_TRNS, KC_TRNS, KC_TRNS),
    [6] = LAYOUT(
        KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                 KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, RGB_TOG, RGB_SPI, RGB_HUI, RGB_SAI, RGB_VAI,               KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, RGB_MOD, RGB_SPD, RGB_HUD, RGB_SAD, RGB_VAD,               KC_NO, DF(0),   DF(1), DF(2), DF(3), KC_NO,
        KC_NO, BL_TOGG, BL_STEP, BL_BRTG, BL_UP,   BL_DOWN, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,
                                          KC_TRNS, KC_NO,   KC_NO, KC_NO, KC_NO, KC_TRNS)
};

// Used to make the Backspace/Shift Toggle Key timing tighter
// Case: Immediately select the hold action when another key is pressed.
// Default: Do not select the hold action when another key is pressed.

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_BSPC):
            return true;
        default:
            return false;
    }
}