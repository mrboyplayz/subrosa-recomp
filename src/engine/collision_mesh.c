/* Contact between two convex collision meshes (vehicle type 17 against
   items). See collision.h. */
#include <string.h>
#include "arith.h"
#include "collision.h"

enum { X, Y, Z };

/* Still in src/client/: 0x1400052C0 applies a contact between two bodies. */
extern long long sr_physics_add_contact(int body_a, int body_b, const float *offset_a, const float *offset_b,
                               const float *normal, float depth, float k1, float k2, float k3);

void collision_mesh_transform(float (*points)[3], float (*normals)[3], const CollisionMesh *mesh,
                              const float position[3], const float r[9])
{
    for (int i = 0; i < mesh->point_count; i++) {
        const float *v = mesh->points[i].position;
        points[i][X] = ((v[X] * r[0]) + (v[Z] * r[6])) + ((v[Y] * r[3]) + position[X]);
        points[i][Y] = ((r[7] * v[Z]) + (r[1] * v[X])) + ((r[4] * v[Y]) + position[Y]);
        points[i][Z] = ((r[8] * v[Z]) + (r[2] * v[X])) + ((r[5] * v[Y]) + position[Z]);
    }
    for (int i = 0; i < mesh->face_count; i++) {
        const float *n = mesh->faces[i].normal;
        normals[i][X] = ((n[X] * r[0]) + (n[Y] * r[3])) + (n[Z] * r[6]);
        normals[i][Y] = ((n[X] * r[1]) + (n[Y] * r[4])) + (n[Z] * r[7]);
        normals[i][Z] = ((n[Y] * r[5]) + (n[X] * r[2])) + (n[Z] * r[8]);
    }
}

int collision_mesh_point_faces(CollisionMeshHit *hit, const CollisionMesh *mesh, const float (*points)[3],
                               const float (*normals)[3], const float from[3], const float to[3])
{
    /* The fourth corner keeps its last quad's value on triangles; it is only read for quads. */
    float c0[3], c1[3], c2[3], c3[3] = {0.0f, 0.0f, 0.0f};

    hit->fraction = 1.0f;
    if (mesh->face_count <= 0)
        return 0;
    for (int i = 0; i < mesh->face_count; i++) {
        const CollisionMeshFace *face = &mesh->faces[i];
        float point[3], normal[3], t;

        memcpy(c0, points[face->corner[0]], sizeof c0);
        memcpy(c1, points[face->corner[1]], sizeof c1);
        memcpy(c2, points[face->corner[2]], sizeof c2);
        if (face->corner_count == 4)
            memcpy(c3, points[face->corner[3]], sizeof c3);
        memcpy(normal, normals[i], sizeof normal);

        if (collision_line_triangle(point, normal, &t, from, to, c0, c1, c2) && t < hit->fraction) {
            memcpy(hit->point, point, sizeof point);
            memcpy(hit->normal, normal, sizeof normal);
            hit->fraction = t;
        }
        if (face->corner_count == 4 && collision_line_triangle(point, normal, &t, from, to, c0, c2, c3)
            && t < hit->fraction) {
            memcpy(hit->point, point, sizeof point);
            memcpy(hit->normal, normal, sizeof normal);
            hit->fraction = t;
        }
    }
    return hit->fraction < 1.0f;
}

int collision_mesh_point_sweep(CollisionMeshHit *hit, const CollisionMesh *mesh, const float position[3],
                               const float rotation[9], const float from[3], const float to[3])
{
    float points[512][3], normals[512][3];

    collision_mesh_transform(points, normals, mesh, position, rotation);
    return collision_mesh_point_faces(hit, mesh, (const float (*)[3])points, (const float (*)[3])normals, from, to);
}

