/* Legs: where the feet are sent in each of a human's states. So far the
 * legs of a human sitting in a vehicle and of one lying down; standing,
 * stepping and falling are still recompiled code.
 */
#include "arith.h"
#include "collision.h"
#include "crt.h"
#include "human.h"
#include "math3d.h"
#include "physics.h"

/* ---- still recompiled code ------------------------------------------------- */

/* Whether something moving from one point to the other passes through the
   level; the hit is left in collision_hit. */
extern int sub_1400DC050(float *from, float *to, int unknown);

enum { HUMAN_BONE_THIGH = 10, HUMAN_BONE_SHIN = 11 };   /* + 3 * leg */

static const float up[3] = {0.0f, 1.0f, 0.0f};

/* Where a leg's hip joint is: the pelvis's position and the skeleton's
   anchor of the thigh along the pelvis's first two rows. */
static void hip_point(const HumanBone *pelvis, int leg, float hip[3])
{
    const float *anchor = human_skeleton[HUMAN_BONE_THIGH - 1 + 3 * leg].unknown_34;

    hip[0] = (pelvis->rotation[0] * anchor[0] + pelvis->position[0]) + anchor[1] * pelvis->rotation[3];
    hip[1] = (pelvis->rotation[1] * anchor[0] + pelvis->position[1]) + anchor[1] * pelvis->rotation[4];
    hip[2] = (pelvis->rotation[2] * anchor[0] + pelvis->position[2]) + pelvis->rotation[5] * anchor[1];
}

/* Not on the ground: a probe down from the pelvis, further the faster it
   falls. Only the hit it leaves in collision_hit is used. */
static void probe_below(WorldHuman *h)
{
    HumanBone *pelvis = &h->bones[HUMAN_BONE_PELVIS];
    float reach, to[3];

    if (h->unknown_54)
        return;
    reach = h->unknown_678c[1] * 16.0f - 0.875f;
    to[0] = up[0] * reach + pelvis->position[0];
    to[1] = up[1] * reach + pelvis->position[1];
    to[2] = up[2] * reach + pelvis->position[2];
    sub_1400DC050(pelvis->position, to, 0);
}

/* Gives the joint into child_bone the axis that springs it back inside the
   skeleton's angle limits, and its bond a limit on the angular velocity it
   corrects. */
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

void human_sit_legs(int human)
{
    static const float change_limit[3] = {0.01840777f, 0.01840777f, 0.01840777f};
    static const uint32_t unknown_8c[3] = {0x3E000000, 0x3E000000, 0x3E000000};         /* 1/8 as floats */
    static const uint32_t angular_limit[3] = {0x3C800000, 0x3C800000, 0x3C800000};      /* 1/64 as floats */
    WorldHuman *h = &world_humans[human];
    HumanBone *pelvis = &h->bones[HUMAN_BONE_PELVIS];
    float hips[2][3];

    h->unknown_7c = 0;
    h->legs[0].state = 0;
    h->legs[1].state = 0;
    hip_point(pelvis, 0, hips[0]);
    hip_point(pelvis, 1, hips[1]);
    human_update_centre(human);

    probe_below(h);

    /* Each foot goes 5/16 to its side of the pelvis, 3/4 along the
       pelvis's third row and 1/8 below. */
    for (int leg = 0; leg < 2; leg++) {
        HumanLeg *l = &h->legs[leg];
        float velocity[3] = {0.0f, 0.0f, 0.0f};
        float wrist_turn[4] = {0.0f, 0.0f, 0.0f, 1.0f};
        float target[3], x, y, z;

        l->previous_pitch = l->pitch;
        l->pitch = 0.0f;
        if (leg) {
            x = pelvis->rotation[0] * 0.3125f + pelvis->position[0];
            y = pelvis->rotation[1] * 0.3125f + pelvis->position[1];
            z = pelvis->rotation[2] * 0.3125f + pelvis->position[2];
        } else {
            x = pelvis->position[0] - pelvis->rotation[0] * 0.3125f;
            y = pelvis->position[1] - pelvis->rotation[1] * 0.3125f;
            z = pelvis->position[2] - pelvis->rotation[2] * 0.3125f;
        }
        target[0] = ((x - pelvis->rotation[6] * 0.75f) - pelvis->rotation[3] * 0.125f) - hips[leg][0];
        target[1] = ((y - pelvis->rotation[7] * 0.75f) - pelvis->rotation[4] * 0.125f) - hips[leg][1];
        target[2] = ((z - pelvis->rotation[8] * 0.75f) - pelvis->rotation[5] * 0.125f) - hips[leg][2];
        human_limb_inverse_kinematics(human, HUMAN_BONE_PELVIS, HUMAN_BONE_THIGH + 3 * leg, target, pelvis->rotation,
                                      velocity, 1.0f, 0.0f, wrist_turn, change_limit, unknown_8c, angular_limit,
                                      0.78539819f, 0);
    }
}

