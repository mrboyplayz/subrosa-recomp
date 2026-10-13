/* Traffic: routes through the road network, and keeping behind the car in
   front. See traffic.h. */
#include "traffic.h"
#include "arith.h"

extern int crt_rand(void) __asm__("rand");                       /* the original's own, 0x14023B1B0 */

#define SEARCH_STEP_LIMIT 4096
#define AVOIDED_COST 256.0f

/* The way from the goal back to the start, by each node's parent. */
static void write_path(int32_t node)
{
    traffic_path[0] = node;
    traffic_path_length = 1;
    while (node != traffic_search_from) {
        node = traffic_nodes[node].parent;
        traffic_path[traffic_path_length] = node;
        traffic_path_length++;
    }
}

void traffic_search_step(void)
{
    const TrafficNode *goal;
    TrafficNode *best;
    int32_t best_index = 0;
    float least = 65536.0f;

    if (traffic_path_length > 0)
        return;

    goal = &traffic_nodes[traffic_search_to];
    for (int32_t i = 0; i < traffic_node_count; i++) {
        const TrafficNode *node = &traffic_nodes[i];
        float dx, dy, dz, estimate;

        if (node->state != TRAFFIC_NODE_OPEN)
            continue;
        dx = goal->position[0] - node->position[0];
        dy = goal->position[1] - node->position[1];
        dz = goal->position[2] - node->position[2];
        estimate = (sqrt_float(((dy * dy) + (dx * dx)) + (dz * dz)) * 0.0078125f) + node->cost;
        if (least > estimate) {
            best_index = i;
            least = estimate;
        }
    }

    best = &traffic_nodes[best_index];
    if (best->state != TRAFFIC_NODE_OPEN)
        return;
    best->state = TRAFFIC_NODE_DONE;
    for (int32_t k = 0; k < best->link_count; k++) {
        int32_t index = best->link[k];
        TrafficNode *node = &traffic_nodes[index];

        if (node->state == TRAFFIC_NODE_DONE)
            continue;
        if (node->state == TRAFFIC_NODE_UNSEEN)
            node->state = TRAFFIC_NODE_OPEN;
        else if (best->cost + 1.0f >= node->cost)
            continue;
        node->parent = best_index;
        node->cost = best->cost + 1.0f;
        if (node->avoided)
            node->cost = node->cost + AVOIDED_COST;
        if (index == traffic_search_to) {
            write_path(index);
            return;
        }
    }
}

void traffic_plan_route(int car, int from_street, int from_end, int to_street, int to_end)
{
    TrafficRouteLeg *route = traffic_car_route(car);
    int32_t slot = to_end, next_slot = to_end;

    traffic_search_from = traffic_street_end_nodes[2 * from_street + from_end];
    traffic_search_to = traffic_street_end_nodes[2 * to_street + to_end];
    for (int32_t i = 0; i < traffic_node_count; i++) {
        traffic_nodes[i].state = TRAFFIC_NODE_UNSEEN;
        traffic_nodes[i].cost = 0.0f;
    }
    traffic_nodes[traffic_search_from].state = TRAFFIC_NODE_OPEN;
    traffic_path_length = 0;
    for (int step = 0; step < SEARCH_STEP_LIMIT && traffic_path_length == 0; step++)
        traffic_search_step();

    traffic_car_route_position(car) = 0;
    traffic_car_route_length(car) = 0;
    route[0].turn = 0;

    /* The path runs from the goal back to the start; the route takes it the
       other way round. */
    for (int32_t i = traffic_path_length - 1; i >= 0; i--) {
        const TrafficNode *node = &traffic_nodes[traffic_path[i]];
        int32_t street = node->street, end = node->end;
        int32_t leg = traffic_car_route_length(car);
        int32_t crossing, turn;

        route[leg].street = street;
        route[leg].end = end;
        traffic_car_route_length(car) = leg + 1;
        if (i == 0)
            continue;

        /* Which way the next street leaves the crossing this one ends at:
           the streets' places round the crossing are one apart for a turn.
           (A street not found there keeps the place found last time.) */
        crossing = end ? city_street_crossings(street)[0] : city_street_crossings(street)[1];
        for (int32_t k = 0; k < 4; k++) {
            int32_t there = city_crossing_streets(crossing)[k];

            if (there == street)
                slot = k;
            if (there == traffic_nodes[traffic_path[i - 1]].street)
                next_slot = k;
        }
        turn = slot - next_slot;
        if (turn < -1)
            turn += 4;
        else if (turn > 1)
            turn -= 4;
        route[leg + 1].turn = 0;
        if (turn == -1)
            route[traffic_car_route_length(car)].turn = -1;
        else if (turn == 1)
            route[traffic_car_route_length(car)].turn = 1;
    }
}

