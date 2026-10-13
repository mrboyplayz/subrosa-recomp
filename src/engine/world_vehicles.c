/* Vehicles in the world. See world.h. */
#include <math.h>
#include "arith.h"
#include "physics.h"
#include "frame.h"
#include "math3d.h"
#include "world.h"

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

        world_break_blocks(vehicle->voxel_min, vehicle->voxel_max);
    }
}

void world_expire_vehicles(void)
{
    /* Read once, before any vehicle is removed. */
    int32_t unknown_count = world_unknown_15fd16260_count;
    int32_t connected = game_connected;
    int32_t tick = game_tick;

    for (int index = 0; index < PHYSICS_VEHICLE_CAPACITY; index++) {
        PhysicsVehicle *vehicle = &physics_vehicles[index];
        int32_t ticks;

        if (!vehicle->active)
            continue;
        ticks = world_vehicle_lifetime(index);
        if (ticks < 0xFFFF)
            world_vehicle_lifetime(index) = ticks = subtract_int(ticks, 1);
        if (ticks > 0)
            continue;

        for (int i = 0; i < world_vehicle_point_count(index); i++)
            physics_points[world_vehicle_points(index)[i]].lifetime = 0;
        for (int h = 0; h < WORLD_HUMAN_CAPACITY; h++) {
            if (world_humans[h].active && world_humans[h].vehicle == index)
                world_humans[h].vehicle = -1;
        }
        for (int i = 0; i < unknown_count; i++) {
            if (world_unknown_15fd16260_vehicle(i) == index)
                world_unknown_15fd16260_vehicle(i) = -1;
        }

        vehicle->active = 0;
        for (int w = 0; w < world_vehicle_wheel_count(index); w++) {
            uint32_t body = (uint32_t)world_vehicle_wheel_body(index, w);
            if (body < PHYSICS_BODY_CAPACITY)
                physics_bodies[body].active = 0;
        }
        if ((uint32_t)vehicle->body < PHYSICS_BODY_CAPACITY)
            physics_bodies[vehicle->body].active = 0;

        for (int i = 0; i < WORLD_ITEM_CAPACITY; i++) {
            WorldItem *item = &world_items[i];
            if (item->active && item->type == WORLD_ITEM_TYPE_27 && world_item_vehicle(i) == index) {
                item->lifetime = 0;
                world_item_vehicle(i) = -1;
            }
        }

        if (connected) {
            int32_t count = world_event_count;
            WorldEvent *event = &world_events[count];

            event->type = WORLD_EVENT_VEHICLE_REMOVED;
            event->tick = tick;
            event->a = index;
            event->b = 3;
            event->c = 0;
            event->vector_a[0] = vehicle->position[0];
            event->vector_a[1] = vehicle->position[1];
            event->vector_a[2] = vehicle->position[2];
            world_event_count = (count + 1) & 0xFFFF;
            event->vector_b[0] = 0.0f;
            event->vector_b[1] = 0.0f;
            event->vector_b[2] = 0.0f;
        }
    }
}

