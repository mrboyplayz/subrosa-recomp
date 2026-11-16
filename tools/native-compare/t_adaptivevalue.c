/* The adaptive value reader with a no-change flag: the flag early return,
   the bit pair picking the signed word or one of two widths, the
   sign-extended add, the histogram increment and the pointer-valued return
   when the value plus 128 fits a byte. Varied readers, widths, bases and
   flag states over deterministic bit streams. */
// NC_WRAPPERS: 14018D5E0
#include <string.h>
#include "nc.h"
#include "net_decode.h"

#ifdef NC_NATIVE
#define adaptive_value(o,b,bits) ((long long (*)(int *, int, int))NC_ADDR(0x14018D5E0))(o,b,bits)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_14018D5E0(int *, int, int);
#define adaptive_value(o,b,bits) sub_14018D5E0(o,b,bits)
#else
int64_t net_read_adaptive_value(int *out, int base, int bits);
#define adaptive_value(o,b,bits) net_read_adaptive_value(o,b,bits)
#endif

/* The histogram: 256 dwords, one per byte value. */
#define HISTOGRAM(index) \
    (&SR_GLOBAL(uint32_t, SR_STATE_BASE + 4ULL * (179992058ULL + (uint64_t)(index))))

static void run_case(int n)
{
    static const int counts[] = {0,1,2,3,7,8,9,15,16,17,24,31,32,33,40,-1};
    static const int positions[] = {0,1,4,32,65530,65535,65536,65537};
    static const int offsets[] = {0,1,3,7,-1};
    nc_seed((uint64_t)n * 2654435761ULL + 7);
    /* Reinitialize the reader periodically; every case resets its cursors. */
    if (n % 97 == 0) {
        for (int i = 0; i < NET_BUFFER_SIZE + 16; i++)
            net_read_buffer[i] = (uint8_t)nc_rand();
    }
    for (int h = 0; h < 256; h++)
        *HISTOGRAM(h) = (uint32_t)nc_rand();
    int flag = n % 3;
    int width_low = counts[n % 16];
    int width_high = counts[(n / 16) % 16];
    int bits = counts[(n / 256) % 16];
    int base = (int)nc_rand();
    int out = (int)nc_rand();
    int start = positions[(n / 4096) % 8];
    int bit = offsets[(n / 32768) % 5];
    SR_GLOBAL(uint32_t, 0x16B2A224CULL) = (uint32_t)(flag == 2 ? 0x80000000u : flag);
    SR_GLOBAL(uint32_t, 0x165D84960ULL) = (uint32_t)width_low;
    SR_GLOBAL(uint32_t, 0x165D84964ULL) = (uint32_t)width_high;
    net_read_position = start;
    net_read_bit = bit;
    net_read_length = NET_BUFFER_SIZE;
    nc_set_mxcsr(0x1F80);
    long long result = adaptive_value(&out, base, bits);
    nc_line("n%d f%d %016llx out%d pos%d bit%d", n, flag,
            (unsigned long long)result, out, net_read_position, net_read_bit);
    nc_line("hist %016llx", (unsigned long long)nc_hash((void *)HISTOGRAM(0), 256 * 4));
}

int main(void)
{
    nc_map_image();
    for (int n = 0; n < nc_cases(1000); n++)
        run_case(n);
    return 0;
}
