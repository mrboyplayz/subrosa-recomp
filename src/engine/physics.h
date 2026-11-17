/* Rigid-body physics: bodies, the bonds (joints) between them, and the
 * impulse solver that keeps bonded bodies together.
 *
 * The layouts follow the server's declarations in RosaServer's structs.h
 * where the client's machine code agrees with them; fields the client uses
 * differently, or whose meaning is not settled, are named unknown_<offset>.
 *
 * Each function is a rewrite of one routine of the original executable and
 * produces the same memory contents, bit for bit. The original address is
 * given next to every declaration.
 */
#ifndef SR_ENGINE_PHYSICS_H
#define SR_ENGINE_PHYSICS_H

#include <stdint.h>
#include "memory.h"

/* ---- bodies -------------------------------------------------------------- */

enum {
    PHYSICS_BODY_BONE = 0,
    PHYSICS_BODY_CAR = 1,
    PHYSICS_BODY_WHEEL = 2,
    PHYSICS_BODY_ITEM = 3
};

/* 0x1449816E0, 188 bytes each. */
typedef struct PhysicsBody {
    int32_t active;
    int32_t type;                        /* PHYSICS_BODY_* */
    int32_t settled;
    int32_t unknown_c;                   /* RosaServer: owning human or item */
    int32_t unknown_10;                  /* RosaServer: bone */
    float mass;
    float position[3];
    float velocity[3];
    float velocity_change[3];            /* impulses gathered during a solve */
    float rotation[9];                   /* rows are the body's axes */
    float angular_momentum[3];
    float angular_velocity[3];
    float angular_velocity_change[3];    /* impulses gathered during a solve */
    float unknown_84[3];
    float inverse_inertia[3];            /* about the body's own axes */
    float unknown_9c;                    /* angular momentum is limited to 8 times this; also scales bond rotation */
    uint8_t unknown_a0[0xB8 - 0xA0];
    float friction_work;                 /* sliding against the level during the last solve */
} PhysicsBody;

#define PHYSICS_BODY_CAPACITY 8192

#define physics_bodies (&SR_GLOBAL(PhysicsBody, 0x1449816E0ULL))

/* Active, unsettled bodies: gravity, translation, then their rotation
   stage. Calls the shared rotation entry point. 0x14012B220 */
void physics_integrate_bodies(void);

/* ---- points ---------------------------------------------------------------- */

/* Point masses joined by links and contacts (bonds with point[] indices).
   0x151A84920, 240 bytes each; the count follows the array. */
typedef struct PhysicsPoint {
    int32_t unknown_0;
    int32_t lifetime;                    /* ticks left; from 0x10000 never expires; 0 removes the point */
    float mass;
    float gravity;                       /* taken off the y velocity every tick */
    int32_t unknown_10;
    float position[3];
    float previous_position[3];          /* before this tick's move */
    float velocity[3];
    float previous_velocity[3];          /* the velocity this tick's move used */
    uint8_t unknown_44[0x50 - 0x44];
    int32_t bond_count;
    int32_t bonds[32];                   /* PhysicsBond indices */
    int32_t vehicle_count;               /* vehicles whose point lists hold this point */
    int32_t vehicles[6];
} PhysicsPoint;

#define physics_points      (&SR_GLOBAL(PhysicsPoint, 0x151A84920ULL))
#define PHYSICS_POINT_CAPACITY 0x4000

#define physics_point_count SR_GLOBAL(int32_t, 0x151E44920ULL)
/* Set: points get no gravity. 0x16B27ECF4 */
#define physics_points_no_gravity SR_GLOBAL(int32_t, 0x16B27ECF4ULL)

/* Velocities of the points while a solve runs, and their gathered changes.
   The array lives in the client's data section (0x140384000), outside the
   shared state region. */
typedef struct PhysicsPointScratch {
    float velocity[4];
    float change[4];
} PhysicsPointScratch;

