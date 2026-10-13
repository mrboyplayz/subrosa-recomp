/* A wheel against the blocks of a voxel. See collision_wheel_level.h. */
#include "collision_wheel_level.h"
#include "arith.h"
#include <string.h>

/* The corners of a unit cube, its six faces as four corners each, and the
   faces' outward normals (0x1402B34F0, 0x1402B3660, 0x1402B3550). */
static const float cube_corner[8][3] = {{0, 0, 0}, {1, 0, 0}, {1, 0, 1}, {0, 0, 1}, {0, 1, 0}, {1, 1, 0}, {1, 1, 1}, {0, 1, 1}};
static const int32_t cube_face[6][4] = {{3, 2, 1, 0}, {7, 6, 2, 3}, {4, 7, 3, 0}, {5, 4, 0, 1}, {6, 5, 1, 2}, {4, 5, 6, 7}};
static const float cube_face_normal[6][3] = {{0, -1, 0}, {0, 0, 1}, {-1, 0, 0}, {0, 0, -1}, {1, 0, 0}, {0, 1, 0}};

/* The faces of a block shape that wheels are tested against. 0x145098C00,
   0xE8 bytes per shape. */
typedef struct BlockShapeFaces {
    uint8_t unknown_0[0x48];
    const float (*vertex)[3];            /* in the voxel's units, from the voxel's corner */
    uint8_t unknown_50[0x68 - 0x50];
    int32_t quad_count;
    uint8_t unknown_6c[0x88 - 0x6C];
    const int32_t (*quad)[4];            /* vertex indices */
    const int32_t *quad_id;
    uint8_t unknown_98[0xA8 - 0x98];
    int32_t triangle_count;
    uint8_t unknown_ac[0xB0 - 0xAC];
    const int32_t (*triangle)[3];
    const int32_t *triangle_id;
    uint8_t unknown_c0[0xE8 - 0xC0];
} BlockShapeFaces;

_Static_assert(sizeof(BlockShapeFaces) == 0xE8, "BlockShapeFaces size");

#define block_shape_faces (&SR_GLOBAL(BlockShapeFaces, 0x145098C00ULL))

/* The best touch so far of a wheel against the faces of one voxel. */
typedef struct VoxelTouch {
    float *point, *normal, *distance;
    const float *centre, *axle;
    float radius;
} VoxelTouch;

/* One triangle; the nearest touch is kept, with the face's id. */
static void touch_triangle(const VoxelTouch *touch, float normal[3], const float a[3], const float b[3],
                           const float c[3], int32_t id)
{
    float point[3], distance;

    if (collision_wheel_triangle(point, normal, &distance, touch->centre, touch->axle, touch->radius, a, b, c)
        && !(distance >= *touch->distance)) {
        memcpy(touch->point, point, sizeof point);
        memcpy(touch->normal, normal, 3 * sizeof(float));
        *touch->distance = distance;
        collision_hit_face_id = id;
    }
}

int collision_wheel_cube(float point[3], float normal[3], float *distance, const float centre[3], const float axle[3],
                         float radius, const int32_t voxel[3], uint32_t faces, float scale)
{
    VoxelTouch touch = {point, normal, distance, centre, axle, radius};
    float x = (float)voxel[0], y = (float)voxel[1], z = (float)voxel[2];

    *distance = 65536.0f;
    for (int f = 0; f < 6; f++) {
        float corner[4][3], face_normal[3];

        if (!((64u << f) & faces) || !((faces >> f) & 1))
            continue;
        for (int i = 0; i < 4; i++) {
            const float *c = cube_corner[cube_face[f][i]];

            corner[i][0] = (x + c[0]) * scale;
            corner[i][1] = (y + c[1]) * scale;
            corner[i][2] = (z + c[2]) * scale;
        }
        memcpy(face_normal, cube_face_normal[f], sizeof face_normal);
        touch_triangle(&touch, face_normal, corner[0], corner[1], corner[2], f);
        memcpy(face_normal, cube_face_normal[f], sizeof face_normal);
        touch_triangle(&touch, face_normal, corner[0], corner[2], corner[3], f);
    }
    return !(*distance >= 65536.0f);
}

/* c x b at length 1 (zero without area): for b and c the two sides of a
   triangle from its first corner, its normal. */
