/* The vehicle spawn and net-replication machinery: three flat state regions
 * the spawn menu, vehicle creation and the scene draw maintain. See
 * vehicle_state.h for each routine's contract.
 * 0x14004DA50, 0x1400588F0, 0x14010C850. */
#include <string.h>
#include "vehicle_state.h"
#include "memory.h"

/* 1024 vehicle records, 0x328 bytes each at 0x1601172A0 (0x328 * 1024 is
   exactly the distance to the table's end, 0x1601E12A0). */
#define VEHICLE_TABLE   0x1601172A0ULL
#define VEHICLE_STRIDE  0x328ULL
#define VEHICLE_COUNT   1024u

uint32_t vehicle_alloc_slot(uint32_t kind, const uint32_t *position, float value)
{
    for (uint32_t slot = 0; slot < VEHICLE_COUNT; slot++) {
        uint8_t *record = (uint8_t *)&SR_GLOBAL(uint32_t,
            VEHICLE_TABLE + VEHICLE_STRIDE * (uint64_t)slot);
        if (*(uint32_t *)(void *)record != 0)
            continue;
        memset(record + 4, 0, VEHICLE_STRIDE - 4);
        *(uint32_t *)(void *)(record + 0x00) = 1;             /* in use */
        *(uint32_t *)(void *)(record + 0x04) = kind;
        *(uint32_t *)(void *)(record + 0x14) = position[0];
        *(uint32_t *)(void *)(record + 0x18) = position[1];
        *(uint32_t *)(void *)(record + 0x1c) = position[2];
        *(float *)(void *)(record + 0x20) = value;
        *(uint64_t *)(void *)(record + 0x08) = ~(uint64_t)0;  /* timer = -1 */
        return slot;
    }
    return 0xFFFFFFFFu;
}

/* 256 name slots, 0x98 bytes each at 0x192E8F660; the wrapping u8 cursor
   sits at 0x192E98E60, right behind the table's 0x9800 bytes. */
#define NAME_TABLE   0x192E8F660ULL
#define NAME_STRIDE  0x98ULL
#define NAME_CURSOR  0x192E98E60ULL

uint32_t vehicle_name_slot_add(uint32_t id, const char *name,
                               uint32_t value, uint32_t value2)
{
    int32_t previous = (int32_t)SR_GLOBAL(uint32_t, NAME_CURSOR);
    uint8_t *slot = (uint8_t *)&SR_GLOBAL(uint32_t,
        NAME_TABLE + NAME_STRIDE * (uint64_t)(int64_t)previous);
    *(uint32_t *)(void *)slot = id;
    uint8_t *out = slot + 0x18;                /* the name text */
    const char *in = name;
    char byte;
    do {
        byte = *in++;
        *out++ = byte;                         /* the terminator goes too */
    } while (byte != '\0');
    uint32_t length = 0;
    while (name[length] != '\0')
        length++;
    *(uint32_t *)(void *)(slot + 0x0c) = length;
    *(uint32_t *)(void *)(slot + 0x08) =
        (id & 0xFFFFFFFBu) == 0 ? 600u : 480u;
    *(uint32_t *)(void *)(slot + 0x10) = value;
    *(uint32_t *)(void *)(slot + 0x14) = value2;
    SR_GLOBAL(uint32_t, NAME_CURSOR) = (uint32_t)(uint8_t)(previous + 1);
    return (uint32_t)(previous + 1);
}

/* Per-type part lists at 0x192E9A680: 0x185C0 bytes per type, the count
   word at 0x854, entries of three words at 0x858 (id, first, second). */
#define PART_TABLE   0x192E9A680ULL
#define PART_STRIDE  0x185C0ULL
#define PART_COUNT   0x854u

uint32_t *vehicle_type_part_add(int type, uint32_t id,
                                uint32_t first, uint32_t second)
{
    uint64_t base = PART_TABLE + PART_STRIDE * (uint64_t)(int64_t)type;
    int32_t count = (int32_t)SR_GLOBAL(uint32_t, base + PART_COUNT);
    uint32_t *entry = &SR_GLOBAL(uint32_t, base + 0x860u);  /* second's word */
    for (int32_t i = 0; i < count; i++, entry += 3) {
        uint32_t held_first = *(entry - 1);
        uint32_t held_second = *entry;
        if ((first == held_first && second == held_second) ||
            (first == held_second && second == held_first))
            return entry;
    }
    *(entry - 2) = id;
    *(entry - 1) = first;
    *entry = second;
    SR_GLOBAL(uint32_t, base + PART_COUNT) = (uint32_t)(count + 1);
    /* The original's append branch returns the record offset plus the new
       entry's 12*count bytes — not a valid address (the matched branch is
       the one callers would want, and they discard both). 0x14010C850 */
    return (uint32_t *)(uintptr_t)(PART_STRIDE * (uint64_t)(int64_t)type
                                   + 12u * (uint32_t)count);
}
