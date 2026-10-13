/* Building block shapes from their source: the scratch shape the loader
 * fills (points, two vector arrays, quads with flag words) and the steps
 * that adjust it before it is copied into a block shape.
 */
#include "world.h"
#include <string.h>
#include "crt.h"

/* ---- still recompiled code ------------------------------------------------- */

extern long long sub_14001B5C0(int turn, int side_code);
extern long long sub_140001F20(float *points, float *coordinates, int steps_x, int order_x, int steps_y,
                               int order_y, int flags);

/* ---- the scratch shape ---------------------------------------------------- */

#define build_point_count SR_GLOBAL(int32_t, 0x1510AB760ULL)
#define build_points (&SR_GLOBAL(float, 0x1511AB764ULL))       /* x y z each */
#define build_vectors_a (&SR_GLOBAL(float, 0x1511DB764ULL))    /* x y z per point */
#define build_vectors_b (&SR_GLOBAL(float, 0x15120B764ULL))
#define build_coordinates (&SR_GLOBAL(float, 0x15123B764ULL))  /* u v (and an unused third) per point */
#define build_quad_count SR_GLOBAL(int32_t, 0x1512DB764ULL)
#define build_quads (&SR_GLOBAL(int32_t, 0x1512DB768ULL))       /* four point indices each */
/* Per quad: bits 0-11 the texture (1-4 turned versions), bits 12-13 a quarter
   turn, bits 16-19 the cube side (1..6, 0: none). */
#define build_quad_flags (&SR_GLOBAL(uint32_t, 0x15131B768ULL))
#define build_quad_sides (&SR_GLOBAL(int32_t, 0x15132B768ULL))  /* outer quads: the side they lie on */
#define build_quad_unknown (&SR_GLOBAL(int32_t, 0x15133B768ULL))
/* Quad slot 1024 doubles as the swap space when outer quads are moved to the
   front (the original's choice: with more than 1024 quads it clobbers one). */
#define BUILD_SWAP_SLOT 1024
#define build_extra_count SR_GLOBAL(int32_t, 0x15138B768ULL)
#define build_extra_a (&SR_GLOBAL(uint8_t, 0x15138B76CULL))      /* 12 bytes each */
#define build_extra_b (&SR_GLOBAL(uint8_t, 0x1513EB770ULL))      /* 4 bytes each */
#define build_box_count SR_GLOBAL(int32_t, 0x15155CFB4ULL)
#define build_boxes (&SR_GLOBAL(int32_t, 0x15155CFCCULL))        /* 20 words each, the first 12 kept */

/* Block shapes, 0xE8 bytes each from 0x145098C00. */
#define shape_field(shape, type, offset) \
    SR_GLOBAL(type, 0x145098C00ULL + 0xE8ULL * (uint64_t)(int64_t)(shape) + (offset))
#define shape_point_count(shape) shape_field(shape, int32_t, 0x40)
#define shape_points(shape) shape_field(shape, float *, 0x48)
#define shape_vectors_a(shape) shape_field(shape, float *, 0x50)
#define shape_vectors_b(shape) shape_field(shape, float *, 0x58)
#define shape_coordinates(shape) shape_field(shape, float *, 0x60)
#define shape_quad_count(shape) shape_field(shape, int32_t, 0x68)
#define shape_outer_count(shape) shape_field(shape, int32_t, 0x6C)
#define shape_side_mask(shape, side) shape_field(shape, uint32_t, 0x70 + 4 * (side))
#define shape_quads(shape) shape_field(shape, int32_t *, 0x88)
#define shape_quad_flags(shape) shape_field(shape, uint32_t *, 0x90)
#define shape_quad_unknown(shape) shape_field(shape, int32_t *, 0x98)
#define shape_quad_sides(shape) shape_field(shape, int32_t *, 0xA0)
#define shape_extra_count(shape) shape_field(shape, int32_t, 0xA8)
#define shape_extra_a(shape) shape_field(shape, void *, 0xB0)
#define shape_extra_b(shape) shape_field(shape, void *, 0xB8)
#define shape_box_count(shape) shape_field(shape, int32_t, 0xD8)
#define shape_boxes(shape) shape_field(shape, int32_t *, 0xE0)

