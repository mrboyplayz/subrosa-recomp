/* Sweeping a segment against the placed models: 128 records at
 * 0x1A796F380, each an instance (position, rotation) of a model at
 * 0x1A75FE780 made of up to 256 vertices and faces of three or four
 * corners. A hit on a face with a texture also gives the hit's place on
 * that texture as whole steps: 8 across the face's first edge, 4 along the
 * edge to its fourth corner.
 */
#include "arith.h"
#include "collision.h"
#include "item.h"

typedef struct ModelFace {
    int32_t corner_count;                /* 4: a quad, tested as triangles a b c and a c d */
    int32_t vertex[4];
    int32_t texture;                     /* above 0: hits report texture steps */
} ModelFace;

/* 0x1A75FE780, 9,240 bytes each. */
typedef struct CollisionModel {
    float radius;                        /* of a sphere around the model's origin holding it */
    uint32_t unknown_4;
    float vertex[256][3];
    int32_t face_count;
    ModelFace face[256];
    uint8_t unknown_240c[9240 - 0x240C];
} CollisionModel;

/* 0x1A796F380, 0x54 bytes each. */
typedef struct PlacedModel {
    int32_t active;
    int32_t model;
    float position[3];
    uint32_t hit_words[3];               /* copied into collision_hit.unknown_20 on a hit */
    float rotation[9];
    uint8_t unknown_44[0x54 - 0x44];
} PlacedModel;

_Static_assert(sizeof(CollisionModel) == 9240, "CollisionModel size");
_Static_assert(__builtin_offsetof(CollisionModel, face_count) == 0xC08, "CollisionModel layout");
_Static_assert(sizeof(PlacedModel) == 0x54, "PlacedModel size");

#define collision_models (&SR_GLOBAL(CollisionModel, 0x1A75FE780ULL))
#define placed_models (&SR_GLOBAL(PlacedModel, 0x1A796F380ULL))
/* Texture steps of the last textured hit; u is -1 for a face without one. */
#define collision_hit_texture_u SR_GLOBAL(int32_t, 0x151A8490CULL)
#define collision_hit_texture_v SR_GLOBAL(int32_t, 0x151A84910ULL)

/* The unit normal of triangle a b c as 0x1400DA300 works it out (zero when
   its length is 0 or NaN). */
static void face_normal(float out[3], const float a[3], const float b[3], const float c[3])
{
    float e1x = b[0] - a[0], e1y = b[1] - a[1], e1z = b[2] - a[2];
    float e2x = c[0] - a[0], e2y = c[1] - a[1], e2z = c[2] - a[2];
    float length;

    out[0] = e2y * e1z - e2z * e1y;
    out[1] = e2z * e1x - e2x * e1z;
    out[2] = e2x * e1y - e2y * e1x;
    length = sqrt_float((out[1] * out[1] + out[0] * out[0]) + out[2] * out[2]);
    if (is_zero_or_nan_quiet(length)) {
        out[0] = out[1] = out[2] = 0.0f;
    } else {
        float inverse = 1.0f / length;
        out[0] = inverse * out[0];
        out[1] = inverse * out[1];
        out[2] = inverse * out[2];
    }
}

/* Direction and length of the edge from a to b (zero direction when the
   length is 0 or NaN). */
static float edge(float out[3], const float a[3], const float b[3])
{
    float x = b[0] - a[0], y = b[1] - a[1], z = b[2] - a[2];
    float length = sqrt_float((y * y + x * x) + z * z);

    if (is_zero_or_nan_quiet(length)) {
        out[0] = out[1] = out[2] = 0.0f;
    } else {
        float inverse = 1.0f / length;
        out[0] = inverse * x;
        out[1] = inverse * y;
        out[2] = inverse * z;
    }
    return length;
}

static void texture_steps(const float hit[3], const float a[3], const float b[3], const float d[3])
{
    float u[3], v[3], u_length, v_length;
    float hx = hit[0] - a[0], hy = hit[1] - a[1], hz = hit[2] - a[2];

    u_length = edge(u, a, b);
    v_length = edge(v, a, d);
    collision_hit_texture_u = truncate_float(((hy * u[1] + hx * u[0]) + hz * u[2]) * 8.0f / u_length);
    collision_hit_texture_v = truncate_float(((v[1] * hy + hx * v[0]) + v[2] * hz) * 4.0f / v_length);
}

/* The box around the model, widened by its radius, misses the segment on an
   axis when both ends lie beyond the same face. NaN as the original's
   COMISS branches have it. */
static int outside(float from, float to, float centre, float radius)
{
    float low = centre - radius, high;

    if (!(from >= low) && low > to)
        return 1;
    high = centre + radius;
    return from > high && !(high >= to);
}

