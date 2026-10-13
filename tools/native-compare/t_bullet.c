/* Firing a bullet: 0x14004E8A0. */
#include <string.h>
#include "nc.h"
#include "bullet.h"

#ifdef NC_NATIVE
#define fire(t, f, v, p) ((uint32_t (*)(int, const float *, const float *, int))NC_ADDR(0x14004E8A0))(t, f, v, p)
#else
#define fire world_fire_bullet
#endif

int main(void)
{
    nc_map_image();
    nc_save(&world_bullets[BULLET_CAPACITY - 4], sizeof(Bullet) * 4);
    int cases = nc_cases(20000);
    for (int n = 0; n < cases; n++) {
        float from[3], velocity[3];
        nc_seed(n);
        int32_t count = nc_chance(5) ? BULLET_CAPACITY - 2 + (int)nc_rand_below(4) : (int)nc_rand_below(64);
        world_bullet_count = count;
        world_bullets_fired = (int32_t)nc_rand();
        int type = (int)nc_rand_below(8);
        bullet_type_value(type) = nc_float(0.0f, 0.2f);
        for (int k = 0; k < 3; k++) {
            from[k] = nc_float(-100.0f, 100.0f);
            velocity[k] = nc_float(-30.0f, 30.0f);
        }
        if (nc_chance(10))
            velocity[0] = velocity[2] = nc_float(-0.5f, 0.5f);   /* nearly vertical */
        if (nc_chance(3))
            velocity[0] = velocity[1] = velocity[2] = 0.0f;
        if (count < BULLET_CAPACITY)
            memset(&world_bullets[count], 0xA5, sizeof(Bullet));
        nc_set_mxcsr(0x1F80);
        uint32_t index = fire(type, from, velocity, (int)nc_rand_below(40) - 1);
        nc_line("index %08x count %d fired %d mxcsr %08x", index, world_bullet_count, world_bullets_fired,
                nc_get_mxcsr());
        if (count < BULLET_CAPACITY) {
            Bullet *b = &world_bullets[count];
            nc_bytes("head", b, 12);
            nc_floats("floats", &b->unknown_c, (sizeof *b - 12) / 4);
        }
    }
    return 0;
}
