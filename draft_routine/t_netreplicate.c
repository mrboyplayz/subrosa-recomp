/* Net replication: the distance priority power (zero/negative/huge/NaN
   distances and the mxcsr rounding/flush modes), the peer catch-up over
   the four snapshot walks (tick-age boundary 192, negative peers and
   last ticks whose low byte picks the slot, scattered/all-zero/all-one
   dirty masks, mask words that land on the snapshot word), the 4-bit/9-bit
   delta encoder (boundaries -8/-7/7/8 and -256/-255/255/256, buffer-full
   skips, cursors that wrap onto the field word), the adaptive delta
   encoder (small/medium ranges with markers on and off, the stack-delta
   scratch the marker transfer can wrap onto) and the menu-to-shading shim
   (menu flag, recording stubs behind its callees).

   The native build calls the original machine code at its addresses; the
   port build calls the drafts in draft_routine/net_replicate.c (copied
   into the engine dir) and the landed engine ports
   (src/engine/net_replication_encode.c) as a second call per case. The
   recording stubs land behind the shim's three addresses in both
   builds. */
#include <string.h>
#include <math.h>
#include "nc.h"
#include "net_bits.h"
#include "net_replication.h"
#include "net_replication_encode.h"

/* The escape-menu flag the shim tests (0x183EBFD5C; the menu state region
   sets it when the menu opens). Needed in both builds. */
#define net_replication_render_menu_active SR_GLOBAL(int32_t, 0x183EBFD5CULL)

#ifdef NC_NATIVE
/* The originals at their addresses. */
#define priority_of(distance) \
    ((unsigned int (*)(float))NC_ADDR(0x140105BD0))(distance)
#define catchup_of(peer) \
    ((uint64_t (*)(int))NC_ADDR(0x140106160))(peer)
#define encode_delta_of(field, ref, use, bits) \
    ((uint64_t (*)(uint32_t *, int, int, int))NC_ADDR(0x14010E6C0))(field, ref, use, bits)
#define encode_adaptive_of(field, ref, use, bits) \
    ((uint64_t (*)(uint32_t *, int, int, int))NC_ADDR(0x14010E9B0))(field, ref, use, bits)
#define shim_of(a1, a2, a3) \
    ((double (*)(int64_t, int64_t, int64_t))NC_ADDR(0x14011C730))(a1, a2, a3)
#else
/* The drafts (draft_routine/net_replicate.c, copied into the engine dir)
   and the landed engine ports (src/engine/net_replication_encode.c). */
uint32_t draft_distance_priority(float distance);
uint64_t draft_peer_catchup(int peer);
uint64_t draft_encode_delta(uint32_t *field, int32_t reference, int32_t use_delta,
                            int32_t full_bits);
uint64_t draft_encode_adaptive_delta(uint32_t *field, int32_t reference, int32_t use_delta,
                                     int32_t full_bits);
double draft_replication_render_camera(int64_t a1, int64_t a2, int64_t a3);

#define priority_of(distance) draft_distance_priority(distance)
#define catchup_of(peer) draft_peer_catchup(peer)
#define encode_delta_of(field, ref, use, bits) \
    draft_encode_delta(field, ref, use, bits)
#define encode_adaptive_of(field, ref, use, bits) \
    draft_encode_adaptive_delta(field, ref, use, bits)
#define shim_of(a1, a2, a3) draft_replication_render_camera(a1, a2, a3)
#endif

/* Recording stubs behind the shim's callees (both builds; the native
   build redirects the original machine code to them, and the port build
   reaches the same addresses through its absolute symbols, which land on
   the same redirects). */
static uint64_t stub_log[4];
static int stub_calls;

static void record_call(int which, uint64_t a, uint64_t b, uint64_t c)
{
    stub_log[which * 2] = a;
    stub_log[which * 2 + 1] = b * 1000003u + c;
    stub_calls++;
}

static void stub_menu_relative(int32_t flag, int64_t a2, int64_t a3)
{
    record_call(0, (uint64_t)(uint32_t)flag, (uint64_t)a2, (uint64_t)a3);
}

static double stub_shading_pass(void)
{
    record_call(1, replication_now, 0, 0);
    return (double)(int32_t)(replication_now * 3 + 7);
}

/* The game's CRT pow (0x140240C80) dispatches through a pointer its own
   process initialization writes; in the harness image that pointer is
   still the padding, so the original priority routine's raise is bound to
   the same pow the port build uses. */
