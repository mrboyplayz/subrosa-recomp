/* The active ragdoll: target poses for a human's joints and the drive that
 * turns the bones toward them. See human.h.
 *
 * Every joint is driven the same way. The joint's rotation (the child bone
 * relative to its parent) is compared with a target rotation; the turn
 * between them, limited to a small angle, becomes the relative angular
 * velocity the joint's bond aims for (its constraint's bias). The bond solver
 * of the physics tick then turns the bones. An arm routine still in
 * recompiled code may change that velocity before it is kept.
 */
#include <emmintrin.h>
#include <string.h>
#include "arith.h"
#include "crt.h"
#include "human.h"
#include "math3d.h"
#include "physics.h"
#include "world.h"

/* ---- still recompiled code ------------------------------------------------- */

extern __m128d sub_1401F8A50(double angle, long long unused, double unused_2);   /* double sine, cosine */
/* Whether something moving from one point to the other passes through the level. */
extern int sub_1400DC050(float *from, float *to, int unknown);

/* ---- state the drive reads --------------------------------------------------- */

/* A byte that, when set, zeroes the lean, bends the spine and head further
   and makes the spine joints' gain nonlinear. Meaning not settled. */
#define ragdoll_unknown_mode     SR_GLOBAL(uint8_t, 0x183F7C960ULL)
/* A height the hands are kept above when the level is in the way. */
#define ragdoll_unknown_height   SR_GLOBAL(float, 0x151A84884ULL)
/* Per arm (side 0, 1): where the hand sits relative to the chest. */
#define ragdoll_arm_offset(side) (human_skeleton[HUMAN_BONE_HEAD + 3 * (side)].anchor)

/* Item type fields the ragdoll reads (world.h's WorldItemType). */
#define item_type_int(type, offset) \
    SR_GLOBAL(int32_t, 0x182A7E180ULL + 0x13D0ULL * (uint64_t)(int64_t)(type) + (offset))
#define item_type_floats(type, offset) \
    (&SR_GLOBAL(float, 0x182A7E180ULL + 0x13D0ULL * (uint64_t)(int64_t)(type) + (offset)))
#define item_type_unknown_10(type) item_type_int(type, 0x10)        /* held items of this type are aimed */
#define item_type_unknown_14(type) item_type_int(type, 0x14)        /* the lean goes the other way */
#define item_type_unknown_7c(type) item_type_int(type, 0x7C)        /* above 1: held with both hands */
#define item_type_grip_offset(type, grip) item_type_floats(type, 0x80 + 12 * (grip))
#define item_type_grip_turn(type, grip)   item_type_floats(type, 0xB0 + 16 * (grip))   /* axis, then angle */

/* Item fields (world.h's WorldItem). */
#define item_int(item, offset) \
    SR_GLOBAL(int32_t, 0x182BBB180ULL + 0x1B80ULL * (uint64_t)(int64_t)(item) + (offset))

/* Item types with a pose of their own. */
enum {
    ITEM_TYPE_3 = 3, ITEM_TYPE_11 = 11, ITEM_TYPE_15 = 15, ITEM_TYPE_18 = 18, ITEM_TYPE_25 = 25,
    ITEM_TYPE_26 = 26, ITEM_TYPE_28 = 28, ITEM_TYPE_29 = 29, ITEM_TYPE_34 = 34, ITEM_TYPE_36 = 36,
    ITEM_TYPE_39 = 39
};

static const float x_axis[3] = {1.0f, 0.0f, 0.0f};
static const float y_axis[3] = {0.0f, 1.0f, 0.0f};

#define PI_8 0x1.921fb6p-2f
#define PI_4 0x1.921fb6p-1f
#define PI_2 0x1.921fb6p+0f

/* ---- the look pose ------------------------------------------------------------ */

static void set_identity(float q[4])
{
    q[0] = 0.0f;
    q[1] = 0.0f;
    q[2] = 0.0f;
    q[3] = 1.0f;
}

/* A turn of angle radians about one axis is the quaternion with sin(angle/2)
   on that axis and cos(angle/2) as w; the callers pass the half angle,
   negated. */
static void turn(float q[4], int axis, float half_angle)
{
    float sine, cosine;

    math_sine_cosine(half_angle, &sine, &cosine);
    q[0] = q[1] = q[2] = 0.0f;
    q[axis] = sine;
    q[3] = cosine;
}

enum { AXIS_X = 0, AXIS_Y = 1 };

void human_build_look_pose(int human, float twist)
{
    WorldHuman *h = &world_humans[human];
    float (*pose)[4] = h->pose_rotations;
    float q[4];

    set_identity(pose[3]);
    set_identity(pose[0]);

    /* Joint 0 turns by -(0x140 / 2 + 0xF8) about y, -0x9C / 2 about x and
       -0x144 * 3/4 about x. */
    turn(q, AXIS_Y, (h->input_spine_twist * 0.5f + h->look_yaw_offset) * -0.5f);
    math_quat_multiply(pose[0], pose[0], q);
    turn(q, AXIS_X, h->view_pitch * -0.25f);
    math_quat_multiply(pose[0], pose[0], q);
    math_quat_multiply(pose[3], pose[3], q);
    turn(q, AXIS_X, h->input_spine_bend * -0.375f);
    math_quat_multiply(pose[0], pose[0], q);

    /* Joint 1 turns by -0x9C / 4 about x, -twist about y and -0x140 / 4
       about y. */
    set_identity(pose[1]);
    turn(q, AXIS_X, h->view_pitch * -0.125f);
    math_quat_multiply(pose[1], pose[1], q);
    math_quat_multiply(pose[3], pose[3], q);
    turn(q, AXIS_Y, twist * -0.5f);
    math_quat_multiply(pose[1], pose[1], q);
    math_quat_multiply(pose[3], pose[3], q);
    turn(q, AXIS_Y, h->input_spine_twist * -0.125f);
    math_quat_multiply(pose[1], pose[1], q);

    /* Joint 2 stays straight. Joint 3 collected the x turns of 0x9C and the
       twist of both joints; it ends as their inverse (the conjugate). */
    set_identity(pose[2]);
    pose[3][0] = -pose[3][0];
    pose[3][1] = -pose[3][1];
    pose[3][2] = -pose[3][2];
}

/* ---- joint helpers -------------------------------------------------------------- */

/* m * v: v given in world axes, the result in the bone's own axes. */
static void to_local(float out[3], const float m[9], const float v[3])
{
    float x = v[0], y = v[1], z = v[2];

    out[0] = (y * m[1] + x * m[0]) + z * m[2];
    out[1] = (y * m[4] + x * m[3]) + z * m[5];
    out[2] = (y * m[7] + x * m[6]) + z * m[8];
}

/* transpose(m) * v: v given in the bone's axes, the result in world axes. */
static void to_world(float out[3], const float m[9], const float v[3])
{
    float x = v[0], y = v[1], z = v[2];

    out[0] = (y * m[3] + x * m[0]) + z * m[6];
    out[1] = (y * m[4] + x * m[1]) + z * m[7];
    out[2] = (y * m[5] + x * m[2]) + z * m[8];
}

static float vector_length(const float v[3])
{
    return sqrt_float((v[0] * v[0] + v[1] * v[1]) + v[2] * v[2]);
}

/* The rotation of child relative to parent, as a quaternion. */
static void joint_rotation(float q[4], const HumanBone *parent, const HumanBone *child)
{
    float m[9];

    math_mat3_multiply_transposed(m, child->rotation, parent->rotation);
    math_quat_from_mat3(q, m);
}

/* The turn that takes rotation q to target: an axis of length 1 (or 0) and an
   angle in radians, from the quaternion conj(q) * target with q first taken
   to target's side of the sphere. Changes q. */
static float joint_turn(float axis[3], float q[4], const float target[4])
{
    float turn_q[4];
    double half;

    if (!(((q[3] * target[3] + q[2] * target[2]) + (q[1] * target[1] + q[0] * target[0])) >= 0.0f)) {
        for (int i = 0; i < 4; i++)
            q[i] = -q[i];
    }
    q[0] = -q[0];
    q[1] = -q[1];
    q[2] = -q[2];
    math_quat_multiply(turn_q, q, target);
    math_vec3_normalize(axis, turn_q);
    half = crt_acos(min_float(max_float(turn_q[3], -1.0f), 1.0f));
    return (float)(half + half);
}

/* At most pi/8 either way. */
static float limit_angle(float angle)
{
    angle = max_float(angle, -PI_8);
    if (angle > PI_8)
        angle = PI_8;
    return angle;
}

/* The spine's limit: pi/8, or in the unknown mode a quarter radian, squared
   (keeping the sign) and scaled by 4. */
static float limit_spine_angle(float angle)
{
    if (ragdoll_unknown_mode) {
        float a = max_float(angle, -0.25f);
        if (a > 0.25f)
            a = 0.25f;
        return (float)(__builtin_fabs((double)a) * (double)a * 4.0);
    }
    return limit_angle(angle);
}

/* The bias of the joint into child: the joint turn, scaled by 3/4 and less a
   share of the bones' relative angular velocity (damping, in the parent's
   axes), in world axes through child's rotation. */
static void set_joint_bias(float bias[3], const HumanBone *child, const float axis[3], float angle,
                           const float damping[3])
{
    float u[3];

    for (int i = 0; i < 3; i++)
        u[i] = (axis[i] * angle) * 0.75f + damping[i];
    to_world(bias, child->rotation, u);
}

/* The relative angular velocity of parent and child in the parent's axes,
   times -1/4. */
