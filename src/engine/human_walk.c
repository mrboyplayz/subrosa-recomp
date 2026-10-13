/* Walking: where a human means to stand.
 *
 * A human on foot is a ragdoll that is held up, not an animation. Each tick
 * the player's input moves a "walk point" over the ground; the leg routines
 * (still recompiled code) step the feet after it and the body is pulled
 * along. This file has the walk point and what it feels of the ground:
 *
 *   human_probe_ground       one ray against the level and near vehicles
 *   human_feel_ground_ahead  how level the ground ahead is, and how it rises
 *   human_update_walk_height the walk point's height above the ground
 *   human_update_walk_point  the walk point's move for a tick
 */
#include "arith.h"
#include "collision.h"
#include "crt.h"
#include "frame.h"
#include "human.h"
#include "math3d.h"
#include "physics.h"
#include "world.h"

/* ---- still recompiled code ------------------------------------------------- */

/* Whether something moving from one point to the other passes through the
   level; the hit is left in collision_hit. */
extern int sub_1400DC050(float *from, float *to, int unknown);
/* The same against one vehicle. */
extern int sub_1400DC940(int vehicle, float *from, float *to, int unknown);

/* ---- state ------------------------------------------------------------------- */

/* The vehicle the last ground probe hit, -1: the level. 0x151A848F8 */
#define human_ground_vehicle SR_GLOBAL(int32_t, 0x151A848F8ULL)

/* Item fields (world.h's WorldItem and WorldItemType). */
#define item_anchor(item) (&SR_GLOBAL(float, 0x182BBB180ULL + 0x1B80ULL * (uint64_t)(int64_t)(item) + 0x300))
#define item_type_grip_offset(type) (&SR_GLOBAL(float, 0x182A7E180ULL + 0x13D0ULL * (uint64_t)(int64_t)(type) + 0x80))
#define ITEM_TYPE_28 28

/* Movement modes (WorldHuman.unknown_60) and the state in which the walk
   velocity is not steered (WorldHuman.unknown_58). */
enum { HUMAN_MODE_RUN = 0, HUMAN_MODE_AIM = 2 };
#define HUMAN_STATE_5 5

static const float up[3] = {0.0f, 1.0f, 0.0f};

/* The axes of a heading: the identity turned about its second row. */
static void heading_axes(float m[9], float yaw)
{
    m[0] = 1.0f; m[1] = 0.0f; m[2] = 0.0f;
    m[3] = 0.0f; m[4] = 1.0f; m[5] = 0.0f;
    m[6] = 0.0f; m[7] = 0.0f; m[8] = 1.0f;
    math_mat3_rotate_rows(m, &m[3], yaw);
}

/* The identity turned about the world's up axis. */
static void turned_axes(float m[9], float angle)
{
    m[0] = 1.0f; m[1] = 0.0f; m[2] = 0.0f;
    m[3] = 0.0f; m[4] = 1.0f; m[5] = 0.0f;
    m[6] = 0.0f; m[7] = 0.0f; m[8] = 1.0f;
    math_mat3_rotate_rows(m, up, angle);
}

/* ANDPS with the sign bit cleared. */
static float fabs_float(float value)
{
    return _mm_cvtss_f32(_mm_and_ps(_mm_set_ss(value), _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))));
}

/* step limited to -limit .. limit; -limit when it is not a number. */
static float limit_step(float step, float limit)
{
    if (!(step >= -limit))
        return -limit;
    if (step > limit)
        return limit;
    return step;
}

int human_probe_ground(int human, float from[3], float to[3])
{
    const WorldHuman *h = &world_humans[human];
    float point[3] = {0.0f, 0.0f, 0.0f}, normal[3] = {0.0f, 0.0f, 0.0f};
    uint32_t unknown_20[3] = {0, 0, 0};
    float fraction = 1.0f;
    int vehicle = -1;

    if (sub_1400DC050(from, to, 0)) {
        for (int k = 0; k < 3; k++) {
            point[k] = collision_hit.point[k];
            normal[k] = collision_hit.normal[k];
            unknown_20[k] = collision_hit.unknown_20[k];
        }
        fraction = collision_hit.fraction;
    }
    for (int i = 0; i < h->near_vehicle_count; i++) {
        if (sub_1400DC940(h->near_vehicles[i], from, to, 0) && !(collision_hit.fraction >= fraction)) {
            fraction = collision_hit.fraction;
            for (int k = 0; k < 3; k++) {
                point[k] = collision_hit.point[k];
                normal[k] = collision_hit.normal[k];
                unknown_20[k] = collision_hit.unknown_20[k];
            }
            vehicle = h->near_vehicles[i];
        }
    }
    if (fraction >= 1.0f)
        return 0;
    for (int k = 0; k < 3; k++) {
        collision_hit.point[k] = point[k];
        collision_hit.normal[k] = normal[k];
        collision_hit.unknown_20[k] = unknown_20[k];
    }
    collision_hit.fraction = fraction;
    human_ground_vehicle = vehicle;
    return 1;
}

