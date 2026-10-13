/* Sweeping a segment through the level: the nearest hit of from -> to among
 * the level's own surfaces, its four block layers, (optionally) 128
 * further records, and the streets' embankments, left in collision_hit.
 */
#include "arith.h"
#include "collision.h"
#include "item.h"
#include "world.h"
#include "world_streets.h"

/* ---- still recompiled code ------------------------------------------------- */

/* Each finds where from -> to first meets its kind of geometry: the point,
   the surface normal and the fraction along the segment. */

/* 128 records of 0x54 bytes from 0x1A796F380 the sweep also tests when asked;
   a hit copies three words of the record into the hit. */
#define collision_record_active(i) SR_GLOBAL(int32_t, 0x1A796F380ULL + 0x54ULL * (uint64_t)(int64_t)(i))
#define collision_record_words(i) (&SR_GLOBAL(uint32_t, 0x1A796F394ULL + 0x54ULL * (uint64_t)(int64_t)(i)))

/* A level layer takes part in sweeps while set. */
#define level_layer_active(layer) item_collision_layer_active(layer)

/* The triangle list the street pass hands to 0x1400DA300; the original
   clears the word after it too. */
typedef struct LevelTriangleList {
    StreetTriangleList list;
    int32_t unknown_c004;
} LevelTriangleList;

/* point[3], normal[3], fraction: as the three helpers write them. */
static void take_hit(const float point[3], const float normal[3], float fraction)
{
    collision_hit.point[0] = point[0];
    collision_hit.point[1] = point[1];
    collision_hit.point[2] = point[2];
    collision_hit.normal[0] = normal[0];
    collision_hit.normal[1] = normal[1];
    collision_hit.normal[2] = normal[2];
    collision_hit.fraction = fraction;
}

static void clear_hit_words(void)
{
    collision_hit.unknown_20[0] = 0;
    collision_hit.unknown_20[1] = 0;
    collision_hit.unknown_20[2] = 0;
}

/* The street embankments (triangle range 2) whose cells and bounds the
   segment's box meets. The bounds test differs from 0x140188900's on NaN: a
   NaN on the box's max side rejects, on its min side accepts. */
static void street_triangles(LevelTriangleList *t, const float low[3], const float high[3])
{
    int found[64];
    int found_count = 0;
    int first_column = truncate_float(low[0] * 0.015625f);
    int last_column = truncate_float(high[0] * 0.015625f);
    int first_row = truncate_float(low[2] * 0.015625f);
    int last_row = truncate_float(high[2] * 0.015625f);

    t->list.count = 0;
    t->unknown_c004 = 0;
    if (first_row <= last_row) {
        int64_t row = first_row;
        uint64_t rows = (uint32_t)((uint32_t)last_row - (uint32_t)first_row + 1u);

        do {
            if ((uint64_t)row < STREET_CELLS_ACROSS && first_column <= last_column) {
                int64_t column = first_column;
                uint64_t columns = (uint32_t)((uint32_t)last_column - (uint32_t)first_column + 1u);

                do {
                    if ((uint64_t)column < STREET_CELLS_ACROSS) {
                        const StreetCell *cell = &world_street_cells[row * STREET_CELLS_ACROSS + column];
                        const int32_t *entry = (const int32_t *)(const void *)cell + 1;
                        int64_t count = cell->count;

                        for (int64_t j = 0; j < count; j++)
                            if (found_count < 64)
                                found[found_count++] = entry[j];
                    }
                    column++;
                } while (--columns);
            }
            row++;
        } while (--rows);
    }

    for (int i = 0; i < found_count; i++) {
        const Street *s = &world_streets[found[i]];

        if (!(high[0] >= s->bounds_min[0]) || !(high[1] >= s->bounds_min[1]) || !(high[2] >= s->bounds_min[2]))
            continue;
        if (low[0] > s->bounds_max[0] || low[1] > s->bounds_max[1] || low[2] > s->bounds_max[2])
            continue;
        world_street_triangles_in_box(&t->list, low, high, found[i], 2);
    }
}

