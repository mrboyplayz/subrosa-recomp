/* Point masses: their movement and lifetimes. See physics.h. */
#include <string.h>
#include "arith.h"
#include "physics.h"
#include "world.h"

void physics_integrate_points(void)
{
    int32_t count = physics_point_count;
    int32_t no_gravity = physics_points_no_gravity;

    for (int i = 0; i < count; i++) {
        PhysicsPoint *point = &physics_points[i];
        float vx, vy, vz;

        point->previous_position[0] = point->position[0];
        point->previous_position[1] = point->position[1];
        point->previous_position[2] = point->position[2];
        vx = point->velocity[0];
        vy = point->velocity[1];
        vz = point->velocity[2];
        point->position[0] = vx + point->position[0];
        point->position[1] = vy + point->position[1];
        point->position[2] = vz + point->position[2];
        point->previous_velocity[0] = vx;
        point->previous_velocity[1] = vy;
        point->previous_velocity[2] = vz;
        if (!no_gravity)
            point->velocity[1] = vy - point->gravity;
    }
}

/* Point `from` now sits at index `to`: renumber the bonds, vehicles and
   humans that refer to it. */
static void renumber_point(int from, int to)
{
    const PhysicsPoint *point = &physics_points[to];

    for (int i = 0; i < point->bond_count; i++) {
        PhysicsBond *bond = &physics_bonds[point->bonds[i]];
        /* The point list continues past the four declared entries. */
        int32_t *points = (int32_t *)(void *)((uint8_t *)bond + 0x18);
        for (int k = 0; k < bond->point_count; k++) {
            if (points[k] == from)
                points[k] = to;
        }
    }
    for (int i = 0; i < point->vehicle_count; i++) {
        int vehicle = point->vehicles[i];
        for (int k = 0; k < world_vehicle_point_count(vehicle); k++) {
            if (world_vehicle_points(vehicle)[k] == from)
                world_vehicle_points(vehicle)[k] = to;
        }
    }
    for (int h = 0; h < WORLD_HUMAN_CAPACITY; h++) {
        if (world_humans[h].active && world_humans[h].point == from)
            world_humans[h].point = to;
    }
}

void physics_expire_points(void)
{
    /* Kept in a local: the bond removals do not change it, and it is stored
       back at the end. */
    int32_t count = physics_point_count;
    int index = 0;

    if (count <= 0)
        return;
    for (;;) {
        PhysicsPoint *point = &physics_points[index];
        int32_t ticks = point->lifetime;

        if (ticks < 0x10000)
            point->lifetime = ticks = subtract_int(ticks, 1);
        if (ticks > 0) {
            index++;
        } else {
            if (index >= count)
                break;
            for (int i = point->bond_count - 1; i >= 0; i--)
                physics_remove_bond(point->bonds[i]);
            count--;
            if (index == count)
                break;
            memcpy(point, &physics_points[count], sizeof *point);
            renumber_point(count, index);
        }
        if (index >= count)
            break;
    }
    physics_point_count = count;
}
