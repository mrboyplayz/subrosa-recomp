// Making and removing players (src/engine/player.c) against the original (0x14005CCF0 player_create,
// 0x1400802F0 player_delete, 0x140091E60 player_clean_name). rand (0x14023B1B0) and the corporation member lists (0x1400F3B30) are replaced in
// both images by stubs that print their arguments; selling stocks, sharing out the team's money
// (src/engine/stocks.c) and the player event (src/engine/event_player.c) run for real.
// Mode "engine": the engine functions.
#include "peload.h"
#ifdef ENGINE
MS int player_create(void);
MS void player_delete(int player);
MS char *player_clean_name(int player);
#endif
static uint32_t rs=777; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
#define PLAYERS 0x151620C60ULL
#define PLAYER_SIZE 0x3834ULL
#define HUMANS 0x18329E308ULL
#define HUMAN_SIZE 0x6FF8ULL
#define ACCOUNTS 0x160361348ULL
#define CORPS 0x183EBFD60ULL
#define CORP_SIZE 0x5BC4ULL
#define GAME_STATE 0x183EBFCCCULL
#define GAME_TYPE 0x183EBFAACULL
#define NHUMAN 16
#define NACCOUNT 64
static void seti(uint64_t addr,int32_t v){ memcpy(D(addr),&v,4); }

static uint32_t ss;
static MS int s_rand(void){ ss=ss*1103515245u+12345u; int r=(int)((ss>>16)&0x7FFF); printf("call rand -> %d\n",r); return r; }
static MS long long s_lists(int p){ printf("call corporation lists %d\n",p); return 0; }

typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={ {PLAYERS,256*PLAYER_SIZE,NULL,"players"}, {HUMANS,NHUMAN*HUMAN_SIZE,NULL,"humans"},
  {ACCOUNTS,NACCOUNT*0x70,NULL,"accounts"}, {CORPS,6*CORP_SIZE,NULL,"corps"}, {GAME_STATE,4,NULL,"state"}, {GAME_TYPE,4,NULL,"type"},
  {0x19021F0C0ULL,6*0x18,NULL,"stocks"}, {0x16D482320ULL,6*0x14,NULL,"funds"},
  {0x189C1DC64ULL,4,NULL,"eventcount"}, {0x1873DE460ULL,0x80,NULL,"event"} };
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr);
    for(size_t blk=0;blk<regions[r].size;blk+=4096){ size_t n=regions[r].size-blk<4096?regions[r].size-blk:4096;
      if(!memcmp(regions[r].copy+blk,now+blk,n)) continue;
      for(size_t k=blk;k+4<=blk+n;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
        if(a!=b) printf("  %s+%zx %08x\n",regions[r].name,k,b); } } } }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):2000;
  hook(0x14023B1B0ULL,s_rand); hook(0x1400F3B30ULL,s_lists);
  // Fill everything once with noise; each case then changes only what it needs.
  for(uint64_t k=0;k<256*PLAYER_SIZE;k+=4) seti(PLAYERS+k,(int)rnd32());
  for(uint64_t k=0;k<NHUMAN*HUMAN_SIZE;k+=4) seti(HUMANS+k,(int)rnd32());
  for(uint64_t k=0;k<NACCOUNT*0x70;k+=4) seti(ACCOUNTS+k,(int)rnd32());
  for(uint64_t k=0;k<6*CORP_SIZE;k+=4) seti(CORPS+k,(int)rnd32());
  for(int c=0;c<cases;c++){
    ss=rnd32();
    seti(GAME_STATE,(int)(rnd()%3)); seti(GAME_TYPE,(int)(rnd()%6));
    unsigned kind=rnd()%3;
    if(kind==2){                                        // clean a name
      int p=(int)(rnd()%256); uint64_t nm=PLAYERS+PLAYER_SIZE*(uint64_t)p+4;
      static const char pool[]={' ',' ',' ','/','/','a','Z','0',0};
      unsigned len=rnd()%40;
      for(unsigned k=0;k<32;k++){ uint8_t ch=k<len?(uint8_t)(rnd()%4?pool[rnd()%sizeof pool]:rnd()):(uint8_t)(rnd()%3?0:rnd()); *(uint8_t*)D(nm+k)=ch; }
      snapshot(); printf("== %d name %d\n",c,p);
#ifdef ENGINE
      char *r=player_clean_name(p);
#else
      char *r=((MS char*(*)(int))F(0x140091E60ULL))(p);
#endif
      printf("  -> %lld\n",r?(long long)(r-(char*)D(PLAYERS)):-1LL); diff();
    } else if(kind==0){                                 // create
      unsigned style=rnd()%4; int freeslot=(int)(rnd()%256);
      for(int i=0;i<256;i++){ int32_t v=style==0?(int)(rnd()%3):style==1?1:(int)rnd32()|1;
        if(style>=2 && i==freeslot) v=0; seti(PLAYERS+PLAYER_SIZE*i,v); }
      for(int k=4;k<0x3834;k+=4) seti(PLAYERS+PLAYER_SIZE*(uint64_t)freeslot+k,(int)rnd32());
      snapshot(); printf("== %d create\n",c);
#ifdef ENGINE
      int r=player_create();
#else
      int r=((MS int(*)(void))F(0x14005CCF0ULL))();
#endif
      printf("  -> %d\n",r); diff();
    } else {                                            // delete
      int p=(int)(rnd()%256); uint64_t pl=PLAYERS+PLAYER_SIZE*(uint64_t)p;
      seti(pl,1); seti(pl+0x2D18,rnd()%2?0:(int)rnd32());
      seti(pl+0x84,rnd()%4?(int)(rnd()%6):17); seti(pl+0x8C,rnd()%2?(int)(rnd()%300):(int)rnd32());
      seti(pl+0x3C,rnd()%3?(int)(rnd()%NACCOUNT):-1);
      int h=rnd()%3?(int)(rnd()%NHUMAN):-1; seti(pl+0x9C,h);
      if(h>=0) seti(HUMANS+HUMAN_SIZE*h+8,rnd()%3?p:(int)(rnd()%256));
      for(int k=0;k<6;k++){ unsigned m=rnd()%4; seti(CORPS+CORP_SIZE*k+0x64,m==0?p:m==1?-1:(int)(rnd()%256));
        seti(0x16D482320ULL+0x14*k,(int)(rnd()%200000)-50000); seti(0x19021F0C0ULL+0x18*k,(int)(rnd()%300)); }
      seti(0x1AD04ADC0ULL,rnd()%4?1:0); int ev=(int)(rnd()%65535); seti(0x189C1DC64ULL,ev);
      regions[NREG-1].addr=0x1873DE460ULL+0x80ULL*(uint64_t)ev;
      snapshot(); printf("== %d delete %d\n",c,p);
#ifdef ENGINE
      player_delete(p);
#else
      ((MS void(*)(int))F(0x1400802F0ULL))(p);
#endif
      diff();
    }
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
