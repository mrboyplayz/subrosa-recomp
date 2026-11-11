/* Mersenne Twister seeding through the original entry point: seeds 0, 1,
   0xffffffff and generator values, hashing the whole 624-word state (whose
   first word is the stored seed), the cursor the entry point arms, and the
   entry's compatibility result. */
// NC_WRAPPERS: 1400C2D50
#include "nc.h"
#include "memory.h"

#ifdef NC_CLIENT_WRAPPERS
long long sr_math_seed_random(unsigned int);
#else
extern uint32_t math_seed_random(uint32_t seed);
#endif

/* The generator state at 0x144AF96E0: the seed slot doubles as mt[0]. */
#define random_state ((const void *)&SR_GLOBAL(uint32_t, 0x144AF96E0ULL))
/* The cursor word the entry point arms at 624. 0x14030186C */
extern int dword_14030186C;

static void run_case(int n)
{
    uint32_t seed;
    if (n % 4 == 3) {
        nc_seed((uint64_t)n);
        seed = (uint32_t)nc_rand();
    } else {
        static const uint32_t seeds[] = {0, 1, 0xFFFFFFFFu};
        seed = seeds[n % 4];
    }
    uint32_t seeded = seed; /* the original may wrap: keep its argument word */
    long long result;
#ifdef NC_NATIVE
    result = ((long long (*)(unsigned int))NC_ADDR(0x1400C2D50))(seeded);
#elif defined(NC_CLIENT_WRAPPERS)
    result = sr_math_seed_random(seeded);
#else
    result = math_seed_random(seeded);
#endif
    nc_line("seeding %d %08x result %016llx index %d", n, seeded,
            (unsigned long long)result, dword_14030186C);
    nc_line("state %016llx", (unsigned long long)nc_hash(random_state, 624 * 4));
}

int main(void)
{
    nc_map_image();
    for (int n = 0; n < nc_cases(2000); n++)
        run_case(n);
    return 0;
}
