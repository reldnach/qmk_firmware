#define MASTER_LEFT // USB always connected to left half, used to determine handedness
#define USE_I2C

#define MATRIX_ROWS 12
#define MATRIX_COLS 9

// Left side
#define MATRIX_ROW_PINS { F4, F5, F6, F7, B1, B3 }
#define MATRIX_COL_MUX_PINS { D2, D4, C6, D7, E6, B4, B5, B6, B2 }

//Right side
#define MATRIX_ROW_PINS_RIGHT { F4, F5, F6, F7, B1, B3 }
#define MATRIX_COL_MUX_PINS_RIGHT { D2, D4, C6, D7, E6, B4, B5, B6, B2 }
