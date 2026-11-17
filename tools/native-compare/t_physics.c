// NC_WRAPPERS: 140050C80
/* The networked round's two random words: 0x140050C80. Every slot result,
   the generator's cursor at the twist boundary (623, 624, 625), flags that
   are already present, and full pools. The port build reaches the twist,
   the reseeding and the tempering through the original's math_random.c
   port, so both builds run the same generator. */
#include "nc.h"
#include "physics.h"

#ifdef NC_NATIVE
#define random_round_words(a, b, flag) \
    ((uint32_t (*)(uint32_t *, uint32_t *, uint32_t))NC_ADDR(0x140050C80))(a, b, flag)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_140050C80(uint32_t *a1, uint32_t *a2, unsigned int a3);
#define random_round_words(a, b, flag) \
    ((uint32_t)(unsigned int)sub_140050C80(a, b, flag))
#else
#define random_round_words physics_random_round_words
#endif

/* The generator's words, cursor and the round-slot pool, put back before
   every case. */
static void save_ranges(void)
{
    nc_save(&SR_GLOBAL(uint32_t, 0x144AF96E0ULL), 624 * 4);
    nc_save(&SR_GLOBAL(int32_t, 0x14030186CULL), 4);
    nc_save(&SR_GLOBAL(uint32_t, 0x1602E12E0ULL), 0x10000);
}

int main(void)
{
    static const uint32_t flags[] = { 0, 1, 7, 3597, 0x80000000u, 0xFFFFFFFFu };
    nc_map_image();
    save_ranges();
    int cases = nc_cases(800);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        nc_restore();
        /* Pool: usually a few slots, sometimes at or over the capacity
           0x7FFF. The first word of every slot is a flag, often one the
           draw will ask for again. */
        int count = (int)nc_rand_below(12);
        if (nc_chance(6))
            count = (int)nc_rand_below(0x2000) + 0x7FF0;
        for (int i = 0; i < count; i++) {
            physics_random_round_flags[i] = nc_chance(70) ? flags[nc_rand_below(6)]
                                                          : (uint32_t)nc_rand();
        }
        physics_random_round_slots = count;
        physics_random_round_words_a[0] = (uint32_t)nc_rand();
        physics_random_round_words_b[0] = (uint32_t)nc_rand();
        uint32_t flag = nc_chance(50) ? flags[nc_rand_below(6)] : (uint32_t)nc_rand();
        /* The generator's cursor around the twist: 623 draws without one,
           624 twists first, 625 reseeds from 0x1571 first. */
        int cursor = 700 + (int)nc_rand_below(40);
        if (nc_chance(30))
            cursor = (int[]){ 623, 624, 625, 626, 1247, 1248 }[nc_rand_below(6)];
        physics_random_cursor = cursor;
        if (nc_chance(40))
            /* A seeded generator: the cursor reaches 624 only after the
               stored seed was armed at 624 (see math_random.c). */
            physics_random_cursor = 624;

        uint32_t a = 0xDEADBEEFu, b = 0xFEEDFACEu;
        uint32_t slot = random_round_words(&a, &b, flag);
        nc_line("case %d count %d flag %08x cursor %d", n, count, flag, cursor);
        nc_line("  slot %08x a %08x b %08x", slot, a, b);
        nc_line("  slots %d flags %016llx words %016llx",
                (int)(uint32_t)physics_random_round_slots,
                (unsigned long long)nc_hash(&SR_GLOBAL(uint32_t, 0x1602E12E4ULL), 0x8000),
                (unsigned long long)nc_hash(&SR_GLOBAL(uint32_t, 0x1602E32E4ULL), 0x8000));
    }
    return 0;
}