extern float flt_140384000[];
#define physics_point_scratch     ((PhysicsPointScratch *)(void *)flt_140384000)
/* Number of the solver iteration running, 0x140404000. */
#define physics_solver_iteration  (*(int32_t *)(void *)&flt_140384000[0x20000])

/* Set: the point solve updates all four lanes of each scratch vector. */
#define physics_points_four_lanes SR_GLOBAL(int32_t, 0x182A7D558ULL)
/* Set: rotation bonds between bones use fixed limits by bone (byte flag). */
#define physics_bone_rotation_limits SR_GLOBAL(uint8_t, 0x183F7C960ULL)

/* ---- vehicles ----------------------------------------------------------- */

/* Only the parts of a vehicle named so far. 0x15F2D9200, 20,840 bytes
   each. */
typedef struct PhysicsVehicle {
    int32_t active;
    int32_t type;                        /* vehicle type index */
    uint8_t unknown_8[0x28 - 0x8];
    int32_t body;                        /* PhysicsBody index */
    float position[3];                   /* of the type's origin point on the body */
    float previous_position[3];
    float rotation[9];
    float previous_rotation[9];
    float velocity[3];
    uint8_t unknown_98[0xA4 - 0x98];
    float angular_velocity[3];
    float bounds_min[3];                 /* box around the type's bound points, in world axes */
    float bounds_max[3];
    int32_t voxel_min[3];                /* x, y, z of the voxels the vehicle occupies, inclusive */
    int32_t voxel_max[3];
    uint8_t unknown_e0[0x3F4 - 0xE0];
    int32_t bond_count;
    int32_t bonds[(0x5168 - 0x3F8) / 4];     /* PhysicsBond indices */
} PhysicsVehicle;

#define PHYSICS_VEHICLE_CAPACITY 512

#define physics_vehicles (&SR_GLOBAL(PhysicsVehicle, 0x15F2D9200ULL))

/* ---- bonds ----------------------------------------------------------------- */

#define PHYSICS_BOND_CAPACITY 0x4000

enum {
    PHYSICS_BOND_LEVEL = 4,          /* a body point held to a point in the world */
    PHYSICS_BOND_BODIES = 7,         /* a point of one body held to a point of another */
    PHYSICS_BOND_ROTATION = 8,       /* two bodies held at the same orientation */
    PHYSICS_BOND_JOINT = 10          /* points and angular velocities held together, see physics_prepare_joint */
};

/* PhysicsConstraint.kind: what the iterations solve for a bond. Except
   where noted it is the bond's type. */
enum {
    PHYSICS_CONSTRAINT_POINT_LINK = 0,       /* two points at a distance */
    PHYSICS_CONSTRAINT_POINT_LEVEL = 1,      /* point against the level, with friction */
    PHYSICS_CONSTRAINT_POINT_POINT = 2,      /* point against point */
    PHYSICS_CONSTRAINT_POINT_TRIANGLE = 3,   /* point against a triangle of points */
    PHYSICS_CONSTRAINT_BODY_LEVEL = 4,       /* body point held to a world point */
    PHYSICS_CONSTRAINT_BODY_CONTACT = 5,     /* body against the level, with friction */
    PHYSICS_CONSTRAINT_BODY_BODY_CONTACT = 6,
    PHYSICS_CONSTRAINT_BODY_POINTS = 7,
    PHYSICS_CONSTRAINT_ROTATION = 8,
    PHYSICS_BOND_BODY_SURFACE = 9,           /* bond type: body against a moving surface */
    PHYSICS_CONSTRAINT_JOINT = 10
};

/* Value of PhysicsBond.unknown_a4 that limits a joint's positional
   correction more tightly. */
#define PHYSICS_BOND_TIGHT 1111