static void joint_damping(float damping[3], const HumanBone *parent, const HumanBone *child)
{
    float d[3], local[3];

    for (int i = 0; i < 3; i++)
        d[i] = parent->angular_velocity[i] - child->angular_velocity[i];
    to_local(local, parent->rotation, d);
    for (int i = 0; i < 3; i++)
        damping[i] = local[i] * -0.25f;
}

/* After the arm routine has limited a joint's bias: the joint's target rotation
   as a matrix (the child's rotation relative to the parent, turned by the
   bias), kept for drawing. */
static void keep_joint_target(float target[9], const HumanBone *parent, const HumanBone *child, const float bias[3])
{
    float length = vector_length(bias);
    float unit[3], axis[3];

    math_vec3_normalize(unit, bias);
    to_local(axis, parent->rotation, unit);
    math_mat3_multiply_transposed(target, parent->rotation, child->rotation);
    math_mat3_rotate_rows(target, axis, length);
}

static PhysicsConstraint *bone_constraint(const HumanBone *bone)
{
    return &physics_constraints[bone->bond];
}

/* The target of a spine joint from a yaw and a pitch: turns of yaw about y
   and of pitch about x, composed as the original does. */
static void yaw_pitch(float target[4], float yaw, float pitch)
{
    float sy, cy, sp, cp;

    math_sine_cosine(yaw * -0.5f, &sy, &cy);
    math_sine_cosine(pitch * -0.5f, &sp, &cp);
    target[0] = sp * cy;
    target[1] = cp * sy;
    target[2] = -(sp * sy);
    target[3] = cp * cy;
}

/* ---- the drive ------------------------------------------------------------------- */

typedef struct Drive {
    int human;
    WorldHuman *h;
    int on_foot;
    int aiming;                          /* a held item of a type that is aimed */
    float lean;                          /* yaw added while aiming */
    float input_yaw, input_pitch;        /* in a vehicle, else 0 */
    float health[2];                     /* per arm, 0 to 1 */
    int both_hands_empty;
    float stomach_damping[3];            /* of joint 1-2, used again for the head */
} Drive;

static float spine_yaw(const Drive *d, float lean)
{
    const WorldHuman *h = d->h;
    float yaw = ((h->input_spine_twist * 0.5f + d->input_yaw) + h->look_yaw_offset) + lean;

    if (!d->on_foot)
        yaw = d->input_yaw + lean;
    yaw *= 0.5f;
    if (ragdoll_unknown_mode)
        yaw = 0.0f;
    return yaw;
}

/* Joint 0-1 (pelvis to stomach). */
static void drive_lower_spine(Drive *d)
{
    WorldHuman *h = d->h;
    HumanBone *pelvis = &h->bones[HUMAN_BONE_PELVIS], *stomach = &h->bones[HUMAN_BONE_STOMACH];
    float q[4], target[4], axis[3], damping[3], pitch, angle;
    float *bias = bone_constraint(stomach)->bias;

    joint_rotation(q, pelvis, stomach);
    if (h->input_flags & HUMAN_INPUT_THROW)
        pitch = h->view_pitch * 0.5f;
    else
        pitch = (h->view_pitch + h->input_spine_bend) * 0.75f;
    if (!d->on_foot)
        pitch = d->input_pitch;
    pitch *= 0.75f;
    if (ragdoll_unknown_mode)
        pitch = (float)((double)pitch - 0.196349540849375);
    yaw_pitch(target, spine_yaw(d, d->lean), pitch);

    angle = limit_spine_angle(joint_turn(axis, q, target));
    joint_damping(damping, pelvis, stomach);
    set_joint_bias(bias, stomach, axis, angle, damping);
    human_limit_joint_change(d->human, HUMAN_BONE_PELVIS, HUMAN_BONE_STOMACH, bias, 1.125f, 1.0f);
    keep_joint_target(h->joint_targets[0], pelvis, stomach, bias);
    physics_bonds[stomach->bond].angular_limit = 0.0f;
}

/* Joint 1-2 (stomach to chest). */
static void drive_upper_spine(Drive *d)
{
    WorldHuman *h = d->h;
    HumanBone *stomach = &h->bones[HUMAN_BONE_STOMACH], *chest = &h->bones[HUMAN_BONE_CHEST];
    float q[4], target[4], axis[3], pitch, angle, sy, cy, sp, cp;
    float *bias = bone_constraint(chest)->bias;

    joint_rotation(q, stomach, chest);
    if (h->input_flags & HUMAN_INPUT_THROW)
        pitch = h->view_pitch * 0.5f;
    else
        pitch = h->input_spine_bend * 0.75f + h->view_pitch * 0.25f;
    if (!d->on_foot)
        pitch = d->input_pitch;
    pitch *= 0.5f;
    if (ragdoll_unknown_mode)
        pitch = (float)((double)pitch - 0.5890486225481251);
    math_sine_cosine(pitch * -0.5f, &sp, &cp);
    math_sine_cosine(spine_yaw(d, d->lean) * -0.5f, &sy, &cy);
    /* pitch first, then yaw */
    target[0] = cy * sp;
    target[1] = sy * cp;
    target[2] = sy * sp;
    target[3] = cy * cp;

    angle = limit_spine_angle(joint_turn(axis, q, target));
    joint_damping(d->stomach_damping, stomach, chest);
    set_joint_bias(bias, chest, axis, angle, d->stomach_damping);
    human_limit_joint_change(d->human, HUMAN_BONE_STOMACH, HUMAN_BONE_CHEST, bias, 1.125f, 1.0f);
    keep_joint_target(h->joint_targets[1], stomach, chest, bias);
    physics_bonds[chest->bond].angular_limit = 0.0f;
}

/* While aiming on foot, joints 0-1 and 1-2 follow the look pose instead,
   twisted by the lean: the bias is the limited turn alone, without damping or
   the arm routine. */
static void drive_spine_to_look_pose(Drive *d)
{
    WorldHuman *h = d->h;
    HumanBone *pelvis = &h->bones[HUMAN_BONE_PELVIS], *stomach = &h->bones[HUMAN_BONE_STOMACH];
    HumanBone *chest = &h->bones[HUMAN_BONE_CHEST];
    float q[4], axis[3], angle, scaled[3];

    human_build_look_pose(d->human, d->lean);

    joint_rotation(q, pelvis, stomach);
    angle = limit_angle(joint_turn(axis, q, h->pose_rotations[0]));
    for (int i = 0; i < 3; i++)
        scaled[i] = axis[i] * angle;
    to_world(bone_constraint(stomach)->bias, stomach->rotation, scaled);
    physics_bonds[stomach->bond].angular_limit = 0.0f;

    joint_rotation(q, stomach, chest);
    angle = limit_angle(joint_turn(axis, q, h->pose_rotations[1]));
    for (int i = 0; i < 3; i++)
        scaled[i] = axis[i] * angle;
    to_world(bone_constraint(chest)->bias, chest->rotation, scaled);
    physics_bonds[chest->bond].angular_limit = 0.0f;
}

/* Joint 2-3 (chest to head). */
static void drive_head(Drive *d)
{
    WorldHuman *h = d->h;
    HumanBone *chest = &h->bones[HUMAN_BONE_CHEST], *head = &h->bones[HUMAN_BONE_HEAD];
    float q[4], target[4], axis[3], yaw, pitch, angle, sy, cy, sp, cp;
    float tx = 0.0f, tz = 0.0f, ty, tw;
    float *bias = bone_constraint(head)->bias;

    joint_rotation(q, chest, head);
    yaw = h->input_spine_twist * 0.5f;
    if (ragdoll_unknown_mode)
        yaw = (yaw + d->input_yaw) + h->look_yaw_offset;
    else
        yaw = yaw - d->lean;
    math_sine_cosine(yaw * -0.5f, &sy, &cy);
    ty = sy;
    tw = cy;
    if (h->zoom_level == 2 && d->aiming) {
        /* tilted by pi/16 about the head's z axis */
        tx = sy * -0.098017141f;
        ty = sy * 0.99518472f;
        tz = cy * -0.098017141f;
        tw = cy * 0.99518472f;
    }
    pitch = h->input_spine_bend * 0.25f + h->view_pitch * 0.5f;
    if (ragdoll_unknown_mode)
        pitch = (float)((double)pitch - 0.39269908169875);
    math_sine_cosine(pitch * -0.5f, &sp, &cp);
    target[0] = tx * cp + tw * sp;
    target[1] = ty * cp + tz * sp;
    target[2] = tz * cp - ty * sp;
    target[3] = tw * cp - tx * sp;

    if (d->aiming && d->on_foot) {
        /* the inverse spine turn of the look pose, then the pitch and a
           quarter of 0x140 */
        const float *p = h->pose_rotations[3];
        float s, c, x, y, z, w;

        math_sine_cosine(h->view_pitch * -0.5f, &s, &c);
        y = p[2] * s + p[1] * c;
        z = p[2] * c - p[1] * s;
        x = c * p[0] + s * p[3];
        w = c * p[3] - s * p[0];
        math_sine_cosine(h->input_spine_twist * -0.125f, &s, &c);
        target[0] = x * c - z * s;
        target[1] = y * c + w * s;
        target[2] = z * c + x * s;
        target[3] = w * c - y * s;
    }

    angle = limit_spine_angle(joint_turn(axis, q, target));
    set_joint_bias(bias, head, axis, angle, d->stomach_damping);
    human_limit_joint_change(d->human, HUMAN_BONE_CHEST, HUMAN_BONE_HEAD, bias, 1.125f, 1.0f);
    physics_bonds[head->bond].angular_limit = 0.0f;
    keep_joint_target(h->joint_targets[2], chest, head, bias);
}

/* ---- arms ------------------------------------------------------------------------- */

/* Rotates the rows of m about one of its own rows. */
static void turn_about_row(float m[9], int row, float angle)
{
    math_mat3_rotate_rows(m, &m[row * 3], angle);
}

