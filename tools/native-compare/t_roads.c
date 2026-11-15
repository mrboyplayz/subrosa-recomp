// NC_WRAPPERS: 140130000 14018C250
#include <limits.h>
#include "nc.h"
#include "roads.h"

#ifdef NC_NATIVE
#define pick() ((uint64_t (*)(void))NC_ADDR(0x140130000))()
#define queue(road) ((void (*)(int))NC_ADDR(0x14018C250))(road)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_140130000(void);
void sub_14018C250(int);
#define pick() ((uint64_t)sub_140130000())
#define queue(road) sub_14018C250(road)
#else
#define pick() ((uint64_t)(uint32_t)road_pick_random())
#define queue(road) road_queue_links(road)
#endif

/* rand (0x14023B1B0) is the same recording stub in both builds. */
static int calls;
int rand(void)
{
    ++calls;
    return (int)(nc_rand() & 0x7FFF);
}

int main(void)
{
    static const int32_t counts[] = {0, 1, 2, 5, 40, 300, -3};
    static const int32_t widths[] = {0, 1, 2, 3, 3, 4, 5, -1, INT_MIN, INT_MAX};
    static const int32_t links[] = {0, 1, 2, 5, 256, -1, 300};
    /* Callers clear the count first; later starts model repeated calls. */
    static const int32_t starts[] = {0, 0, 3, 1000};
    nc_map_image();
    nc_redirect(0x14023B1B0, (void *)rand);
    for (int n = 0; n < nc_cases(1500); ++n) {
        nc_seed(n);
        int32_t count = counts[n % 7];
        road_count = count;
        int narrow = (int)nc_rand_below(4); /* 0: none qualifies */
        for (int r = 0; r < 300; ++r) {
            road_unknown_30(r) = widths[nc_rand_below(10)];
            road_unknown_34(r) = widths[nc_rand_below(10)];
            if (narrow == 0 && road_unknown_30(r) <= 3 && road_unknown_34(r) <= 3) road_unknown_30(r) = 4;
            if (narrow == 1 && nc_chance(3)) road_unknown_30(r) = road_unknown_34(r) = 3;
        }
        calls = 0;
        uint64_t result = pick();
        nc_line("pick %d count %d result %016llx rand calls %d", n, count, (unsigned long long)result, calls);

        int32_t road = nc_chance(10) ? -1 : (int32_t)nc_rand_below(300);
        int32_t total = links[nc_rand_below(7)];
        /* Road -1 is skipped; the words where its record would be are made
           nonzero so reading them would show. */
        road_link_count(road) = road == -1 ? 2 : total;
        for (int k = 0; k < (road == -1 ? 2 : 300); ++k) road_links(road)[k] = (int32_t)nc_rand();
        road_link_queue_count = starts[nc_rand_below(4)];
        for (int k = 0; k < 1400; ++k) road_link_queue[k] = (int32_t)k;
        queue(road);
        nc_line("queue %d road %d links %d now %d queue %016llx", n, road, total, road_link_queue_count,
                (unsigned long long)nc_hash(road_link_queue, 1400 * sizeof(int32_t)));
    }
    return 0;
}
