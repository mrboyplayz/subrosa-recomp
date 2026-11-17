/* Swept sphere against a triangle table: 0x140033610.
 *
 * Cases cover empty and negative counts, one triangle, many triangles, hit and
 * miss sweeps, ordinary/NaN/infinite floats in the corners and the sweep, and
 * hit records that lie inside the triangle table. The whole hit record, the
 * table and the return value are compared. */
// NC_WRAPPERS: 140033610
#include <string.h>
#include "nc.h"
#include "recovery_020000.h"

/* The radius reaches the routine as float bits in its fifth argument. */
static uint8_t sweep(float *hit, int *table, float *from, float *to, int radius_bits)
{
    float radius;
    memcpy(&radius, &radius_bits, sizeof radius);
#ifdef NC_NATIVE
    return ((uint8_t (*)(float *, int *, float *, float *, int))NC_ADDR(0x140033610))(hit, table, from, to, radius_bits);
#elif defined(NC_CLIENT_WRAPPERS)
    long long sub_140033610(float *, int *, float *, float *, int);
    return (uint8_t)sub_140033610(hit, table, from, to, radius_bits);
#else
    return (uint8_t)collision_sphere_triangle_table(hit, table, from, to, radius);
#endif
}

/* The table and the hit record share one buffer so a case can place the hit
   record inside the table. 16 triangles of 12 words on top of the count. */
enum { MAX_TRIANGLES = 16, WORDS = 1 + MAX_TRIANGLES * 12, NO_HIT_WORD = WORDS + 8 };
static int buffer[WORDS + 16];

static int random_word(void)
{
    /* Floats that are ordinary, or now and then an edge value (zero, tiny,
       huge, infinity, NaN). */
    static const uint32_t edges[] = {0x00000000, 0x80000000, 0x00000001, 0x00800000, 0x3F800000, 0x7F7FFFFF,
                                     0x7F800000, 0xFF800000, 0x7FC00000, 0x41200000};
    if (nc_chance(8))
        return (int)edges[nc_rand_below(sizeof edges / sizeof edges[0])];
    return (int)(uint32_t)nc_rand();
}

int main(void)
{
    nc_map_image();
    for (int n = 0; n < nc_cases(2000); n++) {
        nc_seed((uint64_t)n);
        memset(buffer, 0x5A, sizeof buffer);
        int count = n < 4 ? (int)n - 2 : (int)nc_rand_below(MAX_TRIANGLES + 1);
        for (int k = 1; k < (int)(sizeof buffer / sizeof buffer[0]) - 8; k++)
            buffer[k] = random_word();
        buffer[0] = count;

        float from[3], to[3];
        int from_bits[3], to_bits[3];
        for (int k = 0; k < 3; k++) {
            from_bits[k] = random_word();
            to_bits[k] = random_word();
        }
        memcpy(from, from_bits, sizeof from);
        memcpy(to, to_bits, sizeof to);
        int radius_bits = random_word();

        /* Every fourth case puts the hit record inside the triangle table, so
           its stores land where later iterations read from. */
        int hit_word = nc_chance(25) ? 1 + (int)nc_rand_below(WORDS - 2) : NO_HIT_WORD;
        float *hit = (float *)&buffer[hit_word];
        uint8_t result = sweep(hit, buffer, from, to, radius_bits);
        nc_line("case %d count %d hitword %d result %u", n, count, hit_word, (unsigned)result);
        nc_floats("  hit", hit, 8);
        nc_line("  table %016llx", (unsigned long long)nc_hash(buffer, sizeof buffer));
    }
    return 0;
}
