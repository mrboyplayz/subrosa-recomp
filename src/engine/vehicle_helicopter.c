/* A helicopter for a tick. See vehicle.h. */
#include "vehicle.h"
#include "human.h"
#include "math3d.h"
#include "crt.h"
#include "arith.h"
#include <emmintrin.h>

/* The original's double sine and cosine: sine in lane 0, cosine in lane 1.
   0x1401F8A50 */
extern __m128d sub_1401F8A50(double angle, long long unused, double unused_2);

#define ROTOR_FULL_SPEED 2000                /* engine_rpm with a pilot aboard */
#define ROTOR_SPEED_STEP 10
/* Radians a rotor turns in a tick per unit of twice its speed: 1/20 of a
   degree. */
#define ROTOR_TURN 0.0008726646259972221
/* The blade angles wrap at these, the original's pi to twelve digits. */
#define HALF_TURN 3.14159265359
#define FULL_TURN 6.28318530718
#define PI 3.141592653589793

#define BLADE_ELEMENTS 16
#define BLADE_ELEMENT_STEP 0.39269909f       /* a sixteenth of a turn */
#define BLADE_LENGTH -4.0
#define BLADE_DRAG_POINT -2.9321532249450684
/* The pitch of the blades with the collective at rest, radians. */
#define COLLECTIVE_AT_REST 0.14726215563703127

static void unit_or_zero(float out[3], float x, float y, float z, float length)
{
    if (is_zero_or_nan_quiet(length)) {
        out[0] = out[1] = out[2] = 0.0f;
    } else {
        float inverse = 1.0f / length;

        out[0] = inverse * x;
        out[1] = inverse * y;
        out[2] = inverse * z;
    }
}

/* Adds an impulse to the rotor's body at `arm` from its centre. */
static void push_rotor(PhysicsBody *rotor, const float arm[3], float x, float y, float z)
{
    rotor->velocity[0] = x + rotor->velocity[0];
    rotor->velocity[1] = y + rotor->velocity[1];
    rotor->velocity[2] = z + rotor->velocity[2];
    rotor->angular_momentum[0] = ((y * arm[2]) - (z * arm[1])) + rotor->angular_momentum[0];
    rotor->angular_momentum[1] = ((z * arm[0]) - (x * arm[2])) + rotor->angular_momentum[1];
    rotor->angular_momentum[2] = ((x * arm[1]) - (y * arm[0])) + rotor->angular_momentum[2];
}

/* The rotor's speed follows whether there is a pilot; both rotors turn by
   it (the angles they are drawn at are kept in the first two wheels). */
static int spin_rotors(int index)
{
    PhysicsVehicle *vehicle = &physics_vehicles[index];
    VehicleDrive *drive = world_vehicle_drive(index);
    VehicleWheel *wheels = world_vehicle_wheels(index);
    int piloted = 0;
    int32_t speed;
    double angle;

    for (int h = 0; h < WORLD_HUMAN_CAPACITY; h++)
        if (world_humans[h].active && world_humans[h].vehicle == index && world_humans[h].seat == 0)
            piloted = 1;
    if (vehicle->health <= 0 || vehicle->is_locked)
        piloted = 0;

    speed = drive->engine_rpm;
    if (piloted)
        speed = speed > ROTOR_FULL_SPEED - ROTOR_SPEED_STEP ? ROTOR_FULL_SPEED : speed + ROTOR_SPEED_STEP;
    else
        speed = speed < ROTOR_SPEED_STEP ? 0 : speed - ROTOR_SPEED_STEP;
    drive->engine_rpm = speed;

    wheels[0].turned = (float)((double)((float)speed + (float)speed) * ROTOR_TURN + (double)wheels[0].turned);
    angle = (double)wheels[0].turned;
    wheels[1].turned = (float)(angle - (double)(((float)speed * 0.125f) + ((float)speed * 0.125f)) * ROTOR_TURN);
    if (angle > HALF_TURN)
        wheels[0].turned = (float)(angle - FULL_TURN);
    else if (!(angle >= -HALF_TURN))
        wheels[0].turned = (float)(angle + FULL_TURN);
    return piloted;
}

/* The bond between rotor and body is asked to turn the rotor's axes onto
   the body's: by the angle between them, about their common axis. */
