/* Mersenne Twister seeding of the game's random generator. The state layout
 * is the original's, reached through memory.h's shared-state accessors, and
 * the recurrence keeps the original's exact 32-bit operation order (verified
 * by the randomseed native suite).
 */
#include <stdint.h>
#include "memory.h"

/* The generator's state as the original keeps it at 0x144AF96E0: the stored
   seed word doubles as mt[0], then follow the remaining recurrence words
   (the two client entry-point callers read them as one 624-word array). */
typedef struct RandomGenerator {
    uint32_t seed;         /* mt[0], the stored seed: 0x144AF96E0 */
    uint32_t state[623];   /* mt[1..623]: 0x144AF96E4 */
} RandomGenerator;
#define random_generator (&SR_GLOBAL(RandomGenerator, 0x144AF96E0ULL))

/* The cursor of the next consumable word, kept by the original outside the
   shared state array; like math3d.h's fixed-sine table, the disassembler's
   address-named symbol is kept next to its definition. 0x14030186C */
extern int dword_14030186C;
#define math_random_index dword_14030186C

/* Stores the seed, fills the recurrence words (1812433253 * (previous xor
   previous >> 30) + count), arms the cursor at 624 and returns the compat
   count. The original's index reaches 624 as its loop counter wraps up, and
   its EAX (zero-extended) is the returned compatibility result. 0x1400C2D50 */
uint32_t math_seed_random(uint32_t seed)
{
    random_generator->seed = seed;
    uint32_t previous = seed;
    for (uint32_t count = 1; count <= 623; count++) {
        previous = 1812433253u * (previous ^ (previous >> 30)) + count;
        random_generator->state[count - 1] = previous;
    }
    math_random_index = 624;
    return 624;
}

/* The twist's two-word table {0, 0x9908B0DF}, the original's words at
   0x140301E08 recovered with the client's data (dword_140301E08). Below the
   shared state region, so it is reached by its recovered name. */
extern int dword_140301E08[];
#define math_random_mag01 ((const uint32_t *)dword_140301E08)

/* The state twisted in place: words 0..226 take their partner 397 ahead,
   227..622 the one 227 behind (already twisted), and the last word takes
   mt[396] with mt[0] as its lower half. The recurrence is the original's:
   (high bit of mt[i] | low 31 of mt[i + 1]) shifted down, with the table
   word picked by the low bit of mt[i + 1]. */
static void math_random_twist(void)
{
    uint32_t *mt = &random_generator->seed;
    uint32_t *cursor = mt;
    uint32_t *end = mt + 227;
    do {
        *cursor = cursor[397] ^ ((*cursor ^ ((*cursor ^ cursor[1]) & 0x7FFFFFFFu)) >> 1)
                  ^ math_random_mag01[cursor[1] & 1];
        ++cursor;
    } while (cursor < end);
    uint32_t *tail = mt + 227;
    uint32_t *last = mt + 623;
    do {
        *tail = tail[-227] ^ ((*tail ^ ((*tail ^ tail[1]) & 0x7FFFFFFFu)) >> 1)
                ^ math_random_mag01[tail[1] & 1];
        ++tail;
    } while (tail < last);
    *last = mt[396] ^ ((*last ^ ((*last ^ *mt) & 0x7FFFFFFFu)) >> 1)
            ^ math_random_mag01[*mt & 1];
}

/* The word the cursor points at, tempered (shift 11, mask 0xFF3A58AD at
   shift 7, mask 0xFFFFDF8C at shift 15, shift 18). When the cursor reaches
   624 the state is twisted first (a cursor of 625 reseeds the generator
   from 0x1571 first, the game's fallback), and the word read is mt[0]. The
   cursor is left one past the word read. The original's return register
   holds the tempered word in its low half; callers read 32 bits.
   0x14009DE80 */
uint32_t math_random_next(void)
{
    uint32_t word = (uint32_t)math_random_index;
    if (math_random_index >= 624) {
        if (math_random_index == 625)
            math_seed_random(0x1571u);
        math_random_twist();
        word = 0;
    }
    math_random_index = (int32_t)word + 1;
    uint32_t value = (&random_generator->seed)[word];
    value ^= value >> 11;
    value ^= (value << 7) & 0xFF3A58ADu;
    value ^= (value << 15) & 0xFFFFDF8Cu;
    value ^= value >> 18;
    return value;
}

/* The next word shifted down one, the game's unsigned 31-bit draw.
   0x14009DE70 */
uint32_t math_random_next_uint31(void)
{
    return math_random_next() >> 1;
}

/* The next word as a fraction of its range: the signed word times
   2^-32 * 2^2 (0x1571 rounds), the unit draw 0x14009DFB0 keeps. */
double math_random_next_unit(void)
{
    return (double)(int32_t)math_random_next() * 2.328306437080797e-10;
}

/* The same word times the exact 2^-32 scale of 0x14009DFD0. */
double math_random_next_unit_exact(void)
{
    return (double)(int32_t)math_random_next() * 2.328306436538696e-10;
}

/* The same word moved up half a step first, of 0x14009DFF0. */
double math_random_next_unit_centered(void)
{
    return ((double)(int32_t)math_random_next() + 0.5) * 2.328306436538696e-10;
}

/* Seeds the generator from an array of words, the original's variant of the
   reference seeding: the state starts at 19650218 with the recurrence
   above, then max(624, count) mix passes (1664525, each key word and its
   index added), then 623 settling passes (1566083941, the index
   subtracted), and mt[0] ends at 0x80000000. The cursor is left at 624. A
   pass that fills the state copies its last word into mt[0] and restarts at
   word 1. The original's return register trails the tracked word; no caller
   reads it, so the port returns the state's first word after the last pass.
   0x1400C2BB0 */
uint32_t math_random_seed_array(const uint32_t *keys, int count)
{
    uint32_t *mt = &random_generator->seed;
    mt[0] = 19650218u;
    for (int i = 1; i <= 623; i++)
        mt[i] = 1812433253u * (mt[i - 1] ^ (mt[i - 1] >> 30)) + (uint32_t)i;
    math_random_index = 624;

    uint32_t result = 0;
    int i = 1, key = 0;
    int iterations = count < 624 ? 624 : count;
    for (int step = 0; step < iterations; step++) {
        /* The mix pass reads the word behind twice: the game's variant of
           the reference seeding has no mt[i] term here. */
        mt[i] = (mt[i - 1] ^ (1664525u * (mt[i - 1] ^ (mt[i - 1] >> 30)))) + keys[key] + (uint32_t)key;
        i++;
        if (i >= 624) {
            mt[0] = mt[623];
            i = 1;
        }
        key++;
        if (key >= count)
            key = 0;
    }
    for (int step = 0; step < 623; step++) {
        mt[i] = (mt[i] ^ (1566083941u * (mt[i - 1] ^ (mt[i - 1] >> 30)))) - (uint32_t)i;
        result = mt[0];
        i++;
        if (i >= 624) {
            result = mt[623];
            mt[0] = result;
            i = 1;
        }
    }
    mt[0] = 0x80000000u;
    return result;
}
