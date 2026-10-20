/* The two additional matrix entry points use the existing row products.
   Check every output/input offset, including partially overlapping arrays. */
// NC_WRAPPERS: 140105770 140105840
#include "nc.h"
#include "math3d.h"

#ifdef NC_CLIENT_WRAPPERS
long long sr_math_mat3_multiply_copy(long long,long long,long long);
long long sr_math_mat4_multiply_copy(void *,long long,long long);
#endif

static void run_case(int n, int dimension)
{
    float arena[96];
    nc_set_mxcsr(0x1F80);
    nc_seed((uint64_t)n * 2 + dimension);
    for (int i = 0; i < 96; i++) arena[i] = nc_float(-10.0f,10.0f);
    float *a = arena + 24, *b = arena + 48;
    float *out = arena + (int[]){0,24,25,26,27,28,32,48,49,51,56,60}[n % 12];
    if (n % 7 == 0) b = a + (n / 7 % 5);
    nc_set_mxcsr(0x1F80u | ((n & 3u) << 13)
        | ((n & 4u) ? 0x40u : 0) | ((n & 8u) ? 0x8000u : 0));
#ifdef NC_NATIVE
    ((void (*)(float *,float *,float *))NC_ADDR(dimension == 3 ? 0x140105770 : 0x140105840))(out,a,b);
#elif defined(NC_CLIENT_WRAPPERS)
    if (dimension == 3) sr_math_mat3_multiply_copy((intptr_t)out,(intptr_t)a,(intptr_t)b);
    else sr_math_mat4_multiply_copy(out,(intptr_t)a,(intptr_t)b);
#else
    if (dimension == 3) math_mat3_multiply(out,a,b);
    else math_mat4_multiply(out,a,b);
#endif
    nc_line("matrix %d %d csr %08x",n,dimension,nc_get_mxcsr());
    nc_floats("arena",arena,96);
}

int main(void)
{
    nc_map_image();
    for (int n = 0; n < nc_cases(4000); n++) {
        run_case(n,3);
        run_case(n,4);
    }
    return 0;
}
