/* Humans: the per-human record and the active ragdoll that holds a human's
 * bones in a pose.
 *
 * A human is a ragdoll of physics bodies (physics.h), one per bone, joined by
 * bonds. Every tick the active ragdoll works out a target rotation for each
 * joint from where the human looks and what it holds, and gives each joint's
 * bond the relative angular velocity that turns the child bone toward it;
 * the bond solver then does the turning. Fields whose meaning is not settled
 * are named unknown_<offset> and say what is known.
 */
#ifndef SR_ENGINE_HUMAN_H
#define SR_ENGINE_HUMAN_H

#include <stdint.h>
#include "memory.h"

#define WORLD_HUMAN_CAPACITY 256
#define HUMAN_BONE_COUNT 16

/* Bones, in RosaServer's order. The arms hang from the chest: side 0 is the
   left arm (4, 5, 6), side 1 the right (7, 8, 9). */
enum {
    HUMAN_BONE_PELVIS = 0,
    HUMAN_BONE_STOMACH = 1,
    HUMAN_BONE_CHEST = 2,
    HUMAN_BONE_HEAD = 3,
    HUMAN_BONE_SHOULDER = 4,             /* + 3 * side */
    HUMAN_BONE_FOREARM = 5,              /* + 3 * side */
    HUMAN_BONE_HAND = 6,                 /* + 3 * side */
};

/* Target rotations of four joints, as quaternions (x, y, z, w) relative to
   the parent bone; see human_build_look_pose(). */
#define HUMAN_POSE_COUNT 4

/* 0x138 bytes, laid out as RosaServer's Bone. */
typedef struct HumanBone {
    int32_t body;                        /* PhysicsBody */
    float position[3];
    float previous_position[3];          /* position before this tick's move */
    float velocity[3];
    uint8_t unknown_28[0x34 - 0x28];
    float rotation[9];                   /* rows are the bone's axes */
    float angular_velocity[3];
    uint8_t unknown_64[0x84 - 0x64];
    float mass;                          /* weight of the bone in the body's centre and mean velocities */
    uint8_t unknown_88[0xA0 - 0x88];
    float unknown_a0;                    /* twice this goes into a foot's ground bond */
    uint8_t unknown_a4[0xFC - 0xA4];
    float euler_angles[3];               /* of the joint into this bone, within the skeleton's limits */
    float segment[2][3];                 /* ends of the bone's capsule: its centre -+ half its length along its axis row */
    int32_t bond;                        /* PhysicsBond joining the bone to its parent */
    uint8_t unknown_124[0x130 - 0x124];
    int32_t unknown_130;                 /* feet (bones 12, 15): ground bonds made for the foot (counted up per tick it stands) */
    uint8_t unknown_134[0x138 - 0x134];
} HumanBone;

/* A hand or other slot (2 and up are carried on the body): what it holds.
   0x28 bytes from 0x6AD0. */
typedef struct HumanHand {
    int32_t count;                       /* items held; > 0: items[0] is valid */
    int32_t items[9];                    /* WorldItem */
} HumanHand;

/* A leg's stepping record: two of 0xDC bytes from 0x68BC, ending where the
   pose rotations begin. */
typedef struct HumanLeg {
    uint8_t unknown_0[0x44];
    int32_t ground_bond;                 /* the PhysicsBond last made to hold the foot on the ground */
    int32_t rest_ticks;                  /* counts down from 5 after the foot is planted; a step waits for it */
    uint8_t unknown_4c[0x50 - 0x4C];
    int32_t state;                       /* 0 loose, 1 planted, 3 stepping */
    int32_t air_ticks;                   /* ticks planted without ground contact; at 30 the leg goes loose */
    float progress;                      /* of a step, 0 to 1 */
    float start[3];                      /* where the step started, from the hip's target (a jump: the ankle from the hip) */
    float swing[3];                      /* where the stepping foot is sent this tick */
    float planted[3];                    /* where the foot is planted; follows the foot by 1/32 a tick */
    uint8_t unknown_80[0xBC - 0x80];
    float contact;                       /* 0, 1/2 or 1: rises while the planted foot has ground contact */
    float ground_height;                 /* of the ground the foot last stood on */
    float pitch;                         /* of the foot */
    float previous_pitch;
    float yaw;                           /* of the planted foot */
    float landing[3];                    /* where the step began to aim: beside the centre as it will be in 15 ticks, on the ground */
} HumanLeg;

