/* Swept-sphere collision. See collision.h. */
#include "arith.h"
#include "collision.h"
#include "math3d.h"

enum { X, Y, Z };

#define NO_HIT_DISTANCE 65536.0f
#define PUSH_THROUGH -1.125f       /* how far past the face, in radii, a sweep that ends in front is extended */

static float clamp_unit(float value)
{
    return min_float(max_float(value, 0.0f), 1.0f);
}

int collision_segment_segment(float on_a[3], float on_b[3], float *distance, const float a0[3], const float a1[3],
                              const float b0[3], const float b1[3], float radius)
{
    float da[3] = {a1[X] - a0[X], a1[Y] - a0[Y], a1[Z] - a0[Z]};
    float db[3] = {b1[X] - b0[X], b1[Y] - b0[Y], b1[Z] - b0[Z]};
    float r[3] = {a0[X] - b0[X], a0[Y] - b0[Y], a0[Z] - b0[Z]};
    float aa = (da[Y] * da[Y] + da[X] * da[X]) + da[Z] * da[Z];
    float bb = (db[Y] * db[Y] + db[X] * db[X]) + db[Z] * db[Z];
    float ar = (r[Y] * da[Y] + r[X] * da[X]) + r[Z] * da[Z];
    float br = (r[Y] * db[Y] + r[X] * db[X]) + r[Z] * db[Z];
    float ab = (db[Y] * da[Y] + db[X] * da[X]) + db[Z] * da[Z];
    float denominator = bb * aa - ab * ab;
    float s, t, dx, dy, dz;

    /* s along a, t along b; parallel segments (or a NaN) start from s = 0. */
    s = is_zero_or_nan(denominator) ? 0.0f : clamp_unit((ab * br - ar * bb) / denominator);
    t = (s * ab + br) / bb;
    if (!(t >= 0.0f)) {
        t = 0.0f;
        s = clamp_unit(-(ar / aa));
    } else if (t > 1.0f) {
        t = 1.0f;
        s = clamp_unit((ab - ar) / aa);
    }

    on_a[X] = da[X] * s + a0[X];
    on_a[Y] = da[Y] * s + a0[Y];
    on_a[Z] = da[Z] * s + a0[Z];
    on_b[X] = db[X] * t + b0[X];
    on_b[Y] = db[Y] * t + b0[Y];
    on_b[Z] = db[Z] * t + b0[Z];
    dx = on_b[X] - on_a[X];
    dy = on_b[Y] - on_a[Y];
    dz = on_b[Z] - on_a[Z];
    *distance = sqrt_float((dy * dy + dx * dx) + dz * dz);
    return radius > *distance;
}

int collision_line_plane(float point[3], const float normal[3], float *t, const float from[3], const float to[3],
                         const float plane_point[3])
{
    float behind = ((plane_point[Y] - to[Y]) * normal[Y] + (plane_point[X] - to[X]) * normal[X])
                 + (plane_point[Z] - to[Z]) * normal[Z];
    float ahead, along, d[3];

    if (!(behind >= 0.0f))              /* comiss/jb: NaN fails too */
        return 0;
    ahead = ((plane_point[X] - from[X]) * normal[X] + (plane_point[Y] - from[Y]) * normal[Y])
          + (plane_point[Z] - from[Z]) * normal[Z];
    if (ahead > 0.0f)
        return 0;
    *t = ahead;
    d[X] = to[X] - from[X];
    d[Y] = to[Y] - from[Y];
    d[Z] = to[Z] - from[Z];
    along = (d[Y] * normal[Y] + d[X] * normal[X]) + d[Z] * normal[Z];
    if (is_zero_or_nan(along))
        return 0;
    *t = ahead / along;
    point[X] = *t * d[X] + from[X];
    point[Y] = *t * d[Y] + from[Y];
    point[Z] = *t * d[Z] + from[Z];
    return 1;
}

/* Which side of edge from-to the point lies on, seen along the normal:
   ((p - from) x (to - from)) . normal. */
static float edge_side(const float p[3], const float from[3], const float to[3], const float normal[3])
{
    float px = p[X] - from[X], py = p[Y] - from[Y], pz = p[Z] - from[Z];
    float ex = to[X] - from[X], ey = to[Y] - from[Y], ez = to[Z] - from[Z];

    return ((py * ez - pz * ey) * normal[X] + (pz * ex - px * ez) * normal[Y]) + (px * ey - py * ex) * normal[Z];
}

