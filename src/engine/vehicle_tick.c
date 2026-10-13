/* The vehicle stage of a tick. See vehicle.h. */
#include "vehicle.h"
#include "collision.h"
#include "events.h"
#include "frame.h"
#include "world_streets.h"
#include "arith.h"
#include <math.h>
#include <string.h>

/* Routines reached through the client's entry points. They are engine code
   themselves (or about to be); they are called this way so the comparison
   with the original can replace them with recording stubs. */
extern void update_helicopter(int vehicle) __asm__("sub_14010AF90");
extern int sweep_level(float from[3], float to[3], int with_records) __asm__("sub_1400DC050");
extern int sweep_vehicle_hull(int vehicle, float from[3], float to[3]) __asm__("sub_1400E21F0");
extern void query_items(WorldGridItems *out, const int32_t minimum[3], const int32_t maximum[3]) __asm__("sub_140038230");
extern int mesh_contact(int body_a, int body_b, void *mesh_a, void *mesh_b, const float position_a[3],
                        const float rotation_a[9], const float position_b[3], const float rotation_b[9],
                        uint32_t flags) __asm__("sub_140048DA0");
extern int points_contact(int body_a, int body_b, void *points_a, void *points_b, const float position_a[3],
                          const float rotation_a[9], const float position_b[3], const float rotation_b[9])
    __asm__("sub_14004A7A0");
extern uintptr_t add_world_contact(int16_t body, const float offset[3], const float normal[3], float depth,
                                   float friction, float depth_scale, float stiffness) __asm__("sub_140005160");
extern long long add_contact(int body_a, int body_b, const float offset_a[3], const float offset_b[3],
                             const float normal[3], float depth, float friction, float depth_scale, float stiffness)
    __asm__("sub_1400052C0");
extern void write_block_layout(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value)
    __asm__("sub_140016E30");
extern int crt_rand(void) __asm__("rand");
/* The world's up direction, (0, 1, 0). 0x1402F6188 */
extern const float world_up[3] __asm__("dword_1402F6188");

int world_break_block_part(uint32_t layer, int32_t x, uint32_t y, uint32_t z, uint32_t layout, int32_t part,
                           const float position[3], const float velocity[3])
{
    if (layer > 3 || x < 0 || (layout & 0xE0000000u) != 0x80000000u || !(part & 0x10000))
        return 0;
    if (game_connected) {
        int32_t count = world_event_count;
        WorldEvent *event = &world_events[count];

        event->type = WORLD_EVENT_BLOCK_PART_BROKEN;
        event->tick = game_tick;
        event->a = (int32_t)(layer + ((uint32_t)x << 16));
        event->b = (int32_t)(y + (z << 16));
        event->c = (int32_t)layout;
        world_event_d(event) = part & 0xFFFF;
        for (int k = 0; k < 3; k++) {
            event->vector_a[k] = position ? position[k] : 0.0f;
            event->vector_b[k] = velocity ? velocity[k] : 0.0f;
        }
        world_event_count = (count + 1) & 0xFFFF;
    }
    write_block_layout(layer, (uint32_t)x, y, z, layout | (0x10000u << (part & 31)));
    return 1;
}

/* A crash sound at the vehicle, as loud as half the noise gathered. The
   pitch is drawn whether or not anyone is connected to hear it. */
static void crash_sound(const PhysicsVehicle *vehicle, float noise)
{
    float pitch = ((float)(crt_rand() & 0xFF) * 0.0009765625f) + 0.875f;

    event_sound(sound_vehicle_crash, vehicle->position, noise * 0.5f, pitch);
}

