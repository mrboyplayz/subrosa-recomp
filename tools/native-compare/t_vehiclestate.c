/* The vehicle spawn and net-replication machinery: slot allocation
 * (0x14004DA50), name-slot registration (0x1400588F0) and per-type part
 * dedup (0x14010C850), over occupied and free tables, wrapping and
 * out-of-range cursors, and exact / mirrored / near-match pair inputs.
 * The part add's return is printed as the offset from its type's record
 * base, so the two builds' different absolute addresses do not matter. */
// NC_WRAPPERS: 14004DA50 1400588F0 14010C850
#include <string.h>
#include "nc.h"
#include "memory.h"

#ifdef NC_NATIVE
#define ALLOC_SLOT(k, p, v) \
    ((uint32_t (*)(uint32_t, const uint32_t *, float))NC_ADDR(0x14004DA50))(k, p, v)
#define NAME_ADD(i, n, a, b) \
    ((uint32_t (*)(uint32_t, const char *, uint32_t, uint32_t))NC_ADDR(0x1400588F0))(i, n, a, b)
#define PART_ADD(t, i, a, b) \
    ((uint32_t *(*)(int, uint32_t, uint32_t, uint32_t))NC_ADDR(0x14010C850))(t, i, a, b)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_14004DA50(unsigned int, unsigned int *, float);
long long sub_1400588F0(unsigned int, char *, unsigned int, unsigned int);
unsigned int *sub_14010C850(int, unsigned int, unsigned int, unsigned int);
#define ALLOC_SLOT(k, p, v) ((uint32_t)sub_14004DA50(k, (unsigned int *)(p), v))
#define NAME_ADD(i, n, a, b) ((uint32_t)sub_1400588F0(i, (char *)(n), a, b))
#define PART_ADD(t, i, a, b) sub_14010C850(t, i, a, b)
#else
#include "vehicle_state.h"
#define ALLOC_SLOT(k, p, v) vehicle_alloc_slot(k, p, v)
#define NAME_ADD(i, n, a, b) vehicle_name_slot_add(i, n, a, b)
#define PART_ADD(t, i, a, b) vehicle_type_part_add(t, i, a, b)
#endif

/* 1024 vehicle records, 0x328 bytes each; 256 name slots, 0x98 bytes each,
   with the u8 cursor right behind the table; per-type part lists. */
#define VEHICLE_TABLE  0x1601172A0ULL
#define VEHICLE_STRIDE 0x328ULL
#define VEHICLE_COUNT  1024u
#define NAME_TABLE     0x192E8F660ULL
#define NAME_SPAN      0x9800ULL      /* 256 * 0x98, the cursor at its end */
#define NAME_CURSOR    0x192E98E60ULL
#define PART_TABLE     0x192E9A680ULL
#define PART_STRIDE    0x185C0ULL

/* The part entry words, as in the disassembly. */
#define PART_ID     0x858u
#define PART_FIRST  0x85cu
#define PART_SECOND 0x860u
#define PART_COUNT  0x854u

static void alloc_case(int n)
{
    uint8_t *table = (uint8_t *)&SR_GLOBAL(uint32_t, VEHICLE_TABLE);
    if (n % 17 == 0) {
        /* Every record occupied: the routine must give up. */
        for (uint32_t i = 0; i < VEHICLE_COUNT; i++)
            *(uint32_t *)(void *)(table + VEHICLE_STRIDE * i) = 0xFFFFFFFFu;
    } else {
        /* Garbage every free body so the clear is observable, then occupy
         * a few records' flags. */
        memset(table + 4, 0xAB, (size_t)VEHICLE_STRIDE * VEHICLE_COUNT - 4);
        if (n % 23 == 0) {
            /* Only the last record free. */
            for (uint32_t i = 0; i < VEHICLE_COUNT - 1; i++)
                *(uint32_t *)(void *)(table + VEHICLE_STRIDE * i) = 0xFFFFFFFFu;
        } else {
            int occupied = n % 13;
            for (int k = 0; k < occupied; k++) {
                uint32_t slot = nc_rand_below(VEHICLE_COUNT);
                *(uint32_t *)(void *)(table + VEHICLE_STRIDE * slot) = nc_rand() | 1;
            }
        }
    }
    uint32_t kind = nc_rand();
    uint32_t position[3] = {nc_rand(), nc_rand(), nc_rand()};
    float value;
    memcpy(&value, &(uint32_t){nc_rand()}, 4);
    unsigned long long ret = ALLOC_SLOT(kind, position, value);
    nc_line("alloc n%d ret%08llx", n, ret);
    nc_line("vtable %016llx", nc_hash(table, (size_t)VEHICLE_STRIDE * VEHICLE_COUNT));
}

