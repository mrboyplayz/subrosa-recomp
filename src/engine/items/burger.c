/* Burger (30): let go while held, it raises two of the holder's values
   (at most once every 300 ticks). Part of the item update, 0x1400CC610. */
#include "items.h"

/* Returns whether a use was spent. */
int burger_update(int i, int held_down, int was_held_down)
{
    if (held_down || !was_held_down)
        return 0;
    int32_t holder = world_items[i].holder;
    if (holder == -1 || human_burger_cooldown(holder) != 0)
        return 0;
    int32_t value = (int32_t)((uint32_t)human_max_stamina(holder) + 16u);
    human_max_stamina(holder) = value;
    human_burger_cooldown(holder) = 300;
    human_burger_level(holder) = (int32_t)((uint32_t)human_burger_level(holder) + 8u);
    human_max_stamina(holder) = value > 255 ? 255 : value;
    if (human_burger_level(holder) > 105)
        human_burger_level(holder) = 105;
    return 1;
}
