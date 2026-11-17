/* Client input snapshot queries: keyboard state bulk copy and mouse state.
 * Shared canvas/window state (0x160FC47D8/0x160FC47DC, written by the
 * unported event pump) lives in the flat region and is reached with
 * SR_GLOBAL; the SDL entry points are reached through the original's
 * import-address thunks exactly as the client code calls them.
 */
#include <stdint.h>
#include "memory.h"
#include "input.h"
#include "camera.h"

/* Import-address thunks (call qword [IAT entry]); MinGW headers do not
 * declare the SDL entry points behind them, so the declarations live here. */
extern const unsigned char *sub_140198EF9(void);      /* SDL_GetKeyboardState */
extern unsigned int sub_140198EFF(int *, int *);      /* SDL_GetMouseState */
extern unsigned int sub_140198F05(int *, int *);      /* SDL_GetRelativeMouseState */

/* Window size shared state (written by the unported event pump). */
#define sr_window_width   SR_GLOBAL(int32_t, 0x160FC47D8ULL)
#define sr_window_height  SR_GLOBAL(int32_t, 0x160FC47DCULL)

__int128 *input_get_keyboard_state(unsigned char *keys) /* 0x14007CA90 */
{
    /* SDL's key state array is 323 bytes (SDL_NUM_SCANCODES would be 512,
     * but SDL 2.0.x fills 323). The original copies 2 x 128 bytes with the
     * pointers advancing, then reads the remaining 67 bytes (64 + a trailing
     * word + a trailing byte) through offsets 0x00-0x42 of the advanced
     * pointer and returns that pointer unchanged. */
    const unsigned char *state = sub_140198EF9();
    uint32_t chunks_remaining = 2;
    unsigned char *out = keys;
    do
    {
        for (int k = 0; k < 128; k++)
            out[k] = state[k];
        out += 128;
        state += 128;
        --chunks_remaining;
    }
    while (chunks_remaining);
    for (int k = 0; k < 67; k++)
        out[k] = state[k];
    /* The original returns the source pointer after the two 128-byte chunks
     * (256 bytes in), not the base of the key array or the caller buffer. */
    return (__int128 *)(void *)state;
}

/* Default logical canvas size; the relative-mouse state reports it fixed. */
#define INPUT_RELATIVE_CANVAS_WIDTH 512.0f
#define INPUT_RELATIVE_CANVAS_HEIGHT 320.0f

__int64 input_get_relative_mouse_state(float *state) /* 0x14007CBC0 */
{
    int relative_mouse_x;
    int relative_mouse_y;
    uint32_t mouse_button_mask = sub_140198F05(&relative_mouse_x, &relative_mouse_y);
    /* The first two floats are the fixed 512.0/320.0 defaults below, not
     * the window size. */
    state[0] = INPUT_RELATIVE_CANVAS_WIDTH;
    state[1] = INPUT_RELATIVE_CANVAS_HEIGHT;
    state[2] = (float)relative_mouse_x;
    state[3] = (float)relative_mouse_y;
    /* Button fields are integers stored at byte offsets 152/144/148 of the
     * record (the original's dword stores), not float lanes. */
    ((unsigned int *)state)[38] = mouse_button_mask;
    ((unsigned int *)state)[36] = mouse_button_mask & 1;         /* left button */
    ((unsigned int *)state)[37] = (mouse_button_mask >> 2) & 1;  /* right button */
    return (int32_t)((mouse_button_mask >> 2) & 1);
}

__int64 input_get_mouse_state(float *state) /* 0x14007CB30 */
{
    int mouse_x;
    int mouse_y;
    uint32_t mouse_button_mask = sub_140198EFF(&mouse_x, &mouse_y);
    /* Normalized position: pixel * canvas size / window size. The window
     * sizes are integers converted to float at the divide. */
    state[0] = (float)mouse_x * renderer_canvas_width / (float)sr_window_width;
    state[1] = (float)mouse_y * renderer_canvas_height / (float)sr_window_height;
    ((unsigned int *)state)[38] = mouse_button_mask;
    ((unsigned int *)state)[36] = mouse_button_mask & 1;         /* left button */
    ((unsigned int *)state)[37] = (mouse_button_mask >> 2) & 1;  /* right button */
    return (int32_t)((mouse_button_mask >> 2) & 1);
}
