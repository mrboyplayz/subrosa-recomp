// NC_WRAPPERS: 140077B30
#include <string.h>
#include "nc.h"
#include "collision.h"
#ifdef NC_NATIVE
#define intersect(p,n,t,a,b,c) ((uint64_t (*)(float *,const float *,float *,const float *,const float *,const float *))NC_ADDR(0x140077B30))(p,n,t,a,b,c)
#elif defined(NC_CLIENT_WRAPPERS)
long long sr_collision_segment_plane(float *,float *,float *,float *,float *,float *);
#define intersect sr_collision_segment_plane
#else
#define intersect collision_segment_plane
#endif
int main(void)
{
    nc_map_image();
    int cases=nc_cases(12000);
    for(int n=0;n<cases+32;n++) {
        nc_set_mxcsr(0x1f80);nc_seed(n);
        float arena[48];for(int k=0;k<48;k++) arena[k]=nc_float(-1000,1000);
        float *point=arena,*normal=arena+6,*fraction=arena+10;
        float *from=arena+12,*to=arena+18,*plane=arena+24;
        if(n%5==0) memcpy(to,from,12);
        if(n%5==1) memcpy(plane,from,12);
        if(n%5==2) memset(normal,0,12);
        if(n%5==3) {
            normal[0]=0;normal[1]=1;normal[2]=0;
            from[1]=1;to[1]=1;plane[1]=0;
        }
        switch(n%12) {
        case 1:point=from;break;case 2:point=from+1;break;case 3:point=to;break;
        case 4:point=normal;break;case 5:fraction=from;break;case 6:fraction=normal;break;
        case 7:fraction=from+1;break;case 8:fraction=to;break;case 9:fraction=point;break;
        case 10:fraction=point+1;break;case 11:point=plane;break;
        }
        if(n>=cases) {
            /* The end distance underflows, then *fraction clears the normal
               component before the denominator can repeat that product. */
            memset(arena,0,sizeof(arena));
            uint32_t minimum_normal=0x00800000;
            memcpy(normal,&minimum_normal,4);memcpy(to,&minimum_normal,4);
            fraction=normal;
        }
        uint32_t csr=0x1f80|((n%4)<<13)|((n/4%2)<<6)|((n/8%2)<<15);
        nc_set_mxcsr(csr);
        uint64_t result=intersect(point,normal,fraction,from,to,plane);
        uint32_t status=nc_get_mxcsr();
        for(int k=0;k<48;k++) {
            uint32_t bits;memcpy(&bits,arena+k,4);
            if((bits&0x7fffffff)>0x7f800000) {bits=0x7fc00000;memcpy(arena+k,&bits,4);}
        }
        nc_line("segmentplane %d %016llx %08x %016llx",n,(unsigned long long)result,status,
            (unsigned long long)nc_hash(arena,sizeof(arena)));
    }
    return 0;
}
