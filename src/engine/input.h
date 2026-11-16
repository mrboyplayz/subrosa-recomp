/* Client input snapshot queries ported from the original executable. */
#ifndef SR_ENGINE_INPUT_H
#define SR_ENGINE_INPUT_H

#include <stdint.h>

__int128 *input_get_keyboard_state(unsigned char *keys); /* 0x14007CA90; returns the advanced source pointer */
__int64 input_get_mouse_state(float *state);             /* 0x14007CB30; 12 floats + button result */
__int64 input_get_relative_mouse_state(float *state);    /* 0x14007CBC0; 12 floats + button result */

#endif