/* A probe straight down through (x, y, z), from reach above to reach below. */
static int probe_down(int human, float x, float y, float z, float reach)
{
    float from[3], to[3];

    from[0] = up[0] * reach + x;
    to[1] = y - up[1] * reach;
    from[1] = up[1] * reach + y;
    to[0] = x - up[0] * reach;
    from[2] = up[2] * reach + z;
    to[2] = z - up[2] * reach;
    return human_probe_ground(human, from, to);
}

/* The height of the ground under the pelvis (the pelvis's own height when
   nothing is within 1.75 below it). */
static float ground_under_pelvis(int human, float pelvis[3])
{
    const WorldHuman *h = &world_humans[human];
    float to[3];

    pelvis[0] = h->bones[HUMAN_BONE_PELVIS].position[0];
    pelvis[1] = h->bones[HUMAN_BONE_PELVIS].position[1];
    pelvis[2] = h->bones[HUMAN_BONE_PELVIS].position[2];
    to[0] = pelvis[0] - up[0] * 1.75f;
    to[1] = pelvis[1] - up[1] * 1.75f;
    to[2] = pelvis[2] - up[2] * 1.75f;
    if (human_probe_ground(human, pelvis, to))
        return collision_hit.point[1];
    return pelvis[1];
}

void human_feel_ground_ahead(int human)
{
    WorldHuman *h = &world_humans[human];
    float axes[9], pelvis[3];
    float lowest = 65536.0f, highest = -65536.0f;
    float here, height, x, z, dx, dy, dz, speed, length;
    int hits = 0;

    heading_axes(axes, h->unknown_98);
    here = ground_under_pelvis(human, pelvis);

    /* The direction walked in; when slower than 1/60 a tick, pushed back
       along the heading by what is missing. */
    dx = h->walk_velocity[0];
    dz = h->walk_velocity[2];
    dy = 0.0f;
    speed = sqrt_float(dz * dz + dx * dx);
    if (!(speed >= 0.016666668f)) {
        float missing = speed - 0.016666668f;
        dy = axes[7] * missing;
        dx = axes[6] * missing + dx;
        dz = axes[8] * missing + dz;
    }
    length = sqrt_float((dy * dy + dx * dx) + dz * dz);
    if (is_zero_or_nan(length)) {
        dx = 0.0f;
        dy = 0.0f;
        dz = 0.0f;
    } else {
        float scale = 1.0f / length;
        dx *= scale;
        dy *= scale;
        dz *= scale;
    }
    dx *= 0.66666669f;
    dy *= 0.66666669f;
    dz *= 0.66666669f;

    /* Four probes, 2/3 apart, each around the height the last one found. */
    x = pelvis[0];
    z = pelvis[2];
    height = here;
    for (int i = 0; i < 4; i++) {
        if (probe_down(human, x, height, z, 0.75f)) {
            if (i == 0) {
                int vehicle = human_ground_vehicle;
                for (int k = 0; k < 3; k++) {
                    h->ground_velocity[k] = 0.0f;
                    h->ground_angular_velocity[k] = 0.0f;
                }
                if (vehicle != -1) {
                    for (int k = 0; k < 3; k++) {
                        h->ground_velocity[k] = physics_vehicles[vehicle].velocity[k];
                        h->ground_angular_velocity[k] = physics_vehicles[vehicle].angular_velocity[k];
                    }
                }
            }
            height = collision_hit.point[1];
            hits++;
            lowest = min_float(height, lowest);
            highest = max_float(height, highest);
        }
        x += dx;
        z += dz;
        height = dy + height;
    }

    if (hits > 0) {
        float rise = highest - here;
        float uneven = max_float(min_float(fabs_float(highest - lowest), 0.5f), min_float(fabs_float(rise), 0.625f));
        float step = max_float((1.0f - uneven) - h->ground_flat, -0.03125f);

        if (step > 0.03125f)
            step = 0.03125f;
        h->ground_flat = step + h->ground_flat;

        step = max_float(rise - h->ground_rise, -0.03125f);
        if (step > 0.03125f)
            step = 0.03125f;
        h->ground_rise = step + h->ground_rise;
    }
}

