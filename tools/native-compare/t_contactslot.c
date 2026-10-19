// NC_WRAPPERS: 140048090
#include <string.h>
#include "nc.h"
#include "collision.h"
#ifdef NC_NATIVE
#define free_slot(p) ((uint64_t (*)(const CollisionShapeContacts *))NC_ADDR(0x140048090))(p)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_140048090(long long);
#define free_slot(p) sub_140048090((long long)(uintptr_t)(p))
#else
#define free_slot collision_find_free_contact
#endif
int main(void)
{
    nc_map_image();
    for(int n=0;n<nc_cases(3000);n++) {
        nc_seed(n);CollisionShapeContacts shape;
        for(size_t k=0;k<sizeof(shape);k+=4) {uint32_t word=(uint32_t)nc_rand();memcpy((char *)&shape+k,&word,4);}
        int first=n%2?n%65:(int)nc_rand_below(65);
        for(int k=0;k<64;k++) shape.slots[k].kind=k<first?(int32_t)(nc_rand()|1):0;
        uint32_t csr=0x1f80|((n%4)<<13)|((n/4%2)<<6)|((n/8%2)<<15);
        nc_set_mxcsr(csr);
        uint64_t result=free_slot(&shape);
        nc_line("contactslot %d %016llx %08x %016llx",n,(unsigned long long)result,nc_get_mxcsr(),
            (unsigned long long)nc_hash(&shape,sizeof(shape)));
    }
    return 0;
}
