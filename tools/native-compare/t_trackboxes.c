/* The race track's static terrain boxes: seven terrain_triangle_add calls
   with fixed constants and the five state floats around them, over varied
   starting record counts so the boxes land at different offsets. */
// NC_WRAPPERS: 140139560
#include <string.h>
#include "nc.h"
#include "terrain.h"

#ifdef NC_NATIVE
#define track_setup() ((long long (*)(void))NC_ADDR(0x140139560))()
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_140139560(void);
#define track_setup() sub_140139560()
#else
int64_t terrain_track_boxes_setup(void);
#define track_setup() terrain_track_boxes_setup()
#endif

/* The state floats, in the routine's write order. */
static const uint64_t float_addresses[] = {
    0x1A760C010ULL, 0x1A7602FA8ULL, 0x1A7602FACULL, 0x1A7602FA4ULL, 0x1A7600B98ULL
};

static void run_case(int n)
{
    nc_seed((uint64_t)n * 3 + 1);
    /* Varied starting record counts: the boxes land at different offsets,
       and every write lands short of the next layer's block. */
    for (int layer = 0; layer < 7; layer++) {
        terrain_vertex_records[layer * 2310] = (int32_t)nc_rand_below(90);
        terrain_triangle_records[layer * 2310] = (int32_t)nc_rand_below(45);
    }
    nc_set_mxcsr(0x1F80);
    long long result = track_setup();
    nc_line("n%d %016llx", n, (unsigned long long)result);
    for (int f = 0; f < 5; f++)
        nc_line("f%d %08x %08x", f,
                *(&SR_GLOBAL(uint32_t, float_addresses[f])),
                *(&SR_GLOBAL(uint32_t, float_addresses[f] + 4ULL)));
    for (int layer = 0; layer < 7; layer++)
        nc_line("r%d %016llx %016llx", layer,
                (unsigned long long)nc_hash((void *)(terrain_vertex_records + layer * 2310), 2310 * 4),
                (unsigned long long)nc_hash((void *)(terrain_triangle_records + layer * 2310), 2310 * 4));
}

int main(void)
{
    nc_map_image();
    for (int n = 0; n < nc_cases(1000); n++)
        run_case(n);
    return 0;
}
