/* Events the game records for its clients. */
#include "events.h"
#include "items/items.h"

void event_update_item_info(int item)
{
    if (!game_connected || (uint32_t)item >= WORLD_ITEM_CAPACITY)
        return;
    int32_t count = world_event_count;
    WorldEvent *event = &world_events[count];
    world_event_count = (int32_t)(((uint32_t)count + 1u) & 0xFFFF);
    event->type = WORLD_EVENT_UPDATE_ITEM_INFO;
    world_item_change_count(item)++;
    event->tick = game_tick;
    event->a = item;
    event->b = item_phone_status(item);
    event->c = item_phone_display_number(item);
    world_event_d(event) = item_phone_texture(item);
}
