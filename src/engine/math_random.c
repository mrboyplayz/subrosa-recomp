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
