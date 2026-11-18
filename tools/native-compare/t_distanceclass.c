/* The near/far factor between two points: 0x140019000.

   The distance is built with SQRTSS from the three squared component deltas
   and compared with COMISS against 128.0; JBE sends the near case (including
   an unordered NaN) to the level line test, whose answer picks 1.0 or 0.5.
   Far distances return 0.5 without the test.

   The line test 0x1400DC050 is a recording stub in both builds, so the
   suite sees the arguments the routine passes it and chooses the answer. */
// NC_WRAPPERS: 140019000
#include <math.h>
#include <string.h>
#include "nc.h"
#include "distance_class.h"

#ifdef NC_NATIVE
#define factor(a, b) ((float (*)(const float *, const float *))NC_ADDR(0x140019000))(a, b)
#elif defined(NC_CLIENT_WRAPPERS)
/* The client's own entry point, not a made-up name: it returns __m128, so
   the low lane is read back out. */
typedef float __attribute__((vector_size(16))) sr_m128;
sr_m128 sub_140019000(float *, float *);
#define factor(a, b) ((sr_m128)sub_140019000((float *)(a), (float *)(b)))[0]
#else
#define factor(a, b) distance_class_factor(a, b)
#endif

/* Every line-test answer this run allows. The routine must pass the points
   through untouched and use the answer as it stands. */
static int line_answer;

static int line_test(float *from, float *to, int unknown)
{
    nc_floats("test from", from, 3);
    nc_floats("test to", to, 3);
    nc_line("test flag %d -> %d", unknown, line_answer);
    return line_answer;
}

static float from_bits(uint32_t bits)
{
    float value;
    memcpy(&value, &bits, 4);
    return value;
}

/* Distances that land exactly on the 128 limit, just inside and just
   outside it, plus the non-numeric shapes the flags branch on. */
static void walk_boundary(void)
{
    static const float bases[] = {
        128.0f, 127.99999237f, 128.00000763f, 0.0f, 1.0f, 64.0f, 256.0f,
    };
    for (size_t b = 0; b < sizeof bases / sizeof bases[0]; b++) {
        float from[3] = {0.0f, 0.0f, 0.0f};
        float to[3];
        /* Along one axis, and along all three (a diagonal is longer). */
        to[0] = bases[b]; to[1] = 0.0f; to[2] = 0.0f;
        line_answer = 0;
        nc_line("axis %zu -> %08x", b, nc_hash(&(float){factor(from, to)}, 4));
        nc_line("  answer0 %08x", nc_hash(&(float){factor(from, to)}, 4));
        line_answer = 1;
        nc_line("  answer1 %08x", nc_hash(&(float){factor(from, to)}, 4));
        to[0] = bases[b] * 0.5773502692f;
        to[1] = to[0];
        to[2] = to[0];
        nc_line("diagonal %zu -> %08x", b, nc_hash(&(float){factor(from, to)}, 4));
    }
}

/* The summed squares are three single-precision adds, and their order
   decides the last bit of the sum. Only a distance within one ULP of 128
   flips the comparison, so these triples were searched for offline: each
   gives 128.000015 with the original's order, (y*y + x*x) + z*z, and
   exactly 128.0 with (y*y + z*z) + x*x, so the two orders take opposite
   branches and return different factors. Without them the suite cannot tell
   the orders apart. */
static const float edge_triples[][3] = {
    {37.4288635f, 84.1918793f, 88.8527451f},
    {63.2963905f, 60.3719444f, 93.44944f},
    {71.0345612f, 47.8329544f, 95.1320267f},
    {63.400547f, 64.1150665f, 90.8495026f},
    {52.6485596f, 40.8907089f, 109.270683f},
    {61.6180305f, 48.0671577f, 101.374405f},
    {23.5041752f, 79.5545807f, 97.4814148f},
    {60.6403198f, 76.4513245f, 82.8368835f},
    {35.9591904f, 35.0876694f, 117.727631f},
    {23.4783897f, 79.8380356f, 97.2556229f},
};

static void walk_rounding_edges(void)
{
    for (size_t i = 0; i < sizeof edge_triples / sizeof edge_triples[0]; i++) {
        float from[3] = {0.0f, 0.0f, 0.0f};
        float to[3] = {edge_triples[i][0], edge_triples[i][1], edge_triples[i][2]};
        float result;
        float other_result;

        /* Both line-test answers, so a changed branch is visible either way. */
        line_answer = 0;
        result = factor(from, to);
        line_answer = 1;
        other_result = factor(from, to);
        nc_floats("edge to", to, 3);
        nc_floats("edge factor", &result, 1);
        nc_floats("edge factor hit", &other_result, 1);
    }
}

static void run_case(int n)
{
    float from[3], to[3];
    float result;

    nc_seed((uint64_t)n * 131 + 7);
    for (int k = 0; k < 3; k++) {
        from[k] = nc_chance(20) ? from_bits((uint32_t)nc_rand()) : nc_float_plain(-300.0f, 300.0f);
        to[k] = nc_chance(20) ? from_bits((uint32_t)nc_rand()) : nc_float_plain(-300.0f, 300.0f);
    }
    /* Sometimes identical points (distance zero) and sometimes a single
       differing axis, which is where the boundary sits. */
    if (n % 11 == 0)
        memcpy(to, from, sizeof to);
    if (n % 13 == 0) {
        to[0] = from[0];
        to[1] = from[1];
    }
    line_answer = n % 2;
    nc_set_mxcsr(0x1F80);
    result = factor(from, to);
    nc_line("case %d answer %d", n, line_answer);
    nc_floats("from", from, 3);
    nc_floats("to", to, 3);
    nc_floats("factor", &result, 1);
    nc_line("mxcsr %08x", nc_get_mxcsr());
}

int main(void)
{
    nc_map_image();
    nc_redirect(0x1400DC050, (void *)line_test);
    walk_boundary();
    walk_rounding_edges();
    for (int n = 0; n < nc_cases(2000); n++)
        run_case(n);
    return 0;
}
