/* Traffic: the cars that drive themselves round the city (RosaServer:
   TrafficCar), the road network they follow and the routes they plan. */
#ifndef SR_ENGINE_TRAFFIC_H
#define SR_ENGINE_TRAFFIC_H

#include <stdint.h>
#include "memory.h"

/* ---- the road network ------------------------------------------------------- */

/* A place where a route can turn: an end of a street. 72 bytes each from
   0x15FE96284, their number before them. The last four fields are the
   route search's working data. */
typedef struct TrafficNode {
    float position[3];
    int32_t link_count;
    int32_t link[8];                     /* nodes that can be driven to from here */
    int32_t state;                       /* TRAFFIC_NODE_* */
    float cost;                          /* of the best way found here */
    int32_t parent;                      /* the node that way comes from */
    int32_t street;                      /* the street this node is an end of */
    int32_t end;                         /* which end (0 or 1) */
    int32_t avoided;                     /* not 0: routes through here count 256 more */
} TrafficNode;

_Static_assert(sizeof(TrafficNode) == 72, "TrafficNode size");

enum { TRAFFIC_NODE_UNSEEN = 0, TRAFFIC_NODE_OPEN = 1, TRAFFIC_NODE_DONE = 2 };

#define traffic_node_count SR_GLOBAL(int32_t, 0x15FE96280ULL)
#define traffic_nodes (&SR_GLOBAL(TrafficNode, 0x15FE96284ULL))
/* The node at each end of each street: [2 * street + end]. */
#define traffic_street_end_nodes (&SR_GLOBAL(int32_t, 0x1600D7290ULL))

/* The route search: where from, where to, and the way found (the nodes
   from the goal back to the start; length 0 while none is found). */
#define traffic_search_from SR_GLOBAL(int32_t, 0x1600D6284ULL)
#define traffic_search_to SR_GLOBAL(int32_t, 0x1600D6288ULL)
#define traffic_path_length SR_GLOBAL(int32_t, 0x1600D628CULL)
#define traffic_path (&SR_GLOBAL(int32_t, 0x1600D6290ULL))

/* A city street, 1,584 bytes each from 0x175FF3480 (only what the traffic
   reads): the crossing at each end, the number of lanes, and the traffic
   cars on it. */
#define CITY_STREET_FIELD(type, offset, s) SR_GLOBAL(type, 0x175FF3480ULL + (offset) + 0x630ULL * (uint64_t)(int64_t)(s))
#define city_street_crossings(s) (&CITY_STREET_FIELD(int32_t, 0xCULL, s))    /* [0], [1] */
/* Lanes: those in one direction come first, then those in the other. */
#define city_street_lanes_one_way(s) CITY_STREET_FIELD(int32_t, 0x18ULL, s)
#define city_street_lanes_other_way(s) CITY_STREET_FIELD(int32_t, 0x1CULL, s)
#define city_street_lane_count(s) CITY_STREET_FIELD(int32_t, 0x20ULL, s)
#define city_street_count SR_GLOBAL(int32_t, 0x175FF3464ULL)
#define city_street_car_count(s) CITY_STREET_FIELD(int32_t, 0x214ULL, s)
#define city_street_cars(s) (&CITY_STREET_FIELD(int32_t, 0x218ULL, s))
/* A lane (RosaServer: StreetLane), 28 bytes each from the street's +0x24:
   its two ends, `start` at the street's end 0. */
typedef struct CityStreetLane {
    int32_t direction;
    float start[3];
    float end[3];
} CityStreetLane;
#define city_street_lane(s, lane) (&CITY_STREET_FIELD(CityStreetLane, 0x24ULL + 0x1CULL * (uint64_t)(int64_t)(lane), s))
/* The way the street runs from its end 0 to its end 1, the way across it,
   and the box its traffic is looked for in (least corner, greatest corner). */
