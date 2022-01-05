
// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#include "manna-harbour_miryoku.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
    LT(BUTTON, KC_Z),  ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    LT(BUTTON, KC_SLSH),
    U_NP,              U_NP,              LT(MEDIA, KC_ESC), LT(NAV, KC_SPC),   LT(MOUSE, KC_TAB), LT(SYM, KC_ENT),   LT(NUM, KC_BSPC),  LT(FUN, KC_DEL),   U_NP,              U_NP
  ),
  [NAV] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_ENT,  KC_BSPC, KC_DEL,  U_NP,    U_NP
  ),
  [MOUSE] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    U_NU,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [MEDIA] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    U_NU,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,    KC_MSTP, KC_MPLY, KC_MUTE, U_NP,    U_NP
  ),
  [NUM] = LAYOUT_miryoku(
    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_DOT,  KC_0,    KC_MINS, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [SYM] = LAYOUT_miryoku(
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_LPRN, KC_RPRN, KC_UNDS, U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [FUN] = LAYOUT_miryoku(
    KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
    KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_APP,  KC_SPC,  KC_TAB,  U_NA,    U_NA,    U_NA,    U_NP,    U_NP
  ),
  [BUTTON] = LAYOUT_miryoku(
    U_UND,   U_CUT,   U_CPY,   U_PST,   U_RDO,   U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, KC_TRNS, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    U_UND,   U_CUT,   U_CPY,   U_PST,   U_RDO,   U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    U_NP,    U_NP,    KC_BTN2, KC_BTN3, KC_BTN1, KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  )
};

#ifdef OLED_ENABLE
static uint32_t oled_timer = 0;

oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_270; }

void render_space(void) {
    oled_write_P(PSTR("     "), false);
}

void render_mod_status(uint8_t modifiers) {
    if (modifiers & MOD_MASK_CTRL) {
        oled_write_P(PSTR("Ctrl "), false);
    } else {
        oled_write_P((PSTR("     ")), false);
    }

    if (modifiers & MOD_MASK_SHIFT) {
        oled_write_P(PSTR("Shift"), false);
    } else {
        oled_write_P((PSTR("     ")), false);
    }

    if(modifiers & MOD_MASK_ALT) {
        oled_write_P(PSTR(" Alt "), false);
    } else {
        oled_write_P((PSTR("     ")), false);
    }

    if(modifiers & MOD_MASK_GUI) {
        oled_write_P(PSTR(" Win "), false);
    } else {
        oled_write_P((PSTR("     ")), false);
    }
}

void render_logo(void) {
    static const char PROGMEM corne_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0};
    oled_write_P(corne_logo, false);
    oled_write_P(PSTR("corne"), false);
}

void render_layer_state(void) {
	// BASE, BUTTON, MEDIA, NAV, MOUSE, SYM, NUM, FUN
	if (layer_state_is(BASE)) {
		oled_write_P(PSTR("BASE "), false);
	} else if (layer_state_is(NAV)) {
		oled_write_P(PSTR(" NAV "), false);
	} else if (layer_state_is(MOUSE)) {
		oled_write_P(PSTR("MOUSE"), false);
	} else if (layer_state_is(MEDIA)) {
		oled_write_P(PSTR("MEDIA"), false);
	} else if (layer_state_is(NUM)) {
		oled_write_P(PSTR(" NUM "), false);
	} else if (layer_state_is(SYM)) {
		oled_write_P(PSTR(" SYM "), false);
	} else if (layer_state_is(FUN)) {
		oled_write_P(PSTR("FUNC "), false);
	} else if (layer_state_is(BUTTON)) {
		oled_write_P(PSTR(" BTN "), false);
	}
}

void render_status_main(void) {
    render_logo();
    render_space();
    render_layer_state();
    render_space();
    render_mod_status(get_mods()|get_oneshot_mods());
}

void render_status_secondary(void) {
    render_logo();
    render_space();
    render_layer_state();
    render_space();
    render_mod_status(get_mods()|get_oneshot_mods());
}

void suspend_power_down_user() {
    oled_off();
}

bool oled_task_user(void) {
    if (timer_elapsed32(oled_timer) > 30000) {
        oled_off();
        return false;
    }
#ifndef SPLIT_KEYBOARD
    else { oled_on(); }
#endif

    if (is_keyboard_master()) {
        render_status_main();  // Renders the current keyboard state (layer, lock, caps, scroll, etc)
    } else {
        render_status_secondary();
    }
    return false;
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
#ifdef OLED_ENABLE
        oled_timer = timer_read32();
#endif
    // set_timelog();
    }
    return true;
}

#ifdef RGBLIGHT_ENABLE
const rgblight_segment_t PROGMEM base_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, HSV_PURPLE}
);

const rgblight_segment_t PROGMEM nav_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, HSV_CYAN}
);

const rgblight_segment_t PROGMEM mouse_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, HSV_YELLOW}
);

const rgblight_segment_t PROGMEM media_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, HSV_RED}
);

const rgblight_segment_t PROGMEM num_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, HSV_BLUE}
);

const rgblight_segment_t PROGMEM sym_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, HSV_GREEN}
);

const rgblight_segment_t PROGMEM fun_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, HSV_PINK}
);

const rgblight_segment_t PROGMEM button_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, HSV_ORANGE}
);


// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    base_layer,
    nav_layer,
    mouse_layer,
    media_layer,
    num_layer,
    sym_layer,
    fun_layer,
    button_layer
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = rgb_layers;
};

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, BASE));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, NAV));
    rgblight_set_layer_state(2, layer_state_cmp(state, MOUSE));
    rgblight_set_layer_state(3, layer_state_cmp(state, MEDIA));
    rgblight_set_layer_state(4, layer_state_cmp(state, NUM));
    rgblight_set_layer_state(5, layer_state_cmp(state, SYM));
    rgblight_set_layer_state(6, layer_state_cmp(state, FUN));
    rgblight_set_layer_state(7, layer_state_cmp(state, BUTTON));
    return state;
}
#endif
