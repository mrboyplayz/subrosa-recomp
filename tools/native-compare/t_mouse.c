// NC_WRAPPERS: 14007CB30 14007CBC0
/* Client input: input_get_mouse_state, 0x14007CB30 and
 * input_get_relative_mouse_state, 0x14007CBC0. */
#include "nc.h"
#include "input.h"
#include "memory.h"
#include <string.h>

#ifdef NC_NATIVE
#define input_get_mouse_state(state) \
    ((__int64 (*)(float *))NC_ADDR(0x14007CB30))(state)
#define input_get_relative_mouse_state(state) \
    ((__int64 (*)(float *))NC_ADDR(0x14007CBC0))(state)
#endif

/* SDL_GetMouseState and SDL_GetRelativeMouseState are bound to stubs so both
 * builds exercise the same mouse inputs. */
static int stub_mouse_x;
static int stub_mouse_y;
static unsigned int stub_mouse_buttons;
static unsigned int stub_SDL_GetMouseState(int *x, int *y)
{
    *x = stub_mouse_x;
    *y = stub_mouse_y;
    return stub_mouse_buttons;
}
static unsigned int stub_SDL_GetRelativeMouseState(int *x, int *y)
{
    *x = stub_mouse_x;
    *y = stub_mouse_y;
    return stub_mouse_buttons;
}

/* The functions write 152 bytes into the caller's record; the buffer covers
 * the record plus slack so both builds observe every written byte. */
static unsigned int record[64];

static void check(int n, int which, unsigned buttons, int x, int y)
{
    stub_mouse_buttons = buttons;
    stub_mouse_x = x;
    stub_mouse_y = y;
    memset(record, 0, sizeof(record));
    for (int k = 0; k < 40; k++)
        record[k] = 0xDEADBEEFu ^ (unsigned)(k * 2654435761u) ^ (unsigned)n;
    __int64 result = which ? input_get_relative_mouse_state((float *)record)
                           : input_get_mouse_state((float *)record);
    nc_line("case %d which %d buttons %08x x %d y %d", n, which, buttons, x, y);
    nc_line("  result %lld", (long long)result);
    nc_line("  pos %08x %08x", record[0], record[1]);
    nc_line("  buttons %08x %08x %08x", record[36], record[37], record[38]);
    nc_line("  rest %016llx", (unsigned long long)nc_hash(&record[4], 32 * sizeof(*record)));
}

int main(void)
{
    nc_bind_import("SDL2.dll", "SDL_GetMouseState", (void *)stub_SDL_GetMouseState);
    nc_bind_import("SDL2.dll", "SDL_GetRelativeMouseState", (void *)stub_SDL_GetRelativeMouseState);
    nc_map_image();
    int cases = nc_cases(400);
    /* The canvas floats are fixed, ordinary values; the window sizes are
     * fixed so the results can be hand-checked, and the relative call also
     * runs on default (untouched) state. */
    SR_GLOBAL(float, 0x1A8BF79C4ULL) = 800.0f;
    SR_GLOBAL(float, 0x1A8BF79C8ULL) = 450.0f;
    SR_GLOBAL(int32_t, 0x160FC47D8ULL) = 1600;
    SR_GLOBAL(int32_t, 0x160FC47DCULL) = 900;
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        /* Buttons: single, combined, out-of-range bits, plus all-ones.
         * Positions span zero, negative, and large. */
        unsigned buttons = nc_chance(60) ? nc_rand_below(8)
                                         : (unsigned)nc_rand();
        int x = nc_chance(30) ? (int)(nc_rand() & 0x7FFFFFFF) : nc_rand_below(4096) - 1024;
        int y = nc_chance(30) ? (int)(nc_rand() & 0x7FFFFFFF) : nc_rand_below(4096) - 1024;
        check(n, 0, buttons, x, y);
        check(n, 1, buttons, x, y);
        check(n, 0, 0, 0, 0);
        check(n, 1, 0xFFFFFFFFu, -1, -2);
        if (n < 8) {
            check(n, 0, 1u << nc_rand_below(32), 123456789, -987654321);
            check(n, 1, 2u << nc_rand_below(30), -2147483647 - 1, 2147483647);
        }
    }
    return 0;
}
