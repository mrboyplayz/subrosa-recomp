/* Vehicles in the world. See world.h. */
#include "arith.h"
#include "physics.h"
#include "world.h"

/* Still recompiled code. */
extern int64_t sub_140016870(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);   /* block at a voxel; 0: none */
extern int64_t sub_1400169B0(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);   /* bit set: that part is gone */
/* Turns one part of a block into an item; its index, or -1. */
extern int64_t sub_1400CDBD0(uint32_t block, int32_t part, int32_t layer, int32_t x, int32_t y, int32_t z);

/* Makes loose items of the block parts in the voxels a vehicle occupies. */
static void break_blocks(const PhysicsVehicle *vehicle)
{
    for (int y = vehicle->voxel_min[1]; y <= vehicle->voxel_max[1]; y++) {
        for (int z = vehicle->voxel_min[2]; z <= vehicle->voxel_max[2]; z++) {
            for (int x = vehicle->voxel_min[0]; x <= vehicle->voxel_max[0]; x++) {
                uint32_t block = (uint32_t)sub_140016870(0, (uint32_t)x, (uint32_t)y, (uint32_t)z);
                uint32_t gone;

                if (!block)
                    continue;
                gone = (uint32_t)sub_1400169B0(0, (uint32_t)x, (uint32_t)y, (uint32_t)z);
                for (int part = 0; part < world_block_part_count(block & 0x3FF); part++) {
                    int32_t item;

                    /* Parts from the 33rd on share the bits of the first 32. */
                    if (gone >> (part & 31) & 1)
                        continue;
                    item = (int32_t)sub_1400CDBD0(block, part, 0, x, y, z);
                    if (item != -1) {
                        world_items[item].unknown_8 = 1;
                        world_items[item].physics_simulated = 1;
                    }
                }
            }
        }
    }
}

void world_update_vehicle_bounds(void)
{
    for (int index = 0; index < PHYSICS_VEHICLE_CAPACITY; index++) {
        PhysicsVehicle *vehicle = &physics_vehicles[index];
        const PhysicsBody *body;
        const float *offset, *points, *r;
        int32_t count;

        if (!vehicle->active)
            continue;

        for (int i = 0; i < 3; i++)
            vehicle->previous_position[i] = vehicle->position[i];
        for (int i = 0; i < 9; i++)
            vehicle->previous_rotation[i] = vehicle->rotation[i];

        /* The vehicle's origin lies at a fixed point of its body. */
        body = &physics_bodies[vehicle->body];
        offset = world_vehicle_type_origin(vehicle->type);
        r = body->rotation;
        vehicle->position[0] = ((r[0] * offset[0] + body->position[0]) + r[3] * offset[1]) + r[6] * offset[2];
        vehicle->position[1] = ((r[1] * offset[0] + body->position[1]) + r[4] * offset[1]) + r[7] * offset[2];
        vehicle->position[2] = ((r[2] * offset[0] + body->position[2]) + r[5] * offset[1]) + r[8] * offset[2];
        for (int i = 0; i < 9; i++)
            vehicle->rotation[i] = r[i];
        for (int i = 0; i < 3; i++)
            vehicle->velocity[i] = body->velocity[i];
        for (int i = 0; i < 3; i++)
            vehicle->angular_velocity[i] = body->angular_velocity[i];

        for (int i = 0; i < 3; i++) {
            vehicle->bounds_min[i] = 65536.0f;
            vehicle->bounds_max[i] = -65536.0f;
        }
        count = world_vehicle_type_bound_point_count(vehicle->type);
        points = world_vehicle_type_bound_points(vehicle->type);
        r = vehicle->rotation;
        for (int point = 0; point < count; point++) {
            const float *p = &points[point * 3];
            float world[3];

            world[0] = ((p[0] * r[0] + vehicle->position[0]) + p[1] * r[3]) + p[2] * r[6];
            world[1] = ((p[0] * r[1] + vehicle->position[1]) + p[1] * r[4]) + p[2] * r[7];
            world[2] = ((p[0] * r[2] + vehicle->position[2]) + p[1] * r[5]) + p[2] * r[8];
            /* A coordinate that is not a number leaves the minimum alone
               and becomes the maximum. */
            for (int i = 0; i < 3; i++) {
                if (vehicle->bounds_min[i] > world[i])
                    vehicle->bounds_min[i] = world[i];
                if (!(vehicle->bounds_max[i] >= world[i]))
                    vehicle->bounds_max[i] = world[i];
            }
        }

        /* Voxels are four units wide. */
        for (int i = 0; i < 3; i++) {
            vehicle->voxel_min[i] = truncate_float(vehicle->bounds_min[i] * 0.25f);
            vehicle->voxel_max[i] = truncate_float(vehicle->bounds_max[i] * 0.25f);
        }

        break_blocks(vehicle);
    }
}
