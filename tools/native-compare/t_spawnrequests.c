/* Queuing a spawn: the first free record of 1,024 is cleared, claimed and
 * filled; with every record used nothing is written and -1 comes back. The
 * whole table is hashed after each call (a stray write shows) and the
 * position carries bit patterns that are not ordinary numbers. */
// NC_WRAPPERS: 14004DA50
#include <string.h>
#include "nc.h"
#include "spawn_requests.h"

#ifdef NC_NATIVE
#define add(k, p, a) ((int32_t (*)(int32_t, const float *, float))NC_ADDR(0x14004DA50))(k, p, a)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_14004DA50(unsigned, const float *, float);
#define add(k, p, a) ((int32_t)sub_14004DA50((unsigned)(k), p, a))
#else
#define add spawn_request_add
#endif

int main(void)
{
    static const uint32_t bits[] = {0, 0x80000000, 0x7F800000, 0x7FA00000, 0xFFC00001, 0x3F800000, 0x00000001};
    nc_map_image();
    nc_save(spawn_requests, sizeof(SpawnRequest) * SPAWN_REQUEST_COUNT);
    for (int n = 0; n < nc_cases(1500); n++) {
        nc_seed((uint64_t)n);
        nc_restore();
        for (int i = 0; i < SPAWN_REQUEST_COUNT; i++) {
            uint8_t *p = (uint8_t *)&spawn_requests[i];
            for (size_t k = 0; k < sizeof(SpawnRequest); k++)
                p[k] = (uint8_t)nc_rand();
            spawn_requests[i].used = 0;
        }
        int mode = n % 5;
        int first_free = mode == 0 ? 0 : mode == 1 ? 1023 : mode == 2 ? -1 : (int)nc_rand_below(1024);
        for (int i = 0; i < SPAWN_REQUEST_COUNT; i++)
            spawn_requests[i].used = (int32_t)(nc_rand() | 1);
        if (first_free >= 0)
            spawn_requests[first_free].used = 0;
        if (mode == 4 && first_free > 1)
            spawn_requests[first_free - 1].used = 0, first_free = first_free - 1;
        float position[3];
        for (int k = 0; k < 3; k++) {
            uint32_t word = nc_chance(25) ? bits[nc_rand_below(7)] : (uint32_t)nc_rand();
            memcpy(&position[k], &word, 4);
        }
        float angle = nc_float(-4, 4);
        int32_t kind = (int32_t)nc_rand();
        int32_t result = add(kind, position, angle);
        nc_line("n%d free %d result %d table %016llx", n, first_free, result,
                (unsigned long long)nc_hash(spawn_requests, sizeof(SpawnRequest) * SPAWN_REQUEST_COUNT));
    }
    return 0;
}
