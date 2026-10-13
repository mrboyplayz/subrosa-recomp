/* The per-tick item update (0x1400CC610): items attached to items follow
   them, lifetimes count down, then each item type does its own work (see
   items/). Fields are named here, next to their addresses, as far as the
   update shows what they do. */
#ifndef SR_ENGINE_ITEM_TICK_H
#define SR_ENGINE_ITEM_TICK_H

#include "item.h"
#include "frame.h"
#include "physics.h"
#include "events.h"

#define ITEM_FIELD(type, offset, i) SR_GLOBAL(type, 0x182BBB180ULL + (offset) + 0x1B80ULL * (uint64_t)(int64_t)(i))

/* The item's input buttons this tick (RosaServer: inputFlags, lastInputFlags;
   bit 0 is the first button, bit 1 the second). The update copies them to
   the last tick's flags and clears them, so a bit set now and clear in the
   copy is a press that has just begun. */
#define item_input_flags(i) ITEM_FIELD(uint32_t, 0x150, i)
#define item_last_input_flags(i) ITEM_FIELD(uint32_t, 0x154, i)

/* RosaServer: cooldown. A count in ticks whose use depends on the type
   (grenade: the fuse, 240 down to 1; bandage: up to 256; phone: counts down
   after a call is placed). */
#define item_cooldown(i) ITEM_FIELD(int32_t, 0x13C, i)
/* RosaServer: bullets. A gun's rounds; for grenades, bandages and burgers
   the uses left (at zero the lifetime ends). */
#define item_bullets(i) ITEM_FIELD(int32_t, 0x144, i)

/* Where items attached to an item of this type sit: how far along the
   second and the third row of its rotation (used for the computer).
   Unnamed in RosaServer. */
#define item_type_mount_offset_y(t) SR_GLOBAL(float, 0x182A7E6A0ULL + 0x13D0ULL * (uint64_t)(int64_t)(t))
#define item_type_mount_offset_z(t) SR_GLOBAL(float, 0x182A7E6A4ULL + 0x13D0ULL * (uint64_t)(int64_t)(t))

void item_update(void);

/* An item worn in a body slot (slot 2 and up) sits at its holder's chest,
   moves with it, and stops turning. Called for every held item.
   0x1401380F0 */
void item_follow_holder(int item, int human);

#endif