int collision_segment_triangles(float hit[7], const StreetTriangleList *triangles, const float from[3],
                                const float to[3])
{
    hit[6] = 1.0f;
    if (triangles->count <= 0)
        return 0;
    for (int i = 0; i < triangles->count; i++) {
        const float *a = triangles->triangle[i].corner[0];
        const float *b = triangles->triangle[i].corner[1];
        const float *c = triangles->triangle[i].corner[2];
        float e1x = b[0] - a[0], e1y = b[1] - a[1], e1z = b[2] - a[2];
        float e2x = c[0] - a[0], e2y = c[1] - a[1], e2z = c[2] - a[2];
        float normal[3], point[3], fraction, length;

        normal[0] = e2y * e1z - e2z * e1y;
        normal[1] = e2z * e1x - e2x * e1z;
        normal[2] = e2x * e1y - e2y * e1x;
        length = sqrt_float((normal[1] * normal[1] + normal[0] * normal[0]) + normal[2] * normal[2]);
        if (is_zero_or_nan_quiet(length)) {
            normal[0] = normal[1] = normal[2] = 0.0f;
        } else {
            float inverse = 1.0f / length;
            normal[0] *= inverse;
            normal[2] *= inverse;
            normal[1] *= inverse;
        }
        if (!collision_line_triangle(point, normal, &fraction, from, to, a, b, c) || fraction >= hit[6])
            continue;
        hit[0] = point[0];
        hit[2] = point[2];
        hit[1] = point[1];
        hit[3] = normal[0];
        hit[4] = normal[1];
        hit[5] = normal[2];
        hit[6] = fraction;
    }
    return !(hit[6] >= 1.0f);
}

/* 0x1400DC050 */
int collision_sweep_level(float from[3], float to[3], int with_records)
{
    static LevelTriangleList triangles;
    float hit[8], point[3], normal[3], fraction;
    float low[3], high[3];

    collision_hit.fraction = 1.0f;
    item_hit_unknown_7c = -1;
    item_hit_block_part = -1;
    item_hit_layer = -1;

    if (collision_sweep_terrain(hit, from, to) && collision_hit.fraction > hit[6]) {
        clear_hit_words();
        take_hit(hit, hit + 3, hit[6]);
        item_hit_layer = -1;
    }

    for (int layer = 0; layer < 4; layer++) {
        if (!level_layer_active(layer) || !collision_sweep_layer(point, normal, &fraction, layer, from, to))
            continue;
        if (!(fraction >= collision_hit.fraction)) {
            take_hit(point, normal, fraction);
            clear_hit_words();
            item_hit_layer = layer;
        }
    }

    if (with_records)
        for (int i = 0; i < 128; i++) {
            if (!collision_record_active(i) || !collision_sweep_model(point, normal, &fraction, i, from, to))
                continue;
            if (!(fraction >= collision_hit.fraction)) {
                const uint32_t *words = collision_record_words(i);
                take_hit(point, normal, fraction);
                collision_hit.unknown_20[0] = words[0];
                collision_hit.unknown_20[2] = words[2];
                collision_hit.unknown_20[1] = words[1];
                item_hit_layer = -1;
            }
        }

    /* The segment's box, with the original's MAXSS / MINSS operand order. */
    high[0] = from[0] >= to[0] ? from[0] : to[0];
    low[0] = from[0] < to[0] ? from[0] : to[0];
    high[2] = to[2] > from[2] ? to[2] : from[2];
    low[2] = to[2] < from[2] ? to[2] : from[2];
    low[1] = to[1] < from[1] ? to[1] : from[1];
    high[1] = to[1] > from[1] ? to[1] : from[1];
    street_triangles(&triangles, low, high);

    if (collision_segment_triangles(hit, &triangles.list, from, to) && collision_hit.fraction > hit[6]) {
        clear_hit_words();
        take_hit(hit, hit + 3, hit[6]);
        item_hit_layer = -1;
    }
    return !(collision_hit.fraction >= 1.0f);
}
