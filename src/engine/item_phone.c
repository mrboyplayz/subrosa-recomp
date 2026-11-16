/* Phones: recording a phone's state (0x140051940). See item.h. */
#include "arith.h"
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

/* Ends the call of an item and puts its phone out of use: no call state, no
 * partner, a lifetime of zero. The other end is cleared too, and its change
 * recorded, when there is one. The original reads the item's partner field
 * again before each use, so an item that is its own partner clears that
 * field first and the later writes land on item -1; this keeps that. */
static void drop_phone(int item)
{
    if (item_call_partner(item) != -1) {
        item_call_state(item_call_partner(item)) = 0;
        item_call_partner(item_call_partner(item)) = -1;
        item_call_number(item_call_partner(item)) = 0;
        item_phone_changed(item_call_partner(item));
    }
    item_call_state(item) = 0;
    item_call_partner(item) = -1;
    world_items[item].lifetime = 0;
}

void item_drop_phones_of_number(int base)
{
    int32_t first = add_int(multiply_int(base, 1111), 1111);
    int32_t second = add_int(multiply_int(base, 1111), 1112);
    for (int item = 0; item < WORLD_ITEM_CAPACITY; item++) {
        if (!world_items[item].active || world_items[item].type != 25)
            continue;
        int32_t number = item_phone_number(item);
        if (number == first)
            drop_phone(item);
        if (number == second)
            drop_phone(item);
    }
}
