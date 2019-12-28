#include QMK_KEYBOARD_H

// #define HSV_WHITE       0,   0,   255
// #define HSV_RED         0,   255, 255
// #define HSV_CORAL       11,  176, 255
// #define HSV_ORANGE      28,  255, 255
// #define HSV_GOLDENROD   30,  218, 218
// #define HSV_GOLD        36,  255, 255
// #define HSV_YELLOW      43,  255, 255
// #define HSV_CHARTREUSE  64,  255, 255
// #define HSV_GREEN       85,  255, 255
// #define HSV_SPRINGGREEN 106, 255, 255
// #define HSV_TURQUOISE   123, 90,  112
// #define HSV_TEAL        128, 255, 128
// #define HSV_CYAN        128, 255, 255
// #define HSV_AZURE       132, 102, 255
// #define HSV_BLUE        170, 255, 255
// #define HSV_PURPLE      191, 255, 255
// #define HSV_MAGENTA     213, 255, 255
// #define HSV_PINK        234, 128, 255

#define BASE_COLOR 123,   255, 255
#define HSV_OFF    0,   0,   0

enum custom_keycodes {
    CMD_OPTION = SAFE_RANGE,
    COLOROFF,
    COLORON
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case CMD_OPTION:
      if (record->event.pressed) {
        SEND_STRING(SS_DOWN(X_RGUI));
        SEND_STRING(SS_DOWN(X_RALT));
        SEND_STRING(SS_UP(X_RALT));
        SEND_STRING(SS_UP(X_RGUI));
      }
      return false; // Skip all further processing of this key
    case COLOROFF:
      if (record->event.pressed) {
        rgblight_sethsv(HSV_OFF);
      }
      return false; // Skip all further processing of this key
    case COLORON:
      if (record->event.pressed) {
        rgblight_sethsv(BASE_COLOR);
      }
      return false; // Skip all further processing of this key
    default:
      return true; // Process all other keycodes normally
  }
}

void keyboard_post_init_user(void) {
  rgblight_sethsv(BASE_COLOR);
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_65_ansi(
        KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,    KC_BSPC,     MO(1),
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,   KC_BSLS,     CMD_OPTION,
        KC_CAPS,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,    KC_ENT,                 KC_NO,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,                KC_UP,      KC_NO,
        KC_LCTL,    KC_LALT,    KC_LGUI,                            KC_SPC,                                         KC_RGUI,    KC_RALT,    KC_RCTL,    KC_LEFT,    KC_DOWN,    KC_RGHT
    ),
    [1] = LAYOUT_65_ansi(
        KC_GRV,     KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_NO,      KC_TRNS,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      MO(2),
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                  KC_NO,
        KC_TRNS,    KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_TRNS,                COLORON,    KC_NO,
        KC_NO,      KC_NO,      KC_NO,                              KC_NO,                                          KC_NO,      KC_NO,      KC_NO,      RGB_RMOD,   COLOROFF,   RGB_MOD
    ),
    [2] = LAYOUT_65_ansi(
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                MO(3),
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,                            KC_TRNS,                                        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
    ),
    [3] = LAYOUT_65_ansi(
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                KC_TRNS,    RESET,
        KC_TRNS,    KC_TRNS,    KC_TRNS,                            KC_TRNS,                                        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
    )
};
