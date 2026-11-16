/* Matching the city's name lists against the game's tables: four routines of
 * one shape. Names come from a small alphabet (with a byte above 0x7F and
 * names that are prefixes of one another), counts reach past the point where
 * the first routine's output array overlaps its own name list, and the other
 * table's counts include zero. Both name arrays, the output and the counts
 * are hashed. */
// NC_WRAPPERS: 140027690 140027A60 140027B40 140027C20
#include <string.h>
#include "nc.h"
#include "city_names.h"

#ifdef NC_NATIVE
#define call(i) ((void (*)(void))NC_ADDR(addresses[i]))()
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_140027690(void), sub_140027A60(void), sub_140027B40(void), sub_140027C20(void);
static void call(int i)
{
    switch (i) {
    case 0: sub_140027690(); break;
    case 1: sub_140027A60(); break;
    case 2: sub_140027B40(); break;
    default: sub_140027C20(); break;
    }
}
#else
static void call(int i)
{
    switch (i) {
    case 0: city_match_names_a(); break;
    case 1: city_match_names_b(); break;
    case 2: city_match_names_c(); break;
    default: city_match_names_d(); break;
    }
}
#endif

#ifdef NC_NATIVE
static const uint64_t addresses[4] = {0x140027690, 0x140027A60, 0x140027B40, 0x140027C20};
#endif

typedef struct Shape {
    uint64_t count, names, other_count, other, stride, out, out_bytes;
    int max_names, max_other;
} Shape;

static const Shape shapes[4] = {
    {0x1AFFDFB54, 0x1AFFDFB58, 0, 0x1ABC89C00, 0x3040, 0x1AFFDFF58, 0x100, 30, 64},
    {0x1AFFE0F58, 0x1AFFE0F5C, 0x181676080, 0x1812C2080, 0xED0, 0x1AFFF0F5C, 0x1000, 40, 12},
    {0x1AFFCEB50, 0x1AFFCEB54, 0x14500A700, 0x145098C00, 0xE8, 0x1AFFDEB54, 0x1000, 40, 12},
    {0x1AFFC9B4C, 0x1AFFC9B50, 0x1A4CFF560, 0x1A4CFFCF8, 0xB8, 0x1AFFCDB50, 0x400, 40, 12},
};

static void make_name(uint8_t *out, size_t room)
{
    static const uint8_t alphabet[] = {'a', 'b', 'c', 0xE9};
    memset(out, 0, room);
    int length = (int)nc_rand_below(4);
    for (int k = 0; k < length; k++)
        out[k] = alphabet[nc_rand_below(sizeof alphabet)];
}

int main(void)
{
    nc_map_image();
    for (int n = 0; n < nc_cases(1500); n++) {
        for (int s = 0; s < 4; s++) {
            const Shape *shape = &shapes[s];
            nc_seed((uint64_t)n * 5 + (uint64_t)s);
            int32_t names = (int32_t)nc_rand_below((uint32_t)shape->max_names + 1);
            int32_t others = shape->other_count ? (int32_t)nc_rand_below((uint32_t)shape->max_other + 1)
                                                 : shape->max_other;
            *(int32_t *)NC_ADDR(shape->count) = names;
            if (shape->other_count)
                *(int32_t *)NC_ADDR(shape->other_count) = others;
            for (int32_t i = 0; i < names; i++)
                make_name(NC_ADDR(shape->names + 64ULL * (uint64_t)i), 64);
            for (int32_t j = 0; j < others; j++) {
                uint8_t *entry = NC_ADDR(shape->other + shape->stride * (uint64_t)j);
                make_name(entry, 8);
                /* a name that equals one of the list's, so there are matches */
                if (names && nc_chance(50))
                    memcpy(entry, NC_ADDR(shape->names + 64ULL * nc_rand_below((uint32_t)names)), 8);
            }
            for (size_t b = 0; b < shape->out_bytes; b += 4)
                *(uint32_t *)NC_ADDR(shape->out + b) = (uint32_t)nc_rand();
            call(s);
            nc_line("n%d s%d names %d others %d out %016llx names %016llx", n, s, names, others,
                    (unsigned long long)nc_hash(NC_ADDR(shape->out), shape->out_bytes),
                    (unsigned long long)nc_hash(NC_ADDR(shape->names), 64ULL * (uint64_t)names));
        }
    }
    return 0;
}
