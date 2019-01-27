// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _DEFAULT 0
#define _NAV 1
#define _MEDIA 2
#define _RESET 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEFAULT] = LAYOUT( /* qwerty */
    KC_GRV,   KC_1,    KC_2,    KC_3,     KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS ,
    KC_TAB,   KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,                        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC ,
    KC_ESC,   KC_A,    KC_S,    KC_D,     KC_F,    KC_G,                        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT,  KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,                        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RBRC ,
    KC_LCTL,  KC_LGUI, KC_LALT, KC_BSLS,  MO(_NAV),KC_BSPC, KC_ENT,  KC_RSFT,   KC_SPC,  KC_DEL,  KC_RSFT, KC_EQUAL,KC_ENT,  KC_INS
  ),

  [_NAV] = LAYOUT(
    TO(_DEFAULT),  KC_F1,   KC_F2,      KC_F3,   KC_F4,   KC_F5,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11  ,
    KC_TRNS,       KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,                     KC_F12,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,
    KC_TRNS,       KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,                     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, KC_TRNS ,
    KC_TRNS,       KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,
    KC_TRNS,       KC_TRNS, MO(_MEDIA), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_MEDIA] = LAYOUT(
    TO(_DEFAULT),  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_MUTE, KC_MPLY, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,
    KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,
    KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_TRNS, KC_TRNS ,
    KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,
    TO(RESET),     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_RESET] = LAYOUT(
    TO(_DEFAULT),  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                     KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   ,
    KC_NO  ,       KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                     KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   ,
    KC_NO  ,       KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                     KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   ,
    KC_NO  ,       KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                     KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   ,
    KC_NO  ,       KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,  KC_NO  ,  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , RESET
  ),
  

  /*
  [_TRNS] = LAYOUT(
    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,
    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,
    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,
    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ,
    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
  */
};



const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  // MACRODOWN only works in this function
  switch (id) {
  case 0:
    if (record->event.pressed) {
      register_code(KC_RSFT);
    }
    else {
      unregister_code(KC_RSFT);
    }
    break;
  }
  return MACRO_NONE;
};
