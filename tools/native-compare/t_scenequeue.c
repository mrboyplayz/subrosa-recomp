/* Appending to the scene queue: with room, the record is written (model
 * twice, textures, flags, position, rotation, six ones, four zeros) and the
 * count advances; when the count is 4,096 or more nothing changes. Counts
 * include negatives and values past the capacity. The inputs carry
 * signaling NaNs and signed zeros. The records around the slot and the
 * count are hashed. A negative count (which the original lets through its signed check and which no caller produces) is not driven. */
// NC_WRAPPERS: 140092140
#include <string.h>
#include "nc.h"
#include "scene_queue.h"

#ifdef NC_NATIVE
#define add(m, t, f, p, r) ((int64_t (*)(uint32_t, const uint32_t *, uint32_t, const float *, const float *))NC_ADDR(0x140092140))(m, t, f, p, r)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_140092140(unsigned, const unsigned *, unsigned, const unsigned *, const unsigned *);
#define add(m, t, f, p, r) sub_140092140(m, t, f, (const unsigned *)(p), (const unsigned *)(r))
#else
#define add scene_queue_add
#endif

int main(void)
{
    static const int32_t counts[] = {0, 1, 100, 4089, 4090, 4095, 4096, 4097, 0x7FFFFFFF, 5000};
    static const uint32_t bits[] = {0, 0x80000000, 0x7FA00000, 0xFFC00001, 0x3F800000};
    nc_map_image();
    nc_save(&scene_queue_count, 4);
    nc_save(scene_queue, sizeof(SceneEntry) * 6);
    nc_save(&scene_queue[4090], sizeof(SceneEntry) * 6);
    nc_save(&scene_queue[95], sizeof(SceneEntry) * 12);
    for (int n = 0; n < nc_cases(3000); n++) {
        nc_seed((uint64_t)n);
        nc_restore();
        int32_t count = counts[n % 10];
        scene_queue_count = count;
        uint32_t textures[4];
        float position[3], rotation[9];
        for (int k = 0; k < 4; k++)
            textures[k] = (uint32_t)nc_rand();
        for (int k = 0; k < 3; k++) {
            uint32_t w = nc_chance(25) ? bits[nc_rand_below(5)] : (uint32_t)nc_rand();
            memcpy(&position[k], &w, 4);
        }
        for (int k = 0; k < 9; k++) {
            uint32_t w = nc_chance(25) ? bits[nc_rand_below(5)] : (uint32_t)nc_rand();
            memcpy(&rotation[k], &w, 4);
        }
        /* Only counts that index inside the queue get a slot written. */
        int near = count >= 0 && count < 4090 ? (count == 100 ? 95 : count) : 4090;
        for (int i = 0; i < 6; i++) {
            uint8_t *p = (uint8_t *)&scene_queue[near + i];
            for (size_t b = 0; b < sizeof(SceneEntry); b++)
                p[b] = (uint8_t)nc_rand();
        }
        int64_t result = add((uint32_t)nc_rand(), textures, (uint32_t)nc_rand(), position, rotation);
        nc_line("n%d count %d -> %lld now %d slots %016llx", n, count, (long long)result, scene_queue_count,
                (unsigned long long)nc_hash(&scene_queue[near], sizeof(SceneEntry) * 6));
    }
    return 0;
}