/* A block shape's size in voxels (x, y, z at shape + 0xC0). */
#define shape_size(shape, axis) SR_GLOBAL(int32_t, 0x145098CC0ULL + 0xE8ULL * (uint64_t)(int64_t)(shape) + 4ULL * (uint64_t)(axis))

#define patch_points (&SR_GLOBAL(float, 0x14500A5C0ULL))
#define patch_coordinates (&SR_GLOBAL(float, 0x14500A680ULL))

/* The next of four turned textures: 1 -> 2 -> 3 -> 4 -> 1, others unchanged. */
static uint32_t next_turned_texture(uint32_t texture)
{
    if (texture - 1 <= 2)
        return texture + 1;
    return texture == 4 ? 1 : texture;
}

void world_shape_build_turn(int shape, const int32_t size[3])
{
    float across;

    shape_size(shape, 0) = size[2];
    shape_size(shape, 1) = size[1];
    shape_size(shape, 2) = size[0];
    across = (float)size[2];
    for (int i = 0; i < build_point_count; i++) {
        float *p = &build_points[3 * i], *a = &build_vectors_a[3 * i], *b = &build_vectors_b[3 * i];
        float x = p[0], ax = a[0], bx = b[0];

        p[0] = across - p[2];
        p[2] = x;
        a[0] = -a[2];
        a[2] = ax;
        b[0] = -b[2];
        b[2] = bx;
    }

    for (int q = 0; q < build_quad_count; q++) {
        uint32_t *flags = &build_quad_flags[q];
        uint32_t f = *flags;

        /* Top and bottom faces turn their texture a quarter turn. */
        if ((((f & 0xF0000) - 0x30000) & 0xFFFEFFFF) == 0) {
            f = (f & 0xFFFF0FFF) | ((uint32_t)(((int32_t)f >> 12) + 1) & 3) << 12;
            *flags = f;
        }
        if (!(f & 0xF0000)) {
            f &= 0xFFFF;
            *flags = f;
            if (f - 1 <= 2) {
                f = f + 1;
                *flags = f;
            } else if (f == 4) {
                *flags = 1;
                continue;
            }
        }
        /* The four upright sides move round: 6 -> 1 -> 5 -> 2 -> 6. */
        switch (f & 0xF0000) {
        case 0x60000:
            *flags = next_turned_texture(f & 0xFFFF) | 0x10000;
            break;
        case 0x10000:
            *flags = next_turned_texture(f & 0xFFFF) | 0x50000;
            break;
        case 0x50000:
            *flags = next_turned_texture(f & 0xFFFF) | 0x20000;
            break;
        case 0x20000:
            *flags = next_turned_texture(f & 0xFFFF) | 0x60000;
            break;
        }
    }
}

/* Corner of the patch grid (row, column). */
static float *grid_point(int row, int column)
{
    return &patch_points[3 * (4 * row + column)];
}

static void set_corner(int row, int column, float x, float y, float z)
{
    float *p = grid_point(row, column);
    p[0] = x;
    p[1] = y;
    p[2] = z;
}