#define city_street_direction(s) (&CITY_STREET_FIELD(float, 0x1E4ULL, s))
#define city_street_across(s) (&CITY_STREET_FIELD(float, 0x1F0ULL, s))
#define city_street_traffic_box(s) (&CITY_STREET_FIELD(float, 0x1FCULL, s))  /* [6] */
/* More of a crossing (RosaServer: StreetIntersection, which starts 0x18
   bytes before its streets): its place, and for each of its four streets
   the state of the lights for driving on and for the turn -1; a car waits
   while its one is below 2. */
#define city_crossing_position(c) (&SR_GLOBAL(float, 0x175FD1470ULL + 0x88ULL * (uint64_t)(int64_t)(c)))
#define city_crossing_lights(c) (&SR_GLOBAL(int32_t, 0x175FD14B4ULL + 0x88ULL * (uint64_t)(int64_t)(c)))
#define city_crossing_turn_lights(c) (&SR_GLOBAL(int32_t, 0x175FD14C4ULL + 0x88ULL * (uint64_t)(int64_t)(c)))
/* Which of its streets has the green light, the ticks it has had it, and
   the ticks it gets (RosaServer: lightsState, lightsTimer, lightsTimerMax). */
#define city_crossing_green(c) SR_GLOBAL(int32_t, 0x175FD14A8ULL + 0x88ULL * (uint64_t)(int64_t)(c))
#define city_crossing_green_ticks(c) SR_GLOBAL(int32_t, 0x175FD14ACULL + 0x88ULL * (uint64_t)(int64_t)(c))
#define city_crossing_green_time(c) SR_GLOBAL(int32_t, 0x175FD14B0ULL + 0x88ULL * (uint64_t)(int64_t)(c))
/* The box cars are taken to be on the crossing in: least corner, greatest
   corner (only x and z are tested). */
#define city_crossing_traffic_box(c) (&SR_GLOBAL(float, 0x175FD14D4ULL + 0x88ULL * (uint64_t)(int64_t)(c)))  /* [6] */
#define city_crossing_count SR_GLOBAL(int32_t, 0x175FD145CULL)
/* A crossing, 136 bytes each from 0x175FD147C: the four streets that meet
   there, in order round it. */
#define city_crossing_streets(c) (&SR_GLOBAL(int32_t, 0x175FD147CULL + 0x88ULL * (uint64_t)(int64_t)(c)))

/* ---- traffic cars ----------------------------------------------------------- */

/* A leg of a car's route: a street, the end it is left by, and the turn
   taken into it (-1, 0 straight on, 1). */
typedef struct TrafficRouteLeg {
    int32_t street;
    int32_t unknown_4;
    int32_t end;
    int32_t unknown_c;
    int32_t turn;
} TrafficRouteLeg;

/* 1,532 bytes each from 0x15FD16260 (1,024 of them, their number after
   them). Only the fields named so far. */
#define TRAFFIC_CAR_FIELD(type, offset, c) SR_GLOBAL(type, 0x15FD16260ULL + (offset) + 0x5FCULL * (uint64_t)(int64_t)(c))
/* RosaServer: type (a vehicle type), humanID (its driver), vehicleID (-1
   while no vehicle stands for it), state. */
#define traffic_car_type(c) TRAFFIC_CAR_FIELD(int32_t, 0x0ULL, c)
#define traffic_car_human(c) TRAFFIC_CAR_FIELD(int32_t, 0x4ULL, c)
#define traffic_car_vehicle(c) TRAFFIC_CAR_FIELD(int32_t, 0x8ULL, c)
/* How near a player is: 2 near enough for the car to be a real vehicle, 1
   just beyond that, 0 far. */
