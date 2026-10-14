/* First-free allocation, zero-extended failure, occupied flags of either
 * sign, last slot, complete disk clearing and partial text-record writes. */
#include <string.h>
#include "nc.h"
#include "disk.h"
#include "item.h"
#include "frame.h"
#ifdef NC_NATIVE
#define CALL(address, name, signature, ...) ((uint64_t (*) signature)NC_ADDR(address))(__VA_ARGS__)
#elif defined(NC_CLIENT_WRAPPERS)
#define CALL(address, name, signature, ...) ((uint64_t (*) signature)nc_client_wrapper(address))(__VA_ARGS__)
#else
#define CALL(address, name, signature, ...) ((uint64_t)name(__VA_ARGS__))
#endif

int main(void)
{
    static const int holes[] = {0,1,2,17,1023,1024,16383,16384};
    static const int lengths[] = {0,1,31,63,64,65,127};
    nc_map_image();
    int cases = nc_cases(1000);
    for (int op = 0; op < 2; op++) for (int n = 0; n < cases; n++) {
        nc_seed((uint64_t)op * 100000u + (uint64_t)n);
        int capacity = op ? ITEM_LINK_RECORD_CAPACITY : DISK_CAPACITY;
        int first = holes[n % 8];
        if (first > capacity) first = capacity;
        int slot = first == capacity ? capacity - 1 : first;
        if (op) {
            for (int k = 0; k < capacity; k++) item_link_records[k].used = k < first ? (int32_t)(nc_rand() | 1u) : 0;
            memset((uint8_t *)&item_link_records[slot]+4, 0xA5, sizeof(ItemLinkRecord)-4);
        } else {
            for (int k = 0; k < capacity; k++) disk_records[k].used = k < first ? (int32_t)(nc_rand() | 1u) : 0;
            memset((uint8_t *)&disk_records[slot]+4, 0xA5, sizeof(DiskRecord)-4);
        }
        int item = (int)nc_rand_below(WORLD_ITEM_CAPACITY);
        uint32_t line = nc_rand_below(32) | ((uint32_t)nc_rand_below(4) << 30);
        char *source = item_record_text_chunk(item, line);
        for (int k = 0; k < 64; k++) source[k] = (char)nc_rand();
        game_tick = (int32_t)nc_rand();
        uint64_t result;
        if (op) result = CALL(0x140051170, item_allocate_text_record, (int,uint32_t,int), item,line,lengths[n%7]);
        else result = CALL(0x140050EF0, disk_create, (uint32_t), (uint32_t)nc_rand());
        nc_line("op %d case %d result %016llx table %016llx source %016llx",op,n,(unsigned long long)result,
                (unsigned long long)(op ? nc_hash(item_link_records,capacity*sizeof(ItemLinkRecord))
                                       : nc_hash(disk_records,capacity*sizeof(DiskRecord))),
                (unsigned long long)nc_hash(source,64));
    }
    return 0;
}