static void level_rotor(int index)
{
    const PhysicsVehicle *vehicle = &physics_vehicles[index];
    const PhysicsBody *rotor = &physics_bodies[vehicle_blade_body(index)];
    PhysicsConstraint *constraint = &physics_constraints[vehicle_blade_bond(index)];
    const float *r = rotor->rotation;
    float between[9], q[4], axis[3];
    float w, turn, x, y, z;

    math_mat3_multiply_transposed(between, rotor->rotation, physics_bodies[vehicle->body].rotation);
    math_quat_from_mat3(q, between);
    w = q[3];
    if (!(w >= 0.0f)) {
        q[0] = -q[0];
        q[1] = -q[1];
        q[2] = -q[2];
        w = -w;
    }
    x = -q[0];
    y = -q[1];
    z = -q[2];
    unit_or_zero(axis, x, y, z, sqrt_float(((x * x) + (y * y)) + (z * z)));
    turn = (float)(crt_acos((double)min_float(max_float(w, -1.0f), 1.0f)) * 2.0);
    x = axis[0] * turn;
    y = axis[1] * turn;
    z = axis[2] * turn;
    constraint->bias[0] = ((y * r[3]) + (x * r[0])) + (z * r[6]);
    constraint->bias[2] = ((y * r[5]) + (x * r[2])) + (z * r[8]);
    constraint->bias[1] = ((y * r[4]) + (x * r[1])) + (z * r[7]);
}

/* Drag on the helicopter's body along its three axes. */
static void drag_body(int index)
{
    const PhysicsVehicle *vehicle = &physics_vehicles[index];
    PhysicsBody *body = &physics_bodies[vehicle->body];
    const float *r = body->rotation;
    float vx = body->velocity[0], vy = body->velocity[1], vz = body->velocity[2];
    float flat = (vy * vy) + (vx * vx);
    float speed = sqrt_float((vz * vz) + flat);
    float twice = (((vz + vz) * vz) + flat) + flat;
    float direction[3], push;

    unit_or_zero(direction, vx, vy, vz, speed);
    push = ((((direction[1] * r[1]) + (direction[0] * r[0])) + (direction[2] * r[2])) * twice) * -0.00075f;
    body->velocity[0] = (vehicle->rotation[0] * push) + vx;
    body->velocity[1] = (vehicle->rotation[1] * push) + vy;
    body->velocity[2] = (vehicle->rotation[2] * push) + vz;

    push = ((((direction[1] * r[4]) + (direction[0] * r[3])) + (direction[2] * r[5])) * twice) * -0.0015f;
    body->velocity[0] = (push * vehicle->rotation[3]) + body->velocity[0];
    body->velocity[1] = (push * vehicle->rotation[4]) + body->velocity[1];
    body->velocity[2] = (push * vehicle->rotation[5]) + body->velocity[2];

    push = ((((direction[1] * r[7]) + (direction[0] * r[6])) + (direction[2] * r[8])) * twice) * -0.0001875f;
    body->velocity[0] = (vehicle->rotation[6] * push) + body->velocity[0];
    body->velocity[1] = (vehicle->rotation[7] * push) + body->velocity[1];
    body->velocity[2] = (vehicle->rotation[8] * push) + body->velocity[2];
}

/* The rotor as sixteen blade elements round the disc. Each is pitched by
   the collective and, according to where on the disc it is, the cyclic; the
   air it meets (the rotor's own turning, its motion, and the pitch) gives
   lift along the rotor's axis and drag along the helicopter's sideways and
   forward axes, all applied to the rotor's body at the element. */
