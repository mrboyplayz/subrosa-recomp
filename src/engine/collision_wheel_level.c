/* A wheel against the level. See collision_wheel_level.h. */
#include "collision_wheel_level.h"
#include "collision.h"
#include "math3d.h"
#include "arith.h"
#include <math.h>
#include <string.h>

/* The terrain: 8 x 8 tiles of 2048 x 2048 one-unit cells with heights at
   the cell corners (2049 a row), and one bit per 4 x 4 cells for where it
   is solid. (collision_terrain.c describes it too.) */
typedef struct TerrainTile {
    float origin[3];                     /* of the tile's cell (0, 0) */
    uint8_t unknown_c[0x18 - 0xC];
    const float *heights;                /* 2049 x 2049, row by z */
    uint8_t unknown_20[0x3420 - 0x20];
} TerrainTile;

_Static_assert(sizeof(TerrainTile) == 0x3420, "TerrainTile size");

#define terrain_tiles (&SR_GLOBAL(TerrainTile, 0x1811BF840ULL))
#define terrain_origin (&SR_GLOBAL(float, 0x181290040ULL))
#define terrain_solid SR_GLOBAL(const uint16_t *, 0x181290050ULL)
#define TERRAIN_ROW 2049

/* Whether a block layer is in use. 0x15ADA9240, 1,052,016 bytes apart */
#define level_layer_active(layer) SR_GLOBAL(int32_t, 0x15ADA9240ULL + 0x100D70ULL * (uint64_t)(int64_t)(layer))

/* The block layer test, reached through the client's entry point (it is not
   engine code yet): a wheel against the blocks of one layer; writes the
   touch's point, normal and distance. 0x14003C760 */
extern int wheel_block_layer(float point[3], float normal[3], float *distance, int layer, const float centre[3],
                             const float axle[3], float radius) __asm__("sub_14003C760");
/* The two routines below, reached the same way so the comparison with the
   original can replace them with recording stubs. */
extern void terrain_mesh_in_box(LevelMesh *mesh, const float box_min[3], const float box_max[3]) __asm__("sub_1400D05B0");
extern int wheel_level_mesh(CollisionWheelHit *hit, const LevelMesh *mesh, const float centre[3], const float axle[3],
                            float radius) __asm__("sub_14003DAE0");

/* Two corners are the same when each coordinate is within 1/16384 (a
   difference that is not a number counts as within). */
#define SAME_CORNER 0.00006103515625f

/* The index of the mesh's vertex at this place, adding it when there is
   none and the mesh has room. With a full mesh the last vertex stands in. */
static int32_t mesh_vertex(LevelMesh *mesh, float x, float y, float z)
{
    for (int32_t i = 0; i < mesh->vertex_count; i++) {
        const float *p = mesh->vertex[i].position;

        if (!(fabsf(x - p[0]) >= SAME_CORNER) && !(fabsf(y - p[1]) >= SAME_CORNER) && !(fabsf(z - p[2]) >= SAME_CORNER))
            return i;
    }
    if (mesh->vertex_count < LEVEL_MESH_VERTEX_CAPACITY) {
        float *p = mesh->vertex[mesh->vertex_count].position;

        p[0] = x;
        p[1] = y;
        p[2] = z;
        mesh->vertex_count++;
    }
    return mesh->vertex_count - 1;
}

