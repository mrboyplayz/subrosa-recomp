/* Standing and walking: the legs of a human on its feet (states 0 and 1).
 *
 * This is where the pieces meet. Each tick it moves the walk point from the
 * input, decides which foot steps, has each planted leg balance the body
 * and each stepping leg swing, and then sends every foot where its leg's
 * state says with the limb's inverse kinematics; a foot on the ground has
 * its ground bond's grip set to match.
 */
#include "arith.h"
#include "collision.h"
#include "crt.h"
#include "human.h"
#include "math3d.h"
#include "physics.h"

enum { HUMAN_BONE_THIGH = 10, HUMAN_BONE_SHIN = 11 };   /* + 3 * leg */
enum { HUMAN_STATE_STAND = 0, HUMAN_STATE_FALL = 1 };   /* WorldHuman.movement_state */
enum { LEG_LOOSE = 0, LEG_PLANTED = 1, LEG_STEPPING = 3, LEG_STATE_8 = 8 };

/* A length in the skeleton's record of each shin (its field at 0x30),
   taken off 3/32 where a planted foot's point is set back from the foot. */
#define skeleton_shin_offset(bone) (human_skeleton[bone].shin_offset)

static const float up[3] = {0.0f, 1.0f, 0.0f};

/* The identity turned about its second row. */
static void heading_axes(float m[9], float yaw)
{
    m[0] = 1.0f; m[1] = 0.0f; m[2] = 0.0f;
    m[3] = 0.0f; m[4] = 1.0f; m[5] = 0.0f;
    m[6] = 0.0f; m[7] = 0.0f; m[8] = 1.0f;
    math_mat3_rotate_rows(m, &m[3], yaw);
}

/* Where a leg's hip joint is (as in human_legs.c). */
static void hip_point(const HumanBone *pelvis, int leg, float hip[3])
{
    const float *anchor = human_skeleton[HUMAN_BONE_THIGH - 1 + 3 * leg].anchor;

    hip[0] = (pelvis->rotation[0] * anchor[0] + pelvis->position[0]) + anchor[1] * pelvis->rotation[3];
    hip[1] = (pelvis->rotation[1] * anchor[0] + pelvis->position[1]) + anchor[1] * pelvis->rotation[4];
    hip[2] = (pelvis->rotation[2] * anchor[0] + pelvis->position[2]) + pelvis->rotation[5] * anchor[1];
}

/* The human's yaw taken from the pelvis, when the pelvis is upright. */
static void yaw_from_pelvis(WorldHuman *h)
{
    const float *r = h->bones[HUMAN_BONE_PELVIS].rotation;

    if (!(0.875f >= r[4]))
        h->view_yaw = crt_atan2f(-r[6], r[8]);
}

/* Standing or falling: a standing human with both legs loose that is off
   the ground or rising is falling; a falling one back on the ground and
   not rising stands. */
static void update_state(WorldHuman *h)
{
    if (h->movement_state == HUMAN_STATE_STAND) {
        h->standing = 1;
        if (h->legs[0].state == LEG_LOOSE && h->legs[1].state == LEG_LOOSE) {
            if (!h->on_ground || !(0.016666668f >= h->centre_velocity[1])) {
                yaw_from_pelvis(h);
                h->movement_state = HUMAN_STATE_FALL;
                h->jump_charge = 0;
            }
            h->standing = 0;
        }
    } else if (h->movement_state == HUMAN_STATE_FALL) {
        h->standing = 0;
        h->jump_charge = 0;
        yaw_from_pelvis(h);
        if (h->on_ground && 0.016666668f > h->centre_velocity[1]) {
            h->movement_state = HUMAN_STATE_STAND;
            h->standing = 1;
        }
    }
}

/* The grip of a foot's ground bond by its leg's state: firm when planted,
   none when loose, and when stepping none and softer the faster the body
   moves. */
static void set_ground_grip(const WorldHuman *h, int leg, float fast)
{
    const HumanLeg *l = &h->legs[leg];
    PhysicsBond *bond;

    if (!h->bones[HUMAN_BONE_FOOT + 3 * leg].ground_bond_count || l->ground_bond == -1)
        return;
    bond = &physics_bonds[l->ground_bond];
    bond->local_point[0] = 0.0f;
    bond->local_point[1] = 0.0f;
    bond->local_point[2] = 0.0f;
    bond->friction = 0.89999998f;
    bond->stiffness = 0.5f;
    bond->damping = 0.5f;
    if (l->state == LEG_LOOSE) {
        bond->friction = 0.0f;
        bond->point_weight[0] = 0.0f;
    } else if (l->state == LEG_STEPPING) {
        float slow = 1.0f - fast, soft;

        bond->friction = 0.0f;
        bond->point_weight[0] = 0.0f;
        slow = slow * slow;
        slow = slow * slow;
        soft = 0.5f - (1.0f - slow) * 0.4375f;
        bond->stiffness = soft;
        bond->damping = soft;
    }
}