void human_update_walk_height(int human)
{
    WorldHuman *h = &world_humans[human];
    float axes[9], pelvis[3], heights[8];
    float x, y, z, dx, dy, dz, carried, uphill, target, height, low;
    int hits = 0;

    heading_axes(axes, h->unknown_98);
    y = ground_under_pelvis(human, pelvis);

    /* Eight probes along the walk velocity less 1/64 of the heading, the
       second of them under the pelvis. */
    dx = (h->walk_velocity[0] - axes[6] * 0.015625f) * 3.75f;
    dz = (h->walk_velocity[2] - axes[8] * 0.015625f) * 3.75f;
    dy = (axes[7] * -0.015625f) * 3.75f;
    x = pelvis[0] - dx;
    z = pelvis[2] - dz;
    y = y - dy;
    for (int i = 0; i < 8; i++) {
        if (probe_down(human, x, y, z, 0.75f)) {
            y = collision_hit.point[1];
            heights[hits++] = y;
        }
        x += dx;
        y += dy;
        z += dz;
    }

    /* How high the hips are carried: lower when looking down or crouched,
       by movement mode, and on rising ground the full stride's height. */
    carried = (float)(crt_cos((double)(h->unknown_9c * 0.5f)) * (double)h->unknown_6768);
    carried = max_float(carried, 0.125f);
    if (h->unknown_60 != HUMAN_MODE_RUN)
        low = h->walk_amount * 0.46875f + 0.125f;
    else
        low = h->walk_amount * 0.21875f + 0.34375f;
    uphill = min_float(max_float(h->ground_rise, 0.0f), 1.0f);
    carried = ((carried + 1.0f) * low) * (1.0f - uphill) + (h->walk_amount * 0.9375f + 0.3125f) * uphill;

    target = h->centre[1];
    if (hits > 0) {
        float sum;

        /* A planted foot holds the ground down to its own height + 1/8. */
        for (int leg = 0; leg < 2; leg++) {
            const HumanLeg *l = &h->legs[leg];
            if (l->state == 1 && h->bones[HUMAN_BONE_FOOT + 3 * leg].unknown_130) {
                float limit = l->ground_height + 0.125f;
                for (int i = 0; i < hits; i++) {
                    if (!(limit >= heights[i]))
                        heights[i] = limit;
                }
            }
        }
        if (hits >= 8) {
            /* summed four lanes at a time */
            float a = heights[0] + heights[4], b = heights[1] + heights[5];
            float c = heights[2] + heights[6], d = heights[3] + heights[7];
            sum = (a + c) + (b + d);
        } else {
            sum = 0.0f;
            for (int i = 0; i < hits; i++)
                sum += heights[i];
        }
        target = sum / (float)hits + carried;
    }

    /* The point stays within 1/8 of the body's centre and covers a quarter
       of the way to the target a tick. */
    height = h->walk_point[1];
    if (!(height >= h->centre[1] - 0.125f)) {
        height = h->centre[1] - 0.125f;
    } else {
        float top = h->centre[1] + 0.125f;
        if (height > top)
            height = top;
    }
    h->walk_point[1] = (target - height) * 0.25f + height;
}

/* The speed and direction wanted from the input, in world axes. */
static void wanted_velocity(WorldHuman *h, float wanted[3])
{
    float axes[9];
    float speed, amount, back, x, y, z, length, across;

    speed = 0.050000001f;
    if (h->unknown_60 == HUMAN_MODE_RUN)
        speed = 0.083333336f;
    else if (h->unknown_60 == HUMAN_MODE_AIM)
        speed = 0.025f;
    amount = h->unknown_6734 ? 1.0f : h->walk_amount;
    speed = (speed * amount) * h->ground_flat;
    heading_axes(axes, h->unknown_f8 + h->unknown_98);

    back = -h->input_forward;
    x = axes[6] * back + h->input_strafe * axes[0];
    z = axes[8] * back + h->input_strafe * axes[2];
    y = axes[7] * back + h->input_strafe * axes[1];
    length = sqrt_float((y * y + x * x) + z * z);
    if (is_zero_or_nan(length)) {
        x = 0.0f;
        y = 0.0f;
        z = 0.0f;
    } else {
        float scale = 1.0f / length;
        x = scale * x;
        y = scale * y;
        z = scale * z;
    }
    /* Sideways a quarter slower, backwards half as fast. */
    across = ((axes[0] * x + axes[1] * y) + axes[2] * z) * -0.25f;
    x = across * axes[0] + x;
    y = across * axes[1] + y;
    z = across * axes[2] + z;
    if (!(h->input_forward >= 0.0f)) {
        float along = ((y * axes[7] + x * axes[6]) + z * axes[8]) * -0.5f;
        z = along * axes[8] + z;
        x = along * axes[6] + x;
        y = along * axes[7] + y;
    }
    x *= speed;
    y *= speed;
    z *= speed;

    /* Faster than a walk costs stamina; without it, a walk. */
    length = sqrt_float((y * y + x * x) + z * z);
    if (length > 0.050000001f) {
        if (((uint32_t)game_tick & 0xF) == 0 && h->stamina > 0)
            h->stamina--;
        if (h->stamina < 8) {
            float scale = 1.0f / length;
            x = (scale * x) * 0.050000001f;
            y = (scale * y) * 0.050000001f;
            z = (scale * z) * 0.050000001f;
        }
    }
    if (0.5f > h->unknown_6768) {
        x = 0.0f;
        y = 0.0f;
        z = 0.0f;
    }
    wanted[0] = x;
    wanted[1] = y;
    wanted[2] = z;
}

