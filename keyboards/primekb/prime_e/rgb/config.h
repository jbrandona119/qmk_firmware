/*
Copyright 2019 Holten Campbell

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

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define PRODUCT_ID      0x0052
#define DEVICE_VER      0x0001
#define PRODUCT         Prime_E RGB

#define RGB_DI_PIN B7
#define RGBLED_NUM 8
#define RGBLIGHT_ANIMATIONS

/* for home row mods */
#define TAPPING_TERM 180
// use TAPPING_TERM_PER_KEY if more granular control is needed

/* will cancel the mod tap and type keycode if hold and release mod tap key without hitting another key*/
// #define RETRO_TAPPING
/* lets user activate hold functiona when holding dual role key after having tapped it, only for mod tap keys */
#define TAPPING_FORCE_HOLD_PER_KEY
/*requires holding both keys for the tapping_term to trigger the hold function */
#define IGNORE_MOD_TAP_INTERRUPT