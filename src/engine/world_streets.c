/* World map streets. See world_streets.h. */
#include <string.h>
#include "arith.h"
#include "crt.h"
#include "math3d.h"
#include "world_streets.h"

/* The original's own cosf (0x1402401F0, named so in the client). */
extern float crt_cosf(float x) __asm__("cosf");

enum { NEAR_LEFT, NEAR_RIGHT, FAR_RIGHT, FAR_LEFT };
enum { X, Y, Z };

/* ---- filing a street into the cells ---------------------------------------- */

/* Grows [low, high] to take in value. The original's comparisons (comiss
   with jbe / jae): a NaN never lowers the minimum but always replaces the
   maximum. */
static void grow_range(float *low, float *high, float value)
{
    if (*low > value)
        *low = value;
    if (!(*high >= value))
        *high = value;
}

void world_file_street(int index)
{
    Street *street = &world_streets[index];

    for (int k = 0; k < 3; k++) {
        street->bounds_min[k] = 16777216.0f;
        street->bounds_max[k] = -16777216.0f;
    }
    for (int v = 0; v < street->vertex_count; v++)
        for (int k = 0; k < 3; k++)
            grow_range(&street->bounds_min[k], &street->bounds_max[k], street->vertex[v][k]);

    for (int t = 0; t < street->triangle_count; t++) {
        const int32_t *corner = street->triangle[t];
        float *low = &street->triangle_bounds[t][0], *high = &street->triangle_bounds[t][3];

        math_triangle_normal(street->triangle_normal[t], street->vertex[corner[0]], street->vertex[corner[1]],
                             street->vertex[corner[2]]);
        for (int k = 0; k < 3; k++)
            low[k] = high[k] = street->vertex[corner[0]][k];
        for (int i = 1; i < 3; i++) {
            const float *point = street->vertex[corner[i]];
            for (int k = 0; k < 3; k++)
                grow_range(&low[k], &high[k], point[k]);
        }
    }

    {
        int first_column = truncate_float(street->bounds_min[X] * 0.015625f);
        int last_column = truncate_float(street->bounds_max[X] * 0.015625f);
        int last_row = truncate_float(street->bounds_max[Z] * 0.015625f);
        int first_row = truncate_float(street->bounds_min[Z] * 0.015625f);

        for (int row = first_row; row <= last_row; row++) {
            if ((unsigned int)row >= STREET_CELLS_ACROSS)
                continue;
            for (int column = first_column; column <= last_column; column++) {
                StreetCell *cell;
                if ((unsigned int)column >= STREET_CELLS_ACROSS)
                    continue;
                cell = &world_street_cells[row * STREET_CELLS_ACROSS + column];
                if (cell->count < STREET_CELL_CAPACITY) {
                    cell->street[cell->count] = index;
                    cell->count++;
                }
            }
        }
    }
}

/* ---- one street ------------------------------------------------------------ */

#define THIRD 0.333333343f
#define STREET_STEP 0.0625f        /* 1/16: the grid's spacing in patch coordinates */
#define STREET_SIDE_HEIGHT 23.0f

/* The point a third of the way from `from` to `to`. */
static float third_of_way(float from, float to)
{
    return (to - from) * THIRD + from;
}

/* The unit vector (out_x, out_z) at right angles to the edge (dx, dz) on the
   ground, (dz, dx) / length; zero when the edge has no length (or a NaN one,
   as the original's ucomiss/je takes that branch too). */
static void edge_normal(float dx, float dz, float *out_x, float *out_z)
{
    float length = sqrt_float(dz * dz + dx * dx);

    if (is_zero_or_nan(length)) {
        *out_x = 0.0f;
        *out_z = 0.0f;
    } else {
        float inverse = 1.0f / length;
        *out_z = inverse * dx;
        *out_x = inverse * dz;
    }
}

/* Ground distance between two corners, a third of it. */
static float third_of_distance(const float a[3], const float b[3])
{
    float dz = a[Z] - b[Z], dx = a[X] - b[X];
    return sqrt_float(dz * dz + dx * dx) * THIRD;
}

