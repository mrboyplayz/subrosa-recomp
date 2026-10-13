/* The jump: the one tick in which a human leaves the ground (state 3).
 *
 * A planted foot with the jump wanted puts the human in state 3
 * (human_feet.c). The tick after, this routine pushes off: the legs are sent
 * through the limb's inverse kinematics once more, every bone's body is
 * given the launch velocity (the body's own velocity with the vertical part
 * raised to the jump's speed, plus a spin about the centre of mass), and the
 * human is falling (state 1).
 */
#include "arith.h"
#include "collision.h"
#include "crt.h"
#include "human.h"
#include "math3d.h"
#include "physics.h"
#include "world.h"

/* Whether something moving from one point to the other passes through the
   level; the hit is left in collision_hit. */
extern int sub_1400DC050(float *from, float *to, int unknown);

enum { HUMAN_BONE_THIGH = 10, HUMAN_BONE_SHIN = 11 };   /* + 3 * leg */
enum { HUMAN_STATE_FALL = 1 };
enum { LEG_LOOSE = 0, LEG_PLANTED = 1 };

static const float up[3] = {0.0f, 1.0f, 0.0f};

static void heading_axes(float m[9], float yaw)
{
    m[0] = 1.0f; m[1] = 0.0f; m[2] = 0.0f;
    m[3] = 0.0f; m[4] = 1.0f; m[5] = 0.0f;
    m[6] = 0.0f; m[7] = 0.0f; m[8] = 1.0f;
    math_mat3_rotate_rows(m, &m[3], yaw);
}

static void hip_point(const HumanBone *pelvis, int leg, float hip[3])
{
    const float *anchor = human_skeleton[HUMAN_BONE_THIGH - 1 + 3 * leg].anchor;

    hip[0] = (pelvis->rotation[0] * anchor[0] + pelvis->position[0]) + anchor[1] * pelvis->rotation[3];
    hip[1] = (pelvis->rotation[1] * anchor[0] + pelvis->position[1]) + anchor[1] * pelvis->rotation[4];
    hip[2] = (pelvis->rotation[2] * anchor[0] + pelvis->position[2]) + pelvis->rotation[5] * anchor[1];
}

static float as_float(uint32_t bits)
{
    float value;
    __builtin_memcpy(&value, &bits, 4);
    return value;
}

static uint32_t as_bits(float value)
{
    uint32_t bits;
    __builtin_memcpy(&bits, &value, 4);
    return bits;
}

/* The turn of a leg's hip joint for a push at arm from the centre: the
   push's moment taken off along the smoothed rotation's rows (3, 3/4 and 6
   times), added to turn. */
static void hip_joint_turn(float out[3], const float r[9], const float arm[3], const float push[3], const float turn[3])
{
    float cx = push[1] * arm[2] - push[2] * arm[1];
    float cy = push[2] * arm[0] - push[0] * arm[2];
    float cz = push[0] * arm[1] - push[1] * arm[0];
    float k0 = ((cy * r[1] + cx * r[0]) + cz * r[2]) * -3.0f;
    float k1 = ((cy * r[4] + cx * r[3]) + cz * r[5]) * -0.75f;
    float k2 = ((cy * r[7] + cx * r[6]) + cz * r[8]) * -6.0f;

    out[0] = (k2 * r[6] + k1 * r[3]) + (k0 * r[0] + turn[0]);
    out[2] = (k2 * r[8] + k1 * r[5]) + (k0 * r[2] + turn[2]);
    out[1] = (k2 * r[7] + k1 * r[4]) + (k0 * r[1] + turn[1]);
}

/* Every bone's body takes the launch: the velocity given, the spin about
   the centre of mass, and the angular momentum that goes with the spin. */
