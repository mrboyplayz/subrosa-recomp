/* A gun's tick: 0x1400CF670. The spread and bullet calls are stubs that
 * log their arguments (and the vectors passed) in both builds. */
#include <string.h>
#include "nc.h"
#include "bullet.h"
#include "frame.h"
#include "human.h"
#include "item.h"
#include "physics.h"

#ifdef NC_NATIVE
#define gun_tick(i) ((void (*)(int))NC_ADDR(0x1400CF670))(i)
#else
#define gun_tick item_gun_tick
#endif

static int spread_calls;

static void spread_stub(float *out, float spread, float unknown)
{
    if (spread_calls++ == 1)                  /* the buffer's contents on entry to the second call */
        nc_floats("spread in", out, 3);       /* (on the first, it is uninitialized stack) */
    nc_floats("spread args", &spread, 1);
    nc_floats("spread args", &unknown, 1);
    for (int k = 0; k < 3; k++)
        out[k] = nc_float(-0.5f, 0.5f) * spread;
}

static void bullet_stub(int bullet, float *from, float *velocity, int player)
{
    nc_line("bullet %d player %d", bullet, player);
    nc_floats("from", from, 3);
    nc_floats("velocity", velocity, 3);
}

int main(void)
{
    nc_map_image();
    nc_redirect(0x1400A56B0, (void *)spread_stub);
    nc_redirect(0x14004E8A0, (void *)bullet_stub);
    int cases = nc_cases(5000);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        int index = (int)nc_rand_below(1000);
        int magazine = 1000 + (int)nc_rand_below(24);
        WorldItem *item = &world_items[index];
        memset(item, 0, sizeof *item);
        static const int types[] = {5, 11, 2, 3, 5, 11, 7};
        item->type = types[nc_rand_below(7)];
        item->holder = nc_chance(85) ? (int)nc_rand_below(256) : -1;
        item->body = (int)nc_rand_below(PHYSICS_BODY_CAPACITY);
        item->child_count = nc_chance(60) ? 1 + (int)nc_rand_below(2) : (int)nc_rand_below(2) - 1;
        item->children[0] = magazine;
        item_charges(magazine) = (int)nc_rand_below(4) - 1;
        item_charges(index) = (int)nc_rand_below(4) - 1;
        int32_t timers[] = {-1, 0, 0, 0, 1, 2, 5};
        item_timer(index) = timers[nc_rand_below(7)];
        int32_t trigger[] = {0, 1, 2, 3, 5, 6, 7};
        item_trigger_ticks(index) = trigger[nc_rand_below(7)];
        item_input(index) = (uint32_t)nc_rand_below(4);
        item_mass(index) = nc_chance(3) ? nc_float(-1.0f, 1.0f) : nc_float_plain(0.5f, 8.0f);
        game_state = nc_chance(85) ? 2 : (uint32_t)nc_rand_below(4);
        game_connected = nc_chance(70);
        game_tick = (int32_t)nc_rand();
        world_event_count = (int)nc_rand_below(4);
        int32_t t = item->type;
        item_type_fire_delay(t) = (int)nc_rand_below(20);
        item_type_bullet(t) = (int)nc_rand_below(8);
        item_type_muzzle_speed(t) = nc_float(0.0f, 30.0f);
        item_type_spread(t) = nc_float(0.0f, 0.2f);
        bullet_type_value(item_type_bullet(t)) = nc_float(0.0f, 0.1f);
        if (item->holder != -1)
            world_humans[item->holder].player = (int)nc_rand_below(40) - 1;
        PhysicsBody *body = &physics_bodies[item->body];
        for (int k = 0; k < 3; k++) {
            body->position[k] = nc_float(-50.0f, 50.0f);
            body->velocity[k] = nc_float(-3.0f, 3.0f);
            body->angular_momentum[k] = nc_float(-1.0f, 1.0f);
        }
        for (int k = 0; k < 9; k++)
            body->rotation[k] = nc_float(-1.0f, 1.0f);

        if (nc_chance(40)) {                  /* ready to fire this tick */
            item_timer(index) = (int)nc_rand_below(2);
            item_input(index) |= 1;
            item_trigger_ticks(index) = (t == 5 ? 6 : 2) - 1;
            item_charges(index) = 1 + (int)nc_rand_below(2);
            if (item->holder == -1)
                item->holder = (int)nc_rand_below(256);
            game_state = 2;
        }
        spread_calls = 0;
        nc_set_mxcsr(0x1F80);
        gun_tick(index);
        /* The body's floats print with every NaN alike (the processor may pass
           either NaN operand on; see src/engine/README.md). */
        nc_floats("velocity", body->velocity, 3);
        nc_floats("angular momentum", body->angular_momentum, 3);
        nc_line("item %016llx magazine %d events %d %016llx mxcsr %08x",
                (unsigned long long)nc_hash(item, sizeof *item), item_charges(magazine), world_event_count,
                (unsigned long long)nc_hash(world_events, sizeof(WorldEvent) * 4), nc_get_mxcsr());
    }
    return 0;
}