#define HUMAN_BONE_FOOT 12               /* + 3 * leg */

/* The health of a body part. */
typedef struct HumanPart {
    int32_t health;
    int32_t unknown_4;
} HumanPart;

enum {
    HUMAN_PART_CHEST, HUMAN_PART_HEAD, HUMAN_PART_LEFT_ARM, HUMAN_PART_RIGHT_ARM, HUMAN_PART_LEFT_LEG,
    HUMAN_PART_RIGHT_LEG, HUMAN_PART_COUNT
};

/* Input flags (WorldHuman.input_flags) the ragdoll reads. */
enum {
    HUMAN_INPUT_1 = 0x1,
    HUMAN_INPUT_4 = 0x4,                 /* no jump */
    HUMAN_INPUT_2 = 0x2,                 /* no lean while holding an item; on foot: arms turned */
    HUMAN_INPUT_8 = 0x8,
    HUMAN_INPUT_20 = 0x20,               /* the arm pose follows unknown_70 */
};

/* 0x18329E308, 28,664 bytes each. */
typedef struct WorldHuman {
    int32_t active;
    uint8_t unknown_4[0x8 - 0x4];
    int32_t player;                      /* the player whose human this is, -1: none */
    uint8_t unknown_c[0x1C - 0xC];
    int32_t stamina;                     /* running costs 1 every 16 ticks; below 8 no running */
    uint8_t unknown_20[0x24 - 0x20];
    int32_t point;                       /* a PhysicsPoint (renumbered when points move) */
    int32_t vehicle;                     /* -1: on foot */
    uint8_t unknown_2c[0x30 - 0x2C];
    int32_t unknown_30;                  /* a vehicle whose blows do not hurt this human */
    uint8_t unknown_34[0x3C - 0x34];
    int32_t unknown_3c;                  /* above 0: alive; a vehicle's blow takes 120 off, death sets 0 */
    int32_t immortal;                    /* does not die or lose blood, recovers faster */
    int32_t unknown_44;                  /* while immortal: counts down, set to 1800 while health is below 50 */
    uint8_t unknown_48[0x54 - 0x48];
    int32_t unknown_54;
    int32_t unknown_58;                  /* a state, 0 to 3 */
    int32_t unknown_5c;                  /* state 5: ticks upright; at 10 back to state 0 */
    int32_t unknown_60;                  /* a state, 0 to 2 */
    uint8_t unknown_64[0x70 - 0x64];
    float unknown_70;                    /* with HUMAN_INPUT_20: 8 times unknown_144, bends the arms */
    uint8_t unknown_74[0x78 - 0x74];
    int32_t unknown_78;                  /* a countdown in ticks; while above 0 the joints are held more loosely */
    int32_t unknown_7c;                  /* cleared for a sitting human */
    uint32_t unknown_80[3];              /* copied into the event of a fatal blow (a position?) */
    uint8_t unknown_8c[0x98 - 0x8C];
    float unknown_98;                    /* yaw-like angle; copied to the input's 0x138 on foot */
    float unknown_9c;                    /* pitch-like angle sent by the server; copied to the input's 0x13C on foot */
    uint8_t unknown_a0[0xF8 - 0xA0];
    float unknown_f8;                    /* added to the yaw of the look pose; sent by the server */
    uint8_t unknown_fc[0x10C - 0xFC];
    float lean_side;                     /* eased toward the sideways speed still wanted */
    uint8_t unknown_110[0x114 - 0x110];
    float lean_forward;                  /* likewise forward and back */
    float walk_amount;                   /* 0..1, eased toward 1 (5/8 with HUMAN_INPUT_8); scales the walking speed */
    uint8_t unknown_11c[0x128 - 0x11C];
    float unknown_128;                   /* from the player's input; turns item type 28's hand target */
    float input_strafe;                  /* along the heading's first row */
    uint8_t unknown_130[0x134 - 0x130];
    float input_forward;                 /* against the heading's third row; below 0: backwards */
    float input_yaw;                     /* 0x138, from the player's input; used in a vehicle */
    float input_pitch;                   /* 0x13C, likewise */
    float unknown_140;                   /* from the player's input; half of it turns the lower spine */
    float unknown_144;                   /* from the player's input; bends the lower spine */
    uint8_t unknown_148[0x168 - 0x148];
    uint32_t unknown_168;                /* kept in unknown_6744 when a jump starts */
    uint32_t unknown_16c;                /* kept in unknown_6740 when a jump starts */
    uint8_t unknown_170[0x1A8 - 0x170];
    float unknown_1a8[3];                /* a point that springs toward 0 (see human_drive_ragdoll) */
    float unknown_1b4[3];                /* its velocity */
    float bounds_min[3];                 /* box around the bones' capsules; y lowered by 0.25 */
    float bounds_max[3];
    int32_t voxel_min[3];                /* x, y, z of the voxels the human occupies, inclusive */
    int32_t voxel_max[3];
    int32_t near_vehicle_count;          /* vehicles the ground probe tests */
    int32_t near_vehicles[8];
    int32_t input_flags;                 /* HUMAN_INPUT_* */
    uint8_t unknown_218[0x220 - 0x218];
    HumanBone bones[HUMAN_BONE_COUNT];
    uint8_t unknown_15a0[0x6734 - 0x15A0];
    int32_t unknown_6734;                /* above 0: full walking speed and a faster walk_amount (ticks of a jump?) */
    int32_t unknown_6738;
    uint8_t unknown_673c[0x6740 - 0x673C];
    uint32_t unknown_6740;
    uint32_t unknown_6744;
    uint8_t unknown_6748[0x674C - 0x6748];
    float centre[3];                     /* the body's centre (0x1400ABB10) */
    union {
        float smoothed_rotation[9];      /* the pelvis's rotation, half way from last tick's each tick */
        struct {
            float unknown_6758[4];
            float unknown_6768;          /* its middle element: 1 upright, 0 lying */
        };
    };
    float smoothed_quat[4];              /* the same as a quaternion */
    float unknown_678c[3];               /* mean velocity of the pelvis, stomach and chest, halved toward each tick */
    float centre_velocity[3];            /* that less ground_velocity */
    float smoothed_angular_velocity[3];  /* of the same three bones */
    uint8_t unknown_67b0[0x67BC - 0x67B0];
    float mean_angular_velocity[3];      /* of all sixteen bones, by mass */
    float unknown_67c8[3];               /* added to the hip joint of leg bone 10 */
    float unknown_67d4[3];               /* added to the hip joint of leg bone 13 */
    float joint_targets[3][9];           /* the target rotation of joints 0-1, 1-2 and 2-3, as matrices */
    uint8_t unknown_684c[0x6850 - 0x684C];
    int32_t unknown_6850;
    float walk_point[3];                 /* where the human means to stand: led over the ground by walk_velocity */
    uint8_t unknown_6860[0x686C - 0x6860];
    float ground_velocity[3];            /* of the vehicle stood on, else 0 */
    float ground_angular_velocity[3];
    float walk_velocity[3];              /* y is kept 0 */
    float unknown_6890[3];               /* added to a stepping foot's target */
    uint8_t unknown_689c[0x68A8 - 0x689C];
    float ground_flat;                   /* 1 on level ground, down to 3/8 before steps; scales the walking speed */
    float ground_rise;                   /* how far the ground ahead rises above the ground underfoot */
    float stillness;                     /* 1 standing still, 0 from a walk velocity of 1/120 a tick */
    int32_t unknown_68b4;                /* a leg, 0 or 1 */
    uint8_t unknown_68b8[0x68BC - 0x68B8];
    union {
        HumanLeg legs[2];
        struct {
            uint8_t unknown_68bc[0x6914 - 0x68BC];
            float unknown_6914;          /* legs[0].progress */
        };
    };
    float pose_rotations[HUMAN_POSE_COUNT][4];
    uint8_t unknown_6ab4[0x6ACC - 0x6AB4];
    float unknown_6acc;
    HumanHand hands[2];
    uint8_t unknown_6b20[0x6C3C - 0x6B20];
    float unknown_6c3c[2][14];           /* per hand (in the other hand's order), x y z then unknown */
    uint8_t unknown_6cac[0x6D50 - 0x6CAC];
    int32_t health;                      /* 0..100, as blood and the parts */
    int32_t blood;
    int32_t bleeding;
    union {
        HumanPart parts[HUMAN_PART_COUNT];
        struct {
            uint8_t unknown_6d5c[0x6D6C - 0x6D5C];
            int32_t unknown_6d6c;        /* parts[HUMAN_PART_LEFT_ARM].health: below 100 the arm is held more weakly */
            uint8_t unknown_6d70[4];
            int32_t unknown_6d74;        /* parts[HUMAN_PART_RIGHT_ARM].health */
        };
    };
    uint8_t unknown_6d8c[0x6DDC - 0x6D8C];
    int32_t unknown_6ddc;                /* cleared at the start of every physics tick */
    int32_t unknown_6de0;
    float unknown_6de4;
    uint8_t unknown_6de8[0x6FF8 - 0x6DE8];
} WorldHuman;