int collision_edge_edge(float on_a[3], float on_b[3], float *distance, const float a0[3], const float a1[3],
                        const float b0[3], const float b1[3])
{
    float da[3] = {a1[X] - a0[X], a1[Y] - a0[Y], a1[Z] - a0[Z]};
    float ab[3] = {a0[X] - b0[X], a0[Y] - b0[Y], a0[Z] - b0[Z]};
    float db[3] = {b1[X] - b0[X], b1[Y] - b0[Y], b1[Z] - b0[Z]};
    float bb = ((db[Y] * db[Y]) + (db[X] * db[X])) + (db[Z] * db[Z]);
    float ab_db = ((ab[Y] * db[Y]) + (ab[X] * db[X])) + (ab[Z] * db[Z]);
    float da_db = ((db[Y] * da[Y]) + (db[X] * da[X])) + (db[Z] * da[Z]);
    float det = ((((da[Y] * da[Y]) + (da[X] * da[X])) + (da[Z] * da[Z])) * bb) - (da_db * da_db);
    float s, t;

    if (is_zero_or_nan(det))
        return 0;
    s = ((da_db * ab_db) - ((((ab[Y] * da[Y]) + (ab[X] * da[X])) + (ab[Z] * da[Z])) * bb)) / det;
    if (!(s >= 0.0f) || s > 1.0f)
        return 0;
    t = ((s * da_db) + ab_db) / bb;
    if (!(t >= 0.0f) || t > 1.0f)
        return 0;
    on_a[X] = (da[X] * s) + a0[X];
    on_a[Y] = (da[Y] * s) + a0[Y];
    on_a[Z] = (da[Z] * s) + a0[Z];
    on_b[X] = (db[X] * t) + b0[X];
    on_b[Y] = (db[Y] * t) + b0[Y];
    on_b[Z] = (db[Z] * t) + b0[Z];
    *distance = sqrt_float((((on_b[Y] - on_a[Y]) * (on_b[Y] - on_a[Y])) + ((on_b[X] - on_a[X]) * (on_b[X] - on_a[X])))
                           + ((on_b[Z] - on_a[Z]) * (on_b[Z] - on_a[Z])));
    return 1;
}

