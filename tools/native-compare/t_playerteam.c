// Player events and team changes against the original: 0x140051DC0 event_update_player,
// 0x140051F50 event_update_player_finance (src/engine/event_player.c), 0x140138430 player_set_team,
// 0x14011B7F0 player_take_team_damage (src/engine/player_team.c). The human's damage routine
// (0x1400A9760) is replaced in both images by a stub that prints its arguments.
// Mode "engine": the engine functions.
#include "peload.h"
#ifdef ENGINE
MS void event_update_player(int player);
MS void event_update_player_finance(int player);
MS void player_set_team(int player, int team);
MS void player_take_team_damage(int player, int damage);
#endif
static uint32_t rs=9001; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
#define PLAYERS 0x151620C60ULL
#define PLAYER_SIZE 0x3834ULL
#define HUMANS 0x18329E308ULL
#define HUMAN_SIZE 0x6FF8ULL
#define CORPS 0x183EBFD60ULL
#define CORP_SIZE 0x5BC4ULL
#define FUNDS 0x16D482320ULL
#define EVENTS 0x1873DE460ULL
#define EVENT_COUNT 0x189C1DC64ULL
#define VERSIONS 0x18399DAE0ULL
#define NHUMAN 16
static void seti(uint64_t addr,int32_t v){ memcpy(D(addr),&v,4); }

static MS long long s_damage(int h,unsigned part,long long unused,int amount){ printf("call damage %d %u %lld %d\n",h,part,unused,amount); return 0; }

typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={ {PLAYERS,256*PLAYER_SIZE,NULL,"players"}, {HUMANS,NHUMAN*HUMAN_SIZE,NULL,"humans"},
  {CORPS,6*CORP_SIZE,NULL,"corps"}, {FUNDS,6*0x14,NULL,"funds"}, {VERSIONS,NHUMAN*4,NULL,"versions"},
  {EVENT_COUNT,4,NULL,"eventcount"}, {0,0x100,NULL,"events"} };
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr);
    for(size_t blk=0;blk<regions[r].size;blk+=4096){ size_t n=regions[r].size-blk<4096?regions[r].size-blk:4096;
      if(!memcmp(regions[r].copy+blk,now+blk,n)) continue;
      for(size_t k=blk;k+4<=blk+n;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
        if(a!=b) printf("  %s+%zx %08x\n",regions[r].name,k,b); } } } }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):5000;
  hook(0x1400A9760ULL,s_damage);
  for(uint64_t k=0;k<256*PLAYER_SIZE;k+=4) seti(PLAYERS+k,(int)rnd32());
  for(uint64_t k=0;k<NHUMAN*HUMAN_SIZE;k+=4) seti(HUMANS+k,(int)rnd32());
  for(uint64_t k=0;k<6*CORP_SIZE;k+=4) seti(CORPS+k,(int)rnd32());
  static const int suits[]={0,1,2,3,4,5,6,7,8,9,10,11,3,7,8,4};
  for(int c=0;c<cases;c++){
    seti(0x1AD04ADC0ULL,rnd()%4?1:0);                                   // connected
    seti(0x183EBFAACULL,(int)(rnd()%8));                                // game type
    seti(0x183EBFCE8ULL,rnd()%4?(int)(rnd()%201):(int)rnd32());         // team damage percent
    seti(0x183EBFD34ULL,(int)rnd32());                                  // game tick
    int count=rnd()%8?(int)(rnd()%65534):65535; seti(EVENT_COUNT,count); regions[NREG-1].addr=EVENTS+0x80ULL*(uint64_t)count;
    for(int k=0;k<0x100;k+=4) seti(EVENTS+0x80ULL*(uint64_t)count+k,(int)rnd32());
    for(int t=0;t<6;t++){ seti(FUNDS+0x14*t,(int)(rnd()%200000)-50000); seti(CORPS+CORP_SIZE*t+0x64,rnd()%3?(int)(rnd()%256):-1); }
    for(int p=0;p<256;p++){ uint64_t pl=PLAYERS+PLAYER_SIZE*p; seti(pl,rnd()%2); seti(pl+0x84,rnd()%4?(int)(rnd()%6):17); }
    int p=(int)(rnd()%256); uint64_t pl=PLAYERS+PLAYER_SIZE*(uint64_t)p;
    seti(pl+0x84,rnd()%5?(int)(rnd()%6):rnd()%2?17:(int)rnd32());
    seti(pl+0x9C,rnd()%4?(int)(rnd()%NHUMAN):-1);
    seti(pl+0x60,rnd()%3?0:(int)rnd32()); seti(pl+0x2D18,rnd()%2?0:rnd()%2?1:(int)rnd32());
    seti(pl+0x37C4,suits[rnd()%16]);
    { int own=*(int32_t*)D(pl+0x84); if(rnd()%2) seti(CORPS+CORP_SIZE*((unsigned)own<6&&rnd()%4?(unsigned)own:rnd()%6)+0x64,p); }
    if(rnd()%3==0) seti(0x183EBFAACULL,4);                              // world: the manager's team money is shared out
    unsigned kind=rnd()%4;
    if(kind==0){
      snapshot(); printf("== %d player event %d\n",c,p);
#ifdef ENGINE
      event_update_player(p);
#else
      ((MS void(*)(int))F(0x140051DC0ULL))(p);
#endif
    } else if(kind==1){
      snapshot(); printf("== %d finance event %d\n",c,p);
#ifdef ENGINE
      event_update_player_finance(p);
#else
      ((MS long long(*)(int))F(0x140051F50ULL))(p);
#endif
    } else if(kind==2){
      int who=rnd()%16?p:-1;
      int team=rnd()%3?(int)(rnd()%6):rnd()%2?17:rnd()%2?(int)(rnd()%20):-1;
      if(rnd()%6==0) team=*(int32_t*)D(pl+0x84);
      snapshot(); printf("== %d set team %d %d\n",c,who,team);
#ifdef ENGINE
      player_set_team(who,team);
#else
      ((MS long long(*)(int,int))F(0x140138430ULL))(who,team);
#endif
    } else {
      int who=rnd()%16?p:(rnd()%2?256+(int)(rnd()%4):-1);
      if(who==256){ seti(PLAYERS+PLAYER_SIZE*256+0x60,0); seti(PLAYERS+PLAYER_SIZE*256+0x9C,-1); }   // just past the table: as if a player
      int damage=rnd()%5?(int)(rnd()%300):rnd()%2?-(int)(rnd()%10):(int)rnd32();
      snapshot(); printf("== %d team damage %d %d\n",c,who,damage);
#ifdef ENGINE
      player_take_team_damage(who,damage);
#else
      ((MS long long(*)(int,int))F(0x14011B7F0ULL))(who,damage);
#endif
    }
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
