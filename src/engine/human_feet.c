/* Feet: what holds a standing human on the ground.
 *
 * A foot that reaches the ground gets a bond for the tick (type 9, a body
 * against a moving surface): it carries the foot at the ground's height,
 * grips by the leg's state, and turns the foot toward the leg's yaw and
 * pitch. A jump starts here too, from a planted foot.
 */
#include <string.h>
#include "arith.h"
#include "collision.h"
#include "crt.h"
#include "human.h"
#include "math3d.h"
#include "physics.h"

/* A byte that changes several limits of the ragdoll (see human_ragdoll.c);
   here the foot's turn is held to 1/16. Meaning not settled. */
#define ragdoll_unknown_mode SR_GLOBAL(uint8_t, 0x183F7C960ULL)

/* WorldHuman.unknown_58 */
enum { HUMAN_STATE_2 = 2, HUMAN_STATE_JUMP = 3 };
/* HumanLeg.state */
enum { LEG_STATE_0 = 0, LEG_PLANTED = 1, LEG_STATE_3 = 3 };

enum { HUMAN_BONE_THIGH = 10, HUMAN_BONE_SHIN = 11 };   /* + 3 * leg */

static const float up[3] = {0.0f, 1.0f, 0.0f};

/* The first bond not in use, or -1. */
static int free_bond(void)
{
    for (int k = 0; k < PHYSICS_BOND_CAPACITY; k++)
        if (!physics_bonds[k].active)
            return k;
    return -1;
}

/* The turn from the foot's rotation to the one wanted, as an axis in the
   foot's own axes scaled by the angle (0 for a loose leg), at most 1/4. */
static void foot_turn(const WorldHuman *h, const HumanLeg *leg, const HumanBone *foot, float turn[3])
{
    float axes[9], target[4], q[4];
    float x, y, z, w, length, angle;
    double half;

    axes[0] = 1.0f; axes[1] = 0.0f; axes[2] = 0.0f;
    axes[3] = 0.0f; axes[4] = 1.0f; axes[5] = 0.0f;
    axes[6] = 0.0f; axes[7] = 0.0f; axes[8] = 1.0f;
    math_mat3_rotate_rows(axes, &axes[3], leg->state == LEG_PLANTED ? leg->yaw : h->unknown_98);
    math_mat3_rotate_rows(axes, &axes[0], -leg->pitch);
    math_quat_from_mat3(target, axes);
    math_quat_from_mat3(q, foot->rotation);
    if (!(((target[3] * q[3] + target[2] * q[2]) + (target[0] * q[0] + target[1] * q[1])) >= 0.0f)) {
        for (int k = 0; k < 4; k++)
            q[k] = -q[k];
    }
    q[0] = -q[0];
    q[1] = -q[1];
    q[2] = -q[2];
    /* target * conj(q) */
    x = ((target[3] * q[0] + q[3] * target[0]) + target[1] * q[2]) - target[2] * q[1];
    y = ((target[3] * q[1] - target[0] * q[2]) + q[3] * target[1]) + target[2] * q[0];
    z = ((target[3] * q[2] + target[0] * q[1]) - target[1] * q[0]) + q[3] * target[2];
    w = ((target[3] * q[3] - target[0] * q[0]) - target[1] * q[1]) - target[2] * q[2];
    length = sqrt_float((x * x + y * y) + z * z);
    if (is_zero_or_nan(length)) {
        x = 0.0f;
        y = 0.0f;
        z = 0.0f;
    } else {
        float scale = 1.0f / length;
        x *= scale;
        y *= scale;
        z *= scale;
    }
    half = crt_acos(min_float(max_float(w, -1.0f), 1.0f));
    angle = (float)(half + half);
    x *= angle;
    y *= angle;
    z *= angle;
    if (leg->state == LEG_STATE_0) {
        x = 0.0f;
        y = 0.0f;
        z = 0.0f;
    }
    length = sqrt_float((y * y + x * x) + z * z);
    if (length > 0.25f) {
        float scale = 1.0f / length;
        x = (x * scale) * 0.25f;
        y = (y * scale) * 0.25f;
        z = (z * scale) * 0.25f;
    }
    if (ragdoll_unknown_mode && length > 0.0625f) {
        float again = sqrt_float((y * y + x * x) + z * z);
        if (is_zero_or_nan(again)) {
            x = 0.0f;
            y = 0.0f;
            z = 0.0f;
        } else {
            float scale = 1.0f / again;
            x *= scale;
            y *= scale;
            z *= scale;
        }
        x *= 0.0625f;
        y *= 0.0625f;
        z *= 0.0625f;
    }
    turn[0] = x;
    turn[1] = y;
    turn[2] = z;
}

/* A jump begins: the human goes to the jump state with the other leg
   named, and each leg keeps where its ankle is from its hip. */
