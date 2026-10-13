/* Vehicles: what happens to each one during a tick. The records are
   PhysicsVehicle in physics.h; wheels and drive are in world.h. */
#ifndef SR_ENGINE_VEHICLE_H
#define SR_ENGINE_VEHICLE_H

#include "physics.h"
#include "world.h"

#define VEHICLE_TYPE_TRAIN 13

/* Event 4 (RosaServer: createEventUpdateVehicle) with b = 2: the vehicle
   has been destroyed. world_expire_vehicles records b = 3 when it goes. */
#define WORLD_EVENT_UPDATE_VEHICLE 4
#define VEHICLE_UPDATE_DESTROYED 2

/* Takes damage off a vehicle's health. Trains and vehicles already at 0 are
   left alone. When this brings the health to 0 or below and the game is
   connected, records the destroyed event with the vehicle's position and
   velocity. 0x14000B650 */
void vehicle_damage(int vehicle, int damage);

/* PhysicsVehicle.control: who works the vehicle's controls. */
#define VEHICLE_CONTROL_CAR 1
#define VEHICLE_CONTROL_HELICOPTER 2

#define VEHICLE_TYPE_9 9                     /* its automatic gearbox changes up earlier */

/* The controls as the driver set them, at vehicle + 0x3600 (RosaServer:
   gearX, steerControl, gearY, gasControl). */
typedef struct VehicleControls {
    float gear_x;                        /* gear stick, across: 0, 1 or 2 */
    float steer;                         /* radians, positive and negative for the two sides */
    float gear_y;                        /* gear stick: -1 the far row, 0 neutral, 1 the near row */
    float gas;                           /* above 0 the throttle, below 0 the brake */
    uint8_t unknown_3610[0x3620 - 0x3610];
    uint32_t flags;                      /* VEHICLE_INPUT_* */
} VehicleControls;

#define VEHICLE_INPUT_CLUTCH 2               /* opens the clutch while held */
#define VEHICLE_INPUT_HANDBRAKE 4
#define VEHICLE_INPUT_NO_DRIVER 0xFFFFFFFFu  /* every bit: neutral, brake on, the engine runs down */

#define vehicle_controls(v) (&SR_GLOBAL(VehicleControls, 0x15F2DC800ULL + 0x5168ULL * (uint64_t)(int64_t)(v)))

/* How the second front wheel's turn follows from the first's:
   cot(second) = (cot(first) * scale + offset) / scale (offset over scale:
   the wheels' distance across over their distance along the car).
   vehicle + 0x50D4. */
#define vehicle_steer_cot_offset(v) SR_GLOBAL(float, 0x15F2DE2D4ULL + 0x5168ULL * (uint64_t)(int64_t)(v))
#define vehicle_steer_cot_scale(v) SR_GLOBAL(float, 0x15F2DE2D8ULL + 0x5168ULL * (uint64_t)(int64_t)(v))

/* The sound of a gear going in. */
#define sound_gear_shift SR_GLOBAL(int32_t, 0x183E936D0ULL)

/* A car's controls for one tick: throttle and clutch follow the pedals, the
   gear follows the stick (or the automatic gearbox, which changes down
   below and up above set engine speeds, 30 ticks apart), the brake, the
   gear's ratio, both front wheels' turn from the steering control, and the
   engine's speed in turns per minute. A gear going in by hand makes a
   sound. 0x14010AA70 */
void vehicle_update_car_controls(int vehicle);

/* ---- wheels against the ground (vehicle_wheels.c) -------------------------- */

struct StreetTriangleList;

/* For its contacts a wheel is a flat disc: a centre, the direction of its
   axle and a radius (collision_wheel.c). What a test of one against a list
   of triangles reports: the nearest touch. */
typedef struct CollisionWheelHit {
    float point[3];
    float normal[3];
    float unknown_18;
    float distance;                      /* from the wheel's centre; 65536 when nothing is touched */
} CollisionWheelHit;

/* Where the edge a -> b crosses the plane through on_plane with the given
   normal: the point and *t, the fraction of the way. False when both ends
   lie on one side or the edge runs along the plane (*t may be written all
   the same). 0x140077B30 */
int collision_edge_plane(float point[3], const float normal[3], float *t, const float a[3], const float b[3],
                         const float on_plane[3]);

/* A wheel against the triangle a b c, whose unit normal is passed in. The
   wheel touches the face where the lowest point of its rim is inside the
   triangle and within the radius, or an edge where its plane crosses one;
   the touch nearest the centre gives point and *distance, and for an edge
   the normal is replaced by the direction from the touch to the centre.
   point and *distance are written even without a touch. True when the
   touch is nearer than the radius. 0x14003F0B0 */
