#include "net_slots.h"

/* The ratio the original compares: the numerator over the denominator plus
 * 0.01 (as a float). */
static float ratio(int32_t peer, int index)
{
    const NetSlot *slot = net_slot(peer, index);
    return slot->numerator / (slot->denominator + 0.0099999998f);
}

int32_t net_slot_pick(int32_t peer, float limit)
{
    for (int32_t index = 0; index < NET_SLOT_COUNT; index++) {
        if (!net_slot(peer, index)->used)
            return index;
    }
    /* All slots are used. The original then walks the slots for the one with
     * the smallest ratio, starting from slot 0 (or from the pre-slot when its
     * ratio is 65536 or more), but each step compares the running ratio with
     * the ratio of the slot it came from, never with the next one, so the
     * walk never leaves its start. What remains: the pre-slot's ratio of
     * 65536 or more, or a NaN that fails the test below, decides whether slot
     * 0 is offered, and it is when its ratio is above the limit. */
    if (ratio(peer, -1) >= 65536.0f)
        return -1;
    return ratio(peer, 0) > limit ? 0 : -1;
}

uint32_t net_slot_claim(int32_t peer, uint32_t a, uint32_t b, uint32_t c, uint32_t d, float numerator,
                    float denominator)
{
    int32_t index = net_slot_pick(peer, numerator / denominator);
    if (index == -1)
        return 0xFFFFFFFFu;
    NetSlot *slot = net_slot(peer, index);
    slot->numerator = numerator;
    slot->denominator = denominator;
    slot->used = 1;
    slot->unknown_4 = (int32_t)a;
    slot->unknown_8 = (int32_t)b;
    slot->unknown_c = (int32_t)c;
    slot->unknown_10 = (int32_t)d;
    return d;
}
