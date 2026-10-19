// NC_WRAPPERS: 14002CF10 14002D2D0 14011C640 14011C6B0
#include <string.h>
#include "nc.h"
#include "physics_kernels.h"

#ifdef NC_NATIVE
#define inertia(o,v,b,d) ((const float *(*)(float *,const float *,uint64_t,const float *,const float *))NC_ADDR(0x14002CF10))(o,v,0,b,d)
#define inertia4(o,v,b,d) ((const float *(*)(float *,const float *,uint64_t,const float *,const float *))NC_ADDR(0x14002D2D0))(o,v,0,b,d)
#define exit_distance(o,d,r) ((float (*)(const float *,const float *,float))NC_ADDR(0x14011C640))(o,d,r)
#define entry_distance(o,d,r) ((__m128 (*)(const float *,const float *,float))NC_ADDR(0x14011C6B0))(o,d,r)
#elif defined(NC_CLIENT_WRAPPERS)
float *sub_14002CF10(long long,float *,long long,float *,float *);
__m128 *sub_14002D2D0(__m128 *,__m128 *,long long,long long,__m128 *);
float sub_14011C640(float *,float *,float);
__m128 sub_14011C6B0(long long,float *,float);
#define inertia(o,v,b,d) sub_14002CF10((long long)(uintptr_t)(o),(v),0,(b),(d))
#define inertia4(o,v,b,d) ((const float *)(void *)sub_14002D2D0((__m128 *)(o),(__m128 *)(v),0,(long long)(uintptr_t)(b),(__m128 *)(d)))
#define exit_distance sub_14011C640
#define entry_distance(o,d,r) sub_14011C6B0((long long)(uintptr_t)(o),(d),(r))
#else
#define inertia physics_apply_inverse_inertia
#define inertia4 physics_apply_inverse_inertia4
#define exit_distance physics_sphere_exit_distance
#define entry_distance physics_sphere_entry_distance
#endif

static uint32_t control(int n)
{
    return 0x1F80u|((n&3u)<<13)|((n&4u)?0x40u:0)|((n&8u)?0x8000u:0);
}

static void tensor(int n,int simd)
{
    _Alignas(16) float arena[64];
    nc_set_mxcsr(0x1F80);
    nc_seed((uint64_t)n*2+simd);
    for(int i=0;i<64;i++) arena[i]=nc_float(-10.0f,10.0f);
    float *out=arena+4*((n/9)%8);
    float *v=arena+4*(n%9);
    float *basis=arena+16+(n/72)%12;
    float *d=arena+4*((n/864)%9);
    nc_set_mxcsr(control(n));
    const float *result=simd?inertia4(out,v,basis,d):inertia(out,v,basis,d);
    uint32_t status=nc_get_mxcsr();
    nc_set_mxcsr(0x1F80);
    nc_line("inertia %d %d %d %08x",n,simd,result==d,status);
    nc_floats("arena",arena,64);
}

static void sphere(int n)
{
    nc_set_mxcsr(0x1F80);
    nc_seed(0x300000u+n);
    float arena[9],result[4];
    for(int i=0;i<9;i++) arena[i]=nc_float(-100.0f,100.0f);
    float radius=nc_float(-50.0f,50.0f);
    float *v=arena+(n%4);
    if(n<256) {
        for(int i=0;i<9;i++) arena[i]=0;
        v=arena+3;
        v[n%3]=1;
        arena[n%3]=(int)((n/3)%5)-2;
        radius=(float)((n/15)%4);
    }
    nc_set_mxcsr(control(n));
    float exit=exit_distance(arena,v,radius);
    uint32_t status=nc_get_mxcsr();
    nc_set_mxcsr(control(n));
    _mm_storeu_ps(result,entry_distance(arena,v,radius));
    uint32_t entry_status=nc_get_mxcsr();
    nc_set_mxcsr(0x1F80);
    nc_line("sphere %d %08x %08x",n,status,entry_status);
    nc_floats("exit",&exit,1);
    nc_floats("entry",result,4);
    nc_floats("inputs",arena,9);
}

int main(void)
{
    nc_map_image();
    for(int n=0;n<nc_cases(6000);n++) { tensor(n,0); tensor(n,1); sphere(n); }
    return 0;
}