/* Pass 1: what the last tick's solve did to the vehicle. */
static void vehicle_feel_impact(int index)
{
    PhysicsVehicle *vehicle = &physics_vehicles[index];
    float dx = vehicle->last_velocity[0] - vehicle->velocity[0];
    float dy = vehicle->last_velocity[1] - vehicle->velocity[1];
    float dz = vehicle->last_velocity[2] - vehicle->velocity[2];
    float jolt, noise;

    memcpy(vehicle->last_velocity, vehicle->velocity, sizeof vehicle->last_velocity);
    jolt = sqrt_float(((dy * dy) + (dx * dx)) + (dz * dz));

    if (-32.0f > vehicle->position[1])
        world_vehicle_lifetime(index) = 0;
    if (vehicle->type == VEHICLE_TYPE_14)
        return;

    if (jolt > 0.11666667f) {
        vehicle_damage(index, truncate_float((jolt * 60.0f) + 10.0f));
    } else if (!(jolt > 0.033333335f)) {
        /* Calm again: what noise is left goes out at once. */
        noise = vehicle_crash_noise(index);
        if (noise > 0.5f)
            crash_sound(vehicle, noise);
        vehicle_crash_noise(index) = 0.0f;
        return;
    }
    noise = ((jolt * 60.0f) * 0.125f) + vehicle_crash_noise(index);
    vehicle_crash_noise(index) = noise;
    if (noise > 2.0f) {
        crash_sound(vehicle, noise);
        vehicle_crash_noise(index) = noise - 2.0f;
    }
}

/* One axis of the drag: against the part of the direction of travel that
   lies along `axis`, never more than an eighth of the speed. */
static float drag_along(const float direction[3], const float axis[3], float strength, float speed)
{
    float along = ((direction[1] * axis[1]) + (direction[0] * axis[0])) + (direction[2] * axis[2]);

    return min_float(max_float(strength * along, speed * -0.125f), speed * 0.125f);
}

/* Pass 1: drag on the vehicle's body, sideways, upward and forward. */
static void vehicle_drag(int index)
{
    PhysicsBody *body = &physics_bodies[physics_vehicles[index].body];
    const float *side = &body->rotation[0], *up = &body->rotation[3], *forward = &body->rotation[6];
    float vx = body->velocity[0], vy = body->velocity[1], vz = body->velocity[2];
    float flat = (vx * vx) + (vy * vy);
    float speed_squared = (vz * vz) + flat;
    float speed = sqrt_float(speed_squared);
    float twice = (((vz + vz) * vz) + flat) + flat;
    float direction[3] = {0.0f, 0.0f, 0.0f};
    int under_water;
    float push;

    if (!is_zero_or_nan_quiet(speed)) {
        float inverse = 1.0f / speed;

        direction[0] = inverse * vx;
        direction[1] = inverse * vy;
        direction[2] = inverse * vz;
    }

    under_water = world_water_level >= body->position[1];
    push = drag_along(direction, side, speed_squared * (under_water ? -0.3f : -0.0015f), speed);
    body->velocity[0] = (side[0] * push) + vx;
    body->velocity[1] = (push * side[1]) + vy;
    body->velocity[2] = (push * side[2]) + vz;

    push = drag_along(direction, up, under_water ? twice * -0.3f : (twice * -0.00075f) - (twice * 0.00075f), speed);
    body->velocity[0] = (up[0] * push) + body->velocity[0];
    body->velocity[1] = (push * up[1]) + body->velocity[1];
    body->velocity[2] = (push * up[2]) + body->velocity[2];

    push = drag_along(direction, forward, under_water ? speed_squared * -0.075f : twice * -0.0001875f, speed);
    body->velocity[0] = (forward[0] * push) + body->velocity[0];
    body->velocity[1] = (push * forward[1]) + body->velocity[1];
    body->velocity[2] = (push * forward[2]) + body->velocity[2];
}

static void train_event(int index, int32_t update)
{
    const PhysicsVehicle *vehicle = &physics_vehicles[index];
    WorldEvent *event;
    int32_t count;

    if (!game_connected)
        return;
    count = world_event_count;
    event = &world_events[count];
    event->type = WORLD_EVENT_UPDATE_VEHICLE;
    event->tick = game_tick;
    event->a = index;
    event->b = update;
    event->c = TRAIN_UNDER_WAY_PART;
    memcpy(event->vector_a, vehicle->position, sizeof event->vector_a);
    memcpy(event->vector_b, vehicle->velocity, sizeof event->vector_b);
    world_event_count = (count + 1) & 0xFFFF;
}