void collision_terrain_mesh_in_box(LevelMesh *mesh, const float box_min[3], const float box_max[3])
{
    int32_t first_x = truncate_float(box_min[0] - terrain_origin[0]);
    int32_t last_z = truncate_float(box_max[2] - terrain_origin[2]);
    int32_t last_x = truncate_float(box_max[0] - terrain_origin[0]);
    int32_t first_z = truncate_float(box_min[2] - terrain_origin[2]);

    if (first_z > last_z)
        return;
    for (int32_t z = first_z;; z++) {
        for (int64_t wide_x = first_x; wide_x <= last_x; wide_x++) {
            int32_t x = (int32_t)wide_x;
            const TerrainTile *tile;
            const float *heights;
            uint32_t solid;
            int32_t cell_x, cell_z, corner[4];
            float low_x, high_x, low_z, high_z, height[4];
            float rise_x, rise_far, rise_z, across, along;
            LevelMeshFace *face;

            if ((uint32_t)(x >> 11) > 7 || (uint32_t)(z >> 11) > 7 || (uint32_t)(x >> 2) > 0xFFF || (uint32_t)(z >> 2) > 0xFFF)
                continue;
            solid = terrain_solid[(x >> 4) + ((z >> 4) << 10)];
            if (!((solid >> ((((x >> 2) & 3) + 4 * ((z >> 2) & 3)) & 31)) & 1))
                continue;

            tile = &terrain_tiles[(x >> 11) + 8 * (z >> 11)];
            heights = tile->heights;
            cell_x = x & 0x7FF;
            cell_z = z & 0x7FF;
            low_x = (float)cell_x + tile->origin[0];
            height[0] = tile->origin[1] + heights[cell_x + TERRAIN_ROW * cell_z];
            height[1] = tile->origin[1] + heights[cell_x + TERRAIN_ROW * cell_z + 1];
            height[2] = tile->origin[1] + heights[cell_x + TERRAIN_ROW * cell_z + TERRAIN_ROW + 1];
            height[3] = tile->origin[1] + heights[cell_x + TERRAIN_ROW * cell_z + TERRAIN_ROW];
            high_z = (float)(cell_z + 1) + tile->origin[2];
            low_z = (float)cell_z + tile->origin[2];
            high_x = (float)(cell_x + 1) + tile->origin[0];

            /* Two faces are added for a cell: leave room for both. */
            if (mesh->face_count >= LEVEL_MESH_FACE_CAPACITY - 1)
                continue;
            /* A cell wholly at or below the box is of no interest. */
            if (!(height[0] > box_min[1]) && !(height[1] > box_min[1]) && !(height[2] > box_min[1])
                && !(height[3] > box_min[1]))
                continue;

            corner[0] = mesh_vertex(mesh, low_x, height[0], low_z);
            corner[1] = mesh_vertex(mesh, high_x, height[1], low_z);
            corner[2] = mesh_vertex(mesh, high_x, height[2], high_z);
            corner[3] = mesh_vertex(mesh, low_x, height[3], high_z);

            rise_x = height[1] - height[0];
            across = high_x - low_x;
            along = high_z - low_z;
            rise_far = height[2] - height[0];
            face = &mesh->face[mesh->face_count];
            face->corner_count = 3;
            face->corner[0] = corner[0];
            face->corner[1] = corner[1];
            face->corner[2] = corner[2];
            face->normal[0] = -(along * rise_x);
            face->normal[1] = along * across;
            face->normal[2] = (rise_x * across) - (rise_far * across);
            math_vec3_normalize(face->normal, face->normal);
            mesh->face_count++;

            rise_z = height[3] - height[0];
            face = &mesh->face[mesh->face_count];
            face->corner_count = 3;
            face->corner[0] = corner[0];
            face->corner[1] = corner[2];
            face->corner[2] = corner[3];
            face->normal[0] = (rise_z * along) - (along * rise_far);
            face->normal[1] = along * across;
            face->normal[2] = -(rise_z * across);
            math_vec3_normalize(face->normal, face->normal);
            mesh->face_count++;
        }
        if (z >= last_z)
            break;
    }
}

/* One triangle of a face against the wheel; the nearest touch is kept. */
static void wheel_mesh_triangle(CollisionWheelHit *hit, float normal[3], const float centre[3], const float axle[3],
                                float radius, const float a[3], const float b[3], const float c[3])
{
    float point[3], distance;

    if (collision_wheel_triangle(point, normal, &distance, centre, axle, radius, a, b, c) && !(distance >= hit->distance)) {
        memcpy(hit->point, point, sizeof hit->point);
        memcpy(hit->normal, normal, sizeof hit->normal);
        hit->distance = distance;
    }
}