void world_shape_build_slab_trimmed(int kind, const float offset[3], uint32_t trim)
{
    uint32_t code;

    if (kind == 0) {
        /* a floor slab, 1/16 high */
        set_corner(0, 0, 0.0f, 0.0625f, 0.0f);
        set_corner(0, 3, 1.0f, 0.0625f, 0.0f);
        set_corner(3, 3, 1.0f, 0.0625f, 1.0f);
        set_corner(3, 0, 0.0f, 0.0625f, 1.0f);
        if (trim & 0x02)
            grid_point(0, 0)[2] = grid_point(0, 3)[2] = 0.0625f;
        if (trim & 0x04)
            grid_point(0, 3)[0] = grid_point(3, 3)[0] = 0.9375f;
        if (trim & 0x08)
            grid_point(3, 3)[2] = grid_point(3, 0)[2] = 0.9375f;
        if (trim & 0x10)
            grid_point(0, 0)[0] = grid_point(3, 0)[0] = 0.0625f;
        code = 0x40000;
    } else if (kind == 5) {
        /* a ceiling slab at 7/8 */
        set_corner(0, 0, 0.0f, 0.875f, 1.0f);
        set_corner(0, 3, 1.0f, 0.875f, 1.0f);
        set_corner(3, 3, 1.0f, 0.875f, 0.0f);
        set_corner(3, 0, 0.0f, 0.875f, 0.0f);
        if (trim & 0x02)
            grid_point(3, 3)[2] = grid_point(3, 0)[2] = 0.0625f;
        if (trim & 0x04)
            grid_point(0, 3)[0] = grid_point(3, 3)[0] = 0.9375f;
        if (trim & 0x08)
            grid_point(0, 0)[2] = grid_point(0, 3)[2] = 0.9375f;
        if (trim & 0x10)
            grid_point(0, 0)[0] = grid_point(3, 0)[0] = 0.0625f;
        code = 0x30000;
    } else {
        /* a wall slab 1/16 in from the side (not trimmed) */
        set_corner(0, 0, 0.0f, 1.0f, 0.0625f);
        set_corner(0, 3, 1.0f, 1.0f, 0.0625f);
        set_corner(3, 3, 1.0f, 0.0f, 0.0625f);
        set_corner(3, 0, 0.0f, 0.0f, 0.0625f);
        code = (uint32_t)sub_14001B5C0(kind - 1, 0x60000);
    }
    for (int k = 0; k < 3; k++) {
        grid_point(0, 0)[k] = grid_point(0, 0)[k] + offset[k];
        grid_point(0, 3)[k] = grid_point(0, 3)[k] + offset[k];
        grid_point(3, 3)[k] = grid_point(3, 3)[k] + offset[k];
        grid_point(3, 0)[k] = grid_point(3, 0)[k] + offset[k];
    }
    sub_140001F20(patch_points, patch_coordinates, 1, 1, 1, 1, (int)(code | (uint32_t)kind));
    build_quad_unknown[build_quad_count - 1] = 128;
}

void world_shape_build_slab(int kind, const float offset[3])
{
    world_shape_build_slab_trimmed(kind, offset, 0);
}

/* UCOMISS + JNE: different only when ordered and unequal (NaN matches). */
static int differ(float a, float b)
{
    return a < b || a > b;
}

/* The side of the unit cube all four corners of quad q lie on (0..5, the
   last that fits), -1: none. */
static int quad_outer_side(int q)
{
    const int32_t *quad = &build_quads[4 * q];
    int found = -1;

    for (int side = 0; side < 6; side++) {
        int axis = side < 3 ? side : 5 - side;
        float plane = side >= 3 ? 1.0f : 0.0f;
        int k;

        for (k = 0; k < 4; k++)
            if (differ(plane, build_points[3 * quad[k] + axis]))
                break;
        if (k == 4)
            found = side;
    }
    return found;
}

/* Swaps entry a and b of an array of `words`-word entries through the swap
   slot. */
static void swap_through_slot(void *array, int words, int a, int b)
{
    int32_t *e = array;

    for (int k = 0; k < words; k++)
        e[words * BUILD_SWAP_SLOT + k] = e[words * a + k];
    for (int k = 0; k < words; k++)
        e[words * a + k] = e[words * b + k];
    for (int k = 0; k < words; k++)
        e[words * b + k] = e[words * BUILD_SWAP_SLOT + k];
}

/* Texture coordinates of a quad's corners from the side it faces; with
   mark_floor, quads facing down get bit 0 of their +0x15133B768 entry. */
