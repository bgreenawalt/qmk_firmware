/* Copyright 2015-2023 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum planck_layers {COLEMAK, QWERTY, DVORAK, GAMING, SYMBOLS, MOUSE, ADMIN};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* COLEMAK
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   F  |   P  |   G  |   J  |   L  |   U  |   Y  |   ;  |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |   A  |   R  |   S  |   T  |   D  |   H  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |   Z  |   X  |   C  |   V  |   B  |   K  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc/~| PgDn | Alt  | GUI  | lSym | S_Bk | S_Sp | lMse | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
 
[COLEMAK] = LAYOUT_planck_grid(
    KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,        KC_G,            KC_J,           KC_L,      KC_U,    KC_Y,    KC_SCLN, KC_BSLS,
    KC_DEL,  KC_A,    KC_R,    KC_S,    KC_T,        KC_D,            KC_H,           KC_N,      KC_E,    KC_I,    KC_O,    KC_QUOT,
    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,        KC_B,            KC_K,           KC_M,      KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
    QK_GESC, KC_PGDN, KC_LALT, KC_LGUI, MO(SYMBOLS), LSFT_T(KC_BSPC), RSFT_T(KC_SPC), MO(MOUSE), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

/* QWERTY
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc/~| PgDn | Alt  | GUI  | lSym | S_Bk | S_Sp | lMse | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */

[QWERTY] = LAYOUT_planck_grid(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,        KC_T,            KC_Y,           KC_U,      KC_I,    KC_O,    KC_P,    KC_BSLS,
    KC_DEL,  KC_A,    KC_S,    KC_D,    KC_F,        KC_G,            KC_H,           KC_J,      KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,        KC_B,            KC_N,           KC_M,      KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
    QK_GESC, KC_PGDN, KC_LALT, KC_LGUI, MO(SYMBOLS), LSFT_T(KC_BSPC), RSFT_T(KC_SPC), MO(MOUSE), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

/* DVORAK
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   '  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |  /   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc/~| PgDn | Alt  | GUI  | lSym | S_Bk | S_Sp | lMse | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */

[DVORAK] = LAYOUT_planck_grid(
    KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,        KC_Y,            KC_F,           KC_G,      KC_C,    KC_R,    KC_L,  KC_BSLS,
    KC_DEL,  KC_A,    KC_O,    KC_E,    KC_U,        KC_I,            KC_D,           KC_H,      KC_T,    KC_N,    KC_S,  KC_SLSH,
    KC_LCTL, KC_SCLN, KC_Q,    KC_J,    KC_K,        KC_X,            KC_B,           KC_M,      KC_W,    KC_V,    KC_Z,  KC_ENT,
    QK_GESC, KC_PGDN, KC_LALT, KC_LGUI, MO(SYMBOLS), LSFT_T(KC_BSPC), RSFT_T(KC_SPC), MO(MOUSE), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT
),

/* GAMING
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shft |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | PgDn | Alt  | GUI  | lSym | Spce | Bksp | lMse | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */

[GAMING] = LAYOUT_planck_grid(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,        KC_T,   KC_Y,    KC_U,      KC_I,    KC_O,    KC_P,    KC_BSLS,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,        KC_G,   KC_H,    KC_J,      KC_K,    KC_L,    KC_TRNS, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,        KC_B,   KC_N,    KC_M,      KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
    KC_LCTL, KC_PGDN, KC_LALT, KC_LGUI, MO(SYMBOLS), KC_SPC, KC_BSPC, MO(MOUSE), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

/* SYMBOLS
 * ,-----------------------------------------------------------------------------------.
 * |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   (  |   {  |   [  |   <  |   \  |   /  |   >  |   ]  |   }  |   )  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |   -  |   =  | Left | Down |  Up  | Rght |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      | lAdm |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */

[SYMBOLS] = LAYOUT_planck_grid(
    KC_TRNS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,      KC_8,    KC_9,    KC_0,    KC_TRNS,
    KC_TRNS, KC_LPRN, KC_LCBR, KC_LBRC, KC_LT,   KC_BSLS, KC_SLSH, KC_GT,     KC_RBRC, KC_RCBR, KC_RPRN, KC_TRNS,
    KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_MINS, KC_EQL,  KC_LEFT,   KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(ADMIN), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

/* MOUSE
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |MsWUp |      |      |      |      | MsUp |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |MsWLf |MsWDn |MsWRt |      |      | MsLf | MsDn | MsRt |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      | lAdm |  Ms1 |  Ms2 |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
 
[MOUSE] = LAYOUT_planck_grid(
    KC_TRNS, KC_NO,   KC_NO,   KC_WH_U, KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_MS_U, KC_NO,   KC_NO,   KC_NO,
    KC_LSFT, KC_NO,   KC_WH_L, KC_WH_D, KC_WH_R,   KC_NO,   KC_NO,   KC_MS_L, KC_MS_D, KC_MS_R, KC_NO,   KC_NO,
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(ADMIN), KC_BTN1, KC_BTN2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

/* ADMIN
 *                      v------------------------RGB CONTROL--------------------v
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|Debug | RGB  |RGBMOD| HUE+ | HUE- | SAT+ | SAT- |BRGTH+|BRGTH-|  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |MUSmod|Aud on|Audoff|AGnorm|AGswap|Colemk|Qwerty|Dvorak|Gaming|      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|Musoff|MIDIon|MIDIof|      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[ADMIN] = LAYOUT_planck_grid(
    KC_TRNS, QK_BOOT, DB_TOGG, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI,     RGB_SAD,    RGB_VAI,    RGB_VAD,    KC_DEL,
    KC_TRNS, EE_CLR,  MU_NEXT, AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, DF(COLEMAK), DF(QWERTY), DF(DVORAK), DF(GAMING), KC_TRNS,
    KC_TRNS, AU_PREV, AU_NEXT, MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
)

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