static double pow_stub(double base, double exponent)
{
    return pow(base, exponent);
}

/* Suite-local mirror of the outgoing encoder globals, so a case can choose
   the width configuration independently of the game defaults. */
static void set_delta_config(int32_t small_bits, int32_t medium_bits,
                             int32_t small_half, int32_t medium_half, int32_t markers)
{
    net_replication_small_delta_bits = small_bits;
    net_replication_medium_delta_bits = medium_bits;
    net_replication_small_delta_half = small_half;
    net_replication_medium_delta_half = medium_half;
    net_replication_delta_markers = markers;
}

/* ---- distance priority (0x140105BD0) ---------------------------------- */

static float priority_distance(int n)
{
    static const float specials[8] = {0.0f, -0.0f, 1.0f, -1.0f, 256.0f, 1e30f, -1e30f, 1.5f};
    static const uint64_t doubles[6] = {
        0x7FF0000000000000ull, 0x7FF8000000000000ull, 0x0000000000000001ull,
        0x8000000000000000ull, 0x3FF0000000000001ull, 0x0000000000000000ull
    };
    int kind = n % 6;
    if (kind == 0)
        return nc_float_plain(0.0f, 4096.0f);
    if (kind == 1)
        return -nc_float_plain(0.0f, 4096.0f);
    if (kind == 5) {
        double d;
        uint64_t bits = doubles[(n / 6) % 6];
        memcpy(&d, &bits, 8);
        return (float)d;
    }
    return specials[(n / 6) % 8];
}

static void run_priority(int n)
{
    nc_seed((uint64_t)n * 7919u + 13u);
    nc_set_mxcsr(0x1F80u | ((unsigned)(n % 4) << 13) | ((n / 4) % 2 ? 0x8000u : 0u));
    float distance = priority_distance(n);
    unsigned int result = priority_of(distance);
    uint32_t status = nc_get_mxcsr();
    nc_set_mxcsr(0x1F80u);
    nc_line("p n%d d%08x r%08x csr%08x", n, (unsigned)distance, result, status);
}

/* ---- peer catch-up (0x140106160) -------------------------------------- */

