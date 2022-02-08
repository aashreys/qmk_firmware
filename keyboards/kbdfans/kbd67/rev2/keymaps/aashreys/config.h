/* Copyright 2018 MechMerlin
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

#pragma once

// place overrides here
#undef USB_POLLING_INTERVAL_MS
#define USB_POLLING_INTERVAL_MS 10

#undef RGBLIGHT_DEFAULT_MODE
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_BREATHING

#undef RGBLIGHT_DEFAULT_SPD
#define RGBLIGHT_DEFAULT_SPD 0

#undef RGBLIGHT_DEFAULT_HUE
#define RGBLIGHT_DEFAULT_HUE 190

#undef RGBLIGHT_DEFAULT_SAT
#define RGBLIGHT_DEFAULT_SAT 100

#undef RGBLIGHT_TIMEOUT
#define RGBLIGHT_TIMEOUT 15000

#undef RGBLIGHT_SLEEP
#define RGBLIGHT_SLEEP

#undef FORCE_NKRO
#define FORCE_NKRO

#undef USB_SUSPEND_WAKEUP_DELAY
#define USB_SUSPEND_WAKEUP_DELAY 500

#undef DEBOUNCE
#define DEBOUNCE 4