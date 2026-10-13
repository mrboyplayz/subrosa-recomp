/* Traffic: making a traffic car, and a bot player at the wheel of one. See
   traffic.h. */
#include "traffic.h"
#include "arith.h"
#include "bullets.h"
#include "collision.h"
#include "frame.h"
#include "math3d.h"
#include "player.h"
#include "vehicle.h"
#include <math.h>
#include <string.h>

extern int crt_rand(void) __asm__("rand");                       /* the original's own, 0x14023B1B0 */
/* Through the client's entry point, so that a test can put its own in its
   place: collision_sweep_level. */
extern int sub_1400DC050(float *from, float *to, int with_records);

/* The first wheel's unknown value at + 0x24 (see traffic_tick.c). */
#define vehicle_type_wheel_unknown_24(t) VEHICLE_TYPE_FIELD(float, 0x1787CULL + 0x24ULL, t)
/* A player's controls for the vehicle it drives, laid out as the vehicle's
   own: player + 0xA0. */
#define player_controls(p) ((VehicleControls *)(void *)((uint8_t *)&world_players[p] + 0xA0))

int traffic_create_car(int type, uint32_t color, int street, int end, int lane, float along)
{
    int32_t lane_count = city_street_lane_count(street);
    float direction[3] = { city_street_direction(street)[0], city_street_direction(street)[1],
                           city_street_direction(street)[2] };
    int32_t first_crossing = city_street_crossings(street)[0];
    int32_t second_crossing = city_street_crossings(street)[1];
    int32_t from_middle = subtract_int(subtract_int(lane_count >> 1, lane), 1);
    int32_t line = from_middle >= 0 ? from_middle : 0;
    const CityStreetLane *record;
    float start[3];
    float far_x, far_z;
    float reach, yaw, height;
    float from[3], to[3];
    int32_t car;
    int32_t own_lane;
    int to_street, to_end;
    float *rotation;

    if (line > subtract_int(lane_count, 1))
        line = subtract_int(lane_count, 1);
    if (!end) {
        record = city_street_lane(street, (int64_t)subtract_int(lane_count, line) - 1);
        start[0] = record->start[0];
        start[1] = record->start[1];
        start[2] = record->start[2];
        far_x = record->end[0];
        far_z = record->end[2];
    } else {
        direction[0] = -direction[0];
        direction[1] = -direction[1];
        direction[2] = -direction[2];
        record = city_street_lane(street, line);
        start[0] = record->end[0];
        start[1] = record->end[1];
        start[2] = record->end[2];
        far_x = record->start[0];
        far_z = record->start[2];
    }
    reach = along * sqrt_float((far_z - start[2]) * (far_z - start[2]) + (far_x - start[0]) * (far_x - start[0]));
    yaw = city_street_unknown_14(street) ? -1.5707963705062866f : -3.1415927410125732f;
    if (!end)
        yaw = (float)((double)yaw + 0x1.921fb54442eeap+1);

    /* On the ground at that point of the lane. */
    from[0] = direction[0] * reach + start[0];
    height = direction[1] * reach + start[1];
    from[2] = direction[2] * reach + start[2];
    if (!(height >= city_crossing_position(first_crossing)[1]))
        height = city_crossing_position(first_crossing)[1];
    if (!(height >= city_crossing_position(second_crossing)[1]))
        height = city_crossing_position(second_crossing)[1];
    from[1] = height + 2.0f;
    to[0] = from[0] - world_y_axis_x * 128.0f;
    to[1] = from[1] - world_y_axis_y * 128.0f;
    to[2] = from[2] - world_y_axis_z * 128.0f;
    height = sub_1400DC050(from, to, 0) ? collision_hit.point[1] : from[1];
    car = traffic_car_count;
    height = height + (0.375f - vehicle_type_wheel_unknown_24(type));

    memset(&traffic_car_human(car), 0, 0x5F8);
    own_lane = city_street_lanes_one_way(street);
    traffic_car_position(car)[0] = from[0];
    traffic_car_position(car)[2] = from[2];
    traffic_car_position(car)[1] = height;
    traffic_car_type(car) = type;
    traffic_car_human(car) = -1;
    traffic_car_vehicle(car) = -1;
    traffic_car_yaw(car) = yaw;
    traffic_car_color(car) = color;
    traffic_car_front(car) = 3.5f;
    traffic_car_back(car) = -0.5f;
    traffic_car_wheelbase(car) = 3.0f;
    traffic_car_is_bot(car) = 1;
    own_lane = end ? subtract_int(subtract_int(own_lane, lane), 1) : add_int(own_lane, lane);
    traffic_car_lane(car) = own_lane;
    traffic_car_lane_wanted(car) = own_lane;
    traffic_car_street(car) = street;
    traffic_car_first_end(car) = end;
    traffic_car_crossing(car) = -1;
    traffic_car_unknown_5a8(car) = 0;

    to_street = crt_rand() % city_street_count;
    car = traffic_car_count;
    to_end = crt_rand() & 1;
    traffic_plan_route(traffic_car_count, traffic_car_street(car), end, to_street, to_end);
    rotation = traffic_car_rotation(car);
    rotation[0] = 1.0f;
    rotation[1] = 0.0f;
    rotation[2] = 0.0f;
    rotation[3] = 0.0f;
    rotation[4] = 1.0f;
    rotation[5] = 0.0f;
    rotation[6] = 0.0f;
    rotation[7] = 0.0f;
    rotation[8] = 1.0f;
    math_mat3_rotate_rows(rotation, rotation + 3, (float)((double)yaw + 0x1.921fb54442eeap+0));

    car = traffic_car_count;
    traffic_car_made_count(car)++;
    traffic_car_count = car + 1;
    return car;
}

