// NC_WRAPPERS: 140012F30 140017C40
#include <string.h>
#include "nc.h"
#include "world_block_maintenance.h"

#ifdef NC_NATIVE
#define get ((uint64_t (*)(uint32_t,uint32_t,uint32_t,uint32_t))NC_ADDR(0x140012F30))
#define set ((uint64_t (*)(uint32_t,uint32_t,uint32_t,uint32_t,uint32_t))NC_ADDR(0x140017C40))
#elif defined(NC_CLIENT_WRAPPERS)
int64_t sub_140012F30(uint32_t,uint32_t,uint32_t,uint32_t);
int64_t sub_140017C40(uint32_t,uint32_t,uint32_t,uint32_t,uint32_t);
#define get sub_140012F30
#define set sub_140017C40
#else
#define get world_block_unknown_808_at
#define set world_set_block_unknown_808
#endif
static uint64_t lookup_result;
static uint64_t lookup(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    nc_line("lookup %08x %08x %08x %08x", layer, x, y, z);
    return lookup_result;
}
int main(void)
{
    static const uint32_t records[] = {0, 1, 1008, 4095};
    nc_map_image();
    nc_redirect(0x140013020, lookup);
    for (int n = 0; n < nc_cases(4096); ++n) {
        nc_seed(n);
        uint32_t record = records[(n / 512) % 4];
        WorldBlockRecord *r = &world_block_records[record];
        memset(r, 0xa5, sizeof(*r));
        for (unsigned i = 0; i < 512; ++i) r->unknown_808[i] = (uint32_t)nc_rand();
        uint32_t x = ((uint32_t)nc_rand() & ~7u) | (n & 7u);
        uint32_t y = ((uint32_t)nc_rand() & ~7u) | ((n >> 6) & 7u);
        uint32_t z = ((uint32_t)nc_rand() & ~7u) | ((n >> 3) & 7u);
        /* Exercise all 512 local positions, including high coordinate bits.
         * Missing lookup results also carry nonzero upper return bits. */
        lookup_result = (nc_rand() & 0xffffffff00000000ULL) | (n % 5 ? record : UINT32_MAX);
        uint32_t layer = (uint32_t)nc_rand(), value = (uint32_t)nc_rand();
        uint64_t before = nc_hash(r, sizeof(*r));
        uint64_t read = get(layer, x, y, z);
        uint64_t after_read = nc_hash(r, sizeof(*r));
        uint64_t written = set(layer, x, y, z, value);
        nc_line("voxel %d %016llx %016llx %016llx %016llx %016llx", n,
                (unsigned long long)read, (unsigned long long)written,
                (unsigned long long)before, (unsigned long long)after_read,
                (unsigned long long)nc_hash(r, sizeof(*r)));
    }
    return 0;
}