int collision_wheel_triangle(float point[3], float normal[3], float *distance, const float centre[3],
                             const float axle[3], float radius, const float a[3], const float b[3], const float c[3]);

/* The same against every triangle of a list, each with the normal
   (c - a) x (b - a): the nearest touch in `hit`. 0x14003D830 */
int collision_wheel_triangles(CollisionWheelHit *hit, const struct StreetTriangleList *list, const float centre[3],
                              const float axle[3], float radius);

/* A wheel against the level itself is collision_wheel_level
   (collision_wheel_level.h). */

/* Set while the vehicle update adds the contacts of a vehicle's hull and
   cleared after them and after a wheel's; what reads it is not known yet.
   0x16B2A2EA0 */
#define vehicle_contact_soft SR_GLOBAL(int32_t, 0x16B2A2EA0ULL)

/* One wheel against the ground for a tick. The wheel is two discs of its
   radius at the ends of its axle (half_width to each side of the wheel
   body's centre along the body's x axis). Each disc is tested against the
   level and against the road triangles of the streets near the wheel; every
   touch adds a contact of the wheel's body with the world (friction 1.2).
   0x14010D0D0 */
void vehicle_collide_wheel(int vehicle, int wheel);

/* ---- trains (vehicle_train.c) ----------------------------------------------- */

/* A train car rides on two bogies, at vehicle + 0x4FBC: each a body of its
   own, held to the car by a rotation bond. */
typedef struct VehicleBogie {
    int32_t body;                        /* PhysicsBody */
    int32_t unknown_4;
    int32_t bond;                        /* PhysicsBond between the bogie and the car */
} VehicleBogie;

#define vehicle_bogies(v) (&SR_GLOBAL(VehicleBogie, 0x15F2DE1BCULL + 0x5168ULL * (uint64_t)(int64_t)(v)))
/* The railway street a train's bogie last stood on, -1 before the first.
   vehicle + 0x4FB0 */
#define vehicle_rail_street(v) SR_GLOBAL(int32_t, 0x15F2DE1B0ULL + 0x5168ULL * (uint64_t)(int64_t)(v))

#define STREET_RAILWAY 0                     /* Street.kind */

/* Appends every triangle of a street's triangle range (0..3) to the list,
   corners and normal, while the list has room. 0x1401885C0 */
void world_street_range_triangles(struct StreetTriangleList *list, int street, int range);

/* A train car for one tick. Its bogies' rotation bonds are set to swivel
   about the car's up axis. Then for each railway street whose box meets the
   car's (looked up through the street cells) the four wheel places of each
   bogie are tested half a unit below the bogie against the rails' triangles
   (ranges 0 and 1): a hit adds a frictionless contact holding the bogie up
   and makes that street the car's rail street. 0x14010C110 */
void vehicle_update_train(int vehicle);

/* ---- the vehicle stage of a tick (vehicle_tick.c) --------------------------- */

#define VEHICLE_CONTROL_NONE 3               /* such vehicles are left out of vehicle-vehicle contacts */

#define VEHICLE_TYPE_10 10                   /* never tested against a type 11 */
#define VEHICLE_TYPE_11 11
#define VEHICLE_TYPE_14 14                   /* makes no crash noise and takes no crash damage */
#define VEHICLE_TYPE_17 17                   /* has a part that swivels, and meets items with a convex mesh */

#define VEHICLE_FIELD(type, offset, v) SR_GLOBAL(type, 0x15F2D9200ULL + (offset) + 0x5168ULL * (uint64_t)(int64_t)(v))

/* RosaServer: windowStates. A train keeps in state 3 whether it is under
   way (see vehicle_update_all). vehicle + 0x27FC */
#define vehicle_window_states(v) (&VEHICLE_FIELD(int32_t, 0x27FCULL, v))
#define VEHICLE_UPDATE_PART_SET 0            /* event 4 update types sent with a part number */
#define VEHICLE_UPDATE_PART_CLEARED 6
#define TRAIN_UNDER_WAY_PART 3

/* A vehicle this one is joined to: the two never collide. vehicle + 0x3628 */
#define vehicle_joined_vehicle(v) VEHICLE_FIELD(int32_t, 0x3628ULL, v)

/* The swivelling part of a vehicle of type 17: how many it has (0 or more),
   the part's body and the rotation bond that holds it to the vehicle's
   body. vehicle + 0x4EC4 */
