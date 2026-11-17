/* Routines recovered from the 0x020000 range of subrosa.exe. Each gives the
 * same results, bit for bit, as the routine of the original executable at the
 * address named next to it; the order of the floating-point operations is
 * part of that contract and must not be rearranged. */
#ifndef SR_ENGINE_RECOVERY_020000_H
#define SR_ENGINE_RECOVERY_020000_H

#include <stdint.h>

/* A swept sphere against a table of triangles (0x140033610).
 *
 * `table` is a record whose first int is the triangle count, followed by that
 * many 48-byte entries: three float corners (a, b, c) and then three int
 * fields (a normal vector as bits, and two opaque words the routine merely
 * copies out alongside the hit). `hit` receives point[0..2], the entry's
 * three int words as hit[3..5] (the normal in hit[3]), and hit[7] = distance;
 * hit[6] is left alone. hit[7] starts at 65536.0 (no hit) and is lowered by
 * every hit closer than the best so far. Returns whether anything was hit. */
int collision_sphere_triangle_table(float hit[8], const int *table,
                                   const float from[3], const float to[3], float radius);

#endif
