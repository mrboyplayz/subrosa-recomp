/* Bots driving through the city: choosing the next street at an
 * intersection, and planning a whole route. Checked against the original
 * machine code at 0x1400090C0 and 0x1400096B0.
 */
#include <string.h>
#include "bot.h"
#include "city.h"

extern int rand(void);                   /* the original's own, 0x14023B1B0 */

/* Both routines compare an intersection's column with a column word inside
   the intersection table: bots east of it keep to the row, bots west of it
   head along the column. bot_plan_next_leg reads intersection 4's column
   (0x175FD1684), bot_plan_route intersection 115's (0x175FD517C). */
#define next_leg_turning_column (city_intersections[4].cell[0])
#define route_turning_column    (city_intersections[115].cell[0])

int64_t bot_plan_next_leg(int player)
{
    int index = bot_waypoint_index(player);
    BotWaypoint *leg = &bot_waypoints(player)[index];
    int street = leg->street;
    int at = city_streets[street].intersections[leg->heading ^ 1];
    CityIntersection *crossing = &city_intersections[at];
    int side, arrived_on, tries;

    /* Which side of the intersection the bot came in on (east also when
       the street is on none of the other three). */
    arrived_on = CITY_EAST;
    if (street == crossing->streets[CITY_SOUTH])
        arrived_on = CITY_SOUTH;
    if (street == crossing->streets[CITY_WEST])
        arrived_on = CITY_WEST;
    if (street == crossing->streets[CITY_NORTH])
        arrived_on = CITY_NORTH;

    /* Arrived: drive to a random intersection next. */
    if (crossing->cell[0] == bot_target_column(player) && crossing->cell[2] == bot_target_row(player)) {
        int next = city_intersection_count > 0 ? rand() % city_intersection_count : 0;
        bot_target_column(player) = city_intersections[next].cell[0];
        bot_target_row(player) = city_intersections[next].cell[2];
    }

    /* The side to leave by: along the row toward the target, or along the
       column toward its row. */
    side = CITY_WEST;
    if (crossing->cell[2] == bot_target_row(player)) {
        if (crossing->cell[0] < bot_target_column(player))
            side = CITY_EAST;
    } else if (crossing->cell[0] < next_leg_turning_column && arrived_on != CITY_EAST) {
        side = CITY_EAST;
    } else if (crossing->cell[0] <= next_leg_turning_column || arrived_on == CITY_WEST) {
        side = crossing->cell[2] < bot_target_row(player) ? CITY_SOUTH : CITY_NORTH;
    }

    /* Not back the way it came and not where there is no street: else try
       random sides, 512 times at most (the last pick is taken unchecked). */
    for (tries = 0; tries < 512; tries++) {
        int out = crossing->streets[side];
        if (out != street && out != -1)
            break;
        side = rand() & 3;
    }

    leg = &bot_waypoints(player)[bot_waypoint_index(player) + 1];
    leg->street = crossing->streets[side];
    leg->heading = side >= CITY_WEST;
    leg->lane = rand() & 1;
    leg->turn = 0;
    if (side == ((arrived_on + 1) & 3))
        leg->turn = -1;
    if (side == ((arrived_on - 1) & 3)) {
        leg->turn = 1;
        /* The original leaves the next waypoint's byte offset in RAX here,
           and (arrived_on - 1) & 3 otherwise; no caller reads it. */
        return (int64_t)player * (int64_t)BOT_PLAYER_STRIDE + 32 * (int64_t)bot_waypoint_index(player);
    }
    return (arrived_on - 1) & 3;
}

/* The order in which bot_plan_route tries the sides of an intersection.
   Only the first three are checked; the fourth is taken as it is. */
static const int32_t east_first[4]  = { CITY_EAST,  CITY_SOUTH, CITY_NORTH, CITY_WEST  };   /* 0x140278F20 */
static const int32_t west_first[4]  = { CITY_WEST,  CITY_SOUTH, CITY_NORTH, CITY_EAST  };   /* 0x140278DF0 */
static const int32_t south_first[4] = { CITY_SOUTH, CITY_EAST,  CITY_WEST,  CITY_NORTH };   /* 0x140278F40 */
static const int32_t north_first[4] = { CITY_NORTH, CITY_EAST,  CITY_WEST,  CITY_SOUTH };   /* 0x140278EF0 */

int64_t bot_plan_route(int player, int street, int heading, int reverse, int target_column, int target_row)
{
    /* Sides already left by, per intersection: a route never repeats one. */
    int32_t used[1024][4];
    BotWaypoint *route = bot_waypoints(player);
    int at, count;

    memset(used, 0, sizeof used);
    bot_waypoint_index(player) = 0;
    bot_waypoint_count(player) = 0;

    at = city_streets[street].intersections[reverse ? 0 : 1];
    bot_route_start(player) = at;
    route[0].street = street;
    route[bot_waypoint_count(player)].heading = heading;
    route[bot_waypoint_count(player)].reverse = reverse;
    count = ++bot_waypoint_count(player);

    while (count < 32) {
        CityIntersection *crossing = &city_intersections[at];
        const int32_t *order;
        int previous = heading;
        int k, next, turn;

        if (crossing->cell[0] == target_column && crossing->cell[2] == target_row)
            return (uint32_t)crossing->cell[0];

        /* Along the row once on the target's row, else first along the
           row to the turning column and then down the column. */
        if (crossing->cell[2] == target_row)
            order = target_column > crossing->cell[0] ? east_first : west_first;
        else if (crossing->cell[0] < route_turning_column)
            order = east_first;
        else if (crossing->cell[0] > route_turning_column)
            order = west_first;
        else
            order = target_row > crossing->cell[2] ? south_first : north_first;

        /* The first side with a street, not left by before and not the way
           back; the fourth in the order if none of the first three is. */
        for (k = 0; k < 3; k++) {
            int side = order[k];
            if (crossing->streets[side] != -1 && !used[at][side] && side != ((previous - 2) & 3))
                break;
        }
        heading = order[k];
        next = crossing->streets[heading];
        if (next == -1)
            return (int64_t)at * 34 + heading;
        used[at][heading] = 1;

        route[count].street = next;
        route[bot_waypoint_count(player)].heading = heading;
        /* The turn at this intersection, -2..+2 (a U-turn is either);
           only a turn by a right angle is kept, on the waypoint before. */
        turn = heading - previous;
        if (turn < -1)
            turn += 4;
        else if (turn > 1)
            turn -= 4;
        route[bot_waypoint_count(player)].turn = 0;
        if (bot_waypoint_count(player) > 0 && (turn == -1 || turn == 1))
            route[bot_waypoint_count(player) - 1].turn = turn;

        route[bot_waypoint_count(player)].reverse = heading >= CITY_WEST;
        count = ++bot_waypoint_count(player);
        at = city_streets[next].intersections[heading >= CITY_WEST ? 0 : 1];
    }
    return count;
}
