/* Routines recovered from the 0x020000 range. See recovery_020000.h. */
#include <string.h>
#include "collision.h"
#include "recovery_020000.h"

#define NO_HIT_DISTANCE 65536.0f /* 0x140278ADC = 65536.0f, also the initial hit[7] */
#define TABLE_ENTRY_WORDS 12     /* three float corners, then the face's three words */

/* The closest hit of a swept sphere against a table of triangles: the table's
 * first int is the count, then that many 48-byte entries (corners a, b, c as
 * three floats each, then the face's three words — the normal bits first).
 * hit[7] starts at 65536.0 and takes the point, the three face words and the
 * distance of every hit closer than the best so far; hit[6] is not touched.
 * Returns whether the best distance ended up below 65536.0. 0x140033610 */
int collision_sphere_triangle_table(float hit[8], const int *table, const float from[3], const float to[3],
                                    float radius)
{
    hit[7] = NO_HIT_DISTANCE;
    if (table[0] <= 0)
        return 0;
    const int *entry = table + 1;
    for (int i = 0; i < table[0]; i++, entry += TABLE_ENTRY_WORDS) {
        float corner_a[3], corner_b[3], corner_c[3], normal[3], point[3], distance;
        memcpy(corner_a, entry + 0, sizeof corner_a);
        memcpy(corner_b, entry + 3, sizeof corner_b);
        memcpy(corner_c, entry + 6, sizeof corner_c);
        memcpy(normal, entry + 9, sizeof normal);
        /* The face words come back out of the normal buffer, so a hit stores
         * whatever collision_sphere_triangle() left there, not the table. */
        if (collision_sphere_triangle(point, normal, &distance, from, to, radius, corner_a, corner_b, corner_c)
            /* COMISS then JAE: a NaN distance takes the store path too, and
             * the comparison reads hit[7] as the previous hit left it. */
            && !(distance >= hit[7])) {
            memcpy(hit, point, 3 * sizeof(float));
            memcpy(hit + 3, normal, 3 * sizeof(float));
            hit[7] = distance;
        }
    }
    /* COMISS/JAE against 65536.0: an unordered best counts as a hit. */
    return !(hit[7] >= NO_HIT_DISTANCE);
}
