/* Replication: per-peer request rings (value and event appends, full-ring
   and full-slot-table refusals, a negative head whose record words land on
   the ring cursors) and the item-state stream twins, written and read back
   through mirrors of the write cursor. Item reads that target a caller word
   keep that word on the stack in the original, so the read cursors stay
   sufficient for the ten-bit reads. */
// NC_WRAPPERS: 140105AB0 1401060F0 14010EF40 14018DB20
#include <string.h>
#include "nc.h"
#include "net_bits.h"
#include "net_replication.h"

#ifdef NC_NATIVE
#define queue_event(p,a,b,c) ((uint64_t (*)(int, uint32_t, uint32_t, uint32_t))NC_ADDR(0x140105AB0))(p,a,b,c)
#define track_value(p,v) ((uint64_t (*)(int, uint32_t))NC_ADDR(0x1401060F0))(p,v)
#define write_item(i) ((uint64_t (*)(int))NC_ADDR(0x14010EF40))(i)
#define read_item(i) ((uint64_t (*)(int))NC_ADDR(0x14018DB20))(i)
#elif defined(NC_CLIENT_WRAPPERS)
unsigned int *sr_net_replication_queue_event(int, unsigned int, unsigned int, unsigned int);
long long sr_net_replication_track_value(int, unsigned int);
long long sr_net_replication_write_item_state(int);
long long sr_net_replication_read_item_state(int);
#define queue_event(p,a,b,c) ((uint64_t)(uintptr_t)sr_net_replication_queue_event(p,a,b,c))
#define track_value(p,v) ((uint64_t)sr_net_replication_track_value(p,v))
#define write_item(i) ((uint64_t)sr_net_replication_write_item_state(i))
#define read_item(i) ((uint64_t)sr_net_replication_read_item_state(i))
#else
#define queue_event net_replication_queue_event
#define track_value net_replication_track_value
#define write_item net_replication_write_item_state
#define read_item net_replication_read_item_state
#endif

static int32_t seed_word(int n)
{
    if (n % 17 == 0)
        return -1;                                     /* record lands on the ring cursors */
    if (n % 17 == 1)
        return (int32_t)nc_rand_below(4096) - 2048;
    if (n % 17 == 2)
        return 2047;
    return (int32_t)nc_rand_below(80);
}

static void run_ring(int op, int n)
{
    nc_seed((uint64_t)op * 5000003u + (uint64_t)n);
    int peer = (n % 9 == 0) ? (int)(n / 9 % 3) - 1 : (int)nc_rand_below(4);
    int32_t head_seed = seed_word(n);
    replication_ring_head(peer) = head_seed;
    int32_t limit;
    switch (n % 5) {
    case 0: limit = (int32_t)(((uint32_t)head_seed + 1u) & 0x7FFu); break;   /* ring full */
    case 1: limit = (int32_t)(((uint32_t)head_seed + 2u) & 0x7FFu); break;   /* one word of room */
    case 2: limit = (int32_t)nc_rand_below(2048) * (nc_chance(50) ? -1 : 1); break;
    default: limit = (int32_t)nc_rand_below(2048); break;
    }
    if (n % 7 == 0)
        limit = -1;                                    /* never full: the walk matters */
    replication_ring_limit(peer) = limit;
    /* Slot table: all busy (the walk must exhaust), all free, or scattered. */
    int busy_mode = n % 7;
    for (int i = 0; i < 1024; i++) {
        ReplicationItemSlot *slot = replication_item_slot(peer, i);
        slot->pending = busy_mode == 0 ? 1 : busy_mode == 1 ? 0
                        : (int32_t)(((uint32_t)i * 2654435761u >> 28) & 1u);
        for (int k = 0; k < 3; k++)
            slot->unknown_4[k] = (n % 16 == 0) ? (int32_t)nc_rand() : 0;
    }
    uint32_t value = (uint32_t)nc_rand();
    uint64_t result;
    if (op == 0)
        result = track_value(peer, value);
    else {
        /* With a negative head the first event word lands on the head
           field; the original then addresses its next record from that
           word. Keep it small so the address stays inside the image. */
        uint32_t first = value;
        if (head_seed < 0)
            first = (uint32_t)(nc_rand_below(16000000) - 8000000);
        result = queue_event(peer, first, (uint32_t)nc_rand(), (uint32_t)nc_rand());
    }
    int32_t head = replication_ring_head(peer);
    nc_line("%d %d %016llx h%d l%d e%08x %08x %08x %08x %08x",
            op, n, (unsigned long long)result, head, replication_ring_limit(peer),
            (uint32_t)replication_ring_entry(peer, head_seed)->kind,
            (uint32_t)replication_ring_entry(peer, head_seed)->index,
            (uint32_t)replication_ring_entry(peer, head_seed)->arg1,
            (uint32_t)replication_ring_entry(peer, head_seed)->arg2,
            (uint32_t)replication_ring_entry(peer, head_seed)->arg3);
    nc_line("state %016llx %016llx",
            (unsigned long long)nc_hash(replication_item_slot(peer, 0), 0x4000),
            (unsigned long long)nc_hash(replication_ring_entry(peer, 0), 0xA000));
}

