// NC_WRAPPERS: 14007CA90
/* Client input: input_get_keyboard_state, 0x14007CA90. */
#include "nc.h"
#include "input.h"
#include <string.h>

#ifdef NC_NATIVE
#define input_get_keyboard_state(keys) \
    ((__int128 *(*)(unsigned char *))NC_ADDR(0x14007CA90))(keys)
#endif

/* SDL_GetKeyboardState is bound to a stub that fills the 323-byte array and
 * returns a snapshot base pointer, so both builds exercise the same input. */
static const unsigned char *sr_stub_keys;
static const unsigned char *stub_SDL_GetKeyboardState(int *count)
{
    static const unsigned char snapshot[323] = {
        [0] = 1, [1] = 2, [2] = 4, [3] = 8, [4] = 16, [5] = 32, [6] = 64, [7] = 128,
        [40] = 0x5A, [41] = 0xA5, [42] = 0x81, [79] = 0x33, [80] = 0xCC,
        [160] = 0x77, [224] = 0x11, [225] = 0x22, [226] = 0x44,
        [300] = 0x9D, [319] = 0x72, [320] = 0x34, [321] = 0x56, [322] = 0x78,
    };
    sr_stub_keys = snapshot;
    if (count)
        *count = 323;
    return sr_stub_keys;
}

int main(void)
{
    nc_bind_import("SDL2.dll", "SDL_GetKeyboardState", (void *)stub_SDL_GetKeyboardState);
    nc_map_image();
    int cases = nc_cases(400);
    unsigned char keys[512];
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        int fill = nc_rand_below(512);
        /* One ordinary pattern and one all-bits pattern per case; the copy
         * must be exact including any byte the stub never writes. */
        unsigned char pattern = (unsigned char)nc_rand();
        for (int k = 0; k < 512; k++)
            keys[k] = (unsigned char)(nc_chance(50) ? (k < fill ? 0x00 : 0xFF) : (k ^ n ^ pattern));
        nc_line("case %d fill %d pattern %02x", n, fill, pattern);
        unsigned char *before = keys;
        __int128 *result = input_get_keyboard_state(keys);
        nc_line("  returned delta %d", (int)((unsigned char *)result - before));
        nc_line("  keys %016llx", (unsigned long long)nc_hash(keys, sizeof(keys)));
        nc_line("  low %016llx mid %016llx tail %016llx",
                (unsigned long long)nc_hash(keys, 256),
                (unsigned long long)nc_hash(keys + 256, 64),
                (unsigned long long)nc_hash(keys + 320, 3));
        /* Repeat with the caller buffer pre-poisoned to confirm every
         * written byte and only those bytes change. */
        memset(keys, 0xA7, sizeof(keys));
        result = input_get_keyboard_state(keys);
        nc_line("  poisoned delta %d", (int)((unsigned char *)result - (unsigned char *)before));
        nc_line("  poisoned keys %016llx", (unsigned long long)nc_hash(keys, sizeof(keys)));
    }
    return 0;
}