float traffic_speed_limit_behind(int car, int street, uint32_t lanes, float along, int toward_start)
{
    float limit = 65536.0f;
    int32_t count;

    traffic_scratch_car_count = 0;
    if (street == -1)
        return limit;
    count = city_street_car_count(street);
    for (int32_t i = 0; i < count; i++) {
        traffic_scratch_cars[traffic_scratch_car_count] = city_street_cars(street)[i];
        traffic_scratch_car_count++;
    }

    count = traffic_scratch_car_count;
    for (int32_t i = 0; i < count; i++) {
        int32_t other = traffic_scratch_cars[i];
        const float *velocity;
        uint32_t lane_bit = 1;
        int shares_lane = 0;
        float speed, allowed;

        if (other == car)
            continue;
        for (int32_t lane = 0; lane < city_street_lane_count(street); lane++) {
            if (lane == traffic_car_lane(car) && (lane_bit & lanes) && (lane_bit & traffic_car_lanes(other)))
                shares_lane = 1;
            lane_bit = lane_bit << 1 | lane_bit >> 31;
        }
        if (!shares_lane)
            continue;

        velocity = traffic_car_velocity(other);
        speed = sqrt_float(((velocity[0] * velocity[0]) + (velocity[1] * velocity[1])) + (velocity[2] * velocity[2]));
        if (toward_start) {
            if (!(along > traffic_car_along(other)))
                continue;
            allowed = speed - (((traffic_car_along_end(other) - along) * 0.008333334f) + 0.016666668f);
        } else {
            if (along >= traffic_car_along(other))
                continue;
            allowed = speed + (((traffic_car_along_end(other) - along) - 2.0f) * 0.008333334f);
        }
        limit = min_float(max_float(allowed, 0.0f), limit);
    }
    return limit;
}

void traffic_list_street_cars(int street)
{
    if (street == -1)
        return;
    for (int32_t i = 0, count = city_street_car_count(street); i < count; i++) {
        traffic_scratch_cars[traffic_scratch_car_count] = city_street_cars(street)[i];
        traffic_scratch_car_count++;
    }
}

int traffic_random_street(void)
{
    int street;

    if (!city_street_count)
        return 0;
    street = crt_rand() % city_street_count;
    for (int draws = 0; draws < 1024; draws++) {
        if (city_street_lanes_one_way(street) <= 3 && city_street_lanes_other_way(street) <= 3)
            break;
        street = crt_rand() % city_street_count;
    }
    return street;
}

/* The middle of a lane. */
static void lane_middle(float out[3], const CityStreetLane *lane)
{
    out[0] = (lane->end[0] + lane->start[0]) * 0.5f;
    out[1] = (lane->start[1] + lane->end[1]) * 0.5f;
    out[2] = (lane->start[2] + lane->end[2]) * 0.5f;
}

void traffic_build_network(void)
{
    int32_t streets = city_street_count;

    traffic_node_count = 0;
    for (int32_t s = 0; s < streets; s++) {
        float last[3], first[3];
        TrafficNode *node;

        lane_middle(last, city_street_lane(s, (int64_t)city_street_lane_count(s) - 1));
        node = &traffic_nodes[traffic_node_count];
        node->position[0] = last[0];
        node->position[1] = last[1];
        node->position[2] = last[2];
        lane_middle(first, city_street_lane(s, 0));
        node->street = s;
        node->end = 0;
        traffic_street_end_nodes[2 * (int64_t)s] = traffic_node_count;
        node->avoided = 0;
        traffic_node_count++;

        node = &traffic_nodes[traffic_node_count];
        node->position[0] = first[0];
        node->position[1] = first[1];
        node->position[2] = first[2];
        node->street = s;
        node->end = 1;
        traffic_street_end_nodes[2 * (int64_t)s + 1] = traffic_node_count;
        node->avoided = 0;
        traffic_node_count++;
    }

    for (int32_t n = 0; n < traffic_node_count; n++) {
        TrafficNode *node = &traffic_nodes[n];
        int32_t street = node->street;
        int32_t crossing;

        node->link_count = 0;
        crossing = node->end ? city_street_crossings(street)[0] : city_street_crossings(street)[1];
        if (crossing == -1)
            continue;
        for (int k = 0; k < 4; k++) {
            int32_t other = city_crossing_streets(crossing)[k];

            if (other == -1 || other == street)
                continue;
            node->link[node->link_count] = traffic_street_end_nodes[2 * (int64_t)other + (k >= 2)];
            node->link_count++;
        }
        if (!node->link_count) {
            node->avoided = 1;
            node->link[0] = traffic_street_end_nodes[2 * (int64_t)street + (node->end == 0)];
            node->link_count++;
        }
    }
}