/* Pass 2, trains: the engine. */
static void train_drive(int index)
{
    PhysicsVehicle *vehicle = &physics_vehicles[index];
    const float *forward = &vehicle->rotation[6];
    float speed = ((vehicle->velocity[1] * forward[1]) + (vehicle->velocity[0] * forward[0]))
                  + (vehicle->velocity[2] * forward[2]);
    float wanted = 0.46666667f;
    int32_t street = vehicle_rail_street(index);
    int32_t *under_way = &vehicle_window_states(index)[TRAIN_UNDER_WAY_PART];
    const TrainStop *stop;
    PhysicsBody *body;
    float to_stop[3], push;
    int32_t stop_index;

    world_vehicle_drive(index)->engine_rpm = truncate_float(fabsf(speed) * 7200.0f);

    /* Slower where the track turns, here or on either side. */
    if (street != -1) {
        const Street *s = &world_streets[street];
        float straightness = min_float(min_float(world_streets[s->previous].straightness, s->straightness),
                                       world_streets[s->next].straightness);

        wanted = (straightness * 0.46666667f) * straightness;
    }

    if (speed > -0.033333335f) {
        if (!*under_way) {
            train_event(index, VEHICLE_UPDATE_PART_SET);
            *under_way = 1;
        }
    } else if (*under_way) {
        train_event(index, VEHICLE_UPDATE_PART_CLEARED);
        *under_way = 0;
    }

    /* Near its stop the train aims for the stop itself and, once still,
       waits there before going on to the next. */
    stop_index = vehicle_train_stop(index);
    stop = &world_train_stops[stop_index];
    to_stop[0] = stop->position[0] - vehicle->position[0];
    to_stop[1] = stop->position[1] - vehicle->position[1];
    to_stop[2] = stop->position[2] - vehicle->position[2];
    if (!((((to_stop[1] * to_stop[1]) + (to_stop[0] * to_stop[0])) + (to_stop[2] * to_stop[2])) >= 65536.0f)) {
        float past = (((vehicle->position[1] - stop->position[1]) * forward[1])
                      + ((vehicle->position[0] - stop->position[0]) * forward[0]))
                     + ((vehicle->position[2] - stop->position[2]) * forward[2]);

        if (!(past >= 16.0f))
            past = 0.0f;
        if (vehicle_train_reversed(index) == 1)
            past = -past;
        wanted = past * 0.0018229167f;
        if (!(speed >= 0.016666668f) && speed > -0.016666668f) {
            if (++vehicle_train_wait(index) >= TRAIN_STOP_TICKS) {
                int32_t next = add_int(stop_index, 1);

                vehicle_train_stop(index) = next >= world_train_stop_count ? 0 : next;
                vehicle_train_wait(index) = 0;
            }
        } else {
            vehicle_train_wait(index) = 0;
        }
    }

    body = &physics_bodies[vehicle->body];
    push = min_float(max_float((speed + wanted) * 8.0f, -0.875f), 0.75f) * -0.0011111111f;
    body->velocity[0] = (push * body->rotation[6]) + body->velocity[0];
    body->velocity[1] = (push * body->rotation[7]) + body->velocity[1];
    body->velocity[2] = (push * body->rotation[8]) + body->velocity[2];
}

/* Pass 2: a wheel. Where it hangs relative to its mount (for drawing), how
   much it skids, how far it has turned, then its contacts. */
