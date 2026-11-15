/* Steam ticket staging callback: 0x1401880C0 stores the ticket length,
 * copies the received ticket into the 1024-byte staging buffer and raises
 * the received flag; longer tickets are dropped whole. The master network
 * routine drains the buffer into packet type 72. */
#include "nc.h"
#include "world_streets.h"

#ifdef NC_NATIVE
#define ticket_stage(src, length) \
    ((void *(*)(const void *, unsigned int))NC_ADDR(0x1401880C0))(src, length)
#else
#define ticket_stage steam_ticket_stage
#endif

#define STATE sizeof(SteamTicket)   /* length word, 1024-byte ticket, received flag */

static unsigned char source[0x400 + 256];

/* Random ticket source, and random junk over the staged state: the skip path
 * must leave the junk alone and the staged path must leave everything past
 * `length` alone. */
static void fill_words(void)
{
    uint32_t *words = (uint32_t *)steam_ticket;
    for (size_t i = 0; i < STATE / 4; i++)
        words[i] = (uint32_t)nc_rand();
    uint32_t *src = (uint32_t *)source;
    for (size_t i = 0; i < sizeof source / 4; i++)
        src[i] = (uint32_t)nc_rand();
}

static unsigned int pick_length(void)
{
    switch (nc_rand_below(8)) {
    case 0: return 0;
    case 1: return 1;
    case 2: return 0x3FF;
    case 3: return 0x400;
    case 4: return 0x401;
    case 5: return 0xFFFFFFFF;
    case 6: return nc_rand_below(0x402);
    default: return (unsigned int)nc_rand();
    }
}

int main(void)
{
    nc_map_image();
    nc_save(steam_ticket, STATE);
    int cases = nc_cases(1000);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        nc_restore();
        fill_words();
        unsigned int length = pick_length();
        int passes = length <= 0x400;
        nc_line("case %d length %u", n, length);
        void *result = ticket_stage(source, length);
        nc_bytes("buffer", steam_ticket->data, 0x400);
        nc_line("length word %u received %u", steam_ticket->length, steam_ticket->received);
        /* The skip path leaves the original's result register unset: only the
         * staged path's return is printed, and both builds agree on the
         * guard that decides which one happened. */
        if (passes)
            nc_line("returned %016llx", (unsigned long long)(uintptr_t)result);
        else
            nc_line("skip");
    }
    return 0;
}