void world_solve_vehicle_wheels(void)
{
    for (int index = 0; index < PHYSICS_VEHICLE_CAPACITY; index++) {
        PhysicsVehicle *vehicle = &physics_vehicles[index];
        VehicleWheel *wheels = world_vehicle_wheels(index);
        PhysicsBody *car;
        const float *up;
        int32_t count;

        if (!vehicle->active || vehicle->type == WORLD_VEHICLE_TYPE_12 || world_vehicle_wheel_count(index) <= 0)
            continue;
        world_vehicle_unknown_3894(index) = 0;
        for (int w = 0; w < world_vehicle_wheel_count(index); w++) {
            wheels[w].unknown_3c = 0.0f;
            wheels[w].unknown_58[0] = wheels[w].unknown_64[0];
            wheels[w].unknown_58[1] = wheels[w].unknown_64[1];
            wheels[w].unknown_58[2] = wheels[w].unknown_64[2];
        }
        count = world_vehicle_wheel_count(index);
        if (count <= 0)
            continue;

        car = &physics_bodies[vehicle->body];
        up = &car->rotation[3];
        for (int w = 0; w < count; w++) {
            VehicleWheel *wheel = &wheels[w];
            PhysicsBody *body = &physics_bodies[wheel->body];
            float car_mass = car->mass, wheel_mass, inverse, share_wheel, share_car;
            float car_wy = car->angular_velocity[1], car_wx, car_wz;
            float up_y = up[1], up_z = up[2];
            float mz = wheel->mount[2], my = wheel->extension + wheel->mount[1], mx = wheel->mount[0];
            float px, py, pz, rx, ry, rz, spring, damping, sx, sy, sz, dx, dy, dz, along, ix, iy, iz, grip, push;
            float axle[3];

            wheel_mass = body->mass;
            car_wz = car->angular_velocity[2];
            /* The mount point, relative to the car's centre, in world axes. */
            px = ((up[0] * my) + (mx * car->rotation[0])) + (mz * car->rotation[6]);
            py = ((mx * car->rotation[1]) + (up_y * my)) + (mz * car->rotation[7]);
            pz = ((mx * car->rotation[2]) + (up_z * my)) + (mz * car->rotation[8]);
            spring = wheel->spring;
            damping = wheel->damping;
            sx = ((car->position[0] + px) - body->position[0]) * spring;
            rx = body->position[0] - car->position[0];
            sy = ((car->position[1] + py) - body->position[1]) * spring;
            sz = ((car->position[2] + pz) - body->position[2]) * spring;
            rz = body->position[2] - car->position[2];
            ry = body->position[1] - car->position[1];
            car_wx = car->angular_velocity[0];
            /* Damping of the relative velocity of the mount point and the wheel. */
            dx = (((car_wz * py) - (car_wy * pz)) + car->velocity[0]) * damping + (-damping * body->velocity[0]);
            dz = (((car_wy * px) - (car_wx * py)) + car->velocity[2]) * damping + (-damping * body->velocity[2]);
            dy = (((car_wx * pz) - (car_wz * px)) + car->velocity[1]) * damping + (-damping * body->velocity[1]);

            /* Without the part along the up axis. */
            along = -(((up_y * (sy + dy)) + (up[0] * (dx + sx))) + (up_z * (sz + dz)));
            iz = (up_z * along) + (sz + dz);
            inverse = 1.0f / (car_mass + wheel_mass);
            ix = (up[0] * along) + (dx + sx);
            iy = (up_y * along) + (sy + dy);
            share_wheel = car_mass * inverse;
            share_car = -(inverse * wheel_mass);
            body->velocity_change[0] = (share_wheel * ix) + body->velocity_change[0];
            body->velocity_change[1] = (share_wheel * iy) + body->velocity_change[1];
            body->velocity_change[2] = (iz * share_wheel) + body->velocity_change[2];
            car->velocity_change[0] = (ix * share_car) + car->velocity_change[0];
            car->velocity_change[1] = (iy * share_car) + car->velocity_change[1];
            car->velocity_change[2] = (iz * share_car) + car->velocity_change[2];
            car->angular_velocity_change[0] = (((rz * iy) - (ry * iz)) * share_car) + car->angular_velocity_change[0];
            grip = wheel->grip;
            car->angular_velocity_change[1] = (((rx * iz) - (ix * rz)) * share_car) + car->angular_velocity_change[1];
            car->angular_velocity_change[2] = (((ix * ry) - (iy * rx)) * share_car) + car->angular_velocity_change[2];

            /* The grip: the spring and damping again, along the up axis only. */
            {
                float up_z2 = up[2], up_y2 = up[1];
                push = (((((grip * 0.375f) * dy) + (sy * (grip * 0.09375f))) * up_y2)
                        + ((((dx * (grip * 0.375f)) + (sx * (grip * 0.09375f)))) * up[0]))
                       + ((((grip * 0.375f) * dz) + (sz * (grip * 0.09375f))) * up_z2);
                iz = up_z2 * push;
                ix = up[0] * push;
                iy = up_y2 * push;
            }
            body->velocity_change[0] = (share_wheel * ix) + body->velocity_change[0];
            body->velocity_change[1] = (share_wheel * iy) + body->velocity_change[1];
            body->velocity_change[2] = (share_wheel * iz) + body->velocity_change[2];
            car->velocity_change[0] = (share_car * ix) + car->velocity_change[0];
            car->velocity_change[1] = (share_car * iy) + car->velocity_change[1];
            car->velocity_change[2] = (iz * share_car) + car->velocity_change[2];
            car->angular_velocity_change[0] = (((rz * iy) - (iz * ry)) * share_car) + car->angular_velocity_change[0];
            car->angular_velocity_change[1] = (((iz * rx) - (rz * ix)) * share_car) + car->angular_velocity_change[1];
            car->angular_velocity_change[2] = (((ry * ix) - (rx * iy)) * share_car) + car->angular_velocity_change[2];

            /* The wheel turns about the axle only. */
            axle[0] = car->rotation[0];
            axle[1] = car->rotation[1];
            axle[2] = car->rotation[2];
            if (w < 2)
                math_vec3_rotate(axle, up, wheel->steer);
            {
                float wx = car->angular_velocity[0] - body->angular_velocity[0];
                float wy = car->angular_velocity[1] - body->angular_velocity[1];
                float r2 = body->rotation[2], r1 = body->rotation[1], r0 = body->rotation[0];
                float wz = car->angular_velocity[2] - body->angular_velocity[2];
                float gain = body->unknown_9c;
                float off = -(((axle[1] * wy) + (axle[0] * wx)) + (axle[2] * wz));
                float tx = ((((axle[1] * r2) - (axle[2] * r1)) * 0.25f) + (((axle[0] * off) + wx) * 0.5f)) * gain;
                float ty = ((((axle[2] * r0) - (axle[0] * r2)) * 0.25f) + (((axle[1] * off) + wy) * 0.5f)) * gain;
                float tz = ((((axle[0] * r1) - (axle[1] * r0)) * 0.25f) + (((axle[2] * off) + wz) * 0.5f)) * gain;

                body->angular_velocity_change[0] = (tx * share_wheel) + body->angular_velocity_change[0];
                body->angular_velocity_change[1] = (ty * share_wheel) + body->angular_velocity_change[1];
                body->angular_velocity_change[2] = (tz * share_wheel) + body->angular_velocity_change[2];
                car->angular_velocity_change[0] = (tx * share_car) + car->angular_velocity_change[0];
                car->angular_velocity_change[1] = (ty * share_car) + car->angular_velocity_change[1];
                car->angular_velocity_change[2] = (tz * share_car) + car->angular_velocity_change[2];
            }
        }
    }
}

