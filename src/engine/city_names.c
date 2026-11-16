#include <string.h>
#include "city_names.h"

static int names_equal(const uint8_t *left, const uint8_t *right)
{
    for (;;) {
        int difference = (int)*left - (int)*right;
        if (difference)
            return 0;
        if (!*right)
            return 1;
        left++;
        right++;
    }
}

/* The count of names is read again after each name, as the original does; the
 * count of the other table once. */
static void match(const int32_t *name_count, uint64_t names_address, int32_t other_count, uint64_t other_address,
                  uint64_t other_stride, int32_t *out, size_t out_bytes)
{
    memset(out, 0, out_bytes);
    for (int32_t i = 0; i < *name_count; i++) {
        const uint8_t *name = &SR_GLOBAL(uint8_t, names_address + 64ULL * (uint64_t)(int64_t)i);
        for (int32_t j = 0; j < other_count; j++) {
            if (names_equal(name, &SR_GLOBAL(uint8_t, other_address + other_stride * (uint64_t)(int64_t)j)))
                out[i] = j;
        }
    }
}

void city_match_names_a(void)
{
    match(&SR_GLOBAL(int32_t, 0x1AFFDFB54ULL), 0x1AFFDFB58ULL, 64, 0x1ABC89C00ULL, 0x3040ULL,
          &SR_GLOBAL(int32_t, 0x1AFFDFF58ULL), 0x100);
}

void city_match_names_b(void)
{
    match(&SR_GLOBAL(int32_t, 0x1AFFE0F58ULL), 0x1AFFE0F5CULL, SR_GLOBAL(int32_t, 0x181676080ULL), 0x1812C2080ULL,
          0xED0ULL, &SR_GLOBAL(int32_t, 0x1AFFF0F5CULL), 0x1000);
}

void city_match_names_c(void)
{
    match(&SR_GLOBAL(int32_t, 0x1AFFCEB50ULL), 0x1AFFCEB54ULL, SR_GLOBAL(int32_t, 0x14500A700ULL), 0x145098C00ULL,
          0xE8ULL, &SR_GLOBAL(int32_t, 0x1AFFDEB54ULL), 0x1000);
}

void city_match_names_d(void)
{
    match(&SR_GLOBAL(int32_t, 0x1AFFC9B4CULL), 0x1AFFC9B50ULL, SR_GLOBAL(int32_t, 0x1A4CFF560ULL), 0x1A4CFFCF8ULL,
          0xB8ULL, &SR_GLOBAL(int32_t, 0x1AFFCDB50ULL), 0x400);
}
