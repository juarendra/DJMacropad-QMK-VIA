#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _FN1,
    _FN2,
    _FN3
};

#define LAYOUT_via( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08  \
) \
{ \
    { k00, k01, k02, k03 , k04, k05, k06, k07 , k08} \
}



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_via(
    KC_P1, KC_P2, KC_P3, KC_P4, KC_P5, KC_P6, KC_P7, KC_P8, KC_P9
),

[_FN1] = LAYOUT_via(
    KC_P1, KC_P2, KC_P3, KC_P4, KC_P5, KC_P6, KC_P7, KC_P8, KC_P9
),

[_FN2] = LAYOUT_via(
    KC_P1, KC_P2, KC_P3, KC_P4, KC_P5, KC_P6, KC_P7, KC_P8, KC_P9
),

[_FN3] = LAYOUT_via(
    KC_P1, KC_P2, KC_P3, KC_P4, KC_P5, KC_P6, KC_P7, KC_P8, KC_P9
)
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD)},
    [_FN1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
    [_FN2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS)},
    [_FN3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }
};
#endif