static void run_item(int op, int n)
{
    nc_seed((uint64_t)op * 5000003u + (uint64_t)n);
    int item = (n % 11 == 0) ? (int)nc_rand_below(700) - 3 : (int)nc_rand_below(64);
    WorldItem *record = &world_items[item];
    uint32_t type = (n % 3 == 2) ? 39 : (n % 3 == 1 ? nc_rand_below(256) : nc_rand_below(100));
    record->type = (int32_t)type;
    record->parent = nc_chance(25) ? -1 : (int32_t)nc_rand_below(1022);
    record->holder = nc_chance(25) ? -1 : (int32_t)nc_rand_below(1022);
    record->slot = (int32_t)nc_rand_below(16);
    item_unknown_368(item) = nc_rand_below(32);       /* touched only for type 39 */
    item_unknown_36c(item) = (int32_t)nc_rand_below(32);
    if (n % 23 == 0 && op == 2) {
        for (int i = 0; i < NET_BUFFER_SIZE + 16; i++)
            net_write_buffer[i] = (uint8_t)nc_rand();
    }
    if (n % 7 == 0 && op == 3) {
        /* Type 39 with index sentinels: two five-bit words must follow. */
        for (int i = 0; i < NET_BUFFER_SIZE + 16; i++)
            net_read_buffer[i] = i < 8 ? (uint8_t)(i & 1 ? 39 : 0xFF) : (uint8_t)nc_rand();
        net_read_position = 0;
        net_read_bit = 0;
    } else if (n % 47 == 3 && op == 3) {
        for (int i = 0; i < NET_BUFFER_SIZE + 16; i++)
            net_read_buffer[i] = 0xFF;
    } else if (n % 13 == 0 && op == 3) {
        for (int i = 0; i < NET_BUFFER_SIZE + 16; i++)
            net_read_buffer[i] = (uint8_t)nc_rand();
    }
    if (op == 2) {
        int write_position = n % 5 == 0 ? 65535 + (int)nc_rand_below(3) - 1 : (int)nc_rand_below(60000);
        int write_bit = (int)nc_rand_below(14);
        net_write_position = write_position;
        net_write_bit = write_bit;
        nc_set_mxcsr(0x1F80);
        uint64_t result = write_item(item);
        uint32_t status = nc_get_mxcsr();
        nc_set_mxcsr(0x1F80);
        /* Read back from the write's start: a successful round trip must
           restore the same fields. Only the read cursors are lengthened. */
        net_read_position = write_position < 65530 ? write_position : 65530;
        net_read_bit = write_bit;
        net_read_length = NET_BUFFER_SIZE;
        uint64_t back = read_item(item);
        nc_line("%d %d %016llx/%016llx t %08x %08x %08x %08x %08x %08x r%d/%d w%d/%d %08x",
                op, n, (unsigned long long)result, (unsigned long long)back,
                (uint32_t)record->type, (uint32_t)record->parent, (uint32_t)record->holder,
                (uint32_t)record->slot, item_unknown_368(item), (uint32_t)item_unknown_36c(item),
                net_read_position, net_read_bit, net_write_position, net_write_bit, status);
    } else {
        if (n % 7 != 0 && n % 47 != 3 && n % 13 != 0) {
            net_read_position = (n % 4 == 0) ? (int)nc_rand_below(65530) : 0;
            net_read_bit = (n % 4 == 1) ? (int)nc_rand_below(14) : 0;
        }
        net_read_length = NET_BUFFER_SIZE;
        nc_set_mxcsr(0x1F80);
        uint64_t result = read_item(item);
        uint32_t status = nc_get_mxcsr();
        nc_set_mxcsr(0x1F80);
        nc_line("%d %d %016llx t %08x %08x %08x %08x %08x %08x r%d/%d/%d %08x",
                op, n, (unsigned long long)result,
                (uint32_t)record->type, (uint32_t)record->parent, (uint32_t)record->holder,
                (uint32_t)record->slot, item_unknown_368(item), (uint32_t)item_unknown_36c(item),
                net_read_position, net_read_bit, net_read_length, status);
    }
    nc_line("buffers %016llx %016llx",
            (unsigned long long)nc_hash(net_write_buffer, NET_BUFFER_SIZE + 16),
            (unsigned long long)nc_hash(net_read_buffer, NET_BUFFER_SIZE + 16));
}

int main(void)
{
    nc_map_image();
    for (int op = 0; op < 2; op++)
        for (int n = 0; n < nc_cases(2000); n++)
            run_ring(op, n);
    for (int op = 2; op < 4; op++)
        for (int n = 0; n < nc_cases(2000); n++)
            run_item(op, n);
    return 0;
}
