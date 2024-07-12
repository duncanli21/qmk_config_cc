// Copyright 2022 mjohns
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Enables This makes it easier for fast typists to use dual-function keys */
#define PERMISSIVE_HOLD

/* mouse config */
#define MOUSEKEY_DELAY          0
// Lowering MOUSEKEY_INTERVAL raises the cursor speed significantly, you may want to lower MOUSEKEY_MAX_SPEED (default: 10)
#define MOUSEKEY_INTERVAL       20
#define MOUSEKEY_MAX_SPEED       7
#define MOUSEKEY_WHEEL_DELAY 0

/* layer config */
#define TAPPING_TOGGLE 1

#define USE_SERIAL

#define MASTER_RIGHT

/* key matrix size */
// Rows are doubled-up
/*#define MATRIX_ROWS 12*/
/*#define MATRIX_COLS 6*/

// wiring of each half
#define MATRIX_COL_PINS_RIGHT { D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS_RIGHT { F6, F7, F5, B3, B2, B6 }

#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6 }

#define DIODE_DIRECTION COL2ROW

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