int collision_line_triangle(float point[3], const float normal[3], float *t, const float from[3], const float to[3],
                            const float a[3], const float b[3], const float c[3])
{
    if (!collision_line_plane(point, normal, t, from, to, a))
        return 0;
    /* comiss/jb on each: a NaN side counts as outside. */
    return edge_side(point, a, b, normal) >= 0.0f && edge_side(point, b, c, normal) >= 0.0f
        && edge_side(point, c, a, normal) >= 0.0f;
}

static float distance_between(const float a[3], const float b[3])
{
    float dx = a[X] - b[X], dy = a[Y] - b[Y], dz = a[Z] - b[Z];
    return sqrt_float((dy * dy + dx * dx) + dz * dz);
}

int collision_sphere_triangle(float point[3], float normal[3], float *distance, const float from[3], const float to[3],
                              float radius, const float a[3], const float b[3], const float c[3])
{
    float scratch = radius;            /* the original lets the plane test write its fraction over the radius */
    float d_from, d_to, best, d, on_edge[3];
    const float *corners[4] = {a, b, c, a};

    math_triangle_normal(normal, a, b, c);
    d_from = ((from[X] - a[X]) * normal[X] + (from[Y] - a[Y]) * normal[Y]) + (from[Z] - a[Z]) * normal[Z];
    d_to = ((to[Y] - a[Y]) * normal[Y] + (to[X] - a[X]) * normal[X]) + (to[Z] - a[Z]) * normal[Z];

    /* Both ends a radius or more in front: no contact. */
    if (d_from >= radius && d_to >= radius)
        return 0;

    if (d_from > 0.0f && d_to > 0.0f) {
        /* Both in front but one within a radius: from the nearer end, push
           a little more than a radius straight through the face. */
        const float *start = d_from >= d_to ? to : from;
        float k = radius * PUSH_THROUGH;
        float through[3] = {normal[X] * k + start[X], normal[Y] * k + start[Y], normal[Z] * k + start[Z]};

        if (collision_line_triangle(point, normal, &scratch, start, through, a, b, c)) {
            *distance = distance_between(point, start);
            return 1;
        }
    } else {
        /* An end behind the face (a NaN distance counts as behind): fail when
           both are, else see whether the sweep passes through the face. */
        if (!(d_from >= 0.0f) && !(d_to >= 0.0f))
            return 0;
        if (collision_line_triangle(point, normal, &scratch, from, to, a, b, c)
            || collision_line_triangle(point, normal, &scratch, to, from, a, b, c)) {
            *distance = 0.0f;
            return 1;
        }
    }

    /* Otherwise the nearest of the three edges within a radius. */
    best = NO_HIT_DISTANCE;
    for (int edge = 0; edge < 3; edge++) {
        float on_sweep[3];
        int hit = collision_segment_segment(on_edge, on_sweep, &d, corners[edge], corners[edge + 1], from, to, radius);
        /* The first edge must be strictly nearer; the others replace it
           unless as far or farther (comiss/jae: a NaN distance replaces). */
        int nearer = edge == 0 ? best > d : !(d >= best);

        if (hit && nearer) {
            point[X] = on_edge[X];
            point[Y] = on_edge[Y];
            point[Z] = on_edge[Z];
            normal[X] = on_sweep[X] - point[X];
            normal[Y] = on_sweep[Y] - point[Y];
            normal[Z] = on_sweep[Z] - point[Z];
            math_vec3_normalize(normal, normal);
            best = d;
        }
    }
    if (best >= NO_HIT_DISTANCE)          /* comiss/jb: a NaN distance is kept */
        return 0;
    *distance = best;
    return 1;
}

/* ---- trains ------------------------------------------------------------------ */

#include "physics.h"

#define TRAIN_NO_HIT NO_HIT_DISTANCE

/* p in the vehicle's axes to world: rotation rows applied in the original's order. */
static void vehicle_to_world(float out[3], const PhysicsVehicle *v, const float p[3])
{
    const float *m = v->rotation;
    out[X] = ((m[0] * p[X] + v->position[X]) + m[3] * p[Y]) + m[6] * p[Z];
    out[Y] = ((m[1] * p[X] + v->position[Y]) + m[4] * p[Y]) + m[7] * p[Z];
    out[Z] = ((m[2] * p[X] + v->position[Z]) + m[5] * p[Y]) + m[8] * p[Z];
}

