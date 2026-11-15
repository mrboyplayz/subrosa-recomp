#include "net_replication_encode.h"
#include "arith.h"
#include <math.h>

/* The value transfers of 0x14010E6C0 are net_write_bits inlined, with the
   cursor word of the last transfer left in RAX: the new bit cursor after a
   partial fit, the bit cursor the transfer started at after an exact fit,
   and the write position when the buffer check refuses. */
static uint64_t inline_write_bits(uint32_t value, int bits)
{
    int32_t position = net_write_position;
    if (position >= NET_BUFFER_SIZE)
        return (uint64_t)(uint32_t)position;
    int32_t bit = net_write_bit;
    uint32_t remaining = value;
    int32_t count = bits;
    while (1) {
        net_write_buffer[position] &= (uint8_t)~(uint8_t)(((1u << (count & 31u)) - 1u) << (bit & 31u));
        net_write_buffer[net_write_position] |= (uint8_t)((remaining & 255u) << (net_write_bit & 31u));
        int32_t started = net_write_bit;
        int32_t room = 8 - started;
        if ((uint32_t)count < (uint32_t)room) {
            net_write_bit = add_int(started, count);
            return (uint64_t)(uint32_t)(started + count);
        }
        net_write_bit = 0;
        if (count == room) {
            net_write_position = add_int(net_write_position, 1);
            return (uint64_t)(uint32_t)started;
        }
        count -= room;
        remaining >>= room & 31u;
        position = add_int(net_write_position, 1);
        net_write_position = position;
        bit = 0;
        if (count <= 0)
            return (uint64_t)(uint32_t)net_write_position;
    }
}

/* 0x140105BD0: the raise is the CRT pow in double; the scale by 1/256,
   the inverse and the final multiply by 256 are single-precision ops in
   the original's order, then the 64-bit truncating conversion. */
unsigned int net_replication_distance_priority(float distance)
{
    double raised = pow((double)distance, 1.75);
    float scaled = (float)raised * 0.00390625f;
    float inverse = 1.0f - scaled;
    return (unsigned int)truncate_float(inverse * 256.0f);
}

/* 0x14010E6C0: the delta is the wrapped difference of the field word; the
   markers 0, 10 and 11 pick the 4-bit delta, the 9-bit delta and the full
   value. The marker of the 4-bit form is inlined in the original, like
   the value transfers. */
uint64_t net_replication_encode_delta(uint32_t *field, int reference, int use_delta, int full_bits)
{
    if (!use_delta) {
        uint32_t marker = 1;
        net_write_bits(&marker, 1);
        net_write_bits(&marker, 1);
        return (uint64_t)net_write_bits(field, full_bits);
    }
    uint32_t delta = *field - (uint32_t)reference;
    if ((uint32_t)(delta + 8) <= 0xF) {
        uint32_t zero = 0;
        inline_write_bits(zero, 1);
        return inline_write_bits(delta & 0xFu, 4);
    }
    uint32_t one = 1, zero = 0;
    net_write_bits(&one, 1);
    net_write_bits(&zero, 1);
    int64_t result = (int64_t)(uint32_t)net_write_position;
    if (net_write_position < NET_BUFFER_SIZE)
        result = inline_write_bits(delta & 0x1FFu, 9);
    return (uint64_t)result;
}

/* 0x14010E9B0: the delta is the wrapped difference of the field word,
   kept in a word the original passes by address, so the second read
   observes any marker that lands on it. The small and medium ranges are
   signed tests against the half ranges. */
uint64_t net_replication_encode_adaptive_delta(uint32_t *field, int reference, int use_delta,
                                               int full_bits)
{
    uint32_t scratch = 0;
    int code = 2;
    if (use_delta) {
        scratch = *field - (uint32_t)reference;
        if (net_replication_delta_markers && scratch == 0)
            return (uint64_t)net_write_bits(&scratch, 1);
        if ((int32_t)scratch >= -net_replication_small_delta_half
            && (int32_t)scratch < net_replication_small_delta_half)
            code = 0;
        else if ((int32_t)scratch >= -net_replication_medium_delta_half
                 && (int32_t)scratch < net_replication_medium_delta_half)
            code = 1;
    }
    uint32_t one = 1, zero = 0;
    if (net_replication_delta_markers)
        net_write_bits(&one, 1);
    uint32_t *source = &scratch;
    int bits = full_bits;
    if (code == 0) {
        net_write_bits(&zero, 1);
        bits = net_replication_small_delta_bits;
    } else if (code == 1) {
        net_write_bits(&one, 1);
        net_write_bits(&zero, 1);
        bits = net_replication_medium_delta_bits;
    } else {
        net_write_bits(&one, 1);
        net_write_bits(&one, 1);
        source = field;
    }
    return (uint64_t)net_write_bits(source, bits);
}

/* 0x140106160: the four copies walk the humans, blocks, items and unknown
   words in that order; the last mask word index or copied snapshot word
   stays in RAX, so the fourth loop keeps it like the original does. */
uint64_t net_replication_peer_catchup(int peer)
{
    int64_t peer_index = (int64_t)peer;
    int32_t now = replication_now;
    int32_t last = replication_peer_last_tick(peer);
    uint32_t age = (uint32_t)subtract_int(now, last);
    if ((int32_t)age >= 192)
        return (uint64_t)age;
    uint8_t slot = (uint8_t)last;
    uint64_t mask_base = 88ULL * (uint64_t)slot + 47224ULL * (uint64_t)peer_index;
    int32_t rol;

    rol = 1;
    for (int64_t entry = 0; entry < 256; entry++) {
        if ((rol & replication_human_dirty(peer, slot, entry)) != 0) {
            replication_peer_human(peer, entry)->tick = replication_peer_last_tick(peer);
            replication_peer_human(peer, entry)->unknown_0 =
                (int32_t)replication_human_snapshot(slot, entry);
        }
        rol = (int32_t)rotate_left_int((uint32_t)rol, 1);
    }

    rol = 1;
    for (int64_t entry = 0; entry < 512; entry++) {
        if ((rol & replication_block_dirty(peer, slot, entry)) != 0)
            replication_peer_block(peer, entry)->unknown_0 = replication_peer_last_tick(peer);
        rol = (int32_t)rotate_left_int((uint32_t)rol, 1);
    }

    rol = 1;
    for (int64_t entry = 0; entry < 1024; entry++) {
        if ((rol & replication_item_dirty(peer, slot, entry)) != 0) {
            replication_peer_item(peer, entry)->tick = replication_peer_last_tick(peer);
            replication_peer_item(peer, entry)->unknown_0 =
                (int32_t)replication_item_snapshot(slot, entry);
        }
        rol = (int32_t)rotate_left_int((uint32_t)rol, 1);
    }

    int64_t result = 0;
    rol = 1;
    for (int64_t entry = 0; entry < 1024; entry++) {
        result = (int64_t)(mask_base + ((uint64_t)entry >> 5));
        if ((rol & replication_unknown_dirty(peer, slot, entry)) != 0) {
            uint32_t word = replication_unknown_snapshot(slot, entry);
            replication_peer_unknown(peer, entry)->tick = replication_peer_last_tick(peer);
            replication_peer_unknown(peer, entry)->unknown_0 = (int32_t)word;
            result = (int64_t)word;
        }
        rol = (int32_t)rotate_left_int((uint32_t)rol, 1);
    }
    return (uint64_t)result;
}
