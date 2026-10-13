/* Network state replication. Packet storage and bit reads are shared with
   net_bits.c; entity layouts still agree with the original executable. */
#ifndef SR_ENGINE_NET_REPLICATION_H
#define SR_ENGINE_NET_REPLICATION_H
#include "world.h"

typedef struct NetItemSnapshot {
    int32_t position[3];             /* 1/4096 units; x and z biased by 4096 */
    union {
        struct {
            int32_t omitted_component; /* quaternion component reconstructed positive */
            int32_t components[3];  /* the other components, in protocol order */
        };
        int32_t rotation[4];
    };
    uint32_t reserved[2];
} NetItemSnapshot;

typedef struct NetItemInterpolation {
    int32_t tick;
    float position[3];
    int32_t initialized;
    int32_t previous_tick;
    float previous_position[3];
} NetItemInterpolation;

_Static_assert(sizeof(NetItemSnapshot) == 36, "item snapshot stride");
_Static_assert(sizeof(NetItemInterpolation) == 36, "item interpolation size");
_Static_assert(__builtin_offsetof(NetItemSnapshot, rotation) == 12, "snapshot rotation offset");
_Static_assert(__builtin_offsetof(NetItemInterpolation, initialized) == 16, "interpolation flag offset");
_Static_assert(__builtin_offsetof(WorldItem, type) == 0x14, "replicated item type offset");
_Static_assert(__builtin_offsetof(WorldItem, holder) == 0x24, "replicated item holder offset");
_Static_assert(__builtin_offsetof(WorldItem, parent) == 0x28, "replicated item parent offset");
_Static_assert(__builtin_offsetof(WorldItem, slot) == 0x2C, "replicated item slot offset");
_Static_assert(__builtin_offsetof(WorldItem, position) == 0x5C, "replicated item position offset");
_Static_assert(__builtin_offsetof(WorldItem, rotation) == 0xA4, "replicated item rotation offset");
#define net_item_snapshot(frame, item) \
    SR_GLOBAL(NetItemSnapshot, 0x160FFF568ULL + 0x4DC00ULL * (uint64_t)(int64_t)(frame) + 36ULL * (uint64_t)(int64_t)(item))
#define net_item_interpolation(item) \
    SR_GLOBAL(NetItemInterpolation, 0x182BBB4C4ULL + 0x1B80ULL * (uint64_t)(int64_t)(item))
#define net_replication_tick SR_GLOBAL(int32_t, 0x183EBFD34ULL)
#define net_component_unchanged_bit SR_GLOBAL(int32_t, 0x16B2A224CULL)
#define net_component_small_bits SR_GLOBAL(int32_t, 0x165D84960ULL)
#define net_component_large_bits SR_GLOBAL(int32_t, 0x165D84964ULL)
#define net_component_delta_count(delta) \
    SR_GLOBAL(uint32_t, 0x16B2A2254ULL + 4ULL * (uint64_t)(uint8_t)(delta))
#define net_component_statistics_base (&SR_GLOBAL(uint8_t, 0x16B165F60ULL))
#define net_computer_link(item) \
    SR_GLOBAL(uint32_t, 0x182BBB4F0ULL + 0x1B80ULL * (uint64_t)(int64_t)(item))

/* Mutable protocol order in .data, initially w, y, z, x. */
extern int32_t net_quat_first __asm__("dword_140301DD8");
extern int32_t net_quat_second __asm__("dword_140301DDC");
extern int32_t net_quat_third __asm__("dword_140301DE0");
extern int32_t net_quat_fourth __asm__("dword_140301DE4");

/* 0x14018D440: reads magnitude and sign, returning the encoded sign mask. */
uint64_t net_read_angle(float *out, int bits);
/* 0x14018D510: signed 4/9-bit delta or an unsigned absolute position.
   Delta returns the stored word; absolute returns the bit reader's status. */
uint64_t net_read_position_delta(uint32_t *out, int32_t baseline, int bits);
/* 0x14018D5E0: optional unchanged bit, configurable signed deltas, or a
   signed absolute value. Counts deltas -128..127 by their low byte. Its
   legacy return is status, delta+128, or the statistics base address. */
uint64_t net_read_component_delta(int32_t *out, int32_t baseline, int bits);
/* 0x140191F90: three quantized components plus the omitted component index;
   reconstructs and normalizes a quaternion, then builds its matrix. */
void net_decode_rotation(float out[9], const int32_t *packed);
/* 0x14018D6D0 / 0x14018DB20: update an item's snapshot/interpolation and
   type-specific fields; spawn reads type, parent, holder and slot. */
uint64_t net_read_item_update(int frame, int item);
uint64_t net_read_item_spawn(int item);

/* Complete packets are the native parity contract. Where the original
   consumes an unset local after a failed read, these routines start it at
   zero; later failed reads retain its most recently decoded value. */
#endif
