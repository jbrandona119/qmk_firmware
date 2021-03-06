/* 
Copyright 2021 Evan Sailer, Jetpacktuxedo, & QMK Firmware

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to
deal in the Software without restriction, including without limitation the
rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include QMK_KEYBOARD_H


// Layer 0 clean keymap codes
#define TAB_KEY LT(1, KC_TAB)
#define ENT_KEY LT(2, KC_ENT)

// Left-hand home row mods
#define GUI_A LGUI_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define CTL_D LCTL_T(KC_D)
#define SFT_F LSFT_T(KC_F)

// Right-hand home row mods
#define SFT_J RSFT_T(KC_J)
#define CTL_K RCTL_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define GUI_SCLN RGUI_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_all( /* Qwerty */
    KC_GESC, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    TAB_KEY, GUI_A,   ALT_S,   CTL_D,   SFT_F,   KC_G,    KC_H,    SFT_J,   CTL_K,   ALT_L,   GUI_SCLN,ENT_KEY
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTL, MO(2),   KC_LGUI, KC_NO,   KC_NO,   KC_SPC,  KC_NO,   KC_NO,   KC_NO,   KC_RSFT, KC_RALT, TG(3)
  ),
  [1] = LAYOUT_all( /* Number+Symbol Layer */
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
    KC_TRNS, KC_MINS, KC_EQL,  KC_SCLN, KC_QUOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_EQL,  KC_QUOT, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_PGUP, KC_BSLS,
    KC_LCTL, MO(2),   KC_LGUI, KC_NO,   KC_NO,   KC_SPC,  KC_NO,   KC_NO,   KC_NO,   KC_RSFT, KC_RALT, RESET
  ),
  [2] = LAYOUT_all( /* Shifted Layer */
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
    KC_TRNS, KC_UNDS, KC_PLUS, KC_COLN, KC_DQUO, KC_TRNS, KC_TRNS, KC_TRNS, KC_UNDS, KC_PLUS, KC_DQUO, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR, KC_PGUP, KC_PIPE,
    KC_LCTL, MO(2),   KC_LGUI, KC_NO,   KC_NO,   KC_SPC,  KC_NO,   KC_NO,   KC_NO,   KC_RSFT, KC_RALT, TG(3)
  )
};

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LGUI_T(KC_A):
            return true;

        case LALT_T(KC_S):
            return true;

        case LSFT_T(KC_D):
            return true;

        case LCTL_T(KC_F):
            return true;

        case RCTL_T(KC_J):
            return true;

        case RSFT_T(KC_K):
            return true;

        case RALT_T(KC_L):
            return true;
            
        case RGUI_T(KC_SCLN):
            return true;
        default:
          return false;
    }
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SFT_F:
            return TAPPING_TERM - 50;
        case SFT_J:
            return TAPPING_TERM - 50;
        case LALT_T(KC_S):
            return TAPPING_TERM + 50;
        case RALT_T(KC_L):
            return TAPPING_TERM + 50;
        default:
            return TAPPING_TERM;
    }
}