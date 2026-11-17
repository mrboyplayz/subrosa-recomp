/* The item-deck shuffle: 0x140115FF0. */
#include "nc.h"
#include "items.h"
#include "memory.h"

#ifdef NC_NATIVE
#define intel_deck_shuffle(slot) ((int64_t (*)(int))NC_ADDR(0x140115FF0))(slot)
#else
#define intel_deck_shuffle item_intel_deck_shuffle
#endif

/* The shuffled records: 0x1816DEB80..0x181FEEB80 (26 records, stride 1160). */
#define INTEL_BASE 0x1816DEB80ULL
#define INTEL_STRIDE 1160
#define INTEL_RECORDS 26

/* The harness's rand, which the native build points the original's rand at
   (0x14023B1B0) so both builds share one implementation. */
int rand(void);

int main(void)
{
    nc_map_image();
#ifdef NC_NATIVE
    /* The original shuffles with the C library's rand (msvcrt rand at
       0x14023B1B0); point that callee at the harness's rand so both builds
       share one implementation. */
    nc_redirect(0x14023B1B0, (void *)rand);
#endif
    int cases = nc_cases(1000);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        /* Over the whole stride, negative slots, and far out of range: the
           original reads whatever the signed scale lands on. */
        int slot = nc_chance(70) ? (int)nc_rand_below(INTEL_RECORDS)
                                 : (int)(nc_rand() % 0x8000u) - 0x4000;
        /* Garbage in the flags field (the original ignores it) and leftovers
           in every deck slot. */
        int32_t *record = &SR_GLOBAL(int32_t, INTEL_BASE + (int64_t)slot * INTEL_STRIDE);
        for (int i = 0; i < 64; i++)
            record[i] = (int32_t)nc_rand();
        nc_line("case %d slot %d", n, slot);
        int64_t ret = intel_deck_shuffle(slot);
        /* Every write lands inside the 284 dwords before the next record:
           the flags field (258) and the deck order (258..283), including the
           read the original leaks as its return value. */
        nc_line("  flags %d deck %016llx ret %d", SR_GLOBAL(int32_t, INTEL_BASE + (int64_t)slot * INTEL_STRIDE + 0x404),
                (unsigned long long)nc_hash(record + 0, 284 * sizeof(int32_t)), (int)ret);
    }
    return 0;
}
