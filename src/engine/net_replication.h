/* Per-peer replication queues and the item-state words they send. The state
 * accessors keep the peer block's anchor and field addresses next to their
 * meaning, as the other headers do. */
#ifndef SR_ENGINE_NET_REPLICATION_H
#define SR_ENGINE_NET_REPLICATION_H
#include "item.h"
#include "net_bits.h"

/* One replication block per peer, anchored at 0x1A8E3DA20 (0x2E1E0 bytes).
   The peer index is sign-extended, as the original's IMUL keeps it, so a
   negative peer reaches below the first block. 0x1401060F0 appends kind-1
   entries (a value to send), 0x140105AB0 kind-0 ones (a four-word event),
   both after the 2048-word head comes within the limit; queue_event first
   needs a free slot of the 1024 per-item pending flags. */
#define NET_REPLICATION_PEER_STRIDE 0x2E1E0ULL

typedef struct ReplicationRingEntry {
    int32_t kind;                     /* 1: value, 0: event */
    int32_t index;                    /* the value, or the slot found */
    uint32_t arg1, arg2, arg3;        /* the event's words */
} ReplicationRingEntry;

typedef struct ReplicationItemSlot {
    int32_t pending;                  /* the item still owes this peer its state */
    int32_t unknown_4[3];             /* counts and the pending word of 0x140105C20 */
} ReplicationItemSlot;

#define replication_ring_head(peer) \
    (SR_GLOBAL(int32_t, 0x1A8E617D8ULL + NET_REPLICATION_PEER_STRIDE * (uint64_t)(int64_t)(peer)))
#define replication_ring_limit(peer) \
    (SR_GLOBAL(int32_t, 0x1A8E617E0ULL + NET_REPLICATION_PEER_STRIDE * (uint64_t)(int64_t)(peer)))
#define replication_ring_entry(peer, head) \
    (&SR_GLOBAL(ReplicationRingEntry, 0x1A8E617E4ULL + NET_REPLICATION_PEER_STRIDE \
                                     * (uint64_t)(int64_t)(peer) + 20ULL * (uint64_t)(int64_t)(int32_t)(head)))
#define replication_item_slot(peer, index) \
    (&SR_GLOBAL(ReplicationItemSlot, 0x1A8E5D7D8ULL + NET_REPLICATION_PEER_STRIDE \
                                     * (uint64_t)(int64_t)(peer) + 0x10ULL * (uint64_t)(int64_t)(int32_t)(index)))

/* Returns the new head, written into RAX unless the ring is full: then the
   head the ring would need. 0x1401060F0. */
uint32_t net_replication_track_value(int peer, uint32_t value);

/* Appends the event to the first free per-item slot. The slot-table walk's
   return (a pointer past slot 1023) or the new head ends in RAX.
   0x140105AB0. */
uintptr_t net_replication_queue_event(int peer, uint32_t arg1, uint32_t arg2, uint32_t arg3);

/* The item's replication words: type 8, parent 10, holder 10, slot 4 bits,
   and for type 39 the two 5-bit fields. Each returns its last bit
   transfer's success word. 0x14010EF40, 0x14018DB20. */
int net_replication_write_item_state(int item);
int net_replication_read_item_state(int item);

#endif
