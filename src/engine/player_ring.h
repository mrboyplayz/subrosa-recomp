/* The players' speech ring: 64 slots per player of 21 words (84 bytes); the
 * write cursor at word +71856362 of the player's record, the slots from
 * +71856367. Type 1 carries spoken text on the selected channel; type 3
 * carries three values (the mission/stock events file it too). Readers walk
 * the ring by the cursor. 0x140116A40 speaks, 0x140116B00 posts values.
 */
#ifndef SR_ENGINE_PLAYER_RING_H
#define SR_ENGINE_PLAYER_RING_H

#include <stdint.h>
#include "memory.h"

/* One slot of the ring: type word, a count or first value, the channel (or
   second value), a third value, and 64 message bytes. */
typedef struct PlayerRingSlot {
    int32_t type;                        /* 1 text, 3 values */
    int32_t count;                       /* text: payload length, masked to 64 */
    int32_t channel;                     /* text: the chat channel selector */
    int32_t value;
    uint8_t unknown_10[4];
    unsigned char payload[64];
} PlayerRingSlot;

_Static_assert(sizeof(PlayerRingSlot) == 84, "PlayerRingSlot layout");

/* 0x151620E14: the write cursor, one word per player's record of 3,597
   words; 0x151620E28: the ring's first slot. */
#define player_ring_cursor(player) \
    SR_GLOBAL(int32_t, 0x151620E14ULL + 4ULL * 3597ULL * (uint64_t)(int64_t)(player))
#define player_ring_slots(player) \
    (&SR_GLOBAL(PlayerRingSlot, 0x151620E28ULL + 4ULL * 3597ULL * (uint64_t)(int64_t)(player)))

/* The chat channel selector (0 whisper, 1 talk, 2 yell), read at use. 0x183E93544 */
#define player_ring_selected_channel SR_GLOBAL(int32_t, 0x183E93544ULL)

#endif
