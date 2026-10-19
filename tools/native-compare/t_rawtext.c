// NC_WRAPPERS: 140051170
#include <string.h>
#include "nc.h"
#include "item.h"
#include "frame.h"

#ifdef NC_NATIVE
#define allocate(i,l,n) ((uint64_t (*)(int,uint32_t,int))NC_ADDR(0x140051170))(i,l,n)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_140051170(int,uint32_t,int);
#define allocate sub_140051170
#else
#define allocate item_allocate_text_record
#endif

int main(void)
{
    static const int holes[]={0,1,2,17,1023,1024,16383,16384};
    static const int lengths[]={0,1,31,63,64,65,127};
    nc_map_image();
    for(int n=0;n<nc_cases(1000);n++) {
        nc_seed(n);
        int first=n%17==0?6:holes[n%8];
        int slot=first==ITEM_LINK_RECORD_CAPACITY?first-1:first;
        for(int k=0;k<ITEM_LINK_RECORD_CAPACITY;k++)
            item_link_records[k].used=k<first?(int32_t)(nc_rand()|1):0;
        memset((uint8_t *)&item_link_records[slot]+4,0xA5,sizeof(ItemLinkRecord)-4);
        int item=(int)nc_rand_below(WORLD_ITEM_CAPACITY);
        uint32_t line=nc_rand_below(32)|((uint32_t)nc_rand_below(4)<<30);
        if(n%17==0) {
            /* A valid raw source overlapping the destination record. */
            intptr_t difference=(intptr_t)(uintptr_t)&item_link_records[6]
                -(intptr_t)(uintptr_t)item_record_text_chunk(item,0);
            if(difference%64) return 3;
            line=(uint32_t)(difference/64);
        }
        char *source=item_record_text_chunk(item,line);
        for(int k=0;k<64;k++) source[k]=(char)nc_rand();
        item_link_records[slot].used=first==ITEM_LINK_RECORD_CAPACITY?(int32_t)(nc_rand()|1):0;
        game_tick=(int32_t)nc_rand();
        nc_set_mxcsr(0x1F80);
        uint64_t result=allocate(item,line,lengths[n%7]);
        nc_line("raw %d %016llx %016llx %016llx %08x",n,(unsigned long long)result,
            (unsigned long long)nc_hash(item_link_records,ITEM_LINK_RECORD_CAPACITY*sizeof(ItemLinkRecord)),
            (unsigned long long)nc_hash(source,64),nc_get_mxcsr());
    }
    return 0;
}
