/* DRAFT — net replication cluster, send side and peer catch-up (five
 * routines; 0x140105BD0, 0x140106160, 0x14010E6C0, 0x14010E9B0,
 * 0x14011C730). Recovered from the disassembly of subrosa.exe.
 *
 * Do NOT land as-is in src/engine: 0x140105BD0, 0x140106160, 0x14010E6C0
 * and 0x14010E9B0 already have ports in src/engine/net_replication_encode.c
 * (net_replication_distance_priority, net_replication_peer_catchup,
 * net_replication_encode_delta, net_replication_encode_adaptive_delta) and
 * this file is the same behavior with those bodies restated from their
 * disassembly for verification — plus the wrapper-adapters for the
 * tail-jump shim 0x14011C730, which is not ported yet. To finish: land the
 * 0x14011C730 shim (sr_replication_render_camera) in src/engine (+ its
 * header), rewire sub_14011C730 in src/client/client_recovery_100000.c,
 * add t_netreplicate.c + netreplicate.mutations (drafted beside this
 * file), prove plain and --client-wrappers (NC_WRAPPERS: 14011C730; also
 * 140105BD0 140106160 14010E6C0 14010E9B0 once their client wrappers
 * exist — they are still raw decompiler bodies in
 * src/client/client_net_replication.c, so --client-wrappers must wait for
 * that rewiring), then mutate. mutate.py cannot run against this draft
 * dir (it copies src/engine), so the mutations file is only exercised
 * after the suite is landed.
 *
 * The suite binds the shim's two callees with nc_redirect recording
 * stubs: 0x140198F0B is sr_menu_relative_mode (the (1, junk, junk) call
 * re-enters the escape menu) and 0x14013D1B0 is the shading pass that
 * recovers the camera uniforms, whose double result the shim returns
 * unchanged. 0x14014B2A0, the routine the shim tail-jumps to, computes
 * the final candidate vector.
 */
#include "draft_routine.h"
#include "net_bits.h"
#include "net_replication.h"
#include "net_replication_encode.h"
#include "arith.h"
#include <math.h>

/* ---- 0x140105BD0 -------------------------------------------------------
 * Replication priority of a thing at a distance: the CRT pow raises the
 * distance to 1.75 in double, then the scale by 1/256 (0.00390625), the
 * inverse and the final multiply by 256 are single-precision ops in the
 * original's order, and CVTTSS2SI truncates to int. The write to EAX
 * zeroes the upper half of RAX (the caller reads the zero-extended
 * unsigned word). */
uint32_t draft_distance_priority(float distance)
{
    double raised = pow((double)distance, 1.75);
    float scaled = (float)raised * 0.00390625f;
    float inverse = 1.0f - scaled;
    return (uint32_t)(int32_t)truncate_float(inverse * 256.0f);
}

/* ---- 0x140106160 -------------------------------------------------------
 * Peer catch-up: when the peer is fewer than 192 ticks behind (a signed
 * compare of the wrapped tick age), copy every entry its snapshot slot
 * marks changed into the words it is owed. Four walks in the original's
 * order: 256 humans (snapshot stride 121 dwords), 512 blocks, 1024 items
 * (stride 9), 1024 unknown words (stride 10). Every stamp writes the
 * peer's last-caught-up tick into the owed entry's third dword and the
 * snapshot word into its first. The last loop keeps either the mask word
 * index or the copied snapshot word in RAX, as the original does. */
