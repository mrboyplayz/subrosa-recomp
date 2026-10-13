/* Traffic: how a traffic car drives. See traffic.h. */
#include "traffic.h"
#include "arith.h"
#include "crt.h"
#include "frame.h"
#include "math3d.h"
#include <math.h>

extern int crt_rand(void) __asm__("rand");                       /* the original's own, 0x14023B1B0 */

#define CRUISE_SPEED 0.2666666805744171f
#define CROSSING_SPEED 0.13333334028720856f
#define TICK 0.01666666753590107f
#define HALF_TICK 0.008333333767950535f
#define PASSING_SPEED 0.20000000298023224f                       /* the least an aggressive car is held to */
#define PI 0x1.921fb54442eeap+1
#define TWO_PI 0x1.921fb54442eeap+2

static float length3(const float v[3])
{
    return sqrt_float((v[0] * v[0] + v[1] * v[1]) + v[2] * v[2]);
}

static uint32_t lane_bit(int32_t lane)
{
    return 1u << ((uint32_t)lane & 31);
}

/* A new route from the end of the leg the car is on. */
static void plan_from(int car, int street, int to_street)
{
    int to_end = crt_rand() & 1;

    traffic_plan_route(car, street, traffic_car_route(car)[traffic_car_route_position(car)].end, to_street, to_end);
}

/* Where a point of the car lies along a street, from the street's first
   crossing. */
static float along_street(const float point[3], const float direction[3], const float origin[3])
{
    return ((point[1] - origin[1]) * direction[1] + (point[0] - origin[0]) * direction[0])
        + (point[2] - origin[2]) * direction[2];
}

/* The side of the car's box that is behind when it drives toward the
   street's start (`toward_start`) or away from it, as a distance along the
   street. */
static float rear_along_street(int car, int street, int toward_start)
{
    const float *direction = city_street_direction(street);
    const float *origin = city_crossing_position(city_street_crossings(street)[0]);
    float first = along_street(traffic_car_bounds(car), direction, origin);
    float second = along_street(traffic_car_bounds(car) + 3, direction, origin);

    if (toward_start) {
        if (!(first >= second))
            return first;
    } else if (first > second) {
        return first;
    }
    return second;
}

/* Streets 67 and 68: a car on one of them, on a leg that runs the wrong
   way, is turned round onto the other's lanes with a new route. */
static void turn_round(int car, int street)
{
    TrafficRouteLeg *leg = &traffic_car_route(car)[traffic_car_route_position(car)];
    int to_street;

    if (street == TRAFFIC_TURN_STREET_A) {
        if (!leg->end)
            return;
        leg->end = 0;
        to_street = TRAFFIC_TURN_STREET_B;
    } else if (street == TRAFFIC_TURN_STREET_B) {
        if (leg->end)
            return;
        leg->end = 1;
        to_street = TRAFFIC_TURN_STREET_A;
    } else {
        return;
    }
    traffic_car_lane(car) = subtract_int(subtract_int(city_street_lane_count(street), traffic_car_lane(car)), 1);
    if (!(crt_rand() & 1))
        to_street = crt_rand() % city_street_count;
    if (traffic_car_is_aggressive(car))
        to_street = traffic_random_street();
    plan_from(car, street, to_street);
}

/* Now and then a car that keeps its lane picks another: one over at random
   (rarely, and only when it drives straight on next), the side it will
   turn to, and always one of the lanes that run its way. */
