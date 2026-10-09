/* Contact between two convex collision meshes (vehicle type 17 against
   items). See collision.h. */
#include <string.h>
#include "arith.h"
#include "collision.h"

enum { X, Y, Z };

/* Still in src/client/, each proven equal to the original (t_meshparts.c):
   0x14004A480 transforms a mesh's points and face normals to world axes;
   0x14004A1D0 sweeps a point against a mesh's faces (hit: point, face
   normal, fraction); 0x14008CEB0 gives the closest points of two edges and
   their distance; 0x140187410 tests an edge contact against a third point;
   0x1400052C0 applies a contact between two bodies. */
extern long long sub_14004A480(float *points, float *normals, const CollisionMesh *mesh, const float *position,
                               const float *rotation);
extern long long sub_14004A1D0(float *hit, const CollisionMesh *mesh, const float *points, const float *normals,
                               const float *from, const float *to);
extern long long sub_14008CEB0(float *on_a, float *on_b, float *distance, const float *a0, const float *a1,
                               const float *b0, const float *b1);
extern long long sub_140187410(const float *a0, const float *a1, const float *point, const float *b0,
                               const float *b1);
extern long long sub_1400052C0(int body_a, int body_b, const float *offset_a, const float *offset_b,
                               const float *normal, float depth, float k1, float k2, float k3);

#define CONTACT_K1 0.400000006f
#define CONTACT_K2 0.015625f
#define CONTACT_K3 0.03125f

/* The original's stack frame, kept as one block because its tables overlap
   for large meshes: the second mesh's vertices start 8 vertices after the
   first's, and its point table 8 vertices after that. Real collision
   meshes are boxes (8 corners), which fit. */
enum {
    FRAME_HIT = 0x0,
    FRAME_VERTICES_A = 0x40,
    FRAME_VERTICES_B = 0xA0,
    FRAME_POINTS_B = 0x100,
    FRAME_POINTS_A = 0x1900,
    FRAME_NORMALS_B = 0x3100,
    FRAME_NORMALS_A = 0x4900,
    FRAME_SIZE = 0x6100,
};

#define AT(frame, offset) ((float *)((frame) + (offset)))

/* Vertices of a mesh to world axes, rotation rows applied as the original does. */
static void transform_vertices(unsigned char *frame, int offset, const CollisionMesh *mesh, const float *position,
                               const float *r)
{
    for (int i = 0; i < mesh->vertex_count; i++) {
        const float *v = mesh->vertex[i];
        float *out = AT(frame, offset) + 3 * i;
        out[X] = position[X] + ((v[Y] * r[3] + v[X] * r[0]) + v[Z] * r[6]);
        out[Y] = position[Y] + ((v[Y] * r[4] + v[X] * r[1]) + v[Z] * r[7]);
        out[Z] = position[Z] + ((v[Y] * r[5] + v[X] * r[2]) + v[Z] * r[8]);
    }
}

/* Each point of `mesh`, swept from its vertex to its own position, against
   the faces of `other`: a contact pushing body_a out along the face. */
static int point_contacts(unsigned char *frame, int body_a, int body_b, const CollisionMesh *mesh,
                          const CollisionMesh *other, int vertices, int points, int other_points, int other_normals,
                          const float *position_a, const float *position_b)
{
    int any = 0;
    float *hit = AT(frame, FRAME_HIT);

    for (int i = 0; i < mesh->point_count; i++) {
        const float *p = AT(frame, points) + 3 * i;
        const float *from = AT(frame, vertices) + 3 * mesh->points[i].vertex;

        if (sub_14004A1D0(hit, other, AT(frame, other_points), AT(frame, other_normals), from, p)) {
            const float *n = hit + 3;
            float depth = ((hit[Y] - p[Y]) * n[Y] + (hit[X] - p[X]) * n[X]) + (hit[Z] - p[Z]) * n[Z];
            float offset_a[3] = {hit[X] - position_a[X], hit[Y] - position_a[Y], hit[Z] - position_a[Z]};
            float offset_b[3] = {hit[X] - position_b[X], hit[Y] - position_b[Y], hit[Z] - position_b[Z]};
            sub_1400052C0(body_a, body_b, offset_a, offset_b, n, depth, CONTACT_K1, CONTACT_K2, CONTACT_K3);
            any = 1;
        }
    }
    return any;
}

