/*
 * QMK Keymap for Bastard Keyboards Scylla
 * Based on ZMK config from datsfilipe/zmk-config-totem
 */

#include QMK_KEYBOARD_H
#include "config.h"

enum layers {
  _BASE,
  _NAV,
  _NUM,
  _SYM,
  _FUN,
  _MEDIA
};

// Homerow mods
#define HM_A MT(MOD_LGUI, KC_A)
#define HM_S MT(MOD_LALT, KC_S)
#define HM_D MT(MOD_LCTL, KC_D)
#define HM_F MT(MOD_LSFT, KC_F)
#define HM_J MT(MOD_RSFT, KC_J)
#define HM_K MT(MOD_RCTL, KC_K)
#define HM_L MT(MOD_LALT, KC_L)
#define HM_SCLN MT(MOD_RGUI, KC_SCLN)

// Thumb keys
// LEFT:  K32=ESC/MEDIA, K33=SPC/SYM, K34=TAB/FUN
// RIGHT: K35=DEL/NUM, K36=ENT/NAV, K37=BSPC
#define TH_ESC LT(_MEDIA, KC_ESC)
#define TH_SPC LT(_SYM, KC_SPC)
#define TH_TAB LT(_FUN, KC_TAB)
#define TH_DEL LT(_NUM, KC_DEL)
#define TH_ENT LT(_NAV, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // BASE: QWERTY with homerow mods
  [_BASE] = LAYOUT_miryoku(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    HM_A,    HM_S,    HM_D,    HM_F,    KC_G,        KC_H,    HM_J,    HM_K,    HM_L,    HM_SCLN,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
    KC_NO,   KC_NO,   TH_ESC,  TH_SPC,  TH_TAB,      TH_DEL,  TH_ENT,  KC_BSPC, KC_NO,   KC_NO
  ),

  // NAV: Navigation (activated by ENT/NAV on right thumb)
  [_NAV] = LAYOUT_miryoku(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS,
    C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_Y),     KC_INS,  KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_NO,       KC_DEL,  KC_ENT,  KC_BSPC, KC_NO,   KC_NO
  ),

  // NUM: Numbers and numpad style (activated by DEL/NUM on right thumb)
  [_NUM] = LAYOUT_miryoku(
    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,      KC_NO,   KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS,     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_DOT,  KC_0,    KC_MINS,     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
  ),

  // SYM: Symbols (activated by SPC/SYM on left thumb)
  [_SYM] = LAYOUT_miryoku(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_LPRN, KC_RPRN, KC_MINS, KC_PLUS, KC_EQL,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,       KC_LBRC, KC_RBRC, KC_UNDS, KC_PIPE, KC_QUOT,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_LCBR, KC_RCBR, KC_BSLS, KC_DQUO, KC_TILD,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO
  ),

  // FUN: Function keys (activated by TAB/FUN on left thumb)
  [_FUN] = LAYOUT_miryoku(
    KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SCRL,     KC_NO,   KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI,
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS,     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_TRNS, KC_NO,   KC_NO,   KC_NO
  ),

  // MEDIA: Media controls (activated by ESC/MEDIA on left thumb)
  [_MEDIA] = LAYOUT_miryoku(
    QK_BOOT, KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_RALT, KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_TRNS, KC_NO,   KC_NO,       KC_MSTP, KC_MPLY, KC_MUTE, KC_NO,   KC_NO
  )
};