/* Cubic Bernstein weighting of p0..p3 at t, in the original's order of
   operations: ((p2 3 s + t p3) t + p1 3 s s) t + s s s p0 with s = 1 - t. */
static float bezier(float p0, float p1, float p2, float p3, float t)
{
    float s = 1.0f - t;
    return (((p2 * 3.0f) * s + t * p3) * t + (p1 * 3.0f) * (s * s)) * t + (s * s) * (s * p0);
}

/* The same weighting grouped as the original's second pass does it:
   ((p3 t + s 3 p2) t + (s 3 p1) s) t + ((s p0) s) s. */
static float bezier_along(float p0, float p1, float p2, float p3, float t)
{
    float s = 1.0f - t;
    return ((p3 * t + s * (p2 * 3.0f)) * t + (s * (p1 * 3.0f)) * s) * t + ((s * p0) * s) * s;
}

/* The control net: row 0 is the near edge A..B, row 3 the far edge D..C;
   rows 1 and 2 step a third of each side's length straight out from the
   near and far edge. */
static void street_control_net(float net[4][4][3], const StreetQuad *quad, float lower, float raise)
{
    const float *a = quad->corner[NEAR_LEFT], *b = quad->corner[NEAR_RIGHT];
    const float *c = quad->corner[FAR_RIGHT], *d = quad->corner[FAR_LEFT];
    float near_x, near_z, far_x, far_z, length, lift, drop;

    for (int k = 0; k < 3; k++) {
        net[0][0][k] = a[k];
        net[0][3][k] = b[k];
        net[3][0][k] = d[k];
        net[3][3][k] = c[k];
    }

    edge_normal(b[X] - a[X], a[Z] - b[Z], &near_x, &near_z);
    lift = raise * THIRD;
    length = third_of_distance(d, a);
    net[1][0][X] = near_x * length + a[X];
    net[1][0][Y] = lift + a[Y];
    net[1][0][Z] = near_z * length + a[Z];
    length = third_of_distance(c, b);
    net[1][3][X] = near_x * length + b[X];
    net[1][3][Y] = lift + b[Y];
    net[1][3][Z] = near_z * length + b[Z];

    edge_normal(d[X] - c[X], c[Z] - d[Z], &far_x, &far_z);
    drop = lower * THIRD;
    length = third_of_distance(a, d);
    net[2][0][X] = far_x * length + d[X];
    net[2][0][Y] = d[Y] - drop;
    net[2][0][Z] = far_z * length + d[Z];
    length = third_of_distance(b, c);
    net[2][3][X] = far_x * length + c[X];
    net[2][3][Y] = c[Y] - drop;
    net[2][3][Z] = far_z * length + c[Z];

    for (int k = 0; k < 3; k++) {
        net[0][1][k] = third_of_way(a[k], b[k]);
        net[0][2][k] = third_of_way(b[k], a[k]);
        net[2][1][k] = third_of_way(net[2][0][k], net[2][3][k]);
        net[2][2][k] = third_of_way(net[2][3][k], net[2][0][k]);
        net[3][1][k] = third_of_way(d[k], c[k]);
        net[3][2][k] = third_of_way(c[k], d[k]);
    }
    /* Row 1's inner heights follow the corners' slope, not row 1's own. */
    net[1][1][X] = third_of_way(net[1][0][X], net[1][3][X]);
    net[1][1][Y] = (b[Y] - a[Y]) * THIRD + net[1][0][Y];
    net[1][1][Z] = third_of_way(net[1][0][Z], net[1][3][Z]);
    net[1][2][X] = third_of_way(net[1][3][X], net[1][0][X]);
    net[1][2][Y] = (a[Y] - b[Y]) * THIRD + net[1][3][Y];
    net[1][2][Z] = third_of_way(net[1][3][Z], net[1][0][Z]);
}