#define world_humans (&SR_GLOBAL(WorldHuman, 0x18329E308ULL))

/* The skeleton's template: per bone, limits of the joint into it and points
   the arm routines use. 0x18399DF20, 100 bytes per bone. */
typedef struct HumanSkeletonBone {
    float min_angle[3];                  /* about x, y, z, of the joint's Euler angles */
    float max_angle[3];
    int32_t axis_row;                    /* which row of the bone's rotation runs along it */
    float length;                        /* of the bone's capsule along axis_row (the chest's keeps a held item out) */
    float radius;                        /* of the capsule */
    uint8_t unknown_24[0x34 - 0x24];
    float unknown_34[3];                 /* bone 3 + 3 side: where that arm's hand sits; bone 6: the aim point */
    uint8_t unknown_40[100 - 0x40];
} HumanSkeletonBone;

#define human_skeleton (&SR_GLOBAL(HumanSkeletonBone, 0x18399DF20ULL))

/* Builds the look pose: pose_rotations from the human's yaw and pitch
   inputs and twist radians (the angle the caller turns the spine by).
   0x1400AD030 */
void human_build_look_pose(int human, float twist);

/* The active ragdoll of one human for one tick: sets the bonds of its
   joints (spine, head, arms) to turn the bones toward their targets. Calls
   the arm and hand routines that are still recompiled code. 0x1400AD2B0 */
