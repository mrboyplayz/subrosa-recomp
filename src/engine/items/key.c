/* Key (27): kept while its vehicle exists; tells the vehicle whether its
   holder sits in it. Part of the item update, 0x1400CC610. */
#include "items.h"

void key_update(int i)
{
    WorldItem *key = &world_items[i];
    uint32_t vehicle = (uint32_t)world_item_vehicle(i);
    if (vehicle >= PHYSICS_VEHICLE_CAPACITY)
        return;
    if (physics_vehicles[vehicle].active)
        key->lifetime = 0xFFFF;
    int32_t holder = key->holder;
    vehicle_is_locked(vehicle) = 1;
    if (holder != -1 && (uint32_t)world_humans[holder].vehicle == vehicle) {
        vehicle_keyholder_player(vehicle) = world_humans[holder].player;
        vehicle_is_locked(vehicle) = 0;
    }
}
