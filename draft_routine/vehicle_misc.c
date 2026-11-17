/* Draft vehicle-misc recovery: DRAFT STAGE ONLY.
 *
 * Five client_vehicles.c routines recovered from subrosaactual/subrosa.exe
 * into clean C. Verification status: DRAFT, NOT VERIFIED — the suite
 * compiles in all three modes and the port build runs, but the NATIVE
 * build still faults (0xC0000005) at a later packet/transfer case; the
 * state seeding the original needs before those calls is not fully
 * identified yet. Fixture findings so far: imports must be bound before
 * nc_map_image(), nc_redirect after it; the original calls 0x140077710
 * with no pointer argument (stub must be parameterless); the train-fields
 * forwarder is set through vehicles_setup_train_fields_fn. One more
 * gdb pass over build/native-compare/vehiclemisc/native should finish it.
 *
 * Two of the originally assigned addresses turned out to be recovered
 * already and are NOT redone here:
 *   0x14006C5E0 -> vehicles_packet_bytes_transfer (src/engine/vehicles_helpers.c)
 *   0x1400A2C00 -> vehicles_alert_post            (src/engine/vehicles_helpers.c)
 * Both still lack a comparison suite; t_vehiclemisc.c covers them as well,
 * calling the engine ports.
 *
 * Replacements picked from the same client file (still raw decompiler
 * output, no engine port, no client wrapper, no suite):
 *   0x14006C360 -> vehicles_packet_bits_write
 *   0x14006CCA0 -> vehicles_callsign_set
 *
 * Callers of these routines were not rewritten (src/client is untouched).
 * Nothing here is wired into the engine or the client.
 *
 * To finish (per routine, after review):
 *   1. move the routine into the right src/engine module, using the engine's
 *      SR_GLOBAL state names from src/engine/vehicles.h / player_ring.h,
 *   2. rewire the decompiled body in src/client/client_vehicles.c with a
 *      "Clean implementation" wrapper and delete the routine's scoped locals
 *      from src/client/local_names.tsv (CI checks this),
 *   3. move t_vehiclemisc.c + vehiclemisc.mutations to
 *      tools/native-compare/, run
 *      `python tools/native-compare/run.py vehiclemisc`,
 *      `run.py vehiclemisc --client-wrappers` (add NC_WRAPPERS lines),
 *      a neighbour suite, then `mutate.py vehiclemisc vehicle_misc.c
 *      vehiclemisc.mutations` and check every mutant is detected,
 *   4. update the file table in src/engine/README.md.
 */
#include <stdint.h>
#include <string.h>

#include "memory.h"
#include "vehicles.h"
#include "arith.h"

/* The two drafts that already have engine ports and are compared against
   them (the native build calls the original addresses instead). */
uint64_t vehicles_packet_bytes_transfer(int index, void *buffer, int element_size,
                                        int count, int write);
uint32_t vehicles_alert_post(int player, int type);
int64_t vehicles_setup_helicopter_type(void);

/* ---- 0x140077660 --------------------------------------------------------- */

/* kernel32!QueryPerformanceFrequency and QueryPerformanceCounter, as the
   original's engine start calls them (through the import slots at
   0x14026E328 and 0x14026E320). Declared without the OS header so the
   engine stays portable: the client build links the real imports, and a
   native-compare fixture binds the names or seeds the words itself. */
int QueryPerformanceFrequency(void *frequency);
int QueryPerformanceCounter(void *counter);

/* The unported callees of the two vehicle-type setups, declared with their
   original addresses (see replay_write.c for the style). */
extern void asset_load_vehicle_sbv_candidate(int type, const char *name);   /* 0x140192EC0 */
extern void sub_140103270(int type, const char *name);                      /* 0x140103270 */
extern void sub_14014D6D0(int type, float a, float b, unsigned flags);      /* 0x14014D6D0 */
extern int64_t sub_14014AAE0(int type);                                     /* 0x14014AAE0 */
extern void sub_140192EC0(int type, float a, float b, unsigned flags);      /* 0x140192EC0 */

/* WinSock 2.2 startup, as the original calls it (a thunk to
   wsock32!WSAStartup, ordinal 115, at 0x140199043): version 257 and the
   data block at 0x15F1D9040. */
extern void sub_140199043(int64_t version, void *data);   /* 0x140199043 */

/* The texture-name slots, 0xA8 bytes apart, from 0x1A8572BC4 (the word the
   generated name is written to). */
