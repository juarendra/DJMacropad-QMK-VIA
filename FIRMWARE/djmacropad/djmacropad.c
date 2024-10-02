#include "djmacropad.h"

void matrix_init_kb(void) {
    // disable pro micro LEDs
    DDRD &= ~(1<<5);
    PORTD &= ~(1<<5);

    DDRB &= ~(1<<0);
    PORTB &= ~(1<<0);

    matrix_init_user();
}

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
   { NO_LED, 2, 1, 0, NO_LED, 6, 5, 4, 3},
}, 
{
    {0,0}, {25,0}, {50,0}, {75,0}, {100,0}, {125,0}, {150,0}
}, 
{
    4, 4, 4, 4, 4, 4, 4
}
};
#endif