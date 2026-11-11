/* Curve points and derivatives: both original entry points (the second is
   the first's byte-identical twin, so the port shares one body) and the
   derivative, over degrees 1..3, exceptional inputs and all MXCSR modes.
   Degrees outside 1..3 return the original's uninitialized result register
   (the low word of its homed first-parameter slot) and are never driven. */
// NC_WRAPPERS: 14008EC40 140187180 1401872F0
#include <string.h>
#include "nc.h"

#ifdef NC_CLIENT_WRAPPERS
float sr_math_curve_point(int, float, float, float, float, float);
float sr_math_curve_point_route(int, float, float, float, float, float);
float sr_math_curve_derivative(int, float, float, float, float, float);
#else
extern float math_curve_point(int degree, float t, float point0, float point1, float point2, float point3);
extern float math_curve_derivative(int degree, float t, float point0, float point1, float point2, float point3);
#endif

static void run_case(int n, int operation)
{
    static const uint32_t special[] = {
        0,0x80000000,0x00000001,0x007fffff,0x00800000,
        0x3f000000,0x3f7fffff,0x3f800000,0x3f800001,
        0xbf800000,0xbf800001,0x7f800000,0xff800000,
        0x7fc00001,0x7f800001
    };
    float lane[5]; /* t, point0, point1, point2, point3 */
    nc_set_mxcsr(0x1F80);
    nc_seed((uint64_t)n * 3 + operation);
    for (int i = 0; i < 5; i++)
        lane[i] = nc_float(-4,4);
    if (n % 3) {
        for (int i = 0; i < 1 + n % 3; i++) {
            uint32_t word = special[nc_rand_below(sizeof special / sizeof special[0])];
            memcpy(lane + nc_rand_below(5), &word, sizeof word);
        }
        /* identical parameters: exact cancellation and reused operands */
        if (n % 7 == 0) lane[n / 7 % 5] = lane[0];
        if (n % 5 == 0) lane[n / 5 % 5] = lane[4 - n / 5 % 5];
    }
    if (n % 11 == 0) {
        float shared = lane[n / 11 % 2];
        for (int i = 2; i < 5; i++)
            lane[i] = shared;
    }
    int degree = 1 + n % 3;
    unsigned mode = (unsigned)n / 3 % 16;
    nc_set_mxcsr(0x1F80 | ((mode & 3) << 13)
                 | ((mode & 4) ? 0x40 : 0) | ((mode & 8) ? 0x8000 : 0));
    float result = -123.0f;
#ifdef NC_NATIVE
    if (operation == 0) result = ((float (*)(int,float,float,float,float,float))NC_ADDR(0x14008EC40))(degree,lane[0],lane[1],lane[2],lane[3],lane[4]);
    if (operation == 1) result = ((float (*)(int,float,float,float,float,float))NC_ADDR(0x140187180))(degree,lane[0],lane[1],lane[2],lane[3],lane[4]);
    if (operation == 2) result = ((float (*)(int,float,float,float,float,float))NC_ADDR(0x1401872F0))(degree,lane[0],lane[1],lane[2],lane[3],lane[4]);
#elif defined(NC_CLIENT_WRAPPERS)
    if (operation == 0) result = sr_math_curve_point(degree,lane[0],lane[1],lane[2],lane[3],lane[4]);
    if (operation == 1) result = sr_math_curve_point_route(degree,lane[0],lane[1],lane[2],lane[3],lane[4]);
    if (operation == 2) result = sr_math_curve_derivative(degree,lane[0],lane[1],lane[2],lane[3],lane[4]);
#else
    if (operation == 0) result = math_curve_point(degree,lane[0],lane[1],lane[2],lane[3],lane[4]);
    if (operation == 1) result = math_curve_point(degree,lane[0],lane[1],lane[2],lane[3],lane[4]);
    if (operation == 2) result = math_curve_derivative(degree,lane[0],lane[1],lane[2],lane[3],lane[4]);
#endif
    uint32_t csr = nc_get_mxcsr();
    nc_line("curve %d %d csr %08x", n, operation, csr);
    nc_floats("result", &result, 1);
}

int main(void)
{
    nc_map_image();
    for (int n = 0; n < nc_cases(2000); n++)
        for (int operation = 0; operation < 3; operation++)
            run_case(n, operation);
    return 0;
}
