// NC_WRAPPERS: 140075460 140075340
#include <string.h>
#include "nc.h"
#include "menu.h"
#include "camera.h"
#include "gl.h"

#ifdef NC_NATIVE
#define push(x,y,w,h) ((uint64_t (*)(float,float,float,float))NC_ADDR(0x140075460))(x,y,w,h)
#define pop() ((void (*)(void))NC_ADDR(0x140075340))()
#elif defined(NC_CLIENT_WRAPPERS)
long long sr_menu_push_clip(float,float,float,float);
void sr_menu_pop_clip(void);
#define push sr_menu_push_clip
#define pop sr_menu_pop_clip
#else
#define push menu_push_clip
#define pop menu_pop_clip
#endif
static void enable(GLenum cap) {nc_line("enable %u",cap);}
static void disable(GLenum cap) {nc_line("disable %u",cap);}
static void scissor(GLint x,GLint y,GLsizei w,GLsizei h) {nc_line("scissor %d %d %d %d",x,y,w,h);}
static void normalize(float *p) {
    uint32_t bits;memcpy(&bits,p,4);
    if((bits&0x7fffffff)>0x7f800000) {bits=0x7fc00000;memcpy(p,&bits,4);}
}
static uint64_t hash_state(int changed)
{
    unsigned char copy[0x400];memcpy(copy,NC_ADDR(0x151042700),sizeof(copy));
    if(changed>=-1 && changed<32)
        for(int k=0;k<4;k++) normalize((float *)(copy+0x10+changed*16+k*4));
    for(int k=0;k<4;k++) normalize((float *)(copy+0x31c+k*4));
    return nc_hash(copy,sizeof(copy));
}
int main(void)
{
    static const int depths[]={-1,0,1,2,15,16,17,31};
    nc_map_image();
    *(void **)NC_ADDR(0x144980D68)=enable;
    *(void **)NC_ADDR(0x144980D60)=disable;
    *(void **)NC_ADDR(0x144980CE8)=scissor;
    for(int op=0;op<2;op++) for(int n=0;n<nc_cases(5000);n++) {
        nc_set_mxcsr(0x1f80);nc_seed(n+op*100000);
        for(int k=0;k<0x400;k+=4) {uint32_t b=(uint32_t)nc_rand();memcpy((char *)NC_ADDR(0x151042700)+k,&b,4);}
        menu_clip_depth=depths[n%8];
        for(int k=0;k<4;k++) menu_clip_rect[k]=nc_float(-1000,1000);
        renderer_canvas_width=nc_float(-1000,1000);renderer_canvas_height=nc_float(-1000,1000);
        int32_t *display=(int32_t *)renderer_display;
        for(int k=0;k<11;k++) display[k]=(int32_t)nc_rand();
        renderer_display->letterboxed=n%2;
        float rect[4];for(int k=0;k<4;k++) rect[k]=nc_float(-1000,1000);
        if(n%19==0) {
            menu_clip_depth=0;renderer_canvas_width=100;renderer_canvas_height=100;
            rect[0]=n%3?0:100;rect[1]=0;rect[2]=n%3?100:0;rect[3]=100;
        }
        int changed=op?-2:(int32_t)menu_clip_depth;
        uint32_t csr=0x1f80|((n%4)<<13)|((n/4%2)<<6)|((n/8%2)<<15);
        nc_set_mxcsr(csr);
        uint64_t result=0;
        if(op) pop();else result=push(rect[0],rect[1],rect[2],rect[3]);
        uint32_t status=nc_get_mxcsr();
        nc_line("clip %d %d %016llx %08x %08x %016llx",op,n,(unsigned long long)result,
            menu_clip_depth,status,(unsigned long long)hash_state(changed));
    }
    return 0;
}