static void quad_coordinates(int q, int mark_floor)
{
    uint32_t side = build_quad_flags[q] & 0xF0000;

    for (int k = 0; k < 4; k++) {
        const float *p = &build_points[3 * build_quads[4 * q + k]];
        float *uv = &build_coordinates[3 * build_quads[4 * q + k]];

        switch (side) {
        case 0x10000: uv[0] = p[2]; uv[1] = p[1]; break;
        case 0x20000: uv[0] = 1.0f - p[2]; uv[1] = p[1]; break;
        case 0x30000: uv[0] = p[0]; uv[1] = p[2]; break;
        case 0x40000: uv[0] = p[0]; uv[1] = 1.0f - p[2]; break;
        case 0x50000: uv[0] = 1.0f - p[0]; uv[1] = p[1]; break;
        case 0x60000: uv[0] = p[0]; uv[1] = p[1]; break;
        default: return;
        }
    }
    if (mark_floor && side == 0x40000)
        build_quad_unknown[q] |= 1;
}

/* A fresh block of count * size bytes (the original multiplies in 32 bits). */
static void *replace_block(void *old, int32_t count, int32_t size)
{
    crt_free(old);
    return crt_malloc((uint64_t)(int64_t)(int32_t)((uint32_t)count * (uint32_t)size));
}

static void copy_block(void *to, const void *from, int32_t count, int32_t size)
{
    memcpy(to, from, (size_t)(int64_t)(int32_t)((uint32_t)count * (uint32_t)size));
}

void world_shape_build_finish(int shape)
{
    /* Outer quads (on a side of the unit cube) move to the front, and each
       side gets the mask of its outer quads. */
    shape_outer_count(shape) = 0;
    for (int side = 0; side < 6; side++)
        shape_side_mask(shape, side) = 0;
    for (int q = 0; q < build_quad_count; q++) {
        int side = quad_outer_side(q);
        int32_t outer;

        if (side == -1)
            continue;
        outer = shape_outer_count(shape);
        if (q > outer) {
            swap_through_slot(build_quads, 4, outer, q);
            swap_through_slot(build_quad_flags, 1, outer, q);
            swap_through_slot(build_quad_unknown, 1, outer, q);
        }
        shape_side_mask(shape, side) |= 1u << (outer & 31);
        build_quad_sides[outer] = side;
        shape_outer_count(shape) = outer + 1;
    }
    /* ... then the masks are inverted: set bits are the quads not on that side. */
    for (int side = 0; side < 6; side++)
        shape_side_mask(shape, side) = ~shape_side_mask(shape, side);

    for (int q = 0; q < build_quad_count; q++)
        quad_coordinates(q, 1);

    /* Points, their vectors and texture coordinates. */
    shape_point_count(shape) = build_point_count;
    shape_points(shape) = replace_block(shape_points(shape), build_point_count, 12);
    shape_vectors_a(shape) = replace_block(shape_vectors_a(shape), build_point_count, 12);
    shape_vectors_b(shape) = replace_block(shape_vectors_b(shape), build_point_count, 12);
    shape_coordinates(shape) = replace_block(shape_coordinates(shape), build_point_count, 8);
    for (int i = 0; i < build_point_count; i++) {
        memcpy(&shape_points(shape)[3 * i], &build_points[3 * i], 12);
        memcpy(&shape_vectors_a(shape)[3 * i], &build_vectors_a[3 * i], 12);
        memcpy(&shape_vectors_b(shape)[3 * i], &build_vectors_b[3 * i], 12);
        memcpy(&shape_coordinates(shape)[2 * i], &build_coordinates[3 * i], 8);
    }

    /* Quads. */
    shape_quad_count(shape) = build_quad_count;
    shape_extra_count(shape) = build_extra_count;
    shape_quads(shape) = replace_block(shape_quads(shape), build_quad_count, 16);
    shape_quad_flags(shape) = replace_block(shape_quad_flags(shape), build_quad_count, 4);
    shape_quad_sides(shape) = replace_block(shape_quad_sides(shape), build_quad_count, 4);
    shape_quad_unknown(shape) = replace_block(shape_quad_unknown(shape), build_quad_count, 4);
    shape_extra_a(shape) = replace_block(shape_extra_a(shape), build_extra_count, 12);
    shape_extra_b(shape) = replace_block(shape_extra_b(shape), build_extra_count, 4);
    copy_block(shape_quads(shape), build_quads, build_quad_count, 16);
    copy_block(shape_quad_flags(shape), build_quad_flags, build_quad_count, 4);
    copy_block(shape_quad_sides(shape), build_quad_sides, build_quad_count, 4);
    copy_block(shape_quad_unknown(shape), build_quad_unknown, build_quad_count, 4);
    copy_block(shape_extra_a(shape), build_extra_a, build_extra_count, 12);
    copy_block(shape_extra_b(shape), build_extra_b, build_extra_count, 4);
    /* The shape keeps only the texture of each quad's flags. */
    for (int q = 0; q < shape_quad_count(shape); q++)
        shape_quad_flags(shape)[q] &= 0xFFF;

    /* Boxes: the first 12 words of each. */
    shape_box_count(shape) = build_box_count;
    shape_boxes(shape) = replace_block(shape_boxes(shape), build_box_count, 48);
    for (int b = 0; b < shape_box_count(shape); b++)
        memcpy(&shape_boxes(shape)[12 * b], &build_boxes[20 * b], 48);
}

