/* Item-deck routines recovered from the original executable. */
#ifndef SR_ENGINE_ITEMS_H
#define SR_ENGINE_ITEMS_H

#include <stdint.h>

/* The deck is shuffled 0x400 (1024) times, whatever its size. */
#define ITEM_SHUFFLE_PASSES 1024

/* 0x140115FF0 */
int64_t item_intel_deck_shuffle(int slot);

#endif
