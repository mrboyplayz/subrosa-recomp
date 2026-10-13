/* Arcade (40): a counter that wraps at 256. Part of the item update,
   0x1400CC610. */
#include "items.h"

void arcade_update(int i)
{
    arcade_top_line(i) = 0x40;
    arcade_current_line(i) = (int32_t)(((uint32_t)arcade_current_line(i) + 1u) & 0xFF);
}