void world_add_street(unsigned int kind, const StreetQuad *quad, float lower, float raise)
{
    int index = world_street_count;
    Street *street = &world_streets[index];
    const float *a = quad->corner[NEAR_LEFT], *b = quad->corner[NEAR_RIGHT];
    const float *c = quad->corner[FAR_RIGHT], *d = quad->corner[FAR_LEFT];
    float net[4][4][3];
    float u = 0.0f;

    street->kind = (int32_t)kind;
    street->vertex_count = 0;
    street->triangle_count = 0;
    for (int k = 0; k < 3; k++)
        street->centre[k] = (((b[k] + a[k]) + c[k]) + d[k]) * 0.25f;

    street_control_net(net, quad, lower, raise);

    /* Rows of the grid run across the street, from the near edge to the far. */
    for (int row = 0; row < STREET_GRID; row++) {
        float across[4][3], v = 0.0f;

        for (int column = 0; column < 4; column++)
            for (int k = 0; k < 3; k++)
                across[column][k] = bezier(net[0][column][k], net[1][column][k], net[2][column][k],
                                           net[3][column][k], u);
        for (int point = 0; point < STREET_GRID; point++) {
            float *out = street->vertex[street->vertex_count];

            for (int k = 0; k < 3; k++)
                out[k] = bezier_along(across[0][k], across[1][k], across[2][k], across[3][k], v);
            if (point == 0 || point == STREET_GRID - 1)
                out[Y] = STREET_SIDE_HEIGHT;
            v = v + STREET_STEP;
            street->vertex_count++;
        }
        u = u + STREET_STEP;
    }

    /* Two triangles per grid cell: (r,c) (r,c+1) (r+1,c+1) and (r,c) (r+1,c+1) (r+1,c). */
    for (int row = 0; row < STREET_GRID - 1; row++) {
        for (int column = 0; column < STREET_GRID - 1; column++) {
            int here = row * STREET_GRID + column, below = here + STREET_GRID;
            int32_t *t = street->triangle[street->triangle_count++];
            t[0] = here; t[1] = here + 1; t[2] = below + 1;
            t = street->triangle[street->triangle_count++];
            t[0] = here; t[1] = below + 1; t[2] = below;
        }
    }

    street->range_first[0] = 0;
    street->range_first[1] = 0;
    street->range_end[0] = 0;
    street->range_end[1] = 0;
    street->range_first[2] = 0;
    street->range_end[2] = street->triangle_count;

    world_file_street(index);
    world_street_count++;
}

/* ---- railway segments ------------------------------------------------------ */

/* The client's unit axes, three vectors 16 bytes apart (0x1402F6178); the
   railway uses the up axis. Read from memory as the original does. */
extern const float math_axes[3][4] __asm__("sr_math_axes");

#define RAIL_SAMPLES 16
#define RAIL_STEP 0.0666666701f    /* 1/15 */

/* The point at t on the cubic from p0 to p3 with inner control points p1, p2:
   (((p2 3) s + p3 t) t + s s (p1 3)) t + s s (s p0) with s = 1 - t. */
static float rail_curve(float p0, float p1, float p2, float p3, float t)
{
    float s = 1.0f - t;
    return (((p2 * 3.0f) * s + p3 * t) * t + (s * s) * (p1 * 3.0f)) * t + (s * s) * (s * p0);
}

/* v / |v|, or zero when |v| is zero or NaN (the original's ucomiss/je). */
static void rail_normalize(float v[3])
{
    float length = sqrt_float((v[Y] * v[Y] + v[X] * v[X]) + v[Z] * v[Z]);

    if (is_zero_or_nan(length)) {
        v[X] = v[Y] = v[Z] = 0.0f;
    } else {
        float inverse = 1.0f / length;
        v[X] = inverse * v[X];
        v[Y] = inverse * v[Y];
        v[Z] = inverse * v[Z];
    }
}

typedef struct RailCurve {
    float start[3], start_control[3], end_control[3], end[3];
    const float *start_direction, *end_direction;
} RailCurve;

/* Sample `index` of the curve at t: its point, and the unit vector across
   the track (the direction of travel crossed with up). The first and last
   samples are the end points themselves. */
