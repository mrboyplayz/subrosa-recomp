// Selling stocks and sharing out a team's money (src/engine/stocks.c) against the original:
// 0x1401189F0 stocks_buy, 0x14011AF80 stocks_sell, 0x140194C10 corporation_share_team_money. Nothing is stubbed.
// Mode "engine": the engine functions.
#include "peload.h"
#ifdef ENGINE
MS void stocks_buy(int player, int count);
MS void stocks_sell(int player, int count);
MS void corporation_share_team_money(int team);
#endif
static uint32_t rs=4242; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
#define PLAYERS 0x151620C60ULL
#define PLAYER_SIZE 0x3834ULL
#define CORPS 0x183EBFD60ULL
#define CORP_SIZE 0x5BC4ULL
#define STOCKS 0x19021F0C0ULL
#define FUNDS 0x16D482320ULL
#define GAME_TYPE 0x183EBFAACULL
static void seti(uint64_t addr,int32_t v){ memcpy(D(addr),&v,4); }
static void setf(uint64_t addr,float v){ memcpy(D(addr),&v,4); }
static int32_t anyint(void){ switch(rnd()%6){ case 0: return 0; case 1: return (int)(rnd()%100); case 2: return -(int)(rnd()%100);
  case 3: return (int)(rnd()%2000000)-1000000; case 4: return rnd()%2?0x7FFFFFFF-(int)(rnd()%5):(int)(0x80000000u+rnd()%5); default: return (int)rnd32(); } }

typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={ {PLAYERS,256*PLAYER_SIZE,NULL,"players"}, {CORPS,6*CORP_SIZE,NULL,"corps"},
  {STOCKS,6*0x18,NULL,"stocks"}, {FUNDS,6*0x14,NULL,"funds"}, {GAME_TYPE,4,NULL,"type"} };
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr);
    for(size_t blk=0;blk<regions[r].size;blk+=4096){ size_t n=regions[r].size-blk<4096?regions[r].size-blk:4096;
      if(!memcmp(regions[r].copy+blk,now+blk,n)) continue;
      for(size_t k=blk;k+4<=blk+n;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
        if(a!=b) printf("  %s+%zx %08x\n",regions[r].name,k,b); } } } }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  for(uint64_t k=0;k<256*PLAYER_SIZE;k+=4) seti(PLAYERS+k,(int)rnd32());
  for(uint64_t k=0;k<6*CORP_SIZE;k+=4) seti(CORPS+k,(int)rnd32());
  for(int c=0;c<cases;c++){
    seti(GAME_TYPE,(int)(rnd()%6));
    for(int t=0;t<6;t++){
      uint64_t s=STOCKS+0x18*t;
      seti(s,rnd()%5?(int)(rnd()%500):anyint());
      if(rnd()%8) setf(s+4,(float)(rnd()%40000)/100.0f); else seti(s+4,(int)rnd32());
      seti(s+0x14,rnd()%3?(int)(rnd()%5000):anyint());
      seti(FUNDS+0x14*t,anyint()); seti(FUNDS+0x14*t+4,anyint());
      seti(CORPS+CORP_SIZE*t+0x64,rnd()%3?(int)(rnd()%256):rnd()%2?-1:(int)rnd32());
      for(int m=0;m<16;m++){ uint64_t mi=CORPS+CORP_SIZE*t+0x19C+0x45C*m;
        seti(mi,rnd()%2?0:rnd()%3?1:(int)rnd32());
        seti(mi+0x4C,rnd()%3?(int)(rnd()%8000):anyint()); }
    }
    unsigned style=rnd()%3;                             // players: few, many, or all of one team
    int one=(int)(rnd()%6);
    for(int p=0;p<256;p++){ uint64_t pl=PLAYERS+PLAYER_SIZE*p;
      seti(pl,style==0?(rnd()%8==0):rnd()%2?1:(rnd()%4?0:(int)rnd32()));
      seti(pl+0x84,style==2&&rnd()%2?one:rnd()%4?(int)(rnd()%6):rnd()%2?17:(int)rnd32()); }
    unsigned kind=rnd()%3;
    if(kind==2){
      int p=(int)(rnd()%256); uint64_t pl=PLAYERS+PLAYER_SIZE*(uint64_t)p;
      seti(pl+0x84,rnd()%6?(int)(rnd()%6):rnd()%2?-1:17);
      seti(pl+0x8C,rnd()%4?(int)(rnd()%10050):rnd()%3==0?10000:rnd()%2?9990+(int)(rnd()%20):anyint());
      seti(pl+0x4C,rnd()%3?(int)(rnd()%2000000):anyint());
      int count=rnd()%3?(int)(rnd()%2000):anyint();
      snapshot(); printf("== %d buy %d %d\n",c,p,count);
#ifdef ENGINE
      stocks_buy(p,count);
#else
      ((MS long long(*)(int,int))F(0x1401189F0ULL))(p,count);
#endif
    } else if(kind==1){
      int p=(int)(rnd()%256); uint64_t pl=PLAYERS+PLAYER_SIZE*(uint64_t)p;
      seti(pl+0x84,rnd()%6?(int)(rnd()%6):rnd()%3==0?17:rnd()%2?6+(int)(rnd()%2):(int)rnd32());   // 6, 7: just past the last
      seti(pl+0x8C,rnd()%4?(int)(rnd()%200):anyint()); seti(pl+0x4C,anyint());
      int count=rnd()%3?(int)(rnd()%200):anyint();
      snapshot(); printf("== %d sell %d %d\n",c,p,count);
#ifdef ENGINE
      stocks_sell(p,count);
#else
      ((MS long long(*)(int,int))F(0x14011AF80ULL))(p,count);
#endif
    } else {
      int t=style==2?one:(int)(rnd()%6);
      snapshot(); printf("== %d share %d\n",c,t);
#ifdef ENGINE
      corporation_share_team_money(t);
#else
      ((MS long long(*)(int))F(0x140194C10ULL))(t);
#endif
    }
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
