/* Bots (RosaServer Player.isBot): computer players that drive through the
 * city from intersection to intersection along a list of waypoints.
 */
#ifndef SR_ENGINE_BOT_H
#define SR_ENGINE_BOT_H

#include <stdint.h>
#include "memory.h"

/* One waypoint of a bot's drive: a point and the street that leads on from
   it. 0x20 bytes, 64 of them in the player record from +0x2D3C (RosaServer
   botDestination is the first one's position). */
typedef struct BotWaypoint {
    float position[3];
    int32_t street;                      /* CityStreet driven from here */
    int32_t heading;                     /* planned routes: the side of the intersection the street
                                            leaves by (CITY_EAST..); bot_plan_next_leg stores only
                                            whether the street is driven backwards (0/1) */
    int32_t reverse;                     /* 1: driven from intersections[1] to intersections[0] */
    int32_t lane;                        /* 0 or 1 */
    int32_t turn;                        /* -1 or +1 for a turn by a right angle, else 0 */
} BotWaypoint;

#define BOT_PLAYER_STRIDE 0x3834ULL
#define BOT_MAX_WAYPOINTS 64
#define bot_player_field(type, offset, player) \
    SR_GLOBAL(type, 0x151620C60ULL + (offset) + BOT_PLAYER_STRIDE * (uint64_t)(int64_t)(player))

/* The waypoint being driven to, and how many there are (RosaServer
   botHasDestination: nonzero when there is one). */
#define bot_waypoint_index(player)  bot_player_field(int32_t, 0x2D34ULL, player)
#define bot_waypoint_count(player)  bot_player_field(int32_t, 0x2D38ULL, player)
#define bot_waypoints(player)       (&bot_player_field(BotWaypoint, 0x2D3CULL, player))
/* The grid column and row of the intersection the bot drives to. */
#define bot_target_column(player)   bot_player_field(int32_t, 0x353CULL, player)
#define bot_target_row(player)      bot_player_field(int32_t, 0x3540ULL, player)
/* The intersection a planned route starts from (-1: none). */
#define bot_route_start(player)     bot_player_field(int32_t, 0x3548ULL, player)

_Static_assert(sizeof(BotWaypoint) == 0x20, "BotWaypoint size");
_Static_assert(0x2D3C + BOT_MAX_WAYPOINTS * 0x20 == 0x353C, "waypoints end at the target");

/* At the end of the current waypoint's street, picks the street the next
   one drives: toward the target intersection (a new random one once it is
   reached), never back down the street just driven. Returns the original's
   leftover RAX (see bot.c). 0x1400090C0 */
int64_t bot_plan_next_leg(int player);

/* Plans a whole route of up to 32 waypoints, starting with `street` driven
   by `heading`/`reverse`, through the grid to the intersection at
   (target_column, target_row), never leaving an intersection by the same
   side twice. Returns the original's leftover RAX (see bot.c). 0x1400096B0 */
int64_t bot_plan_route(int player, int street, int heading, int reverse, int target_column, int target_row);

#endif
