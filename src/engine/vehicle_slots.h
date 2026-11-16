/* Parked-vehicle slots of a corporation: each record of 0x5BC4 bytes from
 * 0x183EBFAA0 has a count at +0x4E78 and that many slots of 0x34 bytes from
 * +0x4E7C; a slot is free while its first word is zero. Its position (3
 * floats) is at +4 and its rotation (9 floats) at +0x10. */
#ifndef SR_ENGINE_VEHICLE_SLOTS_H
#define SR_ENGINE_VEHICLE_SLOTS_H
#include "memory.h"

typedef struct VehicleSlot {
    int32_t used;
    float position[3];
    float rotation[9];
} VehicleSlot;
_Static_assert(sizeof(VehicleSlot) == 0x34, "vehicle slot stride");
#define VEHICLE_SLOT_RECORD 0x5BC4ULL
#define vehicle_slot_count(record) \
    SR_GLOBAL(int32_t, 0x183EC4918ULL + VEHICLE_SLOT_RECORD * (uint64_t)(int64_t)(record))
#define vehicle_slots(record) \
    (&SR_GLOBAL(VehicleSlot, 0x183EC491CULL + VEHICLE_SLOT_RECORD * (uint64_t)(int64_t)(record)))

/* The vehicle maker the slots feed (still recompiled): type, position,
 * 0, rotation, the last argument. */
extern long long sr_CreateVehicle(int type, float *position, unsigned *unknown, unsigned *rotation, unsigned flags);

/* Takes the first free slot of the record, marks it used and makes a vehicle
 * of the type there. Returns the vehicle, or -1 for record -1, a record with
 * no slots or no free slot. 0x1400F00D0 */
int64_t vehicle_slot_spawn(int type, int record, uint32_t flags);
#endif
