/* Street triangles near a box: 0x140188720 (one street's range) and
 * 0x140188900 (all streets in the box's cells, which calls the first). */
#include <string.h>
#include "nc.h"
#include "world_streets.h"

#ifdef NC_NATIVE
#define one_street(list, lo, hi, s, r) \
    ((void (*)(void *, const float *, const float *, int, int))NC_ADDR(0x140188720))(list, lo, hi, s, r)
#define all_streets(list, lo, hi, ranges) \
    ((void (*)(void *, const float *, const float *, int))NC_ADDR(0x140188900))(list, lo, hi, ranges)
#else
#define one_street  world_street_triangles_in_box
#define all_streets world_streets_triangles_in_box
#endif

#define STREETS 12          /* streets the fixture fills */
#define AREA 320.0f         /* world units covered by the filled cells (5 cells) */

static StreetTriangleList list;
static int few_triangles;           /* short ranges, so many candidates fit in the list */
static int32_t start_count;

static float coordinate(void)
{
    if (nc_chance(30))                       /* on a coarse grid: boxes touch exactly */
        return (float)((int)nc_rand_below(60) * 8 - 136);   /* reaches below row 0 too */
    return nc_chance(3) ? nc_float(-AREA, AREA) : nc_float_plain(-40.0f, AREA + 40.0f);
}

static void random_box(float lo[3], float hi[3], float size)
{
    for (int i = 0; i < 3; i++) {
        lo[i] = coordinate();
        hi[i] = lo[i] + (nc_chance(10) ? -nc_float_plain(0, size) : nc_float_plain(0, size));
        if (nc_chance(30))
            hi[i] = lo[i] + (float)(8 * (int)nc_rand_below((uint32_t)(size / 8) + 1));
        if (nc_chance(2))
            hi[i] = nc_float(-AREA, AREA);
    }
}

static void fill_street(int index)
{
    Street *s = &world_streets[index];
    random_box(s->bounds_min, s->bounds_max, 150.0f);
    for (int r = 0; r < 4; r++) {
        int first = nc_chance(3) ? (int)nc_rand_below(8) - 4 : (int)nc_rand_below(1024);
        s->range_first[r] = first;
        s->range_end[r] = first + (nc_chance(5) ? -(int)nc_rand_below(4)
                                   : (int)nc_rand_below(few_triangles ? 4 : 300));
        if (s->range_end[r] > 1028)
            s->range_end[r] = 1028;
    }
    for (int t = 0; t < 1024; t++) {
        float *b = s->triangle_bounds[t];
        random_box(b, b + 3, 60.0f);
        for (int c = 0; c < 3; c++)
            s->triangle[t][c] = nc_chance(1) ? (int)nc_rand_below(6) - 3 : (int)nc_rand_below(1024);
    }
    for (int v = 0; v < 1024; v++)
        for (int c = 0; c < 3; c++)
            s->vertex[v][c] = nc_float(-500.0f, 500.0f);
}

static void fill_cells(void)
{
    int dense = nc_chance(20);
    for (int z = 0; z < 6; z++)
        for (int x = 0; x < 6; x++) {
            StreetCell *cell = &world_street_cells[z * STREET_CELLS_ACROSS + x];
            cell->count = dense ? 8 + (int)nc_rand_below(4) : (int)nc_rand_below(nc_chance(20) ? 12 : 5);
            int32_t *entries = &cell->count + 1;
            for (int k = 0; k < 8; k++)
                entries[k] = (int)nc_rand_below(STREETS);
        }
}

static void fill_list(void)
{
    uint32_t *words = (uint32_t *)&list;
    for (size_t i = 0; i < sizeof list / 4; i++)
        words[i] = (uint32_t)nc_rand();
    list.count = nc_chance(5) ? 1000 + (int)nc_rand_below(40) : (int)nc_rand_below(200);
    start_count = list.count;
}

static void report(const char *what)
{
    nc_line("%s added %d count %d list %016llx mxcsr %08x", what, list.count - start_count, list.count,
            (unsigned long long)nc_hash(&list, sizeof list), nc_get_mxcsr());
}

int main(void)
{
    nc_map_image();
    nc_save(world_streets, sizeof(Street) * STREETS);
    nc_save(world_street_cells, sizeof(StreetCell) * STREET_CELLS_ACROSS * 8);
    int cases = nc_cases(1000);
    for (int n = 0; n < cases; n++) {
        float lo[3], hi[3];
        nc_seed(n);
        nc_restore();
        few_triangles = nc_chance(40);
        for (int s = 0; s < STREETS; s++)
            fill_street(s);
        fill_cells();

        /* One street's range. */
        fill_list();
        random_box(lo, hi, 120.0f);
        nc_set_mxcsr(0x1F80);
        one_street(&list, lo, hi, (int)nc_rand_below(STREETS), (int)nc_rand_below(4));
        report("street");

        /* Every street in the cells. */
        fill_list();
        random_box(lo, hi, nc_chance(30) ? 400.0f : 100.0f);
        if (nc_chance(3))
            lo[0] = nc_float(-1e6f, 1e6f);
        nc_set_mxcsr(0x1F80);
        all_streets(&list, lo, hi, (int)nc_rand_below(8));
        report("streets");
    }
    return 0;
}
