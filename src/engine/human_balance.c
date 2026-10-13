/* Balance: how a planted leg holds the body up.
 *
 * A standing human is steered through its planted legs. For each one this
 * works out the velocity the body's centre should have (toward the walk
 * point, at the walk velocity) and the angular velocity the trunk should
 * have (toward the wanted rotation), limits how fast either may change, and
 * turns them into the point the leg's hip is sent to and the turn its hip
 * joint is given. The leg routines (still recompiled code) apply both.
 */
#include "arith.h"
#include "crt.h"
#include "human.h"
#include "math3d.h"

/* A byte that changes several limits of the ragdoll (see human_ragdoll.c);
   here human 0 balances with other gains. Meaning not settled. */
#define ragdoll_unknown_mode SR_GLOBAL(uint8_t, 0x183F7C960ULL)

/* v scaled to length limit when it is longer; a vector of no length (or
   not a number) stays 0. */
static void limit_length2(float *x, float *z, float limit)
{
    float length = sqrt_float(*x * *x + *z * *z);

    if (length > limit) {
        if (is_zero_or_nan(length)) {
            *x = 0.0f;
            *z = 0.0f;
        } else {
            float scale = 1.0f / length;
            *x *= scale;
            *z *= scale;
        }
        *x *= limit;
        *z *= limit;
    }
}

