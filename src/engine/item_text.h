/* Texts of items shared with the clients: the lines of a computer's screen
   and the text of a memo. Each is a record in one table; the item keeps the
   record of each line in its links (WorldItem.link_mask, links). */
#ifndef SR_ENGINE_ITEM_TEXT_H
#define SR_ENGINE_ITEM_TEXT_H

#include "world.h"

/* 0x1857BD740, 156 bytes each (world.h: world_unknown_1857bd740). */
typedef struct ItemText {
    int32_t active;
    int32_t active_high;                 /* the original sets active with one 64-bit store of 1 */
    int32_t kind;                        /* 1: a screen line with colours; 0: plain text (0x140051170) */
    int32_t tick;                        /* when it was made */
    int32_t item;
    int32_t line;                        /* the screen line, or the link slot */
    int32_t length;
    char text[64];
    uint8_t colors[64];
} ItemText;

_Static_assert(sizeof(ItemText) == 0x9C, "ItemText size");

#define ITEM_TEXT_CAPACITY 16384
#define item_texts (&SR_GLOBAL(ItemText, 0x1857BD740ULL))

/* Shares line `line` of computer `item`'s screen: when the line's record
   still holds the same text and colours it is kept, otherwise it is freed
   and the line goes into the first free record, which the item registers
   as that line's link. Returns the record, or 0xFFFFFFFF when none is
   free. At most 63 characters are shared. 0x140050F90 */
uint32_t computer_line_link(int item, int line);

#endif
