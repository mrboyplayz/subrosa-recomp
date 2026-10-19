// NC_WRAPPERS: 140050EF0
#include <string.h>
#include "nc.h"
#include "disk.h"

#ifdef NC_NATIVE
#define create(v) ((uint64_t (*)(uint32_t))NC_ADDR(0x140050EF0))(v)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_140050EF0(uint32_t);
#define create sub_140050EF0
#else
#define create disk_create
#endif

int main(void)
{
    static const int holes[]={0,1,2,127,1022,1023,1024};
    nc_map_image();
    for(int n=0;n<nc_cases(500);n++) {
        nc_seed(n);
        int first=n%2?holes[(n/2)%7]:(int)nc_rand_below(1025);
        memset(disk_records,0xA5,DISK_CAPACITY*sizeof(DiskRecord));
        for(int i=0;i<DISK_CAPACITY;i++) disk_records[i].used=i<first?(int32_t)(nc_rand()|1):0;
        uint32_t value=(uint32_t)nc_rand();
        nc_set_mxcsr(0x1F80);
        uint64_t result=create(value);
        nc_line("disk %d %d %016llx %016llx %08x",n,first,(unsigned long long)result,
            (unsigned long long)nc_hash(disk_records,DISK_CAPACITY*sizeof(DiskRecord)),nc_get_mxcsr());
    }
    return 0;
}
