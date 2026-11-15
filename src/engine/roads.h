/* The road records between street intersections: the count at
 * 0x175FF3464, then records of 0x630 bytes (the creator at 0x1400038E0
 * fills them from two intersections and two width-like arguments). */
#ifndef SR_ENGINE_ROADS_H
#define SR_ENGINE_ROADS_H
#include "memory.h"

#define road_count SR_GLOBAL(int32_t, 0x175FF3464ULL)
#define road_field(road, offset) \
    SR_GLOBAL(int32_t, 0x175FF3468ULL + 0x630ULL * (uint64_t)(int64_t)(road) + (offset))
/* The creator's third and fourth arguments. */
#define road_unknown_30(road)  road_field(road, 0x30)
#define road_unknown_34(road)  road_field(road, 0x34)
/* Up to 256 linked indices (the traffic set-up appends them). */
#define road_link_count(road)  road_field(road, 0x22C)
#define road_links(road)       (&road_field(road, 0x230))

/* The scratch list road_queue_links appends to; callers clear its count
 * first. 0x15FD06200, 0x15FD06204. */
#define road_link_queue_count SR_GLOBAL(int32_t, 0x15FD06200ULL)
#define road_link_queue       (&SR_GLOBAL(int32_t, 0x15FD06204ULL))

/* A random road whose two words at +0x30 and +0x34 are both at most 3,
 * drawn with rand() % road_count. After 1,024 redraws the last draw is
 * returned as it is. 0 with no roads. 0x140130000 */
int32_t road_pick_random(void);
/* Appends the road's links to the scratch list; -1: nothing. 0x14018C250 */
void road_queue_links(int32_t road);
#endif