static void set_identity3(float m[9])
{
    for (int i = 0; i < 9; i++)
        m[i] = (i % 4 == 0) ? 1.0f : 0.0f;
}

static int item_type_of(int item)
{
    return item_int(item, 0x14);
}

/* Which item an arm deals with, and how: side 0 takes the item in hand 1, or
   the one in hand 0 when that is held with both hands; side 1 the one in
   hand 0. */
typedef struct Arm {
    int side;
    int item;                            /* -1: none */
    int type;
    int both_hands;                      /* the item in hand 0 is held with this arm too */
    int grip;                            /* which of the item type's grips: 1 for the second hand */
    int aimed;                           /* the item's type is aimed (item_type_unknown_10) */
    float rotation[9];                   /* the hand's target rotation */
    float target[3];                     /* the hand's target position, relative to the chest */
} Arm;

static void choose_item(const Drive *d, Arm *arm)
{
    const WorldHuman *h = d->h;

    arm->item = -1;
    arm->both_hands = 0;
    arm->grip = 0;
    if (arm->side == 1) {
        if (h->hands[0].count > 0)
            arm->item = h->hands[0].items[0];
    } else if (h->hands[1].count <= 0) {
        if (h->hands[0].count > 0) {
            int type = item_type_of(h->hands[0].items[0]);
            if ((item_type_unknown_7c(type) > 1 || type == ITEM_TYPE_36)
                && (h->smoothed_rotation[4] > 0.70700002f || !(h->input_flags & HUMAN_INPUT_CROUCH))) {
                arm->item = h->hands[0].items[0];
                arm->both_hands = 1;
                arm->grip = 1;
            }
        }
    } else {
        arm->item = h->hands[1].items[0];
    }

    arm->aimed = 0;
    arm->type = -1;
    if (arm->item != -1) {
        arm->type = item_type_of(arm->item);
        arm->aimed = item_type_unknown_10(arm->type) != 0;
        if ((arm->type == ITEM_TYPE_34 || arm->type == ITEM_TYPE_29) && arm->side == 0) {
            arm->both_hands = 1;
            arm->grip = 1;
        }
    }
}

/* The hand's rotation before the item's own pose. */
static void base_hand_rotation(const Drive *d, Arm *arm)
{
    const WorldHuman *h = d->h;
    float *r = arm->rotation;
    int arms_follow_70 = (h->input_flags & HUMAN_INPUT_THROW) || !h->inventory_anim_flags;

    set_identity3(r);
    math_mat3_rotate_rows(r, x_axis, h->view_pitch * 0.5f - 0.049087387f);
    turn_about_row(r, 0, 0x1.921fb6p-8f);                /* pi/512 */
    turn_about_row(r, 1, -0x1.2d97c8p-6f);               /* -3pi/512 */
    if (h->inventory_anim_flags == 1)
        turn_about_row(r, 2, PI_8);
    if (d->on_foot && (h->input_flags & HUMAN_INPUT_AIM))
        math_mat3_rotate_rows(r, x_axis, PI_4);
    if (arms_follow_70)
        math_mat3_rotate_rows(r, x_axis, h->throw_pitch + h->throw_pitch);
    math_mat3_rotate_rows(r, y_axis, -d->lean);
    if (arm->item == -1)
        set_identity3(r);

    if (arm->aimed && d->on_foot) {
        /* aimed on foot: the inverse spine turn of the look pose */
        const float *p = h->pose_rotations[3];
        float inverse[4] = {-p[0], -p[1], -p[2], p[3]};

        math_mat3_from_quat(r, inverse);
        turn_about_row(r, 0, (float)((double)h->view_pitch - 0.03681553890925782));
        if (d->on_foot && (h->input_flags & HUMAN_INPUT_AIM))
            turn_about_row(r, 0, PI_4);
        if (arms_follow_70)
            turn_about_row(r, 0, h->throw_pitch + h->throw_pitch);
    }
}

/* Where the hand goes relative to the chest, in the hand rotation's axes,
   before the item's grip: returns x, y, z in offset. */
static void hand_offset(const Drive *d, const Arm *arm, float offset[3])
{
    const WorldHuman *h = d->h;
    const float *r = arm->rotation;
    float a = 0.1875f, b = 0.0625f, c = 0.0f;

    if (h->zoom_level == 2) {
        a = 0.0625f;
        b = 0.125f;
    }
    if (arm->aimed && !d->on_foot)
        b = 0.125f;
    if (arm->side == 0 && h->hands[1].count > 0) {
        a = -0.125f;
        b = 0.125f;
    }
    if (arm->item != -1 && (arm->type == ITEM_TYPE_34 || arm->type == ITEM_TYPE_29)) {
        a = 0.0f;
        b = 0.0f;
        c = 0.0f;
        if (!d->on_foot)
            b = -0.125f;
    }
    if ((h->input_flags & HUMAN_INPUT_THROW) || !h->inventory_anim_flags) {
        float reach = -0.25f - (float)(crt_sin((double)(min_float((float)((double)h->throw_pitch + 1.17809724509625), 0.0f) * 3.0f)) * 0.375);

        c = reach * r[8];
        a = a + reach * r[6];
        b = b + reach * r[7];
    }
    offset[0] = ((a - r[6] * 0.1875f) - r[6] * 0.375f) + r[3] * 0.0625f;
    offset[1] = ((b - r[7] * 0.1875f) - r[7] * 0.375f) + r[4] * 0.0625f;
    offset[2] = ((c - r[8] * 0.1875f) - r[8] * 0.375f) + r[5] * 0.0625f;
    if (arm->item != -1 && arm->type == ITEM_TYPE_39) {
        offset[0] = (r[6] * 0.27500001f + offset[0]) - r[3] * 0.125f;
        offset[1] = (r[7] * 0.27500001f + offset[1]) - r[4] * 0.125f;
        offset[2] = (r[8] * 0.27500001f + offset[2]) - r[5] * 0.125f;
    }

    if (arm->side == 1) {
        if (arm->item == -1)
            return;
        if (arm->type == ITEM_TYPE_25 && item_int(h->hands[0].items[0], 0x27C) == 3) {
            offset[0] = (r[6] * 0.4375f + offset[0]) + r[3] * 0.0625f;
            offset[1] = (r[7] * 0.4375f + offset[1]) + r[4] * 0.0625f;
            offset[2] = (r[8] * 0.4375f + offset[2]) + r[5] * 0.0625f;
        }
    }
    if (arm->item != -1) {
        if (arm->type == ITEM_TYPE_11) {
            if (d->on_foot) {
                if (h->zoom_level == 2) {
                    offset[0] = offset[0] + r[6] * -0.25f;
                    offset[1] = offset[1] + r[7] * -0.25f;
                    offset[2] = offset[2] + r[8] * -0.25f;
                } else {
                    offset[0] = offset[0] + r[3] * -0.125f;
                    offset[1] = offset[1] + r[4] * -0.125f;
                    offset[2] = offset[2] + r[5] * -0.125f;
                }
            }
        } else if (arm->type == ITEM_TYPE_29 || arm->type == ITEM_TYPE_34) {
            return;
        }
    }
    if (arm->side == 0 && h->hands[1].count > 0) {
        offset[0] = offset[0] + r[6] * 0.125f;
        offset[1] = offset[1] + r[7] * 0.125f;
        offset[2] = offset[2] + r[8] * 0.125f;
    }
}

/* Type 15 is held across the body: the hand turns a quarter about its x row,
   then a quarter about its z row, in for the left hand and out for the
   right. */
static void turn_for_type_15(Arm *arm)
{
    turn_about_row(arm->rotation, 0, PI_2);
    if (arm->side == 0)
        turn_about_row(arm->rotation, 2, -PI_2);
    else if (arm->side == 1)
        turn_about_row(arm->rotation, 2, PI_2);
}

/* The hand's target without an item. */
static void empty_hand_target(const Drive *d, Arm *arm)
{
    const WorldHuman *h = d->h;
    float swing, bend, scale;
    __m128d sine_cosine;
    double lanes[2];

    arm->target[0] = arm->side ? 0.0625f : -0.0625f;
    swing = (float)((double)h->stride_lean * 0.39269908169875);
    if (h->zoom_level > 0)
        swing *= 0.5f;
    if (arm->side == 1)
        swing = -swing;
    bend = (float)((double)swing + (h->zoom_level ? 0.196349540849375 : 0.39269908169875));
    if (h->jump_charge > 0)
        bend = PI_4;
    scale = h->zoom_level ? 0.875f : 0.75f;
    if (ragdoll_unknown_mode) {
        float pitch = h->view_pitch;

        bend = (float)(2.74889357189125 - (double)((pitch + h->input_spine_bend) * 1.5f));
        scale = 1.0f;
        if (pitch > 0.0f) {
            float t = pitch * 0.75f;
            scale = t >= 0.75f ? 0.25f : 1.0f - t;
        }
    }
    if (h->movement_state == 1 || h->movement_state == 3) {
        scale = 0.9375f;
        bend = (float)(1.570796326795 - (double)(h->input_spine_bend + h->view_pitch));
    }
    if (!d->on_foot)
        bend = PI_2;
    sine_cosine = sub_1401F8A50((double)bend, 0, 0.0);
    _mm_storeu_pd(lanes, sine_cosine);
    arm->target[1] = (float)(lanes[1] * -0.65625 * (double)scale);
    arm->target[2] = (float)(lanes[0] * -0.65625 * (double)scale);

    if (d->both_hands_empty && arm->side == 1 && (h->input_flags & 3) == 3) {
        float a;

        arm->target[0] = -0.1875f;
        arm->target[1] = 0.0f;
        arm->target[2] = -0.65625f;
        a = h->input_spine_bend * 0.75f;
        if (!((double)a >= -0.6872233929727672))
            a = -0x1.5fdbbep-1f;                         /* -7pi/32 */
        else if ((double)a > 0.7853981633974483)
            a = PI_4;
        math_vec3_rotate(arm->target, x_axis, a);
        a = h->input_spine_twist * 0.75f;
        if (!((double)a >= -0.6872233929727672))
            a = -0x1.5fdbbep-1f;
        else if ((double)a > 0.7853981633974483)
            a = PI_4;
        math_vec3_rotate(arm->target, y_axis, a);
    }
}

