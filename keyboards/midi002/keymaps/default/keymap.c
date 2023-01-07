#include QMK_KEYBOARD_H

#define _DEFAULT 0
#define _RESET 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/*
     * ┌───┬───┬───┬───┐
     * │TG1│ / │ * │ - │
     * ├───┼───┼───┼───┤
     * │ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┤ + │
     * │ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │   │
     * ├───┴───┼───┤Ent│
     * │   0   │ . │   │
     * └───────┴───┴───┘
     */
	[_DEFAULT] = LAYOUT(
		KC_NO, 			KC_NO, 		KC_NO, 			KC_NO, 		KC_NO, 		KC_NO, 			KC_NO, 			KC_NO, 
		KC_NO, 			KC_NO, 		KC_NO, 			KC_NO, 		KC_NO, 		KC_NO, 			KC_NO, 			KC_NO, 
		  KC_NO, 	KC_NO, 		  KC_NO, 	KC_NO, 	KC_NO, 		  KC_NO, 	KC_NO, 		  KC_NO, 	KC_NO, 	KC_NO, 
		KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 
		  KC_NO, 	KC_NO, 		  KC_NO, 	KC_NO, 	KC_NO, 		  KC_NO, 	KC_NO, 		  KC_NO, 	KC_NO, 	KC_NO, 
		KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO, 	KC_NO
	),
	
	/*
     * ┌───┬───┬───┬───┐
     * │TG1│ / │ * │ - │
     * ├───┼───┼───┼───┤
     * │ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┤ + │
     * │ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │   │
     * ├───┴───┼───┤Ent│
     * │   0   │ . │   │
     * └───────┴───┴───┘
     */
	[_RESET] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	)
};
