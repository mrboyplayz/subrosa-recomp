/* World effects (0x14005EE40). See effect.h. */
#include <string.h>
#include "effect.h"
#include "arith.h"
#include "collision.h"
#include "math3d.h"

uint32_t world_add_effect(int type, const float position[3], const float velocity[3], float size)
{
    int32_t index = world_effect_count;
    if (index >= EFFECT_CAPACITY)
        return UINT32_MAX;
    Effect *e = &world_effects[index];

    e->type = type;
    memcpy(e->position, position, 12);
    if (velocity) {
        memcpy(e->velocity, velocity, 12);
    } else {
        e->velocity[0] = e->velocity[1] = e->velocity[2] = 0.0f;
    }

    switch (type) {
    case EFFECT_BULLET_HOLE:
        e->lifetime = 0xFFFF;
        e->gravity = 0.0f;
        e->size = size;
        e->size_2 = size;
        e->drag = 0.0f;
        math_vec3_normalize(e->normal, velocity);
        math_frame_across(e->normal, e->side, e->up);
        for (int axis = 0; axis < 3; axis++)
            e->position[axis] = e->normal[axis] * 0.015625f + e->position[axis];
        break;
    case EFFECT_BLOOD_DROP:
        e->lifetime = 0xFFFF;
        e->size = size * 0.25f;
        e->size_2 = size * 0.5f;
        e->gravity = 0.0027222224f;
        e->drag = 0.9975f;
        break;
    case EFFECT_SPARK:
        e->lifetime = 60;
        e->size = size;
        e->size_2 = size;
        e->gravity = 0.0027222224f;
        e->drag = 0.975f;
        break;
    case EFFECT_TRACER:
        e->lifetime = 3;
        e->gravity = 0.0f;
        e->size = size;
        e->size_2 = size;
        e->drag = 0.875f;
        break;
    }
    world_effect_count = index + 1;
    return (uint32_t)index;
}

/* ---- moving effects (0x1401597F0) ------------------------------------------ */

extern int rand(void);                          /* the original's own, 0x14023B1B0 */
/* Whether the line from `from` to `to` hits the level; the hit is left in
   collision_hit. */
extern int sub_1400DC050(float *from, float *to, int unknown);
/* Turns an EFFECT_3 mark's frame about `axis` by `amount`. */
extern void sub_14012BD30(float *frame, float *axis, float amount);

static float absolute_value(float value)
{
    uint32_t bits;
    memcpy(&bits, &value, 4);
    bits &= 0x7FFFFFFFu;
    memcpy(&value, &bits, 4);
    return value;
}

/* Applies drag and gravity to an effect's velocity and moves it; `from` gets
   where it was. */
static void fly(Effect *e, float from[3])
{
    float drag = e->drag;
    e->velocity[0] = drag * e->velocity[0];
    e->velocity[1] = (e->velocity[1] - e->gravity) * drag;
    e->velocity[2] = drag * e->velocity[2];
    for (int axis = 0; axis < 3; axis++) {
        from[axis] = e->position[axis];
        e->position[axis] = e->velocity[axis] + from[axis];
    }
}

/* Puts a point that hit the level just off the surface it hit. */
static void rest_on_hit(float point[3], float offset)
{
    for (int axis = 0; axis < 3; axis++)
        point[axis] = collision_hit.normal[axis] * offset + collision_hit.point[axis];
}

/* Bounces a velocity off the hit surface: the speed into it comes back
   1.125 times over, the speed along it is cut by friction (to at most 0.7
   of the speed into it; this limit is worked out in double precision, as
   in the original), and `keep` of the result is kept. */
static void bounce(float velocity[3], float keep)
{
    const float *n = collision_hit.normal;
    float vx = velocity[0], vy = velocity[1], vz = velocity[2];
    float into = (vy * n[1] + vx * n[0]) + n[2] * vz;
    float tx = n[0] * -into + vx, ty = n[1] * -into + vy, tz = n[2] * -into + vz;
    double along = sqrt_float((ty * ty + tx * tx) + tz * tz);
    double limit = (double)absolute_value(into) * 0.699999988079071;
    if (along > limit) {
        float scale = (float)(limit / along);
        tx *= scale;
        ty *= scale;
        tz *= scale;
    }
    float back = into * -1.125f;
    velocity[0] = ((n[0] * back + vx) - tx) * keep;
    velocity[1] = ((n[1] * back + vy) - ty) * keep;
    velocity[2] = ((n[2] * back + vz) - tz) * keep;
}

static void update_spark(Effect *e)
{
    float from[3];
    fly(e, from);
    if (sub_1400DC050(from, e->position, 0)) {
        rest_on_hit(e->position, 0.015625f);
        bounce(e->velocity, 0.9375f);
    }
}

/* EFFECT_4: three corners, each falling and bouncing; then each edge pulls
   its ends towards its rest length (against the corners' velocities from
   before this pass). */
