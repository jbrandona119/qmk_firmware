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
#define SPACE LT(4, KC_SPC)

// Left-hand home row mods
#define GUI_A LGUI_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define CTL_D LCTL_T(KC_D)
#define SFT_F LSFT_T(KC_F)

// Right-hand home row mods
#define SFT_J RSFT_T(KC_J)
#define CTL_K RCTL_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define GUI_SC RGUI_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_jetvan( /* Qwerty */
    KC_GESC, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    TAB_KEY, GUI_A,   ALT_S,   CTL_D,   SFT_F,   KC_G,    KC_H,    SFT_J,   CTL_K,   ALT_L,   GUI_SC,  ENT_KEY,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTL, KC_LGUI, KC_TRNS,                            SPACE,                     KC_RSFT, KC_RALT, TG(3)
  ),
  [1] = LAYOUT_jetvan( /* some symbols  */
    KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
    KC_CAPS, KC_BSLS, KC_QUOT, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_TRNS,
    KC_TRNS, KC_ESC,  KC_TRNS, KC_PSCR, KC_TRNS, KC_TRNS, KC_TRNS, KC_MSTP, KC_MPLY, KC_MPRV, KC_MNXT, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [2] = LAYOUT_jetvan( /* some shifted symbols and numpad BOYYYYYYYY tf u doin with that volume up lmfao turn down for what am i right fellow kids?? */
    KC_TILD, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,
    KC_ESC,  KC_PIPE, KC_DQT,  KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_P4,   KC_P5,   KC_P6,   KC_VOLU, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PDOT, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                   KC_TRNS, KC_TRNS, RESET
  ),
  [3] = LAYOUT_jetvan( /* FUNCTION LAYER AND FUNCTION PAD 3 dont even use these but idc dont judge */
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11, KC_F12,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F5,   KC_F6,   KC_F7,    KC_F8,  KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_TRNS,KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                   KC_TRNS,  KC_TRNS,KC_TRNS
  ),
  [4] = LAYOUT_jetvan( /* big space bar layer so I can transition off split. left half is layer 1, right half is layer 2. pretty nifty, eh? */
    KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_7,    KC_8,    KC_9,    KC_0,   KC_TRNS,
    KC_CAPS, KC_BSLS, KC_QUOT, KC_MINS, KC_EQL,  KC_LCBR, KC_RCBR, KC_P4,   KC_P5,   KC_P6,   KC_TRNS,KC_TRNS,
    KC_TRNS, KC_ESC,  KC_TRNS, KC_PSCR, KC_TRNS, KC_TRNS, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PDOT,KC_TRNS,
    OSL(5),  KC_TRNS, KC_TRNS,                            KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [5] = LAYOUT_jetvan( /* RESET Layer*/
    RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                   KC_TRNS, KC_TRNS, KC_SLEP
    )
};

//Straight from jetpacktuxedo's keymap but using the ketch config file so I can have my home row mod stuff 
const rgblight_segment_t PROGMEM layer1[] = RGBLIGHT_LAYER_SEGMENTS(
    {9, 1, HSV_RED}
);

const rgblight_segment_t PROGMEM layer2[] = RGBLIGHT_LAYER_SEGMENTS(
    {9, 1, HSV_GREEN}
);

const rgblight_segment_t PROGMEM layer3[] = RGBLIGHT_LAYER_SEGMENTS(
    {8, 1, HSV_CYAN}
);

const rgblight_segment_t PROGMEM layer4[] = RGBLIGHT_LAYER_SEGMENTS(
    {8, 1, HSV_MAGENTA}
);

const rgblight_segment_t PROGMEM layer5[] = RGBLIGHT_LAYER_SEGMENTS(
    {8, 1, HSV_YELLOW}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    layer1,
    layer2,
    layer3,
    layer4,
    layer5
);

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, 1));
    rgblight_set_layer_state(1, layer_state_cmp(state, 2));
    rgblight_set_layer_state(2, layer_state_cmp(state, 3));
    rgblight_set_layer_state(3, layer_state_cmp(state, 4));
    rgblight_set_layer_state(4, layer_state_cmp(state, 5));
    return state;
}

void keyboard_post_init_user(void) {
    #ifdef RGBLIGHT_ENABLE
		// just stolen from jpt but that is ok i think cuz I will tweak it eventually when I dont break
		// it cuz i want to make it flip shit when i turn on caps lock or something idk but thanks jpt ur good my dude
        rgblight_sethsv_noeeprom(0, 192, 128);
        // Set LED effects to rainbow
        rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_SWIRL);
        rgblight_layers = my_rgb_layers;
    #endif //RGBLIGHT_ENABLE
}

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
            return TAPPING_TERM - 40;
        case SFT_J:
            return TAPPING_TERM - 40;
        case GUI_A:
            return TAPPING_TERM + 75;
        case GUI_SC:
            return TAPPING_TERM + 75;
        case ALT_L:
            return TAPPING_TERM + 75;
        case ALT_S:
            return TAPPING_TERM + 75;
        default:
            return TAPPING_TERM;
    }
}