static void fly_rotor(int index)
{
    const PhysicsVehicle *vehicle = &physics_vehicles[index];
    const VehicleControls *controls = vehicle_controls(index);
    const PhysicsBody *body = &physics_bodies[vehicle->body];
    PhysicsBody *rotor = &physics_bodies[vehicle_blade_body(index)];
    const float *r = rotor->rotation;
    const float *sideways = &vehicle->rotation[0], *forward = &vehicle->rotation[6];
    float pedal = controls->steer * 0.0044444446f;
    float motion[3] = {rotor->velocity[0], rotor->velocity[1], rotor->velocity[2]};
    double cyclic_pitch, cyclic_roll;
    float collective;
    float around = 0.0f;

    /* The pedals turn the rotor about the body's up axis. */
    rotor->angular_momentum[0] = (pedal * body->rotation[3]) + rotor->angular_momentum[0];
    rotor->angular_momentum[1] = (pedal * body->rotation[4]) + rotor->angular_momentum[1];
    rotor->angular_momentum[2] = (pedal * body->rotation[5]) + rotor->angular_momentum[2];

    cyclic_pitch = (double)(controls->gear_y * 0.0078125f) * PI;
    collective = (float)((double)(controls->gas * 0.03125f) * PI + COLLECTIVE_AT_REST);
    cyclic_roll = (double)(controls->gear_x * 0.015625f) * PI;

    for (int element = 0; element < BLADE_ELEMENTS; element++) {
        __m128d sine_cosine = sub_1401F8A50((double)around, 0, 0.0);
        double sine = _mm_cvtsd_f64(sine_cosine);
        double cosine = _mm_cvtsd_f64(_mm_unpackhi_pd(sine_cosine, sine_cosine));
        float out_cos = (float)(cosine * BLADE_LENGTH), out_sin = (float)(sine * BLADE_LENGTH);
        float drag_cos = (float)(cosine * BLADE_DRAG_POINT), drag_sin = (float)(sine * BLADE_DRAG_POINT);
        const float *spin = rotor->angular_velocity;
        const float *axis = &r[3];
        float arm[3], along[3], air[3], wind[3], unit[3];
        float pitch, strength, wind_squared, air_squared;

        /* Where the element is from the hub, and the direction to the
           point further in where its drag is taken. */
        arm[0] = (out_sin * r[6]) + (out_cos * r[0]);
        arm[2] = (out_sin * r[8]) + (out_cos * r[2]);
        arm[1] = (out_sin * r[7]) + (out_cos * r[1]);
        along[0] = (drag_sin * r[6]) + (drag_cos * r[0]);
        along[2] = (drag_sin * r[8]) + (drag_cos * r[2]);
        along[1] = (drag_sin * r[7]) + (drag_cos * r[1]);
        unit_or_zero(along, along[0], along[1], along[2],
                     sqrt_float(((along[1] * along[1]) + (along[0] * along[0])) + (along[2] * along[2])));

        /* The element's velocity: the rotor's turning at the arm plus the
           rotor's motion. */
        air[0] = ((arm[1] * spin[2]) - (arm[2] * spin[1])) + motion[0];
        air[1] = ((arm[2] * spin[0]) - (arm[0] * spin[2])) + motion[1];
        air[2] = ((arm[0] * spin[1]) - (arm[1] * spin[0])) + motion[2];

        pitch = (float)(crt_sin((double)(float)((double)(float)(cosine * cyclic_pitch + (double)collective)
                                                - sine * cyclic_roll))
                        * BLADE_LENGTH);
        wind[0] = (pitch * axis[0]) + air[0];
        wind[1] = (pitch * axis[1]) + air[1];
        wind[2] = (pitch * axis[2]) + air[2];
        wind_squared = ((wind[1] * wind[1]) + (wind[0] * wind[0])) + (wind[2] * wind[2]);
        unit_or_zero(unit, wind[0], wind[1], wind[2], sqrt_float(wind_squared));

        /* Lift, along the rotor's axis. */
        strength = (((((unit[0] * axis[0]) + (axis[1] * unit[1])) + (axis[2] * unit[2]))
                     - ((((motion[0] * along[0]) + (motion[1] * along[1])) + (motion[2] * along[2])) * 0.03125f))
                    * wind_squared)
                   * -0.00244140625f;
        push_rotor(rotor, arm, axis[0] * strength, axis[1] * strength, axis[2] * strength);

        /* Drag, along the helicopter's sideways and forward axes. */
        air_squared = ((air[1] * air[1]) + (air[0] * air[0])) + (air[2] * air[2]);
        unit_or_zero(unit, air[0], air[1], air[2], sqrt_float(air_squared));
        strength = ((((sideways[0] * unit[0]) + (unit[1] * sideways[1])) + (sideways[2] * unit[2])) * air_squared)
                   * -0.000244140625f;
        push_rotor(rotor, arm, sideways[0] * strength, sideways[1] * strength, sideways[2] * strength);
        strength = ((((unit[1] * forward[1]) + (unit[0] * forward[0])) + (unit[2] * forward[2])) * air_squared)
                   * -0.00018310546875f;
        push_rotor(rotor, arm, forward[0] * strength, forward[1] * strength, forward[2] * strength);

        around = around + BLADE_ELEMENT_STEP;
    }
}

void vehicle_update_helicopter(int index)
{
    int piloted = spin_rotors(index);

    level_rotor(index);
    if (!piloted || physics_vehicles[index].health <= 0)
        return;
    drag_body(index);
    fly_rotor(index);
}
