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
    uint8_t unknown_10[0x34 - 0x10];
    float rotation[9];                   /* rows are the bone's axes */
    float angular_velocity[3];
    uint8_t unknown_64[0xFC - 0x64];
    float euler_angles[3];               /* of the joint into this bone, within the skeleton's limits */
    uint8_t unknown_108[0x120 - 0x108];
    int32_t bond;                        /* PhysicsBond joining the bone to its parent */
    uint8_t unknown_124[0x138 - 0x124];
} HumanBone;

/* A hand: what it holds. 0x28 bytes from 0x6AD0. */
typedef struct HumanHand {
    int32_t count;                       /* items held; > 0: item is valid */
    int32_t item;                        /* WorldItem */
    uint8_t unknown_8[0x28 - 8];
} HumanHand;

/* Input flags (WorldHuman.input_flags) the ragdoll reads. */
enum {
    HUMAN_INPUT_1 = 0x1,
    HUMAN_INPUT_2 = 0x2,                 /* no lean while holding an item; on foot: arms turned */
    HUMAN_INPUT_8 = 0x8,
    HUMAN_INPUT_20 = 0x20,               /* the arm pose follows unknown_70 */
};

/* 0x18329E308, 28,664 bytes each. */
typedef struct WorldHuman {
    uint8_t unknown_0[0x28];
    int32_t vehicle;                     /* -1: on foot */
    uint8_t unknown_2c[0x54 - 0x2C];
    int32_t unknown_54;
    int32_t unknown_58;                  /* a state, 0 to 3 */
    uint8_t unknown_5c[0x60 - 0x5C];
    int32_t unknown_60;                  /* a state, 0 to 2 */
    uint8_t unknown_64[0x70 - 0x64];
    float unknown_70;                    /* with HUMAN_INPUT_20: 8 times unknown_144, bends the arms */
    uint8_t unknown_74[0x78 - 0x74];
    int32_t unknown_78;                  /* a countdown in ticks; while above 0 the joints are held more loosely */
    uint8_t unknown_7c[0x98 - 0x7C];
    float unknown_98;                    /* yaw-like angle; copied to the input's 0x138 on foot */
    float unknown_9c;                    /* pitch-like angle sent by the server; copied to the input's 0x13C on foot */
    uint8_t unknown_a0[0xF8 - 0xA0];
    float unknown_f8;                    /* added to the yaw of the look pose; sent by the server */
    uint8_t unknown_fc[0x128 - 0xFC];
    float unknown_128;                   /* from the player's input; turns item type 28's hand target */
    uint8_t unknown_12c[0x138 - 0x12C];
    float input_yaw;                     /* 0x138, from the player's input; used in a vehicle */
    float input_pitch;                   /* 0x13C, likewise */
    float unknown_140;                   /* from the player's input; half of it turns the lower spine */
    float unknown_144;                   /* from the player's input; bends the lower spine */
    uint8_t unknown_148[0x1A8 - 0x148];
    float unknown_1a8[3];                /* a point that springs toward 0 (see human_drive_ragdoll) */
    float unknown_1b4[3];                /* its velocity */
    uint8_t unknown_1c0[0x214 - 0x1C0];
    int32_t input_flags;                 /* HUMAN_INPUT_* */
    uint8_t unknown_218[0x220 - 0x218];
    HumanBone bones[HUMAN_BONE_COUNT];
    uint8_t unknown_15a0[0x6734 - 0x15A0];
    int32_t unknown_6734;
    uint8_t unknown_6738[0x6768 - 0x6738];
    float unknown_6768;
    uint8_t unknown_676c[0x678C - 0x676C];
    float unknown_678c[3];               /* subtracted from a held item's velocity (the human's own velocity?) */
    uint8_t unknown_6798[0x67C8 - 0x6798];
    float unknown_67c8[3];               /* added to the hip joint of leg bone 10 */
    float unknown_67d4[3];               /* added to the hip joint of leg bone 13 */
    float joint_targets[3][9];           /* the target rotation of joints 0-1, 1-2 and 2-3, as matrices */
    uint8_t unknown_684c[0x6850 - 0x684C];
    int32_t unknown_6850;
    uint8_t unknown_6854[0x6914 - 0x6854];
    float unknown_6914;
    uint8_t unknown_6918[0x6A74 - 0x6918];
    float pose_rotations[HUMAN_POSE_COUNT][4];
    uint8_t unknown_6ab4[0x6ACC - 0x6AB4];
    float unknown_6acc;
    HumanHand hands[2];
    uint8_t unknown_6b20[0x6C3C - 0x6B20];
    float unknown_6c3c[2][14];           /* per hand (in the other hand's order), x y z then unknown */
    uint8_t unknown_6cac[0x6D6C - 0x6CAC];
    int32_t unknown_6d6c;                /* below 100: the arms are held more weakly (health of the arms?) */
    uint8_t unknown_6d70[4];
    int32_t unknown_6d74;
    uint8_t unknown_6d78[0x6DDC - 0x6D78];
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
    int32_t unknown_18;                  /* which row of the bone's rotation runs along it */
    float unknown_1c;                    /* chest: its depth (keeps a held item out) */
    uint8_t unknown_20[0x34 - 0x20];
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
_Static_assert(__builtin_offsetof(HumanBone, euler_angles) == 0xFC, "HumanBone layout");
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
