/* Polygon queries: face boundaries, misses, NaNs, overlapping inputs and
   outputs, and every MXCSR rounding/denormal mode. */
// NC_WRAPPERS: 140077C80 140078230
#include <string.h>
#include "nc.h"
#include "collision.h"

#ifdef NC_NATIVE
#define quad(o,n,t,f,e,a,b,c,d) ((uint64_t (*)(float *,float *,float *,float *,float *,float *,float *,float *,float *))NC_ADDR(0x140077C80))(o,n,t,f,e,a,b,c,d)
#define triangle(o,n,t,f,e,a,b,c) ((uint64_t (*)(float *,float *,float *,float *,float *,float *,float *,float *))NC_ADDR(0x140078230))(o,n,t,f,e,a,b,c)
#elif defined(NC_CLIENT_WRAPPERS)
long long sr_collision_line_quad(float *,float *,float *,float *,float *,float *,float *,float *,float *);
long long sr_collision_segment_triangle(float *,float *,float *,float *,float *,float *,float *,float *);
#define quad sr_collision_line_quad
#define triangle sr_collision_segment_triangle
#else
#define quad collision_line_quad
#define triangle collision_segment_triangle
#endif

static void run_case(int n, int is_quad)
{
    float arena[48];
    nc_set_mxcsr(0x1F80);
    nc_seed((uint64_t)n * 2 + is_quad);
    for (int i = 0; i < 48; i++) arena[i] = nc_float(-4.0f, 4.0f);
    float *normal = arena + 3, *from = arena + 6, *to = arena + 9;
    float *a = arena + 12, *b = arena + 15, *c = arena + 18, *d = arena + 21;
    if (n % 3 != 0) {
        float face[] = {0,0,1, 0.25f,0.25f,-1, 0.25f,0.25f,1,
                        0,0,0, 0,1,0, 1,1,0, 1,0,0};
        memcpy(normal, face, sizeof face);
        float xy[] = {-0.25f,0,0.25f,0.5f,1,1.25f};
        from[0] = to[0] = xy[(n / 3) % 6];
        from[1] = to[1] = xy[(n / 18) % 6];
        switch ((n / 108) % 8) {
        case 1: from[2] = 1; to[2] = -1; break;
        case 2: from[2] = to[2] = -1; break;
        case 3: from[2] = to[2] = 1; break;
        case 4: from[2] = to[2] = 0; break;
        case 5: normal[n % 3] = __builtin_nanf(""); break;
        case 6: b[n % 3] = __builtin_nanf(""); break;
        case 7: c[n % 3] = __builtin_nanf(""); break;
        }
    }
    int output_offset = (int[]){0,3,4,6,7,9,12,13,15,18,21,24}[n % 12];
    int fraction_offset = (int[]){27,0,1,3,6,9,12,15,18,21}[n / 12 % 10];
    uint32_t control = 0x1F80u | ((n & 3u) << 13)
        | ((n & 4u) ? 0x40u : 0) | ((n & 8u) ? 0x8000u : 0);
    nc_set_mxcsr(control);
    uint64_t result = is_quad ? quad(arena + output_offset,normal,arena + fraction_offset,from,to,a,b,c,d)
                             : triangle(arena + output_offset,normal,arena + fraction_offset,from,to,a,b,c);
    nc_line("polygon %d %d result %llu csr %08x",n,is_quad,(unsigned long long)result,nc_get_mxcsr());
    nc_floats("arena",arena,48);
}

int main(void)
{
    nc_map_image();
    for (int n = 0; n < nc_cases(6000); n++) {
        run_case(n,0);
        run_case(n,1);
    }
    return 0;
}
