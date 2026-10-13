/* Bandage (14): held down within 2 units of a living human who bleeds (or
   whose old health is below 10), counts to 256, then stops the bleeding of
   the nearest. Part of the item update, 0x1400CC610. */
#include "../arith.h"
#include "items.h"

/* Returns whether a use was spent. */
int bandage_update(int i, int held_down)
{
    WorldItem *bandage = &world_items[i];
    if (!held_down) {
        item_cooldown(i) = 0;
        return 0;
    }
    float best = 2.0f;
    int32_t nearest = -1;
    for (int h = 0; h < 256; h++) {
        WorldHuman *human = &world_humans[h];
        if (!human->active || human_old_health(h) <= 0)
            continue;
        if (human->bleeding == 0 && human_old_health(h) >= 10)
            continue;
        const float *point = human_position(h);
        float dx = point[0] - bandage->position[0];
        float dy = point[1] - bandage->position[1];
        float dz = point[2] - bandage->position[2];
        float distance = sqrt_float(dx * dx + dy * dy + dz * dz);
        if (best > distance) {
            nearest = h;
            best = distance;
        }
    }
    if (nearest == -1)
        return 0;
    int32_t progress = (int32_t)((uint32_t)item_cooldown(i) + 1u);
    item_cooldown(i) = progress;
    if (bandage->holder != -1)
        human_progress_bar(bandage->holder) = (int32_t)((uint32_t)progress << 8) / 256;
    if (progress < 256)
        return 0;
    item_cooldown(i) = 0;
    world_humans[nearest].bleeding = 0;
    if (human_old_health(nearest) < 10)
        human_old_health(nearest) = 10;
    return 1;
}