void human_lie_legs(int human)
{
    static const float change_limit[3] = {0.01840777f, 0.01840777f, 0.01840777f};
    static const uint32_t unknown_8c[3] = {0x3E800000, 0x3E800000, 0x3E800000};         /* 1/4 as floats */
    static const uint32_t angular_limit[3] = {0x3D800000, 0x3D800000, 0x3D800000};      /* 1/16 as floats */
    WorldHuman *h = &world_humans[human];
    HumanBone *pelvis = &h->bones[HUMAN_BONE_PELVIS];
    const float *r = pelvis->rotation;
    float ankles[2][3], hips[2][3];

    h->unknown_7c = 0;
    h->legs[0].state = 0;
    h->legs[1].state = 0;
    for (int leg = 0; leg < 2; leg++) {
        const HumanBone *shin = &h->bones[HUMAN_BONE_SHIN + 3 * leg];
        float length = human_skeleton[HUMAN_BONE_SHIN + 3 * leg].unknown_34[1];

        for (int k = 0; k < 3; k++)
            ankles[leg][k] = length * shin->rotation[3 + k] + shin->position[k];
    }
    hip_point(pelvis, 0, hips[0]);
    hip_point(pelvis, 1, hips[1]);
    human_update_centre(human);
    probe_below(h);

    for (int leg = 0; leg < 2; leg++) {
        HumanLeg *l = &h->legs[leg];
        const float *v = h->unknown_678c;
        float velocity[3] = {0.0f, 0.0f, 0.0f};
        float wrist_turn[4] = {0.0f, 0.0f, 0.0f, 1.0f};
        float target[3], hip[3], x, y, z, spread, tx, ty, tz;

        l->previous_pitch = l->pitch;
        l->pitch = 0.0f;
        hip[0] = v[0] + hips[leg][0];
        hip[1] = v[1] + hips[leg][1];
        hip[2] = v[2] + hips[leg][2];
        x = v[0] + pelvis->position[0];
        y = v[1] + pelvis->position[1];
        z = v[2] + pelvis->position[2];
        /* A quarter to the leg's side, further when the pelvis lies on
           its other side. */
        if (leg) {
            spread = max_float(r[1] * -0.5f, 0.0f);
            y = (r[1] * 0.25f + y) + spread * r[1];
            z = r[2] * 0.25f + z;
            x = (r[0] * 0.25f + x) + spread * r[0];
        } else {
            spread = -max_float(r[1] * 0.5f, 0.0f);
            x = (x - r[0] * 0.25f) + r[0] * spread;
            y = (y - r[1] * 0.25f) + r[1] * spread;
            z = z - r[2] * 0.25f;
        }
        tx = ((x - r[6] * 0.25f) - r[3] * 0.75f) - r[6] * 0.125f;
        ty = ((y - r[7] * 0.25f) - r[4] * 0.75f) - r[7] * 0.125f;
        tz = (((z + spread * r[2]) - r[8] * 0.25f) - r[5] * 0.75f) - r[8] * 0.125f;
        /* In the air the feet barely move from where they are. */
        if (!h->unknown_54) {
            float ax = v[0] + ankles[leg][0], ay = v[1] + ankles[leg][1], az = v[2] + ankles[leg][2];
            tx = (tx - ax) * 0.015625f + ax;
            ty = (ty - ay) * 0.015625f + ay;
            tz = (tz - az) * 0.015625f + az;
        }
        target[0] = tx - hip[0];
        target[1] = ty - hip[1];
        target[2] = tz - hip[2];
        human_limb_inverse_kinematics(human, HUMAN_BONE_PELVIS, HUMAN_BONE_THIGH + 3 * leg, target, pelvis->rotation,
                                      velocity, 1.0f, 0.0f, wrist_turn, change_limit, unknown_8c, angular_limit,
                                      0.78539819f, 24);
        set_joint_axis(human, HUMAN_BONE_PELVIS, HUMAN_BONE_THIGH + 3 * leg, 0.0009765625f);
        set_joint_axis(human, HUMAN_BONE_THIGH + 3 * leg, HUMAN_BONE_SHIN + 3 * leg, 0.0009765625f);
    }
}

