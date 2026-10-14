#include <string.h>
#include <math.h>
#include "nc.h"
#include "area_bounds.h"
#ifdef NC_NATIVE
#define CALL(address, name, signature, ...) ((uint64_t (*) signature)NC_ADDR(address))(__VA_ARGS__)
#elif defined(NC_CLIENT_WRAPPERS)
#define CALL(address, name, signature, ...) ((uint64_t (*) signature)nc_client_wrapper(address))(__VA_ARGS__)
#else
#define CALL(address, name, signature, ...) ((uint64_t)name(__VA_ARGS__))
#endif
int main(void)
{
    static const uint32_t special[]={0,0x80000000,1,0x80000001,0x007FFFFF,0x00800000,
        0x7F7FFFFF,0xFF7FFFFF,0x7F800000,0xFF800000,0x7FC12345,0x7FA12345};
    nc_map_image();
    int cases=nc_cases(3000);
    for(int op=0;op<3;++op) for(int n=0;n<cases;++n) {
        nc_seed((uint64_t)op*100000+n);
        int index=(int)nc_rand_below(op==2?512:16);
        AreaBounds *bounds=op==0?corporation_interior_bounds(index):op==1?corporation_vault_bounds(index):world_region_bounds(index);
        float point[3],margin=nc_float_plain(-10,10);
        for(int k=0;k<3;++k) {
            bounds->lower[k]=nc_float_plain(-1000,1000);
            bounds->upper[k]=bounds->lower[k]+nc_float_plain(0,100);
            point[k]=(bounds->lower[k]+bounds->upper[k])*0.5f;
        }
        int axis=n%3,mode=(n/3)%12;
        if(mode==0) point[axis]=bounds->lower[axis]-margin;
        if(mode==1) point[axis]=nextafterf(bounds->lower[axis]-margin,-INFINITY);
        if(mode==2) point[axis]=margin+bounds->upper[axis];
        if(mode==3) point[axis]=nextafterf(margin+bounds->upper[axis],-INFINITY);
        if(mode==4) memcpy(point+axis,&special[(n/36)%12],4);
        if(mode==5) memcpy(bounds->lower+axis,&special[(n/36)%12],4);
        if(mode==6) memcpy(bounds->upper+axis,&special[(n/36)%12],4);
        if(mode==7) memcpy(&margin,&special[(n/36)%12],4);
        if(mode==8) bounds->lower[axis]=bounds->upper[axis]+1;
        if(mode==9) { point[0]=bounds->lower[0]-100; memcpy(point+2,&special[11],4); }
        if(mode==10) { margin=0; bounds->lower[axis]=-INFINITY; bounds->upper[axis]=INFINITY; }
        if(mode==11) for(int k=0;k<3;++k) point[k]=nc_float(-1000,1000);
        uint64_t before=nc_hash(bounds,sizeof(*bounds));
        uint32_t csr=0x1F80|((n%4)<<13)|(n%5==0?0x8040:0);
        nc_set_mxcsr(csr);
        uint64_t result;
        if(op==0) result=CALL(0x14011B8F0,corporation_contains_point,(const float*,int,float),point,index,margin);
        else if(op==1) result=CALL(0x14011B960,corporation_vault_contains_point,(const float*,int,float),point,index,margin);
        else result=CALL(0x14011B9F0,world_region_contains_point,(int,const float*,float),index,point,margin);
        uint32_t after=nc_get_mxcsr();
        nc_set_mxcsr(0x1F80);
        nc_line("op %d case %d index %d mode %d result %016llx csr %08x bounds %016llx/%016llx point %016llx",op,n,index,mode,(unsigned long long)result,after,
            (unsigned long long)before,(unsigned long long)nc_hash(bounds,sizeof(*bounds)),(unsigned long long)nc_hash(point,sizeof(point)));
    }
    return 0;
}
