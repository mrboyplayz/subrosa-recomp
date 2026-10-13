/* The renderer's radix sort: 0x14007D710. */
#include "nc.h"
#include "renderer.h"

#ifdef NC_NATIVE
#define sort() ((void (*)(void))NC_ADDR(0x14007D710))()
#else
#define sort renderer_sort
#endif

int main(void)
{
    nc_map_image();
    int cases = nc_cases(300);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        int count = nc_chance(5) ? 0 : (int)nc_rand_below(nc_chance(10) ? 5000 : 200);
        /* Keys spread over all four bytes, or bunched so that many are equal. */
        uint32_t mask = nc_chance(50) ? 0xFFFFFFFFu : (uint32_t)nc_rand_below(0x40) << (8 * nc_rand_below(4));
        for (int i = 0; i < count; i++)
            renderer_sort_keys[i] = (uint32_t)nc_rand() & mask;
        renderer_sort_order[count] = 12345;
        renderer_sort_count = count;
        sort();
        nc_line("case %d count %d", n, count);
        nc_line("  order %016llx", (unsigned long long)nc_hash(renderer_sort_order, 4 * (size_t)count + 4));
        nc_line("  counts %016llx starts %016llx previous %016llx",
                (unsigned long long)nc_hash(&SR_GLOBAL(int32_t, 0x1A89C6BA4ULL), 1024),
                (unsigned long long)nc_hash(&SR_GLOBAL(int32_t, 0x1A89C6FA4ULL), 1024),
                (unsigned long long)nc_hash(&SR_GLOBAL(int32_t, 0x1A86C6BA4ULL), 4 * (size_t)count));
    }
    return 0;
}
