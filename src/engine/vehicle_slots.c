#include "vehicle_slots.h"

int64_t vehicle_slot_spawn(int type, int record, uint32_t flags)
{
    if (record == -1)
        return 0xFFFFFFFFLL;
    int32_t count = vehicle_slot_count(record);
    if (count <= 0)
        return 0xFFFFFFFFLL;
    VehicleSlot *slots = vehicle_slots(record);
    int32_t index = 0;
    while (slots[index].used) {
        if (++index >= count)
            return 0xFFFFFFFFLL;
    }
    slots[index].used = 1;
    return sr_CreateVehicle(type, slots[index].position, 0, (unsigned *)slots[index].rotation, flags);
}