int collision_mesh_contact(int body_a, int body_b, const CollisionMesh *a, const CollisionMesh *b,
                           const float position_a[3], const float rotation_a[9], const float position_b[3],
                           const float rotation_b[9], uint32_t flags)
{
    _Alignas(16) unsigned char frame[FRAME_SIZE];
    int any = 0;

    sub_14004A480(AT(frame, FRAME_POINTS_A), AT(frame, FRAME_NORMALS_A), a, position_a, rotation_a);
    sub_14004A480(AT(frame, FRAME_POINTS_B), AT(frame, FRAME_NORMALS_B), b, position_b, rotation_b);
    transform_vertices(frame, FRAME_VERTICES_A, a, position_a, rotation_a);
    transform_vertices(frame, FRAME_VERTICES_B, b, position_b, rotation_b);

    /* Points of a against faces of b (unless bit 0 of flags), then b against a. */
    if (!(flags & 1))
        any |= point_contacts(frame, body_a, body_b, a, b, FRAME_VERTICES_A, FRAME_POINTS_A, FRAME_POINTS_B,
                              FRAME_NORMALS_B, position_a, position_b);
    any |= point_contacts(frame, body_b, body_a, b, a, FRAME_VERTICES_B, FRAME_POINTS_B, FRAME_POINTS_A,
                          FRAME_NORMALS_A, position_b, position_a);

    /* Every edge of a against every edge of b. With bit 0 of flags set the
       first side test is skipped (the original masks the flag word to bit 0
       in place before the point pass, then tests the whole word here). */
    for (int i = 0; i < a->edge_count; i++) {
        const CollisionMeshEdge *ea = &a->edges[i];
        for (int j = 0; j < b->edge_count; j++) {
            const CollisionMeshEdge *eb = &b->edges[j];
            float a0[3], a1[3], b0[3], b1[3], on_a[3], on_b[3], depth, n[3], d[3], length;

            memcpy(a0, AT(frame, FRAME_POINTS_A) + 3 * ea->point[0], sizeof a0);
            memcpy(a1, AT(frame, FRAME_POINTS_A) + 3 * ea->point[1], sizeof a1);
            memcpy(b0, AT(frame, FRAME_POINTS_B) + 3 * eb->point[0], sizeof b0);
            memcpy(b1, AT(frame, FRAME_POINTS_B) + 3 * eb->point[1], sizeof b1);
            if (!sub_14008CEB0(on_a, on_b, &depth, a0, a1, b0, b1))
                continue;
            if (!(flags & 1) && !sub_140187410(b0, b1, AT(frame, FRAME_VERTICES_A) + 3 * ea->vertex, a0, a1))
                continue;
            if (!sub_140187410(a0, a1, AT(frame, FRAME_VERTICES_B) + 3 * eb->vertex, b0, b1))
                continue;

            d[X] = on_b[X] - on_a[X];
            d[Y] = on_b[Y] - on_a[Y];
            d[Z] = on_b[Z] - on_a[Z];
            length = sqrt_float((d[Y] * d[Y] + d[X] * d[X]) + d[Z] * d[Z]);
            if (is_zero_or_nan(length)) {
                n[X] = n[Y] = n[Z] = 0.0f;
            } else {
                float inverse = 1.0f / length;
                n[X] = inverse * d[X];
                n[Y] = inverse * d[Y];
                n[Z] = inverse * d[Z];
            }
            {
                float mid[3] = {(on_a[X] + on_b[X]) * 0.5f, (on_a[Y] + on_b[Y]) * 0.5f, (on_a[Z] + on_b[Z]) * 0.5f};
                float offset_a[3] = {mid[X] - position_a[X], mid[Y] - position_a[Y], mid[Z] - position_a[Z]};
                float offset_b[3] = {mid[X] - position_b[X], mid[Y] - position_b[Y], mid[Z] - position_b[Z]};
                sub_1400052C0(body_a, body_b, offset_a, offset_b, n, depth, CONTACT_K1, CONTACT_K2, CONTACT_K3);
            }
            any = 1;
        }
    }
    return any;
}