void human_drive_ragdoll(int human);

/* ---- walking (human_walk.c) -------------------------------------------------- */

/* Whether the way from one point to the other is blocked by the level or by
   one of the human's near vehicles; the nearest hit is left in collision_hit
   and the vehicle (-1: the level) in human_ground_vehicle. 0x1400B91E0 */
int human_probe_ground(int human, float from[3], float to[3]);

/* Feels the ground under the hips and at four points ahead along the walk
   velocity: keeps the velocity of a vehicle stood on and eases ground_flat
   and ground_rise. 0x1400AC890 */
void human_feel_ground_ahead(int human);

/* Eases the height of the walk point toward the ground under the hips plus
   the height the hips are carried at. 0x1400B2440 */
void human_update_walk_height(int human);

/* Moves the walk point for one tick from the player's input: speed by
   movement mode, stamina, leans, the pull of a held item of type 28.
   0x1400B40B0 */
void human_update_walk_point(int human);

/* ---- the body as a whole (human_body.c) ---------------------------------------- */

/* Joins the bones with the skeleton's joints: one bond per bone but the
   pelvis, at the anchor the skeleton gives; a bone whose joint cannot be
   made keeps its old bond. 0x1400AB7B0 */
void human_create_joints(int human);

/* The body's centre and mean velocities for a tick, and the smoothed
   rotation of the pelvis. 0x1400ABB10 */
void human_update_centre(int human);

/* ---- health (human_health.c) --------------------------------------------------- */

/* Health for a tick: death (chest, head, blood, or low health in game type
   6), the looseness of a hurt body, recovery, and bleeding with its event.
   0x1400B5E70 */
void human_update_health(int human);

/* ---- feet (human_feet.c) --------------------------------------------------------- */

/* One foot for a tick: when it reaches the ground under an upright shin, a
   bond that carries it there and turns it to the leg's yaw and pitch; from
   a planted foot with the jump wanted, the jump starts. 0x1400B5460 */
void human_foot_ground_contact(int human, int leg);

/* ---- legs (human_legs.c) --------------------------------------------------------- */

/* The legs of a human sitting in a vehicle: both feet reach for a point
   ahead of and below the pelvis. 0x1400B9D90 */
void human_sit_legs(int human);

