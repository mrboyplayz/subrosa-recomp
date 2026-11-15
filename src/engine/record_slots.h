#ifndef RECORD_SLOTS_H
#define RECORD_SLOTS_H
#include "memory.h"

enum { RECORD_SLOT_CAPACITY = 256 };

typedef struct ItemTrackingSlot {
    uint32_t active;
    uint32_t item;
    uint32_t item_type;
} ItemTrackingSlot;

typedef struct ReplicationSnapshotSlot {
    uint32_t active;
    uint32_t unknown_04[19];
} ReplicationSnapshotSlot;

_Static_assert(sizeof(ItemTrackingSlot) == 12, "item tracking stride");
_Static_assert(sizeof(ReplicationSnapshotSlot) == 80, "snapshot stride");
#define item_tracking_slots (&SR_GLOBAL(ItemTrackingSlot, 0x182A7D580ULL))
#define replication_snapshot_slots (&SR_GLOBAL(ReplicationSnapshotSlot, 0x1A8E379E0ULL))

uint32_t item_tracking_find_free_slot(void);
uint32_t replication_snapshot_find_free_slot(void);
#endif
