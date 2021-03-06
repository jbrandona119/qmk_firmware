/* Copyright 2018 Holten Campbell
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

// Layer 0 KM Cleanup
#define TAB_1 LT(1, KC_TAB)
#define ENT_2 LT(2, KC_ENT)
#define SPC_1 LT(1, KC_SPC)
#define SPC_2 LT(2, KC_SPC)



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT(
		KC_ESC,    KC_Q,      KC_W,      KC_E,      KC_R,       KC_T,             KC_Y,      KC_U,       KC_I,    KC_O,       KC_P,       KC_DEL,  KC_BSPC,
		TAB_1,     GUI_A,     ALT_S,     CTL_D,     SFT_F,      KC_G,             KC_H,      SFT_J,      CTL_K,   ALT_L,      GUI_SCLN,   ENT_2,
		KC_LSFT,   KC_Z,      KC_X,      KC_C,      KC_V,       KC_B,             KC_B,      KC_N,       KC_M,    KC_COMM,    KC_DOT,     KC_SLSH, KC_LSFT,
		KC_LCTL,   KC_LALT,                         MO(2),      SPC_2,	          SPC_1,     KC_RALT,                                     KC_RGUI, KC_RCTL
    ),

    LAYOUT(
		KC_GRV,    KC_EXLM,   KC_AT,     KC_HASH,   KC_DLR,     KC_PERC,          KC_CIRC,   KC_AMPR,    KC_ASTR,   KC_LPRN,   KC_RPRN,   KC_TRNS, KC_TRNS,
		KC_CAPS,   KC_BSLS,   KC_QUOT,   KC_MINS,   KC_EQL,     KC_LBRC,          KC_RBRC,   KC_LEFT,    KC_DOWN,   KC_UP,     KC_RGHT,   KC_TRNS,
		KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS,
		KC_TRNS,   KC_TRNS,                         KC_TRNS,    KC_TRNS,	        KC_TRNS,   KC_TRNS,                                     TO(3),   KC_TRNS
    ),

    LAYOUT(
		KC_TRNS,  KC_1,      KC_2,      KC_3,      KC_4,       KC_5,             KC_6,      KC_7,     KC_8,    KC_9,    KC_0,      KC_MINS,  KC_EQL,
		KC_ESC,   KC_PIPE,   KC_DQUO,   KC_UNDS,   KC_PLUS,    KC_LCBR,          KC_RCBR,   KC_P4,    KC_P5,   KC_P6,   KC_TRNS,   KC_TRNS,
		KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_P0,    KC_P1,   KC_P2,   KC_P3,     KC_TRNS,  KC_TRNS,
		KC_TRNS,  KC_TRNS,                         KC_TRNS,    KC_TRNS,	         KC_PENT,   KC_PDOT,                               KC_TRNS,  KC_TRNS
    ),

    LAYOUT(
		KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,  KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_TRNS,
		KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_F5,    KC_F6,   KC_F7,   KC_F8,   KC_TRNS,
		KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_F1,     KC_F2,    KC_F3,   KC_F4,   KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS,  KC_TRNS,                         KC_TRNS,    KC_TRNS,	         KC_TRNS,   KC_TRNS,                             TO(0),  TO(4)
    ),

    LAYOUT(
		KC_SLEP,   RGB_M_G,   RGB_M_P,   RGB_M_B,   KC_NO,      KC_NO,            KC_NO,     KC_NO,      KC_NO,     KC_NO,     KC_NO,     KC_NO,   KC_NO,
		KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,      KC_NO,            KC_NO,     RGB_HUI,    RGB_SAI,   RGB_VAI,   KC_NO,     KC_NO,
		KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,      KC_NO,            RGB_HUD,   RGB_SAD,    RGB_VAD,   KC_NO,     KC_NO,     RGB_MOD, KC_TRNS,
		KC_TRNS,   KC_TRNS,                         KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,                                     KC_TRNS, KC_TRNS
    ),

    LAYOUT(
		KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
		KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
		KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
		KC_TRNS,   KC_TRNS,                         KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,                                     KC_TRNS,   KC_TRNS
    ),

    LAYOUT(
		KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
		KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
		KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
		KC_TRNS,   KC_TRNS,                         KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,                                     KC_TRNS,   KC_TRNS
    ),

    LAYOUT(
    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
    KC_TRNS,   KC_TRNS,                         KC_TRNS,    KC_TRNS,          KC_TRNS,   KC_TRNS,                                     KC_TRNS,   KC_TRNS
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


void matrix_init_user(void) {
  // set CapsLock LED to output and low
  setPinOutput(B1);
  writePinLow(B1);
  // set NumLock LED to output and low
  setPinOutput(B2);
  writePinLow(B2);
  // set ScrollLock LED to output and low
  setPinOutput(B3);
  writePinLow(B3);
}   

void matrix_scan_user(void) {

}


void led_set_user(uint8_t usb_led) {
  if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
    writePinHigh(B1);
  } else {
    writePinLow(B1);
  }
/*
  if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {
    writePinHigh(B3);
  } else {
    writePinLow(B3);
  }*/

}

//function for layer indicator LED
uint32_t layer_state_set_user(uint32_t state)
{
    if (biton32(state) == 1) {
    writePinHigh(B3);
	} else {
		writePinLow(B3);
    }
    if (biton32(state) == 2) {
    writePinHigh(B2);
  } else {
    writePinLow(B2);
    }
    return state;
}
