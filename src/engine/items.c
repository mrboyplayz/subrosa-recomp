/* Item-deck shuffle (see items.h).
 *
 * The original executable names the shuffled item records "INTEL%02d.CDE"
 * save files, so "intel deck" is used for this table. Records live in the
 * shared state region at 0x1816DEB80, stride 0x488 (1160) bytes; the deck
 * is the int array at +0x408 (1032).
 */
#include <stdlib.h>

#include "items.h"
#include "memory.h"

/* 1160 bytes between the start of one intel record and the next. */
#define ITEM_INTEL_RECORD_STRIDE 1160
/* Deck order fields, one int each, inside a record. */
#define ITEM_INTEL_RECORD_FLAGS 0x404
#define ITEM_INTEL_DECK_OFFSET 0x408
/* Records span 0x1816DEB80..0x181FEEB80. */
#define ITEM_INTEL_DECK_SIZE 26

/* The original shuffles with the C library's rand() (msvcrt rand at
   0x14023B1B0). Engine ports declare the C-library routine they need and the
   harness links its own name for it, as clock.c does for
   QueryPerformanceCounter. */
int rand(void);

/* 0x140115FF0 */
int64_t item_intel_deck_shuffle(int slot)
{
    int *flags = &SR_GLOBAL(int32_t, 0x1816DEB80ULL
                            + (int64_t)slot * ITEM_INTEL_RECORD_STRIDE
                            + ITEM_INTEL_RECORD_FLAGS);
    int *deck = &SR_GLOBAL(int32_t, 0x1816DEB80ULL
                           + (int64_t)slot * ITEM_INTEL_RECORD_STRIDE
                           + ITEM_INTEL_DECK_OFFSET);
    int64_t remaining = ITEM_SHUFFLE_PASSES;

    *flags = 1;
    for (int i = 0; i < ITEM_INTEL_DECK_SIZE; i++)
        deck[i] = i;
    /* The original returns the last swap's deck[b] as it was before that
       swap (an oddity of the read it keeps in eax across the loop). */
    int64_t result = 0;
    do {
        int a = rand() % ITEM_INTEL_DECK_SIZE;
        int b = rand() % ITEM_INTEL_DECK_SIZE;
        int swap = deck[a];
        result = deck[b];
        deck[a] = (int)result;
        deck[b] = swap;
        --remaining;
    } while (remaining);
    return result;
}
