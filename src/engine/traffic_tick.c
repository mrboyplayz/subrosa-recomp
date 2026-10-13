/* Traffic: the stage of the tick that runs it. See traffic.h. */
#include "traffic.h"
#include "arith.h"
#include "bullets.h"
#include "collision.h"
#include "crt.h"
#include "human.h"
#include "math3d.h"
#include "player.h"
#include "vehicle.h"
#include <math.h>

extern int crt_rand(void) __asm__("rand");                       /* the original's own, 0x14023B1B0 */
extern double crt_tan(double x) __asm__("tan");                  /* 0x1402437E0 */
/* Through the client's entry points, so that a test can put its own in
   their place: vehicle_create and collision_sweep_level. */
extern long long sr_CreateVehicle(int type, float *position, unsigned int *velocity, unsigned int *rotation,
                                  unsigned int color);
extern int sub_1400DC050(float *from, float *to, int with_records);

#define LIGHT_OPEN 2
#define LIGHT_AMBER 1
#define GREEN_TIME 800
#define AMBER_TIME 128
#define PLAYER_RANGE 96.0f
#define BOT_RANGE 16.0f
#define TICK 0.01666666753590107f
#define PI 0x1.921fb54442eeap+1
#define TWO_PI 0x1.921fb54442eeap+2

/* Where a vehicle's traffic car is taken to be, in the vehicle's axes
   (type + 0x848); 1.5 along the third axis is added to it. */
#define vehicle_type_traffic_point(t) (&VEHICLE_TYPE_FIELD(float, 0x848ULL, t))
/* The first wheel's unknown value at + 0x24: with the radius it gives the
   height a car without a vehicle rides at. */
#define vehicle_type_wheel_unknown_24(t) VEHICLE_TYPE_FIELD(float, 0x1787CULL + 0x24ULL, t)

static int in_box(const float box[6], float x, float z)
{
    return x >= box[0] && !(x > box[3]) && z >= box[2] && !(z > box[5]);
}

static int in_street_box(int street, const float place[3])
{
    const float *box = city_street_traffic_box(street);

    return in_box(box, place[0], place[2]) && place[1] >= box[1] && !(place[1] > box[4]);
}

static float along(const float d[3], const float direction[3])
{
    return (direction[1] * d[1] + direction[0] * d[0]) + direction[2] * d[2];
}

