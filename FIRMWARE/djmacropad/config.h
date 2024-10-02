#pragma once

#define MATRIX_ROWS  1
#define MATRIX_COLS  9

#define DIRECT_PINS { {B1, D7, E6, B4, F7, F5, D0, D4, C6}} 

#define TAP_CODE_DELAY  10
/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
#define ENCODERS_PAD_A { B3 }
#define ENCODERS_PAD_B { B2 }
#define ENCODER_RESOLUTIONS       { 4 }
/* disable these deprecated features by default */

/* ws2812 RGB LED */
#define WS2812_DI_PIN F6 //D3 - underglow C7 - backlight
#define RGB_MATRIX_LED_COUNT  7    // Number of L