static void run_catchup(int n)
{
    nc_seed((uint64_t)n * 104729u + 5u);
    int peer = (n % 9 == 0) ? (int)(n / 9 % 3) - 1 : (int)nc_rand_below(4);
    int32_t now = (n % 23 == 0) ? -192 : (n % 23 == 1) ? 191 : (int32_t)nc_rand_below(4096);
    int32_t last = (n % 17 == 0) ? -1 : (n % 17 == 1) ? (int32_t)nc_rand_below(4096) - 2048
                                                     : (int32_t)nc_rand_below(512);
    replication_now = now;
    replication_peer_last_tick(peer) = last;
    /* Dirty masks: scattered, all clear, all set, or one set word. */
    int mode = n % 7;
    for (int slot_i = 0; slot_i < 8; slot_i++) {
        uint32_t *masks = &SR_GLOBAL(uint32_t, 0x1A8E477C0ULL
                                     + NET_REPLICATION_PEER_STRIDE * (uint64_t)(int64_t)peer
                                     + 0x160ULL * (uint64_t)slot_i);
        for (int w = 0; w < 0x58; w++) {
            uint32_t word;
            if (mode == 0)
                word = (uint32_t)nc_rand();
            else if (mode == 1)
                word = 0;
            else if (mode == 2)
                word = 0xFFFFFFFFu;
            else
                word = (w % 9 == (n / 7) % 9) ? 0xFFFFFFFFu : 0u;
            masks[w] = word;
        }
    }
    /* Owed words and snapshots: garbage that must be overwritten or left. */
    int garbage = n % 11 == 0;
    for (int i = 0; i < 512; i++) {
        ReplicationBlockOwed *block = replication_peer_block(peer, i);
        ReplicationHumanOwed *human = replication_peer_human(peer, i);
        ReplicationItemOwed *item = replication_peer_item(peer, i);
        ReplicationUnknownOwed *unknown = replication_peer_unknown(peer, i);
        if (garbage || (i % 5) == (n / 11) % 5) {
            block->unknown_0 = (int32_t)nc_rand();
            block->unknown_4 = (int32_t)nc_rand();
            human->unknown_0 = (int32_t)nc_rand();
            human->unknown_4 = (int32_t)nc_rand();
            human->tick = (int32_t)nc_rand();
            item->unknown_0 = (int32_t)nc_rand();
            item->tick = (int32_t)nc_rand();
            unknown->unknown_0 = (int32_t)nc_rand();
            unknown->unknown_4 = (int32_t)nc_rand();
            unknown->tick = (int32_t)nc_rand();
        }
    }
    for (int slot_i = 0; slot_i < 8; slot_i++) {
        for (int i = 0; i < 256; i++) {
            if (garbage || ((i + slot_i) % 13) == (n / 13) % 13) {
                replication_human_snapshot(slot_i, i) = (uint32_t)nc_rand();
                replication_item_snapshot(slot_i, i) = (uint32_t)nc_rand();
                replication_unknown_snapshot(slot_i, i) = (uint32_t)nc_rand();
            }
        }
    }
    uint64_t result = catchup_of(peer);
    /* The mask word the last loop leaves in RAX can equal the snapshot
       word; report it when the composed address stays inside the mapped
       image (a negative peer's mask base wraps out of it; the walks
       themselves never reach there, their entry offsets stay small). */
    uint64_t mask_slot = 88ULL * (uint8_t)last + 47224ULL * (uint64_t)(int64_t)peer;
    uint64_t mask_address = 0x1A8E477C0ULL
                            + NET_REPLICATION_PEER_STRIDE * (uint64_t)(int64_t)peer
                            + 0x160ULL * (uint8_t)last + 4ULL * (mask_slot >> 5);
    uint32_t last_mask = 0;
    if (mask_address >= 0x140000000ULL && mask_address < 0x1B4794000ULL)
        last_mask = SR_GLOBAL(uint32_t, mask_address);
    nc_line("c n%d p%d now%d last%d r%016llx m%08x h%016llx i%016llx",
            n, peer, replication_now, replication_peer_last_tick(peer),
            (unsigned long long)result, last_mask,
            (unsigned long long)nc_hash(replication_peer_human(peer, 0), 0x3000),
            (unsigned long long)nc_hash(replication_peer_item(peer, 0), 0xA000));
    nc_line("c2 n%d b%016llx u%016llx s%016llx",
            n,
            (unsigned long long)nc_hash(replication_peer_block(peer, 0), 0x2000),
            (unsigned long long)nc_hash(replication_peer_unknown(peer, 0), 0x3000),
            (unsigned long long)nc_hash(&SR_GLOBAL(uint32_t, 0x1A8E477C0ULL
                                         + NET_REPLICATION_PEER_STRIDE
                                         * (uint64_t)(int64_t)peer), 0xB00));
}

/* ---- delta encoders (0x14010E6C0, 0x14010E9B0) ------------------------ */

static int32_t delta_reference(int n)
{
    if (n % 19 == 0)
        return 0x10000;                     /* wrap the delta computation */
    if (n % 19 == 1)
        return -0x10000;
    return (int32_t)nc_rand_below(0x20000) - 0x10000;
}

static uint32_t delta_field_value(int n, int32_t reference)
{
    static const int32_t edges[] = {-8, -7, 7, 8, -256, -255, 255, 256, 0, 1, -1,
                                    0x7FFF, -0x8000, 0x10000, -0x10001, 9, -9};
    int kind = n % 5;
    if (kind == 0)
        return (uint32_t)(reference + edges[(n / 5) % 17]);
    if (kind == 1)
        return (uint32_t)nc_rand();
    if (kind == 2)
        return (uint32_t)(reference + (int32_t)nc_rand_below(1024) - 512);
    if (kind == 3)
        return (uint32_t)(int32_t)(nc_rand_below(0x20000u) - 0x10000u);
    return (uint32_t)(reference + edges[(n / 5) % 17] + (int32_t)nc_rand_below(3) - 1);
}

