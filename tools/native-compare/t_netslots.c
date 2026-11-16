/* A peer's eight outgoing slots: picking one (the first free slot; with all
 * used, the walk over the ratios numerator / (denominator + 0.01) that starts
 * from the block's word before slot 0) and claiming it. Ratios include NaN,
 * infinities, zeros, ties and values at 65536. Three whole blocks around the
 * peer are hashed after every call. */
// NC_WRAPPERS: 1400A4620 140007490
#include <math.h>
#include <string.h>
#include "nc.h"
#include "net_slots.h"

#ifdef NC_NATIVE
#define pick(p, l) ((int32_t (*)(int32_t, float))NC_ADDR(0x1400A4620))(p, l)
#define claim(p, a, b, c, d, n, m) \
    ((uint32_t (*)(int32_t, uint32_t, uint32_t, uint32_t, uint32_t, float, float))NC_ADDR(0x140007490))(p, a, b, c, d, n, m)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_1400A4620(int, float);
long long sub_140007490(int, unsigned, unsigned, unsigned, unsigned, float, float);
#define pick(p, l) ((int32_t)sub_1400A4620(p, l))
#define claim(p, a, b, c, d, n, m) ((uint32_t)sub_140007490(p, a, b, c, d, n, m))
#else
#define pick net_slot_pick
#define claim net_slot_claim
#endif

#define BLOCK 0x2E1E0ULL

static float ratio_value(void)
{
    static const uint32_t special[] = {0, 0x80000000, 0x7F800000, 0xFF800000, 0x7FC00000, 0x47800000, 0x477FFFFF,
                                       0x47800001, 0x3F800000, 0xBC23D70A, 0xBC23D70B, 0x3C23D70A};
    if (nc_chance(30)) {
        uint32_t word = special[nc_rand_below(sizeof special / sizeof special[0])];
        float value;
        memcpy(&value, &word, 4);
        return value;
    }
    return nc_float(-100, 100000);
}

int main(void)
{
    static const int32_t peers[] = {0, 1, 2, 5};
    nc_map_image();
    nc_save(NC_ADDR(0x1A8E3DA20ULL), 6 * BLOCK);
    for (int n = 0; n < nc_cases(3000); n++) {
        nc_seed((uint64_t)n);
        nc_restore();
        int32_t peer = peers[n % 4];
        for (int k = -1; k < NET_SLOT_COUNT; k++) {
            NetSlot *slot = net_slot(peer, k);
            slot->numerator = ratio_value();
            slot->denominator = nc_chance(15) ? ratio_value() : nc_float(0, 50);
            if (k >= 0)
                slot->used = n % 3 == 0 ? (int32_t)nc_rand_below(2) : (nc_chance(8) ? 0 : (int32_t)(nc_rand() | 1));
        }
        /* The pre-slot's ratio exactly at, just below and just above 65536,
           with every slot used so that the ratio is consulted. */
        if (n % 7 == 0) {
            NetSlot *pre = net_slot(peer, -1);
            for (int k = 0; k < NET_SLOT_COUNT; k++)
                net_slot(peer, k)->used = 1;
            pre->denominator = nc_float(0, 3);
            float divisor = pre->denominator + 0.0099999998f;
            float chosen = divisor * 65536.0f;       /* chosen / divisor is exactly 65536 */
            if (n / 7 % 3 == 1)
                chosen = nextafterf(chosen, 0.0f);
            if (n / 7 % 3 == 2)
                chosen = nextafterf(chosen, 1e30f);
            pre->numerator = chosen;
        }
        /* equal ratios in neighbouring slots */
        if (n % 5 == 0) {
            *(uint64_t *)&net_slot(peer, 2)->numerator = *(uint64_t *)&net_slot(peer, 1)->numerator;
            net_slot(peer, 3)->numerator = net_slot(peer, 2)->numerator;
        }
        float limit = ratio_value();
        if (n % 2) {
            int32_t index = pick(peer, limit);
            nc_line("pick %d peer %d limit %08x -> %d  %016llx", n, peer, *(uint32_t *)&limit, index,
                    (unsigned long long)nc_hash(NC_ADDR(0x1A8E3DA20ULL), 6 * BLOCK));
        } else {
            float numerator = ratio_value(), denominator = nc_chance(10) ? 0.0f : ratio_value();
            uint32_t result = claim(peer, (uint32_t)nc_rand(), (uint32_t)nc_rand(), (uint32_t)nc_rand(),
                                    (uint32_t)nc_rand(), numerator, denominator);
            nc_line("claim %d peer %d -> %08x  %016llx", n, peer, result,
                    (unsigned long long)nc_hash(NC_ADDR(0x1A8E3DA20ULL), 6 * BLOCK));
        }
    }
    return 0;
}