/* One triangle of the sweep; keeps the hit when it is nearer than the best so far. */
static void sweep_mesh_triangle(const float from[3], const float to[3], float radius, const float a[3],
                                 const float b[3], const float c[3])
{
    float point[4], normal[3], distance;

    if (collision_sphere_triangle(point, normal, &distance, from, to, radius, a, b, c)
        && collision_hit.distance > distance) {
        for (int k = 0; k < 3; k++) {
            collision_hit.point[k] = point[k];
            collision_hit.normal[k] = normal[k];
        }
        collision_hit.distance = distance;
    }
}

/* Whether a sweep stays out of the vehicle's box, by the radius, at both
   ends on one side (comiss: a NaN counts as outside below the box). */
static int sweep_misses_box(const PhysicsVehicle *v, const float from[3], const float to[3], float radius)
{
    for (int k = 0; k < 3; k++)
        if (!(from[k] + radius >= v->bounds_min[k]) && !(radius + to[k] >= v->bounds_min[k]))
            return 1;
    for (int k = 0; k < 3; k++)
        if (from[k] - radius > v->bounds_max[k] && to[k] - radius > v->bounds_max[k])
            return 1;
    return 0;
}

int collision_sweep_vehicle(int index, const float from[3], const float to[3], float radius)
{
    const PhysicsVehicle *v = &physics_vehicles[index];
    int type = v->type;
    static float world[VEHICLE_MESH_VERTEX_CAPACITY][3];   /* the original's is on the stack */

    if (type == 13)
        return collision_sweep_train(index, from, to, radius);
    if (sweep_misses_box(v, from, to, radius))
        return 0;

    collision_hit.distance = NO_HIT_DISTANCE;
    for (int i = 0; i < vehicle_hull_vertex_count(type); i++)
        vehicle_to_world(world[i], v, vehicle_hull_vertices(type)[i]);
    for (int f = 0; f < vehicle_hull_face_count(type); f++) {
        const VehicleHullFace *face = &vehicle_hull_faces(type)[f];
        sweep_mesh_triangle(from, to, radius, world[face->corner[0]], world[face->corner[1]], world[face->corner[2]]);
        if (face->corner_count == 4)
            sweep_mesh_triangle(from, to, radius, world[face->corner[0]], world[face->corner[2]],
                                 world[face->corner[3]]);
    }
    return !(collision_hit.distance >= NO_HIT_DISTANCE);
}

int collision_sweep_train(int index, const float from[3], const float to[3], float radius)
{
    const PhysicsVehicle *v = &physics_vehicles[index];
    int type = v->type;
    static float world[VEHICLE_MESH_VERTEX_CAPACITY][3];   /* the original's is 256 entries on the stack */

    if (sweep_misses_box(v, from, to, radius))
        return 0;

    collision_hit.distance = TRAIN_NO_HIT;
    for (int i = 0; i < vehicle_mesh_vertex_count(type); i++)
        vehicle_to_world(world[i], v, vehicle_mesh_vertices(type)[i]);

    for (int f = 0; f < vehicle_mesh_face_count(type); f++) {
        const VehicleMeshFace *face = &vehicle_mesh_faces(type)[f];
        sweep_mesh_triangle(from, to, radius, world[face->corner[0]], world[face->corner[1]], world[face->corner[2]]);
        if (face->corner_count == 4)
            sweep_mesh_triangle(from, to, radius, world[face->corner[0]], world[face->corner[2]],
                                 world[face->corner[3]]);
    }

    for (int w = 0; w < vehicle_mesh_window_count(type); w++) {
        const VehicleMeshWindow *window = &vehicle_mesh_windows(type)[w];
        float q[4][3];

        if (vehicle_window_broken(index, w))
            continue;
        for (int k = 0; k < 4; k++)
            vehicle_to_world(q[k], v, window->corner[k]);
        sweep_mesh_triangle(from, to, radius, q[0], q[1], q[2]);
        sweep_mesh_triangle(from, to, radius, q[0], q[2], q[3]);
        sweep_mesh_triangle(from, to, radius, q[0], q[2], q[1]);
        sweep_mesh_triangle(from, to, radius, q[0], q[3], q[2]);
    }

    return !(collision_hit.distance >= NO_HIT_DISTANCE);
}

/* ---- rays against vehicles ----------------------------------------------------- */

/* Still in src/client/: the hit point's weights in triangle a b c. 0x14002D370 */
extern float *sub_14002D370(float *weights, float *point, float *a, float *b, float *c);