/* A held item of type 28 leads the human: the walk velocity is pulled so the
   walk point keeps between 1/2 and 3/4 from a point 7/8 off the item's
   anchor (no further than 1/2 from the item's grip). */
static void follow_item_28(WorldHuman *h, int item)
{
    const WorldItem *it = &world_items[item];
    const float *anchor = item_anchor(item);
    const float *grip = item_type_grip_offset(it->type);
    float axes[9];
    float px, pz, gx, gz, dx, dz, length, ex, ez, distance;
    float ax, ay = 0.0f, az;

    h->lean_side = 0.0f;
    h->lean_forward = 0.0f;
    turned_axes(axes, h->unknown_128);
    px = axes[0] * 0.875f + anchor[0];
    pz = axes[2] * 0.875f + anchor[2];
    gz = ((grip[0] * it->rotation[2] + it->position[2]) + grip[1] * it->rotation[5]) + grip[2] * it->rotation[8];
    gx = ((grip[0] * it->rotation[0] + it->position[0]) + grip[1] * it->rotation[3]) + grip[2] * it->rotation[6];
    dz = pz - gz;
    dx = px - gx;
    length = sqrt_float(dz * dz + dx * dx);
    if (length > 0.5f) {
        float scale = 1.0f / length;
        px = (dx * scale) * 0.5f + gx;
        pz = (dz * scale) * 0.5f + gz;
    }
    ex = h->walk_point[0] - px;
    ez = h->walk_point[2] - pz;
    distance = sqrt_float(ez * ez + ex * ex);
    if (!(distance >= 0.5f)) {
        float away;
        turned_axes(axes, h->unknown_98);
        away = (0.5f - distance) + 0.0625f;
        ax = away * axes[6];
        ay = away * axes[7];
        az = away * axes[8];
    } else if (distance > 0.75f) {
        float scale = 1.0f / distance;
        az = (scale * ez) * (0.6875f - distance);
        ax = (scale * ex) * (0.6875f - distance);
    } else {
        ax = 0.0f;
        az = 0.0f;
    }
    h->walk_velocity[0] = (ax * 0.0625f - h->centre_velocity[0] * 0.5f) + h->walk_velocity[0];
    h->walk_velocity[1] = (ay * 0.0625f - h->centre_velocity[1] * 0.5f) + h->walk_velocity[1];
    h->walk_velocity[2] = (az * 0.0625f - h->centre_velocity[2] * 0.5f) + h->walk_velocity[2];
}

