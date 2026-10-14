// Runs the vehicle bounds stage of the tick (0x1401069C0) with identical vehicles, vehicle types, bodies and
// block types in two processes. The block lookups and the routine that breaks a block part off as an item
// (0x140016870, 0x1400169B0, 0x1400CDBD0) are replaced in both by stubs that log their arguments and answer
// from a fixed sequence. Mode "engine": src/engine/world_vehicles.c.
#include "peload.h"
#ifdef ENGINE
MS void world_update_vehicle_bounds(void);
#endif
static uint32_t rs=8086; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
// Coordinates stay small and finite, except for not-a-number, so that the voxel loops stay short.
static float rf(float scale){ unsigned k=rnd()%60; if(k==0) return __builtin_nanf(""); if(k==1) return rnd()%2?0.0f:-0.0f; return scale*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
#define G(type,addr) (*(type*)D(addr))
#define NV 3
#define NT 3
#define NB 6
#define NI 8
#define NBLOCK 4
static uint32_t answers; static uint32_t next(void){ answers=answers*1103515245u+12345u; return answers>>8; }
static MS uint64_t s_spawn(uint32_t block,int32_t part,int32_t layer,int32_t x,int32_t y,int32_t z){ uint32_t a=next(); uint64_t r=a%3==0?0xFFFFFFFFu:a%7==0?0xFFFFFFFEu:(uint64_t)a<<32|(a>>2)%NI;   // -1: none; -2: the item before the first
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
  hook(0x1400CDBD0ULL,s_spawn);
  int cases=argc>3?atoi(argv[3]):2500;
  uint8_t *vehicles=&G(uint8_t,0x15F2D9200ULL), *bodies=&G(uint8_t,0x1449816E0ULL), *items=&G(uint8_t,0x182BBB180ULL);
  for(int c=0;c<cases;c++){ printf("== case %d\n",c); answers=rnd32(); make_level();
    for(int i=0;i<NB;i++){ uint8_t *b=bodies+0xBC*i; for(int k=0;k<0xBC;k+=4){ float v=rf(k>=0x3C&&k<0x60?1.0f:6.0f); memcpy(b+k,&v,4); } }
    for(int t=0;t<NT;t++){ float *o=&G(float,0x192EB2BB4ULL+0x185C0ULL*t); for(int k=0;k<3;k++) o[k]=rf(2.0f);
      G(int32_t,0x190297C5CULL+0x2C040ULL*t)=rnd()%6==0?0:rnd()%12==0?-2:(int32_t)(rnd()%10);
      float *p=&G(float,0x190297C60ULL+0x2C040ULL*t); for(int k=0;k<30;k++) p[k]=rf(2.0f); }
    for(int b=0;b<NBLOCK;b++) for(int hi=0;hi<2;hi++) G(int32_t,0x1812C20CCULL+0xED0ULL*(b+0x200*hi))=rnd()%8==0?34+(int32_t)(rnd()%4):(int32_t)(rnd()%5)-1;
    for(int i=0;i<NV;i++){ uint8_t *v=vehicles+0x5168*i; for(int k=0;k<0xE0;k+=4){ float f=rf(6.0f); memcpy(v+k,&f,4); }
      int32_t a=rnd()%5!=0?(int32_t)(1+rnd()%2):0, ty=(int32_t)(rnd()%NT), bo=(int32_t)(rnd()%NB); memcpy(v,&a,4); memcpy(v+4,&ty,4); memcpy(v+0x28,&bo,4); }
    for(int i=-2;i<NI;i++){ int32_t z[2]={(int32_t)(rnd()%3),(int32_t)(rnd()%3)}; memcpy(items+0x1B80*i+4,z,8); }
#ifdef ENGINE
    world_update_vehicle_bounds();
#else
    ((MS uint64_t(*)(void))F(0x1401069C0ULL))();
#endif
    for(int i=0;i<NV;i++) pr("vehicle",i,vehicles+0x5168*i,0xE0);
    for(int i=-2;i<NI;i++) pr("item",i,items+0x1B80*i,0x10);
    for(int i=0;i<NB;i++) pr("body",i,bodies+0xBC*i,0xBC);
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