/* 0x1B4287C80, 244 bytes each. */
typedef struct PhysicsBond {
    int32_t active;
    int32_t type;                        /* PHYSICS_BOND_* */
    int32_t unknown_8;
    int32_t lifetime;                    /* ticks left; 0: this tick only; from 0x10000 never expires */
    int32_t pass_mask;                   /* solved in the iterations whose number has all these bits; above 255 never */
    int32_t point_count;                 /* entries of point[] (it continues past four) */
    int32_t point[4];                    /* PhysicsPoint indices of point bonds and contacts; -1: none */
    int32_t unknown_28;
    float world_point[3];                /* level bonds; type 9: angular axis */
    float local_point[3];                /* on body */
    float other_local_point[3];          /* on other_body */
    float point_weight[3];               /* contact with a triangle: weights of point[1..3] */
    uint8_t unknown_5c[0x64 - 0x5C];
    float distance;                      /* rest length, or contact depth */
    uint8_t unknown_68[0x70 - 0x68];
    float stiffness;
    float damping;
    float normal[3];
    float friction;
    float angular_limit;                 /* 0, or the largest angular velocity difference corrected */
    uint8_t unknown_8c[0x94 - 0x8C];
    int32_t vehicle_count;               /* vehicles whose bond lists hold this bond; their indices start at body */
    int32_t body;
    int32_t other_body;
    int32_t unknown_a0;                  /* joints of a human: the human (human_create_joint_bond) */
    int32_t unknown_a4;                  /* PHYSICS_BOND_TIGHT */
    uint8_t unknown_a8[0xC4 - 0xA8];
    float target_velocity[3];            /* contacts: velocity of the surface touched */
    uint8_t unknown_d0[0xF4 - 0xD0];
} PhysicsBond;

#define physics_bonds (&SR_GLOBAL(PhysicsBond, 0x1B4287C80ULL))

/* Body-to-body bond with a caller-supplied rest distance, 0x14004E160;
   body-local point held to a world point, 0x14004E2E0. */
uint32_t physics_create_distance_bond(uint32_t body, uint32_t other,
                                      const float point[3], const float other_point[3],
                                      float distance);
uint32_t physics_create_level_bond(uint32_t body, const float point[3], const float world_point[3]);

/* Working data of one bond during a solve, 0x1B4037C40, 144 bytes each, at
   the bond's index. "a" is PhysicsBond.body, "b" its other body. */
typedef struct PhysicsConstraint {
    uint16_t body_a, body_b;             /* PhysicsBody or, for point bonds, PhysicsPoint indices */
    int32_t unknown_4;
    int32_t pass_mask;                   /* copied from the bond */
    int32_t kind;                        /* PHYSICS_CONSTRAINT_* */
    float bias[3];                       /* relative velocity the point solve aims for; contacts: normal */
    float depth;                         /* contacts: penetration; point links: stretch */
    float offset_a[3];                   /* bond point on a, relative to a's position, in world axes */
    float offset_b[3];                   /* the same for b */
    uint8_t unknown_38[0x3C - 0x38];
    float share_a;                       /* b's mass / (a's + b's): a's part of each impulse */
    float share_b;                       /* a's mass / (a's + b's) */
    float stiffness;
    float friction;
    int32_t has_axis;
    float axis[3];
    int32_t has_free_axis;               /* rotation bonds: one axis left free */
    float free_axis[3];
    float position_bias[3];              /* scaled separation of the points */
    float angular_bias[3];               /* joints: 7/8 of bias */
    float angular_scale;
    uint8_t unknown_88[4];
    float angular_gain;                  /* 0: 1/8 */
} PhysicsConstraint;

#define physics_constraints (&SR_GLOBAL(PhysicsConstraint, 0x1B4037C40ULL))

