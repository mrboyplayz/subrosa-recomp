/* The replication layer's outgoing encoders and the peer catch-up: the
 * distance priority power, the 4-bit/9-bit and adaptive delta encoders
 * over the outgoing packet writer, and the copy of a snapshot slot's
 * changed entries into the per-entry words a peer is owed. The state
 * accessors keep the addresses the disassembly shows next to their
 * meaning, as the other headers do. */
#ifndef SR_ENGINE_NET_REPLICATION_ENCODE_H
#define SR_ENGINE_NET_REPLICATION_ENCODE_H
#include "memory.h"
#include "net_bits.h"

/* The delta encoders' widths and markers, rebuilt by the packet builder
 * 0x140110D00 before it sends: the small and medium delta widths (4 and 8
 * when zero), each with its half range, and the marker flag that prefixes
 * a delta with a 1 bit and collapses a zero delta to a single 0 bit. */
#define net_replication_small_delta_bits SR_GLOBAL(int32_t, 0x165D84960ULL)
#define net_replication_medium_delta_bits SR_GLOBAL(int32_t, 0x165D84964ULL)
#define net_replication_small_delta_half SR_GLOBAL(int32_t, 0x165D84970ULL)
#define net_replication_medium_delta_half SR_GLOBAL(int32_t, 0x165D84974ULL)
#define net_replication_delta_markers SR_GLOBAL(int32_t, 0x16B2A224CULL)

/* One replication block per peer is anchored at 0x1A8E3DA20 (0x2E1E0
 * bytes); the peer index is sign-extended, as the original's IMUL keeps
 * it, so a negative peer reaches below the first block. */
#define SR_NET_PEER_STRIDE 0x2E1E0ULL

/* The tick the layer catches peers up to; its low byte picks the snapshot
 * slot a peer's copies come from. 0x1AD04B20C. */
#define replication_now SR_GLOBAL(int32_t, 0x1AD04B20CULL)

/* The tick whose snapshot the peer last caught up to. 0x1A8E3DA74. */
#define replication_peer_last_tick(peer) \
    (SR_GLOBAL(int32_t, 0x1A8E3DA74ULL + SR_NET_PEER_STRIDE * (uint64_t)(int64_t)(peer)))

/* The per-entry words a peer is owed, filled by 0x140106160 from the
 * snapshot slot its last tick picks and stamped with that tick. */
typedef struct ReplicationHumanOwed {
    int32_t unknown_0;                /* the human's snapshot word */
    int32_t unknown_4;
    int32_t tick;                     /* the peer's last-caught-up tick */
} ReplicationHumanOwed;

typedef struct ReplicationBlockOwed {
    int32_t unknown_0;                /* the block's tick stamp */
    int32_t unknown_4;
} ReplicationBlockOwed;

typedef struct ReplicationItemOwed {
    int32_t unknown_0;                /* the item's snapshot word */
    int32_t unknown_4, unknown_8, unknown_c;
    int32_t tick;
} ReplicationItemOwed;

typedef struct ReplicationUnknownOwed {
    int32_t unknown_0;                /* the word's snapshot value */
    int32_t unknown_4;
    int32_t tick;
} ReplicationUnknownOwed;

#define replication_peer_human(peer, index) \
    (&SR_GLOBAL(ReplicationHumanOwed, 0x1A8E3EBC0ULL + SR_NET_PEER_STRIDE \
                                    * (uint64_t)(int64_t)(peer) + 12ULL * (uint64_t)(index)))
#define replication_peer_block(peer, index) \
    (&SR_GLOBAL(ReplicationBlockOwed, 0x1A8E3DBC4ULL + SR_NET_PEER_STRIDE \
                                     * (uint64_t)(int64_t)(peer) + 8ULL * (uint64_t)(index)))
#define replication_peer_item(peer, index) \
    (&SR_GLOBAL(ReplicationItemOwed, 0x1A8E3F7C0ULL + SR_NET_PEER_STRIDE \
                                    * (uint64_t)(int64_t)(peer) + 20ULL * (uint64_t)(index)))
#define replication_peer_unknown(peer, index) \
    (&SR_GLOBAL(ReplicationUnknownOwed, 0x1A8E447C0ULL + SR_NET_PEER_STRIDE \
                                       * (uint64_t)(int64_t)(peer) + 12ULL * (uint64_t)(index)))

