/* Cell Phone (25) and Pay Phone (33): dialling, ringing, answering, hanging
   up. Part of the item update, 0x1400CC610. */
#include "items.h"

int item_is_phone(int32_t type)
{
    return (((uint32_t)type - ITEM_CELL_PHONE) & ~(uint32_t)(ITEM_PAY_PHONE - ITEM_CELL_PHONE)) == 0;
}

static void record_phone_event(int32_t tick, int32_t value, int32_t item, float a, float b)
{
    int32_t count = world_event_count;
    WorldEvent *event = &world_events[count];
    world_event_count = (int32_t)(((uint32_t)count + 1u) & 0xFFFF);
    event->type = 19;
    event->tick = tick;
    event->a = value;
    event->b = item;
    world_event_float_a(event) = a;
    world_event_float_b(event) = b;
}

/* Hangs up phone i and the phone it is connected to. The original reads
   the connection again after each store. */
static void hang_up(int i)
{
    item_phone_status(i) = PHONE_IDLE;
    item_phone_status(item_phone_connected(i)) = PHONE_IDLE;
    item_phone_connected(item_phone_connected(i)) = -1;
    item_phone_display_number(item_phone_connected(i)) = 0;
    event_update_item_info((unsigned int)item_phone_connected(i));
    item_phone_display_number(i) = 0;
    item_phone_connected(i) = -1;
    event_update_item_info((unsigned int)i);
}

static void dial(int i)
{
    item_phone_caller_ring_timer(i) = 0;
    if (item_pressed(i, 1)) {
        item_phone_status(i) = PHONE_IDLE;
        item_phone_display_number(i) = 0;
        item_phone_entered_number(i) = 0;
        event_update_item_info((unsigned int)i);
    }
    int32_t number = item_phone_entered_number(i);
    if (number < 1000)
        return;
    item_phone_entered_number(i) = 0;
    item_cooldown(i) = 180;
    for (int j = 0; j < WORLD_ITEM_CAPACITY; j++) {
        if (!world_items[j].active || j == i || !item_is_phone(world_items[j].type) ||
            item_phone_number(j) != number)
            continue;
        if (item_phone_connected(j) == -1) {
            item_phone_status(i) = PHONE_RINGING;
            item_phone_status(j) = PHONE_RINGING;
            item_phone_connected(i) = j;
            item_phone_display_number(i) = 0;
            item_phone_display_number(j) = item_phone_number(i);
            event_update_item_info((unsigned int)i);
            event_update_item_info((unsigned int)j);
        } else {
            item_phone_status(i) = PHONE_BUSY;
            item_phone_display_number(i) = 0;
            event_update_item_info((unsigned int)i);
        }
        return;
    }
}

/* The caller rings the callee until it answers, for at most 768 ticks. */
static void ring(int i)
{
    int32_t callee = item_phone_connected(i);
    if (callee == -1 || item_phone_connected(callee) != -1) {
        item_phone_caller_ring_timer(i) = 0;
        return;
    }
    int32_t tick = game_tick;
    if ((tick & 0x7F) == 0 && game_connected) {
        int32_t value = sound_phone_ring;
        record_phone_event(tick, value, callee, 1.0f, 1.0f);
        record_phone_event(tick, value, i, 0.5f, 1.0f);
    }
    item_phone_caller_ring_timer(i)++;
    if (item_phone_caller_ring_timer(i) < 0x300)
        return;
    item_phone_status(i) = PHONE_IDLE;
    item_phone_status(callee) = PHONE_IDLE;
    item_phone_display_number(item_phone_connected(i)) = 0;
    event_update_item_info((unsigned int)item_phone_connected(i));
    item_phone_connected(i) = -1;
    item_phone_display_number(i) = 0;
    event_update_item_info((unsigned int)i);
}

void phone_update(int i)
{
    if (item_cooldown(i) > 0)
        item_cooldown(i)--;
    int32_t state = item_phone_status(i);

    if (state == PHONE_IDLE) {
        item_phone_caller_ring_timer(i) = 0;
        if (!item_pressed(i, 1))
            return;
        item_phone_status(i) = PHONE_DIALLING;
        item_phone_display_number(i) = 0;
        item_phone_entered_number(i) = 0;
        event_update_item_info((unsigned int)i);
        return;
    }

    if (state == PHONE_BUSY) {
        int32_t ticks = (int32_t)((uint32_t)item_phone_caller_ring_timer(i) + 1u);
        int32_t tick = game_tick;
        item_phone_caller_ring_timer(i) = ticks;
        if ((tick & 0x3F) == 0 && game_connected)
            record_phone_event(tick, sound_phone_busy, i, 1.0f, 1.0f);
        if (ticks < 360 && !item_pressed(i, 1))
            return;
        item_phone_status(i) = PHONE_IDLE;
        item_phone_caller_ring_timer(i) = 0;
        item_phone_display_number(i) = 0;
        item_phone_entered_number(i) = 0;
        item_phone_connected(i) = -1;
        event_update_item_info((unsigned int)i);
        return;
    }

    if (state == PHONE_DIALLING) {
        dial(i);
        return;
    }

    if (state == PHONE_IN_CALL) {
        int32_t other = item_phone_connected(i);
        if (other == -1 || !world_items[other].active) {
            item_phone_status(i) = PHONE_IDLE;
            item_phone_connected(i) = -1;
            item_phone_display_number(i) = 0;
            event_update_item_info((unsigned int)i);
            state = PHONE_IDLE;
        }
    }
    if (state == PHONE_RINGING)
        ring(i);

    /* The button: hang up, or answer every phone ringing this one. */
    if (!item_pressed(i, 1))
        return;
    if (item_phone_connected(i) != -1) {
        hang_up(i);
        return;
    }
    for (int j = 0; j < WORLD_ITEM_CAPACITY; j++) {
        if (!world_items[j].active || j == i || !item_is_phone(world_items[j].type) ||
            item_phone_connected(j) != i)
            continue;
        item_phone_status(i) = PHONE_IN_CALL;
        item_phone_status(j) = PHONE_IN_CALL;
        item_phone_connected(i) = j;
        item_phone_display_number(i) = item_phone_number(j);
        event_update_item_info((unsigned int)i);
        item_phone_display_number(j) = item_phone_number(i);
        event_update_item_info((unsigned int)j);
    }
}