static void rail_sample(const RailCurve *curve, int index, float t, float point[3], float side[3])
{
    const float *up = math_axes[1];
    float s = 1.0f - t, along[3];

    for (int k = 0; k < 3; k++) {
        if (index == 0)
            point[k] = curve->start[k];
        else if (index == RAIL_SAMPLES - 1)
            point[k] = curve->end[k];
        else
            point[k] = rail_curve(curve->start[k], curve->start_control[k], curve->end_control[k], curve->end[k], t);
        along[k] = s * curve->start_direction[k] + t * curve->end_direction[k];
    }
    rail_normalize(along);
    side[X] = along[Y] * up[Z] - along[Z] * up[Y];
    side[Y] = along[Z] * up[X] - along[X] * up[Z];
    side[Z] = along[X] * up[Y] - along[Y] * up[X];
    rail_normalize(side);
}

static void put_vertex(Street *street, float x, float y, float z)
{
    float *out = street->vertex[street->vertex_count++];
    out[X] = x;
    out[Y] = y;
    out[Z] = z;
}

static void put_triangle(Street *street, int a, int b, int c)
{
    int32_t *t = street->triangle[street->triangle_count++];
    t[0] = a;
    t[1] = b;
    t[2] = c;
}

/* The two triangles joining edge i-j of one sample's four vertices (from
   `base`) to the same edge of the next sample. */
static void join_samples(Street *street, int base, int i, int j)
{
    put_triangle(street, base + i, base + 4 + i, base + 4 + j);
    put_triangle(street, base + i, base + 4 + j, base + j);
}

int world_add_rail(unsigned int kind, const float start[3], const float end[3], const float start_direction[3],
                   const float end_direction[3], float width)
{
    int index = world_street_count, embankment;
    Street *street = &world_streets[index];
    RailCurve curve;
    float dot, length, reach, back, left, right, t;

    street->kind = (int32_t)kind;
    street->vertex_count = 0;
    street->triangle_count = 0;
    for (int k = 0; k < 3; k++)
        street->centre[k] = (start[k] + end[k]) * 0.5f;
    dot = (start_direction[Y] * end_direction[Y] + start_direction[X] * end_direction[X])
        + end_direction[Z] * start_direction[Z];
    street->straightness = (dot * dot) * (dot * dot);

    /* Inner control points a third of the chord out along each end's direction. */
    length = sqrt_float(((end[Y] - start[Y]) * (end[Y] - start[Y]) + (end[X] - start[X]) * (end[X] - start[X]))
                        + (end[Z] - start[Z]) * (end[Z] - start[Z]));
    reach = length * THIRD;
    back = length * -THIRD;
    for (int k = 0; k < 3; k++) {
        curve.start[k] = start[k];
        curve.end[k] = end[k];
        curve.start_control[k] = reach * start_direction[k] + start[k];
        curve.end_control[k] = back * end_direction[k] + end[k];
    }
    curve.start_direction = start_direction;
    curve.end_direction = end_direction;
    left = width * -0.5f;
    right = width * 0.5f;

    /* Rails: per sample, left rail top, left rail foot, right rail foot, right rail top. */
    t = 0.0f;
    for (int i = 0; i < RAIL_SAMPLES; i++) {
        float p[3], n[3];
        rail_sample(&curve, i, t, p, n);
        t = t + RAIL_STEP;
        float lx = left * n[X] + p[X], ly = left * n[Y] + p[Y], lz = left * n[Z] + p[Z];
        float rx = right * n[X] + p[X], ry = right * n[Y] + p[Y], rz = right * n[Z] + p[Z];
        put_vertex(street, lx, ly + 0.5f, lz);
        put_vertex(street, lx, ly, lz);
        put_vertex(street, rx, ry, rz);
        put_vertex(street, rx, ry + 0.5f, rz);
    }

    /* Embankment: top from 6 left to 2 right of the curve, foot 2 lower from 5 left to 1 right. */
    embankment = street->vertex_count;
    t = 0.0f;
    for (int i = 0; i < RAIL_SAMPLES; i++) {
        float p[3], n[3];
        rail_sample(&curve, i, t, p, n);
        t = t + RAIL_STEP;
        put_vertex(street, p[X] - n[X] * 6.0f, p[Y] - n[Y] * 6.0f, p[Z] - n[Z] * 6.0f);
        put_vertex(street, (n[X] + n[X]) + p[X], (n[Y] + n[Y]) + p[Y], (n[Z] + n[Z]) + p[Z]);
        put_vertex(street, n[X] + p[X], (n[Y] + p[Y]) - 2.0f, n[Z] + p[Z]);
        put_vertex(street, p[X] - n[X] * 5.0f, (p[Y] - n[Y] * 5.0f) - 2.0f, p[Z] - n[Z] * 5.0f);
    }

    street->range_first[0] = street->triangle_count;
    for (int i = 0; i < RAIL_SAMPLES - 1; i++)
        join_samples(street, 4 * i, 1, 2);
    street->range_end[0] = street->triangle_count;

    street->range_first[1] = street->triangle_count;
    for (int i = 0; i < RAIL_SAMPLES - 1; i++) {
        join_samples(street, 4 * i, 0, 1);
        join_samples(street, 4 * i, 2, 3);
    }
    street->range_end[1] = street->triangle_count;

    street->range_first[2] = street->triangle_count;
    for (int i = 0; i < RAIL_SAMPLES - 1; i++) {
        int base = embankment + 4 * i;
        join_samples(street, base, 0, 1);    /* top */
        join_samples(street, base, 3, 0);    /* left slope */
        join_samples(street, base, 1, 2);    /* right slope */
        join_samples(street, base, 2, 3);    /* foot */
    }
    street->range_end[2] = street->triangle_count;

    world_file_street(world_street_count);
    index = world_street_count;
    world_street_count = index + 1;
    return index;
}