static void choose_lane(int car, int street)
{
    int32_t position;
    int32_t wanted;
    int32_t top;

    if (traffic_car_route(car)[traffic_car_route_position(car) + 1].turn == 0 && !(crt_rand() & 0xFF)) {
        int up = crt_rand() & 1;

        traffic_car_lane_wanted(car) = up ? add_int(traffic_car_lane_wanted(car), 1)
                                          : subtract_int(traffic_car_lane_wanted(car), 1);
    }
    position = traffic_car_route_position(car);
    if (traffic_car_route(car)[position + 1].turn == -1)
        traffic_car_lane_wanted(car) = traffic_car_route(car)[position].end ? add_int(traffic_car_lane_wanted(car), 1)
                                                                             : subtract_int(traffic_car_lane_wanted(car), 1);
    if (traffic_car_route(car)[position + 1].turn == 1)
        traffic_car_lane_wanted(car) = traffic_car_route(car)[position].end ? subtract_int(traffic_car_lane_wanted(car), 1)
                                                                             : add_int(traffic_car_lane_wanted(car), 1);
    wanted = traffic_car_lane_wanted(car);
    if (!traffic_car_route(car)[position].end) {
        int32_t least = city_street_lanes_one_way(street);

        if (wanted < least) {
            wanted = least;
            traffic_car_lane_wanted(car) = least;
        }
        top = add_int(city_street_lane_count(street), -2);
    } else {
        if (wanted < 1) {
            wanted = 1;
            traffic_car_lane_wanted(car) = 1;
        }
        top = subtract_int(city_street_lanes_one_way(street), 1);
    }
    if (wanted > top)
        traffic_car_lane_wanted(car) = top;
}

/* Holds the car to `limit` when that is slower. Returns 1 when it was. */
static int hold_to(int car, float *speed, float limit)
{
    if (!(*speed > limit))
        return 0;
    traffic_car_speed(car) = limit;
    *speed = limit;
    return 1;
}

