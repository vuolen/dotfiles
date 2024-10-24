#include QMK_KEYBOARD_H
#include "keymap_finnish.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    FI_ARNG,
        KC_NO,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    FI_ODIA, FI_ADIA,
        KC_NO,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    FI_COMM, FI_DOT,  KC_NO,   KC_NO,
                                                    MO(1), KC_SPC, MO(2),          MO(2), KC_BSPC, MO(1) 
    ),
    [1] = LAYOUT_split_3x6_3(
        KC_NO,   KC_NO,   FI_7,    FI_8,    FI_9,    KC_NO,                               KC_NO,    KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,
        KC_NO,   KC_NO,   FI_4,    FI_5,    FI_6,    KC_NO,                               KC_NO,    KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_NO,
        KC_NO,   KC_NO,   FI_1,    FI_2,    FI_3,    KC_NO,                               KC_NO,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_NO,
                                                    KC_TRNS, KC_NO, KC_NO,         KC_NO, KC_NO, KC_TRNS
    ),
    [2] = LAYOUT_split_3x6_3(
        KC_NO,   KC_NO,   FI_LABK, FI_LBRC, FI_RBRC, FI_RABK,                             FI_GRV,  FI_HASH,  FI_AMPR,  FI_PLUS,    FI_AT,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   FI_LPRN, FI_RPRN, FI_EQL,                              FI_COLN, FI_DQUO,  FI_PERC,  FI_ASTR,    KC_NO,   KC_NO,
        KC_NO,   KC_NO,   FI_BSLS, FI_LCBR, FI_RCBR, FI_SLSH,                             FI_SCLN, FI_EXLM,  FI_PIPE,  FI_UNDS,    KC_NO,   KC_NO,
                                                    KC_NO, KC_NO, KC_TRNS,         KC_TRNS, KC_NO, KC_NO 
    )
};

