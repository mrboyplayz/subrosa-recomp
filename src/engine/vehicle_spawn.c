/* Making a vehicle. See vehicle.h. */
#include "vehicle.h"
#include "physics_create.h"
#include "frame.h"
#include <string.h>

#define TYPE_HELICOPTER 12
#define TYPE_15 15                           /* driven by its first two wheels */

/* The helicopter's rotor: a body 1.5 above the hull's, heavy about its own
   axis. */
#define ROTOR_MASS 160.0f
#define ROTOR_HEIGHT 1.5f
/* A train's bogies: bodies 6 ahead of and behind the car's, a little below. */
#define BOGIE_MASS 80000.0f
#define BOGIE_DISTANCE 6.0f

/* A point of the hull, `offset` in the vehicle's axes from `origin`. */
static void hull_point(float out[3], const float origin[3], const float rotation[9], const float offset[3])
{
    out[0] = (((offset[0] * rotation[0]) + origin[0]) + (offset[1] * rotation[3])) + (offset[2] * rotation[6]);
    out[1] = (((offset[0] * rotation[1]) + origin[1]) + (offset[1] * rotation[4])) + (offset[2] * rotation[7]);
    out[2] = (((offset[0] * rotation[2]) + origin[2]) + (offset[1] * rotation[5])) + (offset[2] * rotation[8]);
}

/* A body of the vehicle's own besides the hull, held to the hull at the
   point x, y, z (in the hull's axes) and kept at the hull's orientation by a
   rotation bond, which is returned. */
static int attach_body(int hull, int body, float x, float y, float z)
{
    const float on_hull[3] = {x, y, z}, on_body[3] = {0.0f, 0.0f, 0.0f};

    physics_create_point_bond(hull, body, on_hull, on_body);
    return physics_create_rotation_bond(hull, body);
}