#define traffic_car_state(c) TRAFFIC_CAR_FIELD(int32_t, 0xCULL, c)
#define TRAFFIC_CAR_FAR 0
#define TRAFFIC_CAR_NEAR 2
#define traffic_car_position(c) (&TRAFFIC_CAR_FIELD(float, 0x10ULL, c))
#define traffic_car_velocity(c) (&TRAFFIC_CAR_FIELD(float, 0x1CULL, c))
#define traffic_car_yaw(c) TRAFFIC_CAR_FIELD(float, 0x28ULL, c)
#define traffic_car_rotation(c) (&TRAFFIC_CAR_FIELD(float, 0x2CULL, c))      /* [9] */
/* What the update asks of the car: the steering, and the speed to keep. */
#define traffic_car_steer(c) TRAFFIC_CAR_FIELD(float, 0x50ULL, c)
#define traffic_car_speed(c) TRAFFIC_CAR_FIELD(float, 0x54ULL, c)
/* Its shape: how far its front and its back lie from its position along
   its heading (it is taken as 2 wide), and the distance between its axles
   (the circle it turns in has the radius wheelbase / tan(steer)). */
#define traffic_car_front(c) TRAFFIC_CAR_FIELD(float, 0x58ULL, c)
#define traffic_car_back(c) TRAFFIC_CAR_FIELD(float, 0x5CULL, c)
#define traffic_car_wheelbase(c) TRAFFIC_CAR_FIELD(float, 0x60ULL, c)
/* The box round its four corners in world axes: least corner, greatest
   corner. Measured along a street to find the room it takes there. */
#define traffic_car_bounds(c) (&TRAFFIC_CAR_FIELD(float, 0x64ULL, c))        /* [2][3] */
#define traffic_car_is_bot(c) TRAFFIC_CAR_FIELD(int32_t, 0x7CULL, c)
#define traffic_car_is_aggressive(c) TRAFFIC_CAR_FIELD(int32_t, 0x80ULL, c)
/* Where it is: on a street (then crossing is -1) or going over a crossing
   to the next leg's street (then street is -1). */
#define traffic_car_street(c) TRAFFIC_CAR_FIELD(int32_t, 0x590ULL, c)
#define traffic_car_crossing(c) TRAFFIC_CAR_FIELD(int32_t, 0x598ULL, c)
/* The lane it is moving to (the same as its lane when it keeps it), the
   lane it will take on the next leg's street, and how far the change of
   lane has got (0 to 1). */
#define traffic_car_lane_wanted(c) TRAFFIC_CAR_FIELD(int32_t, 0x5A0ULL, c)
#define traffic_car_next_lane(c) TRAFFIC_CAR_FIELD(int32_t, 0x5A4ULL, c)
#define traffic_car_lane_change(c) TRAFFIC_CAR_FIELD(float, 0x5ACULL, c)
/* Ticks it has stood still while asked to move: counts to 180, then on to
   320 whatever it does, and starts again. */
#define traffic_car_stuck_ticks(c) TRAFFIC_CAR_FIELD(int32_t, 0x5B0ULL, c)
#define traffic_car_box_street(c) TRAFFIC_CAR_FIELD(int32_t, 0x5B4ULL, c)    /* the street whose list it is in, or -1 */
#define traffic_car_box_crossing(c) TRAFFIC_CAR_FIELD(int32_t, 0x5B8ULL, c)  /* the crossing whose box it is in, or -1 */
/* From each end of that street's first lane, along the street: to the
   car's far side and to its near side. */
#define traffic_car_end_distance_far(c) (&TRAFFIC_CAR_FIELD(float, 0x5C4ULL, c))  /* [2] */
#define traffic_car_end_distance(c) (&TRAFFIC_CAR_FIELD(float, 0x5CCULL, c))      /* [2] */
#define traffic_car_color(c) TRAFFIC_CAR_FIELD(uint32_t, 0x5D8ULL, c)
#define traffic_car_count SR_GLOBAL(int32_t, 0x15FE95260ULL)
#define traffic_car_route_position(c) TRAFFIC_CAR_FIELD(int32_t, 0x84ULL, c)
#define traffic_car_route_length(c) TRAFFIC_CAR_FIELD(int32_t, 0x88ULL, c)
#define traffic_car_route(c) (&TRAFFIC_CAR_FIELD(TrafficRouteLeg, 0x8CULL, c))
#define traffic_car_lane(c) TRAFFIC_CAR_FIELD(int32_t, 0x59CULL, c)
#define traffic_car_along(c) TRAFFIC_CAR_FIELD(float, 0x5BCULL, c)           /* how far along its street */
#define traffic_car_along_end(c) TRAFFIC_CAR_FIELD(float, 0x5C0ULL, c)       /* the far end of the room it takes */
#define traffic_car_lanes(c) TRAFFIC_CAR_FIELD(uint32_t, 0x5D4ULL, c)        /* a bit for each lane it is in */