#define VEHICLE_TEXTURE_SLOT_STRIDE 0xA8
#define VEHICLE_TEXTURE_SLOT_COUNT  2048

/* One pass of the city load for a texture slot: the fixture stubs this to
   advance the slot cursor by one stride and write a name, matching the
   callee's net effect. 0x140077710 (per slot) */
void vehicles_texture_slot_pass(uint32_t *slot);

/* The city loader the engine start runs next. The harness must not run it:
   the fixture redirects the original's address to a recording stub that
   advances the slot cursor one stride per call. 0x140077710 */
extern void sub_140077710(void);

/* Engine startup for the vehicle scene: the engine timer (frequency, then
   counter, then the running flag), winsock, the city, and one texture
   object per vehicle texture slot. Runs once at startup. 0x140077660 */
int64_t vehicles_engine_start(char flags)
{
    uint64_t frequency;
    if (QueryPerformanceFrequency(&frequency)) {
        uint64_t counter;
        QueryPerformanceCounter(&counter);
        SR_GLOBAL(uint64_t, 0x160FC4830ULL) = frequency;
        SR_GLOBAL(uint64_t, 0x160FC4838ULL) = counter;
        SR_GLOBAL(uint32_t, 0x160FC4828ULL) = 1u;              /* timer running */
    }
    uint32_t enabled = SR_GLOBAL(uint32_t, 0x160FC4810ULL);
    if (flags & 1)
        enabled = 1u;
    SR_GLOBAL(uint32_t, 0x160FC4810ULL) = enabled;
    if (flags & 2) {
        sub_140199043(257, &SR_GLOBAL(uint32_t, 0x15F1D9040ULL));
        SR_GLOBAL(uint32_t, 0x160FC4824ULL) = 1u;              /* winsock started */
    }
    sub_140077710();
    uint32_t *slot = &SR_GLOBAL(uint32_t, 0x1A8572BC4ULL);
    for (int remaining = VEHICLE_TEXTURE_SLOT_COUNT; remaining > 0; remaining--) {
        vehicles_texture_slot_pass(slot);
        slot += VEHICLE_TEXTURE_SLOT_STRIDE / 4;
    }
    return 1;
}

/* ---- 0x14014A8E0 --------------------------------------------------------- */

/* The helicopter vehicle type's record: the name, the mesh and the type's
   fields, then its four body-box points appended to the type's list. The
   caller has reset the type table (0x140145E20) and holds the model locks;
   the type word it writes is the model's index (2), 12 is the type id.
   0x14014A8E0 */
int64_t vehicles_setup_helicopter_type(void)
{
    char *type_name = (char *)(uintptr_t)0x192FBEB94ULL;
    strcpy(type_name, "Helicopter");
    *(float *)(void *)(uintptr_t)0x192FBEBB8ULL = 1000.0f;     /* price */
    SR_GLOBAL(uint32_t, 0x192FBEB88ULL) = 2u;                  /* the model's word */
    SR_GLOBAL(uint32_t, 0x192FBEBB4ULL) = 1000000u;            /* origin point */
    SR_GLOBAL(uint32_t, 0x192FBEB80ULL) = 1u;                  /* the mesh's flag */
    asset_load_vehicle_sbv_candidate(12, "park5");
    SR_GLOBAL(uint32_t, 0x192FD63F8ULL) = 0u;                  /* the count of parts so far */
    SR_GLOBAL(uint32_t, 0x1904C6968ULL) = 0u;
    SR_GLOBAL(uint32_t, 0x1904C4F64ULL) = 0u;
    sub_140103270(12, "data/helitest.tst");
    sub_14014D6D0(12, 0.375f, 12.0f, 0u);
    float *box_points = &SR_GLOBAL(float, 0x192E9A680ULL + 0x13C81CULL);
    uint32_t *count = &SR_GLOBAL(uint32_t, 0x192FD6E98ULL);
    box_points[3 * (int32_t)*count + 0] = -0.375f;             /* 0xBEC00000 */
    box_points[3 * (int32_t)*count + 1] = -0.5625f;            /* 0xBF100000 */
    box_points[3 * (int32_t)*count + 2] = -0.875f;             /* 0xBF600000 */
    *count += 1u;
    box_points[3 * (int32_t)*count + 0] = 0.375f;              /* 0x3EC00000 */
    box_points[3 * (int32_t)*count + 1] = -0.5625f;            /* 0xBF100000 */
    box_points[3 * (int32_t)*count + 2] = -0.875f;             /* 0xBF600000 */
    *count += 1u;
    box_points[3 * (int32_t)*count + 0] = -0.375f;             /* 0xBEC00000 */
    box_points[3 * (int32_t)*count + 1] = -0.5625f;            /* 0xBF100000 */
    box_points[3 * (int32_t)*count + 2] = 0.75f;               /* 0x3F400000 */
    *count += 1u;
    box_points[3 * (int32_t)*count + 0] = 0.375f;              /* 0x3EC00000 */
    box_points[3 * (int32_t)*count + 1] = -0.5625f;            /* 0xBF100000 */
    box_points[3 * (int32_t)*count + 2] = 0.75f;               /* 0x3F400000 */
    *count += 1u;
    return sub_14014AAE0(12);
}

