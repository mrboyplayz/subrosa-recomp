/* A wheel against triangles. See vehicle.h.
 *
 * For these tests a wheel is a flat disc: a centre, the direction of its
 * axle and a radius. It touches a triangle either with the lowest point of
 * its rim into the triangle's face, or where its plane cuts one of the
 * triangle's edges.
 */
#include "vehicle.h"
#include "collision.h"
#include "math3d.h"
#include "world_streets.h"
#include "arith.h"

int collision_edge_plane(float point[3], const float normal[3], float *t, const float a[3], const float b[3],
                         const float on_plane[3])
{
    float side_a = (((on_plane[0] - a[0]) * normal[0]) + ((on_plane[1] - a[1]) * normal[1]))
                   + ((on_plane[2] - a[2]) * normal[2]);
    float side_b = (((on_plane[1] - b[1]) * normal[1]) + ((on_plane[0] - b[0]) * normal[0]))
                   + ((on_plane[2] - b[2]) * normal[2]);
    float edge[3], along;

    /* Both ends on one side of the plane: no crossing. */
    if (side_a > 0.0f) {
        if (side_b > 0.0f)
            return 0;
    } else if (!(side_a >= 0.0f)) {
        if (!(side_b >= 0.0f))
            return 0;
    }
    *t = side_a;
    edge[0] = b[0] - a[0];
    edge[1] = b[1] - a[1];
    edge[2] = b[2] - a[2];
    along = ((edge[1] * normal[1]) + (edge[0] * normal[0])) + (edge[2] * normal[2]);
    if (is_zero_or_nan_quiet(along))
        return 0;
    *t = side_a / along;
    point[0] = (*t * edge[0]) + a[0];
    point[1] = (*t * edge[1]) + a[1];
    point[2] = (*t * edge[2]) + a[2];
    return 1;
}

static float distance_between(const float a[3], const float b[3])
{
    return sqrt_float((((a[1] - b[1]) * (a[1] - b[1])) + ((a[0] - b[0]) * (a[0] - b[0])))
                      + ((a[2] - b[2]) * (a[2] - b[2])));
}

/* Which side of the triangle's edge from -> to the point lies on, seen
   along the normal: not negative when inside. */
static float edge_side(const float point[3], const float from[3], const float to[3], const float normal[3])
{
    float ex = to[0] - from[0], ey = to[1] - from[1], ez = to[2] - from[2];
    float px = point[0] - from[0], py = point[1] - from[1], pz = point[2] - from[2];

    return ((((py * ez) - (pz * ey)) * normal[0]) + (((pz * ex) - (px * ez)) * normal[1]))
           + (((px * ey) - (py * ex)) * normal[2]);
}

/* The wheel's plane against one edge: where they cross, if that is nearer
   the centre than what has been found, becomes the contact, with the
   normal pointing from there to the centre. */
static void wheel_edge(float point[3], float normal[3], float *distance, const float centre[3], const float axle[3],
                       const float from[3], const float to[3])
{
    float crossing[3], t, away;

    if (!collision_edge_plane(crossing, axle, &t, from, to, centre))
        return;
    away = distance_between(centre, crossing);
    if (away >= *distance)
        return;
    point[0] = crossing[0];
    point[1] = crossing[1];
    point[2] = crossing[2];
    normal[0] = centre[0] - crossing[0];
    normal[1] = centre[1] - crossing[1];
    normal[2] = centre[2] - crossing[2];
    math_vec3_normalize(normal, normal);
    *distance = away;
}