static void run_delta(int op, int n)
{
    nc_seed((uint64_t)op * 5000011u + (uint64_t)n);
    int32_t reference = delta_reference(n);
    uint32_t field = delta_field_value(n, reference);
    uint32_t field_before = field;
    /* Config: the game defaults 4/8 with halves 8/256 and markers on, plus
       off-marker, zero-width and negative-width configurations. */
    switch (n % 6) {
    case 0: set_delta_config(4, 8, 8, 256, 1); break;
    case 1: set_delta_config(4, 8, 8, 256, 0); break;
    case 2: set_delta_config(3, 6, 4, 32, 1); break;
    case 3: set_delta_config(0, 0, 8, 256, 1); break;
    case 4: set_delta_config(4, 8, -1, -1, 1); break;
    default: set_delta_config(12, 16, 2048, 65536, 1); break;
    }
    int use_delta = (n % 4 == 3) ? 0 : 1;
    static const int32_t full_table[8] = {8, 10, 16, 1, 32, 0, 12, 5};
    int32_t full_bits = full_table[(n / 6) % 8];
    if (n % 23 == 0) {
        for (int i = 0; i < NET_BUFFER_SIZE + 16; i++)
            net_write_buffer[i] = (uint8_t)nc_rand();
    }
    /* Cursor choices: ordinary, byte-crossing, the last byte of the
       buffer, and far past it. */
    int cursor = n % 4;
    int32_t write_position = cursor == 0 ? (int32_t)nc_rand_below(60000)
                          : cursor == 1 ? (int32_t)nc_rand_below(60000) + 3
                          : cursor == 2 ? 65535 + (int32_t)nc_rand_below(3) - 1
                          : 65536 + (int32_t)nc_rand_below(32);
    int32_t write_bit = (int32_t)nc_rand_below(14);
    net_write_position = write_position;
    net_write_bit = write_bit;
    nc_set_mxcsr(0x1F80);
    uint64_t result;
    if (op == 0)
        result = encode_delta_of(&field, reference, use_delta, full_bits);
    else
        result = encode_adaptive_of(&field, reference, use_delta, full_bits);
    nc_line("d o%d n%d ref%d f%08x->%08x ud%d fb%d r%016llx w%d/%d csr%08x",
            op, n, reference, field_before, field, use_delta, full_bits,
            (unsigned long long)result, net_write_position, net_write_bit, nc_get_mxcsr());
    nc_line("buf %016llx",
            (unsigned long long)nc_hash(net_write_buffer, NET_BUFFER_SIZE + 16));
}

/* ---- menu-to-shading shim (0x14011C730) ------------------------------- */

static void run_shim(int n)
{
    nc_seed((uint64_t)n * 15485863u + 1u);
    int mode = n % 4;
    net_replication_render_menu_active = mode == 0 ? 1 : mode == 1 ? 0
                                        : (int32_t)nc_rand_below(4) - 1;
    replication_now = (int32_t)nc_rand_below(4096);
    int64_t a2 = (int64_t)nc_rand();
    int64_t a3 = (int64_t)nc_rand();
    int before = stub_calls;
    stub_log[0] = stub_log[1] = 0;
    stub_log[2] = stub_log[3] = 0;
    double result = shim_of(0, a2, a3);
    nc_line("s n%d menu%d a2%016llx a3%016llx r%016llx calls%d %016llx %016llx %016llx",
            n, net_replication_render_menu_active, (unsigned long long)a2,
            (unsigned long long)a3, (unsigned long long)result, stub_calls - before,
            (unsigned long long)stub_log[0], (unsigned long long)stub_log[1],
            (unsigned long long)stub_log[2]);
}

int main(void)
{
    nc_map_image();
    /* The shim's callees, in both builds: the recording stubs land behind
       the original addresses (in the port build the draft's absolute
       symbols reach the same redirects). */
    nc_redirect(0x140198F0B, (void *)stub_menu_relative);
    nc_redirect(0x14013D1B0, (void *)stub_shading_pass);
    nc_redirect(0x14014B2A0, (void *)stub_shading_pass);
    nc_redirect(0x140240C80, (void *)pow_stub);
    /* The encoder globals keep the game defaults in both builds; restore
       them around every case that changes them. */
    nc_save(&net_replication_small_delta_bits, 24);
    nc_save(&net_replication_delta_markers, 4);
    nc_save(&replication_now, 4);
    for (int n = 0; n < nc_cases(2000); n++)
        run_priority(n);
    for (int n = 0; n < nc_cases(2000); n++)
        run_catchup(n);
    for (int op = 0; op < 2; op++)
        for (int n = 0; n < nc_cases(2000); n++)
            run_delta(op, n);
    for (int n = 0; n < nc_cases(2000); n++)
        run_shim(n);
    return 0;
}