static void vehicle_update_wheel(int index, int wheel_index, int car_body)
{
    VehicleWheel *wheel = &world_vehicle_wheels(index)[wheel_index];
    const PhysicsBody *car = &physics_bodies[car_body];
    const PhysicsBody *body = &physics_bodies[wheel->body];
    const float *side = &car->rotation[0], *up = &car->rotation[3], *forward = &car->rotation[6];
    float height = wheel->mount[1] + wheel->extension;
    float away[3], out, skid;

    away[0] = body->position[0]
              - (((wheel->mount[0] * side[0]) + (up[0] * height)) + ((wheel->mount[2] * forward[0]) + car->position[0]));
    away[1] = body->position[1]
              - (((up[1] * height) + (wheel->mount[0] * side[1])) + ((wheel->mount[2] * forward[1]) + car->position[1]));
    away[2] = body->position[2]
              - (((up[2] * height) + (wheel->mount[0] * side[2])) + ((wheel->mount[2] * forward[2]) + car->position[2]));
    out = max_float(((up[1] * away[1]) + (up[0] * away[0])) + (away[2] * up[2]), -1.0f);
    if (out > 1.0f)
        out = 1.0f;
    skid = body->friction_work;
    wheel->visual_height = out;
    wheel->skid = skid;
    if (!(skid >= 0.0f))
        wheel->skid = 0.0f;
    else if (skid > 1.0f)
        wheel->skid = 1.0f;
    wheel->turned = wheel->spin + wheel->turned;

    vehicle_collide_wheel(index, wheel_index);

    body = &physics_bodies[wheel->body];
    memcpy(wheel->point, body->position, sizeof wheel->point);
    memcpy(wheel->unknown_64, body->velocity, sizeof wheel->unknown_64);
}

/* A corner of the vehicle's hull in the world. */
static void hull_corner(float corner[3], const PhysicsVehicle *vehicle, const float vertex[3])
{
    const float *r = vehicle->rotation;
    float across = vertex[1] * r[3];
    float x = (vertex[0] * r[0]) + vehicle->position[0];
    float y = ((vertex[0] * r[1]) + vehicle->position[1]) + (vertex[1] * r[4]);
    float z = ((vertex[0] * r[2]) + vehicle->position[2]) + (vertex[1] * r[5]);

    corner[0] = ((vertex[2] * r[6]) + across) + x;
    corner[1] = (vertex[2] * r[7]) + y;
    corner[2] = (vertex[2] * r[8]) + z;
}

/* Pass 2: the hull's corners against the level. Each is reached for from
   the vehicle's middle; what is in the way pushes the body back, and a
   breakable block part there breaks off. */
static void vehicle_collide_level(int index, int car_body)
{
    PhysicsVehicle *vehicle = &physics_vehicles[index];
    int64_t type = vehicle->type;

    for (int i = 0; i < vehicle_hull_vertex_count(type); i++) {
        const float *vertex = vehicle_hull_vertices(type)[i];
        float corner[3], normal[3], offset[3], lifted[3];
        float depth;
        int broke = 0;

        hull_corner(corner, vehicle, vertex);
        if (!sweep_level(vehicle->position, corner, 0))
            continue;

        if (collision_hit_block_layer != -1 && collision_hit_block_voxel[0] != -1)
            broke = world_break_block_part((uint32_t)collision_hit_block_layer, collision_hit_block_voxel[0],
                                           (uint32_t)collision_hit_block_voxel[1],
                                           (uint32_t)collision_hit_block_voxel[2], collision_hit_block_layout,
                                           (int32_t)collision_hit_block_part, corner, vehicle->velocity);

        memcpy(normal, collision_hit.normal, sizeof normal);
        depth = ((normal[1] * (collision_hit.point[1] - corner[1])) + (normal[0] * (collision_hit.point[0] - corner[0])))
                + (normal[2] * (collision_hit.point[2] - corner[2]));
        if (collision_hit_object != -1)
            continue;

        /* A corner on the underside is tried again from a quarter unit above
           itself, to stand on what is right under it. */
        lifted[0] = (world_up[0] * 0.25f) + corner[0];
        lifted[1] = (world_up[1] * 0.25f) + corner[1];
        lifted[2] = (world_up[2] * 0.25f) + corner[2];
        if (0.0f > vertex[1] && sweep_level(lifted, corner, 0)) {
            memcpy(normal, collision_hit.normal, sizeof normal);
            depth = (((collision_hit.point[1] - corner[1]) * normal[1]) + ((collision_hit.point[0] - corner[0]) * normal[0]))
                    + ((collision_hit.point[2] - corner[2]) * normal[2]);
        }
        offset[0] = collision_hit.point[0] - physics_bodies[car_body].position[0];
        offset[1] = collision_hit.point[1] - physics_bodies[car_body].position[1];
        offset[2] = collision_hit.point[2] - physics_bodies[car_body].position[2];
        add_world_contact((int16_t)car_body, offset, normal, min_float(depth, 0.125f), 0.6f,
                          broke ? 0.001953125f : 0.015625f, broke ? 0.00390625f : 0.03125f);
    }
}

