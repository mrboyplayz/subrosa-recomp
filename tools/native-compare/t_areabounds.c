/* Corporation/region containment and the five-plane view test. */
// NC_WRAPPERS: 14011B8F0 14011B960 14011B9F0 14011BAD0
#include <math.h>
#include <string.h>
#include "nc.h"
#include "area_bounds.h"

#ifdef NC_NATIVE
#define interior(p, i, m) ((uint64_t (*)(const float *, int, float))NC_ADDR(0x14011B8F0))(p, i, m)
#define vault(p, i, m) ((uint64_t (*)(const float *, int, float))NC_ADDR(0x14011B960))(p, i, m)
#define region(i, p, m) ((uint64_t (*)(int, const float *, float))NC_ADDR(0x14011B9F0))(i, p, m)
#define visible(p) ((uint64_t (*)(const float *))NC_ADDR(0x14011BAD0))(p)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_14011B8F0(float *, int, float);
long long sub_14011B960(float *, int, float);
long long sub_14011B9F0(int, float *, float);
long long sub_14011BAD0(float *);
#define interior sub_14011B8F0
#define vault sub_14011B960
#define region sub_14011B9F0
#define visible sub_14011BAD0
#else
#define interior corporation_contains_point
#define vault corporation_vault_contains_point
#define region world_region_contains_point
#define visible area_view_contains_point
#endif

static const uint32_t edges[] = {0,0x80000000,1,0x80000001,0x007FFFFF,0x00800000,
    0x7F7FFFFF,0xFF7FFFFF,0x7F800000,0xFF800000,0x7FC12345,0x7FA12345};

static void edge(float *out, int n)
{
    memcpy(out, &edges[n % 12], 4);
}

static uint32_t control(int n)
{
    return 0x1F80u | ((n & 3u) << 13) | ((n & 4u) ? 0x40u : 0) | ((n & 8u) ? 0x8000u : 0);
}

static void membership(int op, int n)
{
    nc_set_mxcsr(0x1F80);
    nc_seed((uint64_t)op * 100000 + n);
    int index = (int)nc_rand_below(op == 2 ? 512 : 16);
    AreaBounds *bounds = op == 0 ? corporation_interior_bounds(index) :
                        op == 1 ? corporation_vault_bounds(index) : world_region_bounds(index);
    float point[3], margin = nc_float_plain(-10.0f, 10.0f);
    for (int k = 0; k < 3; k++) {
        bounds->lower[k] = nc_float_plain(-1000.0f, 1000.0f);
        bounds->upper[k] = bounds->lower[k] + nc_float_plain(0.0f, 100.0f);
        point[k] = (bounds->lower[k] + bounds->upper[k]) * 0.5f;
    }
    int axis = n % 3, mode = (n / 3) % 12;
    if (mode == 0) point[axis] = bounds->lower[axis] - margin;
    if (mode == 1) point[axis] = nextafterf(bounds->lower[axis] - margin, -INFINITY);
    if (mode == 2) point[axis] = margin + bounds->upper[axis];
    if (mode == 3) point[axis] = nextafterf(margin + bounds->upper[axis], -INFINITY);
    if (mode == 4) edge(point + axis, n / 36);
    if (mode == 5) edge(bounds->lower + axis, n / 36);
    if (mode == 6) edge(bounds->upper + axis, n / 36);
    if (mode == 7) edge(&margin, n / 36);
    if (mode == 8) bounds->lower[axis] = bounds->upper[axis] + 1.0f;
    if (mode == 9) { point[0] = bounds->lower[0] - 100.0f; edge(point + 2, 11); }
    if (mode == 10) { margin = 0.0f; bounds->lower[axis] = -INFINITY; bounds->upper[axis] = INFINITY; }
    if (mode == 11) for (int k = 0; k < 3; k++) point[k] = nc_float(-1000.0f, 1000.0f);
    uint64_t before = nc_hash(bounds, sizeof *bounds);
    nc_set_mxcsr(control(n));
    uint64_t result = op == 0 ? interior(point, index, margin) :
                      op == 1 ? vault(point, index, margin) : region(index, point, margin);
    uint32_t status = nc_get_mxcsr();
    nc_set_mxcsr(0x1F80);
    nc_line("bounds %d %d %016llx %08x %016llx %016llx %016llx", op, n,
            (unsigned long long)result, status, (unsigned long long)before,
            (unsigned long long)nc_hash(bounds, sizeof *bounds),
            (unsigned long long)nc_hash(point, sizeof point));
}

static void visibility(int n)
{
    nc_set_mxcsr(0x1F80);
    nc_seed(0x500000u + n);
    float point[3];
    float *view = (float *)(void *)area_view;
    for (int i = 0; i < 12; i++) view[i] = nc_float(-4.0f, 4.0f);
    for (int i = 0; i < 3; i++) point[i] = nc_float(-10.0f, 10.0f);
    if (n % 4 == 0) edge(view + (n / 4) % 12, n / 48);
    if (n % 4 == 1) edge(point + (n / 4) % 3, n / 12);
    if (n % 4 == 2) {
        memset(area_view, 0, sizeof *area_view);
        area_view->right[0] = area_view->up[1] = area_view->back[2] = 1.0f;
        point[0] = (int)(n % 9) - 4;
        point[1] = (int)((n / 9) % 9) - 4;
        point[2] = -(float)((n / 81) % 5);
    }
    const float *input = n % 13 == 0 ? view + (n % 4) * 3 : point;
    uint64_t before = nc_hash(area_view, sizeof *area_view);
    nc_set_mxcsr(control(n));
    uint64_t result = visible(input);
    uint32_t status = nc_get_mxcsr();
    nc_set_mxcsr(0x1F80);
    nc_line("view %d %016llx %08x %016llx %016llx %016llx", n,
            (unsigned long long)result, status, (unsigned long long)before,
            (unsigned long long)nc_hash(area_view, sizeof *area_view),
            (unsigned long long)nc_hash(input, 12));
}

/* Cancellation at a rotated side plane distinguishes (a+b)+c from a+(b+c).
   Keep the other four planes safely inside, so this plane decides the hit. */
static void visibility_boundary(int n)
{
    nc_set_mxcsr(0x1F80);
    nc_seed(0xA00000u + n);
    memset(area_view, 0, sizeof *area_view);
    area_view->right[0] = nc_float_plain(0.1f, 0.9f);
    area_view->right[1] = nc_float_plain(0.1f, 0.9f);
    area_view->back[2] = 1.0f;
    float point[3] = {nc_float_plain(0.01f, 1000000.0f), nc_float_plain(0.01f, 1000000.0f), 0.0f};
    float scale = 0.70709997f;
    float ry = area_view->right[1] * scale;
    float rx = area_view->right[0] * scale;
    point[2] = -(ry * point[1] + rx * point[0]) / scale;
    for (int i = 0; i < n % 5; i++)
        point[2] = nextafterf(point[2], n % 2 ? INFINITY : -INFINITY);
    nc_set_mxcsr(control(n));
    uint64_t result = visible(point);
    uint32_t status = nc_get_mxcsr();
    nc_set_mxcsr(0x1F80);
    nc_line("view boundary %d %016llx %08x", n, (unsigned long long)result, status);
}

int main(void)
{
    nc_map_image();
    for (int n = 0; n < nc_cases(4000); n++) {
        for (int op = 0; op < 3; op++) membership(op, n);
        visibility(n);
        visibility_boundary(n);
    }
    return 0;
}
