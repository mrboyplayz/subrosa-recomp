// NC_WRAPPERS: 14007CA00 14007D0B0
#include <string.h>
#include "nc.h"
#include "math3d.h"

#ifdef NC_NATIVE
#define transpose(o,m) ((void (*)(float *,const float *))NC_ADDR(0x14007CA00))(o,m)
#define rotate(v,a) ((uint64_t (*)(int32_t *,uint16_t))NC_ADDR(0x14007D0B0))(v,a)
#elif defined(NC_CLIENT_WRAPPERS)
void sub_14007CA00(uint32_t *,int32_t *);
long long sub_14007D0B0(int32_t *,uint16_t);
#define transpose(o,m) sub_14007CA00((uint32_t *)(o),(int32_t *)(m))
#define rotate sub_14007D0B0
#else
#define transpose math_mat3_transpose
#define rotate math_fixed_vec2_rotate
#endif
int main(void)
{
    static const int32_t edges[]={0,1,-1,32767,32768,65535,65536,-32768,INT32_MIN,INT32_MAX};
    static const uint16_t angles[]={0,1,16383,16384,16385,32767,32768,49151,49152,65535};
    nc_map_image();
    for(int op=0;op<2;op++) for(int n=0;n<nc_cases(12000);n++) {
        nc_seed(n+op*100000);
        uint32_t arena[40];for(int k=0;k<40;k++) arena[k]=(uint32_t)nc_rand();
        int source=10,dest=source+(n%19)-9;
        int32_t vector[2]={n%3?edges[n/3%10]:(int32_t)nc_rand(),
                            n%3?edges[n/30%10]:(int32_t)nc_rand()};
        uint16_t angle=n%3?angles[n/300%10]:(uint16_t)nc_rand();
        uint32_t csr=0x1f80|((n%4)<<13)|((n/4%2)<<6)|((n/8%2)<<15);
        nc_set_mxcsr(csr);
        uint64_t result=0;
        if(op) result=rotate(vector,angle);else transpose((float *)(arena+dest),(const float *)(arena+source));
        nc_line("integergeom %d %d %016llx %08x %08x %08x %016llx",op,n,
            (unsigned long long)result,(uint32_t)vector[0],(uint32_t)vector[1],nc_get_mxcsr(),
            (unsigned long long)nc_hash(arena,sizeof(arena)));
    }
    return 0;
}
