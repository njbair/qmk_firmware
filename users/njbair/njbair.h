#ifndef USERSPACE
#define USERSPACE

#include "quantum.h"

// Define layer names
enum userspace_layers {
  _QWERTY = 0,
  _DVORAK,
  _COLEMAK,
  _OVERLAY_CTRL_REMAP,
  _OVERLAY_HHKB_FN,
  _FN_SPACEFN,
  _OVERLAY_GAMER,
  _OVERLAY_KEYMAP_SETTINGS,
  _FN_PRIMARY
};

uint16_t default_layer_state_previous;

void my_custom_function(void);

#endif
