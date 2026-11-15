#include <stdlib.h>
#include "roads.h"
#include "arith.h"

int32_t road_pick_random(void)
{
    if (road_count == 0) return 0;
    int32_t road = rand() % road_count;
    for (int tries = 0; road_unknown_30(road) > 3 || road_unknown_34(road) > 3;) {
        road = rand() % road_count;
        if (++tries >= 1024) break;
    }
    return road;
}

void road_queue_links(int32_t road)
{
    if (road == -1) return;
    const int32_t *link = road_links(road);
    for (int64_t remaining = road_link_count(road); remaining > 0; remaining--) {
        road_link_queue[road_link_queue_count] = *link++;
        road_link_queue_count = add_int(road_link_queue_count, 1);
    }
}