/* conj(from) * ... : the rotation taking `from` to `to`, both first brought
   to the same side of the sphere, as the product to * conj(from). */
static void rotation_between(float out[4], const float to[4], float from[4])
{
    if (!(((to[3] * from[3] + to[2] * from[2]) + (to[0] * from[0] + to[1] * from[1])) >= 0.0f)) {
        for (int k = 0; k < 4; k++)
            from[k] = -from[k];
    }
    from[0] = -from[0];
    from[1] = -from[1];
    from[2] = -from[2];
    math_quat_multiply(out, to, from);
}

void human_stand_legs(int human)
{
    WorldHuman *h = &world_humans[human];
    HumanBone *pelvis = &h->bones[HUMAN_BONE_PELVIS];
    float leg_health[2] = {1.0f, 1.0f};
    float hips[2][3], ankles[2][3], targets[2][3], turns[2][3], wanted_centre[2][3], share[2];
    float axes[9], wanted[9], q[4], kept[4], turn_q[4], row1[3];
    float from[3], to[3];
    float fast, lean, sum, x, y, z, length, angle, upright;
    double tilt, half;

    fast = min_float(max_float(sqrt_float((h->trunk_velocity[0] * h->trunk_velocity[0] + h->trunk_velocity[1] * h->trunk_velocity[1])
                                          + h->trunk_velocity[2] * h->trunk_velocity[2]) * 60.0f - 0.5f, 0.0f), 1.0f);
    if (h->parts[HUMAN_PART_LEFT_LEG].health < 100)
        leg_health[0] = (float)h->parts[HUMAN_PART_LEFT_LEG].health * 0.0099999998f;
    if (h->parts[HUMAN_PART_RIGHT_LEG].health < 100)
        leg_health[1] = (float)h->parts[HUMAN_PART_RIGHT_LEG].health * 0.0099999998f;

    update_state(h);

    for (int k = 0; k < 3; k++) {
        h->hip_turn[0][k] = 0.0f;
        h->hip_turn[1][k] = 0.0f;
    }
    for (int leg = 0; leg < 2; leg++) {
        const HumanBone *shin = &h->bones[HUMAN_BONE_SHIN + 3 * leg];
        float reach = human_skeleton[HUMAN_BONE_SHIN + 3 * leg].anchor[1];

        for (int k = 0; k < 3; k++)
            ankles[leg][k] = reach * shin->rotation[3 + k] + shin->position[k];
    }
    hip_point(pelvis, 0, hips[0]);
    hip_point(pelvis, 1, hips[1]);
    heading_axes(axes, h->view_yaw);
    heading_axes(wanted, h->view_yaw);

    /* How far the ankles are behind the hips along the heading, eased
       (half as much with both legs loose). */
    lean = (axes[8] * (hips[0][2] - ankles[0][2])) * -2.0f - (axes[6] * (hips[0][0] - ankles[0][0])) * 2.0f;
    sum = 0.0f + lean;
    {
        float along_x = axes[6] * (hips[1][0] - ankles[1][0]);
        float along_z = axes[8] * (hips[1][2] - ankles[1][2]);
        sum = ((sum + along_z) + along_z) + (along_x + along_x);
    }
    if (h->legs[0].state == LEG_LOOSE && h->legs[1].state == LEG_LOOSE)
        sum = sum * 0.5f;
    h->stride_lean = (sum - h->stride_lean) * 0.5f + h->stride_lean;

    human_update_walk_point(human);

    /* The rotation wanted of the body: the heading, leaned by the walk
       point's two leans (at most pi/4 each). */
    tilt = (double)(h->lean_side * 7.5f);
    tilt = !(tilt > -0.7853981633975) ? -0.7853981633975 : tilt;
    if (tilt > 0.7853981633975)
        tilt = 0.7853981633975;
    math_mat3_rotate_rows(wanted, &wanted[6], (float)tilt);
    tilt = (double)(h->lean_forward * -7.5f);
    tilt = !(tilt > -0.7853981633975) ? -0.7853981633975 : tilt;
    if (tilt > 0.7853981633975)
        tilt = 0.7853981633975;
    math_mat3_rotate_rows(wanted, &wanted[0], (float)tilt);

    /* A probe under the pelvis; only the hit it leaves is used. */
    from[0] = up[0] * 0.25f + pelvis->position[0];
    from[1] = up[1] * 0.25f + pelvis->position[1];
    from[2] = up[2] * 0.25f + pelvis->position[2];
    to[0] = from[0] - up[0] * 1.5f;
    to[1] = from[1] - up[1] * 1.5f;
    to[2] = from[2] - up[2] * 1.5f;
    human_probe_ground(human, from, to);

    for (int leg = 0; leg < 2; leg++) {
        wanted_centre[leg][0] = h->walk_point[0];
        wanted_centre[leg][1] = h->walk_point[1];
        wanted_centre[leg][2] = h->walk_point[2];
    }
    h->walk_velocity[1] = 0.0f;
    h->step_offset[0] = h->walk_velocity[0] + h->ground_velocity[0];
    h->step_offset[1] = h->walk_velocity[1] + h->ground_velocity[1];
    h->step_offset[2] = h->walk_velocity[2] + h->ground_velocity[2];

    human_plan_steps(human, hips, ankles);

    /* Each planted leg's share of the body by its ground contact. */
    sum = h->legs[1].contact + h->legs[0].contact;
    if (sum > 1.0f) {
        float scale = 1.0f / sum;
        share[1] = scale * h->legs[1].contact;
        share[0] = scale * h->legs[0].contact;
    } else {
        share[0] = h->legs[0].contact;
        share[1] = h->legs[1].contact;
    }
    for (int leg = 0; leg < 2; leg++) {
        targets[leg][0] = hips[leg][0] + h->trunk_velocity[0];
        targets[leg][1] = hips[leg][1] + h->trunk_velocity[1];
        targets[leg][2] = hips[leg][2] + h->trunk_velocity[2];
        turns[leg][0] = 0.0f;
        turns[leg][1] = 0.0f;
        turns[leg][2] = 0.0f;
        if (h->legs[leg].state == LEG_PLANTED)
            human_balance_on_leg(human, leg, targets[leg], turns[leg], hips[leg], ankles[leg], wanted_centre[leg],
                                 wanted, share[leg]);
        if (h->legs[leg].state == LEG_STEPPING)
            human_swing_step(human, leg, hips[leg], axes);
    }

    /* From here the rotation wanted is the pelvis's own, turned a part of
       the way to the leaned heading: a quarter when upright, down to 1/32
       when lying. */
    math_quat_from_mat3(q, wanted);
    math_quat_from_mat3(kept, pelvis->rotation);
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
        y = y * scale;
        x = scale * x;
        z = z * scale;
    }
    half = crt_acos(min_float(max_float(turn_q[3], -1.0f), 1.0f));
    angle = (float)(half + half);
    upright = max_float(min_float(h->smoothed_rotation[4] + 0.5f, 1.0f), 0.125f) * 0.25f;
    x = (x * angle) * upright;
    y = (y * angle) * upright;
    z = (z * angle) * upright;
    for (int k = 0; k < 9; k++)
        wanted[k] = pelvis->rotation[k];
    length = sqrt_float((y * y + x * x) + z * z);
    if (length > 0.000015258789f) {
        float scale = 1.0f / length, axis[3];

        axis[0] = x * scale;
        axis[1] = y * scale;
        axis[2] = z * scale;
        math_mat3_rotate_rows(wanted, axis, length);
    }
    row1[0] = wanted[3];
    row1[1] = wanted[4];
    row1[2] = wanted[5];

    for (int leg = 0; leg < 2; leg++) {
        HumanLeg *l = &h->legs[leg];
        const HumanBone *foot = &h->bones[HUMAN_BONE_FOOT + 3 * leg];
        float foot_q[4], wanted_q[4], wrist_turn[4], target[3], change_limit[3];
        float tx, ty, tz, fx, fy, fz, health;
        uint32_t unknown_8c[3] = {0, 0, 0}, angular_limit[3] = {0, 0, 0};
        int state, flags;

        set_ground_grip(h, leg, fast);

        /* The foot's rotation wanted, relative to the body's: along the
           heading (a planted foot: along its own yaw), pitched. */
        heading_axes(axes, h->view_yaw);
        math_mat3_rotate_rows(axes, &axes[0], -l->pitch);
        state = l->state;
        if (state == LEG_PLANTED) {
            heading_axes(axes, l->yaw);
            math_mat3_rotate_rows(axes, &axes[0], -l->pitch);
            state = l->state;
        }
        math_quat_from_mat3(foot_q, axes);
        math_quat_from_mat3(wanted_q, wanted);
        rotation_between(wrist_turn, wanted_q, foot_q);
        if ((state & ~8) == 0) {
            wrist_turn[0] = 0.0f;
            wrist_turn[1] = 0.0f;
            wrist_turn[2] = 0.0f;
            wrist_turn[3] = 1.0f;
        }

        /* Where the hip is taken to be: on by the body's velocity, or
           where the balance sends it. */
        tx = hips[leg][0] + h->trunk_velocity[0];
        ty = hips[leg][1] + h->trunk_velocity[1];
        tz = hips[leg][2] + h->trunk_velocity[2];
        if (state == LEG_PLANTED) {
            ty = targets[leg][1];
            tz = targets[leg][2];
            tx = targets[leg][0];
        } else {
            turns[leg][0] = 0.0f;
            turns[leg][1] = 0.0f;
            turns[leg][2] = 0.0f;
        }

        /* Where the foot goes. */
        fx = ankles[leg][0];
        fy = ankles[leg][1];
        fz = ankles[leg][2];
        if (state == LEG_PLANTED) {
            /* The ankle over the planted foot: 3/32 back from the foot
               along its third row, at the ground's height, and forward
               again along the leg's yaw by the skeleton's length. */
            float bx, by, bz, forward;

            heading_axes(axes, l->yaw);
            math_mat3_rotate_rows(axes, &axes[0], -l->pitch);
            bx = foot->position[0] - foot->rotation[6] * 0.09375f;
            by = foot->position[1] - foot->rotation[7] * 0.09375f;
            bz = foot->position[2] - foot->rotation[8] * 0.09375f;
            from[0] = up[0] * 0.25f + foot->position[0];
            from[1] = up[1] * 0.25f + foot->position[1];
            from[2] = up[2] * 0.25f + foot->position[2];
            to[0] = from[0] - up[0] * 0.5f;
            to[1] = from[1] - up[1] * 0.5f;
            to[2] = from[2] - up[2] * 0.5f;
            if (human_probe_ground(human, from, to))
                by = collision_hit.point[1] + 0.03125f;
            if (foot->ground_bond_count)
                by = l->ground_height + 0.03125f;
            forward = 0.09375f - skeleton_shin_offset(HUMAN_BONE_SHIN + 3 * leg);
            state = l->state;
            fx = axes[6] * forward + bx;
            fy = axes[7] * forward + by;
            fz = axes[8] * forward + bz;
        }
        if (state == LEG_STEPPING) {
            fx = l->swing[0];
            fy = l->swing[1];
            fz = l->swing[2];
        } else if (state == LEG_STATE_8) {
            fx = tx - row1[0] * 0.25f;
            fy = ty - row1[1] * 0.25f;
            fz = tz - row1[2] * 0.25f;
        } else if (state == LEG_LOOSE) {
            /* A loose leg hangs under the hip along the pelvis; on the
               ground it is drawn up, and falling without rising the legs
               spread along the body's velocity, one ahead and one back. */
            float hang = h->walk_amount * -0.75f;
            const float *r = pelvis->rotation;

            fy = r[4] * hang + ty;
            fz = r[5] * hang + tz;
            fx = r[3] * hang + tx;
            if (h->on_ground) {
                fy = fy - max_float(h->smoothed_rotation[4], 0.0f) * 0.25f;
            } else if (0.016666668f > h->trunk_velocity[1]) {
                float level = max_float(r[4], 0.0f);
                float vz = level * h->centre_velocity[2];
                float vx = level * h->centre_velocity[0];

                if (leg == h->push_leg) {
                    fx = vx * 6.0f + fx;
                    fz = vz * 6.0f + fz;
                } else {
                    fx = (fx - vx * 3.0f) + r[3] * 0.25f;
                    fy = r[4] * 0.25f + fy;
                    fz = (fz - vz * 3.0f) + r[5] * 0.25f;
                }
            }
        }
        target[2] = fz - tz;
        target[0] = fx - tx;
        target[1] = fy - ty;

        /* How fast the joints may change: less with a hurt leg, and for a
           loose leg limited further. */
        health = leg_health[leg];
        change_limit[0] = health * 0.22089323f + 0.073631078f;
        change_limit[1] = change_limit[0];
        change_limit[2] = change_limit[0];
        flags = state != 0 ? 2 : 3;
        if (!(health >= 1.0f))
            flags |= 0x10;
        if (state == LEG_LOOSE) {
            uint32_t limit = 0.875f > pelvis->rotation[4] ? 0x3C000000u : 0x3D800000u;   /* 1/128 or 1/16 */

            angular_limit[0] = limit;
            angular_limit[1] = limit;
            angular_limit[2] = limit;
            unknown_8c[0] = 0x3E800000u;                                                   /* 1/4 */
            unknown_8c[1] = 0x3E800000u;
            unknown_8c[2] = 0x3E800000u;
        }
        if (h->damage_ticks > 0) {
            float loose = 0.125f - min_float((float)h->damage_ticks * 0.033333335f, 1.0f) * 0.09375f;
            uint32_t bits;

            __builtin_memcpy(&bits, &loose, 4);
            angular_limit[0] = bits;
            angular_limit[1] = bits;
            angular_limit[2] = bits;
        }
        human_limb_inverse_kinematics(human, HUMAN_BONE_PELVIS, HUMAN_BONE_THIGH + 3 * leg, target, pelvis->rotation,
                                      turns[leg], 1.0f, 0.0f, wrist_turn, change_limit, unknown_8c, angular_limit,
                                      0.78539819f, flags);
    }
}