int vehicle_create(int type, const float position[3], const float velocity[3], const float rotation[9], uint32_t color)
{
    PhysicsVehicle *vehicle;
    VehicleDrive *drive;
    const VehicleTypeWheel *type_wheels = vehicle_type_wheels(type);
    float hull[3];
    int index = 0;

    while (physics_vehicles[index].active) {
        if (++index >= PHYSICS_VEHICLE_CAPACITY)
            return -1;
    }
    vehicle = &physics_vehicles[index];
    drive = world_vehicle_drive(index);

    memset(&vehicle->type, 0, sizeof *vehicle - sizeof vehicle->active);
    vehicle->type = type;
    vehicle->active = 1;
    vehicle->health = 100;
    vehicle_unknown_5164(index) = -1;
    world_vehicle_lifetime(index) = 0xFFFF;
    vehicle_traffic_car(index) = -1;
    vehicle_last_driver(index) = -1;
    vehicle->unknown_24 = -1;
    vehicle_controls(index)->flags = VEHICLE_INPUT_HANDBRAKE;
    vehicle->control = vehicle_type_control(type);
    vehicle_color(index) = color;
    memcpy(vehicle->position, position, sizeof vehicle->position);
    memcpy(vehicle->previous_position, position, sizeof vehicle->previous_position);
    memcpy(vehicle->rotation, rotation, sizeof vehicle->rotation);
    memcpy(vehicle->previous_rotation, vehicle->rotation, sizeof vehicle->previous_rotation);
    if (velocity) {
        memcpy(vehicle->velocity, velocity, sizeof vehicle->velocity);
        memcpy(vehicle->last_velocity, velocity, sizeof vehicle->last_velocity);
    }

    drive->unknown_38b0 = 12.0f;
    drive->unknown_38b4 = 200.0f;
    drive->unknown_38b8 = 0.005f;
    drive->unknown_38a0 = vehicle_type_acceleration(type) * 213.0f;

    /* The hull's body sits at the type's body offset from the vehicle's
       place. */
    hull_point(hull, position, rotation, vehicle_type_body_offset(type));
    vehicle->body = physics_create_body(1, hull, rotation, velocity, vehicle_type_mass(type), vehicle_type_inertia(type));

    /* The type's seats-or-doors records (64 bytes each; what they are is
       not settled) come over with two fields moved and one set to 8. */
    vehicle_part_count(index) = vehicle_type_part_count(type);
    for (int i = 0; i < vehicle_type_part_count(type); i++) {
        int32_t *part = vehicle_parts(index)[i];
        const int32_t *from = vehicle_type_parts(type)[i];

        memcpy(part, from, 13 * sizeof(int32_t));
        part[15] = 8;
        part[13] = from[14];
        part[14] = from[15];
    }
    /* (The original also copies per-point data here, for as many points as
       the new vehicle has: none, since it has just been cleared.) */

    vehicle_steer_cot_offset(index) = vehicle_type_steer_cot_offset(type);
    vehicle_steer_cot_scale(index) = vehicle_type_steer_cot_scale(type);

    world_vehicle_wheel_count(index) = vehicle_type_wheel_count(type);
    for (int w = 0; w < vehicle_type_wheel_count(type); w++) {
        VehicleWheel *wheel = &world_vehicle_wheels(index)[w];
        const VehicleTypeWheel *from = &type_wheels[w];
        float radius = from->radius;
        float inertia[3], place[3];

        memcpy(wheel->mount, from->mount, sizeof wheel->mount);
        wheel->unknown_8 = from->unknown_0;
        wheel->unknown_c = from->unknown_40;
        memcpy(wheel->unknown_14, from->unknown_4, sizeof wheel->unknown_14);
        wheel->unknown_38 = from->unknown_1c;
        wheel->extension = from->extension;
        wheel->spring = from->spring;
        wheel->damping = from->damping;
        wheel->grip = from->grip;
        wheel->radius = radius;
        wheel->unknown_30 = from->mass;
        wheel->health = 8;
        wheel->half_width = 0.125f;

        inertia[0] = (radius * radius) * 0.5f;
        inertia[1] = ((radius * 0.25f) * radius) + 0.0052083335f;
        inertia[2] = ((radius * 0.25f) * radius) + 0.0052083335f;
        hull_point(place, hull, rotation, from->mount);
        memcpy(wheel->point, place, sizeof wheel->point);
        wheel->body = physics_create_body(2, place, rotation, velocity, from->mass, inertia);
    }

    if (type == TYPE_HELICOPTER) {
        const float inertia[3] = {4.0052085f, 8.0f, 4.0052085f};
        float place[3] = {(rotation[3] * ROTOR_HEIGHT) + hull[0], (rotation[4] * ROTOR_HEIGHT) + hull[1],
                          (rotation[5] * ROTOR_HEIGHT) + hull[2]};
        int rotor = physics_create_body(1, place, rotation, velocity, ROTOR_MASS, inertia);

        /* With no body left (-1) this lands in the state just before the
           bodies, as it does in the original. */
        PhysicsBody *rotor_body = (PhysicsBody *)((uint8_t *)physics_bodies + (int64_t)rotor * (int64_t)sizeof(PhysicsBody));

        vehicle_blade_body(index) = rotor;
        rotor_body->unknown_ac[0] = 4.0f;
        rotor_body->unknown_ac[1] = 0.125f;
        rotor_body->unknown_ac[2] = 4.0f;
        vehicle_blade_bond(index) = attach_body(vehicle->body, vehicle_blade_body(index), 0.0f, ROTOR_HEIGHT, 0.0f);
    } else if (type == VEHICLE_TYPE_TRAIN) {
        const float inertia[3] = {0.9375f, 1.5f, 0.9375f};
        VehicleBogie *bogies = vehicle_bogies(index);
        float place[3];

        place[0] = (hull[0] - rotation[3]) - (rotation[6] * BOGIE_DISTANCE);
        place[1] = (hull[1] - rotation[4]) - (rotation[7] * BOGIE_DISTANCE);
        place[2] = (hull[2] - rotation[5]) - (rotation[8] * BOGIE_DISTANCE);
        bogies[0].body = physics_create_body(1, place, rotation, velocity, BOGIE_MASS, inertia);
        bogies[0].bond = attach_body(vehicle->body, bogies[0].body, 0.0f, -1.0f, -BOGIE_DISTANCE);

        /* (The second sits a quarter lower than the first.) */
        place[0] = (hull[0] - (rotation[3] * 1.25f)) + (rotation[6] * BOGIE_DISTANCE);
        place[1] = (hull[1] - (rotation[4] * 1.25f)) + (rotation[7] * BOGIE_DISTANCE);
        place[2] = (hull[2] - (rotation[5] * 1.25f)) + (rotation[8] * BOGIE_DISTANCE);
        bogies[1].body = physics_create_body(1, place, rotation, velocity, BOGIE_MASS, inertia);
        bogies[1].bond = attach_body(vehicle->body, bogies[1].body, 0.0f, -1.0f, BOGIE_DISTANCE);
    }

    /* The engine drives the rear pair of wheels, on type 15 the front pair. */
    drive->driven_count = 2;
    drive->driven[0] = type == TYPE_15 ? 0 : 2;
    drive->driven[1] = type == TYPE_15 ? 1 : 3;

    vehicle_seat_count(index) = vehicle_type_seat_count(type);
    if (vehicle_type_seat_count(type) > 0)
        memcpy(vehicle_seats(index), vehicle_type_seats(type), 12 * (size_t)vehicle_type_seat_count(type));

    /* Joined to no other vehicle (and seven more fields after that one). */
    for (int i = 0; i < 8; i++)
        (&vehicle_joined_vehicle(index))[i] = -1;

    if (game_connected) {
        int32_t count = world_event_count;
        WorldEvent *event = &world_events[count];

        world_event_count = (count + 1) & 0xFFFF;
        event->type = WORLD_EVENT_VEHICLE_CREATED;
        event->tick = game_tick;
        event->a = index;
        event->b = vehicle->type;
        event->c = (int32_t)vehicle_color(index);
    }
    /* Every connection is to be sent the whole vehicle. */
    for (int c = 0; c < net_connection_count; c++)
        net_connection_vehicle_changes(c, index) = 0x10000;
    return index;
}