static void drive_on_street(int car, int street)
{
    int nearest = -1;
    int32_t position;
    int32_t lane;
    int32_t next_turn;
    int32_t next_street;
    int32_t wanted;
    int32_t crossing;
    int32_t here;
    int32_t arm;
    int32_t aggressive;
    int32_t box_street;
    int held = 0;
    int odd;
    const CityStreetLane *line;
    const TrafficRouteLeg *leg;
    const TrafficRouteLeg *next;
    const float *place;
    float target[3];
    float far_x, far_z;
    float direction[3];
    const float *across;
    float off, ahead, along, heading, yaw, turn, steer, step;
    float sine, cosine;
    float to_end, speed, slow;
    float probe_x, probe_y, probe_z;

    if (traffic_turns_on_streets_67_68)
        turn_round(car, street);

    position = traffic_car_route_position(car);
    if (position >= subtract_int(traffic_car_route_length(car), 1)) {
        int to_street;

        traffic_car_street(car) = street;
        traffic_car_crossing(car) = -1;
        to_street = crt_rand() % city_street_count;
        if (traffic_turns_on_streets_67_68)
            to_street = (street == TRAFFIC_TURN_STREET_A) + TRAFFIC_TURN_STREET_A;
        if (traffic_car_is_aggressive(car))
            to_street = traffic_random_street();
        plan_from(car, street, to_street);
        position = traffic_car_route_position(car);
    }

    /* The point of its lane it left from, and the end it drives to. */
    lane = traffic_car_lane(car);
    line = city_street_lane(street, lane);
    if (!traffic_car_route(car)[position].end) {
        target[0] = line->start[0];
        target[1] = line->start[1];
        target[2] = line->start[2];
        far_x = line->end[0];
        far_z = line->end[2];
    } else {
        target[0] = line->end[0];
        target[1] = line->end[1];
        target[2] = line->end[2];
        far_x = line->start[0];
        far_z = line->start[2];
    }
    next_turn = traffic_car_route(car)[position + 1].turn;

    if (!traffic_car_is_aggressive(car) && traffic_car_lane_wanted(car) == lane && !(crt_rand() & 0x7F))
        choose_lane(car, street);

    /* Changing lane: the faster it goes the quicker, eased in and out. */
    wanted = traffic_car_lane_wanted(car);
    if (wanted != lane) {
        float done = traffic_car_lane_change(car);
        float blend = (3.0f - (done + done)) * (done * done);
        const float *other;

        done = min_float(length3(traffic_car_velocity(car)) * 0.125f, HALF_TICK) + done;
        traffic_car_lane_change(car) = done;
        if (done > 1.0f) {
            traffic_car_lane(car) = wanted;
            traffic_car_lane_change(car) = 0.0f;
        }
        other = city_street_lane(street, wanted)->start;
        target[0] = target[0] + (other[0] - target[0]) * blend;
        target[1] = target[1] + (other[1] - target[1]) * blend;
        target[2] = target[2] + (other[2] - target[2]) * blend;
    }

    /* Steers at a point of its lane's line ahead of it: the farther off the
       line it is, the nearer the point. */
    position = traffic_car_route_position(car);
    direction[0] = city_street_direction(street)[0];
    direction[1] = city_street_direction(street)[1];
    direction[2] = city_street_direction(street)[2];
    if (traffic_car_route(car)[position].end) {
        direction[0] = -direction[0];
        direction[1] = -direction[1];
        direction[2] = -direction[2];
    }
    place = traffic_car_position(car);
    across = city_street_across(street);
    off = ((target[1] - place[1]) * across[1] + (target[0] - place[0]) * across[0]) + (target[2] - place[2]) * across[2];
    ahead = max_float(10.0f - fabsf(off) * 0.25f, 0.0f);
    along = (((direction[1] * ahead + place[1]) - target[1]) * direction[1]
             + ((direction[0] * ahead + place[0]) - target[0]) * direction[0])
        + ((direction[2] * ahead + place[2]) - target[2]) * direction[2];
    yaw = traffic_car_yaw(car);
    heading = crt_atan2f((along * direction[2] + target[2]) - place[2], (along * direction[0] + target[0]) - place[0]);
    if ((double)(yaw - heading) >= PI)
        heading = (float)((double)heading + TWO_PI);
    if ((double)(heading - yaw) >= PI)
        yaw = (float)((double)yaw + TWO_PI);
    turn = heading - yaw;
    if (!((double)turn >= -0x1.921fb54442eeap-1))
        turn = -0.7853981852531433f;
    else if ((double)turn > 0x1.921fb54442eeap-1)
        turn = 0.7853981852531433f;
    steer = traffic_car_steer(car);
    step = max_float(turn - steer, -0.0625f);
    if (step > 0.0625f)
        step = 0.0625f;
    traffic_car_steer(car) = steer + step;

    /* The lane to take on the next street: the outer one on the side it
       turns to, one of the two there at random. */
    next_street = traffic_car_route(car)[position + 1].street;
    traffic_car_next_lane(car) = traffic_car_lane(car);
    odd = crt_rand() & 1;
    position = traffic_car_route_position(car);
    leg = &traffic_car_route(car)[position];
    next = leg + 1;
    if (next->turn == 1)
        traffic_car_next_lane(car) = next->end ? odd + 1
                                               : add_int(subtract_int(city_street_lane_count(next_street), odd), -2);
    if (next->turn == -1) {
        int32_t one_way = city_street_lanes_one_way(next_street);

        traffic_car_next_lane(car) = next->end ? subtract_int(subtract_int(one_way, odd), 1) : add_int(one_way, odd);
    }

    /* How far its front is from the end of the lane; there it goes on to
       the crossing. */
    math_sine_cosine(traffic_car_yaw(car), &sine, &cosine);
    here = leg->street;
    crossing = (&city_street_crossings(street)[0])[(int64_t)leg->end ^ 1];
    to_end = (far_z - (sine * 4.0f + place[2])) * direction[2] + (far_x - (cosine * 4.0f + place[0])) * direction[0];
    arm = here == city_crossing_streets(crossing)[1];
    if (here == city_crossing_streets(crossing)[2])
        arm = 2;
    if (here == city_crossing_streets(crossing)[3])
        arm = 3;
    if (!(to_end >= 1.0f)) {
        traffic_car_crossing(car) = crossing;
        traffic_car_street(car) = -1;
    }

    /* The speed: slower toward the end of the street when it must stop
       there. */
    aggressive = traffic_car_is_aggressive(car);
    speed = CRUISE_SPEED;
    traffic_car_speed(car) = CRUISE_SPEED;
    if (aggressive && (to_end > 40.0f || next->turn == 0))
        speed = (float)add_int(multiply_int(traffic_aggressive_level, 8), 16) * TICK;
    slow = max_float((to_end - 4.0f) * HALF_TICK, 0.0f);
    speed = speed + (float)(car & 7) * HALF_TICK;
    if (!(to_end >= 6.0f))
        slow = 0.0f;
    if (!aggressive) {
        int32_t light = next_turn == -1 ? city_crossing_turn_lights(crossing)[arm] : city_crossing_lights(crossing)[arm];

        if (light < 2 && speed > slow)
            speed = slow;
    }
    traffic_car_speed(car) = speed;

    /* Near the end: not into the back of a car standing at the start of the
       lane it wants on the next street. */
    if (!(to_end >= 32.0f)) {
        traffic_scratch_car_count = 0;
        traffic_list_street_cars(next->street);
        if (traffic_scratch_car_count > 0) {
            int64_t end = next->end;
            int64_t count = traffic_scratch_car_count;

            for (int64_t i = 0; i < count; i++) {
                int32_t other = traffic_scratch_cars[i];

                if (other == car)
                    continue;
                if (!(traffic_car_lanes(other) & lane_bit(traffic_car_next_lane(car))))
                    continue;
                if (traffic_car_is_aggressive(car))
                    slow = max_float(slow, PASSING_SPEED);
                if (!(12.0f > (&traffic_car_end_distance(other)[0])[end]))
                    continue;
                if (length3(traffic_car_velocity(other)) >= 0.06666667014360428f)
                    continue;
                if (hold_to(car, &speed, slow))
                    held = 1;
            }
        }
    }

    /* The street whose box a point 12 ahead of it is in, other than the
       one it is listed on. */
    probe_x = cosine * 12.0f + place[0];
    probe_y = place[1];
    probe_z = sine * 12.0f + place[2];
    if (city_street_count > 0) {
        int32_t listed = traffic_car_box_street(car);

        for (int32_t s = 0, count = city_street_count; s < count; s++) {
            const float *box = city_street_traffic_box(s);

            if (s != listed && probe_x >= box[0] && !(probe_x > box[3]) && probe_z >= box[2] && !(probe_z > box[5])
                && probe_y >= box[1] && !(probe_y > box[4]))
                nearest = s;
        }
    }

    /* Behind the traffic on the street it is listed on, and on that one. */
    box_street = traffic_car_box_street(car);
    if (box_street != -1) {
        uint32_t lanes = traffic_car_lanes(car) | lane_bit(traffic_car_lane_wanted(car));
        int toward_start = !(cosine * city_street_direction(street)[0] + sine * city_street_direction(street)[2] >= 0.0f);
        float limit = traffic_speed_limit_behind(car, box_street, lanes, traffic_car_along(car), toward_start);

        if (aggressive)
            limit = max_float(limit, PASSING_SPEED);
        if (hold_to(car, &speed, limit))
            held = 1;
    }
    if (nearest != -1) {
        uint32_t lanes = lane_bit(traffic_car_lane_wanted(car));
        float facing = city_street_direction(nearest)[0] * cosine + city_street_direction(nearest)[2] * sine;
        int toward_start = !(facing >= 0.0f);
        /* Facing straight across it (0) the end is taken as when driving
           toward the start. */
        float rear = rear_along_street(car, nearest, !(facing > 0.0f));
        float limit = traffic_speed_limit_behind(car, nearest, lanes, rear, toward_start);

        if (aggressive)
            limit = max_float(limit, PASSING_SPEED);
        if (hold_to(car, &speed, limit))
            held = 1;
    }

    /* An aggressive car that is held up moves over a lane, and never quite
       stops. */
    if (aggressive) {
        if (held && !(speed >= 0.30000001192092896f) && traffic_car_lane_wanted(car) == lane) {
            int32_t moved = add_int(2 * (crt_rand() & 1) - 1, traffic_car_lane_wanted(car));
            int32_t top;

            traffic_car_lane_wanted(car) = moved;
            if (moved < 0) {
                moved = 0;
                traffic_car_lane_wanted(car) = 0;
            }
            top = subtract_int(city_street_lane_count(street), 1);
            if (moved > top)
                traffic_car_lane_wanted(car) = top;
        }
        if (CROSSING_SPEED > traffic_car_speed(car))
            traffic_car_speed(car) = CROSSING_SPEED;
    }
}

