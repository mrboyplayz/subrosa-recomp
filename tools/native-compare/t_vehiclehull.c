/* The vehicle hull lists: appending an edge unless it is present (in either
 * direction) and appending a face. The state of the whole record of the type
 * is hashed after every call, so a write outside the entry or into another
 * type shows. Only the effect on the state is compared: the original leaves
 * a pointer-like value in rax that both callers drop. */
// NC_WRAPPERS: 14010C850 14010C900
#include <string.h>
#include "nc.h"
#include "vehicle_hull.h"

#ifdef NC_NATIVE
#define add_edge(t, k, a, b) ((void (*)(int, uint32_t, uint32_t, uint32_t))NC_ADDR(0x14010C850))(t, k, a, b)
#define add_face(t, a, b, c, d, e, f, g) \
    ((void (*)(int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))NC_ADDR(0x14010C900))( \
        t, a, b, c, d, e, f, g)
#elif defined(NC_CLIENT_WRAPPERS)
void *sub_14010C850(int, unsigned, unsigned, unsigned);
long long sub_14010C900(int, unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, unsigned);
#define add_edge(t, k, a, b) sub_14010C850(t, k, a, b)
#define add_face(t, a, b, c, d, e, f, g) sub_14010C900(t, a, b, c, d, e, f, g)
#else
#define add_edge vehicle_hull_add_edge
#define add_face vehicle_hull_add_face
#endif

#define STRIDE 0x185C0

int main(void)
{
    static const int types[] = {0, 1, 2, 7};
    nc_map_image();
    for (int t = 0; t < 4; t++)
        nc_save(NC_ADDR(0x192E9A680ULL + (uint64_t)types[t] * STRIDE), 3 * STRIDE);
    for (int n = 0; n < nc_cases(2000); n++) {
        nc_seed((uint64_t)n);
        nc_restore();
        int type = types[n % 4];
        uint8_t *base = NC_ADDR(0x192E9A680ULL + (uint64_t)type * STRIDE);
        for (size_t i = 0; i < 3 * STRIDE; i += 4)
            *(uint32_t *)(base - 0 + i) = (uint32_t)nc_rand();
        vehicle_hull_edge_count(type) = (int32_t)nc_rand_below(n % 9 == 0 ? 250 : 6);
        vehicle_hull_face_count(type) = (int32_t)nc_rand_below(n % 11 == 0 ? 1400 : 5);
        for (int step = 0; step < 24; step++) {
            if (nc_chance(60)) {
                /* a small point range so duplicates and reversed pairs are common */
                uint32_t a = nc_rand_below(5), b = nc_chance(10) ? a : nc_rand_below(5);
                if (nc_chance(10)) a = (uint32_t)nc_rand();
                if (vehicle_hull_edge_count(type) >= 250) break;
                add_edge(type, (uint32_t)nc_rand(), a, b);
            } else {
                if (vehicle_hull_face_count(type) >= 1470) break;
                add_face(type, (uint32_t)nc_rand(), (uint32_t)nc_rand(), (uint32_t)nc_rand(),
                         (uint32_t)nc_rand(), (uint32_t)nc_rand(), (uint32_t)nc_rand(), (uint32_t)nc_rand());
            }
            nc_line("n%d s%d type %d edges %d faces %d region %016llx", n, step, type,
                    vehicle_hull_edge_count(type), vehicle_hull_face_count(type),
                    (unsigned long long)nc_hash(base - STRIDE * (type > 0 ? 1 : 0), 3 * STRIDE));
        }
    }
    return 0;
}