/* The cars of the street last looked at by traffic_speed_limit_behind. */
#define traffic_scratch_car_count SR_GLOBAL(int32_t, 0x15FD06200ULL)
#define traffic_scratch_cars (&SR_GLOBAL(int32_t, 0x15FD06204ULL))

/* Not 0 where streets 67 and 68 are a pair that traffic is turned round
   between: a car on one of them going the wrong way is turned to the other
   lanes and sent off again. Meaning not settled. */
#define traffic_turns_on_streets_67_68 SR_GLOBAL(int32_t, 0x183F7CB60ULL)
#define TRAFFIC_TURN_STREET_A 67
#define TRAFFIC_TURN_STREET_B 68
/* Sets the speed of aggressive cars (16 + 8 or 4 times it, sixtieths a
   tick). Meaning not settled. */
#define traffic_aggressive_level SR_GLOBAL(int32_t, 0x183F7C304ULL)

/* One step of the route search, unless a way has been found already: takes
   the open node with the least cost so far plus straight-line distance / 128
   to the goal, closes it and opens or improves the nodes it links to (each
   link costs 1, an avoided node 256 more). Reaching the goal writes the way
   back to the start into traffic_path. 0x14012C1F0 */
void traffic_search_step(void);

/* Plans a car's route from one street end to another: runs the search (at
   most 4096 steps) and writes the way found into the car's route as legs,
   with the turn at each crossing worked out from the order of the streets
   round it. Without a way the route is left empty. 0x140008E40 */
void traffic_plan_route(int car, int from_street, int from_end, int to_street, int to_end);

/* The speed a car may keep behind the other traffic on a street: for every
   other car there that shares a lane (the car's own lane must be among
   `lanes`) and lies ahead of `along` (ahead is toward smaller values when
   `toward_start`), that car's speed less what closes the gap; the least of
   them, never below 0, and 65536 when nothing is in the way. 0x140008BB0 */
float traffic_speed_limit_behind(int car, int street, uint32_t lanes, float along, int toward_start);

/* Adds the traffic cars on a street to the scratch list (which the caller
   empties first); street -1 adds nothing. 0x14018C250 */
void traffic_list_street_cars(int street);

/* A street drawn at random that has at most three lanes each way; after
   1024 draws without one, the last street drawn. 0 when there are no
   streets. 0x140130000 */
int traffic_random_street(void);

/* A traffic car's driving for one tick: sets its steering and the speed it
   is to keep. On a street it keeps to its lane (changing lane now and then,
   and for the turn ahead), slows for the end of the street, stops at a red
   light and behind standing cars, and keeps behind the traffic ahead; at
   the end it goes on to the crossing. Over a crossing it follows a curve
   from the lane it left to the lane it takes, then starts the next leg.
   When the route runs out a new one is planned to a random street.
   Aggressive cars drive faster, ignore the lights and change lane when
   held up. 0x140009E30 */
void traffic_update_car(int car);

/* Not 0: cars are not filed on the streets. Meaning not settled. */
#define traffic_filing_off SR_GLOBAL(int32_t, 0x16B2A2224ULL)