static void drive_over_crossing(int car)
{
    int32_t position = traffic_car_route_position(car);
    const TrafficRouteLeg *next = &traffic_car_route(car)[position + 1];
    int32_t from_street = traffic_car_route(car)[position].street;
    int32_t to_street = next->street;
    int32_t from_end = traffic_car_route(car)[position].end;
    int32_t next_lane;
    const CityStreetLane *line;
    const float *point;
    const float *from_direction;
    const float *to_direction;
    const float *place;
    float start[3], goal[3], corner[3], aim[3];
    float dx, dz, reach, distance, yaw, sine, cosine, front_x, front_z, t, u;
    float heading, against, turn, steer, step, speed, to_x, to_z, left;

    /* A curve from the end of the lane it left to the start of the lane it
       takes, by a corner point straight on from the first. */
    line = city_street_lane(from_street, traffic_car_lane(car));
    point = from_end ? line->start : line->end;
    start[0] = point[0];
    start[1] = point[1];
    start[2] = point[2];
    next_lane = traffic_car_next_lane(car);
    line = city_street_lane(to_street, next_lane);
    point = next->end ? line->end : line->start;
    goal[0] = point[0];
    goal[1] = point[1];
    goal[2] = point[2];
    from_direction = city_street_direction(from_street);
    to_direction = city_street_direction(to_street);
    dx = goal[0] - start[0];
    dz = goal[2] - start[2];
    reach = fabsf(((goal[1] - start[1]) * from_direction[1] + dx * from_direction[0]) + dz * from_direction[2]);
    if (fabsf((from_direction[1] * to_direction[1] + from_direction[0] * to_direction[0])
              + from_direction[2] * to_direction[2]) > 0.5f)
        reach = reach * 0.5f;
    if (from_end)
        reach = -reach;
    corner[0] = reach * from_direction[0] + start[0];
    corner[1] = reach * from_direction[1] + start[1];
    corner[2] = reach * from_direction[2] + start[2];
    distance = sqrt_float(dz * dz + dx * dx);
    if (is_zero_or_nan_quiet(distance)) {
        dx = 0.0f;
        dz = 0.0f;
    } else {
        float scale = 1.0f / distance;

        dx = dx * scale;
        dz = dz * scale;
    }

    /* How far along it the car's front is, a little more, and the point of
       the curve there. */
    yaw = traffic_car_yaw(car);
    math_sine_cosine(yaw, &sine, &cosine);
    place = traffic_car_position(car);
    reach = traffic_car_wheelbase(car) + 4.0f;
    front_x = cosine * reach + place[0];
    front_z = sine * reach + place[2];
    if (distance > 1.52587890625e-05f)
        t = ((front_z - start[2]) * dz + (front_x - start[0]) * dx) / distance;
    else
        t = 1.0f;
    t = max_float(t + 0.125f, 0.0f);
    if (t > 1.0f)
        t = 1.0f;
    u = 1.0f - t;
    aim[0] = (((corner[0] + corner[0]) * u + goal[0] * t) * t + (u * start[0]) * u) - place[0];
    aim[1] = ((corner[1] + corner[1]) * u + goal[1] * t) * t + (start[1] * u) * u;
    aim[2] = (((corner[2] + corner[2]) * u + goal[2] * t) * t + (start[2] * u) * u) - place[2];
    aim[1] = aim[1] - place[1];
    if (sqrt_float((aim[1] * aim[1] + aim[0] * aim[0]) + aim[2] * aim[2]) > 1.52587890625e-05f) {
        heading = crt_atan2f(aim[2], aim[0]);
        against = yaw;
    } else {
        against = traffic_car_yaw(car);
        heading = against;
    }
    turn = math_angle_difference(heading, against);
    if (!((double)turn >= -0x1.f6a7a29553aa4p-1))
        turn = -0.9817476868629456f;
    else if ((double)turn > 0x1.f6a7a29553aa4p-1)
        turn = 0.9817476868629456f;
    steer = traffic_car_steer(car);
    step = max_float(turn - steer, -0.25f);
    if (step > 0.25f)
        step = 0.25f;

    /* Slower the harder it steers, and when it turns. */
    speed = CROSSING_SPEED;
    traffic_car_speed(car) = CROSSING_SPEED;
    traffic_car_steer(car) = steer + step;
    if (next->turn == 0) {
        speed = CRUISE_SPEED;
        if (traffic_car_is_aggressive(car)) {
            if (game_type == 6)
                speed = (float)add_int(multiply_int(traffic_aggressive_level, 4), 16) * TICK;
            else
                speed = 0.4000000059604645f;
        }
    }
    {
        double room = 0.5 - (double)fabsf(step);

        traffic_car_speed(car) = (float)((room + room) * (double)speed);
    }

    /* Onto the next street once its front has reached the lane's start. */
    to_x = to_direction[0];
    to_z = to_direction[2];
    if (next->end) {
        to_x = -to_x;
        to_z = -to_z;
    }
    left = (goal[2] - (to_z * 4.0f + place[2])) * to_z + (goal[0] - (to_x * 4.0f + place[0])) * to_x;
    if (!(left >= 1.0f)) {
        if (traffic_car_route_position(car) < subtract_int(traffic_car_route_length(car), 1)) {
            position = traffic_car_route_position(car);
            traffic_car_route_position(car) = position + 1;
            traffic_car_street(car) = traffic_car_route(car)[position + 1].street;
            traffic_car_crossing(car) = -1;
            traffic_car_lane(car) = next_lane;
            traffic_car_lane_wanted(car) = next_lane;
        } else {
            /* The route has run out: back onto the street it came from. */
            int to;

            traffic_car_street(car) = from_street;
            traffic_car_crossing(car) = -1;
            crt_rand();
            to = (from_street == TRAFFIC_TURN_STREET_A) + TRAFFIC_TURN_STREET_A;
            if (traffic_car_is_aggressive(car))
                to = traffic_random_street();
            if ((uint32_t)(from_street - TRAFFIC_TURN_STREET_A) > 1)
                plan_from(car, from_street, to);
        }
    }

    /* Behind the traffic on the street it is going to. */
    if (to_street != -1) {
        uint32_t lanes = lane_bit(traffic_car_next_lane(car));
        int toward_start = traffic_car_route(car)[traffic_car_route_position(car) + 1].end != 0;
        float limit = traffic_speed_limit_behind(car, to_street, lanes, rear_along_street(car, to_street, toward_start),
                                                 toward_start);

        if (!(limit >= traffic_car_speed(car)))
            traffic_car_speed(car) = limit;
    }
}

void traffic_update_car(int car)
{
    int32_t stuck = traffic_car_stuck_ticks(car);
    int32_t street;

    if (stuck >= 180) {
        stuck++;
        if (stuck >= 320)
            stuck = 0;
    } else {
        const float *velocity = traffic_car_velocity(car);
        const float *rotation = traffic_car_rotation(car);

        if (!(length3(velocity) >= TICK)
            && (velocity[2] * rotation[8] + traffic_car_speed(car)) + (velocity[1] * rotation[7] + velocity[0] * rotation[6])
                > 0.06666667014360428f)
            stuck++;
        else
            stuck = 0;
    }
    traffic_car_stuck_ticks(car) = stuck;

    street = traffic_car_street(car);
    if (street != -1)
        drive_on_street(car, street);
    else if (traffic_car_crossing(car) != -1)
        drive_over_crossing(car);
}
