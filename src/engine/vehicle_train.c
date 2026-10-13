/* A train on its rails. See vehicle.h. */
#include "vehicle.h"
#include "collision.h"
#include "world_streets.h"
#include "arith.h"
#include "bullets.h"
#include "math3d.h"
#include <string.h>

/* physics_add_world_contact, reached through the client's entry point so
   the comparison with the original can replace it with a recording stub. */
extern uintptr_t add_world_contact(int16_t body, const float offset[3], const float normal[3], float depth,
                                   float friction, float depth_scale, float stiffness) __asm__("sub_140005160");

/* The original gathers street numbers into room for this many and does not
   check; here whatever would not fit is left out. */
#define NEAR_STREET_CAPACITY 64

/* Half the distance between a bogie's wheels across the track. */
#define BOGIE_HALF_GAUGE 1.4349999f

void world_street_range_triangles(StreetTriangleList *list, int street, int range)
{
    const Street *s = &world_streets[street];

    for (int t = s->range_first[range]; t < s->range_end[range]; t++) {
        StreetTriangle *out;

        if (list->count >= STREET_TRIANGLE_LIST_CAPACITY)
            continue;
        out = &list->triangle[list->count];
        for (int corner = 0; corner < 3; corner++)
            for (int k = 0; k < 3; k++)
                out->corner[corner][k] = s->vertex[s->triangle[t][corner]][k];
        for (int k = 0; k < 3; k++)
            out->normal[k] = s->triangle_normal[t][k];
        list->count++;
    }
}

/* Lets a bogie swivel under the car: its rotation bond leaves the car's up
   axis free and is asked to bring the two up axes together. */
static void swivel_bogie(const VehicleBogie *bogie, const float car_up[3], const float free_axis[3])
{
    const float *up = &physics_bodies[bogie->body].rotation[3];
    PhysicsConstraint *constraint = &physics_constraints[bogie->bond];

    constraint->bias[0] = ((up[1] * car_up[2]) - (up[2] * car_up[1])) * 0.0625f;
    constraint->bias[1] = ((car_up[0] * up[2]) - (up[0] * car_up[2])) * 0.0625f;
    constraint->bias[2] = ((up[0] * car_up[1]) - (car_up[0] * up[1])) * 0.0625f;
    constraint->has_free_axis = 1;
    memcpy(constraint->free_axis, free_axis, sizeof constraint->free_axis);
}

