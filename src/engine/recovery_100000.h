/* Pure integer/float routines recovered from the 0x100000 range of
 * subrosa.exe. Every function reproduces the memory writes, callee order and
 * return value of the routine of the original executable at the address named
 * next to it; the order of the floating-point operations is part of that and
 * must not be rearranged (src/engine/README.md). */
#ifndef SR_ENGINE_RECOVERY_100000_H
#define SR_ENGINE_RECOVERY_100000_H

#include <stdint.h>

/* Saves one screen row of the daily share prices into the HUD record: the
 * row is packed from the price list (skipping line breaks), stamped with the
 * closing price and the day number, the renderer's depth sort runs over it,
 * and each entry is formatted into the HUD text record, joined into one
 * string with newlines and appended to the record. Appending stops at the
 * record boundary or after 1,022 characters; the last slot of the byte flag
 * array is set only by that path. 0x1401063E0 */
unsigned int *recovery_100000_save_market_row(void);

/* Builds one mesh record for the item the player record names: the two item
 * corners are unpacked from the record, the triangle normals are scaled and
 * stored, the kind words and vertex pairs are filled in, the triangles that
 * the record's axis-aligned box covers are gathered from the world grid, and
 * every visible world body is projected onto each triangle face; a hit adds
 * a world contact and names the item on the body. The original clears the
 * renderer's event count after every world-body scan. 0x14010C110 */
void recovery_100000_build_item_mesh(int player);

#endif /* SR_ENGINE_RECOVERY_100000_H */