int collision_edge_side(const float p0[3], const float p1[3], const float c[3], const float e0[3], const float e1[3])
{
    /* Normal of the triangle c e0 e1. */
    float u[3] = {e0[X] - c[X], e0[Y] - c[Y], e0[Z] - c[Z]};
    float w[3] = {e1[X] - c[X], e1[Y] - c[Y], e1[Z] - c[Z]};
    float m[3] = {(w[Y] * u[Z]) - (w[Z] * u[Y]), (w[Z] * u[X]) - (w[X] * u[Z]), (w[X] * u[Y]) - (w[Y] * u[X])};
    float length = sqrt_float(((m[Y] * m[Y]) + (m[X] * m[X])) + (m[Z] * m[Z]));
    float n[3], side1, side0, along, f, q[3], d[3];

    if (is_zero_or_nan(length)) {
        n[X] = n[Y] = n[Z] = 0.0f;
    } else {
        float inverse = 1.0f / length;
        n[X] = inverse * m[X];
        n[Y] = inverse * m[Y];
        n[Z] = inverse * m[Z];
    }

    /* p0 and p1 must not both be on the same side of the plane. */
    side1 = (((c[X] - p1[X]) * n[X]) + ((c[Y] - p1[Y]) * n[Y])) + ((c[Z] - p1[Z]) * n[Z]);
    side0 = (((c[X] - p0[X]) * n[X]) + ((c[Y] - p0[Y]) * n[Y])) + ((c[Z] - p0[Z]) * n[Z]);
    if (side0 > 0.0f) {
        if (side1 > 0.0f)
            return 0;
    } else if (!(side0 >= 0.0f)) {
        if (!(side1 >= 0.0f))
            return 0;
    }

    /* Where p0-p1 crosses the plane must lie inside the triangle. */
    d[Z] = p1[Z] - p0[Z];
    d[X] = p1[X] - p0[X];
    d[Y] = p1[Y] - p0[Y];
    along = ((d[X] * n[X]) + (d[Y] * n[Y])) + (d[Z] * n[Z]);
    if (is_zero_or_nan(along))
        return 0;
    f = side0 / along;
    q[X] = (f * d[X]) + p0[X];
    q[Y] = (f * d[Y]) + p0[Y];
    q[Z] = (f * d[Z]) + p0[Z];
    if (!((((((q[Y] - c[Y]) * u[Z]) - ((q[Z] - c[Z]) * u[Y])) * n[X])
           + ((((q[Z] - c[Z]) * u[X]) - ((q[X] - c[X]) * u[Z])) * n[Y]))
          + ((((q[X] - c[X]) * u[Y]) - ((q[Y] - c[Y]) * u[X])) * n[Z]) >= 0.0f))
        return 0;
    {
        float ey = e1[Y] - e0[Y], ez = e1[Z] - e0[Z];
        if (!((((((q[Y] - e0[Y]) * ez) - ((q[Z] - e0[Z]) * ey)) * n[X])
               + ((((q[Z] - e0[Z]) * (e1[X] - e0[X])) - ((q[X] - e0[X]) * ez)) * n[Y]))
              + ((((q[X] - e0[X]) * ey) - ((q[Y] - e0[Y]) * (e1[X] - e0[X]))) * n[Z]) >= 0.0f))
            return 0;
    }
    return (((((q[Y] - e1[Y]) * (c[Z] - e1[Z])) - ((q[Z] - e1[Z]) * (c[Y] - e1[Y]))) * n[X])
            + ((((q[Z] - e1[Z]) * (c[X] - e1[X])) - ((q[X] - e1[X]) * (c[Z] - e1[Z]))) * n[Y]))
           + ((((q[X] - e1[X]) * (c[Y] - e1[Y])) - ((q[Y] - e1[Y]) * (c[X] - e1[X]))) * n[Z]) >= 0.0f;
}

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
#define TRIPLES(frame, offset) ((float (*)[3])((frame) + (offset)))

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

        if (collision_mesh_point_faces((CollisionMeshHit *)hit, other, TRIPLES(frame, other_points),
                                       TRIPLES(frame, other_normals), from, p)) {
            const float *n = hit + 3;
            float depth = ((hit[Y] - p[Y]) * n[Y] + (hit[X] - p[X]) * n[X]) + (hit[Z] - p[Z]) * n[Z];
            float offset_a[3] = {hit[X] - position_a[X], hit[Y] - position_a[Y], hit[Z] - position_a[Z]};
            float offset_b[3] = {hit[X] - position_b[X], hit[Y] - position_b[Y], hit[Z] - position_b[Z]};
            sr_physics_add_contact(body_a, body_b, offset_a, offset_b, n, depth, CONTACT_K1, CONTACT_K2, CONTACT_K3);
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

    collision_mesh_transform(TRIPLES(frame, FRAME_POINTS_A), TRIPLES(frame, FRAME_NORMALS_A), a, position_a, rotation_a);
    collision_mesh_transform(TRIPLES(frame, FRAME_POINTS_B), TRIPLES(frame, FRAME_NORMALS_B), b, position_b, rotation_b);
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
            if (!collision_edge_edge(on_a, on_b, &depth, a0, a1, b0, b1))
                continue;
            if (!(flags & 1) && !collision_edge_side(b0, b1, AT(frame, FRAME_VERTICES_A) + 3 * ea->vertex, a0, a1))
                continue;
            if (!collision_edge_side(a0, a1, AT(frame, FRAME_VERTICES_B) + 3 * eb->vertex, b0, b1))
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
                sr_physics_add_contact(body_a, body_b, offset_a, offset_b, n, depth, CONTACT_K1, CONTACT_K2, CONTACT_K3);
            }
            any = 1;
        }
    }
    return any;
}
