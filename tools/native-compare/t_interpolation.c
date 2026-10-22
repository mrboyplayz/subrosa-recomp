/* Interpolation with extrapolation, overlapping buffers and exceptional
   inputs. The matrix path runs both actual quaternion conversion callees. */
// NC_WRAPPERS: 1400C30E0 1400C2F90
#include <string.h>
#include "nc.h"
#include "math3d.h"

#ifdef NC_CLIENT_WRAPPERS
void sr_math_vec3_lerp(float *,float *,float *,float);
void *sr_math_mat3_nlerp(float *,float *,float *,double);
#endif

static void run_case(int n, int matrix)
{
    float arena[64];
    nc_set_mxcsr(0x1F80);
    nc_seed((uint64_t)n * 2 + matrix);
    for (int i = 0; i < 64; i++) arena[i] = nc_float(-10,10);
    float *first = arena + 16, *second = arena + 36;
    if (matrix && n % 3) {
        static const float rotations[][9] = {
            {1,0,0,0,1,0,0,0,1}, {1,0,0,0,-1,0,0,0,-1},
            {-1,0,0,0,1,0,0,0,-1}, {-1,0,0,0,-1,0,0,0,1},
            {0,-1,0,1,0,0,0,0,1}, {0,1,0,-1,0,0,0,0,1},
            {0,0,0,0,0,0,0,0,0}
        };
        memcpy(first,rotations[n / 3 % 7],9*sizeof(float));
        memcpy(second,rotations[n / 21 % 7],9*sizeof(float));
    }
    if (n % 7 == 0) second = first + (n / 7 % 6);
    static const uint32_t factors[] = {
        0,0x80000000,0x3f000000,0x3f800000,0xbf800000,0x40000000,
        0x3eaaaaab,0x3f7fffff,0x3f800001,0x00000001,0x00800000,
        0x7f800000,0xff800000,0x7fc00001,0x7f800001
    };
    float fraction;
    if (n % 4) {
        uint32_t word = factors[n / 4 % 15];
        memcpy(&fraction,&word,4);
    } else fraction = nc_float(-4,4);
    int offsets[] = {0,14,15,16,17,18,19,20,21,22,23,24,25,
                     34,35,36,37,38,39,40,41,42,43,44,45};
    float *out = arena + offsets[n % 25];
    unsigned mode = (unsigned)n / 25 % 16;
    nc_set_mxcsr(0x1F80 | ((mode & 3) << 13)
                 | ((mode & 4) ? 0x40 : 0) | ((mode & 8) ? 0x8000 : 0));
#ifdef NC_NATIVE
    if (matrix) ((void (*)(float *,float *,float *,float))NC_ADDR(0x1400C2F90))(out,first,second,fraction);
    else ((void (*)(float *,float *,float *,float))NC_ADDR(0x1400C30E0))(out,first,second,fraction);
#elif defined(NC_CLIENT_WRAPPERS)
    if (matrix) {
        double lane=0;
        memcpy(&lane,&fraction,4);
        sr_math_mat3_nlerp(out,first,second,lane);
    } else sr_math_vec3_lerp(out,first,second,fraction);
#else
    if (matrix) math_mat3_nlerp(out,first,second,fraction);
    else math_vec3_lerp(out,first,second,fraction);
#endif
    nc_line("interpolation %d %d csr %08x",n,matrix,nc_get_mxcsr());
    nc_floats("arena",arena,64);
}

int main(void)
{
    nc_map_image();
    for (int n = 0; n < nc_cases(8000); n++) {
        run_case(n,0);
        run_case(n,1);
    }
    return 0;
}