static void update_three_points(Effect *e)
{
    for (int k = 0; k < 3; k++) {
        float *p = e->points[k], *v = e->point_velocity[k], from[3];
        v[1] = v[1] - e->gravity;
        for (int axis = 0; axis < 3; axis++) {
            from[axis] = p[axis];
            p[axis] = from[axis] + v[axis];
        }
        if (sub_1400DC050(from, p, 0)) {
            rest_on_hit(p, 0.001953125f);
            bounce(v, 0.875f);
        }
    }

    float before[3][3];
    memcpy(before, e->point_velocity, sizeof before);
    for (int k = 0; k < 3; k++) {
        int j = (k + 1) % 3;
        float dx = e->points[j][0] - e->points[k][0];
        float dy = e->points[j][1] - e->points[k][1];
        float dz = e->points[j][2] - e->points[k][2];
        float length = sqrt_float((dy * dy + dx * dx) + dz * dz);
        if (is_zero_or_nan_quiet(length)) {
            dx = dy = dz = 0.0f;
        } else {
            float inverse = 1.0f / length;
            dx *= inverse;
            dy *= inverse;
            dz *= inverse;
        }
        float pull = ((length - e->rest_length[k]) * 0.125f
                      - ((dx * before[k][0] + dy * before[k][1]) + dz * before[k][2]) * 0.25f)
                     + ((dy * before[j][1] + dx * before[j][0]) + dz * before[j][2]) * 0.25f;
        float *vk = e->point_velocity[k], *vj = e->point_velocity[j];
        vk[0] = dx * pull + vk[0];
        vk[1] = dy * pull + vk[1];
        vk[2] = dz * pull + vk[2];
        vj[0] = -pull * dx + vj[0];
        vj[1] = -pull * dy + vj[1];
        vj[2] = -pull * dz + vj[2];
    }
}

/* The corners of an effect's quad: its position, `size` across along side
   and along up. */
static void quad_corners(const Effect *e, float size, float corners[4][3])
{
    for (int axis = 0; axis < 3; axis++) {
        float near = e->side[axis] * -size + e->position[axis];
        float far = e->side[axis] * size + e->position[axis];
        float up = e->up[axis] * size, down = e->up[axis] * -size;
        corners[0][axis] = up + near;
        corners[1][axis] = far + up;
        corners[2][axis] = down + far;
        corners[3][axis] = down + near;
    }
}

static void add_blood_stain(const Effect *e)
{
    static const float uv[4][2] = {{0, 1}, {1, 1}, {1, 0}, {0, 0}};
    float corners[4][3];
    if (blood_stain_count >= EFFECT_MARK_VERTEX_CAPACITY)
        return;
    quad_corners(e, e->size, corners);
    for (int c = 0; c < 4; c++) {
        StainVertex *v = &blood_stains[blood_stain_count];
        memcpy(v->position, corners[c], 12);
        v->u = uv[c][0];
        v->v = uv[c][1];
        blood_stain_count++;
    }
}

static void add_mark(Effect *e)
{
    if (effect_mark_count >= EFFECT_MARK_VERTEX_CAPACITY)
        return;
    /* A random turn about the surface, in steps of 1/512 of a turn. */
    float angle = (float)((double)(rand() & 0xFF) * 0.012271846303085938);
    math_mat3_rotate_rows(e->frame, e->normal, angle);
    float corners[4][3];
    quad_corners(e, e->size, corners);
    for (int c = 0; c < 4; c++) {
        MarkVertex *v = &effect_marks[effect_mark_count];
        memcpy(v->position, corners[c], 12);
        memcpy(v->normal, e->normal, 12);
        effect_mark_count++;
    }
}

/* Blood drops and EFFECT_3 marks. */
static void update_falling(Effect *e)
{
    float from[3];
    fly(e, from);
    if (e->type == EFFECT_3 && e->spin > 0.0041666669f)
        sub_14012BD30(e->frame, e->rest_length, e->spin);
    int hit = sub_1400DC050(from, e->position, 0);
    int type = e->type;

    if (!hit) {
        if (type != EFFECT_3)
            memcpy(e->frame, camera_axes, sizeof e->frame);   /* face the camera */
        return;
    }
    if (type == EFFECT_3 && !(collision_hit.normal[1] > 0.0f)) {
        rest_on_hit(e->position, 0.015625f);                  /* off a wall or ceiling */
        bounce(e->velocity, 0.9375f);
        return;
    }

    /* It lies where it landed. */
    rest_on_hit(e->position, 0.015625f);
    e->velocity[0] = e->velocity[1] = e->velocity[2] = 0.0f;
    e->drag = 0.0f;
    if (type == EFFECT_BLOOD_DROP)
        e->size = (float)(rand() & 0x3F) * 0.00048828125f + 0.03125f;
    memcpy(e->normal, collision_hit.normal, 12);
    math_frame_across(e->normal, e->side, e->up);
    if (type == EFFECT_3) {
        e->lifetime = 0;
        add_mark(e);
    }
    if (e->type == EFFECT_BLOOD_DROP) {
        e->lifetime = 0;
        add_blood_stain(e);
    }
}

void world_update_effects(void)
{
    for (int i = 0; i < world_effect_count; i++) {
        Effect *e = &world_effects[i];
        if (e->type == EFFECT_SPARK)
            update_spark(e);
        if (e->type == EFFECT_4 && e->lifetime > 59400)
            update_three_points(e);
        if ((e->type == EFFECT_BLOOD_DROP || e->type == EFFECT_3) && e->drag > 0.0f)
            update_falling(e);
    }
}
