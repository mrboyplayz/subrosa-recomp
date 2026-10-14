// Runs the human bounds stage of the tick (0x1400B95E0) with identical humans, skeleton, bodies and block types in
// two processes. The level sweep 0x1400DC050 and the block routines (0x140016870, 0x1400169B0) read a random level; 0x1400CDBD0 is
// replaced in both by a stub that log their arguments and answer from a fixed sequence.
// Mode "engine": src/engine/world_blocks.c.
#include "peload.h"
#ifdef ENGINE
MS void world_update_human_bounds(void);
#endif
static uint32_t rs=1923; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
// Coordinates stay small and finite, except for not-a-number, so that the voxel loops stay short.
static float rf(float scale){ unsigned k=rnd()%80; if(k==0) return __builtin_nanf(""); if(k==1) return rnd()%2?0.0f:-0.0f; return scale*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
#define G(type,addr) (*(type*)D(addr))
#define NH 256
#define NB 24
#define NI 8
#define NBLOCK 4
static uint32_t answers; static uint32_t next(void){ answers=answers*1103515245u+12345u; return answers>>8; }
static void pw(const char *t,const void *p,int n){ printf(" %s",t); const uint32_t *w=p; for(int i=0;i<n;i++){ uint32_t x=w[i]; if((x&0x7f800000)==0x7f800000&&(x&0x7fffff)) x=0x7fc00000; printf(" %08x",x); } }
static MS uint64_t s_sweep(float *from,float *to,uint64_t flag){ uint32_t a=next(); printf("call sweep"); pw("f",from,3); pw("t",to,3); printf(" %d -> %d\n",(int)flag,a%3==0); return a%3==0; }
static MS uint64_t s_spawn(uint32_t block,int32_t part,int32_t layer,int32_t x,int32_t y,int32_t z){ uint32_t a=next(); uint64_t r=a%3==0?0xFFFFFFFFu:(uint64_t)a<<32|(a>>2)%NI;
  printf("call spawn %08x %d %d %d %d %d -> %d\n",block,part,layer,x,y,z,(int32_t)r); return r; }
// Level layer 0 as 0x140016870 / 0x1400169B0 read it: 3x3x3 chunks (voxels 0..191), every chunk slot 0..2, cells
// pointing at block records whose ids are mostly empty, else one of NBLOCK types (sometimes +0x200, high bits set).
static int32_t level_table[27];
static void make_level(void){
  G(int32_t,0x15ADA9274ULL)=3; G(int32_t,0x15ADA9278ULL)=3; G(int32_t,0x15ADA927CULL)=3;
  for(int k=0;k<27;k++) level_table[k]=rnd()%5==0?-1:(int32_t)(rnd()%3);
  int32_t *t=level_table; memcpy(&G(uint8_t,0x15ADA9288ULL),&t,8);
  for(int s=0;s<3;s++) for(int k=0;k<513;k++) G(int32_t,0x15ADA97B0ULL+0x804ULL*s+4ULL*k)=rnd()%4==0?-1:(int32_t)(rnd()%4);
  for(int r=0;r<4;r++) for(int k=0;k<512;k++){ uint32_t a=rnd32();
    G(uint32_t,0x154166248ULL+0x6C48ULL*r+4ULL*k)=a%5==0?(uint32_t)((a>>3)%NBLOCK)|((a>>9)%3==0?0x200u:0u)|(rnd32()&0xFFFFFC00u):0;
    G(uint32_t,0x154166A48ULL+0x6C48ULL*r+4ULL*k)=a%3==0?0:rnd32(); }
}
static void pr(const char *t,int i,const void *p,size_t n){ printf("%s %d:",t,i); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ uint32_t w; memcpy(&w,b+k,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; printf(" %08x",w); } printf("\n"); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  hook(0x1400DC050ULL,s_sweep); hook(0x1400CDBD0ULL,s_spawn);
  int cases=argc>3?atoi(argv[3]):1500;
  uint8_t *humans=&G(uint8_t,0x18329E308ULL), *bodies=&G(uint8_t,0x1449816E0ULL), *items=&G(uint8_t,0x182BBB180ULL), *skel=&G(uint8_t,0x18399DF20ULL);
  G(float,0x151A84898ULL)=0.5f;
  for(int c=0;c<cases;c++){ printf("== case %d\n",c); answers=rnd32(); make_level();
    if(c%10==0) G(float,0x151A84898ULL)=rf(1.0f);
    for(int i=0;i<NB;i++){ uint8_t *b=bodies+0xBC*i; for(int k=0;k<0xBC;k+=4){ float v=rf(k>=0x3C&&k<0x60?1.0f:4.0f); memcpy(b+k,&v,4); } }
    for(int s=0;s<16;s++){ int32_t row=(int32_t)(rnd()%3); float l=rf(1.0f), r=rf(0.5f); memcpy(skel+100*s+0x18,&row,4); memcpy(skel+100*s+0x1C,&l,4); memcpy(skel+100*s+0x20,&r,4); }
    for(int b=0;b<NBLOCK;b++) for(int hi=0;hi<2;hi++) G(int32_t,0x1812C20CCULL+0xED0ULL*(b+0x200*hi))=rnd()%8==0?34+(int32_t)(rnd()%4):(int32_t)(rnd()%5)-1;
    int on[2]={(int)(rnd()%NH),(int)(rnd()%NH)};
    for(int h=0;h<NH;h++){ int32_t a=(h==on[0]||h==on[1])?(int32_t)(1+rnd()%3):0; memcpy(humans+0x6FF8*h,&a,4); }
    for(int j=0;j<2;j++){ uint8_t *h=humans+0x6FF8*on[j];
      for(int k=0x1C0;k<0x1F0;k+=4){ uint32_t w=rnd32(); memcpy(h+k,&w,4); }
      for(int b=0;b<16;b++){ uint8_t *bo=h+0x220+0x138*b; for(int k=0;k<0x138;k+=4){ float v=rf(4.0f); memcpy(bo+k,&v,4); } int32_t body=(int32_t)(rnd()%NB); memcpy(bo,&body,4); } }
    for(int i=0;i<NI;i++){ int32_t z[2]={(int32_t)(rnd()%3),(int32_t)(rnd()%3)}; memcpy(items+0x1B80*i+4,z,8); }
#ifdef ENGINE
    world_update_human_bounds();
#else
    ((MS uint64_t(*)(void))F(0x1400B95E0ULL))();
#endif
    for(int j=0;j<2;j++){ uint8_t *h=humans+0x6FF8*on[j]; pr("human",on[j],h+0x1C0,0x30); for(int b=0;b<16;b++) pr("bone",b,h+0x220+0x138*b,0x138); }
    for(int i=0;i<NI;i++) pr("item",i,items+0x1B80*i,0x10);
    for(int i=0;i<NB;i++) pr("body",i,bodies+0xBC*i,0xBC);
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