/* Pass 3: a swivelling part turns freely about the vehicle's up axis; its
   rotation bond is asked to bring the part's up axis to the body's. */
static void vehicle_swivel(int index)
{
    const PhysicsVehicle *vehicle = &physics_vehicles[index];
    const float *up = &physics_bodies[vehicle_swivel_body(index)].rotation[3];
    const float *car_up = &physics_bodies[vehicle->body].rotation[3];
    PhysicsConstraint *constraint = &physics_constraints[vehicle_swivel_bond(index)];

    constraint->bias[0] = ((up[1] * car_up[2]) - (up[2] * car_up[1])) * 0.0625f;
    constraint->bias[2] = ((up[0] * car_up[1]) - (car_up[0] * up[1])) * 0.0625f;
    constraint->bias[1] = ((car_up[0] * up[2]) - (up[0] * car_up[2])) * 0.0625f;
    constraint->has_free_axis = 1;
    memcpy(constraint->free_axis, &vehicle->rotation[3], sizeof constraint->free_axis);
}

/* Pass 4: the items in the vehicle's voxels whose boxes meet its own. */
static void vehicle_collide_items(int index)
{
    PhysicsVehicle *vehicle = &physics_vehicles[index];
    int32_t type = vehicle->type;
    WorldGridItems found;

    query_items(&found, vehicle->voxel_min, vehicle->voxel_max);
    for (int64_t i = 0; i < found.count; i++) {
        WorldItem *item = &world_items[found.entries[i].item];
        int touched;

        if (item->bounds_min[0] > vehicle->bounds_max[0] || !(item->bounds_max[0] >= vehicle->bounds_min[0])
            || item->bounds_min[2] > vehicle->bounds_max[2] || !(item->bounds_max[2] >= vehicle->bounds_min[2])
            || item->bounds_min[1] > vehicle->bounds_max[1] || !(item->bounds_max[1] >= vehicle->bounds_min[1]))
            continue;
        if (type == VEHICLE_TYPE_17 && item_type_has_mesh(item->type) == 1)
            touched = mesh_contact(vehicle->body, item->body, vehicle_type_17_mesh, item_type_mesh(item->type),
                                   vehicle->position, vehicle->rotation, item->position, item->rotation, 1);
        else
            touched = points_contact(vehicle->body, item->body, vehicle_type_item_points(type),
                                     item_type_points(item->type), vehicle->position, vehicle->rotation,
                                     item->position, item->rotation);
        if (touched) {
            item->physics_settled = 0;
            item->physics_settled_timer = 0;
        }
    }
}