/* ---- the race track -------------------------------------------------------- */

#define TRACK_PIECES 21
#define TRACK_HALF_WIDTH 16.0f
#define TRACK_PIECE_LENGTH 64.0f
#define TRACK_TURN 0.785398185f   /* 45 degrees */

static void add_track_quad(StreetQuad *quad)
{
    world_add_street(1, quad, 0.0f, 0.0f);
}

/* The turn made before piece `piece`: left over pieces 0-4, 10-13 and 17,
   right over 5-6, straight elsewhere. */
static float track_turn(int piece, float heading)
{
    unsigned int p = (unsigned int)piece;

    if (p <= 4)
        return heading + TRACK_TURN;
    if (p <= 6)
        return heading + -TRACK_TURN;
    if (p - 10 <= 3 || p == 17)
        return heading + TRACK_TURN;
    return heading;
}

void world_build_race_track(void)
{
    StreetQuad quad = {{
        {3056.0f, 24.0625f, 1184.0f},
        {3088.0f, 24.0625f, 1184.0f},
        {3088.0f, 24.0625f, 1248.0f},
        {3056.0f, 24.0625f, 1248.0f},
    }};
    float centre_x, centre_y, centre_z;
    float heading = 0.0f;

    add_track_quad(&quad);

    /* The centre of the far edge walks along the track. Its height never
       changes; raised pieces only lift their far corners. */
    centre_x = (quad.corner[FAR_LEFT][0] + quad.corner[FAR_RIGHT][0]) * 0.5f;
    centre_y = (quad.corner[FAR_RIGHT][1] + quad.corner[FAR_LEFT][1]) * 0.5f;
    centre_z = (quad.corner[FAR_LEFT][2] + quad.corner[FAR_RIGHT][2]) * 0.5f;

    for (int piece = 0; piece < TRACK_PIECES; piece++) {
        float previous = heading;
        float sine, cosine, across_x, across_z, far_right_y, far_left_y;

        heading = track_turn(piece, heading);

        /* The new quad starts where the last one ended. */
        for (int axis = 0; axis < 3; axis++) {
            quad.corner[NEAR_LEFT][axis] = quad.corner[FAR_LEFT][axis];
            quad.corner[NEAR_RIGHT][axis] = quad.corner[FAR_RIGHT][axis];
        }

        /* Step along the average of the old and new heading. */
        math_sine_cosine((previous + heading) * 0.5f, &sine, &cosine);
        centre_z += cosine * TRACK_PIECE_LENGTH;
        centre_x += sine * TRACK_PIECE_LENGTH;

        /* The far edge lies across the new heading. */
        across_x = crt_cosf(heading) * TRACK_HALF_WIDTH;
        across_z = (float)-crt_sin((double)heading) * TRACK_HALF_WIDTH;
        quad.corner[FAR_RIGHT][0] = across_x + centre_x;
        quad.corner[FAR_RIGHT][1] = centre_y;
        quad.corner[FAR_RIGHT][2] = across_z + centre_z;
        quad.corner[FAR_LEFT][0] = centre_x - across_x;
        quad.corner[FAR_LEFT][1] = centre_y;
        quad.corner[FAR_LEFT][2] = centre_z - across_z;

        /* Raised and banked pieces. */
        far_right_y = centre_y;
        far_left_y = centre_y;
        if (piece < 4)
            far_left_y = centre_y + 16.0f;                 /* first bend raised on the left */
        if (piece == 5)
            far_right_y = centre_y + 16.0f;                /* bank to the right */
        if ((unsigned int)(piece - 10) <= 2)
            far_left_y = far_left_y + 16.0f;
        if (piece == 17)
            far_left_y = far_left_y + 8.0f;
        if (piece == 19) {
            far_right_y = far_right_y + 4.0f;
            far_left_y = far_left_y + 4.0f;
        }
        quad.corner[FAR_RIGHT][1] = far_right_y;
        quad.corner[FAR_LEFT][1] = far_left_y;

        add_track_quad(&quad);
    }
}

