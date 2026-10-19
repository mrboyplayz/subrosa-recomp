// NC_WRAPPERS: 1400755F0 1400753C0 140070B90 140075650
#include <string.h>
#include "nc.h"
#include "menu.h"

#ifdef NC_NATIVE
#define push(w,h) ((int64_t (*)(float,float))NC_ADDR(0x1400755F0))(w,h)
#define pop() ((uint64_t (*)(void))NC_ADDR(0x1400753C0))()
#define begin() ((uint64_t (*)(void))NC_ADDR(0x140070B90))()
#define reset() ((void *(*)(void))NC_ADDR(0x140075650))()
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_1400755F0(float,float),sub_1400753C0(void),sub_140070B90(void);
void *sub_140075650(void);
#define push sub_1400755F0
#define pop sub_1400753C0
#define begin sub_140070B90
#define reset sub_140075650
#else
#define push menu_push_size
#define pop menu_pop_size
#define begin menu_begin_grid
#define reset menu_reset
#endif

int main(void)
{
    static const int depths[]={-2,-1,0,1,2,15,16,17,32};
    unsigned char *state=NC_ADDR(0x150F61040);
    size_t length=0x15104AE80ULL-0x150F61040ULL;
    nc_map_image();
    for(int op=0;op<4;op++) for(int n=0;n<nc_cases(1000);n++) {
        nc_seed(n+op*100000);
        for(size_t i=0;i<length;i+=8) {uint64_t word=nc_rand();memcpy(state+i,&word,8);}
        menu_size_depth=depths[n%9];
        float w,h;uint32_t wb=(uint32_t)nc_rand(),hb=(uint32_t)nc_rand();
        memcpy(&w,&wb,4);memcpy(&h,&hb,4);
        /* A depth -1 push overwrites its count with the previous height;
           no further stack operation uses that deliberately arbitrary word. */
        uint32_t csr=0x1f80|((n%4)<<13)|((n/4%2)<<6)|((n/8%2)<<15);
        nc_set_mxcsr(csr);
        uint64_t result=op==0?(uint64_t)push(w,h):op==1?pop():op==2?begin():(uintptr_t)reset();
        nc_line("menustate %d %d %016llx %08x %016llx",op,n,(unsigned long long)result,
            nc_get_mxcsr(),(unsigned long long)nc_hash(state,length));
    }
    return 0;
}