int collision_wheel_level_mesh(CollisionWheelHit *hit, const LevelMesh *mesh, const float centre[3], const float axle[3],
                               float radius)
{
    hit->distance = 65536.0f;
    if (mesh->face_count <= 0)
        return 0;
    for (int32_t f = 0; f < mesh->face_count; f++) {
        const LevelMeshFace *face = &mesh->face[f];
        float a[3], b[3], c[3], d[3], normal[3] = {0.0f, 0.0f, 0.0f};
        float bx, by, bz, cx, cy, cz, x, y, z, length;

        /* The corners are copied: the triangle test may write to the hit
           the mesh is part of. */
        memcpy(a, mesh->vertex[face->corner[0]].position, sizeof a);
        memcpy(b, mesh->vertex[face->corner[1]].position, sizeof b);
        memcpy(c, mesh->vertex[face->corner[2]].position, sizeof c);
        bx = b[0] - a[0];
        by = b[1] - a[1];
        bz = b[2] - a[2];
        cx = c[0] - a[0];
        cy = c[1] - a[1];
        cz = c[2] - a[2];
        x = (cy * bz) - (cz * by);
        y = (cz * bx) - (cx * bz);
        z = (cx * by) - (cy * bx);
        length = sqrt_float(((y * y) + (x * x)) + (z * z));
        if (!is_zero_or_nan_quiet(length)) {
            float inverse = 1.0f / length;

            normal[0] = x * inverse;
            normal[1] = y * inverse;
            normal[2] = z * inverse;
        }
        wheel_mesh_triangle(hit, normal, centre, axle, radius, a, b, c);
        /* A four-cornered face: its second triangle is tested with the
           normal the first test left (an edge touch replaces it). */
        if (face->corner_count == 4) {
            memcpy(d, mesh->vertex[face->corner[3]].position, sizeof d);
            wheel_mesh_triangle(hit, normal, centre, axle, radius, a, c, d);
        }
    }
    return !(hit->distance >= 65536.0f);
}

int collision_wheel_level(const float centre[3], const float axle[3], float radius)
{
    static LevelMesh mesh;               /* the original's is on the stack */
    CollisionWheelHit touch;
    float box_min[3], box_max[3], distance;

    collision_hit.fraction = 1.0f;
    collision_hit.distance = 65536.0f;
    collision_hit_unknown_7c = -1;
    collision_hit_object_index = -1;

    mesh.vertex_count = 0;
    mesh.face_count = 0;
    mesh.extra_count = 0;
    for (int k = 0; k < 3; k++) {
        box_min[k] = centre[k] - radius;
        box_max[k] = centre[k] + radius;
    }
    terrain_mesh_in_box(&mesh, box_min, box_max);
    if (wheel_level_mesh(&touch, &mesh, centre, axle, radius) && collision_hit.distance > touch.distance) {
        collision_hit.fraction = 0.0f;
        memcpy(collision_hit.point, touch.point, sizeof touch.point);
        memcpy(collision_hit.normal, touch.normal, sizeof touch.normal);
        collision_hit_block_info = 0;
        collision_hit.distance = touch.distance;
        collision_hit_layer = 0;
    }

    /* The block layers. The test writes its touch over the box, which it
       does not read. */
    for (int layer = 0; layer < 4; layer++) {
        if (!level_layer_active(layer))
            continue;
        if (wheel_block_layer(box_min, box_max, &distance, layer, centre, axle, radius)
            && collision_hit.distance > distance) {
            memcpy(collision_hit.point, box_min, sizeof box_min);
            memcpy(collision_hit.normal, box_max, sizeof box_max);
            collision_hit.distance = distance;
            collision_hit.fraction = 0.0f;
            collision_hit_block_info = collision_layer_block_info;
            collision_hit_layer = layer;
        }
    }
    return !(collision_hit.distance >= 65536.0f);
}
