/* Spawning into a parked-vehicle slot: record -1 and records with no slots
 * give -1; otherwise the first free slot is marked used and the vehicle maker
 * (0x14005BCA0, a recording stub behind the same jump in both builds) is
 * called with the type, the slot's position, a null, the slot's rotation and
 * the flags. The stub's result comes back. All records involved are hashed. */
// NC_WRAPPERS: 1400F00D0
#include <string.h>
#include "nc.h"
#include "vehicle_slots.h"

#ifdef NC_NATIVE
#define spawn(t, r, f) ((int64_t (*)(int, int, uint32_t))NC_ADDR(0x1400F00D0))(t, r, f)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_1400F00D0(int, int, unsigned);
#define spawn sub_1400F00D0
#else
#define spawn vehicle_slot_spawn
#endif

long long sr_CreateVehicle(int type, float *position, unsigned *unknown, unsigned *rotation, unsigned flags)
{
    uint64_t args[5] = {(uint64_t)type, (uint64_t)((uint8_t *)position - (uint8_t *)NC_ADDR(0x183EBFAA0ULL)),
                        (uint64_t)(uintptr_t)unknown, (uint64_t)((uint8_t *)rotation - (uint8_t *)NC_ADDR(0x183EBFAA0ULL)),
                        flags};
    nc_call("create_vehicle", 5, args);
    return (long long)(0x1234 + type);
}

int main(void)
{
    nc_map_image();
    nc_redirect(0x14005BCA0, (void *)sr_CreateVehicle);
    nc_save(NC_ADDR(0x183EC4918ULL - 0x5BC4ULL), 7 * 0x5BC4ULL);
    for (int n = 0; n < nc_cases(3000); n++) {
        nc_seed((uint64_t)n);
        nc_restore();
        for (int r = 0; r < 4; r++) {
            vehicle_slot_count(r) = nc_chance(10) ? (int32_t)nc_rand_below(2) - 1 : (int32_t)nc_rand_below(14);
            for (int s = 0; s < 14; s++) {
                VehicleSlot *slot = &vehicle_slots(r)[s];
                slot->used = nc_chance(70) ? (int32_t)(nc_rand() | 1) : 0;
                for (int k = 0; k < 3; k++)
                    slot->position[k] = nc_float(-100, 100);
                for (int k = 0; k < 9; k++)
                    slot->rotation[k] = nc_float(-1, 1);
            }
        }
        /* Record -1 lies before the table: give it a count and a free slot so
           that reading it would show. */
        SR_GLOBAL(int32_t, 0x183EC4918ULL - 0x5BC4ULL) = 5;
        SR_GLOBAL(int32_t, 0x183EC491CULL - 0x5BC4ULL) = 0;
        int record = nc_chance(10) ? -1 : (int)nc_rand_below(4);
        int type = (int)nc_rand_below(30);
        int64_t result = spawn(type, record, (uint32_t)nc_rand());
        nc_line("n%d record %d type %d -> %lld counts %d %d %d %d state %016llx", n, record, type, (long long)result,
                vehicle_slot_count(0), vehicle_slot_count(1), vehicle_slot_count(2), vehicle_slot_count(3),
                (unsigned long long)nc_hash(NC_ADDR(0x183EC4918ULL), 6 * 0x5BC4ULL));
    }
    return 0;
}