/* The sweep itself, for model `model_index` at position p turned by r. */
static int sweep_model(float point[3], float normal[3], float *fraction, int model_index, const float p[3],
                       const float r[9], const float from[3], const float to[3])
{
    const CollisionModel *model = &collision_models[model_index];
    /* The quad's fourth corner. The original keeps it across faces in stack
       slots it never initialises: a textured triangle before the first quad
       reads whatever was there. */
    float d[3] = { 0.0f, 0.0f, 0.0f };

    if (outside(from[0], to[0], p[0], model->radius) || outside(from[1], to[1], p[1], model->radius) ||
        outside(from[2], to[2], p[2], model->radius))
        return 0;
    /* (the original tests all three "low" sides before the "high" ones; the
       result is the same) */
    *fraction = 1.0f;
    if (model->face_count <= 0)
        return 0;

    for (int f = 0; f < model->face_count; f++) {
        const ModelFace *face = &model->face[f];
        const float *v0 = model->vertex[face->vertex[0]];
        const float *v1 = model->vertex[face->vertex[1]];
        const float *v2 = model->vertex[face->vertex[2]];
        float a[3], b[3], c[3], n[3], local_a[3], local_b[3], local_c[3], hit[3], t;

        /* corners in world axes: rotated (as a row vector times the rotation) */
        local_a[0] = (v0[1] * r[3] + v0[0] * r[0]) + v0[2] * r[6];
        local_a[1] = (v0[1] * r[4] + v0[0] * r[1]) + v0[2] * r[7];
        local_a[2] = (v0[1] * r[5] + v0[0] * r[2]) + v0[2] * r[8];
        local_b[0] = (v1[1] * r[3] + v1[0] * r[0]) + v1[2] * r[6];
        local_b[1] = (v1[1] * r[4] + v1[0] * r[1]) + v1[2] * r[7];
        local_b[2] = (v1[1] * r[5] + v1[0] * r[2]) + v1[2] * r[8];
        local_c[0] = (v2[1] * r[3] + v2[0] * r[0]) + v2[2] * r[6];
        local_c[1] = (v2[1] * r[4] + v2[0] * r[1]) + v2[2] * r[7];
        local_c[2] = (v2[1] * r[5] + v2[0] * r[2]) + v2[2] * r[8];
        face_normal(n, local_a, local_b, local_c);
        for (int k = 0; k < 3; k++) {
            a[k] = p[k] + local_a[k];
            b[k] = p[k] + local_b[k];
            c[k] = p[k] + local_c[k];
        }
        if (face->corner_count == 4) {
            const float *v3 = model->vertex[face->vertex[3]];
            d[0] = (v3[0] * r[0] + v3[1] * r[3]) + (v3[2] * r[6] + p[0]);
            d[1] = (v3[2] * r[7] + v3[0] * r[1]) + (v3[1] * r[4] + p[1]);
            d[2] = (v3[2] * r[8] + v3[0] * r[2]) + (v3[1] * r[5] + p[2]);
        }

        for (int half = 0; half < 2; half++) {
            int found;

            if (half == 0)
                found = collision_line_triangle(hit, n, &t, from, to, a, b, c);
            else if (face->corner_count == 4)
                found = collision_line_triangle(hit, n, &t, from, to, a, c, d);
            else
                break;
            if (!found || t >= *fraction)
                continue;
            point[0] = hit[0];
            point[2] = hit[2];
            point[1] = hit[1];
            normal[0] = n[0];
            normal[1] = n[1];
            normal[2] = n[2];
            *fraction = t;
            if (face->texture <= 0)
                collision_hit_texture_u = -1;
            else
                texture_steps(point, a, b, d);
        }
    }

    return !(*fraction >= 1.0f);
}

int collision_sweep_model(float point[3], float normal[3], float *fraction, int index, const float from[3],
                          const float to[3])
{
    const PlacedModel *placed = &placed_models[index];

    if (!sweep_model(point, normal, fraction, placed->model, placed->position, placed->rotation, from, to))
        return 0;
    collision_hit.unknown_20[0] = placed->hit_words[0];
    collision_hit.unknown_20[2] = placed->hit_words[2];
    collision_hit.unknown_20[1] = placed->hit_words[1];
    return 1;
}

int collision_sweep_model_at(float point[3], float normal[3], float *fraction, int model, const float position[3],
                             const float rotation[9], const float from[3], const float to[3])
{
    if (!sweep_model(point, normal, fraction, model, position, rotation, from, to))
        return 0;
    collision_hit.unknown_20[0] = 0;
    collision_hit.unknown_20[1] = 0;
    collision_hit.unknown_20[2] = 0;
    return 1;
}