/* The spring of idle_sway (side 0 only): a random push of length 1/128,
   pulled back by 1/256 of the distance and damped by 15/16 each tick. */
static void push_spring(WorldHuman *h, float push[3])
{
    float *p = h->idle_sway, *v = h->idle_sway_velocity;
    float vx, vy, vz;

    human_random_direction(push, 0.0078125f, 0.0f);
    vx = push[0] + v[0];
    v[0] = vx;
    vy = push[1] + v[1];
    v[1] = vy;
    vz = push[2] + v[2];
    v[2] = vz;
    vx = vx - p[0] * 0.00390625f;
    v[0] = vx;
    vx = vx * 0.9375f;
    vy = vy - p[1] * 0.00390625f;
    v[1] = vy;
    v[0] = vx;
    v[1] = vy * 0.9375f;
    v[2] = (vz - p[2] * 0.00390625f) * 0.9375f;
    p[0] = vx + p[0];
    p[1] = v[1] + p[1];
    p[2] = v[2] + p[2];
}

/* With the level in the way of the chest's y axis, the hand is pulled in
   (on_ground set, smoothed_rotation[4] below 1/2 and HUMAN_INPUT_CROUCH). */
static void probe_ahead(const Drive *d, Arm *arm)
{
    const WorldHuman *h = d->h;
    const HumanBone *chest = &h->bones[HUMAN_BONE_CHEST];
    const float *r = chest->rotation, *side_offset = ragdoll_arm_offset(arm->side);
    float v[3], n[3], point[3], ray[3], reach = 0.65625f, length, x, y;

    v[0] = (r[0] * y_axis[0] + r[1] * y_axis[1]) + r[2] * y_axis[2];
    v[1] = (r[3] * y_axis[0] + r[4] * y_axis[1]) + r[5] * y_axis[2];
    v[2] = (r[6] * y_axis[0] + r[7] * y_axis[1]) + r[8] * y_axis[2];
    length = sqrt_float((v[1] * v[1] + v[0] * v[0]) + v[2] * v[2]);
    if (is_zero_or_nan(length)) {
        n[0] = n[1] = n[2] = 0.0f;
    } else {
        float scale = 1.0f / length;
        n[0] = scale * v[0];
        n[1] = scale * v[1];
        n[2] = scale * v[2];
    }
    x = r[0] * side_offset[0] + chest->position[0];
    y = r[1] * side_offset[0] + chest->position[1];
    point[2] = ((r[2] * side_offset[0] + chest->position[2]) + r[5] * side_offset[1]) + r[8] * side_offset[2];
    point[0] = (x + r[3] * side_offset[1]) + r[6] * side_offset[2];
    point[1] = (y + r[4] * side_offset[1]) + r[7] * side_offset[2];
    ray[0] = point[0] - y_axis[0];
    ray[2] = point[2] - y_axis[2];
    ray[1] = point[1] - y_axis[1];
    if (sub_1400DC050(point, ray, 0))
        reach = (point[1] - ragdoll_unknown_height) + 0.00390625f;
    reach = -min_float(reach, 0.65625f);
    arm->target[0] = n[0] * reach;
    arm->target[1] = n[1] * reach;
    arm->target[2] = n[2] * reach;
}