/* ---- stepping ---------------------------------------------------------------------- */

enum { LEG_LOOSE = 0, LEG_PLANTED = 1, LEG_STEPPING = 3 };
enum { HUMAN_STATE_STAND = 0, HUMAN_STATE_5 = 5 };

/* Plants a foot where it is, turned as the foot is. */
static void plant_foot(WorldHuman *h, int leg)
{
    HumanLeg *l = &h->legs[leg];
    const HumanBone *foot = &h->bones[HUMAN_BONE_FOOT + 3 * leg];

    l->state = LEG_PLANTED;
    l->rest_ticks = 5;
    l->planted[0] = foot->position[0];
    l->planted[2] = foot->position[2];
    l->planted[1] = 0.03125f;
    l->yaw = crt_atan2f(-foot->rotation[6], foot->rotation[8]);
}

static void start_step(WorldHuman *h, int leg, const float from[2][3], const float to[2][3])
{
    HumanLeg *l = &h->legs[leg];

    l->state = LEG_STEPPING;
    l->progress = 0.0f;
    l->start[0] = to[leg][0] - from[leg][0];
    l->start[1] = to[leg][1] - from[leg][1];
    l->start[2] = to[leg][2] - from[leg][2];
}

/* A planted foot's point follows the foot over the ground by at most 1/32
   a tick. */
static void follow_foot(WorldHuman *h, int leg)
{
    HumanLeg *l = &h->legs[leg];
    const HumanBone *foot = &h->bones[HUMAN_BONE_FOOT + 3 * leg];
    float dx, dz, length;

    if (l->state != LEG_PLANTED)
        return;
    if (!foot->unknown_130)
        l->contact = 0.0f;
    dx = foot->position[0] - l->planted[0];
    dz = foot->position[2] - l->planted[2];
    length = sqrt_float(dz * dz + dx * dx);
    if (length > 0.03125f) {
        float scale = 1.0f / length;
        l->planted[0] = (dx * scale) * 0.03125f + l->planted[0];
        l->planted[2] = (dz * scale) * 0.03125f + l->planted[2];
    }
}

/* A step that has run its course ends when the ground is under the foot. */
static void land_step(int human, int leg)
{
    WorldHuman *h = &world_humans[human];
    HumanLeg *l = &h->legs[leg];
    const HumanBone *foot = &h->bones[HUMAN_BONE_FOOT + 3 * leg];
    float from[3], to[3], pelvis_height;

    if (l->state != LEG_STEPPING || 1.0f > l->progress)
        return;
    l->progress = 1.0f;
    from[0] = up[0] * 0.375f + foot->position[0];
    from[1] = up[1] * 0.375f + foot->position[1];
    from[2] = up[2] * 0.375f + foot->position[2];
    to[0] = from[0] - up[0] * 0.75f;
    to[1] = from[1] - up[1] * 0.75f;
    to[2] = from[2] - up[2] * 0.75f;
    /* Never from above the pelvis. */
    pelvis_height = h->bones[HUMAN_BONE_PELVIS].position[1];
    if (from[1] > pelvis_height) {
        to[0] = from[0] - up[0] * 0.375f;
        to[1] = pelvis_height - up[1] * 0.375f;
        to[2] = from[2] - up[2] * 0.375f;
        from[1] = pelvis_height;
    }
    if (human_probe_ground(human, from, to)) {
        l->state = LEG_PLANTED;
        l->contact = 0.0f;
        l->rest_ticks = 5;
        l->planted[0] = foot->position[0];
        l->planted[2] = foot->position[2];
        l->planted[1] = 0.03125f;
        l->yaw = h->unknown_98;
    }
}