static void corner_normal(float normal[3], const float b[3], const float c[3])
{
    float x = (c[1] * b[2]) - (c[2] * b[1]);
    float y = (c[2] * b[0]) - (c[0] * b[2]);
    float z = (c[0] * b[1]) - (c[1] * b[0]);
    float length = sqrt_float(((y * y) + (x * x)) + (z * z));

    if (is_zero_or_nan_quiet(length)) {
        normal[0] = normal[1] = normal[2] = 0.0f;
    } else {
        float inverse = 1.0f / length;

        normal[0] = x * inverse;
        normal[1] = y * inverse;
        normal[2] = z * inverse;
    }
}

int collision_wheel_shape(float point[3], float normal[3], float *distance, const float centre[3], const float axle[3],
                          float radius, const int32_t voxel[3], uint16_t shape_index, float scale)
{
    const BlockShapeFaces *shape = &block_shape_faces[shape_index];
    VoxelTouch touch = {point, normal, distance, centre, axle, radius};
    float x = (float)voxel[0], y = (float)voxel[1], z = (float)voxel[2];

    *distance = 65536.0f;
    for (int32_t t = 0; t < shape->triangle_count; t++) {
        float corner[3][3], b[3], c[3], face_normal[3];

        for (int i = 0; i < 3; i++) {
            const float *v = shape->vertex[shape->triangle[t][i]];

            corner[i][0] = (x + v[0]) * scale;
            corner[i][1] = (y + v[1]) * scale;
            corner[i][2] = (z + v[2]) * scale;
        }
        for (int k = 0; k < 3; k++) {
            b[k] = corner[1][k] - corner[0][k];
            c[k] = corner[2][k] - corner[0][k];
        }
        corner_normal(face_normal, b, c);
        touch_triangle(&touch, face_normal, corner[0], corner[1], corner[2], shape->triangle_id[t]);
    }
    for (int32_t q = 0; q < shape->quad_count; q++) {
        float corner[4][3], b[3], c[3], d[3], face_normal[3];

        for (int i = 0; i < 4; i++) {
            const float *v = shape->vertex[shape->quad[q][i]];

            corner[i][0] = (x + v[0]) * scale;
            corner[i][1] = (y + v[1]) * scale;
            corner[i][2] = (z + v[2]) * scale;
        }
        for (int k = 0; k < 3; k++) {
            b[k] = corner[1][k] - corner[0][k];
            c[k] = corner[2][k] - corner[0][k];
            d[k] = corner[3][k] - corner[0][k];
        }
        corner_normal(face_normal, b, c);
        touch_triangle(&touch, face_normal, corner[0], corner[1], corner[2], shape->quad_id[q]);
        corner_normal(face_normal, c, d);
        touch_triangle(&touch, face_normal, corner[0], corner[2], corner[3], shape->quad_id[q]);
    }
    return !(*distance >= 65536.0f);
}

/* ---- a block layer ------------------------------------------------------------ */

#define layer_float(layer, offset) \
    (&SR_GLOBAL(float, 0x15ADA9240ULL + WORLD_LEVEL_LAYER_STRIDE * (uint64_t)(int64_t)(layer) + (offset)))
#define layer_origin(layer) layer_float(layer, 0x4)
#define layer_rotation(layer) layer_float(layer, 0x10)
#define layer_cell_size(layer) (*layer_float(layer, 0x40))
#define layer_cells_per_unit(layer) (*layer_float(layer, 0x44))
#define layer_bounds_min(layer) layer_float(layer, 0x50)
#define layer_bounds_max(layer) layer_float(layer, 0x5C)

/* More of the shared hit record: the voxel and the shape entry of a touched
   shape, and the model and part fields a shape touch clears. */
#define hit_voxel (&SR_GLOBAL(int32_t, 0x151A848D8ULL))
#define hit_shape_entry SR_GLOBAL(uint32_t, 0x151A848F0ULL)
#define hit_model SR_GLOBAL(int32_t, 0x151A848FCULL)
#define hit_part SR_GLOBAL(int32_t, 0x151A84908ULL)

#define SHAPE_ENTRY_KIND 0xE0000000u
#define SHAPE_ENTRY_CUBE 0x40000000u         /* the low bits say which faces are solid */
#define SHAPE_ENTRY_SHAPE 0x80000000u        /* the low 16 bits are a block shape */
#define SHAPE_ENTRY_ELSEWHERE 0xC0000000u    /* the block is held by a voxel x, z, y bytes back */

/* Where voxel x, y, z of the layer keeps its entries: the index into the
   block records' tables, or -1 when the voxel is outside the layer or has
   no record. */
