/* GPU meshes of the World map's streets. See world_streets.h. */
#include "arith.h"
#include "gl.h"
#include "world_streets.h"

/* Texture coordinates of a unit square's corners (0,1) (1,1) (1,0) (0,0),
   0x1402B3638, read from the client's data as the original does. */
extern const float street_corner_uv[4][2] __asm__("dword_1402B3638");

enum { X, Y, Z };

/* Appends one vertex (position, texture coordinate, normal) to the scratch mesh. */
static void put_mesh_vertex(const float position[3], float lift, const float uv[2], const float normal[3])
{
    float *out = &mesh_scratch.data[mesh_scratch.count * mesh_scratch.stride];

    out[0] = position[X];
    out[1] = position[Y];
    out[2] = position[Z];
    if (lift != 0.0f)
        out[1] = out[1] + lift;
    out[3] = uv[0];
    out[4] = uv[1];
    out[5] = normal[X];
    out[6] = normal[Y];
    out[7] = normal[Z];
    mesh_scratch.count++;
}

/* Flat-shaded copies of triangles [first, end) of street `index`, all three
   corners with the face normal (c - a) x (b - a), normalized (zero for a
   degenerate face, NaN length included as the original's ucomiss/je). Even
   streets map the triangle to texture corners 0 2 1, odd ones to 0 3 2, so
   neighbouring patches mirror. */
static void mesh_triangles(int index, int first, int end, float lift)
{
    const Street *street = &world_streets[index];
    int odd = index & 1;

    for (int t = first; t < end; t++) {
        const int32_t *corner = street->triangle[t];
        const float *a = street->vertex[corner[0]], *b = street->vertex[corner[1]], *c = street->vertex[corner[2]];
        float u[3] = {b[X] - a[X], b[Y] - a[Y], b[Z] - a[Z]};
        float w[3] = {c[X] - a[X], c[Y] - a[Y], c[Z] - a[Z]};
        float n[3] = {w[Y] * u[Z] - w[Z] * u[Y], w[Z] * u[X] - w[X] * u[Z], w[X] * u[Y] - w[Y] * u[X]};
        float length = sqrt_float((n[Y] * n[Y] + n[X] * n[X]) + n[Z] * n[Z]);

        if (is_zero_or_nan(length)) {
            n[X] = n[Y] = n[Z] = 0.0f;
        } else {
            float inverse = 1.0f / length;
            n[X] = inverse * n[X];
            n[Y] = inverse * n[Y];
            n[Z] = inverse * n[Z];
        }
        put_mesh_vertex(a, lift, street_corner_uv[0], n);
        put_mesh_vertex(b, lift, street_corner_uv[odd ? 3 : 2], n);
        put_mesh_vertex(c, lift, street_corner_uv[odd ? 2 : 1], n);
    }
}

static void upload_mesh(int mesh)
{
    glBindBuffer(GL_ARRAY_BUFFER, gl_buffer_name(street_mesh_buffer[mesh]));
    glBufferData(GL_ARRAY_BUFFER, 4 * mesh_scratch.count * mesh_scratch.stride, mesh_scratch.data, GL_STATIC_DRAW);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    street_mesh_size[mesh].stride = mesh_scratch.stride;
    street_mesh_size[mesh].count = mesh_scratch.count;
}

void world_build_street_meshes(void)
{
    int count;

    /* 0: railway embankments. */
    mesh_scratch.stride = 8;
    mesh_scratch.count = 0;
    count = world_street_count;
    for (int i = 0; i < count; i++)
        if (world_streets[i].kind == 0)
            mesh_triangles(i, world_streets[i].range_first[2], world_streets[i].range_end[2], 0.0f);
    upload_mesh(0);

    /* 1: the ground between the rails, an eighth of a unit up. */
    mesh_scratch.stride = 8;
    mesh_scratch.count = 0;
    count = world_street_count;
    for (int i = 0; i < count; i++)
        mesh_triangles(i, world_streets[i].range_first[0], world_streets[i].range_end[0], 0.125f);
    upload_mesh(1);

    /* 2: track surface. */
    mesh_scratch.stride = 8;
    mesh_scratch.count = 0;
    count = world_street_count;
    for (int i = 0; i < count; i++)
        if (world_streets[i].kind == 1)
            mesh_triangles(i, world_streets[i].range_first[2], world_streets[i].range_end[2], 0.0f);
    upload_mesh(2);
}