_Static_assert(sizeof(PhysicsBody) == 0xBC, "PhysicsBody size");
_Static_assert(__builtin_offsetof(PhysicsBody, angular_velocity_change) == 0x78, "PhysicsBody layout");
_Static_assert(__builtin_offsetof(PhysicsBody, unknown_9c) == 0x9C, "PhysicsBody layout");
_Static_assert(sizeof(PhysicsBond) == 0xF4, "PhysicsBond size");
_Static_assert(__builtin_offsetof(PhysicsBond, angular_limit) == 0x88, "PhysicsBond layout");
_Static_assert(__builtin_offsetof(PhysicsBond, body) == 0x98, "PhysicsBond layout");
_Static_assert(__builtin_offsetof(PhysicsBond, unknown_a4) == 0xA4, "PhysicsBond layout");
_Static_assert(sizeof(PhysicsConstraint) == 0x90, "PhysicsConstraint size");
_Static_assert(__builtin_offsetof(PhysicsConstraint, share_a) == 0x3C, "PhysicsConstraint layout");
_Static_assert(__builtin_offsetof(PhysicsConstraint, has_axis) == 0x4C, "PhysicsConstraint layout");
_Static_assert(__builtin_offsetof(PhysicsConstraint, position_bias) == 0x6C, "PhysicsConstraint layout");
_Static_assert(__builtin_offsetof(PhysicsConstraint, angular_scale) == 0x84, "PhysicsConstraint layout");
_Static_assert(__builtin_offsetof(PhysicsConstraint, angular_gain) == 0x8C, "PhysicsConstraint layout");
_Static_assert(__builtin_offsetof(PhysicsConstraint, depth) == 0x1C, "PhysicsConstraint layout");
_Static_assert(__builtin_offsetof(PhysicsConstraint, free_axis) == 0x60, "PhysicsConstraint layout");
_Static_assert(__builtin_offsetof(PhysicsBody, inverse_inertia) == 0x90, "PhysicsBody layout");
_Static_assert(__builtin_offsetof(PhysicsBody, friction_work) == 0xB8, "PhysicsBody layout");
_Static_assert(__builtin_offsetof(PhysicsBond, distance) == 0x64, "PhysicsBond layout");
_Static_assert(__builtin_offsetof(PhysicsBond, normal) == 0x78, "PhysicsBond layout");
_Static_assert(__builtin_offsetof(PhysicsBond, target_velocity) == 0xC4, "PhysicsBond layout");
_Static_assert(sizeof(PhysicsPoint) == 0xF0, "PhysicsPoint size");
_Static_assert(__builtin_offsetof(PhysicsPoint, bond_count) == 0x50, "PhysicsPoint layout");
_Static_assert(sizeof(PhysicsVehicle) == 0x5168, "PhysicsVehicle size");
_Static_assert(__builtin_offsetof(PhysicsVehicle, bond_count) == 0x3F4, "PhysicsVehicle layout");
_Static_assert(__builtin_offsetof(PhysicsVehicle, previous_rotation) == 0x68, "PhysicsVehicle layout");
_Static_assert(__builtin_offsetof(PhysicsVehicle, voxel_min) == 0xC8, "PhysicsVehicle layout");
_Static_assert(__builtin_offsetof(PhysicsBond, vehicle_count) == 0x94, "PhysicsBond layout");
_Static_assert(__builtin_offsetof(PhysicsBond, point_count) == 0x14, "PhysicsBond layout");
_Static_assert(__builtin_offsetof(PhysicsPoint, velocity) == 0x2C, "PhysicsPoint layout");
_Static_assert(__builtin_offsetof(PhysicsPoint, previous_velocity) == 0x38, "PhysicsPoint layout");
_Static_assert(__builtin_offsetof(PhysicsPoint, vehicle_count) == 0xD4, "PhysicsPoint layout");

/* ---- functions ----------------------------------------------------------- */

/* First unused slot, or a zero-extended UINT32_MAX for a full pool.
   Creation clears the record after its active word. Vector arguments are
   read after that clear, preserving aliasing with the record being created. */
uint32_t physics_find_free_bond(void); /* 0x1400A4440 */
uint32_t physics_create_body(uint32_t type, const float position[3],
                             const float rotation[9], const float velocity[3],
                             float mass, const float inertia[3]); /* 0x14005CF80 */
uint32_t physics_create_body_bond(uint32_t body, uint32_t other,
                                  const float point[3], const float other_point[3]); /* 0x14004E430 */
uint32_t physics_create_rotation_bond(uint32_t body, uint32_t other); /* 0x14004E5B0 */
uint32_t physics_create_point(uint32_t kind, const float position[3],
                              const float velocity[3], float mass, uint32_t vehicle); /* 0x14005CBB0 */

