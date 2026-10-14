// A bot planning a whole route (src/engine/bot.c bot_plan_route) against the original (0x1400096B0), on random
// road networks, start streets and targets. The routine draws no random numbers; rand is hooked anyway.
// Mode "engine": the engine function.
#include "peload.h"
#ifdef ENGINE
MS long long bot_plan_route(int player, int street, int heading, int reverse, int target_column, int target_row);
#endif
static uint32_t rs=5151; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
#define G(type,addr) (*(type*)D(addr))
#define PLAYER 0x151620C60ULL
#define PLAYER_SIZE 0x3834ULL
#define CROSSINGS 0x175FD1464ULL
#define STREETS 0x175FF3468ULL
#define NCROSS 128                                  // covers intersection 115, the turning column
#define NSTREET 128
static void seti(uint64_t addr,int32_t v){ memcpy(D(addr),&v,4); }

static MS int s_rand(void){ printf("call rand\n"); return 0; }

typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={ {0,PLAYER_SIZE,NULL,"player"}, {CROSSINGS,NCROSS*0x88,NULL,"crossing"},
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
    int span=2+(int)(rnd()%8);
    unsigned style=rnd()%3;                          // 0 random streets, 1 a full grid, 2 a grid with holes
    for(int i=0;i<NCROSS;i++){ uint64_t x=CROSSINGS+0x88ULL*i;
      for(int k=0;k<0x88;k+=4) seti(x+k,(int)rnd32());
      seti(x+0,(int)(rnd()%span)); seti(x+8,(int)(rnd()%span));
      for(int s=0;s<4;s++) seti(x+0x18+4*s,(style==1||rnd()%5)?(int)(rnd()%NSTREET):-1); }
    for(int i=0;i<NSTREET;i++){ uint64_t s=STREETS+0x630ULL*i; seti(s+0x24,(int)(rnd()%NCROSS)); seti(s+0x28,(int)(rnd()%NCROSS)); }
    for(int k=0x2D30;k<0x3550;k+=4) seti(pl+k,(int)rnd32());
    int street=(int)(rnd()%NSTREET), heading=(int)(rnd()%4), reverse=(int)(rnd()%3==0?rnd32():rnd()%2);
    int tc=(int)(rnd()%span), tr=(int)(rnd()%span);
    if(rnd()%4==0){ int end=G(int32_t,STREETS+0x630ULL*street+(reverse?0x24:0x28)); tc=G(int32_t,CROSSINGS+0x88ULL*end); tr=G(int32_t,CROSSINGS+0x88ULL*end+8); }
    if(rnd()%5==0) seti(CROSSINGS+0x88ULL*115,(int)(rnd()%span));
    regions[0].addr=pl;
    snapshot(); printf("== %d player %d street %d heading %d reverse %d target %d %d\n",c,p,street,heading,reverse,tc,tr);
#ifdef ENGINE
    long long r=bot_plan_route(p,street,heading,reverse,tc,tr);
#else
    long long r=((MS long long(*)(int,int,int,int,int,int))F(0x1400096B0ULL))(p,street,heading,reverse,tc,tr);
#endif
    printf("  -> %llx\n",r);
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