void human_update_walk_point(int human)
{
    WorldHuman *h = &world_humans[human];
    float heading[9], wanted[3];
    float target, rate, dx, dy, dz, length, leash, lean, forward, still, keep, limit;
    float vx, vy, vz;
    int held;

    /* How much of the walking speed is used. */
    target = (h->input_flags & HUMAN_INPUT_8) ? 0.625f : 1.0f;
    rate = 0.03125f;
    if (h->unknown_6734 == 0 && h->unknown_54)
        h->unknown_6738 = 0;
    else if (h->unknown_6734 > 0)
        rate = 0.125f;
    if (!(h->walk_amount >= target - rate))
        h->walk_amount = h->walk_amount + rate;
    else if (h->walk_amount > rate + target)
        h->walk_amount = h->walk_amount - rate;
    else
        h->walk_amount = target;

    heading_axes(heading, h->unknown_98);
    human_feel_ground_ahead(human);

    /* The walk velocity stays within 1/30 of the body's. */
    dy = h->walk_velocity[1] - h->centre_velocity[1];
    dz = h->walk_velocity[2] - h->centre_velocity[2];
    dx = h->walk_velocity[0] - h->centre_velocity[0];
    length = sqrt_float((dx * dx + dy * dy) + dz * dz);
    if (length > 0.033333335f) {
        float scale = 1.0f / length;
        h->walk_velocity[0] = (dx * scale) * 0.033333335f + h->centre_velocity[0];
        h->walk_velocity[1] = (scale * dy) * 0.033333335f + h->centre_velocity[1];
        h->walk_velocity[2] = (scale * dz) * 0.033333335f + h->centre_velocity[2];
    }
    h->walk_velocity[1] = 0.0f;

    /* The walk point rides the ground and stays near the body's centre. */
    h->walk_point[0] = h->walk_point[0] + h->ground_velocity[0];
    h->walk_point[1] = h->walk_point[1] + h->ground_velocity[1];
    h->walk_point[2] = h->walk_point[2] + h->ground_velocity[2];
    dx = h->walk_point[0] - h->centre[0];
    dz = h->walk_point[2] - h->centre[2];
    leash = sqrt_float((h->walk_velocity[0] * h->walk_velocity[0] + h->walk_velocity[1] * h->walk_velocity[1])
                       + h->walk_velocity[2] * h->walk_velocity[2]) * 1.875f + 0.0625f;
    length = sqrt_float(dz * dz + dx * dx);
    if (length > leash) {
        if (is_zero_or_nan(length)) {
            dx = 0.0f;
            dz = 0.0f;
        } else {
            float scale = 1.0f / length;
            dx *= scale;
            dz *= scale;
        }
        h->walk_point[0] = dx * leash + h->centre[0];
        h->walk_point[2] = dz * leash + h->centre[2];
    }

    wanted_velocity(h, wanted);

    /* Leans: toward the speed still missing, sideways and forward. */
    lean = h->lean_side;
    h->lean_side = lean + limit_step(
        ((((wanted[0] * heading[0] + wanted[1] * heading[1]) + wanted[2] * heading[2])
          - ((heading[1] * h->centre_velocity[1] + heading[0] * h->centre_velocity[0]) + heading[2] * h->centre_velocity[2]))
         - lean) * 0.0625f, 0.0078125f);
    forward = ((wanted[0] * heading[6] + wanted[1] * heading[7]) + heading[8] * wanted[2])
              - ((heading[7] * h->centre_velocity[1] + heading[6] * h->centre_velocity[0]) + heading[8] * h->centre_velocity[2]);
    if (forward > 0.0f)
        forward = (float)((double)fabs_float(forward) * -0.125);
    else
        forward = (float)-(double)fabs_float(forward);
    lean = h->lean_forward;
    h->lean_forward = lean + limit_step((forward - lean) * 0.0625f, 0.0078125f);

    /* Standing still damps the walk velocity harder. */
    still = h->stillness;
    still = still + limit_step(
        (1.0f - min_float(sqrt_float((h->walk_velocity[0] * h->walk_velocity[0] + h->walk_velocity[1] * h->walk_velocity[1])
                                     + h->walk_velocity[2] * h->walk_velocity[2]) * 120.0f, 1.0f)) - still, 0.03125f);
    h->stillness = still;
    keep = 0.96875f - still * 0.5f;
    vx = keep * h->walk_velocity[0];
    vy = keep * h->walk_velocity[1];
    vz = keep * h->walk_velocity[2];

    /* Toward the wanted velocity by at most 1/225 a tick. */
    dx = wanted[0] - vx;
    dz = wanted[2] - vz;
    limit = h->unknown_58 == HUMAN_STATE_5 ? 0.0f : 0.0044444446f;
    length = sqrt_float(dz * dz + dx * dx);
    if (length > limit) {
        if (is_zero_or_nan(length)) {
            dx = 0.0f;
            dz = 0.0f;
        } else {
            float scale = 1.0f / length;
            dx *= scale;
            dz *= scale;
        }
        dx *= limit;
        dz *= limit;
    }
    h->walk_velocity[1] = vy;
    h->walk_velocity[0] = vx + dx;
    h->walk_velocity[2] = dz + vz;

    held = -1;
    if (h->hands[0].count > 0)
        held = h->hands[0].items[0];
    if (h->hands[1].count > 0)
        held = h->hands[1].items[0];
    if (held != -1 && world_items[held].type == ITEM_TYPE_28)
        follow_item_28(h, held);

    h->walk_velocity[1] = 0.0f;
    h->walk_point[0] = h->walk_velocity[0] + h->walk_point[0];
    h->walk_point[1] = h->walk_point[1] + h->walk_velocity[1];
    h->walk_point[2] = h->walk_point[2] + h->walk_velocity[2];
    human_update_walk_height(human);
}
