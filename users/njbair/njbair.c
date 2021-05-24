#include "njbair.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LCTL_QWERTY:
            if (record->event.pressed) {
                default_layer_state_previous = default_layer_state;
                default_layer_set(1UL<<_QWERTY);
                add_mods(MOD_BIT(KC_LCTL));
                send_keyboard_report();
            } else {
                default_layer_set(default_layer_state_previous);
                del_mods(MOD_BIT(KC_LCTL));
                send_keyboard_report();
                clear_keyboard();
            }
            return true;
    }
}

void my_custom_function(void) {

}
