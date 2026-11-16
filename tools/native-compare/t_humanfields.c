/* The human state packet writer: twelve fixed-width net_write_bits transfers
   in the original's order (0x6F94 before 0x6F8C), over varied humans, record
   values, starting cursors and a full buffer. The return is the last
   transfer's; the game reads its low 32 bits (the tail call's upper bits are
   residue no caller observes). */
// NC_WRAPPERS: 14010EE20
#include <string.h>
#include "nc.h"
#include "net_bits.h"

#ifdef NC_NATIVE
#define state_fields(h) ((long long (*)(int))NC_ADDR(0x14010EE20))(h)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_14010EE20(int);
#define state_fields(h) sub_14010EE20(h)
#else
long long human_state_write_fields(int human);
#define state_fields(h) human_state_write_fields(h)
#endif

/* The record fields the routine packs, in its transfer order. */
static const unsigned int field_offsets[] = {
    0x8, 0x6F80, 0x6F84, 0x6F88, 0x6F8C, 0x6F90,
    0x6F94, 0x6F98, 0x6F9C, 0x6FA0, 0x6FA8, 0x6FAC
};

static void run_case(int n)
{
    static const int humans[] = {0, 1, 2, 3, 4, 5, -1, -2, 4096, 16384};
    static const int positions[] = {0, 1, 4, 32, 65530, 65535, 65536, 65537};
    static const int bits[] = {0, 1, 3, 7, 8, -1};
    nc_seed((uint64_t)n * 2654435761ULL + 11);
    int human = humans[n % 10];
    int start = positions[(n / 10) % 8];
    int bit = bits[(n / 80) % 6];
    /* Reinitialize the buffer periodically; every case resets its cursors. */
    if (n % 97 == 0) {
        for (int i = 0; i < NET_BUFFER_SIZE + 16; i++)
            net_write_buffer[i] = (uint8_t)nc_rand();
    }
    for (int f = 0; f < 12; f++)
        *(&SR_GLOBAL(uint32_t, 0x18329E308ULL + 0x6FF8ULL * (uint64_t)(int64_t)(human)
                     + field_offsets[f])) = (uint32_t)nc_rand();
    net_write_position = start;
    net_write_bit = bit;
    nc_set_mxcsr(0x1F80);
    long long result = state_fields(human);
    nc_line("n%d h%d ret%016llx pos%d bit%d", n, human,
            (unsigned long long)result, net_write_position, net_write_bit);
    /* Hash all bytes, including guard storage. */
    nc_line("buffer %016llx", (unsigned long long)nc_hash(net_write_buffer, NET_BUFFER_SIZE + 16));
}

int main(void)
{
    nc_map_image();
    for (int n = 0; n < nc_cases(1000); n++)
        run_case(n);
    return 0;
}