static void start_jump(WorldHuman *h, int leg)
{
    const HumanBone *pelvis = &h->bones[HUMAN_BONE_PELVIS];

    h->unknown_58 = HUMAN_STATE_JUMP;
    h->legs[leg].state = LEG_PLANTED;
    h->unknown_68b4 = leg ^ 1;
    h->unknown_6740 = h->unknown_16c;
    h->unknown_6744 = h->unknown_168;
    h->unknown_6850 = 0x4016CBE4;        /* 3 pi / 4 as a float */
    h->legs[0].progress = 0;
    h->legs[1].progress = 0;
    for (int side = 0; side < 2; side++) {
        const HumanBone *shin = &h->bones[HUMAN_BONE_SHIN + 3 * side];
        float ankle = human_skeleton[HUMAN_BONE_SHIN + 3 * side].unknown_34[1];
        float hip = human_skeleton[HUMAN_BONE_THIGH - 1 + 3 * side].unknown_34[0];

        for (int k = 0; k < 3; k++)
            h->legs[side].start[k] = (ankle * shin->rotation[3 + k] + shin->position[k])
                                          - (hip * pelvis->rotation[k] + pelvis->position[k]);
    }
}

void human_foot_ground_contact(int human, int leg_index)
{
    WorldHuman *h = &world_humans[human];
    HumanLeg *leg = &h->legs[leg_index];
    HumanBone *foot = &h->bones[HUMAN_BONE_FOOT + 3 * leg_index];
    const HumanBone *shin = foot - 1;
    PhysicsBond *bond;
    float from[3], to[3], turn[3];
    float px = foot->position[0], py = foot->position[1], pz = foot->position[2];
    float reach, ground, depth;
    int hit, index;

    /* From 3/8 above the foot to just below it, further with the toes down. */
    from[0] = up[0] * 0.375f + px;
    from[1] = up[1] * 0.375f + py;
    from[2] = up[2] * 0.375f + pz;
    reach = (float)(crt_sin((double)leg->pitch) * 0.1875) - 0.03125f;
    to[0] = up[0] * reach + px;
    to[1] = up[1] * reach + py;
    to[2] = up[2] * reach + pz;
    hit = human_probe_ground(human, from, to) != 0;
    if (0.0f > shin->rotation[4] || !hit)
        return;

    ground = collision_hit.point[1];
    collision_hit.normal[0] = up[0];
    collision_hit.normal[1] = up[1];
    collision_hit.normal[2] = up[2];
    leg->ground_height = ground;
    index = free_bond();
    if (index == -1)
        return;
    bond = &physics_bonds[index];
    memset(&bond->type, 0, 0xF0);

    depth = ((collision_hit.point[0] - to[0]) * up[0] + (ground - to[1]) * up[1]) + (collision_hit.point[2] - to[2]) * up[2];
    if (depth >= 0.0625f)
        depth = 0.0625f;
    bond->active = 1;
    bond->type = PHYSICS_BOND_BODY_SURFACE;
    bond->lifetime = 0;
    bond->body = foot->body;
    bond->distance = depth;
    bond->stiffness = 0.5f;
    bond->damping = 0.5f;
    bond->pass_mask = 0;
    bond->normal[0] = up[0];
    bond->normal[1] = up[1];
    bond->normal[2] = up[2];
    bond->friction = 4.0f;
    bond->local_point[0] = 0.0f;
    bond->local_point[1] = 0.0f;
    bond->local_point[2] = 0.0f;
    bond->target_velocity[0] = h->ground_velocity[0];
    bond->target_velocity[1] = h->ground_velocity[1];
    bond->target_velocity[2] = h->ground_velocity[2];
    bond->point_weight[0] = foot->unknown_a0 + foot->unknown_a0;
    bond->point_weight[1] = 0.1875f;
    if (h->unknown_58 == HUMAN_STATE_2)
        bond->point_weight[0] = 0.0f;
    else if (h->unknown_58 == HUMAN_STATE_JUMP)
        bond->point_weight[1] = 1.0f;
    if (leg->state == LEG_STATE_0 || leg->state == LEG_STATE_3) {
        bond->friction = 0.0f;
        bond->stiffness = 0.015625f;
        bond->damping = 0.015625f;
    }
    if (h->unknown_58 == HUMAN_STATE_2)
        bond->friction = 0.1f;

    foot_turn(h, leg, foot, turn);
    bond->world_point[0] = (turn[1] * foot->rotation[3] + turn[0] * foot->rotation[0]) + turn[2] * foot->rotation[6];
    bond->world_point[1] = (turn[1] * foot->rotation[4] + turn[0] * foot->rotation[1]) + turn[2] * foot->rotation[7];
    bond->world_point[2] = (turn[1] * foot->rotation[5] + turn[0] * foot->rotation[2]) + turn[2] * foot->rotation[8];

    leg->ground_bond = index;
    foot->unknown_130++;
    h->unknown_54 = 1;
    if (h->unknown_58 != HUMAN_STATE_JUMP && h->unknown_6734 > 0 && !(h->input_flags & HUMAN_INPUT_4)
            && leg->state == LEG_PLANTED && is_zero_or_nan(leg->contact))
        start_jump(h, leg_index);
}
