#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		 KC_MUTE, LT(2, KC_MPLY), LT(1, KC_ESC),  
		LT(3, KC_MNXT), LT(4, KC_MPRV)),

	KEYMAP(
		KC_TRNS, RGB_TOG, KC_TRNS, 
		RGB_MODE_PLAIN, RGB_MODE_GRADIENT),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, 
		RESET, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS)

};


void matrix_init_user(void) {
	rgblight_enable();
	rgblight_sethsv(0,255,255);
	rgblight_mode(11);
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}

void encoder_update_user(uint8_t index, bool clockwise) {
	if(layer_state_is(0)) {
	    if (index == 0) { /* media volumen control */
	        if (clockwise) {
	            tap_code(KC_VOLU);
	        } else {
	            tap_code(KC_VOLD);
	        }
	    }

	} else if(layer_state_is(1)) {
	    if (index == 0) { /* rgb modes */
	        if (clockwise) {
	            rgblight_step();
	        } else {
	            rgblight_step_reverse();
	        }
	    }		
	} else if(layer_state_is(2)) {
	    if (index == 0) {  /* rgb hue */
	        if (clockwise) {
	            rgblight_increase_hue();
	        } else {
	            rgblight_decrease_hue();
	        }
	    }		
	} else if(layer_state_is(3)) {
	    if (index == 0) {  /* rgb saturation */
	        if (clockwise) {
	            rgblight_increase_sat();
	        } else {
	            rgblight_decrease_sat();
	        }
	    }		
	} else if(layer_state_is(4)) {
	    if (index == 0) {  /* rgb value */
	        if (clockwise) {
	            rgblight_increase_val();
	        } else {
	            rgblight_decrease_val();
	        }
	    }		
	}
}
