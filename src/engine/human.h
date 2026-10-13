/* Humans: the per-human record and the active ragdoll that holds a human's
 * bones in a pose.
 *
 * A human is a ragdoll of physics bodies (physics.h), one per bone, joined by
 * bonds. Every tick the active ragdoll works out a target rotation for each
 * joint from where the human looks and what it holds, and gives each joint's
 * bond the relative angular velocity that turns the child bone toward it;
 * the bond solver then does the turning.
 *
 * Field names follow RosaServer's structs.h (same layout and size) where it
 * names a field, otherwise what the code is seen to do with it. Byte runs
 * nothing reads yet are pad_<offset>.
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
    uint8_t pad_28[0x34 - 0x28];
    float rotation[9];                   /* rows are the bone's axes */
    float angular_velocity[3];
    uint8_t pad_64[0x84 - 0x64];
    float mass;                          /* weight of the bone in the body's centre and mean velocities */
    float inverse_scale[3];              /* RosaServer scaleReciprocal */
    float scale[3];
    float ground_bond_strength;          /* twice this goes into a foot's ground bond */
    uint8_t pad_a4[0xFC - 0xA4];
    float euler_angles[3];               /* of the joint into this bone, within the skeleton's limits */
    float segment[2][3];                 /* ends of the bone's capsule: its centre -+ half its length along its axis row */
    int32_t bond;                        /* PhysicsBond joining the bone to its parent */
    uint8_t pad_124[0x130 - 0x124];
    int32_t ground_bond_count;           /* feet (bones 12, 15): ground bonds made for the foot (counted up per tick it stands) */
    uint8_t pad_134[0x138 - 0x134];
} HumanBone;

/* A hand or other slot (2 and up are carried on the body): what it holds.
   0x28 bytes from 0x6AD0. */
typedef struct HumanHand {
    int32_t count;                       /* items held; > 0: items[0] is valid */
    union {
        int32_t items[9];                /* WorldItem */
        struct {
            int32_t pad_4[8];
            int32_t hold_point;          /* which of the item type's hold points (type + 0x80, 12 bytes
                                            each) the hand holds item type 28 by */
        };
    };
} HumanHand;

/* What a hand does to another human or to an item type 28: 0x38 bytes from
   0x6C10, one per hand (hands[] order). */
typedef struct HumanGrip {
    float target[3];                     /* item type 28: where the hand is sent */
    float target_yaw;                    /* the input_turn_yaw the target was worked out with */
    int32_t active;                      /* holding on to another human (input flag 0x800) */
    int32_t human;                       /* the human held, -1: none */
    uint8_t pad_18[0x1C - 0x18];
    int32_t bone;                        /* its bone held */
    float point[3];                      /* the point held, in that bone's axes */
    float kept_velocity[3];              /* the held item's body velocity kept by the arm drive's jitter */
} HumanGrip;

/* An action queued by the arms for code that runs later: 48 bytes each, a
   ring of eight from 0x6DFC. The arms clear three of its arguments when they
   queue one; what they mean depends on the kind. */
typedef struct HumanAction {
    int32_t kind;                        /* 3 pick an item up, 4 take one off an item type 39 */
    int32_t argument_4;
    uint8_t pad_8[0x28 - 0x8];
    int32_t argument_28;
    int32_t argument_2c;
} HumanAction;

/* A leg's stepping record: two of 0xDC bytes from 0x68BC, ending where the
   pose rotations begin. */
typedef struct HumanLeg {
    uint8_t pad_0[0x44];
    int32_t ground_bond;                 /* the PhysicsBond last made to hold the foot on the ground */
    int32_t rest_ticks;                  /* counts down from 5 after the foot is planted; a step waits for it */
    uint8_t pad_4c[0x50 - 0x4C];
    int32_t state;                       /* 0 loose, 1 planted, 3 stepping */
    int32_t air_ticks;                   /* ticks planted without ground contact; at 30 the leg goes loose */
    float progress;                      /* of a step, 0 to 1 */
    float start[3];                      /* where the step started, from the hip's target (a jump: the ankle from the hip) */
    float swing[3];                      /* where the stepping foot is sent this tick */
    float planted[3];                    /* where the foot is planted; follows the foot by 1/32 a tick */
    uint8_t pad_80[0xBC - 0x80];
    float contact;                       /* 0, 1/2 or 1: rises while the planted foot has ground contact */
    float ground_height;                 /* of the ground the foot last stood on */
    float pitch;                         /* of the foot */
    float previous_pitch;
    float yaw;                           /* of the planted foot */
    float landing[3];                    /* where the step began to aim: beside the centre as it will be in 15 ticks, on the ground */
} HumanLeg;

