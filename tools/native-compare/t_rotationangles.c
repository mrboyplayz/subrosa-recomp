/* Quaternion conversions and relative matrix rotations, including complete
   and partial overlap, malformed matrices, NaNs and all MXCSR modes. */
// NC_WRAPPERS: 14011C300 14011C490 14002D050 1400ACD90
#include <string.h>
#include "nc.h"
#include "math3d.h"

/* Use the actual original CRT boundary in both builds. No math stubs. The
   game itself links the recovered implementation under this same symbol. */
double acos(double value)
{
    return ((double (*)(double))NC_ADDR(0x14023E7D4))(value);
}

#ifdef NC_CLIENT_WRAPPERS
float sr_math_quat_to_axis_angle(long long, float *);
void sr_math_quat_to_rotation_vector(float *, float *);
float sr_math_mat3_relative_axis_angle(float *, float *, float *);
void sr_math_mat3_relative_rotation_vector(float *, float *, float *);
#endif

static void matrix(float *out, int sample)
{
    static const float rotations[][9] = {
        {1,0,0, 0,1,0, 0,0,1},
        {1,0,0, 0,-1,0, 0,0,-1},
        {-1,0,0, 0,1,0, 0,0,-1},
        {-1,0,0, 0,-1,0, 0,0,1},
        {0,-1,0, 1,0,0, 0,0,1},
        {0,1,0, -1,0,0, 0,0,1},
        {0,0,1, 0,1,0, -1,0,0},
        {0,0,0, 0,0,0, 0,0,0}
    };
    memcpy(out, rotations[sample % 8], 9 * sizeof(float));
}

static void run_case(int n, int operation)
{
    float arena[64];
    nc_set_mxcsr(0x1F80);
    nc_seed((uint64_t)n * 4 + operation);
    for (int i = 0; i < 64; i++) arena[i] = nc_float(-4,4);
    float *first = arena + 16, *second = arena + 36;
    if (operation < 2) {
        static const uint32_t special[] = {
            0,0x80000000,0x00000001,0x007fffff,0x00800000,
            0x3f000000,0x3f7fffff,0x3f800000,0x3f800001,
            0xbf800000,0xbf800001,0x7f800000,0xff800000,
            0x7fc00001,0x7f800001
        };
        if (n % 3) {
            first[0]=1; first[1]=2; first[2]=3;
            uint32_t word = special[n / 3 % 15];
            memcpy(first + 3, &word, sizeof word);
            if (n % 5 == 0) memcpy(first + n / 5 % 3, &word, sizeof word);
            if (n % 7 == 0) memset(first,0,3*sizeof(float));
        }
    } else if (n % 3) {
        matrix(first,n / 3);
        matrix(second,n / 24);
    }
    if (operation >= 2 && n % 7 == 0) second = first + (n / 7 % 6);
    int offsets[] = {0,14,15,16,17,18,19,20,21,22,23,24,25,
                     34,35,36,37,38,39,40,41,42,43,44,45};
    float *out = arena + offsets[n % 25];
    unsigned mode = (unsigned)n / 25 % 16;
    nc_set_mxcsr(0x1F80 | ((mode & 3) << 13)
                 | ((mode & 4) ? 0x40 : 0) | ((mode & 8) ? 0x8000 : 0));
    float angle = -123.0f;
#ifdef NC_NATIVE
    if (operation == 0) angle = ((float (*)(float *,float *))NC_ADDR(0x14011C300))(out,first);
    if (operation == 1) ((void (*)(float *,float *))NC_ADDR(0x14011C490))(out,first);
    if (operation == 2) angle = ((float (*)(float *,float *,float *))NC_ADDR(0x14002D050))(out,first,second);
    if (operation == 3) ((void (*)(float *,float *,float *))NC_ADDR(0x1400ACD90))(out,first,second);
#elif defined(NC_CLIENT_WRAPPERS)
    if (operation == 0) angle = sr_math_quat_to_axis_angle((intptr_t)out,first);
    if (operation == 1) sr_math_quat_to_rotation_vector(out,first);
    if (operation == 2) angle = sr_math_mat3_relative_axis_angle(out,first,second);
    if (operation == 3) sr_math_mat3_relative_rotation_vector(out,first,second);
#else
    if (operation == 0) angle = math_quat_to_axis_angle(out,first);
    if (operation == 1) math_quat_to_rotation_vector(out,first);
    if (operation == 2) angle = math_mat3_relative_axis_angle(out,first,second);
    if (operation == 3) math_mat3_relative_rotation_vector(out,first,second);
#endif
    nc_line("rotation %d %d csr %08x",n,operation,nc_get_mxcsr());
    nc_floats("angle",&angle,1);
    nc_floats("arena",arena,64);
}

int main(void)
{
    nc_map_image();
    for (int n = 0; n < nc_cases(8000); n++)
        for (int operation = 0; operation < 4; operation++)
            run_case(n,operation);
    return 0;
}
