/* A car's controls for a tick. See vehicle.h. */
#include "vehicle.h"
#include "events.h"
#include "arith.h"
#include <math.h>

extern double crt_tan(double x) __asm__("tan");                    /* 0x1402437E0 */
extern double crt_atan2(double y, double x) __asm__("sub_14023EDE4");

#define QUARTER_TURN 1.570796326795

/* The engine speeds at which the automatic gearbox changes down and up. */
#define SHIFT_DOWN_BELOW 4.363323129986111
#define SHIFT_UP_ABOVE 10.471975f
#define SHIFT_UP_ABOVE_TYPE_9 7.8539815f
#define SHIFT_DELAY 30

static float gear_ratio(int32_t gear, float unchanged)
{
    switch (gear) {
    case 0: return 0.0f;
    case 1: return 10.849999f;
    case 2: return 7.7000003f;
    case 3: return 5.25f;
    case 4: return 3.5f;
    case -1: return -10.5f;
    default: return unchanged;
    }
}

void vehicle_update_car_controls(int index)
{
    PhysicsVehicle *vehicle = &physics_vehicles[index];
    VehicleControls *controls = vehicle_controls(index);
    VehicleDrive *drive = world_vehicle_drive(index);
    VehicleWheel *wheels = world_vehicle_wheels(index);
    uint32_t flags;
    int32_t gear, rpm;
    int automatic = 0;
    float steer, turn, other_turn;

    if (controls->gas > 0.0f)
        drive->throttle = fabsf(controls->gas);
    else if (drive->throttle > 0.125f)
        drive->throttle -= 0.125f;
    else
        drive->throttle = 0.0f;

    flags = controls->flags;
    drive->automatic = 0;
    if (flags & VEHICLE_INPUT_CLUTCH) {
        if (drive->clutch > 0.125f)
            drive->clutch -= 0.125f;
        else
            drive->clutch = 0.0f;
    } else if (drive->clutch >= 0.875f) {
        drive->clutch = 1.0f;
    } else {
        drive->clutch += 0.125f;
    }

    /* The gear stick: 1, 3 and "automatic" in the far row, 2, 4 and reverse
       in the near row. */
    if (!(controls->gear_y >= -0.5f)) {
        if (!(controls->gear_x >= 0.5f)) {
            drive->gear = 1;
        } else if (!(controls->gear_x >= 1.5f)) {
            drive->gear = 3;
        } else {
            drive->automatic = 1;
            automatic = 1;
        }
    } else if (controls->gear_y > 0.5f) {
        if (!(controls->gear_x >= 0.5f))
            drive->gear = 2;
        else
            drive->gear = !(controls->gear_x >= 1.5f) ? 4 : -1;
    } else {
        drive->clutch = 0.0f;
        drive->gear = 0;
    }

    if (automatic) {
        gear = drive->gear;
        if (gear < 1)
            drive->gear = gear = 1;
        if (drive->shift_delay > 0) {
            drive->shift_delay--;
        } else {
            if ((uint32_t)gear > 1 && !((double)drive->engine_speed >= SHIFT_DOWN_BELOW)) {
                gear--;
                drive->shift_delay = SHIFT_DELAY;
                drive->gear = gear;
            }
            if (gear < 4
                && !((vehicle->type == VEHICLE_TYPE_9 ? SHIFT_UP_ABOVE_TYPE_9 : SHIFT_UP_ABOVE) >= drive->engine_speed)) {
                drive->shift_delay = SHIFT_DELAY;
                drive->gear = gear + 1;
            }
        }
    }

    gear = drive->gear;
    if (gear < -1)
        drive->gear = gear = -1;
    else if (gear > 4)
        drive->gear = gear = 4;

    drive->brake = 0.0f;
    if (flags == VEHICLE_INPUT_NO_DRIVER) {
        gear = 0;
        drive->brake = 1.0f;
        drive->gear = 0;
        drive->engine_speed = drive->engine_speed * 0.9375f;
    }
    if (!automatic && gear != drive->previous_gear) {
        if (gear != 0)
            event_sound(sound_gear_shift, vehicle->position, 1.0f, 0.75f);
        else
            event_sound(sound_gear_shift, vehicle->position, 0.75f, 1.0f);
    }

    drive->gear_ratio = gear_ratio(drive->gear, drive->gear_ratio);
    if (!(controls->gas >= 0.0f))
        drive->brake = -controls->gas;
    if (controls->flags & VEHICLE_INPUT_HANDBRAKE)
        drive->brake = 2.0f;
    drive->inverse_gear_ratio = is_zero_or_nan_quiet(drive->gear_ratio) ? 0.0f : 1.0f / drive->gear_ratio;

    /* The first wheel turns by the control; the second by the angle that
       makes both roll about one centre. */
    steer = controls->steer;
    drive->steer = steer;
    turn = fabsf(steer);
    if (turn > 0.0f) {
        double scale = (double)vehicle_steer_cot_scale(index);
        float cot = (float)(crt_tan(QUARTER_TURN - (double)turn) * scale + (double)vehicle_steer_cot_offset(index));
        other_turn = (float)(QUARTER_TURN - crt_atan2((double)cot, scale));
    } else {
        other_turn = 0.0f;
    }
    if (steer > 0.0f) {
        wheels[1].steer = turn;
        wheels[0].steer = other_turn;
    } else {
        wheels[1].steer = -other_turn;
        wheels[0].steer = -turn;
    }

    if (vehicle->health <= 0 || vehicle->is_locked)
        drive->engine_speed = 0.0f;
    rpm = truncate_double((double)(drive->engine_speed * 3600.0f) * 0.15915494309188485);
    if (rpm < 0)
        rpm = 0;
    if (drive->gear > 0 && rpm < 1)
        drive->engine_rpm = 1;
    else
        drive->engine_rpm = rpm > 0x1FFF ? 0x1FFF : rpm;

    if (!(0.0f >= controls->gas))
        controls->gas = 0.0f;
    drive->previous_gear = drive->gear;
}
