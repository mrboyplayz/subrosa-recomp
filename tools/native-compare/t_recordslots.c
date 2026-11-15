// NC_WRAPPERS: 1400A4560 140132E00
#include "nc.h"
#include "record_slots.h"

#ifdef NC_NATIVE
#define find_item ((uint64_t (*)(void))NC_ADDR(0x1400A4560))
#define find_snapshot ((uint64_t (*)(void))NC_ADDR(0x140132E00))
#elif defined(NC_CLIENT_WRAPPERS)
int64_t sub_1400A4560(void), sub_140132E00(void);
#define find_item sub_1400A4560
#define find_snapshot sub_140132E00
#else
#define find_item item_tracking_find_free_slot
#define find_snapshot replication_snapshot_find_free_slot
#endif

int main(void)
{
    nc_map_image();
    for (int n = 0; n < nc_cases(1028); ++n) {
        nc_seed(n);
        /* Enumerate every possible first free slot and the full-pool case. */
        unsigned first = (unsigned)n % 257;
        unsigned mode = ((unsigned)n / 257) % 4;
        for (unsigned i = 0; i < RECORD_SLOT_CAPACITY; ++i) {
            uint32_t active = mode == 0 ? 1u : mode == 1 ? 0x80000000u : (uint32_t)nc_rand() | 1u;
            if (i == first || (mode == 3 && i > first && nc_chance(50))) active = 0;
            item_tracking_slots[i].active = active;
            item_tracking_slots[i].item = (uint32_t)nc_rand();
            item_tracking_slots[i].item_type = (uint32_t)nc_rand();
            replication_snapshot_slots[i].active = active;
            for (int j = 0; j < 19; ++j)
                replication_snapshot_slots[i].unknown_04[j] = (uint32_t)nc_rand();
        }
        uint64_t item = find_item();
        uint64_t snapshot = find_snapshot();
        nc_line("slots %d %016llx %016llx %016llx %016llx", n,
                (unsigned long long)item, (unsigned long long)snapshot,
                (unsigned long long)nc_hash(item_tracking_slots, 256 * sizeof(ItemTrackingSlot)),
                (unsigned long long)nc_hash(replication_snapshot_slots, 256 * sizeof(ReplicationSnapshotSlot)));
    }
    return 0;
}
