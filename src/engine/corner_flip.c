/* A table of 4 groups of 12 floats at 0x14500A5C0, turned one step at a time
 * with a face tag. A step walks the groups (a cursor from word 2 to word 50,
 * 12 words apart); in each, the pairs of words (-2, 0), (1, 3), (4, 6) and
 * (7, 9) around the cursor turn: the later word takes the earlier one's old
 * value and the earlier takes one minus the later's old value. The tag moves
 * along 0x60000 -> 0x10000 -> 0x50000 -> 0x20000 -> 0x60000 (others stay).
 * Returns the tag after `steps` steps; zero or fewer steps change nothing.
 * 0x14001B5C0 */
#include <stdint.h>
#include "memory.h"

#define corner_table (&SR_GLOBAL(float, 0x14500A5C0ULL))

uint32_t corner_table_rotate(int32_t steps, uint32_t tag)
{
    for (int32_t n = steps; n > 0; n--) {
        for (float *p = corner_table + 2; p < corner_table + 50; p += 12) {
            float flipped0 = 1.0f - p[0];
            float old1 = p[1];
            p[0] = p[-2];
            float old4 = p[4];
            p[-2] = flipped0;
            float flipped3 = 1.0f - p[3];
            p[3] = old1;
            float old7 = p[7];
            p[1] = flipped3;
            float flipped6 = 1.0f - p[6];
            p[6] = old4;
            p[4] = flipped6;
            float flipped9 = 1.0f - p[9];
            p[9] = old7;
            p[7] = flipped9;
        }
        switch (tag) {
        case 0x60000u: tag = 0x10000u; break;
        case 0x10000u: tag = 0x50000u; break;
        case 0x50000u: tag = 0x20000u; break;
        case 0x20000u: tag = 0x60000u; break;
        }
    }
    return tag;
}
