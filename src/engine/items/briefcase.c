/* Briefcase (15) and Open Briefcase (16): a press opens or closes it; cash
   inside sits in a row along the case. Part of the item update, 0x1400CC610. */
#include "items.h"

/* Cash (both types) in a briefcase sits along the case's first row, by its
   slot. position holds the case's position on entry. Other items stay at
   the case's position. */
void briefcase_place_child(const WorldItem *child, float position[3])
{
    if (child->type != ITEM_CASH && child->type != ITEM_CASH_2)
        return;
    const float *r = child->rotation;
    float along = (float)child->slot * 0.10546875f - 0.2109375f;
    position[0] = r[0] * along + position[0];
    position[1] = r[1] * along + position[1];
    position[2] = r[2] * along + position[2];
}

void briefcase_toggle(int i)
{
    WorldItem *briefcase = &world_items[i];
    if (briefcase->type == ITEM_BRIEFCASE)
        briefcase->type = ITEM_OPEN_BRIEFCASE;
    else if (briefcase->type == ITEM_OPEN_BRIEFCASE)
        briefcase->type = ITEM_BRIEFCASE;
    else
        return;
    if (game_connected && (uint32_t)i < WORLD_ITEM_CAPACITY)
        world_item_change_count(i)++;
}