static void drive_arm(Drive *d, int side)
{
    WorldHuman *h = d->h;
    const HumanBone *chest = &h->bones[HUMAN_BONE_CHEST];
    Arm arm = {.side = side};
    float offset[3], grip[3] = {0.0f, 0.0f, 0.0f}, *r = arm.rotation;
    float axis[3], limit, twist = 0.0f;
    float wrist_turn[4], frame[9], velocity[3], change_limit[3];
    uint32_t unknown_8c[3], angular_limit[3];
    int flags, item_free;

    choose_item(d, &arm);
    base_hand_rotation(d, &arm);
    hand_offset(d, &arm, offset);

    if (arm.item != -1) {
        if (!((h->input_flags & HUMAN_INPUT_THROW) || !h->inventory_anim_flags) && arm.type == ITEM_TYPE_15) {
            offset[0] = y_axis[0] * -0.65625f;
            offset[1] = y_axis[1] * -0.65625f;
            offset[2] = y_axis[2] * -0.65625f;
            if (!d->on_foot) {
                offset[0] = y_axis[0] * 0.125f + offset[0];
                offset[1] = y_axis[1] * 0.125f + offset[1];
                offset[2] = y_axis[2] * 0.125f + offset[2];
            }
            if (side == 0)
                offset[0] = -0.1875f;
            else if (side == 1)
                offset[0] = 0.1875f;
            math_mat3_rotate_rows(r, x_axis, PI_2);
            if (side == 0)
                turn_about_row(r, 2, -PI_2);
            else if (side == 1)
                turn_about_row(r, 2, PI_2);
        }
        for (int i = 0; i < 3; i++)
            grip[i] = item_type_grip_offset(arm.type, arm.grip)[i];
    }

    {
        float x0 = grip[0] * r[0] + offset[0];
        float x1 = x0 + grip[1] * r[3];
        float z1 = (grip[0] * r[2] + offset[2]) + grip[1] * r[5];
        float y1 = (grip[0] * r[1] + offset[1]) + grip[1] * r[4];

        arm.target[0] = grip[2] * r[6] + x1;
        arm.target[2] = grip[2] * r[8] + z1;
        arm.target[1] = grip[2] * r[7] + y1;
        if (arm.item != -1 && arm.type == ITEM_TYPE_26 && item_int(arm.item, 0x36C)) {
            float g = grip[2] + 0.1875f;
            arm.target[0] = r[6] * g + x1;
            arm.target[1] = r[7] * g + y1;
            arm.target[2] = r[8] * g + z1;
        }
    }

    if (arm.item != -1) {
        float d_chest[3];

        if (((h->input_flags & HUMAN_INPUT_THROW) || !h->inventory_anim_flags) && arm.type == ITEM_TYPE_15)
            turn_for_type_15(&arm);
        if (arm.aimed && arm.type != ITEM_TYPE_11 && (side == 1 || arm.both_hands == 1))
            human_aim_hand_target(arm.target, d->human, arm.both_hands, arm.type, r);

        if (h->inventory_anim_flags == 1) {
            float along = -(((arm.target[1] * r[1] + arm.target[0] * r[0]) + arm.target[2] * r[2]) * h->inventory_anim_progress);
            arm.target[0] = arm.target[0] + r[0] * along;
            arm.target[1] = arm.target[1] + r[1] * along;
            arm.target[2] = arm.target[2] + r[2] * along;
        }

        {
            const float *body = physics_bodies[item_int(arm.item, 0x58)].velocity;
            float bx = body[0], by = body[1], bz = body[2];

            if (ragdoll_unknown_mode) {
                float jitter[3], *kept = h->grips[side ^ 1].kept_velocity;

                jitter[0] = bx - h->trunk_velocity[0];
                jitter[1] = by - h->trunk_velocity[1];
                jitter[2] = bz - h->trunk_velocity[2];
                {
                    float length = sqrt_float((jitter[1] * jitter[1] + jitter[0] * jitter[0]) + jitter[2] * jitter[2]);
                    human_random_direction(jitter, length + length, 0.0f);
                }
                bx = (jitter[0] + kept[0]) * 0.75f + bx * 0.25f;
                kept[0] = bx;
                by = (jitter[1] + kept[1]) * 0.75f + by * 0.25f;
                kept[1] = by;
                bz = (jitter[2] + kept[2]) * 0.75f + bz * 0.25f;
                kept[2] = bz;
            }
            d_chest[1] = by - h->trunk_velocity[1];
            d_chest[0] = bx - h->trunk_velocity[0];
            d_chest[2] = bz - h->trunk_velocity[2];
        }
        to_local(axis, chest->rotation, d_chest);
        if (!(h->input_flags & HUMAN_INPUT_THROW) && h->inventory_anim_flags) {
            arm.target[0] = arm.target[0] + axis[0] * -0.75f;
            arm.target[1] = arm.target[1] + axis[1] * -0.75f;
            arm.target[2] = arm.target[2] + axis[2] * -0.75f;
        }

        if (arm.type == ITEM_TYPE_34 || arm.type == ITEM_TYPE_29)
            turn_about_row(r, 0, -0x1.5fdbbep+0f);       /* -7pi/16 */
        if (arm.type == ITEM_TYPE_18)
            turn_about_row(r, 0, -0x1.2d97c8p+0f);       /* -3pi/8 */
        if (arm.type == ITEM_TYPE_28) {
            float m[9];

            human_item_28_hand_target(arm.target, d->human, arm.item);
            set_identity3(m);
            math_mat3_rotate_rows(m, y_axis, (float)((double)h->view_yaw + 1.570796326794897));
            math_mat3_multiply_transposed(r, chest->rotation, m);
        }
        {
            const float *t = item_type_grip_turn(arm.type, arm.grip);
            if (__builtin_fabsf(t[3]) > 0.0f) {
                axis[0] = (r[3] * t[1] + r[0] * t[0]) + r[6] * t[2];
                axis[1] = (r[4] * t[1] + r[1] * t[0]) + r[7] * t[2];
                axis[2] = (r[5] * t[1] + r[2] * t[0]) + r[8] * t[2];
                math_mat3_rotate_rows(r, axis, -t[3]);
            }
        }
    }

    if (side == 0)
        push_spring(h, axis);

    {
        const float *side_offset = ragdoll_arm_offset(side);
        float ty = (r[4] * 0.0625f + arm.target[1]) - side_offset[1];

        arm.target[0] = (r[3] * 0.0625f + arm.target[0]) - side_offset[0];
        arm.target[1] = ty;
        arm.target[2] = (r[5] * 0.0625f + arm.target[2]) - side_offset[2];
    }
    if (arm.item == -1)
        empty_hand_target(d, &arm);
    else if (arm.type == ITEM_TYPE_36) {
        arm.target[0] = side ? -0.1875f : 0.1875f;
        arm.target[1] = 0x1.2059d2p-1f;                  /* 0.5631853 */
        arm.target[2] = -0x1.cada38p-4f;                 /* -0.1120245 */
    }

    /* the hand's turn from the arm, inverted */
    math_quat_from_mat3(wrist_turn, r);
    wrist_turn[0] = -wrist_turn[0];
    wrist_turn[1] = -wrist_turn[1];
    wrist_turn[2] = -wrist_turn[2];
    limit = 0.19634955f;
    if (!h->inventory_anim_flags)
        limit = PI_4;
    if (h->jump_charge > 0)
        limit = PI_4;
    if (h->movement_state == 3)
        limit = PI_4;
    if (h->movement_state != 2 && h->on_ground && h->smoothed_rotation[4] < 0.5f && (h->input_flags & HUMAN_INPUT_CROUCH))
        probe_ahead(d, &arm);

    /* the arm's inverse kinematics */
    flags = arm.item == -1 ? 4 : 6;
    set_identity3(frame);
    velocity[0] = velocity[1] = velocity[2] = 0.0f;
    change_limit[0] = 0x1.2d97c8p-2f;                    /* 3pi/32 */
    change_limit[1] = 0x1.2d97c8p-3f;                    /* 3pi/64 */
    change_limit[2] = 0x1.2d97c8p-3f;
    unknown_8c[0] = unknown_8c[1] = unknown_8c[2] = 0x3F600000;   /* 7/8 */
    if (!(d->health[side] >= 1.0f))
        flags |= 1;
    item_free = arm.item == -1 && (h->input_flags & (side != 1 ? 2 : 1));
    if (item_free) {
        limit = PI_8;
        change_limit[1] = change_limit[2] = 0x1.2d97c8p-2f;
        twist = 0.0f;
    } else {
        int loose = 0;

        twist = 0.0f;
        if (d->on_foot && arm.item == -1) {
            if (h->movement_state == 3)
                loose = h->legs[0].progress >= 0.875f;
            else
                loose = h->movement_state == 1 && !(h->input_flags & HUMAN_INPUT_CROUCH);
        }
        if (loose) {
            /* held loosely: no twist and no health flag */
            change_limit[0] = change_limit[1] = change_limit[2] = 0x1.2d97c8p-4f;   /* 3pi/128 */
            unknown_8c[0] = unknown_8c[1] = unknown_8c[2] = 0x3F400000;           /* 3/4 */
            angular_limit[0] = angular_limit[1] = angular_limit[2] = 0x3D800000;  /* 1/16 */
            human_limb_inverse_kinematics(d->human, HUMAN_BONE_CHEST, 3 * side + HUMAN_BONE_SHOULDER, arm.target,
                                          frame, velocity, 0.65625f, 0.0f, wrist_turn, change_limit, unknown_8c,
                                          angular_limit, limit, flags);
            goto after_arm;
        }
        if (arm.item != -1) {
            twist = PI_4;
            if (arm.type == ITEM_TYPE_11)
                twist = PI_8;
            else if (arm.type == ITEM_TYPE_3)
                twist = 0x1.5fdbbep+0f;          /* 7pi/16 */
        }
    }
    if (side == 0)
        twist = -twist;
    if ((h->input_flags & HUMAN_INPUT_THROW) || !h->inventory_anim_flags)
        twist = 0.0f;
    angular_limit[0] = angular_limit[1] = angular_limit[2] = 0;
    if (d->health[side] < 1.0f) {
        float weak = d->health[side] * 0.015625f + 0.00390625f;
        memcpy(&angular_limit[0], &weak, 4);
        memcpy(&angular_limit[1], &weak, 4);
    }
    flags |= 0x10;
    human_limb_inverse_kinematics(d->human, HUMAN_BONE_CHEST, 3 * side + HUMAN_BONE_SHOULDER, arm.target, frame,
                                  velocity, 0.65625f, twist, wrist_turn, change_limit, unknown_8c, angular_limit,
                                  limit, flags);

after_arm:
    if (arm.item == -1) {
        if (h->movement_state == 2) {
            /* lying: the arm follows the pelvis */
            float tilt = crt_asinf(h->bones[HUMAN_BONE_PELVIS].rotation[7]), bend, arm_twist;
            __m128d sine_cosine;
            double lanes[2];

            bend = tilt * (tilt <= 0.0f ? 0.25f : 4.0f);
            if ((double)bend > 2.748893571891069)
                bend = 2.7488935f;
            arm.target[0] = side ? 0.09375f : -0.09375f;
            sine_cosine = sub_1401F8A50((double)bend, 0, 0.0);
            _mm_storeu_pd(lanes, sine_cosine);
            arm.target[1] = (float)(lanes[1] * -0.4921875);
            arm.target[2] = (float)(lanes[0] * -0.4921875);
            arm_twist = bend <= 0.0f ? 0.0f : bend * 0.5f;
            if (side == 0)
                arm_twist = -arm_twist;
            angular_limit[0] = angular_limit[1] = angular_limit[2] = 0x3D800000;
            human_limb_inverse_kinematics(d->human, HUMAN_BONE_CHEST, 3 * side + HUMAN_BONE_SHOULDER, arm.target,
                                          frame, velocity, 0.65625f, arm_twist, wrist_turn, change_limit,
                                          unknown_8c, angular_limit, limit, flags);
        }
    } else {
        static const float hand_point[3];
        float grip_offset[3];

        memcpy(grip_offset, item_type_grip_offset(arm.type, arm.grip), sizeof grip_offset);
        human_hold_item(d->human, 3 * side + HUMAN_BONE_HAND, arm.item, hand_point, grip_offset,
                        item_type_grip_turn(arm.type, arm.both_hands));
        if (!(h->input_flags & HUMAN_INPUT_THROW) && h->inventory_anim_flags && side == 1 && arm.aimed && d->on_foot)
            human_keep_arms_off_item(d->human, arm.item);
    }
}

/* ---- joint axes ---------------------------------------------------------------------- */

/* Gives the joint into bone a free axis from the arm routine and a limit on
   the angular velocity its bond corrects. */
static void set_joint_axis(int human, int parent_bone, int child_bone, float limit)
{
    const HumanBone *bone = &world_humans[human].bones[child_bone];
    PhysicsConstraint *c = &physics_constraints[bone->bond];

    c->has_axis = 0;
    c->axis[0] = 0.0f;
    c->axis[1] = 0.0f;
    c->axis[2] = 0.0f;
    human_limit_joint_angles(human, parent_bone, child_bone, c->axis);
    if ((c->axis[0] * c->axis[0] + c->axis[1] * c->axis[1]) + c->axis[2] * c->axis[2] > 0.0f)
        c->has_axis = 1;
    physics_bonds[bone->bond].angular_limit = limit;
}

static void set_joint_axes(int human, float spine_limit, float arm_limit)
{
    set_joint_axis(human, HUMAN_BONE_PELVIS, HUMAN_BONE_STOMACH, spine_limit);
    set_joint_axis(human, HUMAN_BONE_STOMACH, HUMAN_BONE_CHEST, spine_limit);
    set_joint_axis(human, HUMAN_BONE_CHEST, HUMAN_BONE_HEAD, spine_limit);
    for (int side = 0; side < 2; side++) {
        int shoulder = HUMAN_BONE_SHOULDER + 3 * side;
        set_joint_axis(human, HUMAN_BONE_CHEST, shoulder, arm_limit);
        set_joint_axis(human, shoulder, shoulder + 1, arm_limit);
    }
}

/* ---- the whole drive -------------------------------------------------------------------- */

