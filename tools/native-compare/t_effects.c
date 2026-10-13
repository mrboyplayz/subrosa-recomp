/* Adding a world effect: 0x14005EE40. */
#include <string.h>
#include "nc.h"
#include "effect.h"

#ifdef NC_NATIVE
#define add_effect(t, p, v, s) ((uint32_t (*)(int, const float *, const float *, float))NC_ADDR(0x14005EE40))(t, p, v, s)
#else
#define add_effect world_add_effect
#endif

int main(void)
{
    nc_map_image();
    int cases = nc_cases(20000);
    for (int n = 0; n < cases; n++) {
        float position[3], velocity[3];
        nc_seed(n);
        int type = (int)nc_rand_below(7);
        int32_t count = nc_chance(3) ? EFFECT_CAPACITY - 1 + (int)nc_rand_below(2) : (int)nc_rand_below(64);
        world_effect_count = count;
        for (int k = 0; k < 3; k++) {
            position[k] = nc_float(-500.0f, 500.0f);
            velocity[k] = nc_float(-2.0f, 2.0f);
        }
        if (nc_chance(15)) {                       /* nearly vertical: the frame's axis switch */
            velocity[0] = nc_float_plain(-0.8f, 0.8f);
            velocity[2] = nc_float_plain(-0.8f, 0.8f);
            velocity[1] = nc_chance(50) ? 1.0f : -1.0f;
        }
        int no_velocity = type != 0 && nc_chance(20);
        if (count < EFFECT_CAPACITY)
            memset(&world_effects[count], 0xA5, sizeof(Effect));
        nc_set_mxcsr(0x1F80);
        uint32_t index = add_effect(type, position, no_velocity ? NULL : velocity, nc_float(0.0f, 0.2f));
        nc_line("index %08x count %d mxcsr %08x", index, world_effect_count, nc_get_mxcsr());
        if (count < EFFECT_CAPACITY) {
            Effect *e = &world_effects[count];
            nc_bytes("head", e, 8);
            nc_floats("floats", &e->gravity, (sizeof *e - 8) / 4);
        }
    }
    return 0;
}