/* The legs' states for a tick on foot: which foot steps next (the one
   further from where it should stand, once the other has rested), feet
   that land or lose the ground, and getting up from a crouch (state 5).
   A step starts from to[leg] - from[leg]. 0x1400BAA40 */
void human_plan_steps(int human, const float from[2][3], const float to[2][3]);

/* A stepping leg for a tick: where the step lands (ahead of the body by
   the walk velocity, on the ground found there) and the point on the arc
   from where it started that the foot is sent to; the step's progress
   moves on. hip_target is the point the leg's hip is sent to, axes the
   heading's rows. 0x1400BB6B0 */
void human_swing_step(int human, int leg, const float hip_target[3], const float axes[9]);

/* The legs of a human lying down or tumbling: the feet reach along the
   pelvis and to its sides, loosely, and in the air stay where they are;
   the hip and knee joints spring back inside their limits. 0x1400BA210 */
void human_lie_legs(int human);

/* ---- blows (human_hits.c) -------------------------------------------------------- */

/* One human against one vehicle for a tick: contacts between its bones
   (not the feet) and the vehicle's hull, and the harm of a hard blow.
   0x1400B3A80 */
void human_collide_vehicle(int human, int vehicle);

/* ---- balance (human_balance.c) --------------------------------------------------- */

/* One planted leg's part in holding the body up: target is where its hip
   is sent and turn the angular velocity asked of the trunk, from the hip
   and foot points, the centre and rotation wanted of the body, and the
   leg's share (0 to 1). Also sets the turn added to the leg's hip joint
   (unknown_67c8 or unknown_67d4). 0x1400BBF30 */
void human_balance_on_leg(int human, int leg, float target[3], float turn[3], const float hip[3],
                          const float foot[3], const float wanted_centre[3], const float wanted_rotation[9],
                          float share);

/* ---- standing (human_stand.c) ----------------------------------------------------- */

/* The legs of a human on its feet for a tick (states 0 and 1): the walk
   point, the steps, each leg's balance or swing, and the inverse
   kinematics that sends each foot where its leg's state says.
   0x1400BCA30 */
void human_stand_legs(int human);

/* ---- jumping (human_jump.c) --------------------------------------------------------- */

/* The tick a jump leaves the ground (state 3): the push-off through the
   legs, the launch velocity and spin given to every bone's body, and the
   human is falling. 0x1400B78F0 */
void human_launch_jump(int human);

/* ---- collisions (human_collide.c) --------------------------------------------------- */

/* A human's bones for a tick against the level's triangles, the items near
   it and the bones of every human after it: contacts for each hit.
   0x1400B2E70 */
void human_collide(int human);

/* Joint helpers of the active ragdoll. */

/* Limits how far a joint's bias may differ from share times the bones'
   relative angular velocity: at most limit. 0x1400B2BF0 */
void human_limit_joint_change(int human, int parent_bone, int child_bone, float bias[3], float limit, float share);

/* Springs a joint back inside the skeleton's angle limits (Euler angles from
   atan2): adds to axis, keeps the clamped angles in the child bone.
   0x1400A9EF0 */
void human_limit_joint_angles(int human, int parent_bone, int child_bone, float axis[3]);

/* The same from a joint's quaternion (small-angle Euler angles), replacing
   the parts of axis that would push further out. 0x1400A9940 */
void human_limit_joint_turn(int human, int parent_bone, int child_bone, float axis[3]);

/* A limb of three bones (arm or leg) reaching for target: biases for its
   three joints. 0x1400B1450 */
void human_limb_inverse_kinematics(int human, int parent_bone, int bone, const float target[3], const float frame[9],
                                   const float velocity[3], float length, float twist, float wrist_turn[4],
                                   const float change_limit[3], const uint32_t unknown_8c[3],
                                   const uint32_t angular_limit[3], float limit, int flags);

/* Where the hand goes when aiming an item of item_type. 0x1400B29B0 */
void human_aim_hand_target(float target[3], int human, int grip, int item_type, const float rotation[9]);

/* Where the hand goes holding item (type 28). 0x1400AC530 */
void human_item_28_hand_target(float target[3], int human, int item);

/* Bonds holding item in a hand: a point bond, and for most types a rotation
   bond. 0x1400B4DA0 */
void human_hold_item(int human, int hand_bone, int item, const float hand_point[3], const float item_point[3],
                     const float grip_turn[4]);