void human_drive_ragdoll(int human)
{
    static const int driven[] = {HUMAN_BONE_STOMACH, HUMAN_BONE_CHEST, HUMAN_BONE_HEAD, HUMAN_BONE_SHOULDER,
                                 HUMAN_BONE_FOREARM, HUMAN_BONE_SHOULDER + 3, HUMAN_BONE_FOREARM + 3};
    WorldHuman *h = &world_humans[human];
    Drive d = {.human = human, .h = h};
    if (h->inventory_anim_flags && (h->input_flags & HUMAN_INPUT_THROW))
        h->throw_pitch = h->input_spine_bend * 8.0f;
    d.health[0] = 1.0f;
    d.health[1] = 1.0f;
    if (h->parts[HUMAN_PART_LEFT_ARM].health < 100)
        d.health[0] = (float)h->parts[HUMAN_PART_LEFT_ARM].health * 0.0099999998f;
    if (h->parts[HUMAN_PART_RIGHT_ARM].health < 100)
        d.health[1] = (float)h->parts[HUMAN_PART_RIGHT_ARM].health * 0.0099999998f;
    if (h->movement_state == 1 && 0.0f > h->trunk_velocity[1])
        h->jump_pose_angle = 0;

    /* aiming: an item of an aimed type in hand 0, or else in hand 1 */
    if (h->hands[0].count > 0 && item_type_unknown_10(item_type_of(h->hands[0].items[0])))
        d.aiming = 1;
    else if (h->hands[1].count > 0 && item_type_unknown_10(item_type_of(h->hands[1].items[0])))
        d.aiming = 1;
    d.lean = h->zoom_level == 2 ? PI_4 : PI_8;
    if (h->input_flags & HUMAN_INPUT_AIM)
        d.lean = 0.0f;
    if (!d.aiming)
        d.lean = 0.0f;
    if (h->hands[0].count > 0 && item_type_unknown_14(item_type_of(h->hands[0].items[0])))
        d.lean = -d.lean;
    if (ragdoll_unknown_mode)
        d.lean = 0.0f;
    d.on_foot = h->vehicle == -1;
    if (!d.on_foot) {
        d.input_pitch = h->input_pitch;
        d.input_yaw = h->input_yaw;
    }
    d.both_hands_empty = h->hands[1].count <= 0 && h->hands[0].count <= 0;

    drive_lower_spine(&d);
    drive_upper_spine(&d);
    if (d.aiming && d.on_foot)
        drive_spine_to_look_pose(&d);
    drive_head(&d);
    drive_arm(&d, 0);
    drive_arm(&d, 1);

    for (unsigned i = 0; i < sizeof driven / sizeof driven[0]; i++)
        physics_constraints[h->bones[driven[i]].bond].has_axis = 0;
    if (h->movement_state == 2)
        set_joint_axes(human, 0.0078125f, 0.03125f);
    if (h->damage_ticks > 0) {
        float limit = 0.125f - min_float((float)h->damage_ticks * 0.016666668f, 1.0f) * 0.1171875f;
        set_joint_axes(human, limit, limit * 0.25f);
    }
}

/* ---- helpers of the joints and hands ------------------------------------------------- */

/* A simple noise generator shared with other effects. 0x1602E12C0 */
#define ragdoll_noise_seed SR_GLOBAL(uint32_t, 0x1602E12C0ULL)

/* A number in (-1, 1] from the noise generator. */
static float noise(void)
{
    uint32_t seed = ragdoll_noise_seed;
    uint32_t h = (seed << 13) ^ seed;
    uint32_t t;

    ragdoll_noise_seed = seed + 1;
    t = (h * h) * 15731u + 789221u;
    t = (t * t - 771171059u) & 0x7FFFFFFF;
    return 1.0f - (float)(int32_t)t * 0x1p-30f;
}

void human_random_direction(float v[3], float length, float add)
{
    float scale;

    v[0] = noise();
    v[1] = noise();
    v[2] = noise();
    math_vec3_normalize(v, v);
    scale = ((noise() + 1.0f) * length) * 0.5f + add;
    v[0] = scale * v[0];
    v[1] = scale * v[1];
    v[2] = scale * v[2];
}

void human_random_direction_2d(float v[2], float length, float add)
{
    float x, y, size, scale;

    x = noise();
    v[0] = x;
    y = noise();
    x = v[0];
    size = sqrt_float(x * x + y * y);
    if (is_zero_or_nan_quiet(size)) {
        y = 0.0f;
        x = 0.0f;
    } else {
        float inverse = 1.0f / size;

        y = y * inverse;
        x = x * inverse;
    }
    v[0] = x;
    v[1] = y;
    scale = ((noise() + 1.0f) * length) * 0.5f + add;
    v[1] = scale * v[1];
    v[0] = scale * v[0];
}

void human_limit_joint_change(int human, int parent_bone, int child_bone, float bias[3], float limit, float share)
{
    const HumanBone *parent = &world_humans[human].bones[parent_bone];
    const HumanBone *child = &world_humans[human].bones[child_bone];
    float current[3], change[3], length;

    for (int i = 0; i < 3; i++)
        current[i] = (parent->angular_velocity[i] - child->angular_velocity[i]) * share;
    for (int i = 0; i < 3; i++)
        change[i] = bias[i] - current[i];
    length = sqrt_float((change[1] * change[1] + change[0] * change[0]) + change[2] * change[2]);
    if (length > limit) {
        float unit[3] = {0.0f, 0.0f, 0.0f};

        if (!is_zero_or_nan(length)) {
            float scale = 1.0f / length;
            for (int i = 0; i < 3; i++)
                unit[i] = change[i] * scale;
        }
        for (int i = 0; i < 3; i++)
            bias[i] = unit[i] * limit + current[i];
    }
}

/* Row ra of a dotted with row rb of b, summed as the original does. */
static float dot_rows(const float a[9], int ra, const float b[9], int rb)
{
    return (a[ra * 3 + 1] * b[rb * 3 + 1] + a[ra * 3] * b[rb * 3]) + a[ra * 3 + 2] * b[rb * 3 + 2];
}

/* A spring back toward [min, max] for one Euler angle moving at rate. */
static float angle_spring(float angle, float rate, float min, float max)
{
    float correction = 0.0f, t;

    if (!(angle >= min)) {
        t = (angle - min) * -0.25f - rate * 0.5f;
        if (t > 0.0f)
            correction = t;
    }
    if (angle > max) {
        t = (angle - max) * -0.25f - rate * 0.5f;
        if (!(t >= 0.0f))
            correction = correction + t;
    }
    return correction;
}

void human_limit_joint_angles(int human, int parent_bone, int child_bone, float axis[3])
{
    HumanBone *parent = &world_humans[human].bones[parent_bone], *child = &world_humans[human].bones[child_bone];
    const HumanSkeletonBone *limits = &human_skeleton[child_bone];
    const float *p = parent->rotation, *c = child->rotation;
    float angle[3], rate[3], d[3], correction[3], sine, cosine;

    /* the child's Euler angles in the parent's axes: x, then y, then z */
    angle[0] = crt_atan2f(dot_rows(c, 1, p, 2), dot_rows(c, 2, p, 2));
    {
        float r00 = dot_rows(c, 0, p, 0), r01 = dot_rows(c, 0, p, 1);
        angle[1] = crt_atan2f(-dot_rows(c, 0, p, 2), sqrt_float(r01 * r01 + r00 * r00));
    }
    math_sine_cosine(angle[0], &sine, &cosine);
    angle[2] = crt_atan2f(dot_rows(c, 2, p, 0) * sine - dot_rows(c, 1, p, 0) * cosine,
                          dot_rows(c, 1, p, 1) * cosine - dot_rows(c, 2, p, 1) * sine);

    for (int i = 0; i < 3; i++)
        d[i] = parent->angular_velocity[i] - child->angular_velocity[i];
    rate[0] = (d[1] * p[1] + d[0] * p[0]) + d[2] * p[2];
    rate[1] = (d[1] * p[4] + d[0] * p[3]) + d[2] * p[5];
    rate[2] = (d[0] * p[6] + d[1] * p[7]) + d[2] * p[8];
    for (int i = 0; i < 3; i++) {
        correction[i] = angle_spring(angle[i], rate[i], limits->min_angle[i], limits->max_angle[i]);
        child->euler_angles[i] = min_float(max_float(limits->min_angle[i], angle[i]), limits->max_angle[i]);
    }
    axis[0] = (correction[1] * p[3] + p[0] * correction[0]) + (correction[2] * p[6] + axis[0]);
    axis[1] = (correction[2] * p[7] + correction[0] * p[1]) + (correction[1] * p[4] + axis[1]);
    axis[2] = (correction[2] * p[8] + correction[0] * p[2]) + (correction[1] * p[5] + axis[2]);
}

void human_aim_hand_target(float target[3], int human, int grip, int item_type, const float rotation[9])
{
    const WorldHuman *h = &world_humans[human];
    const float *aim = human_skeleton[HUMAN_BONE_HAND].anchor;
    const float *sight = item_type_floats(item_type, 0x1394), *offset = item_type_grip_offset(item_type, grip);
    float x = aim[0] - 0.0625f, y = aim[1], z = aim[2] - 0.09375f;

    if (h->inventory_anim_flags != 1 && h->zoom_level < 2)
        y = y - 0.25f;
    if (h->vehicle != -1)
        y = y + 0.25f;
    /* back along the item's sight, then out to the grip */
    for (int row = 0; row < 3; row++) {
        float s = -sight[row];
        x = s * rotation[row * 3] + x;
        y = s * rotation[row * 3 + 1] + y;
        z = s * rotation[row * 3 + 2] + z;
    }
    for (int row = 0; row < 3; row++) {
        float g = offset[row];
        x = g * rotation[row * 3] + x;
        y = g * rotation[row * 3 + 1] + y;
        z = g * rotation[row * 3 + 2] + z;
    }
    target[0] = x;
    target[1] = y;
    target[2] = z;
}

