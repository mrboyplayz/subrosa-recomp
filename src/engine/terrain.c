/* The terrain: the height samples the vehicles flatten and the triangles
 * built over them. See terrain.h. The record counts are re-read at each
 * group exactly where the original reads them, so a count a write lands on
 * behaves like the original's.
 */
#include <stdint.h>
#include "arith.h"
#include "terrain.h"

/* The corner table: 24 words of corner offsets (x, y, z per corner) and 24
   index words, the original's data recovered with the client (the alias
   symbols dword_1402B34F0..dword_1402B36BC). */
extern int sr_geometry_tables[212];

unsigned int *terrain_height_update(int cell_x, int cell_y, float height)
{
    unsigned int *record = terrain_record;
    if ((uint32_t)cell_x <= 0xFFE && (uint32_t)cell_y <= 0xFFE && !terrain_frozen) {
        float *samples = terrain_heights + (cell_x + (cell_y << 12));
        if (height > samples[0])
            samples[0] = height;
        if (height > samples[1])
            samples[1] = height;
        if (height > samples[4096])
            samples[4096] = height;
        if (height > samples[4097])
            samples[4097] = height;
        if (cell_x >= terrain_flat_min_x && cell_x <= terrain_flat_max_x
            && cell_y >= terrain_flat_min_y && cell_y <= terrain_flat_max_y) {
            int32_t sum_x = cell_x + 1024;
            int32_t sum_y = cell_y + 1024;
            if ((uint32_t)sum_x <= 0xFFF && (uint32_t)sum_y <= 0xFFF) {
                int32_t quarter = (sum_x >> 2) + ((sum_y >> 2) << 10);
                terrain_quarter_masks[quarter] &= (uint16_t)~(1 << ((sum_x & 3) + 4 * (cell_y & 3)));
                return (unsigned int *)(uintptr_t)((sum_x & 3) + 4 * ((uint32_t)cell_y & 3u));
            }
        }
    }
    return record;
}

int64_t terrain_triangle_add(int layer, float offset_x, float offset_y, float offset_z,
                             float size_x, float size_y, float size_z)
{
    const float *corner = (const float *)sr_geometry_tables;   /* 24 offset words */
    const int32_t *index = &sr_geometry_tables[92];            /* 24 index words */
    int32_t *vertex_record = terrain_vertex_records + (intptr_t)layer * 2310;
    int32_t *triangle_record = terrain_triangle_records + (intptr_t)layer * 2310;
    float *vertices = (float *)&vertex_record[1];

    /* Eight corners. Corner 0's x takes the count read at the start; every
       later group re-reads the count, stores one past it, and takes the x
       index from the re-read and the y and z from the record as it stands
       (the x write may be the one a re-read sees). */
    int32_t first = vertex_record[0];
    vertices[3 * first] = (corner[0] - 0.5f) * size_x + offset_x;
    vertices[3 * (int32_t)vertex_record[0] + 1] = (corner[1] - 0.5f) * size_y + offset_y;
    vertices[3 * (int32_t)vertex_record[0] + 2] = (corner[2] - 0.5f) * size_z + offset_z;
    for (int k = 1; k < 8; k++) {
        int32_t count = vertex_record[0];
        vertex_record[0] = count + 1;
        vertices[3 * (count + 1)] = (corner[3 * k] - 0.5f) * size_x + offset_x;
        vertices[3 * (int32_t)vertex_record[0] + 1] = (corner[3 * k + 1] - 0.5f) * size_y + offset_y;
        vertices[3 * (int32_t)vertex_record[0] + 2] = (corner[3 * k + 2] - 0.5f) * size_z + offset_z;
    }
    vertex_record[0] = vertex_record[0] + 1;

    /* Six triangles over the corners just added: the index words are
       relative to the count read at the start. Triangle 0's first index
       takes the triangle count read before the corners; every later group
       re-reads it, stores one past it, and takes the first index from the
       re-read. */
    int32_t triangles = triangle_record[0];
    triangle_record[2 + 6 * triangles] = first + index[0];
    triangle_record[3 + 6 * (int32_t)triangle_record[0]] = first + index[1];
    triangle_record[4 + 6 * (int32_t)triangle_record[0]] = first + index[2];
    triangle_record[5 + 6 * (int32_t)triangle_record[0]] = first + index[3];
    triangle_record[1 + 6 * (int32_t)triangle_record[0]] = 4;
    for (int k = 1; k < 6; k++) {
        triangles = triangle_record[0];
        triangle_record[0] = triangles + 1;
        triangle_record[2 + 6 * (triangles + 1)] = first + index[4 * k];
        triangle_record[3 + 6 * (int32_t)triangle_record[0]] = first + index[4 * k + 1];
        triangle_record[4 + 6 * (int32_t)triangle_record[0]] = first + index[4 * k + 2];
        triangle_record[5 + 6 * (int32_t)triangle_record[0]] = first + index[4 * k + 3];
        triangle_record[1 + 6 * (int32_t)triangle_record[0]] = 4;
    }

    /* The next triangle's weight word is planted now, and the count grows
       past it. */
    int32_t grown = (int32_t)triangle_record[0];
    int64_t result = (int64_t)layer * 385 + grown;
    triangle_record[1 + 6 * grown] = 4;
    triangle_record[0] = triangle_record[0] + 1;
    return result;
}