/* ---- the railway ------------------------------------------------------------ */

#define RAIL_GAUGE 1.43499994f
#define ROUTE_SEGMENTS 103             /* after the first one */
#define ROUTE_TURN -0.392699093f       /* -22.5 degrees per segment, four segments a bend */
#define ROUTE_BEND_RADIUS 114.75f
#define ROUTE_SLOPE 0.0546875f
#define STOP_FACING_WEST 4.71238899f   /* 3 pi / 2 */
#define STOP_FACING_NORTH 1.57079637f  /* pi / 2 */

static void add_train_stop(const float position[3], float angle)
{
    TrainStop *stop = &world_train_stops[world_train_stop_count];
    stop->position[X] = position[X];
    stop->position[Y] = position[Y];
    stop->position[Z] = position[Z];
    world_train_stops[world_train_stop_count].angle = angle;
    world_train_stop_count++;
}

/* Segment lengths: 28 units, or 28.57 over the stretches between bends 1-2 and 3-4. */
static float route_step(int segment)
{
    if (segment < 23 || (segment >= 41 && segment < 75) || segment >= 93)
        return 28.0f;
    return 28.5714283f;
}

void world_build_train_route(void)
{
    const float *up = math_axes[1];
    float direction[3], previous[3], start[3], end[3];
    float angle = 0.0f, slope = 0.0f;
    int last = 0, count;

    for (int i = 0; i < STREET_CELLS_ACROSS * STREET_CELLS_ACROSS; i++)
        world_street_cells[i].count = 0;
    world_street_count = 0;
    world_train_stop_count = 0;

    /* The first segment heads west from the station at x 2480. */
    for (int k = 0; k < 3; k++)
        direction[k] = previous[k] = -math_axes[0][k];
    start[X] = 2480.0f;
    start[Y] = 36.0625f;
    start[Z] = 1021.25f;
    end[X] = direction[X] * 56.0f + 2480.0f;
    end[Y] = direction[Y] * 56.0f + 36.0625f;
    end[Z] = direction[Z] * 56.0f + 1021.25f;
    world_add_rail(0, start, end, previous, direction, RAIL_GAUGE);
    {
        float stop[3] = {end[X] * 0.5f + 1240.0f, end[Y] * 0.5f + 18.03125f, end[Z] * 0.5f + 510.625f};
        add_train_stop(stop, STOP_FACING_WEST);
    }

    for (int segment = 0; segment < ROUTE_SEGMENTS; segment++) {
        float step = route_step(segment);
        int index;

        for (int k = 0; k < 3; k++) {
            previous[k] = direction[k];
            start[k] = end[k];
        }

        /* Bends start at segments 23, 41, 75 and 93 and end four later; the
           dip runs over 70-73 and the rise over 98-101. */
        if (segment == 23 || segment == 41 || segment == 75 || segment == 93)
            angle = ROUTE_TURN;
        else if (segment == 27 || segment == 45 || segment == 79 || segment == 97)
            angle = 0.0f;
        else if (segment == 70)
            slope = -ROUTE_SLOPE;
        else if (segment == 98)
            slope = ROUTE_SLOPE;
        else if (segment == 74 || segment == 102)
            slope = 0.0f;
        math_vec3_rotate(direction, up, angle);
        direction[Y] = slope;

        if (segment == 19)
            add_train_stop(start, STOP_FACING_WEST);
        else if (segment == 49 || segment == 69)
            add_train_stop(start, STOP_FACING_NORTH);
        else if (segment == 86)
            add_train_stop(start, 0.0f);

        /* A step on in the old direction and one in the new... */
        end[Y] = end[Y] + (previous[Y] + slope) * step;
        end[X] = (previous[X] * step + end[X]) + direction[X] * step;
        end[Z] = (previous[Z] * step + end[Z]) + direction[Z] * step;

        /* ...or, in a bend, round the arc: from the start, out to the bend's
           centre along the old side vector and back along the new one.
           (A NaN angle counts as straight, as the original's ucomiss/je.) */
        if (!(angle == 0.0f || angle != angle)) {
            float out_x = (previous[Y] * up[Z] - previous[Z] * up[Y]) * ROUTE_BEND_RADIUS;
            float out_y = (previous[Z] * up[X] - previous[X] * up[Z]) * ROUTE_BEND_RADIUS;
            float out_z = (previous[X] * up[Y] - previous[Y] * up[X]) * ROUTE_BEND_RADIUS;
            float back_x = (up[Z] * slope - direction[Z] * up[Y]) * ROUTE_BEND_RADIUS;
            float back_y = (direction[Z] * up[X] - direction[X] * up[Z]) * ROUTE_BEND_RADIUS;
            float back_z = (direction[X] * up[Y] - up[X] * slope) * ROUTE_BEND_RADIUS;

            if (angle > 0.0f) {
                end[X] = (out_x + start[X]) - back_x;
                end[Y] = (out_y + start[Y]) - back_y;
                end[Z] = (out_z + start[Z]) - back_z;
            } else {
                end[X] = back_x + (start[X] - out_x);
                end[Y] = back_y + (start[Y] - out_y);
                end[Z] = back_z + (start[Z] - out_z);
            }
        }

        index = world_add_rail(0, start, end, previous, direction, RAIL_GAUGE);
        world_streets[index].previous = last;
        world_streets[last].next = index;
        last = index;
    }
    world_streets[0].previous = last;
    world_streets[last].next = 0;

    /* Twice, in order: no segment may be much straighter than its neighbours,
       so the train slows down ahead of a bend and speeds up after it. */
    count = world_street_count;
    for (int pass = 0; pass < 2; pass++) {
        for (int i = 0; i < count; i++) {
            Street *street = &world_streets[i];
            float before = (world_streets[street->previous].straightness + 1.0f) * 0.5f;
            float after = (world_streets[street->next].straightness + 1.0f) * 0.5f;
            street->straightness = min_float(min_float(before, street->straightness), after);
        }
    }

    if (memcmp(world_map_name, "test2", 6) == 0)
        world_build_race_track();
}
