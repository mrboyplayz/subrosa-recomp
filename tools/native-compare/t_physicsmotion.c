/* Sliding and body-point velocity: four original entry points, with
   overlapping buffers, exceptional floats and every MXCSR rounding mode. */
// NC_WRAPPERS: 14002D820 14002D9B0 14012B090 14012B170
#include <string.h>
#include "nc.h"
#include "physics.h"

/* Hex-Rays declares the sliding results as double carriers of a float word.
   Check the cleared upper word as well as the float result. */
#if defined(NC_NATIVE) || defined(NC_CLIENT_WRAPPERS)
static float carrier_float(double carrier)
{
    uint64_t bits;
    float value;
    memcpy(&bits, &carrier, sizeof bits);
    if (bits >> 32)
        nc_line("unexpected carrier upper word %08x", (uint32_t)(bits >> 32));
    memcpy(&value, &carrier, sizeof value);
    return value;
}
#endif

#ifdef NC_NATIVE
#define slide(v, n, f) carrier_float(((double (*)(float *, const float *, float))NC_ADDR(0x14002D820))(v, n, f))
#define capped(v, n, f, m) carrier_float(((double (*)(float *, const float *, float, float))NC_ADDR(0x14002D9B0))(v, n, f, m))
#define apply(b, r, d) ((PhysicsBody *(*)(int, const float *, const float *))NC_ADDR(0x14012B090))(b, r, d)
#define point(o, b, r) ((PhysicsBody *(*)(float *, int, const float *))NC_ADDR(0x14012B170))(o, b, r)
#elif defined(NC_CLIENT_WRAPPERS)
double sub_14002D820(float *, float *, float);
double sub_14002D9B0(float *, float *, float, float);
unsigned int *sub_14012B090(int, float *, float *);
unsigned int *sub_14012B170(float *, int, float *);
#define slide(v, n, f) carrier_float(sub_14002D820(v, n, f))
#define capped(v, n, f, m) carrier_float(sub_14002D9B0(v, n, f, m))
#define apply(b, r, d) ((PhysicsBody *)(void *)sub_14012B090(b, r, d))
#define point(o, b, r) ((PhysicsBody *)(void *)sub_14012B170(o, b, r))
#else
#define slide physics_limit_slide
#define capped physics_limit_slide_capped
#define apply physics_apply_point_velocity
#define point physics_point_velocity
#endif

static void fill(float *v, size_t count)
{
    for (size_t i = 0; i < count; i++)
        v[i] = nc_float(-10.0f, 10.0f);
}

static uint32_t control(int n)
{
    /* Test rounding, denormals-are-zero and flush-to-zero independently. */
    return 0x1F80u | ((n & 3u) << 13) | ((n & 4u) ? 0x40u : 0) | ((n & 8u) ? 0x8000u : 0);
}

static void sliding(int n, int with_cap)
{
    float arena[12];
    nc_set_mxcsr(0x1F80);
    nc_seed((uint64_t)n * 2 + with_cap);
    fill(arena, 12);
    int normal_offset = (int[]){6, 0, 1, 2, 3}[n % 5];
    float friction = nc_float(-2.0f, 2.0f);
    float max_slide = nc_float(-5.0f, 5.0f);

    /* Analytic cases cover zero tangent, no normal speed, both limits,
       equality at a limit, and each unordered comparison independently. */
    if (n < 256) {
        static const float limits[] = {0.0f, -0.0f, 0.5f, 1.0f, -1.0f, 2.0f};
        normal_offset = 6;
        arena[0] = 3.0f; arena[1] = 4.0f; arena[2] = 0.0f;
        arena[6] = 0.0f; arena[7] = 1.0f; arena[8] = 0.0f;
        friction = limits[(n / 16) % 6];
        max_slide = limits[(n / 32) % 6];
        switch ((n / 16) % 8) {
        case 1: arena[0] = 0.0f; break;
        case 2: arena[1] = 0.0f; break;
        case 3: arena[2] = -4.0f; break;
        case 4: arena[0] = __builtin_nanf(""); break;
        case 5: friction = __builtin_nanf(""); break;
        case 6: max_slide = __builtin_nanf(""); break;
        case 7: arena[0] = 2.0f; friction = 0.5f; max_slide = 2.0f; break;
        }
    }
    nc_set_mxcsr(control(n));
    float work = with_cap ? capped(arena, arena + normal_offset, friction, max_slide)
                          : slide(arena, arena + normal_offset, friction);
    uint32_t status = nc_get_mxcsr();
    nc_line("slide %d %d %08x", n, with_cap, status);
    nc_floats("work", &work, 1);
    nc_floats("arena", arena, 12);
}

static void body_motion(int n, int query)
{
    nc_set_mxcsr(0x1F80);
    nc_seed(0x12340000u + (uint64_t)n * 2 + query);
    int index = (int[]){0, 1, 4096, PHYSICS_BODY_CAPACITY - 1}[n % 4];
    PhysicsBody *body = &physics_bodies[index];
    float arena[9];
    fill((float *)(void *)body, sizeof *body / sizeof(float));
    fill(arena, 9);
    float *regions[] = {arena, body->position, body->velocity,
        body->velocity + 1, body->velocity_change, body->angular_momentum,
        body->angular_momentum + 1, body->angular_velocity, body->rotation};
    float *offset = regions[(n / 9) % 9];
    float *other = regions[n % 9];
    nc_set_mxcsr(control(n));
    PhysicsBody *result = query ? point(other, index, offset) : apply(index, offset, other);
    uint32_t status = nc_get_mxcsr();
    nc_line("body %d %d return %d %08x", n, query, result == physics_bodies, status);
    nc_floats("body", (float *)(void *)body, sizeof *body / sizeof(float));
    nc_floats("arena", arena, 9);
}

int main(void)
{
    nc_map_image();
    int cases = nc_cases(4000);
    for (int n = 0; n < cases; n++) {
        sliding(n, 0);
        sliding(n, 1);
        body_motion(n, 0);
        body_motion(n, 1);
    }
    return 0;
}
