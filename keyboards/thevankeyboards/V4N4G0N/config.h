#ifndef CONFIG_H
#define CONFIG_H
#include "config_common.h"

#define VENDOR_ID     0xFEAE
#define PRODUCT_ID    0x8847
#define DEVICE_VER    0x0001
#define MANUFACTURER  TheVan Keyboards
#define PRODUCT       V4N4G0N
#define DESCRIPTION   V4N4G0N

#define MATRIX_ROWS 5
#define MATRIX_COLS 12
#define MATRIX_ROW_PINS { F0, F1, F4, F6, F7 }
#define MATRIX_COL_PINS { F5, B0, B1, B2, B3, B7, D2, D3, D5, D4, D6, D7 }




#define DIODE_DIRECTION COL2ROW

#define BACKLIGHT_LEVELS 1
#define BACKLIGHT_PIN B7

#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* for home row mods */
#define TAPPING_TERM 175
// use TAPPING_TERM_PER_KEY if more granular control is needed
#define TAPPING_TERM_PER_KEY

/* will cancel the mod tap and type keycode if hold and release mod tap key without hitting another key*/
// #define RETRO_TAPPING
/* lets user activate hold function when holding dual role key after having tapped it, only for mod tap keys */
#define TAPPING_FORCE_HOLD_PER_KEY
/*requires holding both keys for the tapping_term to trigger the hold function */
#define IGNORE_MOD_TAP_INTERRUPT

#define USB_MAX_POWER_CONSUMPTION 100
#define PERMISSIVE_HOLD
#define IS_COMMAND() ( keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) )
#endif