/* ---- 0x140145BB0 --------------------------------------------------------- */

/* The train type's fields after the helicopter's (the caller is
   sr_SetupVehicleTypes' inline body: sub_140145E20, then the helicopter
   block, then this). The store at 0x192FD7154 is the name's length word.
   0x140145BB0 (tail) */
static void vehicles_setup_train_fields(void)
{
    SR_GLOBAL(uint32_t, 0x192FD7154ULL) = 0x6E696152u;         /* "Train" bytes 4..7 */
    SR_GLOBAL(uint32_t, 0x192FD7140ULL) = 1u;                  /* the type's id word */
    SR_GLOBAL(uint32_t, 0x192FD7174ULL) = 1000u;               /* price */
    SR_GLOBAL(uint32_t, 0x192FD7148ULL) = 0u;                  /* the model's word */
    *(float *)(void *)(uintptr_t)0x192FD7178ULL = 320000.0f;   /* origin point */
    asset_load_vehicle_sbv_candidate(13, "train04");
    sub_140192EC0(13, 0.375f, 12.0f, 0u);
}

/* ---- 0x14006C360 --------------------------------------------------------- */

/* Appends the low bits bits of value to the packet stream of index: the
   bit cursor is re-read before every field write (a slot that overlaps the
   cursor behaves like the original's), the byte count is written as a
   32-bit product and the write is skipped when the byte end would reach or
   pass 64 KiB. option clears the bits it covers first. When value's start
   (bits >> 8) plus the stream's byte count would reach 64 KiB, nothing
   moves and the return is that end; otherwise the return is the new bit
   cursor (the second branch's return also ORs the bits it aligned past).
   0x14006C360 */
static uint32_t vehicles_packet_bits_write_shared(int index, uint32_t *value,
                                                  int bits, int option)
{
    VehiclesPacketOut *stream = vehicles_packet_out(index);
    int32_t byte_count = (int32_t)stream->count;          /* +0x00 */
    int32_t end = add_int(byte_count, bits >> 8);
    if (end >= 0x10000)
        return (uint32_t)end;

    if (option) {
        uint32_t remaining = *value & ~(uint32_t)((int32_t)-1 << bits);
        if (bits > 0) {
            uint32_t bit = stream->bit;                   /* +0x04 */
            uint32_t moved;
            for (;;) {
                uint8_t *target = (uint8_t *)stream + 8 + (int32_t)byte_count;
                *target &= (uint8_t)~((uint8_t)(((uint8_t)1 << bits) - 1) << bit);
                *target |= (uint8_t)remaining << *(uint32_t *)(void *)((uint8_t *)stream + 4);
                moved = *(uint32_t *)(void *)((uint8_t *)stream + 4);
                int32_t room = subtract_int(8, (int32_t)moved);
                if ((uint32_t)bits < (uint32_t)room)
                    break;
                uint32_t next = (uint32_t)*(int32_t *)(void *)((uint8_t *)stream + 4) + 1u;
                *(int32_t *)(void *)((uint8_t *)stream + 4) = 0;
                *(int32_t *)(void *)((uint8_t *)stream + 0) = (int32_t)next;
                if ((uint32_t)bits == (uint32_t)room)
                    return moved;
                bits -= room;
                remaining >>= bits & 0x1F;
                if (bits <= 0)
                    return moved;
                bit = 0u;
                byte_count = next;
            }
            uint32_t count = *(uint32_t *)(void *)((uint8_t *)stream + 4);
            *(uint32_t *)(void *)((uint8_t *)stream + 4) = (uint32_t)((int32_t)bits + (int32_t)count);
        }
    } else {
        uint32_t gathered = 0u;
        int32_t shifted = 0;
        if (bits > 0) {
            uint8_t *data = stream->data;
            int32_t source_shift = (int32_t)stream->bit;
            uint32_t bit = stream->bit;
            int32_t next = 0;
            for (;;) {
                uint32_t loaded = *(uint32_t *)(void *)(data + (int32_t)byte_count);
                gathered |= (uint32_t)(~(int32_t)-1 << bits & (int32_t)(loaded >> source_shift)) << shifted;
                int32_t room = subtract_int(8, (int32_t)bit);
                if ((uint32_t)bits < (uint32_t)room)
                    break;
                next = (int32_t)stream->count + 1;
                *(int32_t *)(void *)((uint8_t *)stream + 0) = next;
                *(int32_t *)(void *)((uint8_t *)stream + 4) = 0;
                if ((uint32_t)bits == (uint32_t)room) {
                    *value = gathered;
                    return (uint32_t)next;
                }
                bits -= room;
                shifted += room;
                if (bits <= 0) {
                    *value = gathered;
                    return (uint32_t)next;
                }
                source_shift = 0;
                bit = 0u;
                byte_count = next;
            }
            *(uint32_t *)(void *)((uint8_t *)stream + 4) = (uint32_t)(bit + (uint32_t)bits);
            *value = gathered;
        }
    }
    return (uint32_t)*(int32_t *)(void *)((uint8_t *)stream + 4);
}

