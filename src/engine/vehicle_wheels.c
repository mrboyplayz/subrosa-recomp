/* A wheel against the ground. See vehicle.h. */
#include "vehicle.h"
#include "collision.h"
#include "world_streets.h"
#include "arith.h"

/* physics_add_world_contact, reached through the client's entry point so
   the comparison with the original can replace it with a recording stub. */
extern uintptr_t add_world_contact(int16_t body, const float offset[3], const float normal[3], float depth,
                                   float friction, float depth_scale, float stiffness) __asm__("sub_140005160");

/* collision_wheel_level and collision_wheel_triangles, reached the same way
   for the same reason. */
extern int wheel_level(const float centre[3], const float axle[3], float radius) __asm__("sub_14003DE80");
extern int wheel_triangles(CollisionWheelHit *hit, const StreetTriangleList *list, const float centre[3],
                           const float axle[3], float radius) __asm__("sub_14003D830");

#define WHEEL_FRICTION 1.2f
#define WHEEL_DEPTH_SCALE 0.03125f
#define WHEEL_STIFFNESS 0.125f

/* The street triangles (range 2: the road surface) in the box min..max, as
   world_street_triangles gathers them, but with this routine's own box
   test: a street is passed over when a side of the box is not a number on
   the low side of the street's box, and kept on the high side. */
static void road_triangles_near(StreetTriangleList *list, const float box_min[3], const float box_max[3])
{
    int found[64];
    int64_t found_count = 0;
    int first_column = truncate_float(box_min[0] * 0.015625f);
    int last_column = truncate_float(box_max[0] * 0.015625f);
    int first_row = truncate_float(box_min[2] * 0.015625f);
    int last_row = truncate_float(box_max[2] * 0.015625f);
    int total = 0;

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
                        /* The count is trusted: entries past the cell's
                           eight run on into the next cell. */
                        const int32_t *entry = (const int32_t *)(const void *)cell + 1;
                        int64_t count = cell->count;

                        for (int64_t j = 0; j < count; j++) {
                            if (found_count < 64) {
                                total++;
                                found[found_count++] = entry[j];
                            }
                        }
                    }
                    column++;
                } while (--columns);
            }
            row++;
        } while (--rows);
    }

    for (int i = 0; i < total; i++) {
        int street = found[i];
        const Street *s = &world_streets[street];

        if (box_max[0] >= s->bounds_min[0] && box_max[1] >= s->bounds_min[1] && box_max[2] >= s->bounds_min[2]
            && !(box_min[0] > s->bounds_max[0]) && !(box_min[1] > s->bounds_max[1]) && !(box_min[2] > s->bounds_max[2]))
            world_street_triangles_in_box(list, box_min, box_max, street, 2);
    }
}

void vehicle_collide_wheel(int vehicle, int wheel_index)
{
    /* The list a road query fills, and a count after it that the original
       clears as well. */
    struct {
        StreetTriangleList list;
        int32_t unused_count;
    } roads;
    VehicleWheel *wheel = &world_vehicle_wheels(vehicle)[wheel_index];
    int32_t body_index = wheel->body;
    PhysicsBody *body = &physics_bodies[body_index];
    float reach = wheel->radius + wheel->half_width;
    float box_min[3], box_max[3];

    roads.list.count = 0;
    roads.unused_count = 0;
    for (int k = 0; k < 3; k++) {
        box_max[k] = reach + body->position[k];
        box_min[k] = body->position[k] - reach;
    }
    road_triangles_near(&roads.list, box_min, box_max);

    /* The wheel is two discs of its radius, one at each end of its axle. */
    for (int side = 0; side < 2; side++) {
        const float *axle = &body->rotation[0];
        float along = side == 0 ? -wheel->half_width : wheel->half_width;
        float disc[3], offset[3];
        CollisionWheelHit hit;

        disc[0] = (along * axle[0]) + body->position[0];
        disc[1] = (along * axle[1]) + body->position[1];
        disc[2] = (along * axle[2]) + body->position[2];

        if (wheel_level(disc, axle, wheel->radius)) {
            float depth = wheel->radius - collision_hit.distance;

            offset[0] = collision_hit.point[0] - body->position[0];
            offset[1] = collision_hit.point[1] - body->position[1];
            offset[2] = collision_hit.point[2] - body->position[2];
            add_world_contact((int16_t)body_index, offset, collision_hit.normal, depth, WHEEL_FRICTION,
                                      WHEEL_DEPTH_SCALE, WHEEL_STIFFNESS);
        }
        if (wheel_triangles(&hit, &roads.list, disc, axle, wheel->radius)) {
            float depth = wheel->radius - hit.distance;

            offset[0] = hit.point[0] - body->position[0];
            offset[1] = hit.point[1] - body->position[1];
            offset[2] = hit.point[2] - body->position[2];
            add_world_contact((int16_t)body_index, offset, hit.normal, depth, WHEEL_FRICTION,
                                      WHEEL_DEPTH_SCALE, WHEEL_STIFFNESS);
        }
    }
    vehicle_contact_soft = 0;
}