void world_shape_build_corner(int turn, float x, float z)
{
    /* the wall along x at depth z */
    set_corner(0, 0, 0.0f, 1.0f, z);
    set_corner(0, 3, x, 1.0f, z);
    set_corner(3, 3, x, 0.0f, z);
    set_corner(3, 0, 0.0f, 0.0f, z);
    sub_140001F20(patch_points, patch_coordinates, 1, 1, 1, 1,
                  (int)((uint32_t)sub_14001B5C0(turn, 0x60000) | (uint32_t)(turn + 1)));
    /* the wall along z at x */
    set_corner(0, 0, x, 1.0f, z);
    set_corner(0, 3, x, 1.0f, 0.0f);
    set_corner(3, 3, x, 0.0f, 0.0f);
    set_corner(3, 0, x, 0.0f, z);
    sub_140001F20(patch_points, patch_coordinates, 1, 1, 1, 1,
                  (int)((uint32_t)sub_14001B5C0(turn, 0x20000) | ((((uint32_t)turn - 1) & 3) + 1)));
}

/* Three floats per quad (0x15134B768). */
#define build_quad_vectors (&SR_GLOBAL(uint32_t, 0x15134B768ULL))

void world_shape_build_remove_quad(int q)
{
    int32_t last;

    if (q < 0 || q >= build_quad_count)
        return;
    last = --build_quad_count;
    for (int k = 0; k < 4; k++)
        build_quads[4 * q + k] = build_quads[4 * last + k];
    build_quad_flags[q] = build_quad_flags[last];
    build_quad_unknown[q] = build_quad_unknown[last];
    for (int k = 0; k < 3; k++)
        build_quad_vectors[3 * q + k] = build_quad_vectors[3 * last + k];
}

/* Rectangle lists the shape loader turns into boxes: 0x3040 bytes per a,
   0x300 per b from 0x1ABC89C00, each a kind, a count and 20-byte entries
   (four floats used). */
#define rect_list_field(a, b, type, offset) \
    SR_GLOBAL(type, 0x1ABC89C00ULL + 0x3040ULL * (uint64_t)(int64_t)(a) + 0x300ULL * (uint64_t)(int64_t)(b) + (offset))
#define rect_list_kind(a, b) rect_list_field(a, b, int32_t, 0x40)
#define rect_list_count(a, b) rect_list_field(a, b, int32_t, 0x74)
#define rect_list_entry(a, b, i) (&rect_list_field(a, b, float, 0x7C + 20ULL * (uint64_t)(int64_t)(i)))

