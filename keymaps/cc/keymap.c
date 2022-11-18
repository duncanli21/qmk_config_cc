#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

#define ONE_GRV LT(1,KC_GRAVE)
#define CTL_Z LCTL_T(KC_Z)
#define ALT_SHFT LALT(KC_LSFT)
#define ALT_MENU LALT_T(KC_MENU)
#define LG_QUOT LGUI_T(KC_QUOT)
#define CTL_ESC LCTL_T(KC_ESC)
#define CTL_SLS LCTL_T(KC_SLSH)
#define CPC LCTL(KC_C)
#define PASTE LCTL(KC_V)
#define LT2_COL LT(_RAISE, KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_6x6(
        KC_EQL , KC_1  ,KC_2   , KC_3  , KC_4  , KC_5  ,                                        KC_6   , KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINS,
        KC_TAB , KC_Q  ,KC_W   , KC_F  , KC_P  , KC_G  ,                                        KC_J   , KC_L  , KC_U  , KC_Y  , KC_SCLN,  KC_BSLS,
        KC_ESC, KC_A  ,KC_R   , KC_S  , KC_T  , KC_D  ,                                        KC_H   , KC_N  , KC_E  , KC_I  ,KC_O,LG_QUOT,
        KC_LCTL, KC_Z ,KC_X   , KC_C  , KC_V  , KC_B  ,                                        KC_K   , KC_M  ,KC_COMM, KC_DOT,KC_SLSH,KC_RSFT,
        KC_NO,KC_GRV,TT(LOWER),KC_LEFT,KC_RIGHT,KC_NO ,                                       KC_NO , KC_DOWN  ,KC_UP,KC_LBRC,KC_RBRC,KC_NO,
                                                KC_DEL,CPC,        PASTE, KC_INS ,
                                                         KC_LALT,        KC_RALT,
                                        KC_BSPC, KC_LSFT, KC_LGUI,        KC_RGUI, KC_ENT, KC_SPC
    ),
    [_LOWER] = LAYOUT_6x6(
        _______,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,                                       KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,
        _______,KC_EXLM,KC_AT  ,KC_LBRC,KC_RBRC,KC_PIPE,                                       KC_UP  ,KC_7  ,KC_8  ,KC_9  ,KC_ASTR,KC_F12 ,
        _______,KC_KB_MUTE,KC_KB_VOLUME_DOWN ,KC_KB_VOLUME_UP,KC_RPRN,KC_GRV ,                                       KC_DOWN,KC_4  ,KC_5  ,KC_6  ,KC_PLUS,_______,
        _______,KC_PERC,KC_CIRC,KC_LBRC,KC_RBRC,KC_TILD,                                       KC_AMPR,KC_1  ,KC_2  ,KC_3  ,KC_SLSH,_______,
        QK_BOOT  ,QK_BOOT,_______,_______,_______,_______,                                       _______,_______,KC_DOT,KC_0  ,KC_EQL,_______,
                                                          _______,_______,       _______,_______,
                                                                  _______,       _______,
                                                  _______,_______,_______,       _______, _______,_______
    )
    // [_RAISE] = LAYOUT_6x6(
    //     _______,_______,_______,_______,_______,_______,                                       _______,_______,_______,_______,_______,_______,
    //     _______,_______,_______,KC_MS_U,_______,_______,                                       _______,_______,_______,_______,_______,_______,
    //     _______,_______,KC_MS_L,KC_MS_D,KC_MS_R,_______,
    //     _______,_______,_______,_______,_______,_______,                                       _______,_______,KC_MPRV,KC_MNXT,_______,_______,
    //     QK_BOOT  ,_______,_______,KC_BTN1,KC_BTN2,_______,                                       KC_WBAK,KC_VOLU,KC_VOLD,KC_MUTE,_______,_______,
    //                                                       _______,_______,       _______,_______,
    //                                                               _______,       _______,
    //                                               _______,_______,_______,       _______, _______,_______
    // )
};