int collision_ray_sphere(float point[3], float normal[3], float *fraction, const float from[3], const float to[3],
                         const float centre[3], float radius)
{
    float d[3] = {to[X] - from[X], to[Y] - from[Y], to[Z] - from[Z]};
    float c[3] = {centre[X] - from[X], centre[Y] - from[Y], centre[Z] - from[Z]};
    float length = sqrt_float((d[Y] * d[Y] + d[X] * d[X]) + d[Z] * d[Z]);
    float dir[3], along, radius2, centre2, miss2, t;

    if (is_zero_or_nan(length)) {
        dir[X] = dir[Y] = dir[Z] = 0.0f;
    } else {
        float inverse = 1.0f / length;
        dir[X] = d[X] * inverse;
        dir[Y] = d[Y] * inverse;
        dir[Z] = d[Z] * inverse;
    }
    along = (c[Y] * dir[Y] + c[X] * dir[X]) + c[Z] * dir[Z];
    *fraction = along;
    if (!(along >= 0.0f))                     /* comiss/jb: behind the start, or NaN */
        return 0;
    radius2 = radius * radius;
    centre2 = (c[Y] * c[Y] + c[X] * c[X]) + c[Z] * c[Z];
    miss2 = centre2 - along * along;
    if (miss2 > radius2)                      /* passes outside the sphere */
        return 0;
    if (!(centre2 >= radius2))                /* starts inside it (or NaN) */
        return 0;
    t = (along - sqrt_float(radius2 - miss2)) / length;
    *fraction = t;
    if (t > 1.0f)
        return 0;
    point[X] = (to[X] - from[X]) * t + from[X];
    point[Y] = (to[Y] - from[Y]) * t + from[Y];
    point[Z] = (to[Z] - from[Z]) * t + from[Z];
    normal[X] = point[X] - centre[X];
    normal[Y] = point[Y] - centre[Y];
    normal[Z] = point[Z] - centre[Z];
    math_vec3_normalize(normal, normal);
    return 1;
}

/* (c - a) x (b - a), normalized (zero for a degenerate or NaN face). */
static void face_normal(float n[3], const float a[3], const float b[3], const float c[3])
{
    float d1[3] = {b[X] - a[X], b[Y] - a[Y], b[Z] - a[Z]};
    float d2[3] = {c[X] - a[X], c[Y] - a[Y], c[Z] - a[Z]};
    float x = d2[Y] * d1[Z] - d2[Z] * d1[Y];
    float y = d2[Z] * d1[X] - d2[X] * d1[Z];
    float z = d2[X] * d1[Y] - d2[Y] * d1[X];
    float length = sqrt_float((y * y + x * x) + z * z);

    if (is_zero_or_nan(length)) {
        n[X] = n[Y] = n[Z] = 0.0f;
    } else {
        float inverse = 1.0f / length;
        n[X] = x * inverse;
        n[Y] = y * inverse;
        n[Z] = z * inverse;
    }
}

/* Records a face or window hit of a ray (kind 0 face, 1 window). */
static void record_ray_hit(int vehicle, const float point[3], const float normal[3], float fraction, int window,
                           int part, const float *a, const float *b, const float *c)
{
    uint32_t value = vehicle_unknown_f0(vehicle);

    collision_hit.unknown_34[0] = value;
    collision_hit.unknown_34[1] = collision_hit.unknown_34[0];
    collision_hit.unknown_34[2] = collision_hit.unknown_34[0];
    for (int k = 0; k < 3; k++) {
        collision_hit.point[k] = point[k];
        collision_hit.normal[k] = normal[k];
    }
    collision_hit.fraction = fraction;
    collision_hit.window = window;
    collision_hit.part = part;
    sub_14002D370(collision_hit.weights, collision_hit.point, (float *)a, (float *)b, (float *)c);
    collision_hit.unknown_20[0] = 0;
    collision_hit.unknown_20[1] = 0;
    collision_hit.unknown_20[2] = 0;
}

/* A face of the mesh, seen from its front only (collision_line_triangle). */
static void ray_face(int vehicle, int face, const float from[3], const float to[3], const float a[3],
                     const float b[3], const float c[3])
{
    float n[3], point[3], t;

    face_normal(n, a, b, c);
    if (collision_line_triangle(point, n, &t, from, to, a, b, c) && !(t >= collision_hit.fraction))
        record_ray_hit(vehicle, point, n, t, 0, face, a, b, c);
}

