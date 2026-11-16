/* Turning the corner table: step counts from -3 to 9, every tag of the cycle
 * and others, floats that are ordinary, NaN, infinite, negative zero and
 * exactly 0 or 1. The whole table and the returned tag are compared. All
 * MXCSR rounding modes. */
// NC_WRAPPERS: 14001B5C0
#include <string.h>
#include "nc.h"
#include "world.h"

#ifdef NC_NATIVE
#define rotate(n, t) ((uint64_t (*)(int, uint32_t))NC_ADDR(0x14001B5C0))(n, t)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_14001B5C0(long long, unsigned);
#define rotate(n, t) ((uint64_t)sub_14001B5C0(n, t))
#else
#define rotate(n, t) ((uint64_t)corner_table_rotate(n, t))
#endif

int main(void)
{
    static const uint32_t tags[] = {0x60000, 0x10000, 0x50000, 0x20000, 0x30000, 0x40000, 0, 0x80000, 0xFFFFFFFF};
    static const uint32_t special[] = {0, 0x80000000, 0x3F800000, 0x7F800000, 0x7FC00000, 0xFF800000, 0x00000001, 0x3F800001};
    nc_map_image();
    nc_save(NC_ADDR(0x14500A5B0ULL), 0x100);
    for (int n = 0; n < nc_cases(5000); n++) {
        nc_seed((uint64_t)n);
        nc_restore();
        uint8_t *table = NC_ADDR(0x14500A5C0ULL);
        for (int k = 0; k < 48; k++) {
            uint32_t w = nc_chance(20) ? special[nc_rand_below(8)] : (uint32_t)nc_rand();
            memcpy(table + 4 * k, &w, 4);
        }
        int steps = (int)nc_rand_below(13) - 3;
        uint32_t tag = tags[nc_rand_below(9)];
        nc_set_mxcsr(0x1F80 | (((unsigned)n % 4) << 13));
        uint64_t result = rotate(steps, tag);
        nc_set_mxcsr(0x1F80);
        uint32_t words[64];
        memcpy(words, NC_ADDR(0x14500A5B0ULL), 0x100);
        for (int k = 0; k < 64; k++)
            if ((words[k] & 0x7FFFFFFF) > 0x7F800000) words[k] = 0x7FC00000;
        nc_line("n%d steps %d tag %08x -> %08x table %016llx", n, steps, tag, (uint32_t)result,
                (unsigned long long)nc_hash(words, sizeof words));
    }
    return 0;
}
