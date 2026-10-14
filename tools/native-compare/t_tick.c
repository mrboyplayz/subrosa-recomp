// Runs the physics tick orchestrator (0x140116210) with every stage it calls replaced, in both processes, by
// the same logging stub. Compares the tick's own work (gravity and position integration, grid clearing, item
// voxel registration and lifetimes) and the order and arguments of all stage calls.
// Mode "engine": src/engine/physics_tick.c.
#include "peload.h"
#ifdef ENGINE
MS void physics_tick(void);
#endif
static uint32_t rs=31337; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,0.5f,2.0f};
static float rf(void){ unsigned k=rnd()%40; if(k==0) return special[rnd()%12]; if(k==1){ uint32_t b=rnd32(); float f; memcpy(&f,&b,4); return f; } return ((int)(rnd()&0xFFFFF)-0x80000)/52428.8f; }
#define G(type,addr) (*(type*)D(addr))
static uint8_t *bodies;
// stage stubs: each records its name and arguments (body pointers as body index and field offset)
static void body_ptr(const char *t,const void *p){ ptrdiff_t o=(const uint8_t*)p-bodies; printf(" %s=%td:%td",t,o/0xBC,o%0xBC); }
#define STAGE(name) static MS uint64_t s_##name(void){ printf("call %s\n",#name); return 0; }
STAGE(vehicle_bounds) STAGE(human_bounds) STAGE(item_bounds) STAGE(contacts) STAGE(s108930) STAGE(humans) STAGE(sce370) STAGE(scc610)
STAGE(solve) STAGE(broadphase) STAGE(s115830) STAGE(expire_bonds)
static MS void s_rotation(float *r,float *l,float *w,float *i){ printf("call rotation"); body_ptr("r",r); body_ptr("l",l); body_ptr("w",w); body_ptr("i",i); printf("\n"); }
static MS void s_voxel(int32_t layer,int32_t x,uint32_t y,uint32_t z,uint64_t object){ printf("call voxel %d %d %u %u %04x\n",layer,x,y,z,(unsigned)(object&0xFFFF)); }
static MS void s_remove_item(int32_t item){ printf("call remove_item %d\n",item); }
static void pr(const char *t,int i,const void *p,size_t n){ printf("%s %d:",t,i); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ uint32_t w; memcpy(&w,b+k,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; printf(" %08x",w); } printf("\n"); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  hook(0x14012B2D0ULL,s_rotation); hook(0x1401069C0ULL,s_vehicle_bounds); hook(0x1400B95E0ULL,s_human_bounds); hook(0x1400C9D20ULL,s_item_bounds);
  hook(0x140037DE0ULL,s_voxel); hook(0x1401154D0ULL,s_contacts); hook(0x140108930ULL,s_s108930); hook(0x1400BE010ULL,s_humans);
  hook(0x1400CE370ULL,s_sce370); hook(0x1400CC610ULL,s_scc610); hook(0x14001D080ULL,s_solve); hook(0x14007F970ULL,s_remove_item);
  hook(0x14010BE50ULL,s_broadphase); hook(0x140115830ULL,s_s115830); hook(0x14001FB90ULL,s_expire_bonds);
  int cases=argc>3?atoi(argv[3]):3000;
  bodies=&G(uint8_t,0x1449816E0ULL);
  uint8_t *humans=&G(uint8_t,0x18329E308ULL), *items=&G(uint8_t,0x182BBB180ULL), *types=&G(uint8_t,0x182A7E180ULL);
  static int32_t grid[4096];
  for(int c=0;c<cases;c++){ printf("== case %d\n",c);
    for(int i=0;i<20;i++){ uint8_t *b=bodies+0xBC*i; for(int k=0;k<0xBC;k+=4){ float v=rf(); memcpy(b+k,&v,4); } int32_t a=rnd()%4!=0, s=rnd()%4==0; memcpy(b,&a,4); memcpy(b+8,&s,4); }
    for(int i=0;i<4;i++){ int32_t v=(int32_t)rnd32(); memcpy(humans+0x6FF8*i+0x6DDC,&v,4); }
    for(int t=0;t<4;t++){ int32_t f=rnd()%2; memcpy(types+0x13D0*t+0xC,&f,4); }
    for(int i=0;i<12;i++){ uint8_t *it=items+0x1B80*i; int32_t a=rnd()%4!=0, ty=(int32_t)(rnd()%4); memcpy(it,&a,4); memcpy(it+0x14,&ty,4);
      static const int32_t life[]={0,1,2,-3,0xFFFE,0xFFFF,0x7FFFFFFF,50}; int32_t l=life[rnd()%8]; memcpy(it+0x1C,&l,4);
      for(int k=0;k<3;k++){ int32_t lo=(int32_t)(rnd()%4)-1, hi=lo+(int32_t)(rnd()%3)-1; memcpy(it+0x11C+4*k,&lo,4); memcpy(it+0x128+4*k,&hi,4); } }
    G(int32_t,0x15ADA9274ULL)=(int32_t)(rnd()%5); G(int32_t,0x15ADA9278ULL)=(int32_t)(rnd()%5); G(int32_t,0x15ADA927CULL)=(int32_t)(rnd()%5);
    for(int i=0;i<64;i++) grid[i]=(int32_t)rnd32(); G(int32_t*,0x1A4BF0900ULL)=grid;
    G(int32_t,0x1A4BF0920ULL)=(int32_t)rnd32(); G(int32_t,0x1A4CF0924ULL)=(int32_t)rnd32();
#ifdef ENGINE
    physics_tick();
#else
    ((MS void(*)(void))F(0x140116210ULL))();
#endif
    for(int i=0;i<20;i++) pr("body",i,bodies+0xBC*i,0x30);
    for(int i=0;i<4;i++) pr("human",i,humans+0x6FF8*i+0x6DDC,4);
    for(int i=0;i<12;i++) pr("item",i,items+0x1B80*i+0x1C,4);
    pr("grid",0,grid,64*4); pr("counters",0,(uint8_t*)&G(int32_t,0x1A4BF0920ULL),4); pr("counters",1,(uint8_t*)&G(int32_t,0x1A4CF0924ULL),4);
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
