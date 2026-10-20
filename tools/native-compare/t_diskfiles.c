// NC_WRAPPERS: 14004C960 140080690
#include <string.h>
#include "nc.h"
#include "disk.h"
#ifdef NC_NATIVE
#define CALL(address, name, signature, ...) ((uint64_t (*) signature)NC_ADDR(address))(__VA_ARGS__)
#else
#ifdef NC_CLIENT_WRAPPERS
long long sr_disk_for_item_drive(int,int);
long long sr_disk_add_file(int,uint32_t,char *,uint32_t);
#define disk_for_item_drive sr_disk_for_item_drive
#define disk_add_file(d,p,n,c) sr_disk_add_file(d,p,(char *)(n),c)
#endif
#define CALL(address, name, signature, ...) ((uint64_t)name(__VA_ARGS__))
#endif
int main(void)
{
    static const int counts[]={0,1,2,127,254,255,256,257};
    static const int lengths[]={0,1,11,15,16,17,23,24,31,63};
    static const int drives[]={0,1,2,3,-1,0x7FFFFFFF};
    nc_map_image();
    int cases=nc_cases(500);
    for(int n=0;n<cases;++n) {
        nc_seed(n);
        int disk=(int)nc_rand_below(DISK_CAPACITY-2)+1;
        memset(&disk_records[disk-1],0xA5,3*sizeof(DiskRecord));
        int count=counts[n%8];
        *disk_file_count(disk)=count;
        char name[128];
        int length=lengths[(n/8)%10];
        for(int k=0;k<length;++k) name[k]=(char)('A'+nc_rand_below(26));
        name[length]=0;
        const char *source=name;
        if(n%7==1 && count<256) {
            /* Destination below source: native forward-copy overlap. */
            source=disk_file_name(disk,count)+1;
            memcpy((char *)source,name,length+1);
        }
        if(n%7==2 && count<256) {
            source=(char *)&disk_file(disk,count)->content;
            /* content=0 causes the source's first byte to change before copy. */
        }
        uint32_t content=n%7==2 ? 0 : (uint32_t)nc_rand();
        if(count>=DISK_ENTRY_CAPACITY) source=NULL;
        uint64_t result=CALL(0x140080690,disk_add_file,(int,uint32_t,const char*,uint32_t),disk,(uint32_t)nc_rand(),source,content);
        nc_line("file %d result %016llx records %016llx",n,(unsigned long long)result,(unsigned long long)nc_hash(&disk_records[disk-1],3*sizeof(DiskRecord)));

        int item=(int)nc_rand_below(WORLD_ITEM_CAPACITY), child=(item+1)%WORLD_ITEM_CAPACITY;
        memset(&world_items[item],0xA5,sizeof(WorldItem));
        *item_disk_index(item)=(uint32_t)nc_rand();
        *item_disk_index(child)=(uint32_t)nc_rand();
        world_items[item].child_count=(n/6)%4-1;
        world_items[item].children[0]=child;
        int drive=drives[n%6];
        result=CALL(0x14004C960,disk_for_item_drive,(int,int),item,drive);
        nc_line("drive %d mode %d count %d result %016llx item %016llx child %08x",n,drive,world_items[item].child_count,(unsigned long long)result,
            (unsigned long long)nc_hash(&world_items[item],sizeof(WorldItem)),*item_disk_index(child));
    }
    return 0;
}