/* Whether the ray's ends lie on opposite sides of a plane (or one on it),
   given their signed distances: comiss with ja / jae / jb, so a NaN from
   distance counts as behind and a NaN to distance as crossing a front one. */
static int straddles(float from_side, float to_side)
{
    if (from_side > 0.0f)
        return !(to_side > 0.0f);
    if (from_side >= 0.0f)
        return 1;
    return to_side >= 0.0f;
}

/* A triangle of a window, from either side. */
static void ray_window_triangle(int vehicle, int window, const float from[3], const float to[3], const float a[3],
                                const float b[3], const float c[3])
{
    float n[3], d[3], point[3], from_side, to_side, along, t;

    face_normal(n, a, b, c);
    to_side = ((a[X] - to[X]) * n[X] + (a[Y] - to[Y]) * n[Y]) + (a[Z] - to[Z]) * n[Z];
    from_side = ((a[X] - from[X]) * n[X] + (a[Y] - from[Y]) * n[Y]) + (a[Z] - from[Z]) * n[Z];
    if (!straddles(from_side, to_side))
        return;
    d[X] = to[X] - from[X];
    d[Y] = to[Y] - from[Y];
    d[Z] = to[Z] - from[Z];
    along = (n[Y] * d[Y] + n[X] * d[X]) + n[Z] * d[Z];
    if (is_zero_or_nan(along))
        return;
    t = from_side / along;
    point[X] = d[X] * t + from[X];
    point[Y] = d[Y] * t + from[Y];
    point[Z] = d[Z] * t + from[Z];
    /* comiss/jb on each side: a NaN counts as outside. */
    if (edge_side(point, a, b, n) >= 0.0f && edge_side(point, b, c, n) >= 0.0f && edge_side(point, c, a, n) >= 0.0f
        && !(t >= collision_hit.fraction))
        record_ray_hit(vehicle, point, n, t, 1, window, a, b, c);
}

int collision_ray_vehicle(int index, const float from[3], const float to[3], int wheels)
{
    const PhysicsVehicle *v = &physics_vehicles[index];
    int type = v->type;
    static float world[VEHICLE_MESH_VERTEX_CAPACITY][3];   /* the original's is 256 entries on the stack */

    /* Both ends beyond the same side of the vehicle's box (comiss: a NaN
       `from` counts as below the box and a NaN `to` as above it). */
    for (int k = 0; k < 3; k++)
        if (!(from[k] >= v->bounds_min[k]) && v->bounds_min[k] > to[k])
            return 0;
    for (int k = 0; k < 3; k++)
        if (from[k] > v->bounds_max[k] && !(v->bounds_max[k] >= to[k]))
            return 0;

    collision_hit.fraction = 1.0f;
    for (int i = 0; i < vehicle_mesh_vertex_count(type); i++)
        vehicle_to_world(world[i], v, vehicle_mesh_vertices(type)[i]);

    for (int f = 0; f < vehicle_mesh_face_count(type); f++) {
        const VehicleMeshFace *face = &vehicle_mesh_faces(type)[f];
        const float *a = world[face->corner[0]], *b = world[face->corner[1]], *c = world[face->corner[2]];
        ray_face(index, f, from, to, a, b, c);
        if (face->corner_count == 4)
            ray_face(index, f, from, to, a, c, world[face->corner[3]]);
    }

    for (int w = 0; w < vehicle_mesh_window_count(type); w++) {
        const VehicleMeshWindow *window = &vehicle_mesh_windows(type)[w];
        float q[4][3];

        if (vehicle_window_broken(index, w))
            continue;
        for (int k = 0; k < 4; k++)
            vehicle_to_world(q[k], v, window->corner[k]);
        ray_window_triangle(index, w, from, to, q[0], q[1], q[2]);
        ray_window_triangle(index, w, from, to, q[0], q[2], q[3]);
    }

    if (wheels) {
        for (int w = 0; w < vehicle_wheel_count(index); w++) {
            float point[3], normal[3], t;
            if (collision_ray_sphere(point, normal, &t, from, to, vehicle_wheel_point(index, w),
                                     vehicle_wheel_radius(index, w))
                && !(t >= collision_hit.fraction)) {
                for (int k = 0; k < 3; k++) {
                    collision_hit.point[k] = point[k];
                    collision_hit.normal[k] = normal[k];
                }
                collision_hit.fraction = t;
                collision_hit.part = -1;
                collision_hit.unknown_34[0] = (uint32_t)w;
            }
        }
    }

    return !(collision_hit.fraction >= 1.0f);
}