void human_balance_on_leg(int human, int leg, float target[3], float turn[3], const float hip[3],
                          const float foot[3], const float wanted_centre[3], const float wanted_rotation[9],
                          float share)
{
    WorldHuman *h = &world_humans[human];
    int special = ragdoll_unknown_mode && human == 0;
    float gain = special ? 1.0f : 3.0f;
    float change_limit = special ? 0.25f : 0.125f;
    float turn_change_limit = special ? 0.1875f : 0.09375f;
    float turn_limit = 0.25f;
    float damping = special ? 0.9375f : 0.5f;
    float dx, dy, dz, length, toward_x, toward_z, vx, vy, vz, lift;
    float q[4], kept[4], turn_q[4], ax, ay, az, angle, wx, wy, wz;
    float push_x, push_y, push_z, rx, ry, rz, cx, cy, cz, along;
    float *hip_turn = leg ? h->unknown_67d4 : h->unknown_67c8;
    const float *r = h->smoothed_rotation;
    double half;

    /* A hurt body (unknown_78 counting down) is steered more weakly. */
    if (h->unknown_78 > 0) {
        float weak = 1.0f - min_float((float)h->unknown_78 * 0.033333335f, 1.0f);
        change_limit = change_limit * weak;
        turn_change_limit = turn_change_limit * weak;
        turn_limit = weak * 0.25f;
    }

    /* The velocity wanted of the centre: 3/8 of the way to the walk point,
       taken about a third of a unit toward the foot's side of the hip,
       less the centre's velocity over the walk velocity. At most 1/4
       along the ground and 1/8 up or down. */
    dx = hip[0] - foot[0];
    dy = hip[1] - foot[1];
    dz = hip[2] - foot[2];
    length = sqrt_float((dy * dy + dx * dx) + dz * dz);
    if (is_zero_or_nan(length)) {
        toward_x = 0.0f;
        toward_z = 0.0f;
    } else {
        float scale = 1.0f / length;
        toward_z = scale * dz;
        toward_x = scale * dx;
    }
    vx = ((wanted_centre[0] - h->centre[0]) - toward_x * 0.32666668f) * 0.375f
         - (h->centre_velocity[0] - h->walk_velocity[0]) * damping;
    vz = ((wanted_centre[2] - h->centre[2]) - toward_z * 0.32666668f) * 0.375f
         - (h->centre_velocity[2] - h->walk_velocity[2]) * damping;
    length = sqrt_float(vx * vx + vz * vz);
    if (length > 0.25f) {
        float scale = 1.0f / length;
        vx = (vx * scale) * 0.25f;
        vz = (vz * scale) * 0.25f;
    }
    vy = max_float((wanted_centre[1] - h->centre[1]) * 0.375f - (h->centre_velocity[1] - h->walk_velocity[1]) * damping,
                   -0.125f);
    if (vy > 0.125f)
        vy = 0.125f;

    /* The change of velocity that asks for: limited along the ground, and
       only upward (the legs push, they do not pull). */
    vz = vz - h->centre_velocity[2];
    vx = vx - h->centre_velocity[0];
    vy = vy - h->centre_velocity[1];
    limit_length2(&vx, &vz, change_limit);
    vy = max_float(vy, -0.125f);
    if (vy > 0.125f)
        lift = 0.125f;
    else if (vy >= 0.0f)
        lift = vy;
    else
        lift = 0.0f;
    push_x = vx * gain;
    push_y = lift * gain;
    push_z = vz * gain;

    /* The turn from the smoothed rotation of the pelvis to the one
       wanted, as an axis scaled by the angle, at most turn_limit. */
    math_quat_from_mat3(q, wanted_rotation);
    math_quat_from_mat3(kept, r);
    if (!(((q[3] * kept[3] + q[2] * kept[2]) + (q[0] * kept[0] + q[1] * kept[1])) >= 0.0f)) {
        for (int k = 0; k < 4; k++)
            kept[k] = -kept[k];
    }
    kept[0] = -kept[0];
    kept[1] = -kept[1];
    kept[2] = -kept[2];
    math_quat_multiply(turn_q, kept, q);
    length = sqrt_float((turn_q[1] * turn_q[1] + turn_q[0] * turn_q[0]) + turn_q[2] * turn_q[2]);
    if (is_zero_or_nan(length)) {
        ax = 0.0f;
        ay = 0.0f;
        az = 0.0f;
    } else {
        float scale = 1.0f / length;
        ax = turn_q[0] * scale;
        ay = turn_q[1] * scale;
        az = turn_q[2] * scale;
    }
    half = crt_acos(min_float(max_float(turn_q[3], -1.0f), 1.0f));
    angle = (float)(half + half);
    ax = ax * angle;
    ay = angle * ay;
    az = az * angle;
    length = sqrt_float((ax * ax + ay * ay) + az * az);
    if (length > turn_limit) {
        if (is_zero_or_nan(length)) {
            ax = 0.0f;
            ay = 0.0f;
            az = 0.0f;
        } else {
            float scale = 1.0f / length;
            ax = ax * scale;
            ay = ay * scale;
            az = az * scale;
        }
        ax = ax * turn_limit;
        ay = ay * turn_limit;
        az = az * turn_limit;
    }
    /* Against the trunk's own angular velocity, and the change limited. */
    wx = h->smoothed_angular_velocity[0];
    wy = h->smoothed_angular_velocity[1];
    wz = h->smoothed_angular_velocity[2];
    if (special) {
        ax = ax * 0.75f - wx * 1.75f;
        ay = ay * 0.75f - wy * 1.75f;
        az = az * 0.75f - wz * 1.75f;
    } else {
        ax = ax + wx * -2.0f;
        ay = ay + wy * -2.0f;
        az = az + wz * -2.0f;
    }
    ax = ax - wx;
    ay = ay - wy;
    az = az - wz;
    length = sqrt_float((ay * ay + ax * ax) + az * az);
    if (length > turn_change_limit) {
        if (is_zero_or_nan(length)) {
            ax = 0.0f;
            ay = 0.0f;
            az = 0.0f;
        } else {
            float scale = 1.0f / length;
            ax = ax * scale;
            ay = ay * scale;
            az = az * scale;
        }
        ax = ax * turn_change_limit;
        ay = ay * turn_change_limit;
        az = az * turn_change_limit;
    }
    turn[0] = (ax * gain) * share;
    turn[2] = (az * gain) * share;
    turn[1] = (ay * gain) * share;

    /* This leg's share; a foot without ground contact lifts less. */
    push_x = push_x * share;
    push_z = push_z * share;
    if (!h->bones[HUMAN_BONE_FOOT + 3 * leg].unknown_130)
        push_y = push_y * (share * 0.75f + 0.25f);

    /* Where the hip is sent: on with the walk velocity and the push, and
       round the centre by the turn. */
    rx = hip[0] - h->centre[0];
    ry = hip[1] - h->centre[1];
    rz = hip[2] - h->centre[2];
    {
        float x = push_x + (hip[0] + h->walk_velocity[0]);
        float y = push_y + (hip[1] + h->walk_velocity[1]);
        float z = (h->walk_velocity[2] + hip[2]) + push_z;

        target[0] = (turn[2] * ry - turn[1] * rz) + x;
        target[2] = (turn[1] * rx - turn[0] * ry) + z;
        target[1] = (turn[0] * rz - turn[2] * rx) + y;
    }

    /* The turn of the hip joint that the push asks of the trunk, taken
       off along the smoothed rotation's rows: all of the first, a quarter
       of the second, twice the third. */
    cx = rz * push_y - ry * push_z;
    cy = rx * push_z - rz * push_x;
    cz = ry * push_x - rx * push_y;
    along = -((cy * r[1] + cx * r[0]) + cz * r[2]);
    hip_turn[0] = along * r[0];
    hip_turn[1] = along * r[1] + 0.0f;
    hip_turn[2] = along * r[2] + 0.0f;
    along = ((cy * r[4] + cx * r[3]) + cz * r[5]) * -0.25f;
    hip_turn[0] = r[3] * along + hip_turn[0];
    hip_turn[1] = along * r[4] + hip_turn[1];
    hip_turn[2] = along * r[5] + hip_turn[2];
    along = ((cy * r[7] + r[6] * cx) + cz * r[8]) * -2.0f;
    hip_turn[0] = r[6] * along + hip_turn[0];
    hip_turn[1] = along * r[7] + hip_turn[1];
    hip_turn[2] = along * r[8] + hip_turn[2];
}