static int64_t voxel_entry(int layer, int32_t x, int32_t y, int32_t z)
{
    const int32_t *table;
    int32_t slot, record;

    if (x < 0 || x >= (int32_t)((uint32_t)world_level_chunks(layer, 0) << 6) || y < 0
        || y >= (int32_t)((uint32_t)world_level_chunks(layer, 1) << 6) || z < 0
        || z >= (int32_t)((uint32_t)world_level_chunks(layer, 2) << 6))
        return -1;
    memcpy(&table, world_level_chunk_table_address(layer), sizeof table);
    slot = table[add_int(x >> 6, multiply_int(world_level_chunks(layer, 0),
                                              add_int(z >> 6, multiply_int(world_level_chunks(layer, 2), y >> 6))))];
    if (slot == -1)
        return -1;
    record = world_level_cells(layer, slot)[((x >> 3) & 7) + 8 * ((z >> 3) & 7) + 64 * ((y >> 3) & 7)];
    if (record == -1)
        return -1;
    return (int64_t)record * 0x1B12 + ((x & 7) + 8 * ((z & 7) + 8 * (y & 7)));
}

typedef struct LayerTouch {
    float *point, *normal, *distance;    /* the best so far, in the world's frame */
    int layer;
    float centre[3];                     /* in the layer's frame */
    const float *axle;
    float radius;
} LayerTouch;

/* A touch found in the layer's frame is taken back to the world's and kept
   when it is nearer than the best. */
static int keep_touch(const LayerTouch *t, int touched, const float point[3], const float normal[3], float distance)
{
    const float *r = layer_rotation(t->layer), *origin = layer_origin(t->layer);

    if (!touched || distance >= *t->distance)
        return 0;
    t->point[0] = ((r[6] * point[2]) + (r[0] * point[0])) + ((r[3] * point[1]) + origin[0]);
    t->point[1] = ((r[4] * point[1]) + origin[1]) + ((r[7] * point[2]) + (r[1] * point[0]));
    t->point[2] = ((r[8] * point[2]) + (r[2] * point[0])) + ((r[5] * point[1]) + origin[2]);
    t->normal[0] = ((r[3] * normal[1]) + (r[0] * normal[0])) + (r[6] * normal[2]);
    t->normal[1] = ((r[4] * normal[1]) + (r[1] * normal[0])) + (r[7] * normal[2]);
    t->normal[2] = ((r[2] * normal[0]) + (r[5] * normal[1])) + (r[8] * normal[2]);
    *t->distance = distance;
    return 1;
}