/* ---- 0x14006CCA0 --------------------------------------------------------- */

/* The voice-list records, 0x8C bytes apart from 0x160722360: the count word
   (the list's high watermark), each record's in-use word at +0x84, its
   callsign bytes at +4 and its channel at +0x8C (a byte of the next
   record's count). */
#define VOICE_RECORD_SIZE   0x8C
#define VOICE_RECORD_BASE   0x160722360ULL
#define VOICE_RECORD_LIMIT  128
#define VOICE_RECORD_IN_USE 0x84
#define VOICE_CALLSIGN_MAX  128

/* Sets the channel word of the record that owns a callsign and marks the
   record in use; when no record holds the callsign, the first free record
   (and only its callsign bytes, not its other fields) gets the callsign and
   the channel. The compare is a byte-at-a-time loop over the callsign and
   the record's bytes; the stored value is the record's callsign pointer
   plus the record offset, so the store is the record's callsign field (the
   loop index over the record's own bytes, reading the caller's string
   from a1 for every byte). The float is written even when the record was
   found (the caller keeps it live in xmm1). 0x14006CCA0 */
void vehicles_callsign_set(const uint8_t *callsign, float channel)
{
    uint8_t *records_base = (uint8_t *)&SR_GLOBAL(uint32_t, VOICE_RECORD_BASE);
    int32_t records = (int32_t)SR_GLOBAL(uint32_t, VOICE_RECORD_BASE);
    int32_t found = -1;
    if (records > 0) {
        for (int32_t i = 0; i < records; i++) {
            if (*(int32_t *)(void *)(records_base + VOICE_RECORD_SIZE * (int64_t)i
                                     + VOICE_RECORD_IN_USE) == 1) {
                int32_t difference = 0;
                for (int32_t k = 0; ; k++) {
                    uint8_t left = callsign[k];
                    uint8_t right = *(uint8_t *)(void *)(callsign + k
                        + VOICE_RECORD_SIZE * (int64_t)i + 4);
                    difference = (int32_t)left - (int32_t)right;
                    if (difference)
                        break;
                    k++;
                    if (!right)
                        break;
                }
                if (!difference)
                    found = i;
            }
        }
    }
    if (found == -1) {
        if (records < VOICE_RECORD_LIMIT) {
            int32_t next = records + 1;
            for (int32_t k = 0; ; k++) {
                uint8_t byte = callsign[k];
                *(uint8_t *)(void *)(callsign + k + VOICE_RECORD_SIZE * (int64_t)records + 4) = byte;
                k++;
                if (!byte)
                    break;
            }
            *(int32_t *)(void *)records_base = next;
            found = records;
        }
    }
    if (found != -1) {
        *(float *)(void *)(records_base + VOICE_RECORD_SIZE * (int64_t)found
                           + VOICE_RECORD_IN_USE + 8) = channel;
        *(int32_t *)(void *)(records_base + VOICE_RECORD_SIZE * (int64_t)found
                             + VOICE_RECORD_IN_USE) = 1;
    }
}