static void launch_bodies(WorldHuman *h, const float velocity[3], const float spin[3])
{
    float com[3] = {0.0f, 0.0f, 0.0f}, total = 0.0f;

    for (int i = 0; i < HUMAN_BONE_COUNT; i++) {
        const HumanBone *b = &h->bones[i];
        com[0] = com[0] + b->mass * b->position[0];
        com[1] = com[1] + b->mass * b->position[1];
        com[2] = com[2] + b->mass * b->position[2];
        total = total + b->mass;
    }
    if (total > 0.0f) {
        float scale = 1.0f / total;
        com[1] = com[1] * scale;
        com[2] = com[2] * scale;
        com[0] = com[0] * scale;
    }
    for (int i = 0; i < HUMAN_BONE_COUNT; i++) {
        PhysicsBody *body = &physics_bodies[h->bones[i].body];
        float ry, rz, rx;

        body->velocity[0] = velocity[0];
        body->velocity[2] = velocity[2];
        body->velocity[1] = velocity[1];
        ry = body->position[1] - com[1];
        rz = body->position[2] - com[2];
        rx = body->position[0] - com[0];
        body->velocity[0] = (spin[2] * ry - spin[1] * rz) + body->velocity[0];
        body->velocity[1] = (spin[0] * rz - spin[2] * rx) + body->velocity[1];
        body->velocity[2] = (spin[1] * rx - spin[0] * ry) + body->velocity[2];
        body->angular_velocity[0] = spin[0];
        body->angular_velocity[1] = spin[1];
        body->angular_velocity[2] = spin[2];
        body->angular_momentum[0] = 0.0f;
        body->angular_momentum[1] = 0.0f;
        body->angular_momentum[2] = 0.0f;
        for (int row = 0; row < 3; row++) {
            const float *axis = &body->rotation[3 * row];
            float about = ((body->angular_velocity[1] * axis[1] + axis[0] * body->angular_velocity[0])
                           + body->angular_velocity[2] * axis[2]) * body->unknown_84[row];

            if (row == 0)
                body->angular_momentum[0] = axis[0] * about;
            else
                body->angular_momentum[0] = axis[0] * about + body->angular_momentum[0];
            body->angular_momentum[1] = about * axis[1] + body->angular_momentum[1];
            body->angular_momentum[2] = about * axis[2] + body->angular_momentum[2];
        }
    }
}

