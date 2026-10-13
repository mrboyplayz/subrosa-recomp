/* Recording a phone's state: 0x140051940. */
#include <string.h>
#include "nc.h"
#include "frame.h"
#include "item.h"

#ifdef NC_NATIVE
#define phone_changed(i) ((void (*)(int))NC_ADDR(0x140051940))(i)
#else
#define phone_changed item_phone_changed
#endif

int main(void)
{
    nc_map_image();
    nc_save(&world_events[0xFFF0], sizeof(WorldEvent) * 16);
    nc_save(&world_events[0], sizeof(WorldEvent) * 16);
    int cases = nc_cases(2000);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        nc_restore();
        int item = nc_chance(10) ? (int)nc_rand() : (int)nc_rand_below(1100);
        int safe = (uint32_t)item <= 0x3FF ? item : 0;
        item_call_state(safe) = (int32_t)nc_rand();
        item_call_number(safe) = (int32_t)nc_rand();
        item_unknown_278(safe) = (int32_t)nc_rand();
        world_item_change_count(safe) = (int32_t)nc_rand_below(1000);
        game_connected = nc_chance(80);
        game_tick = (int32_t)nc_rand();
        world_event_count = nc_chance(20) ? 0xFFF8 + (int)nc_rand_below(8) : (int)nc_rand_below(8);
        if (nc_chance(5))
            world_event_count |= 0x10000;            /* only the low 16 bits are kept */
        int start = world_event_count & 0xFFFF;

        phone_changed(item);
        nc_line("count %08x change %d event %016llx", world_event_count, world_item_change_count(safe),
                (unsigned long long)nc_hash(&world_events[start], sizeof(WorldEvent)));
    }
    return 0;
}