void traffic_file_cars(void)
{
    int32_t street_count = city_street_count;
    int32_t crossing_count;
    int32_t car_count;

    for (int32_t s = 0; s < street_count; s++) {
        city_street_car_count(s) = 0;
        street_count = city_street_count;
    }
    if (traffic_filing_off)
        return;
    car_count = traffic_car_count;
    if (car_count <= 0)
        return;
    crossing_count = city_crossing_count;

    for (int32_t car = 0; car < car_count; car++) {
        float *bounds = traffic_car_bounds(car);
        const float *place = traffic_car_position(car);
        const float *direction;
        const float *origin;
        const float *across;
        const CityStreetLane *lane;
        float sine, cosine;
        float least[3], greatest[3];
        float low[3], high[3];
        float facing, first, second;
        int32_t street;
        int32_t lanes;
        uint32_t within;
        int32_t filed;

        /* The box round its corners: front left, front right, back right,
           back left, each 1 to the side. */
        math_sine_cosine(traffic_car_yaw(car), &sine, &cosine);
        for (int corner = 0; corner < 4; corner++) {
            float reach = corner < 2 ? traffic_car_front(car) : traffic_car_back(car);
            float point[3];

            point[1] = place[1];
            if (corner == 0 || corner == 3) {
                point[0] = (cosine * reach + place[0]) + sine;
                point[2] = (sine * reach + place[2]) - cosine;
            } else {
                point[0] = (cosine * reach + place[0]) - sine;
                point[2] = (sine * reach + place[2]) + cosine;
            }
            for (int axis = 0; axis < 3; axis++) {
                if (corner == 0) {
                    least[axis] = point[axis];
                    greatest[axis] = point[axis];
                } else {
                    if (least[axis] > point[axis])
                        least[axis] = point[axis];
                    if (!(greatest[axis] >= point[axis]))
                        greatest[axis] = point[axis];
                }
                bounds[axis] = least[axis];
                bounds[3 + axis] = greatest[axis];
            }
        }

        street = traffic_car_box_street(car);
        if (street == -1 || !in_street_box(street, place)) {
            street = -1;
            traffic_car_box_street(car) = -1;
            for (int32_t s = 0; s < street_count; s++) {
                if (in_street_box(s, place)) {
                    street = s;
                    traffic_car_box_street(car) = s;
                }
            }
        }
        traffic_car_box_crossing(car) = -1;
        for (int32_t c = 0; c < crossing_count; c++) {
            if (in_box(city_crossing_traffic_box(c), place[0], place[2]))
                traffic_car_box_crossing(car) = c;
        }
        if (street == -1)
            continue;

        /* Its front and its back along the street, from the street's first
           crossing. */
        direction = city_street_direction(street);
        origin = city_crossing_position(city_street_crossings(street)[0]);
        facing = sine * direction[2] + cosine * direction[0];
        first = ((bounds[1] - origin[1]) * direction[1] + (bounds[0] - origin[0]) * direction[0])
            + (bounds[2] - origin[2]) * direction[2];
        second = ((bounds[4] - origin[1]) * direction[1] + (bounds[3] - origin[0]) * direction[0])
            + (bounds[5] - origin[2]) * direction[2];
        if (facing > 0.0f) {
            traffic_car_along(car) = first > second ? first : second;
            traffic_car_along_end(car) = !(first >= second) ? first : second;
        } else {
            traffic_car_along(car) = !(first >= second) ? first : second;
            traffic_car_along_end(car) = first > second ? first : second;
        }

        /* From each end of the street's first lane. */
        lane = city_street_lane(street, 0);
        for (int axis = 0; axis < 3; axis++) {
            low[axis] = bounds[axis] - lane->start[axis];
            high[axis] = bounds[3 + axis] - lane->start[axis];
        }
        traffic_car_end_distance_far(car)[0] = max_float(along(high, direction), along(low, direction));
        direction = city_street_direction(traffic_car_box_street(car));
        traffic_car_end_distance(car)[0] = min_float(along(low, direction), along(high, direction));
        street = traffic_car_box_street(car);
        lane = city_street_lane(street, 0);
        direction = city_street_direction(street);
        for (int axis = 0; axis < 3; axis++) {
            low[axis] = bounds[axis] - lane->end[axis];
            high[axis] = bounds[3 + axis] - lane->end[axis];
        }
        traffic_car_end_distance_far(car)[1] = -min_float(along(high, direction), along(low, direction));
        direction = city_street_direction(traffic_car_box_street(car));
        traffic_car_end_distance(car)[1] = -max_float(along(low, direction), along(high, direction));

        /* The lanes whose line either corner of its box is within 2 of. */
        street = traffic_car_box_street(car);
        traffic_car_lanes(car) = 0;
        within = 0;
        lanes = city_street_lane_count(street);
        across = city_street_across(traffic_car_box_street(car));
        for (int32_t l = 0; l < lanes; l++) {
            const float *start = city_street_lane(traffic_car_box_street(car), l)->start;

            if (!(fabsf(((bounds[1] - start[1]) * across[1] + (bounds[0] - start[0]) * across[0])
                        + (bounds[2] - start[2]) * across[2]) >= 2.0f)) {
                within |= 1u << ((uint32_t)l & 31);
                traffic_car_lanes(car) = within;
            }
            if (!(fabsf(((bounds[3] - start[0]) * across[0] + (bounds[4] - start[1]) * across[1])
                        + (bounds[5] - start[2]) * across[2]) >= 2.0f)) {
                within |= 1u << ((uint32_t)l & 31);
                traffic_car_lanes(car) = within;
            }
        }

        filed = city_street_car_count(street);
        if (filed < 256) {
            (&city_street_cars(street)[0])[(int64_t)filed] = car;
            city_street_car_count(street)++;
            street_count = city_street_count;
            crossing_count = city_crossing_count;
        }
    }
}

/* Each street at a crossing has the green light in turn; streets that are
   not there are passed over. */
