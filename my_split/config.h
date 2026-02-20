#pragma once

#include "config_common.h"


#ifndef VENDOR_ID
  #define VENDOR_ID       0xFEED
#endif

#ifndef PRODUCT_ID
  #define PRODUCT_ID      0x6060
#endif

#ifndef DEVICE_VER
  #define DEVICE_VER      0x0001
#endif

#ifndef MANUFACTURER
  #define MANUFACTURER    "YourName"
#endif

#ifndef PRODUCT
  #define PRODUCT         "my_split"
#endif


#define MCU         atmega32u4
#define F_CPU       16000000UL


#define MATRIX_ROWS 12
#define MATRIX_COLS 8


#define MATRIX_ROW_PINS { D0, D1, D4, C6, D7, E6 }


#ifdef MASTER_LEFT
  #define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B2 }
#else
  #define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B2, B3, B6 }
#endif


#define DIODE_DIRECTION COL2ROW


#define SPLIT_TRANSPORT I2C
#define I2C_SDA_PIN D2
#define I2C_SCL_PIN D3


#define USB_SUSPEND_WAKEUP_DELAY 0


#undef CONSOLE_ENABLE
#undef MATRIX_DEBUG