uint64_t draft_peer_catchup(int peer)
{
    int64_t peer_index = (int64_t)peer;
    int32_t now = replication_now;
    int32_t last = replication_peer_last_tick(peer);
    int64_t age = (int64_t)(int32_t)((uint32_t)now - (uint32_t)last);
    if (age >= 192)
        return (uint64_t)age;
    uint64_t slot = (uint8_t)last;
    uint64_t mask_base = 88ULL * slot + 47224ULL * (uint64_t)peer_index;
    uint32_t rol;
    int64_t entry;

    rol = 1;
    entry = 0;
    do {
        if ((rol & replication_human_dirty(peer, slot, entry)) != 0) {
            replication_peer_human(peer, entry)->tick = replication_peer_last_tick(peer);
            replication_peer_human(peer, entry)->unknown_0 =
                (int32_t)replication_human_snapshot(slot, entry);
        }
        entry++;
        rol = (uint32_t)((rol << 1) | (rol >> 31));
    } while (entry < 256);

    rol = 1;
    entry = 0;
    do {
        if ((rol & replication_block_dirty(peer, slot, entry)) != 0)
            replication_peer_block(peer, entry)->unknown_0 = replication_peer_last_tick(peer);
        entry++;
        rol = (uint32_t)((rol << 1) | (rol >> 31));
    } while (entry < 512);

    rol = 1;
    entry = 0;
    do {
        if ((rol & replication_item_dirty(peer, slot, entry)) != 0) {
            replication_peer_item(peer, entry)->tick = replication_peer_last_tick(peer);
            replication_peer_item(peer, entry)->unknown_0 =
                (int32_t)replication_item_snapshot(slot, entry);
        }
        entry++;
        rol = (uint32_t)((rol << 1) | (rol >> 31));
    } while (entry < 1024);

    uint64_t result = 0;
    rol = 1;
    entry = 0;
    do {
        result = mask_base + ((uint64_t)entry >> 5);
        if ((rol & replication_unknown_dirty(peer, result, entry)) != 0) {
            replication_peer_unknown(peer, entry)->tick = replication_peer_last_tick(peer);
            uint32_t snapshot = (uint32_t)replication_unknown_snapshot(slot, entry);
            replication_peer_unknown(peer, entry)->unknown_0 = (int32_t)snapshot;
            result = snapshot;
        }
        entry++;
        rol = (uint32_t)((rol << 1) | (rol >> 31));
    } while (entry < 1024);
    return result;
}

/* ---- the inlined bit transfer of the outgoing encoders -----------------
 * The value transfers of 0x14010E6C0/0x14010E9B0 are net_write_bits
 * inlined, with the cursor word of the last transfer left in RAX: the new
 * bit cursor after a partial fit, the bit cursor the transfer started at
 * after an exact fit, and the write position when the buffer check
 * refuses. net_write_bits' own return is 0 there; the encoders return the
 * cursor word instead, so the transfer is restated here. */
static uint64_t inline_write_bits(uint32_t value, int32_t bits)
{
    int64_t position = (int32_t)net_write_position;
    if (position >= NET_BUFFER_SIZE)
        return (uint64_t)(uint32_t)position;
    int32_t bit = (int32_t)net_write_bit;
    uint32_t remaining = value;
    int32_t count = bits;
    while (1) {
        net_write_buffer[position] &= (uint8_t)~(uint8_t)(((1u << (count & 31u)) - 1u)
                                                          << (bit & 31u));
        net_write_buffer[(int32_t)net_write_position] |=
            (uint8_t)((remaining & 255u) << ((int32_t)net_write_bit & 31u));
        int32_t started = (int32_t)net_write_bit;
        int32_t room = 8 - started;
        if ((uint32_t)count < (uint32_t)room) {
            net_write_bit = started + count;
            return (uint64_t)(uint32_t)(started + count);
        }
        net_write_bit = 0;
        if (count == room) {
            net_write_position = (int32_t)net_write_position + 1;
            return (uint64_t)(uint32_t)started;
        }
        count -= room;
        remaining >>= room & 31u;
        position = (int32_t)net_write_position + 1;
        net_write_position = (int32_t)position;
        bit = 0;
        if (count <= 0)
            return (uint64_t)(uint32_t)net_write_position;
    }
}

/* ---- 0x14010E6C0 -------------------------------------------------------
 * Sends a signed change as a 4-bit delta when it fits in [-8, 7] (an
 * inlined 0 marker then the 4-bit transfer), a 9-bit delta when it fits
 * in [-256, 255] (markers 1 then 0), and the full value in full_bits
 * bits otherwise (markers 1 then 1); with use_delta clear the full form
 * is always sent. Returns the last transfer's cursor word. */