/* Files every traffic car on the street it is on: empties each street's
   list; then for each car works out the box round its corners, the street
   whose traffic box holds its position (the one it had while it still
   does, else the last that does) and the crossing whose box does; and on
   that street where its front and back lie along it, how far it is from
   each end, and which lanes it is within 2 of; and adds it to the street's
   list (at most 256). 0x14018B680 */
void traffic_file_cars(void);

/* The traffic for one tick: turns the crossings' lights (each street's
   turn lasts 800 ticks, the last 128 of them amber; crossings of fewer
   than three streets are always open); files the cars on the streets;
   drives every car a bot drives; then for each car: takes its place from
   its vehicle, finds how near a living player's human is (within 96, or 16
   of a bot's), makes its vehicle when one is near and lets vehicle and
   driver run out when none is; and either moves it as a point along its
   heading at the speed asked, set on the ground, or - with a vehicle -
   takes place, heading and velocity from the vehicle and works the
   vehicle's controls. From 180 stuck ticks the controls are set straight, in
   the other row of gears, at full throttle, and from 280 with the brake
   on. 0x14018A3E0 */
void traffic_update(void);

/* More of a street: not 0 gives its traffic cars another heading when they
   are made (a quarter turn from the usual). Meaning not settled. */
#define city_street_unknown_14(s) CITY_STREET_FIELD(int32_t, 0x14ULL, s)
/* More of a traffic car: the end its first leg left by, and a counter for
   each car that goes up when a car is made in its place. */
#define traffic_car_first_end(c) TRAFFIC_CAR_FIELD(int32_t, 0x594ULL, c)
#define traffic_car_unknown_5a8(c) TRAFFIC_CAR_FIELD(int32_t, 0x5A8ULL, c)
#define traffic_car_made_count(c) SR_GLOBAL(int32_t, 0x15FE95280ULL + 4ULL * (uint64_t)(int64_t)(c))

/* Makes a traffic car (RosaServer: createTrafficCar) of a vehicle type and
   colour on a street, driving toward the street's end `end` (0 or 1) in
   the lane `lane` in from the middle of the street, `along` of the way
   down the lane (0 to 1): at the height of the ground there (never below
   the street's two crossings), heading along the street, 3.5 long ahead
   and 0.5 behind with a wheelbase of 3, driven by a bot, with a route to a
   random street. Returns the car, the next in the table (which is not
   checked for room). 0x14012CEB0 */
int traffic_create_car(int type, uint32_t color, int street, int end, int lane, float along);

/* A bot player drives a vehicle that is a traffic car: the car becomes
   aggressive and is driven for a tick, and the steering and the speed it
   asks for become the player's controls (gear, steering, throttle or
   brake; a stuck car is backed out as in traffic_update). While the game
   is in state 1 the player only brakes. 0x140009A00 */
void traffic_drive_for_player(int player, int vehicle);

/* Builds the road network from the streets: two nodes for each street (the
   one for its end 0 at the middle of its last lane, the one for its end 1
   at the middle of its first), each linked to the nodes of the other
   streets at the crossing that end leads to: the first two of the
   crossing's streets by their end 0, the last two by their end 1. An end
   that leads nowhere links to the street's own other node and is marked
   avoided. 0x140009340 */
void traffic_build_network(void);

/* A crossing's unknown value at +4 (two crossings with the same one, on a
   street of three lanes one way, let a car be made in a third lane in game
   type 5). */
#define city_crossing_unknown_4(c) SR_GLOBAL(int32_t, 0x175FD1468ULL + 0x88ULL * (uint64_t)(int64_t)(c))

/* Makes `count` traffic cars on random streets (not streets 67 and 23
   where the traffic turns on 67 and 68), in either direction, in the first
   or second lane, anywhere along it, of vehicle type 7, 0, 9 or 15 (3, 6,
   4 and 2 chances in 16, and 1 more for 7) in one of six colours. A car
   made in the third lane is not driven by a bot. Nothing without streets.
   0x14012E960 */
void traffic_populate(int count);

#endif