#define vehicle_swivel_count(v) VEHICLE_FIELD(int32_t, 0x4EC4ULL, v)
#define vehicle_swivel_body(v) VEHICLE_FIELD(int32_t, 0x4EC8ULL, v)
#define vehicle_swivel_bond(v) VEHICLE_FIELD(int32_t, 0x4EFCULL, v)

/* A train's timetable: ticks it has stood still near its stop, whether it
   runs the line backwards, and the stop it is heading for. vehicle + 0x4FAC */
#define vehicle_train_wait(v) VEHICLE_FIELD(int32_t, 0x4FACULL, v)
#define vehicle_train_reversed(v) VEHICLE_FIELD(int32_t, 0x4FB4ULL, v)
#define vehicle_train_stop(v) VEHICLE_FIELD(int32_t, 0x4FB8ULL, v)
#define TRAIN_STOP_TICKS 900

/* Noise gathered from sudden changes of velocity, let out as crash sounds.
   vehicle + 0x5140 */
#define vehicle_crash_noise(v) VEHICLE_FIELD(float, 0x5140ULL, v)
#define sound_vehicle_crash SR_GLOBAL(int32_t, 0x183E9361CULL)

/* Bodies at or below this height are under water and dragged much harder. */
#define world_water_level SR_GLOBAL(float, 0x1873DE440ULL)
/* Cleared at the start of the vehicle stage; what counts in it is not known
   yet. */
#define vehicle_stage_counter SR_GLOBAL(int32_t, 0x183F7CBECULL)

/* The level hit's block: its layer (-1: none), voxel and layout word, and
   the part of the block that was hit (bit 16 set when it can break off, the
   part number below). 0x151A848D4 */
#define collision_hit_block_layer SR_GLOBAL(int32_t, 0x151A848D4ULL)
#define collision_hit_block_voxel (&SR_GLOBAL(int32_t, 0x151A848D8ULL))
#define collision_hit_block_layout SR_GLOBAL(uint32_t, 0x151A848F0ULL)
#define collision_hit_block_part SR_GLOBAL(uint32_t, 0x151A848F4ULL)
/* -1 when the level sweep hit the level itself and not one of its objects.
   0x151A84908 */
#define collision_hit_object SR_GLOBAL(int32_t, 0x151A84908ULL)

/* Per vehicle type, 180,288 bytes apart: the points other code tests items
   against (0x1902B67B0), and type 17's convex mesh (0x1905A2DC8). Per item
   type: whether it has a convex mesh (+0), the mesh (+0x10E0) and its bound
   points (+0xF08). */
#define vehicle_type_item_points(type) ((void *)&SR_GLOBAL(uint8_t, 0x1902B67B0ULL + 0x2C040ULL * (uint64_t)(int64_t)(type)))
#define vehicle_type_17_mesh ((void *)&SR_GLOBAL(uint8_t, 0x1905A2DC8ULL))
#define item_type_has_mesh(type) SR_GLOBAL(int32_t, 0x182A7E180ULL + 0x13D0ULL * (uint64_t)(int64_t)(type))
#define item_type_mesh(type) ((void *)&SR_GLOBAL(uint8_t, 0x182A7F260ULL + 0x13D0ULL * (uint64_t)(int64_t)(type)))
#define item_type_points(type) ((void *)&SR_GLOBAL(uint8_t, 0x182A7F088ULL + 0x13D0ULL * (uint64_t)(int64_t)(type)))

#define WORLD_EVENT_BLOCK_PART_BROKEN 16

/* Breaks a part off a block when the hit allows it: the layer is one of the
   four, the voxel's x is not negative, the layout word is a block's (top
   three bits 100) and the part word has bit 16. Then, when connected,
   records event 16 (a = layer + x * 65536, b = y + z * 65536, c = the layout
   word, d = the part; the place and the velocity of what broke it, zeros
   for a null pointer) and marks the part gone in the voxel's layout word.
   Returns whether it broke. 0x14000B7D0 */
int world_break_block_part(uint32_t layer, int32_t x, uint32_t y, uint32_t z, uint32_t layout, int32_t part,
                           const float position[3], const float velocity[3]);

/* The vehicle stage of a tick, over all 512 vehicles, in five passes:
   1. each vehicle's change of velocity since the last tick: a hard one
      damages it and both feed the crash noise that is let out as sounds; a
      vehicle below -32 is given no time to live; drag on its body along its
      three axes, far stronger under water;
   2. its controls by kind (car, helicopter), a train's rails and timetable
      (it runs at 7/15 a tick, slower into curves, stops by its stop for 900
      ticks), every wheel (how far it hangs out, skid, turn, contacts with
      the ground), and the hull's corners against the level, breaking block
      parts and adding contacts;
   3. the swivelling part of type 17 vehicles;
   4. each vehicle against the items in its voxels, waking those it touches;
   5. each vehicle's hull corners against every other vehicle whose box
      meets its own.
   0x140108930 */