uint64_t draft_encode_delta(uint32_t *field, int32_t reference, int32_t use_delta,
                            int32_t full_bits)
{
    uint32_t delta;
    if (!use_delta)
        goto full;
    delta = *field - (uint32_t)reference;
    if ((uint32_t)(delta + 8) <= 0xF) {
        uint32_t zero = 0;
        inline_write_bits(zero, 1);
        return inline_write_bits(delta & 0xFu, 4);
    }
    if ((uint32_t)(delta + 256) > 0x1FF) {
full:
        delta = 1;
        net_write_bits(&delta, 1);
        net_write_bits(&delta, 1);
        return (uint64_t)(uint32_t)net_write_bits(field, full_bits);
    }
    delta = 1;
    net_write_bits(&delta, 1);
    delta = 0;
    net_write_bits(&delta, 1);
    {
        int64_t result = (int32_t)net_write_position;
        if (net_write_position < NET_BUFFER_SIZE)
            result = (int32_t)inline_write_bits(*field - (uint32_t)reference & 0x1FFu, 9);
        return (uint64_t)result;
    }
}

/* ---- 0x14010E9B0 -------------------------------------------------------
 * Sends a signed change with adaptive width, keeping the delta in a stack
 * word the original passes by address (sr_frame + 0x20), so a marker
 * transfer that wraps the cursor onto it is observed by the reads that
 * follow. With the markers on, a zero delta is a single 0 bit; otherwise
 * a 1 marker bit precedes a second code that picks the small width (0),
 * the medium width (10) or the full value (11); without the markers the
 * second code alone is sent. Every path ends in a bit transfer and
 * returns its success word. */
uint64_t draft_encode_adaptive_delta(uint32_t *field, int32_t reference, int32_t use_delta,
                                     int32_t full_bits)
{
    uint32_t scratch[6];
    int32_t code;
    uint32_t *source;
    int32_t bits;
    if (use_delta) {
        scratch[0] = *field - (uint32_t)reference;
        if (net_replication_delta_markers && !scratch[0])
            return (uint64_t)(uint32_t)net_write_bits(&scratch[0], 1);
        if ((int32_t)scratch[0] >= -net_replication_small_delta_half
            && (int32_t)scratch[0] < net_replication_small_delta_half) {
            code = 0;
            goto write;
        }
        if ((int32_t)scratch[0] >= -net_replication_medium_delta_half) {
            code = 1;
            if ((int32_t)scratch[0] < net_replication_medium_delta_half)
                goto write;
        }
    }
    code = 2;
write:
    if (net_replication_delta_markers) {
        uint32_t one = 1;
        net_write_bits(&one, 1);
    }
    if (code == 1) {
        uint32_t one = 1, zero = 0;
        net_write_bits(&one, 1);
        net_write_bits(&zero, 1);
        bits = net_replication_medium_delta_bits;
        source = &scratch[0];
    } else if (code == 2) {
        uint32_t one = 1;
        net_write_bits(&one, 1);
        net_write_bits(&one, 1);
        bits = full_bits;
        source = field;
    } else {
        uint32_t zero = 0;
        net_write_bits(&zero, 1);
        bits = net_replication_small_delta_bits;
        source = &scratch[0];
    }
    return (uint64_t)(uint32_t)net_write_bits(source, bits);
}

/* ---- 0x14011C730 -------------------------------------------------------
 * Tail-call shim between the menu state and the shading pass: when the
 * escape menu is open, sr_menu_relative_mode(1, a2, a3) re-enters it
 * first; the shading pass 0x14013D1B0 then recovers the camera uniforms
 * (its double result is discarded) and the tail-jump target 0x14014B2A0
 * computes the final candidate, whose double the shim returns. The suite
 * binds recording stubs behind the three addresses, so the shim is
 * proven against them (see the suite). */
#define SR_DRAFT_ADDR(address) ((void *)(uintptr_t)(address))

double draft_replication_render_camera(int64_t a1, int64_t a2, int64_t a3)
{
    (void)a1;
    if (net_replication_render_menu_active)
        ((void (*)(int32_t, int64_t, int64_t))SR_DRAFT_ADDR(0x140198F0B))(1, a2, a3);
    (void)((double (*)(void))SR_DRAFT_ADDR(0x14013D1B0))();
    return ((double (*)(void))SR_DRAFT_ADDR(0x14014B2A0))();
}
