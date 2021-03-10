#include "V4N4G0N.h"


// Left-hand home row mods
#define GUI_A LGUI_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define CTL_D LCTL_T(KC_D)
#define SFT_F LSFT_T(KC_F)

// Right-hand home row mods
#define SFT_J RSFT_T(KC_J)
#define CTL_K RCTL_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define GUI_S RGUI_T(KC_SCLN)

// Layer KM Cleanup
#define TAB_1 LT(1, KC_TAB)
#define ENT_2 LT(2, KC_ENT)
#define SPC_1 LT(1, KC_SPC)
#define SPC_2 LT(2, KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [0] = LAYOUT(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_BSPC,
    TAB_1,   GUI_A,   ALT_S,   CTL_D,   SFT_F,   KC_G,    KC_H,    SFT_J,   CTL_K,   ALT_L,   GUI_S, ENT_2,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP, RSFT_T(KC_SLSH),
    KC_LCTL, KC_LGUI, KC_LALT, TT(3),   SPC_2,   SPC_1,   KC_RALT, KC_RGUI, KC_RCTL, TO(3)
  ),
  [1]= LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
    KC_CAPS, KC_BSLS, KC_QUOT, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_TRNS,
    KC_TRNS, KC_ESC,  KC_TRNS, KC_PSCR, KC_TRNS, KC_TRNS, KC_TRNS, KC_MSTP, KC_MPLY, KC_MPRV, KC_MNXT, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(0),   KC_TRNS, KC_TRNS, KC_TRNS, RESET
  ),
  [2] = LAYOUT( 
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TILD, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,
    KC_ESC,  KC_PIPE, KC_DQT,  KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_4,    KC_5,    KC_6,    KC_VOLU, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_0,    KC_1,    KC_2,    KC_3,    KC_VOLD, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [3] = LAYOUT(
    KC_SLEP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11, KC_F12,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F5,   KC_F6,   KC_F7,    KC_F8,  KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_TRNS,KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(0)
  )
};


void process_indicator_update(layer_state_t state, uint8_t usb_led) {
  
  if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
  writePinHigh(B5);
} else {
  writePinLow(B5);
}

  if (state & (1<<3)) {
  writePinHigh(B4);
} else {
  writePinLow(B4);
}

};

void keyboard_post_init_user(void) {
  
  setPinOutput(B6);
  writePinHigh(B6);
  setPinOutput(B5);
  setPinOutput(B4);
  process_indicator_update(layer_state, host_keyboard_leds());
};

void led_set_user(uint8_t usb_led) {
  process_indicator_update(layer_state, host_keyboard_leds());
};

layer_state_t layer_state_set_user(layer_state_t state) {
  process_indicator_update(state, host_keyboard_leds());
  return state;
};
/*from cajal, test later*/
// layer_state_t layer_state_set_user(layer_state_t state) {
//     switch (get_highest_layer(state)) {
//         case 1:
//             writePinHigh(B7);
//             writePinLow(B6);
//             break;
//         case 2:
//             writePinLow(B7);
//             writePinHigh(B6);
//             break;
//         case 3:
//             writePinHigh(B7);
//             writePinHigh(B6);
//             break;
//         default:
//             writePinLow(B7);
//             writePinLow(B6);
//             break;
//     }
//     return state;
// }

// bool led_update_user(led_t led_state) {
//     writePin(B5, led_state.caps_lock);
//     return false;
// }

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
        case ALT_S:
            return TAPPING_TERM + 50;
        case ALT_L:
            return TAPPING_TERM + 50;
        default:
            return TAPPING_TERM;
    }
}
