#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x1222
#define DEVICE_VER      0x0001
#define MANUFACTURER    DZTECH
#define PRODUCT         DZ65RGB
#define DESCRIPTION     DZ65 ARM RGB keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { B1, B10, B11, B14, B12 }
#define MATRIX_COL_PINS { A6, A7, B0, B13, B15, A8, A15, B3, B4, B5, B8, B9, C13, C14, C15 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* disable these deprecated features by default */
#ifndef LINK_TIME_OPTIMIZATION_ENABLE
#    define NO_ACTION_MACRO
#    define NO_ACTION_FUNCTION
#endif

#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_LED_PROCESS_LIMIT 4
#    define RGB_MATRIX_LED_FLUSH_LIMIT 26
#    define DEBOUNCE 3
#    define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects
#    define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended
#    define RGB_MATRIX_KEYPRESSES
// #    define RGB_MATRIX_KEYRELEASES

#    define DISABLE_RGB_MATRIX_ALPHAS_MODS                // Disables RGB_MATRIX_ALPHAS_MODS
#    define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN           // Disables RGB_MATRIX_GRADIENT_UP_DOWN
// #    define DISABLE_RGB_MATRIX_BREATHING                  // Disables RGB_MATRIX_BREATHING
#    define DISABLE_RGB_MATRIX_BAND_SAT                   // Disables RGB_MATRIX_BAND_SAT
#    define DISABLE_RGB_MATRIX_BAND_VAL                   // Disables RGB_MATRIX_BAND_VAL
#    define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT          // Disables RGB_MATRIX_BAND_PINWHEEL_SAT
#    define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL          // Disables RGB_MATRIX_BAND_PINWHEEL_VAL
#    define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT            // Disables RGB_MATRIX_BAND_SPIRAL_SAT
#    define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL            // Disables RGB_MATRIX_BAND_SPIRAL_VAL
#    define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT           // Disables RGB_MATRIX_CYCLE_LEFT_RIGHT
#    define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN              // Disables RGB_MATRIX_CYCLE_UP_DOWN
#    define DISABLE_RGB_MATRIX_CYCLE_OUT_IN               // Disables RGB_MATRIX_CYCLE_OUT_IN
#    define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL          // Disables RGB_MATRIX_CYCLE_OUT_IN_DUAL
#    define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON     // Disables RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#    define DISABLE_RGB_MATRIX_DUAL_BEACON                // Disables RGB_MATRIX_DUAL_BEACON
#    define DISABLE_RGB_MATRIX_CYCLE_PINWHEEL             // Disables RGB_MATRIX_CYCLE_PINWHEEL
#    define DISABLE_RGB_MATRIX_CYCLE_SPIRAL               // Disables RGB_MATRIX_CYCLE_SPIRAL
#    define DISABLE_RGB_MATRIX_RAINBOW_BEACON             // Disables RGB_MATRIX_RAINBOW_BEACON
#    define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS          // Disables RGB_MATRIX_RAINBOW_PINWHEELS
#    define DISABLE_RGB_MATRIX_RAINDROPS                  // Disables RGB_MATRIX_RAINDROPS
#    define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS        // Disables RGB_MATRIX_JELLYBEAN_RAINDROPS
#    define DISABLE_RGB_MATRIX_TYPING_HEATMAP             // Disables RGB_MATRIX_TYPING_HEATMAP
#    define DISABLE_RGB_MATRIX_DIGITAL_RAIN               // Disables RGB_MATRIX_DIGITAL_RAIN
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE             // Disables RGB_MATRIX_SOLID_REACTIVE
// #    define DISABLE_RGB_MATRIX_CYCLE_ALL                  // Disables RGB_MATRIX_CYCLE_ALL

// REACTIVE
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE      // Disables RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE        // Disables RGB_MATRIX_SOLID_REACTIVE_WIDE
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE   // Disables RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
// #    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS       // Disables RGB_MATRIX_SOLID_REACTIVE_CROSS
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS  // Disables RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS       // Disables RGB_MATRIX_SOLID_REACTIVE_NEXUS
#    define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS  // Disables RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#    define DISABLE_RGB_MATRIX_SPLASH                     // Disables RGB_MATRIX_SPLASH
#    define DISABLE_RGB_MATRIX_MULTISPLASH                // Disables RGB_MATRIX_MULTISPLASH
#    define DISABLE_RGB_MATRIX_SOLID_SPLASH               // Disables RGB_MATRIX_SOLID_SPLASH
#    define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH          // Disables RGB_MATRIX_SOLID_MULTISPLASH

#    define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_REACTIVE_CROSS

#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
#    define DRIVER_ADDR_1 0b1110100
#    define DRIVER_ADDR_2 0b1110111
#    define DRIVER_COUNT 2
#    define DRIVER_1_LED_TOTAL 35
#    define DRIVER_2_LED_TOTAL 33
#    define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)
#endif