int collision_wheel_block_layer(float point[3], float normal[3], float *distance, int layer, const float centre[3],
                                const float axle[3], float radius)
{
    const float *bounds_min = layer_bounds_min(layer), *bounds_max = layer_bounds_max(layer);
    const float *origin = layer_origin(layer), *r = layer_rotation(layer);
    LayerTouch touch = {point, normal, distance, layer, {0.0f, 0.0f, 0.0f}, axle, radius};
    float per_unit, x, y, z, part[3][2];
    int32_t first[3], last[3];

    *distance = 65536.0f;
    for (int k = 0; k < 3; k++)
        if (!(centre[k] + radius >= bounds_min[k]))
            return 0;
    for (int k = 0; k < 3; k++)
        if (centre[k] - radius > bounds_max[k])
            return 0;

    x = centre[0] - origin[0];
    y = centre[1] - origin[1];
    z = centre[2] - origin[2];
    for (int k = 0; k < 3; k++) {
        part[k][0] = (x * r[3 * k]) + (y * r[3 * k + 1]);
        part[k][1] = z * r[3 * k + 2];
        touch.centre[k] = part[k][0] + part[k][1];
    }
    per_unit = layer_cells_per_unit(layer);
    for (int k = 0; k < 3; k++) {
        first[k] = truncate_float(((part[k][0] + part[k][1]) - radius) * per_unit);
        last[k] = truncate_float(((radius + part[k][1]) + part[k][0]) * per_unit);
    }

    for (int64_t vy = first[1]; vy <= last[1]; vy++) {
        for (int64_t vz = first[2]; vz <= last[2]; vz++) {
            for (int64_t vx = first[0]; vx <= last[0]; vx++) {
                int32_t voxel[3] = {(int32_t)vx, (int32_t)vy, (int32_t)vz};
                int64_t entry = voxel_entry(layer, voxel[0], voxel[1], voxel[2]);
                float found[3], found_normal[3], found_distance;
                uint32_t word;
                int touched;

                if (entry == -1)
                    continue;

                word = world_block_record_unknown_8(0)[entry];
                if ((word & SHAPE_ENTRY_KIND) == SHAPE_ENTRY_CUBE) {
                    touched = collision_wheel_cube(found, found_normal, &found_distance, touch.centre, axle, radius,
                                                   voxel, word, layer_cell_size(layer));
                    if (keep_touch(&touch, touched, found, found_normal, found_distance))
                        collision_layer_block_info = (int32_t)world_block_face_word_at(
                            (uint32_t)layer, (uint32_t)voxel[0], (uint32_t)voxel[1], (uint32_t)voxel[2], collision_hit_face_id);
                } else if ((word & SHAPE_ENTRY_KIND) == SHAPE_ENTRY_SHAPE) {
                    if (collision_wheel_shape(found, found_normal, &found_distance, touch.centre, axle, radius, voxel,
                                              (uint16_t)word, layer_cell_size(layer))
                        && !(found_distance >= *distance)) {
                        hit_shape_entry = word;
                        collision_hit_layer = layer;
                        hit_voxel[0] = voxel[0];
                        hit_voxel[1] = voxel[1];
                        hit_voxel[2] = voxel[2];
                        hit_model = -1;
                        hit_part = -1;
                        keep_touch(&touch, 1, found, found_normal, found_distance);
                        collision_layer_block_info = (int32_t)world_block_face_word_at(
                            (uint32_t)layer, (uint32_t)voxel[0], (uint32_t)voxel[1], (uint32_t)voxel[2], collision_hit_face_id);
                    }
                } else if ((word & SHAPE_ENTRY_KIND) == SHAPE_ENTRY_ELSEWHERE) {
                    int32_t holder[3] = {subtract_int(voxel[0], (int32_t)(word & 0xFF)),
                                         subtract_int(voxel[1], (int32_t)((word >> 16) & 0xFF)),
                                         subtract_int(voxel[2], (int32_t)((word >> 8) & 0xFF))};
                    uint32_t shape = world_block_unknown_8_at((uint32_t)layer, (uint32_t)holder[0], (uint32_t)holder[1],
                                                              (uint32_t)holder[2]);

                    touched = collision_wheel_shape(found, found_normal, &found_distance, touch.centre, axle, radius,

                                                    holder, (uint16_t)shape, layer_cell_size(layer));

                    if (keep_touch(&touch, touched, found, found_normal, found_distance))
                        collision_layer_block_info = (int32_t)world_block_face_word_at(
                            (uint32_t)layer, (uint32_t)holder[0], (uint32_t)holder[1], (uint32_t)holder[2],
                            collision_hit_face_id);
                }

                word = world_block_record_layout(0)[entry];
                if ((word & SHAPE_ENTRY_KIND) == SHAPE_ENTRY_SHAPE) {
                    touched = collision_wheel_shape(found, found_normal, &found_distance, touch.centre, axle, radius,
                                                    voxel, (uint16_t)word, layer_cell_size(layer));
                    if (keep_touch(&touch, touched, found, found_normal, found_distance))
                        collision_layer_block_info = (int32_t)world_block_unknown_3808_at(
                            (uint32_t)layer, (uint32_t)voxel[0], (uint32_t)voxel[1], (uint32_t)voxel[2], collision_hit_face_id);
                } else if ((word & SHAPE_ENTRY_KIND) == SHAPE_ENTRY_ELSEWHERE) {
                    int32_t holder[3] = {subtract_int(voxel[0], (int32_t)(word & 0xFF)),
                                         subtract_int(voxel[1], (int32_t)((word >> 16) & 0xFF)),
                                         subtract_int(voxel[2], (int32_t)((word >> 8) & 0xFF))};
                    uint32_t shape = world_block_layout_at((uint32_t)layer, (uint32_t)holder[0], (uint32_t)holder[1],
                                                           (uint32_t)holder[2]);

                    touched = collision_wheel_shape(found, found_normal, &found_distance, touch.centre, axle, radius,

                                                    holder, (uint16_t)shape, layer_cell_size(layer));

                    if (keep_touch(&touch, touched, found, found_normal, found_distance))
                        collision_layer_block_info = (int32_t)world_block_unknown_3808_at(
                            (uint32_t)layer, (uint32_t)holder[0], (uint32_t)holder[1], (uint32_t)holder[2],
                            collision_hit_face_id);
                }
            }
        }
    }
    return 65536.0f > *distance;
}