/* Keeps the component of velocity along normal and limits its tangential
   speed to length(normal projection) * friction. Returns the sliding work
   removed, scaled by 480. normal is normally a unit vector; it may overlap
   velocity. NaN/zero tangential length leaves only the projection.
   0x14002D820 */
float physics_limit_slide(float velocity[3], const float normal[3], float friction);

/* The same, with a second limit on tangential speed. 0x14002D9B0 */
float physics_limit_slide_capped(float velocity[3], const float normal[3],
                                float friction, float max_slide);

/* Adds change to the body's velocity and offset cross change (with the
   game's cross-product sign) to its angular momentum. offset is relative
   to the body in world axes. Inputs may alias body storage. 0x14012B090 */
PhysicsBody *physics_apply_point_velocity(int body, const float offset[3], const float change[3]);

/* Velocity at offset from the body, including its angular velocity. Output
   may alias offset or body storage. Both body helpers return physics_bodies
   to preserve the original RAX value. 0x14012B170 */
PhysicsBody *physics_point_velocity(float out[3], int body, const float offset[3]);

/* Adds a contact between two bodies for this tick: a bond of type 6 in the
   first free slot, its constraint filled with the contact points (relative
   to each body, world axes), the normal pushing body_a out, depth *
   depth_scale, the stiffness and friction, and each body's share of the
   impulses by mass. Returns the bond, or -1 when all are taken (nothing
   added). The callers pass friction 0.4, depth_scale 1/64, stiffness 1/32.
   0x1400052C0 */
int physics_add_contact(int body_a, int body_b, const float offset_a[3], const float offset_b[3],
                        const float normal[3], float depth, float friction, float depth_scale, float stiffness);

/* Moves every point by its velocity (keeping the previous position and
   velocity) and, unless physics_points_no_gravity, applies its gravity.
   0x1401154D0 */
void physics_integrate_points(void);

/* Counts down point lifetimes. A point whose time is up loses its bonds
   (last first) and the last point moves into its slot,
   with the references to it in bonds, vehicles and humans renumbered.
   0x140115830 */
void physics_expire_points(void);

/* Fills the constraint of a joint bond from its bodies' current state.
   0x14001C780 */
void physics_prepare_joint(int bond);

/* Applies to both bodies the impulse that brings the relative velocity of
   the bond points toward bias. 0x14001CBB0 */
void physics_solve_point_velocity(int constraint);

/* The same toward position_bias, then the angular impulse of a joint.
   0x14001BF70 */
void physics_solve_joint(int bond);

/* Counts down bond lifetimes and removes expired bonds from the bond lists
   of their points and vehicles. 0x14001FB90 */
void physics_expire_bonds(void);

/* Takes bond out of the bond lists of its points and vehicles and marks it
   inactive; indices outside the array do nothing. 0x14007F370 */
void physics_remove_bond(int bond);

/* Turns a body's rotation by one tick of its angular momentum (fourth-order
   Runge-Kutta) and stores the angular velocity used. 0x14012B2D0 */
void physics_integrate_rotation(float rotation[9], const float angular_momentum[3],
                                float angular_velocity[3], const float inverse_inertia[3]);

/* One physics tick: gravity and position integration, rotation, spatial
   bounds and grid, collision preparation, humans, the bond solver, item and
   bond lifetimes. 0x140116210 */
void physics_tick(void);

/* One physics tick of the bond solver: sets up every bond's constraint,
   runs 32 impulse iterations over bodies and points (with the vehicle wheel
   solvers in each), integrates velocities, and retires bonds that last one
   tick. 0x14001D080 */
void physics_solve(void);

/* Contact against the level in the first free bond slot (type 5).
   0x140005160. Retains the native normal-word/full-pool pointer return. */
uintptr_t physics_add_world_contact(int16_t body, const float offset[3], const float normal[3],
                                    float depth, float friction, float depth_scale, float stiffness);

#endif
