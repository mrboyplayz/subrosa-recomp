#include "record_slots.h"

/* 0x1400A4560: query only; the caller initializes the selected record. */
uint32_t item_tracking_find_free_slot(void)
{
    for (uint32_t i = 0; i < RECORD_SLOT_CAPACITY; ++i)
        if (item_tracking_slots[i].active == 0)
            return i;
    return UINT32_MAX;
}

/* 0x140132E00: any nonzero active word occupies the record. */
uint32_t replication_snapshot_find_free_slot(void)
{
    for (uint32_t i = 0; i < RECORD_SLOT_CAPACITY; ++i)
        if (replication_snapshot_slots[i].active == 0)
            return i;
    return UINT32_MAX;
}