/* How much a wheel's spin is braked this tick: front wheels (0 and 1) by
   1/120 of the brake, but not at all above a full brake; others by 1/60. */
static float wheel_brake(float brake, int wheel)
{
    if (wheel >= 2)
        return brake * 0.016666668f;
    if (brake > 1.0f)
        return 0.0f;
    return brake * 0.0083333338f;
}

/* The car's x axis, turned by the wheel's steer for wheels 0 and 1. */
static void wheel_axle(float axle[3], const PhysicsVehicle *vehicle, int wheel, float steer)
{
    axle[0] = vehicle->rotation[0];
    axle[1] = vehicle->rotation[1];
    axle[2] = vehicle->rotation[2];
    if ((uint32_t)wheel <= 1)
        math_vec3_rotate(axle, &vehicle->rotation[3], steer);
}

void world_drive_vehicles(void)
{
    /* Read once: whether the wheels are physics bodies. */
    int32_t bodies = physics_points_no_gravity;

    for (int index = 0; index < PHYSICS_VEHICLE_CAPACITY; index++) {
        PhysicsVehicle *vehicle = &physics_vehicles[index];
        VehicleWheel *wheels = world_vehicle_wheels(index);
        VehicleDrive *drive = world_vehicle_drive(index);
        float speed, curve, throttle, torque, x, half, sum, coupling;
        double engine_factor, r;
        int32_t type;

        if (!vehicle->active || vehicle->type == WORLD_VEHICLE_TYPE_12 || world_vehicle_wheel_count(index) <= 0)
            continue;

        /* Brakes. */
        if (!bodies) {
            for (int w = 0; w < world_vehicle_wheel_count(index); w++)
                wheels[w].spin = (wheels[w].unknown_38 * wheels[w].unknown_3c) + wheels[w].spin;
            for (int w = 0; w < world_vehicle_wheel_count(index); w++) {
                float b = wheel_brake(drive->brake, w), s = wheels[w].spin;
                if (!(s >= -b))
                    s = s + b;
                else if (s > b)
                    s = s - b;
                else
                    s = 0.0f;
                wheels[w].spin = s;
            }
        } else {
            for (int w = 0; w < world_vehicle_wheel_count(index); w++) {
                PhysicsBody *body;
                float axle[3], s, b, t;

                wheel_axle(axle, vehicle, w, w <= 1 ? wheels[w].steer : 0.0f);
                body = &physics_bodies[wheels[w].body];
                s = ((axle[1] * body->angular_velocity[1]) + (axle[0] * body->angular_velocity[0]))
                    + (axle[2] * body->angular_velocity[2]);
                wheels[w].spin = s;
                b = wheel_brake(drive->brake, w);
                if (!(s >= -b))
                    t = b;
                else if (s > b)
                    t = -b;
                else
                    t = -s;
                t = t * body->unknown_84[0];
                body->angular_velocity_change[0] = (axle[0] * t) + body->angular_velocity_change[0];
                body->angular_velocity_change[1] = (axle[1] * t) + body->angular_velocity_change[1];
                body->angular_velocity_change[2] = (axle[2] * t) + body->angular_velocity_change[2];
            }
        }

        /* The engine's torque curve. */
        speed = drive->engine_speed;
        type = vehicle->type;
        engine_factor = type == 9 ? 0x1.0b04870e0474dp-15 : 0x1.7d742ea64f825p-16;   /* doubles 0x140278340, 0x140278330 */
        x = (float)(engine_factor * (double)(speed * 3600.0f));
        if (x > 1.0f) {
            curve = 0.0f;
        } else {
            float t = min_float(max_float(x, 0.0f), 1.0f);
            float u = 1.0f - t;
            float shape = t * ((((u * 2.625f) + t) * t) + ((u * 1.875f) * u));
            float rest = 1.0f - shape, a, c;

            if (type == 9) {
                a = (rest + rest) + (shape * 0.25f);
                c = (rest * 0.75f) * rest;
            } else if (type == 7) {
                a = (rest * 2.5f) + (shape * 0.625f);
                c = rest * rest;
            } else {
                a = (rest + rest) + (shape * 0.625f);
                c = (rest * 0.75f) * rest;
            }
            curve = (a * shape) + c;
        }

        throttle = drive->throttle;
        drive->unknown_3894 = 0;
        drive->engine_inertia = 8.0f;
        drive->unknown_38ac = 64.0f;
        torque = ((drive->unknown_38a0 * 0.00027777778f) * (throttle * curve)) / (drive->unknown_38b0 * drive->unknown_38b8)
                 * 0.03125f;
        /* Friction grows with the square of the speed. */
        r = (double)(speed * 0.005859375f);
        speed = (float)((double)torque - (fabs(r) * r) * (double)(1.125f - throttle)) + speed;
        if (!is_zero_or_nan(drive->unknown_38c8)) {
            float coupling_k = drive->unknown_38c8 * 0.035714287f;
            float inverse = 1.0f / (drive->unknown_38b0 + 8.0f);
            float pull = (((speed * 0.125f) - (drive->unknown_38a4 * coupling_k)) * drive->unknown_38d0) * 0.25f;

            drive->unknown_38a4 = (((inverse * drive->unknown_38b0) * pull) * (coupling_k * 64.0f)) + drive->unknown_38a4;
            speed = speed - ((pull * inverse) * drive->unknown_38b4);
        }
        drive->engine_speed = speed;

        /* The driven wheels: pulled toward their mean spin through the drive. */
        coupling = 0.0f;
        if (drive->driven_count > 0) {
            int32_t count = drive->driven_count;

            sum = 0.0f;
            for (int j = 0; j < count; j++) {
                VehicleWheel *wheel = &wheels[drive->driven[j]];
                float s;

                if (!bodies) {
                    s = wheel->spin;
                } else {
                    const PhysicsBody *body = &physics_bodies[wheel->body];
                    float axle[3];

                    wheel_axle(axle, vehicle, j, wheel->steer);
                    s = ((axle[1] * body->angular_velocity[1]) + (axle[0] * body->angular_velocity[0]))
                        + (axle[2] * body->angular_velocity[2]);
                }
                sum = s + sum;
            }
            half = sum * 0.5f;
            for (int j = 0; j < drive->driven_count; j++) {
                int32_t w = drive->driven[j];
                VehicleWheel *wheel = &wheels[w];
                PhysicsBody *body = &physics_bodies[wheel->body];
                float spin = wheel->spin, axle[3], push, inverse, share_engine, gap, ax, ay, az;

                wheel_axle(axle, vehicle, w, wheel->steer);
                push = ((half - spin) * body->unknown_84[0]) * 0.0009765625f;
                ax = (axle[0] * push) + body->angular_velocity_change[0];
                body->angular_velocity_change[0] = ax;
                ay = (axle[1] * push) + body->angular_velocity_change[1];
                body->angular_velocity_change[1] = ay;
                az = (axle[2] * push) + body->angular_velocity_change[2];
                body->angular_velocity_change[2] = az;
                inverse = 1.0f / (drive->engine_inertia + wheel->unknown_30);
                share_engine = drive->engine_inertia * inverse;
                gap = (drive->unknown_38a4 * 0.03125f) - (half * 0.109375f);
                coupling = coupling + (((inverse * wheel->unknown_30) * gap) * (drive->unknown_38ac * -0.125f));
                if (!bodies) {
                    wheel->spin = ((gap * wheel->unknown_38) * (share_engine * 0.4375f)) + spin;
                } else {
                    float k;

                    wheel_axle(axle, vehicle, w, wheel->steer);
                    k = ((gap * share_engine) * 0.4375f);
                    body->angular_velocity_change[0] = (axle[0] * k) + ax;
                    body->angular_velocity_change[1] = (axle[1] * k) + ay;
                    body->angular_velocity_change[2] = (axle[2] * k) + az;
                }
            }
        }
        drive->unknown_38a4 = coupling + drive->unknown_38a4;

        /* Values this close to zero become zero. */
        {
            double s = fabs((double)drive->engine_speed);
            if (s > 0.0 && s < 1.52587890625e-05)
                drive->engine_speed = 0.0f;
            s = fabs((double)drive->unknown_38a4);
            if (s > 0.0 && s < 1.52587890625e-05)
                drive->unknown_38a4 = 0.0f;
        }
    }
}