void vehicle_update_train(int index)
{
    PhysicsVehicle *vehicle = &physics_vehicles[index];
    VehicleBogie *bogies = vehicle_bogies(index);
    /* The four wheels of a bogie: across the track and along it. */
    static const float wheel_place[4][2] = {{0.0f, 0.0f}, {1.0f, 0.0f}, {1.0f, 1.0f}, {0.0f, 1.0f}};
    int found[NEAR_STREET_CAPACITY];
    int found_count = 0;
    struct {
        StreetTriangleList list;
        int32_t unused_count;
    } rails;
    float free_axis[3], car_up[3];
    int first_column, last_column, first_row, last_row;

    memcpy(free_axis, &vehicle->rotation[3], sizeof free_axis);
    memcpy(car_up, &physics_bodies[vehicle->body].rotation[3], sizeof car_up);
    swivel_bogie(&bogies[0], car_up, free_axis);
    swivel_bogie(&bogies[1], car_up, free_axis);

    /* The streets filed in the cells the train's box covers. */
    first_column = truncate_float(vehicle->bounds_min[0] * 0.015625f);
    last_column = truncate_float(vehicle->bounds_max[0] * 0.015625f);
    first_row = truncate_float(vehicle->bounds_min[2] * 0.015625f);
    last_row = truncate_float(vehicle->bounds_max[2] * 0.015625f);
    if (first_row <= last_row) {
        int64_t row = first_row;
        uint64_t rows = (uint32_t)((uint32_t)last_row - (uint32_t)first_row + 1u);

        do {
            if ((uint64_t)row < STREET_CELLS_ACROSS && first_column <= last_column) {
                int64_t column = first_column;
                uint64_t columns = (uint32_t)((uint32_t)last_column - (uint32_t)first_column + 1u);

                do {
                    if ((uint64_t)column < STREET_CELLS_ACROSS) {
                        const StreetCell *cell = &world_street_cells[row * STREET_CELLS_ACROSS + column];

                        for (int j = 0; j < cell->count; j++)
                            if (found_count < NEAR_STREET_CAPACITY)
                                found[found_count++] = cell->street[j];
                    }
                    column++;
                } while (--columns);
            }
            row++;
        } while (--rows);
    }

    for (int i = 0; i < found_count; i++) {
        int street = found[i];
        const Street *s = &world_streets[street];

        if (s->kind != STREET_RAILWAY)
            continue;
        if (s->bounds_min[0] > vehicle->bounds_max[0] || s->bounds_min[2] > vehicle->bounds_max[2]
            || !(s->bounds_max[0] >= vehicle->bounds_min[0]) || !(s->bounds_max[2] >= vehicle->bounds_min[2]))
            continue;

        rails.list.count = 0;
        rails.unused_count = 0;
        world_street_range_triangles(&rails.list, street, 0);
        world_street_range_triangles(&rails.list, street, 1);

        /* Each wheel of each bogie reaches half a unit below its place; where
           the reach passes through the rails the bogie is held up. */
        for (int b = 0; b < 2; b++) {
            int32_t body_index = bogies[b].body;
            PhysicsBody *body = &physics_bodies[body_index];
            const float *across = &body->rotation[0], *up = &body->rotation[3], *along = &body->rotation[6];

            for (int w = 0; w < 4; w++) {
                float side = (wheel_place[w][0] - 0.5f) * BOGIE_HALF_GAUGE;
                float ahead = ((wheel_place[w][1] - 0.5f) + wheel_place[w][1]) - 0.5f;
                float below[3], offset[3];
                float hit[7];

                below[0] = (((side * across[0]) + body->position[0]) + (ahead * along[0])) - (up[0] * 0.5f);
                below[1] = (((side * across[1]) + body->position[1]) + (ahead * along[1])) - (up[1] * 0.5f);
                below[2] = (((side * across[2]) + body->position[2]) + (ahead * along[2])) - (up[2] * 0.5f);
                if (collision_segment_triangles(hit, &rails.list, body->position, below)) {
                    const float *normal = &hit[3];
                    float depth;

                    offset[0] = below[0] - body->position[0];
                    offset[1] = below[1] - body->position[1];
                    offset[2] = below[2] - body->position[2];
                    depth = (((hit[0] - below[0]) * normal[0]) + ((hit[1] - below[1]) * normal[1]))
                            + ((hit[2] - below[2]) * normal[2]);
                    add_world_contact((int16_t)body_index, offset, normal, depth, 0.0f, 0.125f, 0.125f);
                    vehicle_rail_street(index) = street;
                }
                vehicle_contact_soft = 0;
            }
        }
    }
}

/* Through the client's entry point (vehicle_create), so that a test can put
   its own in its place. */
extern long long sr_CreateVehicle(int type, float *position, unsigned int *velocity, unsigned int *rotation,
                                  unsigned int color);

void vehicle_spawn_trains(void)
{
    for (int32_t stop = 0; stop < world_train_stop_count; stop++) {
        const TrainStop *at = &world_train_stops[stop];
        float position[3];
        float rotation[9] = { 1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f };
        int vehicle;

        const float up[3] = { world_y_axis_x, world_y_axis_y, world_y_axis_z };

        position[0] = at->position[0];
        position[2] = at->position[2];
        position[1] = at->position[1] + 2.0f;
        math_mat3_rotate_rows(rotation, up, at->angle);
        vehicle = (int)sr_CreateVehicle(VEHICLE_TYPE_TRAIN, position, 0, (unsigned int *)(void *)rotation, 1);
        vehicle_train_stop(vehicle) = stop;
    }
}