static void turn_lights(void)
{
    for (int32_t c = 0; c < city_crossing_count; c++) {
        const int32_t *streets = city_crossing_streets(c);
        int32_t *lights = city_crossing_lights(c);
        int32_t *turning = city_crossing_turn_lights(c);
        int32_t green;
        uint32_t missing;

        city_crossing_green_ticks(c)++;
        city_crossing_green_time(c) = GREEN_TIME;
        if (city_crossing_green_ticks(c) >= GREEN_TIME) {
            uint32_t next = (uint32_t)(city_crossing_green(c) + 1) & 3;

            city_crossing_green(c) = (int32_t)next;
            if (streets[next] == -1) {
                next = (next + 1) & 3;
                city_crossing_green(c) = (int32_t)next;
            }
            if (streets[next] == -1)
                city_crossing_green(c) = (int32_t)((next + 1) & 3);
            city_crossing_green_ticks(c) = 0;
        }
        for (int k = 0; k < 4; k++) {
            lights[k] = 0;
            turning[k] = 0;
        }
        lights[city_crossing_green(c)] = LIGHT_OPEN;
        green = city_crossing_green(c);
        if (streets[(uint32_t)(green + 1) & 3] != -1) {
            /* A crossing of four ways: this street alone, turns too. */
            lights[green] = LIGHT_OPEN;
            turning[city_crossing_green(c)] = LIGHT_OPEN;
            if (city_crossing_green_ticks(c) >= add_int(city_crossing_green_time(c), -AMBER_TIME)) {
                lights[city_crossing_green(c)] = LIGHT_AMBER;
                turning[city_crossing_green(c)] = LIGHT_AMBER;
            }
        } else {
            /* No street to its side: the street opposite goes with it. */
            lights[(uint32_t)(green - 2) & 3] = LIGHT_OPEN;
            if (city_crossing_green_ticks(c) >= add_int(city_crossing_green_time(c), -AMBER_TIME)) {
                lights[city_crossing_green(c)] = LIGHT_AMBER;
                lights[(uint32_t)(city_crossing_green(c) - 2) & 3] = LIGHT_AMBER;
            }
        }
        missing = 0;
        for (int k = 0; k < 4; k++)
            missing += streets[k] == -1;
        if (missing >= 2) {
            for (int k = 0; k < 4; k++) {
                lights[k] = LIGHT_OPEN;
                turning[k] = LIGHT_OPEN;
            }
        }
    }
}

/* How near the nearest living human of a player is, other than the car's
   own driver. */
static int32_t nearness(int car)
{
    int32_t near = 0;
    const float *place = traffic_car_position(car);

    for (int32_t h = 0; h < 256; h++) {
        const WorldHuman *human = &world_humans[h];
        float d[3];
        float range, distance;

        if (!human->active || human->player == -1 || human->old_health <= 0 || near >= 2 || traffic_car_human(car) == h)
            continue;
        d[0] = place[0] - human->bones[0].position[0];
        d[1] = place[1] - human->bones[0].position[1];
        d[2] = place[2] - human->bones[0].position[2];
        range = world_players[human->player].is_bot ? BOT_RANGE : PLAYER_RANGE;
        distance = sqrt_float((d[0] * d[0] + d[1] * d[1]) + d[2] * d[2]);
        if (!(distance >= range))
            near = 2;
        else if (!(distance >= range + 4.0f))
            near = 1;
    }
    return near;
}

/* A vehicle for the car, where the car is. */
static void make_vehicle(int car)
{
    float rotation[9];
    float position[3];
    float velocity[3];
    const float *place = traffic_car_position(car);
    int32_t type = traffic_car_type(car);
    uint32_t color = traffic_car_color(car);
    const float *point = vehicle_type_traffic_point(type);
    float x = point[0], y = point[1], z = -point[2];
    int32_t vehicle;

    for (int k = 0; k < 9; k++)
        rotation[k] = traffic_car_rotation(car)[k];
    for (int axis = 0; axis < 3; axis++)
        position[axis] = (((place[axis] - rotation[6 + axis] * 1.5f) - x * rotation[axis]) - y * rotation[3 + axis])
            + z * rotation[6 + axis];
    velocity[0] = traffic_car_velocity(car)[0];
    velocity[1] = traffic_car_velocity(car)[1];
    velocity[2] = traffic_car_velocity(car)[2];
    vehicle = (int32_t)sr_CreateVehicle(type, position, (unsigned int *)(void *)velocity, (unsigned int *)(void *)rotation,
                                        color);
    traffic_car_vehicle(car) = vehicle;
    if (vehicle != -1)
        vehicle_traffic_car(vehicle) = car;
}

/* A car with a vehicle is where the vehicle is, and a bot's car works the
   vehicle's controls. */
