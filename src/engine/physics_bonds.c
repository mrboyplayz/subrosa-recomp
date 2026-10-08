/* Bond lifetimes. See physics.h. */
#include "physics.h"

/* Removes bond from a list of bond indices: each occurrence is replaced by
   the last entry and the list shortened, as the original does. */
static void remove_from_list(int32_t *count, int32_t *entries, int bond)
{
    int index = 0;

    if (*count <= 0)
        return;
    do {
        if (entries[index] == bond) {
            int last = *count;
            *count = last - 1;
            entries[index] = entries[last - 1];
        } else {
            index++;
        }
    } while (index < *count);
}

void physics_expire_bonds(void)
{
    for (int index = 0; index < PHYSICS_BOND_CAPACITY; index++) {
        PhysicsBond *bond = &physics_bonds[index];
        /* The point and vehicle lists run on past their declared arrays. */
        const int32_t *points = (const int32_t *)(const void *)((const uint8_t *)bond + 0x18);
        const int32_t *vehicles = (const int32_t *)(const void *)((const uint8_t *)bond + 0x98);
        int ticks;

        if (!bond->active)
            continue;
        ticks = bond->lifetime;
        if (ticks < 0x10000)
            bond->lifetime = --ticks;
        if (ticks > 0)
            continue;

        for (int k = 0; k < bond->point_count; k++) {
            if (points[k] != -1) {
                PhysicsPoint *point = &physics_points[points[k]];
                remove_from_list(&point->bond_count, point->bonds, index);
            }
        }
        for (int k = 0; k < bond->vehicle_count; k++) {
            PhysicsVehicle *vehicle = &physics_vehicles[vehicles[k]];
            remove_from_list(&vehicle->bond_count, vehicle->bonds, index);
        }
        bond->active = 0;
    }
}
