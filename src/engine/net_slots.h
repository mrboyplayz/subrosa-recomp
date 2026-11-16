/* A peer's eight outgoing slots (replication blocks of 0x2E1E0 bytes from
 * 0x1A8E3DA20, the slots of 0x28 bytes from +0x5C). A slot is free while its
 * first word is zero. The two floats of a slot at +0x20 and +0x24 are a
 * numerator and a denominator; the ratio of the slot before the first (at
 * +0x34 of the block, where other state lives) takes part as slot -1. */
#ifndef SR_ENGINE_NET_SLOTS_H
#define SR_ENGINE_NET_SLOTS_H
#include "memory.h"

typedef struct NetSlot {
    int32_t used;
    int32_t unknown_4, unknown_8, unknown_c, unknown_10;
    uint8_t unknown_14[0xC];
    float numerator;
    float denominator;
} NetSlot;
_Static_assert(sizeof(NetSlot) == 0x28, "slot stride");
#define NET_SLOT_COUNT 8
/* index -1 is the pre-slot overlay, 0..7 the slots. */
#define net_slot(peer, index) \
    (&SR_GLOBAL(NetSlot, 0x1A8E3DA7CULL + 0x2E1E0ULL * (uint64_t)(int64_t)(peer) \
                         + 0x28ULL * (uint64_t)(int64_t)(index)))

/* The first free slot of the peer; when all are used, the slot whose ratio is
 * smallest if it is above the limit, else -1. 0x1400A4620 */
int32_t net_slot_pick(int32_t peer, float limit);
/* Claims the slot net_slot_pick gives for the ratio numerator / denominator
 * and fills it: used, the four words, numerator, denominator. Returns the
 * last word when a slot was claimed and 0xFFFFFFFF when none was.
 * 0x140007490 */
uint32_t net_slot_claim(int32_t peer, uint32_t a, uint32_t b, uint32_t c, uint32_t d, float numerator,
                    float denominator);
#endif
