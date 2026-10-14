// Runs the 2D renderer routines with identical inputs in two processes and prints, per case, the
// OpenGL calls made and the resulting state. Mode "native": the original executable's routines.
// Mode "engine": src/engine/renderer.c running against the recompiled client's memory.
#include "peload.h"
#include "gltrace.h"
#ifdef ENGINE
#define E_ MS
E_ void renderer_batch_vertex3f(float,float,float); E_ void renderer_batch_vertex2f(float,float); E_ void renderer_batch_vertex3fv(const float*); E_ void renderer_batch_vertex2fv(const float*); E_ void renderer_batch_flush(void);
E_ void renderer_draw_textured_rect(float,float,float,float,int,float,float,float,float); E_ void renderer_draw_flat_rect(float,float,float,float,int,float,float,float,float);
E_ void renderer_draw_atlas_sprite(int,int,float,float,float,float,int,float,float,float,float);
#endif
static uint32_t rs=12345; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static float rf(float lo,float hi){ return lo+(hi-lo)*(rnd()&0xFFFF)/65535.0f; }
static uint64_t fnv(const void *p,size_t n){ const uint8_t *b=p; uint64_t h=1469598103934665603ULL; for(size_t i=0;i<n;i++){ h^=b[i]; h*=1099511628211ULL; } return h; }
#define G(type,addr) (*(type*)D(addr))
static void v3f(float x,float y,float z){
#ifdef ENGINE
  renderer_batch_vertex3f(x,y,z);
#else
  ((MS void(*)(float,float,float))F(0x14007D420))(x,y,z);
#endif
}
static void v2f(float x,float y){
#ifdef ENGINE
  renderer_batch_vertex2f(x,y);
#else
  ((MS void(*)(float,float))F(0x14007D230))(x,y);
#endif
}
static void v3fv(const float *p){
#ifdef ENGINE
  renderer_batch_vertex3fv(p);
#else
  ((MS void(*)(const float*))F(0x14007D520))(p);
#endif
}
static void v2fv(const float *p){
#ifdef ENGINE
  renderer_batch_vertex2fv(p);
#else
  ((MS void(*)(const float*))F(0x14007D320))(p);
#endif
}
static void flush(void){
#ifdef ENGINE
  renderer_batch_flush();
#else
  ((MS void(*)(void))F(0x14006E0D0))();
#endif
}
#ifdef ENGINE
E_ void renderer_batch_draw(void);
#endif
static void draw(void){   // the batch with the caller's program
#ifdef ENGINE
  renderer_batch_draw();
#else
  ((MS void(*)(void))F(0x14006E2D0))();
#endif
}
static void trect(float x,float y,float w,float h,int fl,float r,float g,float b,float a){
#ifdef ENGINE
  renderer_draw_textured_rect(x,y,w,h,fl,r,g,b,a);
#else
  ((MS void(*)(float,float,float,float,char,float,float,float,float))F(0x14006CFF0))(x,y,w,h,(char)fl,r,g,b,a);
#endif
}
static void frect(float x,float y,float w,float h,int fl,float r,float g,float b,float a){
#ifdef ENGINE
  renderer_draw_flat_rect(x,y,w,h,fl,r,g,b,a);
#else
  ((MS void(*)(float,float,float,float,char,float,float,float,float))F(0x14006D660))(x,y,w,h,(char)fl,r,g,b,a);
#endif
}
static void sprite(int at,int en,float x,float y,float w,float h,int fl,float r,float g,float b,float a){
#ifdef ENGINE
  renderer_draw_atlas_sprite(at,en,x,y,w,h,fl,r,g,b,a);
#else
  ((MS void(*)(int,int,float,float,float,float,char,float,float,float,float))F(0x14006D300))(at,en,x,y,w,h,(char)fl,r,g,b,a);
#endif
}
int main(int argc,char **argv){ init_image(argc,argv); gltrace_install(stdout); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):2000;
  // identical starting state in both processes
  G(uint32_t,0x1ABD4AC00ULL)=7; G(int32_t,0x1ABD4AC14ULL)=3; for(int i=0;i<16;i++) (&G(float,0x1A724E6C0ULL))[i]=0.25f*i-1.0f; G(uint32_t,0x1ABD4AC9CULL)=11;
  G(uint32_t,0x1AD299468ULL)=21; G(uint32_t,0x1AD29946CULL)=22;
  for(int a=0;a<3;a++){ uint8_t *at=(uint8_t*)&G(uint32_t,0x1A7971DC0ULL)+196664ULL*a; *(uint32_t*)at=100+a; for(int e=0;e<64;e++){ float *uv=(float*)(at+28+48*e+8); for(int k=0;k<8;k++) uv[k]=rf(0,1); } }
  uint8_t *batch=(uint8_t*)&G(int32_t,0x1AD059440ULL); int32_t *bi=(int32_t*)batch; float *bcol=&G(float,0x1AD299450ULL), *buv=&G(float,0x1AD299460ULL);
  uint8_t *scratch=(uint8_t*)&G(int32_t,0x1A8BF79CCULL);
  static const int flagset[]={0,1,2,4,8,5,10,6,9,0x80,0x81,0x8A,0x85,3,12,15,0x7F,0xFF};
  for(int c=0;c<cases;c++){ int kind=rnd()%7; printf("== case %d kind %d\n",c,kind);
    if(kind<4){ // a batch: begin, vertices through all four entry points, end
      bi[0]=kind==3?rnd()%4:kind; bi[2]=0; bi[3]=9; int n=1+rnd()%40;
      if(rnd()%6==0) bi[2]=65536-(int)(rnd()%8);            // run into the capacity limit
      for(int i=0;i<n;i++){ for(int k=0;k<4;k++) bcol[k]=rf(0,1); buv[0]=rf(0,1); buv[1]=rf(0,1); float p[3]={rf(-2000,2000),rf(-2000,2000),rf(-10,10)};
        switch(rnd()%4){ case 0: v3f(p[0],p[1],p[2]); break; case 1: v2f(p[0],p[1]); break; case 2: v3fv(p); break; default: v2fv(p); } }
      if(rnd()%8==0) bi[2]=0;   // an empty batch draws nothing
      if(rnd()%3==0) draw(); else flush();
      printf("batch primitive %d count %d stride %d data #%016lx whole #%016lx\n",bi[0],bi[2],bi[3],fnv(batch+16,(size_t)36*(bi[2]>0&&bi[2]<=65536?bi[2]:0)),fnv(batch,2359344));
    } else { int fl=flagset[rnd()%(sizeof flagset/sizeof flagset[0])]; float x=rf(-100,1100),y=rf(-100,700),w=rf(0,600),h=rf(0,400),r=rf(0,1),g=rf(0,1),b=rf(0,1),a=rf(0,1);
      if(kind==4) trect(x,y,w,h,fl,r,g,b,a); else if(kind==5) frect(x,y,w,h,fl,r,g,b,a); else sprite(rnd()%3,rnd()%64,x,y,w,h,fl,r,g,b,a);
      printf("scratch count %d stride %d:",*(int*)scratch,*(int*)(scratch+4)); for(int i=0;i<30;i++) printf(" %08x",*(uint32_t*)(scratch+8+4*i)); printf("\n   around #%016lx\n",fnv(scratch-64,8+120+64+64)); }
  }
  fprintf(stderr,"[%s] %d cases, %ld GL calls\n",img_name,cases,gl_calls); return 0; }
