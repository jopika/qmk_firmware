#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#define _BS_ 0
#define _L1_ 1
#define _L2_ 2
#define _L3_ 3

#define ______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // [_BS_] = LAYOUT( /* Qwerty */
  //   KC_TAB        , KC_Q   , KC_W   , KC_E , KC_R   , KC_T      , KC_Y  , KC_U , KC_I      , KC_O     , KC_P   , KC_BS_PC,
  //   LT(_L1_,KC_ESC), KC_A   , KC_S   , KC_D , KC_F   , KC_G      , KC_H  , KC_J , KC_K      , KC_L     , KC_SCLN, LT(_L1_,KC_QUOTE),
  //   KC_LSFT       , KC_Z   , KC_X   , KC_C , KC_V   , KC_B      , KC_N  , KC_M , KC_COMM   , KC_DOT   , KC_SLSH, MO(_L2_),
  //   KC_LCTL       , KC_LGUI, KC_LALT, /*   ,*/    /*,*/   KC_SPC, KC_ENT, /*   ,*/           MO(_L2_)  , KC_ESC , TG(_L3)
  // ),

  [_BS_] = LAYOUT_arrow(
  KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_BSPC,
  LT(_L1_,KC_ESC),KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_SCLN,LT(_L1_,KC_QUOTE),
  KC_LSFT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,MO(_L2_),
  KC_LCTL,KC_LGUI,KC_LALT,KC_SPC,KC_ENT,MO(_L2_),KC_ESC,MO(_L1_),MO(_L3_)
  ),
  [_L1_] = LAYOUT_arrow(
  KC_GRAVE,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_DEL,
  KC_TRNS,KC_BRID,KC_BRIU,KC_MPLY,KC_TRNS,KC_TRNS,KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT,KC_TRNS,KC_BSLASH,
  KC_LSFT,KC_MUTE,KC_VOLD,KC_VOLU,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,MO(_L2_),
  KC_LCTL,KC_LGUI,KC_LALT,KC_SPC,KC_ENT,MO(_L2_),KC_ESC,MO(_L1_),MO(_L3_)
  ),
  [_L2_] = LAYOUT_arrow(
  KC_GRAVE,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_LBRACKET,KC_RBRACKET,KC_TRNS,
  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_MINUS,KC_EQUAL,KC_BSLASH,
  KC_LSFT,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,MO(_L2_),
  KC_LCTL,KC_LGUI,KC_LALT,KC_SPC,KC_ENT,MO(_L2_),KC_ESC,MO(_L1_),MO(_L3_)
  ),
  [_L3_] = LAYOUT_arrow(
  KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,
  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
  KC_LSFT,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,MO(_L2_),
  KC_LCTL,KC_LGUI,KC_LALT,KC_SPC,KC_ENT,MO(_L2_),KC_ESC,MO(_L1_),MO(_L3_)
  )

};