static void name_case(int n)
{
    static const int cursors[] = {0, 1, 2, 5, 200, 254, 255, 256, -1};
    uint8_t *region = (uint8_t *)&SR_GLOBAL(uint32_t, NAME_TABLE - 0x100);
    size_t span = 0x100 + NAME_SPAN + 0x100;
    memset(region, 0x5A, span);
    int32_t cursor = (int32_t)cursors[(n / 7) % 9];
    SR_GLOBAL(uint32_t, NAME_CURSOR) = (uint32_t)cursor;
    uint32_t id;
    switch (n % 7) {
    case 0: id = 0; break;
    case 1: id = 4; break;
    case 2: id = 1; break;
    case 3: id = 2; break;
    case 4: id = 0xFFFFFFFBu; break;
    case 5: id = 0xFFFFFFFFu; break;
    default: id = nc_rand(); break;
    }
    char name[16];
    uint32_t length = (uint32_t)(n % 16);
    for (uint32_t k = 0; k < length; k++)
        name[k] = (char)('a' + nc_rand_below(26));
    name[length] = '\0';
    uint32_t value = nc_rand(), value2 = nc_rand();
    unsigned long long ret = NAME_ADD(id, name, value, value2);
    nc_line("name n%d ret%08llx id%08x len%u cursor%d", n, ret, id, length, cursor);
    nc_line("ntable %016llx", nc_hash(region, span));
}

static void part_case(int n)
{
    static const int types[] = {-1, 0, 1, 2, 3, 4, 5};
    int type = types[n % 7];
    uint8_t *region = (uint8_t *)&SR_GLOBAL(uint32_t, PART_TABLE - PART_STRIDE);
    size_t span = (size_t)PART_STRIDE * 8;   /* types -1 through 5 */
    memset(region, 0x3C, span);
    uint64_t base = PART_TABLE + PART_STRIDE * (uint64_t)(int64_t)type;
    uint8_t *record = (uint8_t *)&SR_GLOBAL(uint32_t, base);
    int32_t count = (int32_t)((const int[]){0, 1, 3, 6}[(n / 7) % 4]);
    for (int32_t i = 0; i < count; i++) {
        *(uint32_t *)(void *)(record + PART_ID + 12 * i) = nc_rand();
        *(uint32_t *)(void *)(record + PART_FIRST + 12 * i) = nc_rand();
        *(uint32_t *)(void *)(record + PART_SECOND + 12 * i) = nc_rand();
    }
    *(uint32_t *)(void *)(record + PART_COUNT) = (uint32_t)count;
    uint32_t id = nc_rand(), a, b;
    if (n % 5 < 3 && count > 0) {
        /* Take an existing pair: exact, mirrored, or a near miss. */
        int32_t hit = (int32_t)nc_rand_below((uint32_t)count);
        a = *(uint32_t *)(void *)(record + PART_FIRST + 12 * hit);
        b = *(uint32_t *)(void *)(record + PART_SECOND + 12 * hit);
        if (n % 5 == 1) {
            uint32_t swap = a;
            a = b;
            b = swap;
        }
        if (n % 5 == 2)
            b = b + 1;
    } else {
        a = nc_rand();
        b = nc_rand();
    }
    uint32_t *result = PART_ADD(type, id, a, b);
    long long off = (long long)((uintptr_t)result
                                - (uintptr_t)&SR_GLOBAL(uint32_t, base));
    nc_line("part n%d type%d off%+lld a%08x b%08x id%08x", n, type, off, a, b, id);
    nc_line("ptable %016llx", nc_hash(region, span));
}

int main(void)
{
    nc_map_image();
    nc_save(&SR_GLOBAL(uint32_t, VEHICLE_TABLE),
            (size_t)VEHICLE_STRIDE * VEHICLE_COUNT);
    nc_save(&SR_GLOBAL(uint32_t, NAME_TABLE - 0x100),
            0x100 + NAME_SPAN + 0x100);
    nc_save(&SR_GLOBAL(uint32_t, PART_TABLE - PART_STRIDE),
            (size_t)PART_STRIDE * 8);
    for (int n = 0; n < nc_cases(1000); n++) {
        nc_seed(0x5E1A7000ULL + (uint64_t)n * 2654435761ULL);
        nc_restore();
        switch (n % 3) {
        case 0: alloc_case(n); break;
        case 1: name_case(n); break;
        default: part_case(n); break;
        }
    }
    return 0;
}