void world_shape_build_boxes(int turn, int a, int b)
{
    float depth = rect_list_kind(a, b) == 1 ? 0.00390625f : 0.015625f;

    for (int i = 0; i < rect_list_count(a, b); i++) {
        const float *e = rect_list_entry(a, b, i);
        int32_t box = build_box_count;
        float left, right, bottom, top;

        /* Kind 1 turned twice or more keeps the left edge as given; others
           mirror it. */
        if (rect_list_kind(a, b) == 1 && turn >= 2)
            left = e[0];
        else
            left = 1.0f - (e[1] + e[0]);
        right = e[1] + left;
        bottom = e[2];
        top = e[2] + e[3];
        set_corner(0, 0, left, top, depth);
        set_corner(0, 3, right, top, depth);
        set_corner(3, 3, right, bottom, depth);
        set_corner(3, 0, left, bottom, depth);
        if (turn > 0)
            world_patch_grid_turn(turn, 0);
        memcpy(&build_boxes[20 * box + 0], grid_point(0, 0), 12);
        memcpy(&build_boxes[20 * box + 3], grid_point(0, 3), 12);
        memcpy(&build_boxes[20 * box + 6], grid_point(3, 3), 12);
        memcpy(&build_boxes[20 * box + 9], grid_point(3, 0), 12);
        build_box_count = box + 1;
    }
}

/* A rectangle list's wall: the opening (+0x44 .. +0x50: left, width,
   bottom, height) and framed pieces from +0x1BC (count at +0x1B8, 24 bytes
   each: a style, then left, width, bottom, height). */
#define rect_wall(a, b, k) rect_list_field(a, b, float, 0x44 + 4ULL * (k))
#define rect_piece_count(a, b) rect_list_field(a, b, int32_t, 0x1B8)
#define rect_piece_style(a, b, i) rect_list_field(a, b, int32_t, 0x1BC + 24ULL * (uint64_t)(int64_t)(i))
#define rect_piece(a, b, i) (&rect_list_field(a, b, float, 0x1C4 + 24ULL * (uint64_t)(int64_t)(i)))

static void wall_patches(int turn, float x, float y, float z, float width, float height, float depth, uint32_t faces,
                         const int32_t textures[6])
{
    const float origin[3] = { x, y, z }, scale[3] = { width, height, depth };

    world_block_cube_patches(turn, origin, scale, faces, textures);
}

void world_shape_build_wall(int turn, int a, int b)
{
    /* Textures for the six faces; each part changes them for the parts after it. */
    int32_t textures[6] = { 0, 1, 2, 11, 4, 5 };
    int kind_1 = rect_list_kind(a, b) == 1;
    float left, right, bottom, top;
    uint32_t inside;

    /* Kind 1 turned twice or more keeps the left edge as given; others mirror it. */
    if (kind_1 && turn >= 2)
        left = rect_wall(a, b, 0);
    else
        left = 1.0f - (rect_wall(a, b, 1) + rect_wall(a, b, 0));
    inside = kind_1 ? 0 : 8;   /* the face towards the inside, unless kind 1 */

    /* The wall around the opening, 1/16 thick: left, right, below, above. */
    if (left > 0.0f) {
        textures[4] = 6;
        wall_patches(turn, 0.0f, 0.0f, 0.0f, left, 1.0f, 0.0625f, inside + 18, textures);
    }
    right = rect_wall(a, b, 1) + left;
    if (!(right >= 1.0f)) {
        textures[2] = 6;
        wall_patches(turn, right, 0.0f, 0.0f, 1.0f - right, 1.0f, 0.0625f, inside + 6, textures);
    }
    bottom = rect_wall(a, b, 2);
    if (bottom > 0.0f) {
        textures[5] = 6;
        wall_patches(turn, 0.0f, 0.0f, 0.0f, 1.0f, bottom, 0.0625f, inside + 34, textures);
    }
    top = rect_wall(a, b, 3) + bottom;
    if (!(top >= 1.0f)) {
        textures[0] = 6;
        wall_patches(turn, 0.0f, top, 0.0f, 1.0f, 1.0f - top, 0.0625f, inside + 3, textures);
    }

    /* Framed pieces: style 0 plain, 1 and 2 frames standing out 1/16
       (3/16 and 5/16 deep), others thin panels just in front. */
    for (int i = 0; i < rect_piece_count(a, b); i++) {
        const float *e = rect_piece(a, b, i);
        float x, width = e[1], z, depth;
        int32_t style = rect_piece_style(a, b, i);

        if (kind_1 && turn >= 2)
            x = e[0];
        else
            x = 1.0f - (e[1] + e[0]);
        if (style == 0) {
            z = 0.0f;
            depth = 0.0625f;
        } else if (style == 1 || style == 2) {
            z = -0.0625f;
            depth = style == 1 ? 0.1875f : 0.3125f;
            for (int k = 0; k < 6; k++)
                textures[k] = 6;
        } else {
            z = 0.0078125f;
            depth = 0.015625f;
            for (int k = 0; k < 6; k++)
                textures[k] = 7;
        }
        wall_patches(turn, x, e[2], z, width, e[3], depth, 0x3F, textures);
    }
}

