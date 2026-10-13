/* Phones: recording a phone's state (0x140051940). See item.h. */
#include "frame.h"
#include "item.h"

void item_phone_changed(int item)
{
    if (!game_connected || (uint32_t)item > 0x3FF)
        return;
    int32_t count = world_event_count;
    WorldEvent *event = &world_events[count];
    world_event_count = (int32_t)((uint32_t)count + 1u) & 0xFFFF;
    event->type = 6;
    world_item_change_count(item)++;
    event->tick = game_tick;
    event->a = item;
    event->b = item_call_state(item);
    event->c = item_call_number(item);
    event->unknown_2c = item_unknown_278(item);
}
