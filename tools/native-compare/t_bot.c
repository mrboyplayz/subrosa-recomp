// A bot choosing its next street (src/engine/bot.c) against the original (0x1400090C0), on random road networks,
// routes and targets. The C runtime's rand (0x14023B1B0) is replaced in both images by a stub with a fixed sequence.
// Mode "engine": the engine function.
#include "peload.h"
#ifdef ENGINE
MS long long bot_plan_next_leg(int player);
#endif
static uint32_t rs=4242; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
#define G(type,addr) (*(type*)D(addr))
#define PLAYER 0x151620C60ULL
#define PLAYER_SIZE 0x3834ULL
#define CROSSINGS 0x175FD1464ULL
#define CROSSING_COUNT 0x175FD145CULL
#define STREETS 0x175FF3468ULL
#define NCROSS 64
#define NSTREET 64
static void seti(uint64_t addr,int32_t v){ memcpy(D(addr),&v,4); }

static uint32_t ss;
static MS int s_rand(void){ ss=ss*1103515245u+12345u; int r=(int)((ss>>16)&0x7FFF); printf("call rand -> %d\n",r); return r; }

typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={ {0,PLAYER_SIZE,NULL,"player"}, {CROSSINGS,NCROSS*0x88,NULL,"crossing"}, {CROSSING_COUNT,4,NULL,"count"},
  {STREETS,NSTREET*0x630,NULL,"street"} };
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr); for(size_t k=0;k+4<=regions[r].size;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
      if(a!=b) printf("  %s+%zx %08x\n",regions[r].name,k,b); } } }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  hook(0x14023B1B0ULL,s_rand);
  for(int c=0;c<cases;c++){
    int p=(int)(rnd()%256); uint64_t pl=PLAYER+PLAYER_SIZE*(uint64_t)p;
    int span=1+(int)(rnd()%4);                     // grid cells 0..span-1: targets are often reached
    for(int i=0;i<NCROSS;i++){ uint64_t x=CROSSINGS+0x88ULL*i;
      for(int k=0;k<0x88;k+=4) seti(x+k,(int)rnd32());
      seti(x+0,(int)(rnd()%span)); seti(x+8,(int)(rnd()%span));
      for(int s=0;s<4;s++) seti(x+0x18+4*s,rnd()%5?(int)(rnd()%NSTREET):-1); }
    // sometimes a dead end or a crossing whose only street is the one arrived on
    for(int i=0;i<NSTREET;i++){ uint64_t s=STREETS+0x630ULL*i; seti(s+0x24,(int)(rnd()%NCROSS)); seti(s+0x28,(int)(rnd()%NCROSS)); }
    { unsigned k=rnd()%8; seti(CROSSING_COUNT,k==0?0:k==1?-(int)(rnd()%3):1+(int)(rnd()%NCROSS)); }
    for(int k=0x2D30;k<0x3550;k+=4) seti(pl+k,(int)rnd32());
    int index=(int)(rnd()%6); seti(pl+0x2D34,index);
    int street=(int)(rnd()%NSTREET); seti(pl+0x2D48+32*index,street); seti(pl+0x2D4C+32*index,(int)(rnd()%2));
    { int end=G(int32_t,STREETS+0x630ULL*street+0x24+4*(G(int32_t,pl+0x2D4C+32*index)^1)); uint64_t x=CROSSINGS+0x88ULL*end;
      unsigned k=rnd()%6;
      if(k<3) seti(x+0x18+4*(rnd()%4),street);                                   // arrived on a real side
      if(k==3) for(int s=0;s<4;s++) seti(x+0x18+4*s,rnd()%2?street:-1);          // nowhere else to go
      if(rnd()%3==0){ seti(pl+0x353C,G(int32_t,x)); seti(pl+0x3540,G(int32_t,x+8)); }   // target reached
      else { seti(pl+0x353C,(int)(rnd()%span)); seti(pl+0x3540,(int)(rnd()%span)); } }
    ss=rnd32(); regions[0].addr=pl;
    snapshot(); printf("== %d player %d\n",c,p);
#ifdef ENGINE
    long long r=bot_plan_next_leg(p);
#else
    long long r=((MS long long(*)(int))F(0x1400090C0ULL))(p);
#endif
    printf("  -> %llx\n",r);
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
