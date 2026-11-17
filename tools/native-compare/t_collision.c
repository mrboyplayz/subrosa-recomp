// NC_WRAPPERS: 14003DE80 140080070
#include <string.h>
#include "nc.h"
#include "collision.h"
#include "physics.h"
#include "item.h"
#include "world.h"

#ifdef NC_NATIVE
#define collision_sweep_world_native ((int (*)(const float *, const float *, float))NC_ADDR(0x14003DE80))()
#define collision_sweep_world_port collision_sweep_world
#elif defined(NC_CLIENT_WRAPPERS)
long long sr_collision_sweep_world(long long, long long, float);
#define collision_sweep_world_native sr_collision_sweep_world
#define collision_sweep_world_port collision_sweep_world
#else
#define collision_sweep_world_native collision_sweep_world
#define collision_sweep_world_port collision_sweep_world
#endif

static void save_state(void)
{
    nc_save(&dword_140404A6C[73006981], 4 * 8);  /* g_151A84880..g_151A8489C */
    nc_save(&dword_140404A6C[73007002], 4 * 6);  /* item_hit_layer..item_hit_block_part */
    nc_save(&world_unknown_151a84898, 4);
    nc_save(&physics_point_count, 4);
    nc_save(world_level_layers, 0x100D70 * 4);   /* 4 layers */
}

int main(void)
{
    nc_map_image();
    save_state();
    int cases = nc_cases(500);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        nc_restore();

        /* Test inputs: from/to vectors and radius. */
        float from[3], to[3], radius;
        for (int k = 0; k < 3; k++) {
            from[k] = nc_float(-1000.0f, 1000.0f);
            to[k] = nc_float(-1000.0f, 1000.0f);
        }
        radius = nc_float(0.0f, 10.0f);

        /* Edge cases: zero/negative/garbage. */
        if (nc_chance(10)) {
            from[0] = 0.0f; from[1] = -0.0f; from[2] = 0.0f;
            to[0] = 0.0f; to[1] = 0.0f; to[2] = 0.0f;
            radius = 0.0f;
        } else if (nc_chance(5)) {
            from[0] = 1.0f/0.0f; to[1] = -1.0f/0.0f; radius = 1.0f/0.0f;
        } else if (nc_chance(3)) {
            from[0] = 0.0f/0.0f; to[1] = 0.0f/0.0f; radius = 0.0f/0.0f;
        }

        int result_native = collision_sweep_world_native(from, to, radius);
        nc_restore();
        int result_port = collision_sweep_world_port(from, to, radius);

        nc_line("collision_sweep_world %d from %08x%08x%08x to %08x%08x%08x radius %08x native %d port %d",
                n,
                *(uint32_t*)&from[0], *(uint32_t*)&from[1], *(uint32_t*)&from[2],
                *(uint32_t*)&to[0], *(uint32_t*)&to[1], *(uint32_t*)&to[2],
                *(uint32_t*)&radius, result_native, result_port);
        nc_line("  hit %08x%08x%08x %08x%08x%08x %08x layer %d",
                dword_140404A6C[73006981], dword_140404A6C[73006982], dword_140404A6C[73006983],
                dword_140404A6C[73006984], dword_140404A6C[73006985], dword_140404A6C[73006986],
                dword_140404A6C[73006988], dword_140404A6C[73007002]);
    }
    return 0;
}