/* Pass 5: the hull corners of one vehicle against another's hull. */
static void vehicle_collide_vehicle(int index, int other_index)
{
    PhysicsVehicle *vehicle = &physics_vehicles[index];
    const PhysicsVehicle *other = &physics_vehicles[other_index];
    int64_t type = vehicle->type;

    for (int i = 0; i < vehicle_hull_vertex_count(type); i++) {
        float corner[3], offset[3], other_offset[3];
        const PhysicsBody *body, *other_body;
        int32_t body_index, other_body_index;
        float depth;

        hull_corner(corner, vehicle, vehicle_hull_vertices(type)[i]);
        if (!sweep_vehicle_hull(other_index, vehicle->position, corner))
            continue;
        body_index = vehicle->body;
        other_body_index = other->body;
        body = &physics_bodies[body_index];
        other_body = &physics_bodies[other_body_index];
        for (int k = 0; k < 3; k++) {
            offset[k] = collision_hit.point[k] - body->position[k];
            other_offset[k] = collision_hit.point[k] - other_body->position[k];
        }
        depth = (((collision_hit.point[1] - corner[1]) * collision_hit.normal[1])
                 + ((collision_hit.point[0] - corner[0]) * collision_hit.normal[0]))
                + ((collision_hit.point[2] - corner[2]) * collision_hit.normal[2]);
        add_contact(body_index, other_body_index, offset, other_offset, collision_hit.normal,
                    min_float(depth, 0.125f), 0.4f, 0.015625f, 0.03125f);
    }
}

static int boxes_meet(const PhysicsVehicle *a, const PhysicsVehicle *b)
{
    for (int k = 0; k < 3; k++)
        if (b->bounds_min[k] > a->bounds_max[k])
            return 0;
    for (int k = 0; k < 3; k++)
        if (!(b->bounds_max[k] >= a->bounds_min[k]))
            return 0;
    return 1;
}

void vehicle_update_all(void)
{
    vehicle_stage_counter = 0;
    for (int index = 0; index < PHYSICS_VEHICLE_CAPACITY; index++) {
        if (!physics_vehicles[index].active)
            continue;
        vehicle_feel_impact(index);
        vehicle_drag(index);
    }

    for (int index = 0; index < PHYSICS_VEHICLE_CAPACITY; index++) {
        PhysicsVehicle *vehicle = &physics_vehicles[index];
        int32_t car_body;

        if (!vehicle->active)
            continue;
        car_body = vehicle->body;
        if (vehicle->control == VEHICLE_CONTROL_CAR)
            vehicle_update_car_controls(index);
        if (vehicle->control == VEHICLE_CONTROL_HELICOPTER)
            update_helicopter(index);
        if (vehicle->type == VEHICLE_TYPE_TRAIN) {
            vehicle_update_train(index);
            if (vehicle->type == VEHICLE_TYPE_TRAIN)
                train_drive(index);
        }
        for (int w = 0; w < world_vehicle_wheel_count(index); w++)
            vehicle_update_wheel(index, w, car_body);
        vehicle_collide_level(index, car_body);
    }

    for (int index = 0; index < PHYSICS_VEHICLE_CAPACITY; index++) {
        if (physics_vehicles[index].active && physics_vehicles[index].type == VEHICLE_TYPE_17
            && vehicle_swivel_count(index) > 0)
            vehicle_swivel(index);
    }

    vehicle_contact_soft = 1;
    for (int index = 0; index < PHYSICS_VEHICLE_CAPACITY; index++) {
        if (physics_vehicles[index].active)
            vehicle_collide_items(index);
    }
    vehicle_contact_soft = 0;

    for (int index = 0; index < PHYSICS_VEHICLE_CAPACITY; index++) {
        const PhysicsVehicle *vehicle = &physics_vehicles[index];

        if (!vehicle->active || vehicle->control == VEHICLE_CONTROL_NONE)
            continue;
        for (int other_index = 0; other_index < PHYSICS_VEHICLE_CAPACITY; other_index++) {
            const PhysicsVehicle *other = &physics_vehicles[other_index];

            if (other_index == index || !other->active || other->control == VEHICLE_CONTROL_NONE)
                continue;
            if (vehicle_joined_vehicle(index) == other_index || vehicle_joined_vehicle(other_index) == index)
                continue;
            if (!boxes_meet(vehicle, other))
                continue;
            if (vehicle->type == VEHICLE_TYPE_10 && other->type == VEHICLE_TYPE_11)
                continue;
            vehicle_collide_vehicle(index, other_index);
        }
    }
}
