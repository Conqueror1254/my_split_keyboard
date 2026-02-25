#ifndef CONFIG_H
#define CONFIG_H






#define MATRIX_ROWS 12
#define MATRIX_COLS 8


#define MATRIX_ROW_PINS { D4,C6, E6,D7, B4,B5 }
#define MATRIX_COL_PINS {B3, B1, F7, F6, F5, F4,NO_PIN, NO_PIN}

// Правая сторона (явно указываем отличия)[[]]
#define MATRIX_ROW_PINS_RIGHT {D4,C6,D7,E6,B4,B5}
#define MATRIX_COL_PINS_RIGHT {B6,B2,B3,B1,F7,F6,F5,F4}\

#define DIODE_DIRECTION COL2ROW

#define SOFT_SERIAL_PIN D1
#define EE_HANDS

#define DEBOUNCE 5

#define IS_COMMAND() ( \
    get_mods() == (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) \
)



#define MASTER_LEFT


#endif