static void follow_vehicle(int car, int vehicle)
{
    const PhysicsVehicle *body = &physics_vehicles[vehicle];
    float rotation[9];
    float base[3];
    const float *point;

    for (int k = 0; k < 9; k++)
        rotation[k] = body->rotation[k];
    for (int axis = 0; axis < 3; axis++)
        base[axis] = rotation[6 + axis] * 1.5f + body->position[axis];
    traffic_car_velocity(car)[0] = body->velocity[0];
    traffic_car_velocity(car)[1] = body->velocity[1];
    traffic_car_velocity(car)[2] = body->velocity[2];
    for (int k = 0; k < 9; k++)
        traffic_car_rotation(car)[k] = rotation[k];
    point = vehicle_type_traffic_point(traffic_car_type(car));
    for (int axis = 0; axis < 3; axis++)
        traffic_car_position(car)[axis] = ((base[axis] + point[0] * rotation[axis]) + point[1] * rotation[3 + axis])
            + point[2] * rotation[6 + axis];
    traffic_car_yaw(car) = crt_atan2f(-rotation[8], -rotation[6]);

    if (traffic_car_is_bot(car) == 1) {
        VehicleControls *controls = vehicle_controls(vehicle);
        float steer = traffic_car_steer(car);
        float speed = traffic_car_speed(car);
        float gas;
        int32_t stuck;

        controls->steer = steer;
        controls->gear_x = 2.0f;
        controls->gear_y = -1.0f;
        gas = ((body->velocity[1] * body->rotation[7] + body->velocity[0] * body->rotation[6])
               + (body->velocity[2] * body->rotation[8] + speed)) * 8.0f;
        if (!(gas >= 0.0f))
            gas = gas + gas;
        if (!(gas >= -1.0f))
            gas = -1.0f;
        else if (gas > 1.0f)
            gas = 1.0f;
        controls->gas = gas / (fabsf(steer) + 1.0f);
        if (!(speed >= 0.05000000074505806f))
            controls->gas = -1.0f;
        stuck = traffic_car_stuck_ticks(car);
        controls->flags = 0;
        if (stuck >= 180) {
            controls->gear_x = 2.0f;
            controls->steer = 0.0f;
            controls->gear_y = 1.0f;
            controls->gas = stuck >= 280 ? -1.0f : 1.0f;
        }
    }
}

/* A car without a vehicle moves as a point: turns by its steering, gains
   or loses speed along its heading toward the speed asked, and is set on
   the ground under its front and tilted to the ground under its back. */
static void move_alone(int car)
{
    float *place = traffic_car_position(car);
    float *velocity = traffic_car_velocity(car);
    float *rotation = traffic_car_rotation(car);
    float vx, vz, steer, speed, turn, yaw, sine, cosine, forward, moving, wanted;
    float step[3];
    float from[3], to[3];
    float ride;
    int32_t type;

    if (traffic_car_is_bot(car) != 1)
        traffic_car_speed(car) = 0.0f;
    vx = velocity[0];
    vz = velocity[2];
    steer = traffic_car_steer(car);
    speed = sqrt_float((vx * vx + velocity[1] * velocity[1]) + vz * vz);
    turn = 0.0f;
    if ((double)fabsf(steer) > 0.0) {
        float radius = (float)((double)traffic_car_wheelbase(car) / crt_tan((double)fabsf(steer)));

        if (!(steer >= 0.0f))
            radius = -radius;
        turn = speed / radius;
    }
    yaw = turn + traffic_car_yaw(car);
    traffic_car_yaw(car) = yaw;
    if (!((double)yaw >= -PI)) {
        yaw = (float)((double)yaw + TWO_PI);
        traffic_car_yaw(car) = yaw;
    } else if ((double)yaw > PI) {
        yaw = (float)((double)yaw - TWO_PI);
        traffic_car_yaw(car) = yaw;
    }
    math_sine_cosine(yaw, &sine, &cosine);
    velocity[1] = 0.0f;
    wanted = traffic_car_speed(car);
    forward = cosine * vx + sine * vz;
    moving = (sine * forward) * sine + (cosine * forward) * cosine;
    step[1] = 0.0f;
    if (!(moving >= wanted)) {
        float gain = min_float((wanted - moving) * 16.0f, 1.0f) * 0.0013888889225199819f;

        step[0] = (forward + gain) * cosine;
        step[2] = (forward + gain) * sine;
        velocity[0] = step[0];
        velocity[2] = step[2];
    } else {
        float loss = min_float((moving - wanted) * 32.0f, 2.0f) * -0.0027777778450399637f;

        step[0] = (forward + loss) * cosine;
        step[2] = (forward + loss) * sine;
        velocity[0] = step[0];
        velocity[2] = step[2];
        /* Asked to stand and all but standing: stands. */
        if (!(wanted >= 0.03333333507180214f) && !(sqrt_float(step[2] * step[2] + step[0] * step[0]) >= TICK)) {
            velocity[0] = 0.0f;
            velocity[2] = 0.0f;
            step[0] = 0.0f;
            step[2] = 0.0f;
        }
    }
    place[0] = step[0] + place[0];
    place[1] = step[1] + place[1];
    place[2] = step[2] + place[2];

    from[0] = world_y_axis_x * 2.0f + place[0];
    from[1] = world_y_axis_y * 2.0f + place[1];
    from[2] = world_y_axis_z * 2.0f + place[2];
    to[0] = place[0] - world_y_axis_x * 32.0f;
    to[1] = place[1] - world_y_axis_y * 32.0f;
    to[2] = place[2] - world_y_axis_z * 32.0f;
    type = traffic_car_type(car);
    ride = vehicle_type_wheels(type)[0].radius * 0.875f - vehicle_type_wheel_unknown_24(type);
    if (sub_1400DC050(from, to, 0))
        place[1] = collision_hit.point[1] + ride;

    rotation[0] = 1.0f;
    rotation[1] = 0.0f;
    rotation[2] = 0.0f;
    rotation[3] = 0.0f;
    rotation[4] = 1.0f;
    rotation[5] = 0.0f;
    rotation[6] = 0.0f;
    rotation[7] = 0.0f;
    rotation[8] = 1.0f;
    math_mat3_rotate_rows(rotation, rotation + 3, 1.5707963705062866f);
    math_mat3_rotate_rows(rotation, rotation + 3, traffic_car_yaw(car));
    {
        float back = -traffic_car_wheelbase(car);

        from[0] = back * rotation[6] + place[0];
        from[1] = back * rotation[7] + place[1];
        from[2] = back * rotation[8] + place[2];
        to[0] = from[0] - world_y_axis_x * 32.0f;
        to[2] = from[2] - world_y_axis_z * 32.0f;
        to[1] = from[1] - world_y_axis_y * 32.0f;
    }
    if (sub_1400DC050(from, to, 0)) {
        float height = collision_hit.point[1] + ride;

        from[1] = height;
        math_mat3_rotate_rows(rotation, rotation, -crt_atan2f(height - place[1], traffic_car_wheelbase(car)));
    }
}