/* Contacts keeping the right arm and chest off an aimed item. 0x1400AA510 */
void human_keep_arms_off_item(int human, int item);

/* A random direction of a random length from add to add + length.
   0x1400A56B0 */
void human_random_direction(float v[3], float length, float add);

_Static_assert(sizeof(HumanBone) == 0x138, "HumanBone size");
_Static_assert(sizeof(HumanLeg) == 0xDC, "HumanLeg size");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].rest_ticks) == 0x6904, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].air_ticks) == 0x6910, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].planted) == 0x6930, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].contact) == 0x6978, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, unknown_5c) == 0x5C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, unknown_7c) == 0x7C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, unknown_98) == 0x98, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].previous_pitch) == 0x6984, "WorldHuman layout");
_Static_assert(__builtin_offsetof(HumanBone, unknown_a0) == 0xA0, "HumanBone layout");
_Static_assert(__builtin_offsetof(WorldHuman, unknown_16c) == 0x16C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, unknown_6744) == 0x6744, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[1].start) == 0x69F4, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].ground_bond) == 0x6900, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs) == 0x68BC, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[1]) + sizeof(HumanLeg) == 0x6A74, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].swing) == 0x6924, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].landing) == 0x698C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].progress) == 0x6914, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, unknown_6890) == 0x6890, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].state) == 0x690C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[1].ground_height) == 0x697C + 0xDC, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].yaw) == 0x6988, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, player) == 0x8, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, unknown_3c) == 0x3C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, unknown_30) == 0x30, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, unknown_80) == 0x80, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, health) == 0x6D50, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, parts) == 0x6D5C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, unknown_6d74) == 0x6D74, "WorldHuman layout");
_Static_assert(__builtin_offsetof(HumanBone, mass) == 0x84, "HumanBone layout");
_Static_assert(__builtin_offsetof(HumanBone, angular_velocity) == 0x58, "HumanBone layout");
_Static_assert(__builtin_offsetof(WorldHuman, smoothed_rotation) == 0x6758, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, unknown_6768) == 0x6768, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, smoothed_quat) == 0x677C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, unknown_678c) == 0x678C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, mean_angular_velocity) == 0x67BC, "WorldHuman layout");
_Static_assert(__builtin_offsetof(HumanBone, unknown_130) == 0x130, "HumanBone layout");
_Static_assert(__builtin_offsetof(WorldHuman, stamina) == 0x1C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, lean_side) == 0x10C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, walk_amount) == 0x118, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, input_forward) == 0x134, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, near_vehicles) == 0x1F4, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, centre) == 0x674C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, centre_velocity) == 0x6798, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, walk_point) == 0x6854, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, walk_velocity) == 0x6884, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, ground_flat) == 0x68A8, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, unknown_6914) == 0x6914, "WorldHuman layout");
_Static_assert(__builtin_offsetof(HumanBone, euler_angles) == 0xFC, "HumanBone layout");
_Static_assert(__builtin_offsetof(HumanBone, segment) == 0x108, "HumanBone layout");
_Static_assert(__builtin_offsetof(HumanBone, velocity) == 0x1C, "HumanBone layout");
_Static_assert(__builtin_offsetof(WorldHuman, voxel_max) == 0x1E4, "WorldHuman layout");
_Static_assert(sizeof(HumanSkeletonBone) == 100, "HumanSkeletonBone size");
_Static_assert(__builtin_offsetof(HumanSkeletonBone, unknown_34) == 0x34, "HumanSkeletonBone layout");
_Static_assert(sizeof(HumanHand) == 0x28, "HumanHand size");
_Static_assert(sizeof(WorldHuman) == 0x6FF8, "WorldHuman size");
_Static_assert(__builtin_offsetof(WorldHuman, vehicle) == 0x28, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, input_yaw) == 0x138, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, unknown_128) == 0x128, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, unknown_67c8) == 0x67C8, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, input_flags) == 0x214, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, bones) == 0x220, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, bones[1].bond) == 0x478, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, joint_targets) == 0x67E0, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, pose_rotations) == 0x6A74, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, hands) == 0x6AD0, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, unknown_6c3c) == 0x6C3C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, unknown_6d6c) == 0x6D6C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, unknown_6ddc) == 0x6DDC, "WorldHuman layout");

#endif