/* A planted foot without ground contact for 30 ticks goes loose. */
static void count_air_ticks(WorldHuman *h, int leg)
{
    HumanLeg *l = &h->legs[leg];

    if (!h->bones[HUMAN_BONE_FOOT + 3 * leg].unknown_130 && l->state == LEG_PLANTED) {
        l->air_ticks++;
        if (l->air_ticks >= 30)
            l->state = LEG_LOOSE;
    } else {
        l->air_ticks = 0;
    }
}

static void count_ground_contact(WorldHuman *h, int leg)
{
    HumanLeg *l = &h->legs[leg];

    if (l->state != LEG_PLANTED)
        return;
    if (!(l->contact >= 1.0f))
        l->contact = l->contact + 0.5f;
    if (!h->bones[HUMAN_BONE_FOOT + 3 * leg].unknown_130)
        l->contact = 0.0f;
}

void human_plan_steps(int human, const float from[2][3], const float to[2][3])
{
    WorldHuman *h = &world_humans[human];
    const HumanBone *pelvis = &h->bones[HUMAN_BONE_PELVIS];
    const HumanBone *foot0 = &h->bones[HUMAN_BONE_FOOT], *foot1 = &h->bones[HUMAN_BONE_FOOT + 3];

    if (h->legs[0].rest_ticks > 0)
        h->legs[0].rest_ticks--;
    if (h->legs[1].rest_ticks > 0)
        h->legs[1].rest_ticks--;

    /* Both feet planted: where each should stand is ahead of the body's
       centre by its velocity and the walk velocity, 3/32 to its side and
       1/32 back. A foot or the pair's middle more than 1/8 off starts a
       step with the foot further off. */
    if (h->legs[0].state == LEG_PLANTED && h->legs[1].state == LEG_PLANTED) {
        float x = (h->centre_velocity[0] * 8.0f + h->centre[0]) + h->walk_velocity[0] * 16.0f;
        float z = (h->centre_velocity[2] * 8.0f + h->centre[2]) + h->walk_velocity[2] * 16.0f;
        float side_x = pelvis->rotation[0] * 0.09375f, side_z = pelvis->rotation[2] * 0.09375f;
        float back_x = pelvis->rotation[6] * 0.03125f, back_z = pelvis->rotation[8] * 0.03125f;
        float ax = foot0->position[0] - ((x - side_x) - back_x);
        float az = foot0->position[2] - ((z - side_z) - back_z);
        float off0 = sqrt_float(az * az + ax * ax);
        float bx = foot1->position[0] - ((side_x + x) - back_x);
        float bz = foot1->position[2] - ((side_z + z) - back_z);
        float off1 = sqrt_float(bz * bz + bx * bx);
        float mx = (foot1->position[0] + foot0->position[0]) * 0.5f - h->centre[0];
        float mz = (foot0->position[2] + foot1->position[2]) * 0.5f - h->centre[2];
        float off_middle = sqrt_float(mz * mz + mx * mx);

        if (off0 > 0.125f || off1 > 0.125f || off_middle > 0.125f) {
            int leg = off1 > off0;
            if (!h->legs[leg].rest_ticks || h->legs[leg ^ 1].rest_ticks)
                start_step(h, leg, from, to);
        }
    }

    follow_foot(h, 0);
    follow_foot(h, 1);
    land_step(human, 0);
    land_step(human, 1);

    /* A loose leg whose foot touches the ground while the body is not
       rising is planted. */
    if (h->legs[0].state == LEG_LOOSE && 0.033333335f > h->centre_velocity[1] && foot0->unknown_130 > 0)
        plant_foot(h, 0);
    if (h->legs[1].state == LEG_LOOSE && 0.033333335f > h->centre_velocity[1] && foot1->unknown_130 > 0)
        plant_foot(h, 1);

    /* Standing but tipped over: the legs go loose, and once the body lies
       still on the ground the human is in state 5. */
    if (h->unknown_58 == HUMAN_STATE_STAND && 0.5f > h->unknown_6768) {
        h->unknown_6734 = 0;
        h->legs[0].state = LEG_LOOSE;
        h->legs[1].state = LEG_LOOSE;
        if (h->unknown_54) {
            float speed = sqrt_float((h->centre_velocity[0] * h->centre_velocity[0]
                                      + h->centre_velocity[1] * h->centre_velocity[1])
                                     + h->centre_velocity[2] * h->centre_velocity[2]);
            if (!(speed >= 0.0083333338f))
                h->unknown_58 = HUMAN_STATE_5;
        }
    }

    /* One foot planted and the other touching: plant it too. */
    if (h->legs[0].state == LEG_LOOSE && h->legs[1].state == LEG_PLANTED && foot1->unknown_130)
        plant_foot(h, 0);
    if (h->legs[1].state == LEG_LOOSE && h->legs[0].state == LEG_PLANTED && foot0->unknown_130)
        plant_foot(h, 1);

    /* State 5: getting up needs HUMAN_INPUT_8; the foot further from the
       centre steps first, and ten ticks upright end the state. */
    if (h->unknown_58 == HUMAN_STATE_5) {
        h->unknown_6734 = 0;
        if (!(h->input_flags & HUMAN_INPUT_8)) {
            h->legs[0].state = LEG_LOOSE;
            h->legs[1].state = LEG_LOOSE;
        } else {
            float ax = foot0->position[0] - h->centre[0], az = foot0->position[2] - h->centre[2];
            float off0 = sqrt_float(az * az + ax * ax);
            float bx = foot1->position[0] - h->centre[0], bz = foot1->position[2] - h->centre[2];
            float off1 = sqrt_float(bz * bz + bx * bx);

            if (h->legs[0].state == LEG_LOOSE && h->legs[1].state == LEG_LOOSE)
                start_step(h, off0 > off1, from, to);
        }
        if (0.5f >= h->unknown_6768) {
            h->unknown_5c = 0;
        } else {
            h->unknown_5c++;
            if (h->unknown_5c >= 10)
                h->unknown_58 = HUMAN_STATE_STAND;
        }
    }

    count_air_ticks(h, 0);
    count_air_ticks(h, 1);
    count_ground_contact(h, 0);
    count_ground_contact(h, 1);
}