/* Procedural block shapes: the shape made for each 24-bit code (-1: none
   yet) and the next free shape number. */
#define procedural_shape(code) SR_GLOBAL(int32_t, 0x145F54C00ULL + 4ULL * (uint64_t)(code))
#define next_free_shape SR_GLOBAL(int32_t, 0x14500A700ULL)
#define PREVIEW_SHAPE 0xFFFF
#define shape_unknown_cc(shape) shape_field(shape, int32_t, 0xCC)
#define shape_solid_sides(shape) shape_field(shape, uint32_t, 0xD0)   /* bit 0 floor, 1-4 sides, 5 ceiling */

int world_shape_build_procedural(int preview, uint32_t code)
{
    static const float zero[3] = { 0.0f, 0.0f, 0.0f };
    int shape, style, side[4];
    uint32_t floor, ceiling, trim;

    code &= 0xFFFFFF;
    if (preview) {
        shape = PREVIEW_SHAPE;
    } else {
        if (procedural_shape(code) != -1)
            return procedural_shape(code);
        shape = next_free_shape;
        if (shape >= 0x10000)
            return 0;
        procedural_shape(code) = shape;
        next_free_shape = shape + 1;
    }
    for (int i = 0; i < 4; i++)
        side[i] = (int)(code >> (4 * i) & 0xF);
    floor = code & 0x10000;
    ceiling = code & 0x20000;
    style = (int)(code >> 18 & 0xF);

    shape_unknown_cc(shape) = 0;
    build_point_count = 0;
    build_quad_count = 0;
    build_extra_count = 0;
    build_box_count = 0;
    /* Sides 3-15 are walls from rectangle list (style, side - 3); their
       boxes, for kind 0 lists or the first two sides. */
    for (int i = 0; i < 4; i++)
        if ((uint32_t)(side[i] - 3) <= 12 && (!rect_list_kind(style, side[i] - 3) || i < 2))
            world_shape_build_boxes(i, style, side[i] - 3);

    shape_solid_sides(shape) = 0;
    trim = floor ? 1 : 0;
    for (int i = 0; i < 4; i++)
        if (side[i] > 0 && side[i] != 2)
            trim |= 2u << i;
    if (ceiling)
        trim |= 0x20;
    if (floor) {
        world_shape_build_slab_trimmed(0, zero, trim);
        shape_solid_sides(shape) |= 0x01;
    }
    if (ceiling) {
        world_shape_build_slab_trimmed(5, zero, trim);
        shape_solid_sides(shape) |= 0x20;
    }
    /* Side kinds: 1 a full wall, 2 a corner post, 3-15 walls with openings. */
    for (int i = 0; i < 4; i++) {
        if (side[i] == 1) {
            world_shape_build_slab(i + 1, zero);
            shape_solid_sides(shape) |= 1u << (i + 1);
            continue;
        }
        if ((uint32_t)(side[i] - 3) <= 12)
            world_shape_build_wall(i, style, side[i] - 3);
        if (side[i] == 2)
            world_shape_build_corner(i, 0.0625f, 0.0625f);
    }
    shape_size(shape, 0) = 1;
    shape_size(shape, 1) = 1;
    shape_size(shape, 2) = 1;
    if (!preview) {
        world_shape_build_finish(shape);
        return shape;
    }
    /* The preview keeps the scratch shape: texture coordinates by side, and
       the quads lose their side. */
    for (int q = 0; q < build_quad_count; q++) {
        if (!(build_quad_flags[q] & 0xF0000))
            continue;
        quad_coordinates(q, 0);
        build_quad_flags[q] &= 0xFFFF;
    }
    return PREVIEW_SHAPE;
}
