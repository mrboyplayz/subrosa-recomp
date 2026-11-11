#include "net_replication.h"

/* The record and head writes re-read the head between them, as the
   original's sign-extend reloads do: with a crafted negative head a record
   word can land on the head itself, and the following writes must pick up
   that new value. */

uint32_t net_replication_track_value(int peer, uint32_t value)
{
    int32_t saved = replication_ring_head(peer);
    uint32_t next = ((uint32_t)saved + 1u) & 0x7FFu;
    if ((int32_t)next == replication_ring_limit(peer))
        return next;
    replication_ring_entry(peer, saved)->kind = 1;
    replication_ring_entry(peer, replication_ring_head(peer))->index = (int32_t)value;
    uint32_t head = ((uint32_t)replication_ring_head(peer) + 1u) & 0x7FFu;
    replication_ring_head(peer) = (int32_t)head;
    return head;
}

uintptr_t net_replication_queue_event(int peer, uint32_t arg1, uint32_t arg2, uint32_t arg3)
{
    uint32_t next = ((uint32_t)replication_ring_head(peer) + 1u) & 0x7FFu;
    if ((int32_t)next == replication_ring_limit(peer))
        return next;
    ReplicationItemSlot *slot = replication_item_slot(peer, 0);
    uint32_t index = 0;
    int64_t walked = 0;
    while (slot->pending) {
        index++;
        walked++;
        slot++;
        if (walked >= 1024)
            return (uintptr_t)slot;
    }
    slot->pending = 1;
    replication_ring_entry(peer, replication_ring_head(peer))->kind = 0;
    replication_ring_entry(peer, replication_ring_head(peer))->index = (int32_t)index;
    replication_ring_entry(peer, replication_ring_head(peer))->arg1 = arg1;
    replication_ring_entry(peer, replication_ring_head(peer))->arg2 = arg2;
    replication_ring_entry(peer, replication_ring_head(peer))->arg3 = arg3;
    uint32_t head = ((uint32_t)replication_ring_head(peer) + 1u) & 0x7FFu;
    replication_ring_head(peer) = (int32_t)head;
    return head;
}

int net_replication_write_item_state(int item)
{
    WorldItem *record = &world_items[item];
    net_write_bits((uint32_t *)&record->type, 8);
    net_write_bits((uint32_t *)&record->parent, 10);
    net_write_bits((uint32_t *)&record->holder, 10);
    int result = net_write_bits((uint32_t *)&record->slot, 4);
    if (record->type == 39) {
        net_write_bits(&item_unknown_368(item), 5);
        return net_write_bits((uint32_t *)&item_unknown_36c(item), 5);
    }
    return result;
}

int net_replication_read_item_state(int item)
{
    WorldItem *record = &world_items[item];
    uint32_t decoded;
    net_read_bits((uint32_t *)&record->type, 8);
    net_read_bits(&decoded, 10);
    int32_t parent = decoded == 0x3FFu ? -1 : (int32_t)decoded;
    record->parent = parent;
    net_read_bits(&decoded, 10);
    int32_t holder = decoded == 0x3FFu ? -1 : (int32_t)decoded;
    record->holder = holder;
    int result = net_read_bits((uint32_t *)&record->slot, 4);
    if (record->type == 39) {
        net_read_bits(&item_unknown_368(item), 5);
        return net_read_bits((uint32_t *)&item_unknown_36c(item), 5);
    }
    return result;
}