void human_launch_jump(int human)
{
    static const uint32_t angular_limit[3] = {0x3D800000, 0x3D800000, 0x3D800000};      /* 1/16 as floats */
    WorldHuman *h = &world_humans[human];
    HumanBone *pelvis = &h->bones[HUMAN_BONE_PELVIS];
    const float *v = h->trunk_velocity;
    const float *r = h->smoothed_rotation;
    float ankles[2][3], hips[2][3], targets[2][3], turns[2][3];
    float axes[9], wanted[9], q[4], kept[4], turn_q[4];
    float to[3], push[3], turn[3], arm[3], spin[3], velocity[3];
    float reach, x, y, z, length, angle, wx, wy, wz, side, forward, speed, lift, progress;
    double half;

    for (int leg = 0; leg < 2; leg++) {
        const HumanBone *shin = &h->bones[HUMAN_BONE_SHIN + 3 * leg];
        float shin_length = human_skeleton[HUMAN_BONE_SHIN + 3 * leg].anchor[1];

        for (int k = 0; k < 3; k++)
            ankles[leg][k] = shin_length * shin->rotation[3 + k] + shin->position[k];
    }
    hip_point(pelvis, 0, hips[0]);
    hip_point(pelvis, 1, hips[1]);
    heading_axes(axes, h->view_yaw);
    heading_axes(wanted, h->view_yaw);

    /* The walk point moves on and is put at standing height above the
       ground under the centre. */
    h->walk_velocity[1] = 0.0f;
    h->walk_point[0] = h->walk_velocity[0] + h->walk_point[0];
    h->walk_point[1] = h->walk_point[1] + h->walk_velocity[1];
    h->walk_point[2] = h->walk_point[2] + h->walk_velocity[2];
    reach = h->walk_amount * 0.875f + wanted[4] * 0.25f;
    h->walk_point[1] = h->centre[1];
    to[0] = h->centre[0] - up[0] * 1.75f;
    to[1] = h->centre[1] - up[1] * 1.75f;
    to[2] = h->centre[2] - up[2] * 1.75f;
    if (sub_1400DC050(h->centre, to, 0))
        h->walk_point[1] = collision_hit.point[1] + reach;

    /* The push: toward the walk point against the body's velocity, the
       vertical part between 0 and 1/2. */
    push[0] = ((h->walk_point[0] - h->centre[0]) * 0.375f - (v[0] - h->walk_velocity[0]) * 0.75f) - v[0];
    push[1] = ((h->walk_point[1] - h->centre[1]) * 0.375f - (v[1] - h->walk_velocity[1]) * 0.75f) - v[1];
    push[2] = ((h->walk_point[2] - h->centre[2]) * 0.375f - (v[2] - h->walk_velocity[2]) * 0.75f) - v[2];
    if (push[1] > 0.5f)
        push[1] = 0.5f;
    else if (!(push[1] >= 0.0f))
        push[1] = 0.0f;

    progress = h->legs[0].progress + 0.125f;
    h->legs[0].progress = progress;
    if (progress > 1.0f)
        h->legs[0].progress = 1.0f;

    for (int leg = 0; leg < 2; leg++) {
        targets[leg][0] = (v[0] + hips[leg][0]) + push[0] * 3.0f;
        targets[leg][1] = (v[1] + hips[leg][1]) + push[1] * 3.0f;
        targets[leg][2] = (v[2] + hips[leg][2]) + push[2] * 3.0f;
    }

    /* The turn toward the heading, against the trunk's angular velocity,
       at most 1/4; the pelvis's rotation turned by it is the frame the
       legs are solved in. */
    math_quat_from_mat3(q, wanted);
    math_quat_from_mat3(kept, r);
    if (!(((q[3] * kept[3] + q[2] * kept[2]) + (q[0] * kept[0] + q[1] * kept[1])) >= 0.0f)) {
        for (int k = 0; k < 4; k++)
            kept[k] = -kept[k];
    }
    kept[0] = -kept[0];
    kept[1] = -kept[1];
    kept[2] = -kept[2];
    math_quat_multiply(turn_q, kept, q);
    x = turn_q[0];
    y = turn_q[1];
    z = turn_q[2];
    length = sqrt_float((y * y + x * x) + z * z);
    if (is_zero_or_nan(length)) {
        x = 0.0f;
        y = 0.0f;
        z = 0.0f;
    } else {
        float scale = 1.0f / length;
        x = x * scale;
        y = y * scale;
        z = z * scale;
    }
    half = crt_acos(min_float(max_float(turn_q[3], -1.0f), 1.0f));
    angle = (float)(half + half);
    wx = h->smoothed_angular_velocity[0];
    wy = h->smoothed_angular_velocity[1];
    wz = h->smoothed_angular_velocity[2];
    x = ((x * angle) * 0.375f - wx * 0.75f) - wx;
    y = ((y * angle) * 0.375f - wy * 0.75f) - wy;
    z = ((z * angle) * 0.375f - wz * 0.75f) - wz;
    length = sqrt_float((y * y + x * x) + z * z);
    if (length > 0.25f) {
        float scale = 1.0f / length;
        x = (x * scale) * 0.25f;
        y = (y * scale) * 0.25f;
        z = (z * scale) * 0.25f;
    }
    for (int k = 0; k < 9; k++)
        wanted[k] = pelvis->rotation[k];
    {
        float ex = x + wx, ey = y + wy, ez = z + wz;

        length = sqrt_float((ey * ey + ex * ex) + ez * ez);
        if (length > 0.000015258789f) {
            float scale = 1.0f / length, axis[3];

            axis[0] = ex * scale;
            axis[1] = ey * scale;
            axis[2] = ez * scale;
            math_mat3_rotate_rows(wanted, axis, length);
        }
    }
    turn[0] = x * 3.0f;
    turn[1] = y * 3.0f;
    turn[2] = z * 3.0f;

    /* Each hip goes on with the push and round the centre by the turn. */
    for (int leg = 0; leg < 2; leg++) {
        float tx, ty, tz;

        arm[1] = hips[leg][1] - h->centre[1];
        arm[2] = hips[leg][2] - h->centre[2];
        arm[0] = hips[leg][0] - h->centre[0];
        tx = (arm[1] * turn[2] - arm[2] * turn[1]) + targets[leg][0];
        ty = targets[leg][1] + (arm[2] * turn[0] - arm[0] * turn[2]);
        tz = targets[leg][2] + (arm[0] * turn[1] - arm[1] * turn[0]);
        targets[leg][0] = tx;
        targets[leg][1] = ty;
        targets[leg][2] = tz;
        hip_joint_turn(turns[leg], r, arm, push, turn);
    }

    for (int leg = 0; leg < 2; leg++) {
        HumanLeg *l = &h->legs[leg];
        const HumanBone *foot = &h->bones[HUMAN_BONE_FOOT + 3 * leg];
        float box[9], wrist_turn[4], target[3], change_limit[3];
        uint32_t unknown_8c[3];
        int state;

        /* A planted foot off the ground, or the push-off over: the hip
           just goes on with the body. */
        if (l->state == LEG_PLANTED && !foot->ground_bond_count) {
            for (int k = 0; k < 3; k++) {
                targets[leg][k] = hips[leg][k] + v[k];
                turns[leg][k] = 0.0f;
            }
        }
        if (!(1.0f > h->legs[0].progress)) {
            for (int k = 0; k < 3; k++) {
                targets[leg][k] = hips[leg][k] + v[k];
                turns[leg][k] = 0.0f;
            }
        }

        heading_axes(box, h->view_yaw);
        math_mat3_rotate_rows(box, &box[0], -l->pitch);
        math_mat3_multiply_transposed(box, box, pelvis->rotation);
        math_quat_from_mat3(wrist_turn, box);

        state = l->state;
        if (state == LEG_PLANTED) {
            /* The pushing leg: the foot stays where it is while the hip
               goes to its target. */
            target[0] = ankles[leg][0] - targets[leg][0];
            target[1] = ankles[leg][1] - targets[leg][1];
            target[2] = ankles[leg][2] - targets[leg][2];
            change_limit[0] = change_limit[1] = change_limit[2] = as_float(0x3E96CBE4);
            unknown_8c[0] = unknown_8c[1] = unknown_8c[2] = 0x3F700000;                 /* 15/16 */
            if (!foot->ground_bond_count) {
                target[0] = ankles[leg][0] - hips[leg][0];
                target[1] = ankles[leg][1] - hips[leg][1];
                target[2] = ankles[leg][2] - hips[leg][2];
                turns[leg][0] = 0.0f;
                turns[leg][1] = 0.0f;
                turns[leg][2] = 0.0f;
            }
            progress = h->legs[0].progress;
        } else {
            /* The other leg is drawn up under the hip as the push-off
               goes on. */
            float drawn;

            progress = h->legs[0].progress;
            drawn = min_float(progress, 1.0f);
            turns[leg][0] = 0.0f;
            turns[leg][1] = 0.0f;
            turns[leg][2] = 0.0f;
            change_limit[0] = change_limit[1] = change_limit[2] = as_float(0x3F96CBE4);
            unknown_8c[0] = unknown_8c[1] = unknown_8c[2] = 0x3F400000;                 /* 3/4 */
            target[0] = l->start[0] - l->start[0] * drawn;
            target[2] = l->start[2] - l->start[2] * drawn;
            target[1] = (-0.375f - l->start[1]) * drawn + l->start[1];
        }
        if (progress >= 1.0f) {
            change_limit[0] = change_limit[1] = change_limit[2] = 0.0f;
            unknown_8c[0] = unknown_8c[1] = unknown_8c[2] = 0x3F800000;
        }
        human_limb_inverse_kinematics(human, HUMAN_BONE_PELVIS, HUMAN_BONE_THIGH + 3 * leg, target, wanted, turns[leg],
                                      1.0f, 0.0f, wrist_turn, change_limit, unknown_8c, angular_limit, 0.78539819f,
                                      (state == LEG_PLANTED) + 1);
    }

    /* Off the ground. The spin comes from two values kept when the jump
       began (within 1/2 and 3/4), an eighth of each about the heading's
       first two rows. */
    h->push_leg = h->legs[0].state == LEG_PLANTED;
    h->movement_state = HUMAN_STATE_FALL;
    side = max_float(as_float(h->jump_side), -0.5f);
    h->legs[0].state = LEG_LOOSE;
    h->legs[1].state = LEG_LOOSE;
    if (side > 0.5f)
        side = 0.5f;
    forward = max_float(as_float(h->jump_forward), -0.75f);
    h->jump_side = as_bits(side);
    if (forward > 0.75f)
        forward = 0.75f;
    h->jump_forward = as_bits(forward);
    side = side * 0.125f;
    forward = forward * 0.125f;
    spin[0] = forward * axes[3] + side * axes[0];
    spin[1] = forward * axes[4] + side * axes[1];
    spin[2] = forward * axes[5] + side * axes[2];

    /* The longer the jump was held, the higher. */
    if (h->jump_charge < 8)
        speed = 0.033333335f;
    else if (h->jump_charge < 16)
        speed = 0.050000001f;
    else if (h->jump_charge < 24)
        speed = 0.06666667f;
    else
        speed = 0.083333336f;
    lift = speed - v[1];
    velocity[0] = v[0];
    velocity[1] = lift + v[1];
    velocity[2] = v[2];
    launch_bodies(h, velocity, spin);
    h->trunk_velocity[1] = lift * 3.0f + h->trunk_velocity[1];
    for (int hand = 0; hand < 2; hand++) {
        if (h->hands[hand].count > 0) {
            PhysicsBody *body = &physics_bodies[world_items[h->hands[hand].items[0]].body];
            body->velocity[1] = lift + body->velocity[1];
        }
    }
    h->jump_charge = 0;
    h->jump_pose_angle = 0x3FC90FDB;        /* pi / 2 as a float */
}