void traffic_drive_for_player(int player, int vehicle)
{
    VehicleControls *controls = player_controls(player);
    const PhysicsVehicle *body = &physics_vehicles[vehicle];
    int32_t car;
    float forward, speed, steer, gas;
    int32_t stuck;

    if (game_state == 1) {
        controls->gas = -1.0f;
        return;
    }
    car = vehicle_traffic_car(vehicle);
    if (car == -1)
        return;
    traffic_car_is_aggressive(car) = 1;
    traffic_update_car(car);

    forward = (body->velocity[1] * body->rotation[7] + body->velocity[0] * body->rotation[6])
        + body->velocity[2] * body->rotation[8];
    car = vehicle_traffic_car(vehicle);
    controls->gear_x = 2.0f;
    controls->gear_y = -1.0f;
    speed = traffic_car_speed(car);
    steer = traffic_car_steer(car);
    controls->steer = steer;
    gas = (forward + speed) * 8.0f;
    if (gas > 1.0f)
        gas = 1.0f;
    controls->gas = gas / (fabsf(steer) + 1.0f);
    if (!(speed >= 0.05000000074505806f))
        controls->gas = -1.0f;
    stuck = traffic_car_stuck_ticks(car);
    world_players[player].input_flags = 0;
    if (stuck >= 180) {
        controls->gas = 1.0f;
        controls->gear_x = 2.0f;
        controls->steer = 0.0f;
        controls->gear_y = 1.0f;
        if (stuck >= 280)
            controls->gas = -1.0f;
    }
}

void traffic_populate(int count)
{
    if (!city_street_count || count <= 0)
        return;
    for (int64_t left = count; left; left--) {
        int end = crt_rand() & 1;
        int street = crt_rand() % city_street_count;
        int lane, pick, type, car;
        float along;

        if (traffic_turns_on_streets_67_68) {
            while (street == TRAFFIC_TURN_STREET_A || street == 23)
                street = crt_rand() % city_street_count;
        }
        lane = crt_rand() & 1;
        if (game_type == 5
            && city_crossing_unknown_4(city_street_crossings(street)[0])
                == city_crossing_unknown_4(city_street_crossings(street)[1])
            && city_street_lanes_one_way(street) == 3)
            lane = crt_rand() % 3;
        pick = crt_rand() & 0xF;
        if (pick < 3)
            type = 7;
        else if (pick < 9)
            type = 0;
        else if (pick < 13)
            type = 9;
        else
            type = pick < 14 ? 7 : 15;
        along = (float)(crt_rand() & 0xFF) * 0.00390625f;
        car = traffic_create_car(type, (uint32_t)(crt_rand() % 6), street, end, lane, along);
        if (lane == 2)
            traffic_car_is_bot(car) = 0;
    }
}
