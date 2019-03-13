#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _LVL3 3

#define RAISER MO(_LVL3)
#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_6x6(

     LT(_LVL3,KC_ESC) , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_BSPC,
     KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_SLASH,
     KC_CAPS, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_ENT,
     KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT , KC_UP ,KC_RSFT,
     LT(_RAISE,KC_GRAVE),KC_LCTL,LT(_LVL3,KC_BSLASH),LGUI(KC_N),LGUI(KC_V),KC_DEL,                       LT(_RAISE,KC_PLUS),LT(_LOWER,KC_MINS),KC_COMM,KC_LEFT,KC_DOWN,KC_RIGHT,
                      LGUI(KC_W),KC_LALT,                                                       KC_LALT, KC_EQL,
                                      KC_SPC ,KC_LCMD,                        KC_LCMD,KC_ENT,
                                      LGUI(KC_Z),SGUI(KC_V),                        LT(_LOWER,KC_MINS),KC_PGUP,
                                      LGUI(KC_S),LGUI(KC_W),                        LT(_RAISE,KC_PLUS),KC_PGDOWN
  ),

  [_LOWER] = LAYOUT_6x6(

       _______, KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11,
       RESET  ,LGUI(KC_Q),LGUI(KC_W), KC_LCBR, KC_RCBR, _______,                        KC_AT  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_PMNS,
       _______,LGUI(KC_A),KC_PIPE,KC_LBRC,KC_RBRC,_______,                      KC_DLR , KC_4  , KC_5  , KC_6  ,KC_QUOT,KC_DQUO,
       _______,LGUI(KC_Z),_______,KC_SLSH,KC_BSLS,_______,                      KC_PSLS, KC_1  , KC_2  , KC_3  ,KC_QUES,KC_PPLS,
       _______,_______,_______,_______,_______,_______,                        _______,_______,KC_DOT , KC_0  , KC_EQL,_______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,KC_HOME,
                                             _______,_______,            _______,KC_END
  ),

  [_RAISE] = LAYOUT_6x6(

       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,RCTL(RSFT(KC_F)),
       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
       _______,_______,_______,_______,_______,_______,                        RCTL(RGUI(KC_H)),_______,_______,LALT(KC_QUOT),LGUI(RALT(KC_F)),_______,
       _______,_______,_______,_______,_______,_______,                        LALT(LGUI(KC_M)),LGUI(KC_TAB),LALT(RGUI(KC_LEFT)),LALT(RGUI(KC_RGHT)),RGUI(KC_RBRC),_______,
       _______,_______,_______,_______,_______,_______,                        _______,KC_HOME,KC_PGUP,_______,_______,KC_SLEP,

                                               _______,_______,            KC_END ,KC_PGDOWN,
                                               _______,_______,            _______,RCTL(RGUI(KC_A)),
                                               _______,_______,            _______,KC_HOME,
                                               _______,_______,            _______,KC_END
  ),
  
  [_LVL3] = LAYOUT_6x6(

       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
       _______,LGUI(KC_Q),LGUI(KC_W),_______,_______,_______,                        _______,_______, KC_UP ,_______,_______,_______,
       _______,LGUI(KC_A),LGUI(KC_0),LGUI(KC_PPLS),LGUI(KC_PMNS),SGUI(KC_V),                        _______,KC_LEFT,KC_DOWN,KC_RIGHT,_______,_______,
       _______,LGUI(KC_Z),_______,LGUI(KC_C),LGUI(KC_V),_______,                        _______,_______,_______,_______,_______,_______,
       _______,_______,_______,_______,_______,_______,                        KC_VOLU,KC_VOLD,_______,_______,_______,_______,

                                               _______,_______,            KC_EQL ,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______
  ),

};