void vehicle_update_all(void);

/* ---- a ray against a hull (collision_hull_ray.c) ---------------------------- */

/* The ray from -> to against the hull of a vehicle (its type's hull mesh,
   placed by the vehicle's position and rotation). Nothing is tested when
   both ends are outside the vehicle's box on one side. The soonest hit is
   left in collision_hit: point, the face's normal, fraction (starting at 1)
   and part (the face). Returns whether there was one. 0x1400E21F0 */
int collision_ray_hull(int vehicle, const float from[3], const float to[3]);

/* ---- helicopters (vehicle_helicopter.c) ------------------------------------- */

/* The rotor is a body of its own (RosaServer: bladeBodyID), held to the
   helicopter's body by a bond. vehicle + 0x4FA8 */
#define vehicle_blade_body(v) VEHICLE_FIELD(int32_t, 0x4FA8ULL, v)
#define vehicle_blade_bond(v) VEHICLE_FIELD(int32_t, 0x4FACULL, v)

/* A helicopter for one tick. With a pilot in seat 0 (and the helicopter
   whole and unlocked) the rotor runs up by 10 a tick to 2000, otherwise
   down; the main and tail rotor angles turn with it. The bond that holds
   the rotor is set to bring the rotor level with the body. Then, with a
   pilot: drag on the body, the pedals' turn (steer), and sixteen blade
   elements round the rotor disc whose lift (collective: gas; cyclic: gear_x,
   gear_y) and drag push the rotor's body. 0x14010AF90 */
void vehicle_update_helicopter(int vehicle);

/* ---- making a vehicle (vehicle_spawn.c) --------------------------------------- */

/* More fields of a vehicle (RosaServer: lastDriverPlayerID, color,
   trafficCarID, numSeats). */
#define vehicle_last_driver(v) VEHICLE_FIELD(int32_t, 0x14ULL, v)
#define vehicle_color(v) VEHICLE_FIELD(uint32_t, 0x18ULL, v)
#define vehicle_traffic_car(v) VEHICLE_FIELD(int32_t, 0x3648ULL, v)
#define vehicle_unknown_5164(v) VEHICLE_FIELD(int32_t, 0x5164ULL, v)   /* -1 in a new vehicle */
/* 64-byte records copied from the type (count at + 0x7F8); what they are
   is not settled. */
#define vehicle_part_count(v) VEHICLE_FIELD(int32_t, 0x7F8ULL, v)
#define vehicle_parts(v) ((int32_t (*)[16])&VEHICLE_FIELD(int32_t, 0x7FCULL, v))
/* Seats: 12 bytes each, copied from the type. */
#define vehicle_seat_count(v) VEHICLE_FIELD(int32_t, 0x50DCULL, v)
#define vehicle_seats(v) (&VEHICLE_FIELD(uint8_t, 0x50E0ULL, v))

/* A vehicle type (RosaServer: VehicleType), 99,776 bytes each from
   0x192E9A680. */
#define VEHICLE_TYPE_FIELD(type_, offset, t) SR_GLOBAL(type_, 0x192E9A680ULL + (offset) + 0x185C0ULL * (uint64_t)(int64_t)(t))

/* A wheel as the type describes it, 80 bytes. */
typedef struct VehicleTypeWheel {
    int32_t unknown_0;                   /* becomes VehicleWheel.unknown_8 */
    int32_t unknown_4[4];                /* become VehicleWheel.unknown_14 */
    float mass;                          /* of the wheel's body */
    float radius;
    float unknown_1c;                    /* becomes VehicleWheel.unknown_38 */
    uint8_t unknown_20[0x2C - 0x20];
    float extension, spring, damping, grip;
    uint8_t unknown_3c[0x40 - 0x3C];
    int32_t unknown_40;                  /* becomes VehicleWheel.unknown_c */
    float mount[3];                      /* where the wheel hangs, in the hull's axes */
} VehicleTypeWheel;

_Static_assert(sizeof(VehicleTypeWheel) == 80, "VehicleTypeWheel size");