#define HUMAN_BONE_FOOT 12               /* + 3 * leg */

/* The health of a body part. RosaServer leaves the second word unnamed. */
typedef struct HumanPart {
    int32_t health;
    int32_t pad_4;
} HumanPart;

enum {
    HUMAN_PART_CHEST, HUMAN_PART_HEAD, HUMAN_PART_LEFT_ARM, HUMAN_PART_RIGHT_ARM, HUMAN_PART_LEFT_LEG,
    HUMAN_PART_RIGHT_LEG, HUMAN_PART_COUNT
};

/* Input flags (WorldHuman.input_flags), with the keys RosaServer gives them. */
enum {
    HUMAN_INPUT_PRIMARY = 0x1,           /* left mouse button: use / fire */
    HUMAN_INPUT_AIM = 0x2,               /* right mouse button: no lean while holding an item; on foot: arms turned */
    HUMAN_INPUT_JUMP = 0x4,              /* space: held, charges jump_charge; let go, the jump starts */
    HUMAN_INPUT_CROUCH = 0x8,            /* ctrl: walk_amount eases toward 5/8 */
    HUMAN_INPUT_THROW = 0x20,            /* Q: the arm pose follows throw_pitch */
};

/* 0x18329E308, 28,664 bytes each. */
typedef struct WorldHuman {
    int32_t active;
    int32_t physics_sim;                 /* RosaServer physicsSim */
    int32_t player;                      /* the player whose human this is, -1: none */
    int32_t account;
    uint8_t pad_10[0x18 - 0x10];
    int32_t burger_eat_cooldown;
    int32_t stamina;                     /* running costs 1 every 16 ticks; below 8 no running */
    int32_t max_stamina;
    int32_t point;                       /* a PhysicsPoint (renumbered when points move) */
    int32_t vehicle;                     /* -1: on foot */
    int32_t seat;                        /* which seat of the vehicle; 0 is the driver's */
    int32_t last_vehicle;                /* a vehicle whose blows do not hurt this human */
    int32_t last_vehicle_cooldown;
    uint32_t despawn_time;               /* counts down after death */
    int32_t old_health;                  /* above 0: alive; a vehicle's blow takes 120 off, death sets 0 */
    int32_t immortal;                    /* does not die or lose blood, recovers faster */
    int32_t immortal_heal_timer;         /* while immortal: counts down, set to 1800 while health is below 50 */
    uint8_t pad_48[0x4C - 0x48];
    int32_t vehicle_exit_timer;
    int32_t spawn_protection;            /* cleared every tick the human carries an item of a gun type */
    int32_t on_ground;
    int32_t movement_state;              /* HUMAN_STATE_*: 0 normal, 1 falling, 2 sliding, 3 jump, 5 getting up */
    int32_t stand_up_ticks;              /* state 5: ticks upright; at 10 back to state 0 */
    int32_t zoom_level;                  /* 0 to 2 */
    uint8_t pad_64[0x70 - 0x64];
    float throw_pitch;                   /* with HUMAN_INPUT_THROW: 8 times input_spine_bend, bends the arms */
    uint8_t pad_74[0x78 - 0x74];
    int32_t damage_ticks;                /* RosaServer damage (at most 60); while above 0 the joints are held more loosely */
    int32_t standing;                    /* cleared for a sitting human */
    uint32_t position[3];                /* float bits; copied into the event of a fatal blow; the arms test it
                                            against a corporation's area before using its door */
    uint8_t pad_8c[0x98 - 0x8C];
    float view_yaw;                      /* copied to the input's 0x138 on foot */
    float view_pitch;                    /* sent by the server; copied to the input's 0x13C on foot */
    uint8_t pad_a0[0xF8 - 0xA0];
    float look_yaw_offset;               /* added to the yaw of the look pose; sent by the server */
    uint8_t pad_fc[0x10C - 0xFC];
    float lean_side;                     /* eased toward the sideways speed still wanted */
    uint8_t pad_110[0x114 - 0x110];
    float lean_forward;                  /* likewise forward and back */
    float walk_amount;                   /* 0..1, eased toward 1 (5/8 crouching); scales the walking speed */
    uint8_t pad_11c[0x128 - 0x11C];
    /* From 0x124 the player's input, copied in every tick. */
    float input_turn_yaw;                /* RosaServer gearX; turns the walk heading and item type 28's hand target */
    float input_strafe;                  /* along the heading's first row */
    float input_gear_y;                  /* RosaServer gearY */
    float input_forward;                 /* against the heading's third row; below 0: backwards */
    float input_yaw;                     /* 0x138, used in a vehicle */
    float input_pitch;                   /* 0x13C, likewise */
    float input_spine_twist;             /* half of it turns the lower spine */
    float input_spine_bend;              /* bends the lower spine */
    uint8_t pad_148[0x168 - 0x148];
    uint32_t input_jump_forward;         /* float bits; kept in jump_forward when a jump starts */
    uint32_t input_jump_side;            /* float bits; kept in jump_side when a jump starts */
    uint8_t pad_170[0x1A8 - 0x170];
    float idle_sway[3];                  /* a point that springs toward 0 under small random pushes (human_drive_ragdoll) */
    float idle_sway_velocity[3];
    float bounds_min[3];                 /* box around the bones' capsules; y lowered by 0.25 */
    float bounds_max[3];
    int32_t voxel_min[3];                /* x, y, z of the voxels the human occupies, inclusive */
    int32_t voxel_max[3];
    int32_t near_vehicle_count;          /* vehicles the ground probe tests */
    int32_t near_vehicles[8];
    int32_t input_flags;                 /* HUMAN_INPUT_* */
    int32_t last_input_flags;            /* last tick's input_flags: the arms act when its bit 0 is set and
                                            input_flags' is clear */
    uint8_t pad_21c[0x220 - 0x21C];
    HumanBone bones[HUMAN_BONE_COUNT];
    uint8_t pad_15a0[0x6734 - 0x15A0];
    int32_t jump_charge;                 /* ticks the jump key has been held on the ground (at most 32): full walking
                                            speed and a faster walk_amount; scales the jump */
    int32_t cleared_on_ground;           /* cleared on the ground while no jump is charged; nothing else seen */
    uint8_t pad_673c[0x6740 - 0x673C];
    uint32_t jump_side;                  /* float bits: input_jump_side when the jump began, kept above -1/2 */
    uint32_t jump_forward;               /* float bits: input_jump_forward when the jump began, kept above -3/4 */
    uint8_t pad_6748[0x674C - 0x6748];
    float centre[3];                     /* the body's centre (0x1400ABB10) */
    float smoothed_rotation[9];          /* the pelvis's rotation, half way from last tick's each tick;
                                            [4], its middle element, is 1 upright and 0 lying */
    float smoothed_quat[4];              /* the same as a quaternion */
    float trunk_velocity[3];             /* mean velocity of the pelvis, stomach and chest, halved toward each tick */
    float centre_velocity[3];            /* that less ground_velocity */
    float smoothed_angular_velocity[3];  /* of the same three bones */
    uint8_t pad_67b0[0x67BC - 0x67B0];
    float mean_angular_velocity[3];      /* of all sixteen bones, by mass */
    float hip_turn[2][3];                /* per leg, added to the hip joint (leg bones 10 and 13) */
    float joint_targets[3][9];           /* the target rotation of joints 0-1, 1-2 and 2-3, as matrices */
    uint8_t pad_684c[0x6850 - 0x684C];
    int32_t jump_pose_angle;             /* float bits: 3 pi / 4 when a jump is wanted, pi / 2 at take-off,
                                            0 once falling downward */
    float walk_point[3];                 /* where the human means to stand: led over the ground by walk_velocity */
    uint8_t pad_6860[0x686C - 0x6860];
    float ground_velocity[3];            /* of the vehicle stood on, else 0 */
    float ground_angular_velocity[3];
    float walk_velocity[3];              /* y is kept 0 */
    float step_offset[3];                /* added to a stepping foot's target */
    uint8_t pad_689c[0x68A8 - 0x689C];
    float ground_flat;                   /* 1 on level ground, down to 3/8 before steps; scales the walking speed */
    float ground_rise;                   /* how far the ground ahead rises above the ground underfoot */
    float stillness;                     /* 1 standing still, 0 from a walk velocity of 1/120 a tick */
    int32_t push_leg;                    /* the leg (0 or 1) that pushes off a jump and leads the landing */
    uint8_t pad_68b8[0x68BC - 0x68B8];
    HumanLeg legs[2];
    float pose_rotations[HUMAN_POSE_COUNT][4];
    uint8_t pad_6ab4[0x6ACC - 0x6AB4];
    float stride_lean;                   /* how far the ankles trail the hips along the heading, eased; swings the arms */
    HumanHand hands[2];
    HumanHand body_slots[5];             /* inventory slots 2 to 6 */
    uint8_t pad_6be8[0x6C10 - 0x6BE8];
    HumanGrip grips[2];
    uint8_t pad_6c80[0x6D48 - 0x6C80];
    int32_t arm_cooldown;                /* counts down to 0, one a tick (the arms) */
    uint8_t pad_6d4c[0x6D50 - 0x6D4C];
    int32_t health;                      /* 0..100, as blood and the parts */
    int32_t blood;
    int32_t bleeding;
    HumanPart parts[HUMAN_PART_COUNT];   /* parts[HUMAN_PART_LEFT_ARM/RIGHT_ARM].health below 100: the arm is held more weakly */
    uint8_t pad_6d8c[0x6DDC - 0x6D8C];
    int32_t progress_bar;                /* cleared at the start of every physics tick; a bandage's progress */
    int32_t inventory_anim_flags;        /* 0: no inventory animation, the arms follow throw_pitch; 1: the hand is drawn in */
    float inventory_anim_progress;
    int32_t inventory_anim_duration;
    int32_t inventory_anim_hand;
    int32_t inventory_anim_slot;
    int32_t inventory_anim_counter_finished;
    int32_t next_action;                 /* the entry of actions[] written next */
    HumanAction actions[8];
    uint8_t pad_6f7c[0x6F80 - 0x6F7C];
    /* Appearance (RosaServer names). */
    int32_t gender;
    int32_t head;
    int32_t skin_color;
    int32_t hair_color;
    int32_t hair;
    int32_t eye_color;
    int32_t model;
    int32_t suit_color;
    int32_t tie_color;
    int32_t sunglasses;
    int32_t necklace;
    int32_t last_updated_wanted_group;
    uint8_t pad_6fb0[0x6FF8 - 0x6FB0];
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
    uint8_t pad_24[0x30 - 0x24];
    float shin_offset;                   /* shins: taken off a planted foot's forward offset (human_stand.c) */
    float anchor[3];                     /* bone 3 + 3 side: where that arm's hand sits; bone 6: the aim point */
    uint8_t pad_40[100 - 0x40];
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
   (hip_turn[leg]). 0x1400BBF30 */
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
                                   const float change_limit[3], const uint32_t position_bits[3],
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

/* The same in a plane: a random direction of a random length from add to
   add + length. 0x1400A5510 */
void human_random_direction_2d(float v[2], float length, float add);

_Static_assert(sizeof(HumanBone) == 0x138, "HumanBone size");
_Static_assert(sizeof(HumanLeg) == 0xDC, "HumanLeg size");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].rest_ticks) == 0x6904, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].air_ticks) == 0x6910, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].planted) == 0x6930, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].contact) == 0x6978, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, stand_up_ticks) == 0x5C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, standing) == 0x7C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, view_yaw) == 0x98, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].previous_pitch) == 0x6984, "WorldHuman layout");
_Static_assert(__builtin_offsetof(HumanBone, ground_bond_strength) == 0xA0, "HumanBone layout");
_Static_assert(__builtin_offsetof(WorldHuman, input_jump_side) == 0x16C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, jump_forward) == 0x6744, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[1].start) == 0x69F4, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].ground_bond) == 0x6900, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs) == 0x68BC, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[1]) + sizeof(HumanLeg) == 0x6A74, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].swing) == 0x6924, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].landing) == 0x698C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].progress) == 0x6914, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, step_offset) == 0x6890, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].state) == 0x690C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[1].ground_height) == 0x697C + 0xDC, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].yaw) == 0x6988, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, player) == 0x8, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, old_health) == 0x3C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, last_vehicle) == 0x30, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, position) == 0x80, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, health) == 0x6D50, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, parts) == 0x6D5C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, parts[HUMAN_PART_RIGHT_ARM].health) == 0x6D74, "WorldHuman layout");
_Static_assert(__builtin_offsetof(HumanBone, mass) == 0x84, "HumanBone layout");
_Static_assert(__builtin_offsetof(HumanBone, angular_velocity) == 0x58, "HumanBone layout");
_Static_assert(__builtin_offsetof(WorldHuman, smoothed_rotation) == 0x6758, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, smoothed_rotation[4]) == 0x6768, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, smoothed_quat) == 0x677C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, trunk_velocity) == 0x678C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, mean_angular_velocity) == 0x67BC, "WorldHuman layout");
_Static_assert(__builtin_offsetof(HumanBone, ground_bond_count) == 0x130, "HumanBone layout");
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
_Static_assert(__builtin_offsetof(WorldHuman, legs[0].progress) == 0x6914, "WorldHuman layout");
_Static_assert(__builtin_offsetof(HumanBone, euler_angles) == 0xFC, "HumanBone layout");
_Static_assert(__builtin_offsetof(HumanBone, segment) == 0x108, "HumanBone layout");
_Static_assert(__builtin_offsetof(HumanBone, velocity) == 0x1C, "HumanBone layout");
_Static_assert(__builtin_offsetof(WorldHuman, voxel_max) == 0x1E4, "WorldHuman layout");
_Static_assert(sizeof(HumanSkeletonBone) == 100, "HumanSkeletonBone size");
_Static_assert(__builtin_offsetof(HumanSkeletonBone, anchor) == 0x34, "HumanSkeletonBone layout");
_Static_assert(sizeof(HumanHand) == 0x28, "HumanHand size");
_Static_assert(sizeof(WorldHuman) == 0x6FF8, "WorldHuman size");
_Static_assert(__builtin_offsetof(WorldHuman, vehicle) == 0x28, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, input_yaw) == 0x138, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, input_turn_yaw) == 0x128, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, hip_turn) == 0x67C8, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, input_flags) == 0x214, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, bones) == 0x220, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, bones[1].bond) == 0x478, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, joint_targets) == 0x67E0, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, pose_rotations) == 0x6A74, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, hands) == 0x6AD0, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, grips[0].kept_velocity) == 0x6C3C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, grips[1].active) == 0x6C58, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, body_slots) == 0x6B20, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, arm_cooldown) == 0x6D48, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, spawn_protection) == 0x50, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, last_input_flags) == 0x218, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, next_action) == 0x6DF8, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, actions[1].argument_2c) == 0x6E58, "WorldHuman layout");
_Static_assert(__builtin_offsetof(HumanHand, hold_point) == 0x24, "HumanHand layout");
_Static_assert(sizeof(HumanGrip) == 0x38, "HumanGrip size");
_Static_assert(sizeof(HumanAction) == 0x30, "HumanAction size");
_Static_assert(__builtin_offsetof(WorldHuman, parts[HUMAN_PART_LEFT_ARM].health) == 0x6D6C, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, progress_bar) == 0x6DDC, "WorldHuman layout");

_Static_assert(__builtin_offsetof(WorldHuman, jump_charge) == 0x6734, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, jump_pose_angle) == 0x6850, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, push_leg) == 0x68B4, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, stride_lean) == 0x6ACC, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, inventory_anim_flags) == 0x6DE0, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, gender) == 0x6F80, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, idle_sway) == 0x1A8, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, look_yaw_offset) == 0xF8, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, input_spine_bend) == 0x144, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, input_jump_forward) == 0x168, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, immortal_heal_timer) == 0x44, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, movement_state) == 0x58, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, throw_pitch) == 0x70, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, damage_ticks) == 0x78, "WorldHuman layout");
_Static_assert(__builtin_offsetof(WorldHuman, hip_turn[1]) == 0x67D4, "WorldHuman layout");
_Static_assert(__builtin_offsetof(HumanSkeletonBone, shin_offset) == 0x30, "HumanSkeletonBone layout");

#endif