void traffic_update(void)
{
    int32_t count;

    turn_lights();
    traffic_file_cars();
    count = traffic_car_count;
    for (int32_t car = 0; car < count; car++) {
        if (traffic_car_is_bot(car) == 1) {
            traffic_update_car(car);
            count = traffic_car_count;
        }
    }

    for (int32_t car = 0; car < count; car++) {
        int32_t vehicle = traffic_car_vehicle(car);

        if (vehicle != -1) {
            const uint32_t *position = (const uint32_t *)(const void *)physics_vehicles[vehicle].position;
            uint32_t *place = (uint32_t *)(void *)traffic_car_position(car);

            place[0] = position[0];
            place[1] = position[1];
            place[2] = position[2];
        }
    }
    if (count > 0) {
        int32_t turning = traffic_turns_on_streets_67_68;

        for (int32_t car = 0; car < count; car++) {
            traffic_car_state(car) = nearness(car);
            if (turning && (uint32_t)(traffic_car_box_street(car) - TRAFFIC_TURN_STREET_A) <= 1)
                traffic_car_state(car) = TRAFFIC_CAR_FAR;
        }
    }

    for (int32_t car = 0; car < count; car++) {
        int32_t state = traffic_car_state(car);

        if (state == TRAFFIC_CAR_NEAR) {
            if (traffic_car_vehicle(car) == -1) {
                make_vehicle(car);
                count = traffic_car_count;
            }
        } else if (state == TRAFFIC_CAR_FAR && traffic_car_is_bot(car) > 0) {
            /* A car a player left (2) is given back to its bot, with a new
               route from the street it is on. */
            if (traffic_car_is_bot(car) == 2 && traffic_car_box_street(car) != -1) {
                int to_street;
                int to_end;

                traffic_car_street(car) = traffic_car_box_street(car);
                traffic_car_crossing(car) = -1;
                to_street = crt_rand() % city_street_count;
                to_end = crt_rand() & 1;
                traffic_plan_route(car, traffic_car_box_street(car), 0, to_street, to_end);
                count = traffic_car_count;
                traffic_car_is_bot(car) = 1;
                traffic_car_is_aggressive(car) = 0;
            }
            if (!traffic_car_is_aggressive(car)) {
                if (traffic_car_vehicle(car) != -1)
                    world_vehicle_lifetime(traffic_car_vehicle(car)) = 0;
                if (traffic_car_human(car) != -1)
                    world_humans[traffic_car_human(car)].despawn_time = 0;
            }
        }
    }

    for (int32_t car = 0; car < count; car++) {
        int32_t vehicle = traffic_car_vehicle(car);

        if (vehicle != -1) {
            follow_vehicle(car, vehicle);
        } else {
            move_alone(car);
            count = traffic_car_count;
        }
    }
}
