/* The players' speech ring: speaking text (0x140116A40) and posting three
 * values (0x140116B00) into the 64-slot ring, the cursor masked to the
 * ring's width, including overlap, empty and oversized messages. */
// NC_WRAPPERS: 140116A40 140116B00
#include <string.h>
#include <emmintrin.h>
#include "nc.h"
#include "player_ring.h"

#ifdef NC_CLIENT_WRAPPERS
long long sr_player_event_text(int, __m128i *);
long long sr_player_event_values(int, unsigned int, unsigned int, unsigned int);
#endif

static void run_case(int n, int operation)
{
    unsigned char arena[256];
    int player, text_arg;

    nc_seed((uint64_t)n * 8 + operation);
    player = (int)nc_rand_below(6) - 1;            /* out-of-range players behave the same */
    for (int k = 0; k < 256; k++)
        arena[k] = (unsigned char)nc_rand_below(256);

    /* Seed every ring slot and cursor of the six players. */
    for (int p = 0; p < 6; p++) {
        player_ring_cursor(p) = (int)nc_rand_below(64);
        for (int i = 0; i < 64; i++) {
            PlayerRingSlot *s = &player_ring_slots(p)[i];
            unsigned char *bytes = (unsigned char *)s;
            for (int b = 0; b < (int)sizeof *s; b++)
                bytes[b] = (unsigned char)nc_rand_below(256);
        }
    }
    player_ring_selected_channel = (int)nc_rand_below(4);

    /* Messages: nul-terminated runs of every length, past the 64 cap. */
    text_arg = (int)nc_rand_below(200);
    arena[text_arg + nc_rand_below(80)] = 0;
    if (nc_chance(6))
        arena[text_arg] = 0;                       /* an empty message */
    if (nc_chance(8))
        nc_set_mxcsr(0x1F80 | ((unsigned)n & 3) << 13);

    long long result = -1;
#ifdef NC_NATIVE
    if (operation == 0)
        result = ((long long (*)(int, const void *))NC_ADDR(0x140116A40))(player, arena + text_arg);
    else
        result = ((long long (*)(int, unsigned int, unsigned int, unsigned int))
                  NC_ADDR(0x140116B00))(player, nc_rand(), nc_rand(), nc_rand());
#elif defined(NC_CLIENT_WRAPPERS)
    if (operation == 0)
        result = sr_player_event_text(player, arena + text_arg);
    else
        result = sr_player_event_values(player, nc_rand(), nc_rand(), nc_rand());
#else
    if (operation == 0)
        result = player_ring_text(player, arena + text_arg);
    else
        result = player_ring_values(player, nc_rand(), nc_rand(), nc_rand());
#endif
    nc_line("case %d op %d player %d arg %d", n, operation, player, text_arg);
    nc_bytes("result", &result, sizeof result);
    for (int p = 0; p < 6; p++) {
        nc_bytes("cursor", &(player_ring_cursor(p)), 4);
        nc_bytes("slots", (unsigned char *)player_ring_slots(p), (int)sizeof(PlayerRingSlot) * 64);
    }
}

int main(void)
{
    nc_map_image();
    for (int n = 0; n < nc_cases(2000); n++)
        for (int operation = 0; operation < 2; operation++)
            run_case(n, operation);
    return 0;
}
