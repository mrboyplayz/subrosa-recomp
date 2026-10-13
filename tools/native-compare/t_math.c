/* Harness self-check on already ported math routines:
 * 0x14007A240 normalize, 0x14007B4D0 rotate about axis,
 * 0x14006EC40 triangle normal, 0x14007ABA0 point-segment distance. */
#include "nc.h"

#ifdef NC_NATIVE
#define normalize(out, v)         ((void (*)(float *, const float *))NC_ADDR(0x14007A240))(out, v)
#define rotate(v, axis, angle)    ((void (*)(float *, const float *, float))NC_ADDR(0x14007B4D0))(v, axis, angle)
#define tri_normal(out, a, b, c)  ((void (*)(float *, const float *, const float *, const float *))NC_ADDR(0x14006EC40))(out, a, b, c)
#define segment_distance(a, b, p) ((float (*)(const float *, const float *, const float *))NC_ADDR(0x14007ABA0))(a, b, p)
#else
#include "math3d.h"
#define normalize        math_vec3_normalize
#define rotate           math_vec3_rotate
#define tri_normal       math_triangle_normal
#define segment_distance math_point_segment_distance
#endif

static void vec(float v[3], float range)
{
    for (int i = 0; i < 3; i++)
        v[i] = nc_float(-range, range);
}

int main(void)
{
    nc_map_image();
    int cases = nc_cases(1000);
    for (int n = 0; n < cases; n++) {
        float a[3], b[3], c[3], p[3], out[3];
        nc_seed(n);
        vec(a, 100); vec(b, 100); vec(c, 100); vec(p, 100);
        if (nc_chance(5)) a[0] = a[1] = a[2] = 0;

        nc_set_mxcsr(0x1F80);
        normalize(out, a);
        nc_floats("normalize", out, 3);
        nc_line("mxcsr %08x", nc_get_mxcsr());

        float v[3] = {b[0], b[1], b[2]}, axis[3];
        normalize(axis, c);
        nc_set_mxcsr(0x1F80);
        rotate(v, axis, nc_float(-7, 7));
        nc_floats("rotate", v, 3);
        nc_line("mxcsr %08x", nc_get_mxcsr());

        nc_set_mxcsr(0x1F80);
        tri_normal(out, a, b, c);
        nc_floats("normal", out, 3);
        nc_line("mxcsr %08x", nc_get_mxcsr());

        nc_set_mxcsr(0x1F80);
        float d = segment_distance(a, b, p);
        nc_floats("distance", &d, 1);
        nc_line("mxcsr %08x", nc_get_mxcsr());
    }
    return 0;
}