void human_item_28_hand_target(float target[3], int human, int item)
{
    const WorldHuman *h = &world_humans[human];
    const HumanBone *chest = &h->bones[HUMAN_BONE_CHEST];
    const float *grip = item_type_grip_offset(item_type_of(item), 0);
    const float *position = &SR_GLOBAL(float, 0x182BBB180ULL + 0x1B80ULL * (uint64_t)(int64_t)(item) + 0x5C);
    const float *r = &SR_GLOBAL(float, 0x182BBB180ULL + 0x1B80ULL * (uint64_t)(int64_t)(item) + 0xA4);
    const float *anchor = &SR_GLOBAL(float, 0x182BBB180ULL + 0x1B80ULL * (uint64_t)(int64_t)(item) + 0x300);
    float gx, gy, gz, m[9], x, y, z, dx, dz, length, d[3];

    /* the grip in world space */
    gx = ((grip[0] * r[0] + position[0]) + grip[1] * r[3]) + grip[2] * r[6];
    gz = ((grip[0] * r[2] + position[2]) + grip[1] * r[5]) + grip[2] * r[8];
    gy = ((grip[0] * r[1] + position[1]) + grip[1] * r[4]) + grip[2] * r[7];

    set_identity3(m);
    math_mat3_rotate_rows(m, y_axis, h->input_turn_yaw);
    x = (m[0] * 0.875f + anchor[0]) + m[3] * 0.5f;
    y = (m[1] * 0.875f + anchor[1]) + m[4] * 0.5f;
    z = (m[2] * 0.875f + anchor[2]) + m[5] * 0.5f;
    /* at most 1/16 away from the grip across the ground */
    dx = x - gx;
    dz = z - gz;
    length = sqrt_float(dz * dz + dx * dx);
    if (!(length <= 0.0625f)) {
        float scale = 1.0f / length;
        y = gy;
        z = (scale * dz) * 0.0625f + gz;
        x = (scale * dx) * 0.0625f + gx;
    }
    d[0] = x - chest->position[0];
    d[1] = y - chest->position[1];
    d[2] = z - chest->position[2];
    to_local(target, chest->rotation, d);
}

/* ---- the arm's inverse kinematics -------------------------------------------------------- */

void human_limit_joint_turn(int human, int parent_bone, int child_bone, float axis[3])
{
    const HumanBone *parent = &world_humans[human].bones[parent_bone];
    const HumanBone *child = &world_humans[human].bones[child_bone];
    const HumanSkeletonBone *limits = &human_skeleton[child_bone];
    const float *p = parent->rotation, *c = child->rotation;
    float m[9], q[4], angle[3], rate[3];

    /* m = p * transpose(c), each element summed (x + y) + z */
    for (int row = 0; row < 3; row++)
        for (int column = 0; column < 3; column++)
            m[row * 3 + column] = (p[row * 3] * c[column * 3] + p[row * 3 + 1] * c[column * 3 + 1])
                                  + p[row * 3 + 2] * c[column * 3 + 2];
    math_quat_from_mat3(q, m);
    for (int row = 0; row < 3; row++)
        rate[row] = (axis[0] * p[row * 3] + axis[1] * p[row * 3 + 1]) + axis[2] * p[row * 3 + 2];
    if (!(q[3] >= 0.0f)) {
        for (int i = 0; i < 4; i++)
            q[i] = -q[i];
    }
    /* small-angle Euler angles: twice the quaternion's vector part */
    for (int i = 0; i < 3; i++)
        angle[i] = q[i] * 2.0f;
    if ((child_bone == 11 || child_bone == 14) && (double)angle[0] > 1.570796326795)
        angle[0] = (float)(-3.14159265359 - (3.14159265359 - (double)angle[0]));
    for (int i = 0; i < 3; i++) {
        float t;

        if (!(angle[i] >= limits->min_angle[i])) {
            t = (angle[i] - limits->min_angle[i]) * -0.25f;
            if (t - rate[i] > 0.0f)
                rate[i] = t;
        }
        if (angle[i] > limits->max_angle[i]) {
            t = (angle[i] - limits->max_angle[i]) * -0.25f;
            if (!(t - rate[i] >= 0.0f))
                rate[i] = t;
        }
    }
    to_world(axis, p, rate);
}

/* The turn of a joint toward target, limited to +-limit, as a bias in world
   axes through the child's rotation: shared by the three joints of a limb. */
static void limb_joint_bias(float bias[3], float q[4], const float target[4], const HumanBone *child, float limit)
{
    float turn_q[4], axis[3], angle, scaled[3];
    double half;

    if (!(((q[3] * target[3] + q[2] * target[2]) + (q[0] * target[0] + q[1] * target[1])) >= 0.0f)) {
        for (int i = 0; i < 4; i++)
            q[i] = -q[i];
    }
    q[0] = -q[0];
    q[1] = -q[1];
    q[2] = -q[2];
    math_quat_multiply(turn_q, q, target);
    math_vec3_normalize(axis, turn_q);
    half = crt_acos(min_float(max_float(turn_q[3], -1.0f), 1.0f));
    angle = max_float((float)(half + half), -limit);
    if (!(limit >= angle))
        angle = limit;
    for (int i = 0; i < 3; i++)
        scaled[i] = axis[i] * angle;
    to_world(bias, child->rotation, scaled);
}

/* Adds half of velocity to a joint's bias and sets its bond's limits. */
static void finish_limb_joint(const HumanBone *child, float bias[3], const float velocity[3],
                              uint32_t angular_limit, uint32_t unknown_8c)
{
    PhysicsBond *bond = &physics_bonds[child->bond];

    bias[0] = velocity[0] * 0.5f + bias[0];
    bias[1] = velocity[1] * 0.5f + bias[1];
    bias[2] = velocity[2] * 0.5f + bias[2];
    physics_constraints[child->bond].has_axis = 0;
    memcpy(&bond->angular_limit, &angular_limit, 4);
    memcpy(bond->unknown_8c, &unknown_8c, 4);
}

void human_limb_inverse_kinematics(int human, int parent_bone, int bone, const float target[3], const float frame[9],
                                   const float velocity[3], float length, float twist, float wrist_turn[4],
                                   const float change_limit[3], const uint32_t unknown_8c[3],
                                   const uint32_t angular_limit[3], float limit, int flags)
{
    WorldHuman *h = &world_humans[human];
    HumanBone *upper = &h->bones[bone], *lower = &h->bones[bone + 1], *end = &h->bones[bone + 2];
    float reach, bend, m[9], local[3], shoulder_target[4], wrist_target[4], q[4], sine, cosine;
    float conjugate_source[4];
    float *bias;

    /* the bend of the middle joint from how far the target is */
    reach = sqrt_float((target[0] * target[0] + target[1] * target[1]) + target[2] * target[2]);
    if (reach > __builtin_fabsf(length))
        reach = __builtin_fabsf(length);
    bend = (float)(crt_acos((double)(reach / length)) * -2.0);
    if (flags & 4)
        bend = -bend;

    joint_rotation(q, &h->bones[parent_bone], upper);

    /* the upper joint's target: the limb points at target (in frame's axes),
       twisted, then raised by half the bend */
    to_local(local, frame, target);
    if (!(flags & 4) && local[1] > -0.0625f)
        local[1] = -0.0625f;
    {
        float *row0 = &m[0], *row1 = &m[3], *row2 = &m[6], t;

        row1[1] = -local[1];
        row1[2] = -local[2];
        row1[0] = -local[0];
        math_vec3_normalize(row1, row1);
        row2[0] = row1[2] * x_axis[1] - row1[1] * x_axis[2];
        row2[1] = row1[0] * x_axis[2] - row1[2] * x_axis[0];
        row2[2] = row1[1] * x_axis[0] - row1[0] * x_axis[1];
        math_vec3_normalize(row2, row2);
        row0[0] = row2[2] * row1[1] - row2[1] * row1[2];
        row0[1] = row2[0] * row1[2] - row2[2] * row1[0];
        row0[2] = row2[1] * row1[0] - row2[0] * row1[1];
        math_vec3_normalize(row0, row0);
        /* transpose */
        t = m[1]; m[1] = m[3]; m[3] = t;
        t = m[2]; m[2] = m[6]; m[6] = t;
        t = m[5]; m[5] = m[7]; m[7] = t;
    }
    math_mat3_rotate_rows(m, y_axis, twist);
    math_mat3_rotate_rows(m, x_axis, bend * -0.5f);
    math_quat_from_mat3(shoulder_target, m);
    memcpy(conjugate_source, shoulder_target, sizeof conjugate_source);
    if (flags & 8) {
        set_identity3(m);
        math_mat3_rotate_rows(m, y_axis, twist);
        math_mat3_rotate_rows(m, x_axis, bend * -0.5f);
        math_quat_from_mat3(conjugate_source, m);
    }

    bias = physics_constraints[upper->bond].bias;
    limb_joint_bias(bias, q, shoulder_target, upper, limit);
    bias[0] = velocity[0] * 0.5f + bias[0];
    bias[1] = velocity[1] * 0.5f + bias[1];
    bias[2] = velocity[2] * 0.5f + bias[2];
    if (bone == 10) {                    /* legs: hip_turn[0] / hip_turn[1] are added */
        bias[0] = bias[0] + h->hip_turn[0][0];
        bias[1] = h->hip_turn[0][1] + bias[1];
        bias[2] = h->hip_turn[0][2] + bias[2];
    } else if (bone == 13) {
        bias[1] = bias[1] + h->hip_turn[1][1];
        bias[2] = bias[2] + h->hip_turn[1][2];
        bias[0] = bias[0] + h->hip_turn[1][0];
    }
    if (flags & 0x10) {
        human_limit_joint_change(human, parent_bone, bone, bias, change_limit[0], 1.0f);
        human_limit_joint_turn(human, parent_bone, bone, physics_bonds[upper->bond].normal);
    }
    physics_constraints[upper->bond].has_axis = 0;
    memcpy(&physics_bonds[upper->bond].angular_limit, &angular_limit[0], 4);
    memcpy(physics_bonds[upper->bond].unknown_8c, &unknown_8c[0], 4);

    /* the middle joint bends about x */
    joint_rotation(q, upper, lower);
    math_sine_cosine(bend * 0.5f, &sine, &cosine);
    if (!(sine * q[0] + cosine * q[3] >= 0.0f) && !(cosine * q[3] >= 0.0f)) {
        for (int i = 0; i < 4; i++)
            q[i] = -q[i];
    }
    q[0] = -q[0];
    q[1] = -q[1];
    q[2] = -q[2];
    {
        float x = cosine * q[0] + sine * q[3];
        float z = q[2] * cosine - q[1] * sine;
        float w = cosine * q[3] - sine * q[0];
        float y = q[2] * sine + q[1] * cosine;
        float axis[3], turn_q[3] = {x, y, z}, angle, scaled[3];
        double half;

        math_vec3_normalize(axis, turn_q);
        half = crt_acos(min_float(max_float(w, -1.0f), 1.0f));
        angle = max_float((float)(half + half), -limit);
        if (!(limit >= angle))
            angle = limit;
        for (int i = 0; i < 3; i++)
            scaled[i] = axis[i] * angle;
        bias = physics_constraints[lower->bond].bias;
        to_world(bias, lower->rotation, scaled);
        finish_limb_joint(lower, bias, velocity, angular_limit[1], unknown_8c[1]);
    }

    /* the end joint (wrist or ankle) */
    joint_rotation(q, lower, end);
    wrist_target[0] = 0.0f;
    wrist_target[1] = 0.0f;
    wrist_target[2] = 0.0f;
    wrist_target[3] = 1.0f;
    {
        /* the original keeps these in registers that each block negates
           again, so with both flags 2 and 8 the second block sees them
           negated back */
        float s = sine, cx = conjugate_source[0], cy = conjugate_source[1], cz = conjugate_source[2];
        float conjugate[4];

        if (flags & 2) {
            s = -s;
            cx = -cx;
            cy = -cy;
            cz = -cz;
            wrist_target[3] = cosine;
            wrist_target[0] = s;
            conjugate[0] = cx;
            conjugate[1] = cy;
            conjugate[2] = cz;
            conjugate[3] = conjugate_source[3];
            math_quat_multiply(wrist_target, wrist_target, conjugate);
            if (!(((wrist_target[3] * wrist_turn[3] + wrist_target[2] * wrist_turn[2])
                   + (wrist_target[1] * wrist_turn[1] + wrist_target[0] * wrist_turn[0])) >= 0.0f)) {
                for (int i = 0; i < 4; i++)
                    wrist_turn[i] = -wrist_turn[i];
            }
            math_quat_multiply(wrist_target, wrist_target, wrist_turn);
        }
        if (flags & 8) {
            s = -s;
            cx = -cx;
            cy = -cy;
            cz = -cz;
            wrist_target[3] = cosine;
            wrist_target[0] = s;
            wrist_target[1] = 0.0f;
            wrist_target[2] = 0.0f;
            conjugate[0] = cx;
            conjugate[1] = cy;
            conjugate[2] = cz;
            conjugate[3] = conjugate_source[3];
            math_quat_multiply(wrist_target, wrist_target, conjugate);
        }
    }
    bias = physics_constraints[end->bond].bias;
    limb_joint_bias(bias, q, wrist_target, end, limit);
    finish_limb_joint(end, bias, velocity, angular_limit[2], unknown_8c[2]);
}

