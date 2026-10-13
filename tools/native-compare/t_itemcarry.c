/* Items carried on the body: 0x1401380F0. */
#include <string.h>
#include "nc.h"
#include "human.h"
#include "item.h"
#include "physics.h"

#ifdef NC_NATIVE
#define follow_body(i, h) ((void (*)(int, int))NC_ADDR(0x1401380F0))(i, h)
#else
#define follow_body item_follow_body
#endif

static void floats(float *f, int n, float range)
{
    for (int k = 0; k < n; k++)
        f[k] = nc_float(-range, range);
}

int main(void)
{
    nc_map_image();
    int cases = nc_cases(5000);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        int index = (int)nc_rand_below(WORLD_ITEM_CAPACITY);
        int human = (int)nc_rand_below(256);
        WorldItem *item = &world_items[index];
        WorldHuman *h = &world_humans[human];
        memset(item, 0, sizeof *item);
        item->slot = nc_chance(10) ? (int)nc_rand() : (int)nc_rand_below(10) - 2;
        item->body = (int)nc_rand_below(PHYSICS_BODY_CAPACITY);
        floats(item->position, 3, 50);
        floats(item->rotation, 9, 1);
        for (int b = 0; b < 3; b++) {
            floats(h->bones[b].position, 3, 50);
            floats(h->bones[b].velocity, 3, 10);
            floats(h->bones[b].rotation, 9, 1);
        }
        h->vehicle = nc_chance(30) ? (int)nc_rand_below(PHYSICS_VEHICLE_CAPACITY) : -1;
        if (h->vehicle != -1)
            floats(physics_vehicles[h->vehicle].position, 3, 50);
        PhysicsBody *body = &physics_bodies[item->body];
        memset(body, 0x5A, sizeof *body);

        nc_set_mxcsr(0x1F80);
        follow_body(index, human);
        nc_line("item %016llx body %016llx human %016llx mxcsr %08x",
                (unsigned long long)nc_hash(item, sizeof *item), (unsigned long long)nc_hash(body, sizeof *body),
                (unsigned long long)nc_hash(h, sizeof *h), nc_get_mxcsr());
        nc_floats("position", item->position, 3);
    }
    return 0;
}