void human_swing_step(int human, int leg, const float hip_target[3], const float axes[9])
{
    WorldHuman *h = &world_humans[human];
    HumanLeg *l = &h->legs[leg];
    const HumanBone *foot = &h->bones[HUMAN_BONE_FOOT + 3 * leg];
    float from[3], to[3];
    float x, z, lead_x, lead_z, lag_x, lag_z, length, ahead, ground, foot_height, ex, ey, ez, t, u, speed, kick;

    /* As the step starts: where it aims, beside the centre as it will be
       in 15 ticks, at the height of the ground there. */
    if (is_zero_or_nan(l->progress)) {
        float sx = axes[0] * 0.0234375f, sy = axes[1] * 0.0234375f, sz = axes[2] * 0.0234375f;
        float cx = h->centre_velocity[0] * 15.0f + h->centre[0];
        float cy = h->centre_velocity[1] * 15.0f + h->centre[1];
        float cz = h->centre_velocity[2] * 15.0f + h->centre[2];
        float px, py, pz;

        if (leg) {
            px = cx + sx;
            pz = cz + sz;
            py = sy + cy;
        } else {
            px = cx - sx;
            py = cy - sy;
            pz = cz - sz;
        }
        from[0] = up[0] * 0.25f + px;
        from[1] = up[1] * 0.25f + py;
        from[2] = up[2] * 0.25f + pz;
        to[0] = px - up[0] * 1.75f;
        to[1] = py - up[1] * 1.75f;
        to[2] = pz - up[2] * 1.75f;
        if (human_probe_ground(human, from, to))
            py = collision_hit.point[1];
        l->landing[0] = px;
        l->landing[1] = py;
        l->landing[2] = pz;
    }

    /* Where the foot comes down: beside the centre and a little behind,
       led by the walk velocity (at most 3/16) and by how far the body's
       velocity is off it (at most 1/64 a tick). */
    if (leg) {
        x = h->centre[0] + axes[0] * 0.0234375f;
        z = h->centre[2] + axes[2] * 0.0234375f;
    } else {
        x = h->centre[0] - axes[0] * 0.0234375f;
        z = h->centre[2] - axes[2] * 0.0234375f;
    }
    x = x - axes[6] * 0.03125f;
    z = z - axes[8] * 0.03125f;
    lead_x = h->walk_velocity[0] * 7.5f;
    lead_z = h->walk_velocity[2] * 7.5f;
    length = sqrt_float((h->walk_velocity[2] * h->walk_velocity[2] + h->walk_velocity[0] * h->walk_velocity[0]) * 56.25f);
    if (length > 0.1875f) {
        float scale = 1.0f / length;
        lead_z = (scale * lead_z) * 0.1875f;
        lead_x = (scale * lead_x) * 0.1875f;
    }
    z = lead_z + z;
    x = lead_x + x;
    lag_x = h->centre_velocity[0] - h->walk_velocity[0];
    lag_z = h->centre_velocity[2] - h->walk_velocity[2];
    length = sqrt_float(lag_z * lag_z + lag_x * lag_x);
    if (length > 0.015625f) {
        float scale = 1.0f / length;
        lag_z = (scale * lag_z) * 0.015625f;
        lag_x = (scale * lag_x) * 0.015625f;
    }
    x = lag_x * 7.5f + x;
    z = lag_z * 7.5f + z;

    /* The ground there, looked for further ahead the earlier in the step;
       never lower than the ground under the foot now. */
    ahead = (1.0f - l->progress) * 11.25f;
    from[0] = h->walk_velocity[0] * ahead + x;
    from[1] = h->walk_velocity[1] * ahead + hip_target[1];
    from[2] = h->walk_velocity[2] * ahead + z;
    to[0] = from[0] - up[0] * 1.75f;
    to[1] = from[1] - up[1] * 1.75f;
    to[2] = from[2] - up[2] * 1.75f;
    if (human_probe_ground(human, from, to))
        ground = collision_hit.point[1];
    else
        ground = foot->position[1];
    foot_height = foot->position[1];
    if (foot_height > h->bones[HUMAN_BONE_PELVIS].position[1])
        foot_height = h->bones[HUMAN_BONE_PELVIS].position[1];
    from[0] = foot->position[0];
    from[1] = foot_height + 0.25f;
    from[2] = foot->position[2];
    to[0] = from[0] - up[0] * 0.5f;
    to[1] = from[1] - up[1] * 0.5f;
    to[2] = from[2] - up[2] * 0.5f;
    if (human_probe_ground(human, from, to) && !(ground >= collision_hit.point[1]))
        ground = collision_hit.point[1];

    /* The end of the step relative to the hip's target (a foot pitched
       down ends higher), and the step's progress: 1/12 a tick, 1/20 in
       state 5. */
    ex = x - hip_target[0];
    ez = z - hip_target[2];
    ey = (float)((double)ground - crt_sin((double)l->pitch) * 0.25) - hip_target[1];
    l->progress = l->progress + 0.050000001f;
    if (h->unknown_58 != HUMAN_STATE_5)
        l->progress = l->progress + 0.033333335f;
    t = min_float(l->progress, 1.0f);
    u = 1.0f - t;

    /* The arc: the faster the walk, the more the foot kicks forward and
       up as it leaves and the higher it comes in. */
    speed = min_float(max_float(sqrt_float((h->walk_velocity[0] * h->walk_velocity[0]
                                            + h->walk_velocity[1] * h->walk_velocity[1])
                                           + h->walk_velocity[2] * h->walk_velocity[2]) * 7.5f - 0.125f, 0.0f), 1.0f);
    kick = speed * 0.125f;
    l->swing[0] = ((((kick * axes[6] + l->start[0]) * 3.0f) * (u * u) + (((ex * 3.0f) * u + ex * t) * t)) * t)
                  + ((l->start[0] * u) * (u * u));
    l->swing[1] = (((((speed * 0.375f + l->start[1]) + kick * axes[7]) * 3.0f) * (u * u)
                    + ((((speed * 0.5f + ey) * 3.0f) * u + ey * t) * t)) * t)
                  + ((u * l->start[1]) * (u * u));
    l->swing[2] = (((((ez * 3.0f) * u + ez * t) * t) + ((kick * axes[8] + l->start[2]) * 3.0f) * (u * u)) * t)
                  + ((u * l->start[2]) * (u * u));
    l->swing[0] = (l->swing[0] + hip_target[0]) + h->unknown_6890[0];
    l->swing[1] = h->unknown_6890[1] + (l->swing[1] + hip_target[1]);
    l->swing[2] = h->unknown_6890[2] + (l->swing[2] + hip_target[2]);
    l->contact = 0.0f;
}