#define vehicle_type_control(t) VEHICLE_TYPE_FIELD(int32_t, 0x8ULL, t)
#define vehicle_type_mass(t) VEHICLE_TYPE_FIELD(float, 0x38ULL, t)
#define vehicle_type_part_count(t) VEHICLE_TYPE_FIELD(int32_t, 0x1458ULL, t)
#define vehicle_type_parts(t) ((const int32_t (*)[16])&VEHICLE_TYPE_FIELD(int32_t, 0x145CULL, t))
#define vehicle_type_acceleration(t) VEHICLE_TYPE_FIELD(float, 0x17874ULL, t)
#define vehicle_type_wheel_count(t) VEHICLE_TYPE_FIELD(int32_t, 0x17878ULL, t)
#define vehicle_type_wheels(t) (&VEHICLE_TYPE_FIELD(VehicleTypeWheel, 0x1787CULL, t))
/* The type's points, 20 bytes each from +0x48 (x, y, z and two more
   values), and its edges: pairs of points with a value, each pair once. */
#define vehicle_type_points(t) ((float (*)[5])(void *)&VEHICLE_TYPE_FIELD(float, 0x48ULL, t))
typedef struct VehicleTypeEdge {
    uint32_t value;
    uint32_t point_a, point_b;
} VehicleTypeEdge;
#define vehicle_type_edge_count(t) VEHICLE_TYPE_FIELD(int32_t, 0x854ULL, t)
#define vehicle_type_edges(t) (&VEHICLE_TYPE_FIELD(VehicleTypeEdge, 0x858ULL, t))
#define vehicle_type_steer_cot_offset(t) VEHICLE_TYPE_FIELD(float, 0x1827CULL, t)
#define vehicle_type_steer_cot_scale(t) VEHICLE_TYPE_FIELD(float, 0x18280ULL, t)
#define vehicle_type_seat_count(t) VEHICLE_TYPE_FIELD(int32_t, 0x18318ULL, t)
#define vehicle_type_seats(t) (&VEHICLE_TYPE_FIELD(uint8_t, 0x1831CULL, t))
/* Where the hull's body sits from the vehicle's place, in the vehicle's
   axes, and the body's inertia about its three axes. */
#define vehicle_type_body_offset(t) (&VEHICLE_TYPE_FIELD(float, 0x18528ULL, t))
#define vehicle_type_inertia(t) (&VEHICLE_TYPE_FIELD(float, 0x18540ULL, t))

/* Event 3 (RosaServer: createEventCreateVehicle): a = the vehicle, b = its
   type, c = its colour. */
#define WORLD_EVENT_VEHICLE_CREATED 3

/* What each connection has still to be sent about each vehicle: 0x10000
   for all of it. 0x1A8E3DBC0, 8 bytes per vehicle, 188,896 bytes per
   connection; the number of connections at 0x1AD04ADA0. */
#define net_connection_count SR_GLOBAL(int32_t, 0x1AD04ADA0ULL)
#define net_connection_vehicle_changes(c, v) \
    SR_GLOBAL(int32_t, 0x1A8E3DBC0ULL + 0x2E1E0ULL * (uint64_t)(int64_t)(c) + 8ULL * (uint64_t)(int64_t)(v))

/* Makes a vehicle of a type at a place: takes the first free vehicle,
   clears it, gives it 100 health, the type's controls, the colour, the
   handbrake on; creates the hull's body, a body for each wheel (with the
   type's wheel data), for a helicopter the rotor's body and for a train its
   two bogies, each held to the hull by a point bond and a rotation bond;
   copies the type's seats; records the created event when connected and
   marks the vehicle to be sent whole to every connection. `velocity` may be
   null. Returns the vehicle, or -1 when all 512 are taken. 0x14005BCA0 */
int vehicle_create(int type, const float position[3], const float velocity[3], const float rotation[9], uint32_t color);

/* ---- putting a type together (vehicle_type_build.c) ------------------------- */

/* Adds an edge between two of the type's points unless there is one
   already, either way round. 0x14010C850 */
void vehicle_type_add_edge(int type, uint32_t value, uint32_t point_a, uint32_t point_b);

/* Adds a part (64 bytes): its first five words and words 13 and 14 as
   given, words 5 to 8 set to -1. 0x14010C900 */
void vehicle_type_add_part(int type, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);

/* Adds a wheel between two of the type's points: where[1] of the way from
   the first to the second and lower by the extension (the wheel's words
   8 to 10: where it sits). The values are stored as given (floats pass as
   their bits). Returns the wheel's number. 0x14010CAC0 */
int vehicle_type_add_wheel(int type, uint32_t unknown_0, int point_a, int point_b, const float where[2], uint32_t radius,
                           uint32_t mass, uint32_t unknown_1c, float extension, uint32_t spring, uint32_t damping,
                           uint32_t grip);

/* A train at every train stop, 2 above it and facing as the stop does,
   each knowing its stop. 0x140061950 */
void vehicle_spawn_trains(void);

#endif