int collision_wheel_triangle(float point[3], float normal[3], float *distance, const float centre[3],
                             const float axle[3], float radius, const float a[3], const float b[3], const float c[3])
{
    /* The line in which the triangle's plane cuts the wheel's plane runs
       along normal x axle. */
    float line[3] = {(axle[2] * normal[1]) - (axle[1] * normal[2]), (axle[0] * normal[2]) - (normal[0] * axle[2]),
                     (normal[0] * axle[1]) - (axle[0] * normal[1])};
    float line_squared = ((line[1] * line[1]) + (line[0] * line[0])) + (line[2] * line[2]);

    *distance = radius;
    if (line_squared >= 0.0000152587890625f) {
        float centre_along = ((centre[1] * axle[1]) + (centre[0] * axle[0])) + (centre[2] * axle[2]);
        float face_along = ((normal[1] * a[1]) + (normal[0] * a[0])) + (normal[2] * a[2]);
        float mix[3] = {(centre_along * normal[0]) - (face_along * axle[0]),
                        (centre_along * normal[1]) - (face_along * axle[1]),
                        (centre_along * normal[2]) - (face_along * axle[2])};
        float inverse = 1.0f / line_squared;
        /* A point on that line, then the point of it nearest the centre. */
        float on_line[3] = {((line[1] * mix[2]) - (line[2] * mix[1])) * inverse,
                            ((line[2] * mix[0]) - (line[0] * mix[2])) * inverse,
                            ((line[0] * mix[1]) - (line[1] * mix[0])) * inverse};
        float length = sqrt_float(line_squared);
        float to_centre[3] = {centre[0] - on_line[0], centre[1] - on_line[1], centre[2] - on_line[2]};
        float direction[3] = {0.0f, 0.0f, 0.0f};
        float along, away;

        if (!is_zero_or_nan_quiet(length)) {
            float inverse_length = 1.0f / length;

            direction[0] = line[0] * inverse_length;
            direction[1] = line[1] * inverse_length;
            direction[2] = line[2] * inverse_length;
        }
        along = ((direction[1] * to_centre[1]) + (direction[0] * to_centre[0])) + (direction[2] * to_centre[2]);
        point[0] = (direction[0] * along) + on_line[0];
        point[1] = (direction[1] * along) + on_line[1];
        point[2] = (direction[2] * along) + on_line[2];
        away = sqrt_float((((centre[0] - point[0]) * (centre[0] - point[0])) + ((centre[1] - point[1]) * (centre[1] - point[1])))
                          + ((centre[2] - point[2]) * (centre[2] - point[2])));
        /* Within the rim's reach and inside the triangle: the face is touched. */
        if (!(away >= radius) && edge_side(point, a, b, normal) >= 0.0f && edge_side(point, b, c, normal) >= 0.0f
            && edge_side(point, c, a, normal) >= 0.0f)
            *distance = away;
    }
    wheel_edge(point, normal, distance, centre, axle, a, b);
    wheel_edge(point, normal, distance, centre, axle, b, c);
    wheel_edge(point, normal, distance, centre, axle, c, a);
    return radius > *distance;
}

int collision_wheel_triangles(CollisionWheelHit *hit, const StreetTriangleList *list, const float centre[3],
                              const float axle[3], float radius)
{
    hit->distance = 65536.0f;
    if (list->count <= 0)
        return 0;
    for (int i = 0; i < list->count; i++) {
        const float *a = list->triangle[i].corner[0], *b = list->triangle[i].corner[1], *c = list->triangle[i].corner[2];
        float bx = b[0] - a[0], by = b[1] - a[1], bz = b[2] - a[2];
        float cx = c[0] - a[0], cy = c[1] - a[1], cz = c[2] - a[2];
        float x = (cy * bz) - (cz * by);
        float z = (cx * by) - (cy * bx);
        float y = (cz * bx) - (cx * bz);
        float length = sqrt_float(((y * y) + (x * x)) + (z * z));
        float normal[3] = {0.0f, 0.0f, 0.0f};
        float point[3], distance;

        if (!is_zero_or_nan_quiet(length)) {
            float inverse = 1.0f / length;

            normal[0] = x * inverse;
            normal[1] = y * inverse;
            normal[2] = z * inverse;
        }
        if (collision_wheel_triangle(point, normal, &distance, centre, axle, radius, a, b, c)
            && !(distance >= hit->distance)) {
            hit->point[0] = point[0];
            hit->point[1] = point[1];
            hit->point[2] = point[2];
            hit->normal[0] = normal[0];
            hit->normal[1] = normal[1];
            hit->normal[2] = normal[2];
            hit->distance = distance;
        }
    }
    return !(hit->distance >= 65536.0f);
}