/* The changed-entry masks, one 0x160-byte block per peer and snapshot
 * slot: 8 human words, 16 block words at 0x20, 32 item words at 0x60 and
 * 32 unknown words at 0xE0. 0x1A8E477C0. */
#define replication_human_dirty(peer, slot, entry) \
    (SR_GLOBAL(uint32_t, 0x1A8E477C0ULL + SR_NET_PEER_STRIDE * (uint64_t)(int64_t)(peer) \
                        + 0x160ULL * (uint64_t)(slot) + 4ULL * ((uint64_t)(entry) >> 5)))
#define replication_block_dirty(peer, slot, entry) \
    (SR_GLOBAL(uint32_t, 0x1A8E477E0ULL + SR_NET_PEER_STRIDE * (uint64_t)(int64_t)(peer) \
                        + 0x160ULL * (uint64_t)(slot) + 4ULL * ((uint64_t)(entry) >> 5)))
#define replication_item_dirty(peer, slot, entry) \
    (SR_GLOBAL(uint32_t, 0x1A8E47820ULL + SR_NET_PEER_STRIDE * (uint64_t)(int64_t)(peer) \
                        + 0x160ULL * (uint64_t)(slot) + 4ULL * ((uint64_t)(entry) >> 5)))
#define replication_unknown_dirty(peer, slot, entry) \
    (SR_GLOBAL(uint32_t, 0x1A8E478A0ULL + SR_NET_PEER_STRIDE * (uint64_t)(int64_t)(peer) \
                        + 0x160ULL * (uint64_t)(slot) + 4ULL * ((uint64_t)(entry) >> 5)))

/* The per-tick snapshot slots the copies come from: 0x4DC00 bytes per
 * slot, 121-dword human words, 9-dword item words and 10-dword unknown
 * words. 0x160FC4964, 0x160FFF564, 0x161008564. */
#define replication_human_snapshot(slot, entry) \
    (SR_GLOBAL(uint32_t, 0x160FC4964ULL + 0x4DC00ULL * (uint64_t)(uint8_t)(slot) \
                        + 484ULL * (uint64_t)(entry)))
#define replication_item_snapshot(slot, entry) \
    (SR_GLOBAL(uint32_t, 0x160FFF564ULL + 0x4DC00ULL * (uint64_t)(uint8_t)(slot) \
                        + 36ULL * (uint64_t)(entry)))
#define replication_unknown_snapshot(slot, entry) \
    (SR_GLOBAL(uint32_t, 0x161008564ULL + 0x4DC00ULL * (uint64_t)(uint8_t)(slot) \
                        + 40ULL * (uint64_t)(entry)))

/* The replication priority of a thing at a distance: 256 minus the
 * distance raised to 1.75 scaled by 1/256, truncated. 0x140105BD0. */
unsigned int net_replication_distance_priority(float distance);

/* Sends a signed change as a 4-bit delta when it fits in [-8, 7] (marker
 * 0), a 9-bit delta when it fits in [-256, 255] (marker 10), and the full
 * value in `full_bits` bits otherwise (marker 11); with `use_delta` clear
 * the full form is always sent. The inlined value transfers leave their
 * cursor word in RAX. 0x14010E6C0. */
uint64_t net_replication_encode_delta(uint32_t *field, int reference, int use_delta, int full_bits);

/* Sends a signed change with adaptive width: with the markers on a zero
 * delta is a single 0 bit, and otherwise a 1 marker bit precedes a second
 * code that picks the small width (0), the medium width (10) or the full
 * value in `full_bits` (11); without the markers the second code alone is
 * sent. Every path ends in a bit transfer and returns its success word.
 * 0x14010E9B0. */
uint64_t net_replication_encode_adaptive_delta(uint32_t *field, int reference, int use_delta,
                                               int full_bits);

/* Copies the entries a peer's snapshot slot marked changed into the words
 * it is owed when the peer is fewer than 192 ticks behind. Returns the
 * tick age, or the last mask word index or copied snapshot word the
 * original leaves in RAX. 0x140106160. */
uint64_t net_replication_peer_catchup(int peer);

#endif
