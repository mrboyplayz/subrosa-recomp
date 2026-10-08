/* One physics tick (0x140116210). See physics.h. */
#include "arith.h"
#include "physics.h"
#include "world.h"

/* Stages of the tick that are still recompiled code. Bond solving and bond
   expiry go through their recompiled names too (which forward to
   physics_solve and physics_expire_bonds), so every stage of the tick is
   reached the same way. */
extern void sub_14012B2D0(float *rotation, float *angular_momentum, float *angular_velocity,
                          float *inverse_inertia);
extern int64_t sub_1401069C0(void);          /* vehicle spatial bounds */
extern void sub_1400B95E0(void);             /* human spatial bounds */
extern uint64_t sub_1400C9D20(void);         /* item spatial bounds */
extern void sub_140037DE0(int32_t layer, int32_t x, uint32_t y, uint32_t z, uint16_t object);   /* world_grid_insert */
extern int64_t sub_1401154D0(void);          /* collision and contact preparation */
extern int64_t sub_140108930(void);
extern int64_t sub_1400BE010(void);          /* humans and their pose targets */
extern int64_t sub_1400CE370(void);
extern int64_t sub_1400CC610(void);
extern unsigned int *sub_14001D080(void);    /* physics_solve */
extern void sub_14007F970(int32_t item);     /* removes an item */
extern void sub_14010BE50(void);             /* broadphase and contacts */
extern void sub_140115830(void);
extern void sub_14001FB90(void);             /* physics_expire_bonds */

#define GRAVITY 0.0027222224f   /* per tick, along -y */

static void integrate_body_positions(void)
{
    for (int index = 0; index < PHYSICS_BODY_CAPACITY; index++) {
        PhysicsBody *body = &physics_bodies[index];
        float vy;

        if (!body->active || body->settled)
            continue;
        vy = body->velocity[1] - GRAVITY;
        body->velocity[1] = vy;
        body->position[0] = body->velocity[0] + body->position[0];
        body->position[1] = vy + body->position[1];
        body->position[2] = body->velocity[2] + body->position[2];
        sub_14012B2D0(body->rotation, body->angular_momentum, body->angular_velocity, body->inverse_inertia);
    }
}

/* Empties layer 0 of the spatial grid. */
static void clear_grid(void)
{
    world_grid_block_count = 0;
    for (int y = 0; y < world_grid_size_y(0); y++)
        for (int z = 0; z < world_grid_size_z(0); z++)
            for (int x = 0; x < world_grid_size_x(0); x++)
                world_grid_cells(0)[add_int(multiply_int(add_int(multiply_int(world_grid_size_z(0), y), z),
                                                         world_grid_size_x(0)), x)] = -1;
}

/* Enters items whose type occupies space into the voxel grid. */
static void place_items_in_voxels(void)
{
    for (int index = 0; index < WORLD_ITEM_CAPACITY; index++) {
        const WorldItem *item = &world_items[index];
        uint16_t object = (uint16_t)(index | 0x8000);

        if (!item->active || !world_item_types[item->type].occupies_space)
            continue;
        for (int y = item->voxel_min[1]; y <= item->voxel_max[1]; y++)
            for (int z = item->voxel_min[2]; z <= item->voxel_max[2]; z++)
                for (int x = item->voxel_min[0]; x <= item->voxel_max[0]; x++)
                    sub_140037DE0(0, x, (uint32_t)y, (uint32_t)z, object);
    }
}

static void expire_items(void)
{
    for (int index = 0; index < WORLD_ITEM_CAPACITY; index++) {
        WorldItem *item = &world_items[index];
        int ticks;

        if (!item->active)
            continue;
        ticks = item->lifetime;
        if (ticks < 0xFFFF)
            item->lifetime = --ticks;
        if (ticks <= 0)
            sub_14007F970(index);
    }
}

void physics_tick(void)
{
    for (int index = 0; index < WORLD_HUMAN_CAPACITY; index++)
        world_humans[index].unknown_6ddc = 0;
    integrate_body_positions();
    sub_1401069C0();
    sub_1400B95E0();
    sub_1400C9D20();
    clear_grid();
    world_grid_leaf_count = 0;
    place_items_in_voxels();
    sub_1401154D0();
    sub_140108930();
    sub_1400BE010();
    sub_1400CE370();
    sub_1400CC610();
    sub_14001D080();
    expire_items();
    sub_14010BE50();
    sub_140115830();
    sub_14001FB90();
}