/* ---- holding items ---------------------------------------------------------------------- */

/* Item fields the hands read (world.h's WorldItem). */
#define item_floats(item, offset) \
    (&SR_GLOBAL(float, 0x182BBB180ULL + 0x1B80ULL * (uint64_t)(int64_t)(item) + (offset)))
#define item_body(item)      item_int(item, 0x58)
#define item_position(item)  item_floats(item, 0x5C)
#define item_rotation(item)  item_floats(item, 0xA4)

/* The first bond not in use, or -1. */
static int free_bond(void)
{
    for (int k = 0; k < PHYSICS_BOND_CAPACITY; k++)
        if (!physics_bonds[k].active)
            return k;
    return -1;
}

void human_hold_item(int human, int hand_bone, int item, const float hand_point[3], const float item_point[3],
                     const float grip_turn[4])
{
    const HumanBone *hand = &world_humans[human].bones[hand_bone];
    int type = item_type_of(item), k, body;
    PhysicsBond *bond;

    if (type == ITEM_TYPE_39)
        return;

    /* a point bond: hand_point on the hand to item_point on the item */
    k = free_bond();
    if (k == -1)
        return;
    bond = &physics_bonds[k];
    memset(&bond->type, 0, 0xF0);
    body = item_body(item);
    bond->active = 1;
    bond->type = PHYSICS_CONSTRAINT_BODY_POINTS;
    bond->lifetime = 0;
    bond->pass_mask = 0;
    bond->other_body = body;
    bond->body = hand->body;
    bond->stiffness = 0.25f;
    bond->damping = 0.375f;
    for (int i = 0; i < 3; i++)
        bond->local_point[i] = hand_point[i];
    for (int i = 0; i < 3; i++)
        bond->other_local_point[i] = item_point[i];
    if (type == ITEM_TYPE_28)
        return;

    /* a rotation bond turning the item to the hand's rotation (turned by
       the grip), a quarter of the way per tick; this slot is not cleared */
    k = free_bond();
    if (k == -1)
        return;
    {
        const float *r = hand->rotation, *item_r = item_rotation(item);
        float m[9], q[4], v[3], axis[3], angle, scaled[3], *bias;
        double half;

        bond = &physics_bonds[k];
        bond->active = 1;
        bond->type = PHYSICS_CONSTRAINT_ROTATION;
        bond->lifetime = 0;
        bond->pass_mask = 0;
        bond->body = hand->body;
        bond->other_body = body;
        bond->stiffness = 0.0625f;
        bond->angular_limit = 0x1.111112p-2f;            /* 0.26666668 */
        bond->damping = 0.5f;
        physics_constraints[k].stiffness = 0.5f;

        math_mat3_multiply_transposed(m, item_r, r);
        if (!(__builtin_fabsf(grip_turn[3]) <= 0.0f))
            math_mat3_rotate_rows(m, grip_turn, grip_turn[3]);
        math_quat_from_mat3(q, m);
        v[0] = -q[0];
        v[1] = -q[1];
        v[2] = -q[2];
        math_vec3_normalize(axis, v);
        half = crt_acos(min_float(max_float(q[3], -1.0f), 1.0f));
        angle = (float)(half + half);
        for (int i = 0; i < 3; i++)
            scaled[i] = axis[i] * angle;
        bias = physics_constraints[k].bias;
        to_world(bias, r, scaled);
        bias[0] = bias[0] * 0.25f;
        bias[1] = bias[1] * 0.25f;
        bias[2] = bias[2] * 0.25f;
    }
}

/* Closest points of two segments, still recompiled: returns nonzero when they
   come within reach. */
extern long long sub_1400D6890(float *closest_a, float *closest_b, float *distance, float *a_start, float *a_end,
                               float *b_end, float *b_start, float reach);
/* Adds a contact between two bodies, still recompiled. */
extern long long sub_1400052C0(int body_a, int body_b, float *offset_a, float *offset_b, unsigned int *normal,
                               float depth, unsigned int a7, float a8, unsigned int a9);

void human_keep_arms_off_item(int human, int item)
{
    WorldHuman *h = &world_humans[human];
    long long result = 0;

    (void)result;
    for (int k = 0; k < 4; k++) {
        /* the right shoulder twice, then the chest twice, each against one
           side of the item's sight */
        int bone = k < 2 ? HUMAN_BONE_SHOULDER + 3 : HUMAN_BONE_CHEST;
        const HumanBone *b = &h->bones[bone];
        const float *dir = &b->rotation[3 * human_skeleton[bone].axis_row];
        const float *p = b->position, *sight = item_type_floats(item_type_of(item), 0x1394);
        const float *ip = item_position(item), *ir = item_rotation(item);
        float near[3], far[3], item_end[3], item_start[3], side, closest_a[3], closest_b[3], depth;

        for (int i = 0; i < 3; i++) {
            near[i] = dir[i] * 0.1640625f + p[i];
            far[i] = dir[i] * 0.2890625f + p[i];
        }
        if (k >= 2) {
            float back = human_skeleton[bone].length * -0.5f - 0.0625f;
            float forward = human_skeleton[HUMAN_BONE_HAND].anchor[0] - 0.125f;

            for (int i = 0; i < 3; i++) {
                float up = b->rotation[3 + i] * 0.0625f;
                far[i] = (dir[i] * back + p[i]) + up;
                near[i] = (dir[i] * forward + p[i]) + up;
            }
        }
        side = (k & 1) ? sight[1] + 0.0625f : sight[1] - 0.0625f;
        for (int i = 0; i < 3; i++) {
            item_start[i] = ip[i];
            item_end[i] = side * ir[3 + i] + (sight[2] * ir[6 + i] + ip[i]);
        }
        if (sub_1400D6890(closest_a, closest_b, &depth, far, near, item_end, item_start, 0.125f)) {
            float d[3] = {closest_a[0] - closest_b[0], closest_a[1] - closest_b[1], closest_a[2] - closest_b[2]};
            float normal[3], middle[3], offset_bone[3], offset_item[3], length;

            length = sqrt_float((d[1] * d[1] + d[0] * d[0]) + d[2] * d[2]);
            if (is_zero_or_nan(length)) {
                normal[0] = normal[1] = normal[2] = 0.0f;
            } else {
                float scale = 1.0f / length;
                normal[0] = scale * d[0];
                normal[1] = scale * d[1];
                normal[2] = scale * d[2];
            }
            middle[0] = (closest_b[0] + closest_a[0]) * 0.5f;
            middle[2] = (closest_b[2] + closest_a[2]) * 0.5f;
            middle[1] = (closest_b[1] + closest_a[1]) * 0.5f;
            for (int i = 0; i < 3; i++) {
                offset_bone[i] = middle[i] - p[i];
                offset_item[i] = middle[i] - ip[i];
            }
            sub_1400052C0(b->body, item_body(item), offset_bone, offset_item, (unsigned int *)normal,
                          0.125f - depth, 0x3ECCCCCD, 0.03125f, 0x3D800000);
        }
    }
}
