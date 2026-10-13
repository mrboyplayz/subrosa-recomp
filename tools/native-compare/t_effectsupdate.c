/* Moving world effects for a tick: 0x1401597F0. The level line test, the
 * EFFECT_3 spin and rand are recording stubs in both builds. */
#include <string.h>
#include "nc.h"
#include "collision.h"
#include "effect.h"

#ifdef NC_NATIVE
#define update_effects() ((void (*)(void))NC_ADDR(0x1401597F0))()
#else
#define update_effects world_update_effects
#endif

#define EFFECTS 64

int rand(void)
{
    int value = (int)nc_rand_below(32768);
    nc_line("rand %d", value);
    return value;
}

static int line_test(float *from, float *to, int unknown)
{
    nc_floats("line from", from, 3);
    nc_floats("line to", to, 3);
    nc_line("line flag %d", unknown);
    if (!nc_chance(35))
        return 0;
    CollisionHit *hit = &collision_hit;
    for (int k = 0; k < 3; k++)
        hit->point[k] = to[k] + nc_float_plain(-0.05f, 0.05f);
    switch (nc_rand_below(5)) {
    case 0: hit->normal[0] = 0; hit->normal[1] = 1; hit->normal[2] = 0; break;          /* floor */
    case 1: hit->normal[0] = 1; hit->normal[1] = 0; hit->normal[2] = 0; break;          /* wall */
    case 2: hit->normal[0] = 0; hit->normal[1] = -1; hit->normal[2] = 0; break;         /* ceiling */
    default:
        for (int k = 0; k < 3; k++)
            hit->normal[k] = nc_float(-1.0f, 1.0f);
    }
    return 1;
}

static void spin(float *frame, float *axis, float amount)
{
    nc_floats("spin frame", frame, 9);
    nc_floats("spin axis", axis, 3);
    nc_floats("spin amount", &amount, 1);
    for (int k = 0; k < 9; k++)
        frame[k] = nc_float(-1.0f, 1.0f);
}

int main(void)
{
    nc_map_image();
    nc_redirect(0x14023B1B0, (void *)rand);
    nc_redirect(0x1400DC050, (void *)line_test);
    nc_redirect(0x14012BD30, (void *)spin);
    nc_save(&blood_stains[EFFECT_MARK_VERTEX_CAPACITY - 8], sizeof(StainVertex) * 8);
    nc_save(&effect_marks[EFFECT_MARK_VERTEX_CAPACITY - 8], sizeof(MarkVertex) * 8);
    int cases = nc_cases(300);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        nc_restore();
        world_effect_count = EFFECTS;
        for (int i = 0; i < EFFECTS; i++) {
            Effect *e = &world_effects[i];
            float *f = &e->gravity;
            for (int k = 0; k < (int)((sizeof *e - 8) / 4); k++)
                f[k] = nc_float(-3.0f, 3.0f);
            e->type = (int)nc_rand_below(7);
            e->lifetime = nc_chance(50) ? 59399 + (int)nc_rand_below(4) : (int)nc_rand_below(60000);
            e->gravity = nc_float(0.0f, 0.01f);
            e->drag = nc_chance(15) ? nc_float(-0.5f, 0.0f) : nc_float(0.8f, 1.0f);
            e->size = nc_float(0.0f, 0.2f);
            e->spin = nc_chance(50) ? nc_float(0.0f, 0.01f) : 0.0f;
            for (int k = 0; k < 3; k++)
                e->rest_length[k] = nc_float(0.0f, 2.0f);
        }
        for (int k = 0; k < 9; k++)
            camera_axes[k] = nc_float(-1.0f, 1.0f);
        blood_stain_count = nc_chance(10) ? EFFECT_MARK_VERTEX_CAPACITY - (int)nc_rand_below(6) : (int)nc_rand_below(100);
        effect_mark_count = nc_chance(10) ? EFFECT_MARK_VERTEX_CAPACITY - (int)nc_rand_below(6) : (int)nc_rand_below(100);
        int stains = blood_stain_count, marks = effect_mark_count;

        nc_set_mxcsr(0x1F80);
        update_effects();
        nc_line("counts %d %d %d mxcsr %08x", world_effect_count, blood_stain_count, effect_mark_count, nc_get_mxcsr());
        for (int i = 0; i < EFFECTS; i++) {
            Effect *e = &world_effects[i];
            nc_line("effect %d type %d life %d", i, e->type, e->lifetime);
            nc_floats("  ", &e->gravity, (sizeof *e - 8) / 4);
        }
        for (int v = stains; v < blood_stain_count && v < EFFECT_MARK_VERTEX_CAPACITY + 4; v++)
            nc_floats("stain", blood_stains[v].position, 5);
        for (int v = marks; v < effect_mark_count && v < EFFECT_MARK_VERTEX_CAPACITY + 4; v++)
            nc_floats("mark", effect_marks[v].position, 6);
    }
    return 0;
}
