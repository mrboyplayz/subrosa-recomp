// Runs the item bounds stage of the tick (0x1400C9D20) with identical items, item types and bodies in two
// processes; the level sweep it calls (0x1400DC050) is replaced in both by a stub that logs its arguments and
// answers from a fixed sequence. Mode "engine": src/engine/world_items.c.
#include "peload.h"
#ifdef ENGINE
MS void world_update_item_bounds(void);
#endif
static uint32_t rs=5150; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,65536.0f,-65536.0f,3e9f,-3e9f};
static float rf(float scale){ unsigned k=rnd()%50; if(k==0) return special[rnd()%14]; if(k==1){ uint32_t b=rnd32(); float f; memcpy(&f,&b,4); return f; } return scale*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
#define G(type,addr) (*(type*)D(addr))
#define NI 10
#define NT 4
#define NB 12
static uint8_t *items; static uint32_t answers;
static MS int s_sweep(float *from,float *to,int flag){ ptrdiff_t a=(uint8_t*)from-items, b=(uint8_t*)to-items; uint32_t w[6]; memcpy(w,from,12); memcpy(w+3,to,12);
  for(int i=0;i<6;i++) if((w[i]&0x7f800000)==0x7f800000 && (w[i]&0x7fffff)) w[i]=0x7fc00000;
  printf("call sweep %td:%td %td:%td %d %08x %08x %08x %08x %08x %08x\n",a/0x1B80,a%0x1B80,b/0x1B80,b%0x1B80,flag,w[0],w[1],w[2],w[3],w[4],w[5]);
  answers=answers*1103515245u+12345u; return (answers>>16)%3==0 ? (int)((answers>>20)|1) : 0; }
static void pr(const char *t,int i,const void *p,size_t n){ printf("%s %d:",t,i); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ uint32_t w; memcpy(&w,b+k,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; printf(" %08x",w); } printf("\n"); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  hook(0x1400DC050ULL,s_sweep);
  int cases=argc>3?atoi(argv[3]):6000;
  items=&G(uint8_t,0x182BBB180ULL); uint8_t *types=&G(uint8_t,0x182A7E180ULL), *bodies=&G(uint8_t,0x1449816E0ULL);
  static float points[NT][24*3];
  for(int c=0;c<cases;c++){ printf("== case %d\n",c); answers=rnd32();
    for(int i=0;i<NB;i++){ uint8_t *b=bodies+0xBC*i; for(int k=0;k<0xBC;k+=4){ float v=rf(40.0f); memcpy(b+k,&v,4); }
      if(rnd()%3){ for(int k=0x3C;k<0x60;k+=4){ float v=rf(1.0f); memcpy(b+k,&v,4); } } }
    for(int t=0;t<NT;t++){ int32_t n=rnd()%6==0?0:rnd()%12==0?-3:(int32_t)(rnd()%24); memcpy(types+0x13D0*t+0xF08,&n,4);
      const float *p=points[t]; memcpy(types+0x13D0*t+0xF10,&p,8); for(int k=0;k<24*3;k++) points[t][k]=rf(3.0f); }
    for(int i=0;i<NI;i++){ uint8_t *it=items+0x1B80*i; for(int k=0;k<0x140;k+=4){ float v=rf(40.0f); memcpy(it+k,&v,4); }
      int32_t a=rnd()%5!=0, sim=rnd()%5!=0?(int32_t)(1+rnd()%3):0, ty=(int32_t)(rnd()%NT), bo=(int32_t)(rnd()%NB);
      memcpy(it,&a,4); memcpy(it+4,&sim,4); memcpy(it+0x14,&ty,4); memcpy(it+0x58,&bo,4); }
    { float s=rnd()%4?1.0f:rf(2.0f); G(float,0x151A84898ULL)=s; }
#ifdef ENGINE
    world_update_item_bounds();
#else
    ((MS uint64_t(*)(void))F(0x1400C9D20ULL))();
#endif
    for(int i=0;i<NI;i++) pr("item",i,items+0x1B80*i,0x140);
    for(int i=0;i<NB;i++) pr("body",i,bodies+0xBC*i,0x30);
  }
  // the remaining items must stay untouched
  for(int i=NI;i<1024;i++){ int32_t a; memcpy(&a,items+0x1B80*i,4); if(a){ printf("item %d active\n",i); break; } }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
