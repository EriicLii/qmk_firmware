#pragma once

#include "config_common.h"

/* USB device descriptor */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    EriicLii
#define PRODUCT         6K Macropad

/* Board matrix dimensions */
#define MATRIX_ROWS 2
#define MATRIX_COLS 3

/* Pin maps */
#define MATRIX_ROW_PINS { F0, F1 }
#define MATRIX_COL_PINS { F4, F5, F6 }

#define DIODE_DIRECTION COL2ROW
