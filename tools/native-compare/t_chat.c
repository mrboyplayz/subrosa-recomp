// What a player says against the original: 0x1401164B0 player_say (src/engine/player_chat.c) and 0x140051480
// event_message (src/engine/event_player.c). Nothing is stubbed; every word that changes in the players, humans,
// items, walkie-talkie lists, event count and the event slots used is printed.
// Mode "engine": the engine functions.
#include "peload.h"
#ifdef ENGINE
MS void player_say(int player, int action);
MS void event_message(int kind, const char *text, int speaker, int volume);
#endif
static uint32_t rs=777; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
#define PLAYERS 0x151620C60ULL
#define PLAYER_SIZE 0x3834ULL
#define HUMANS 0x18329E308ULL
#define HUMAN_SIZE 0x6FF8ULL
#define ITEMS 0x182BBB180ULL
#define ITEM_SIZE 0x1B80ULL
#define WALKIE 0x1816760A0ULL
#define EVENTS 0x1873DE460ULL
#define EVENT_COUNT 0x189C1DC64ULL
#define NHUMAN 8
#define NITEM 32
static void seti(uint64_t addr,int32_t v){ memcpy(D(addr),&v,4); }

typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={ {PLAYERS,256*PLAYER_SIZE,NULL,"players"}, {HUMANS,NHUMAN*HUMAN_SIZE,NULL,"humans"},
  {ITEMS,NITEM*ITEM_SIZE,NULL,"items"}, {WALKIE-0x404,6*0x404,NULL,"walkie"}, {EVENT_COUNT,4,NULL,"eventcount"},
  {EVENTS,16*0x80,NULL,"events0"}, {0,16*0x80,NULL,"events"} };
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr);
    for(size_t blk=0;blk<regions[r].size;blk+=4096){ size_t n=regions[r].size-blk<4096?regions[r].size-blk:4096;
      if(!memcmp(regions[r].copy+blk,now+blk,n)) continue;
      for(size_t k=blk;k+4<=blk+n;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
        if(a!=b) printf("  %s+%zx %08x\n",regions[r].name,k,b); } } } }

static void random_text(uint8_t *t,size_t room){ size_t n=rnd()%4?rnd()%40:rnd()%2?60+rnd()%8:room; for(size_t k=0;k<n&&k<room;k++) t[k]=(uint8_t)(1+rnd()%255); if(n<room) t[n]=0; }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):5000;
  static uint8_t text[200];
  for(uint64_t k=0;k<256*PLAYER_SIZE;k+=4) seti(PLAYERS+k,(int)rnd32());
  for(uint64_t k=0;k<NHUMAN*HUMAN_SIZE;k+=4) seti(HUMANS+k,(int)rnd32());
  for(uint64_t k=0;k<NITEM*ITEM_SIZE;k+=4) seti(ITEMS+k,(int)rnd32());
  for(int c=0;c<cases;c++){
    seti(0x1AD04ADC0ULL,rnd()%6?1:0);                                   // connected
    seti(0x183EBFAACULL,(int)(rnd()%8));                                // game type
    seti(0x183EBFCCCULL,rnd()%4?(int)(rnd()%5):3);                      // game state
    seti(0x183EBFD34ULL,(int)rnd32());                                  // game tick
    int count=rnd()%8?(int)(rnd()%65000):65534+(int)(rnd()%2); seti(EVENT_COUNT,count); regions[NREG-1].addr=EVENTS+0x80ULL*(uint64_t)count;
    for(int k=0;k<16*0x80;k+=4){ seti(EVENTS+k,(int)rnd32()); if(count<65530) seti(EVENTS+0x80ULL*(uint64_t)count+k,(int)rnd32()); }
    for(int i=0;i<NITEM;i++){ uint64_t it=ITEMS+ITEM_SIZE*(uint64_t)i;
      seti(it+0x14,rnd()%3?25+(int)(rnd()%2):(int)(rnd()%40));
      seti(it+0x15C,rnd()%4?(int)(rnd()%NITEM):-1);
      seti(it+0x368,rnd()%8?(int)(rnd()%4):-1); }
    for(int ch=-1;ch<4;ch++){ int n=rnd()%4?(int)(rnd()%6):0; seti(WALKIE+0x404*(int64_t)ch,n); for(int k=0;k<6;k++) seti(WALKIE+0x404*(int64_t)ch+4+4*k,(int)(rnd()%NITEM)); }
    if(rnd()%2){ int a=(int)(rnd()%NITEM), b=(int)(rnd()%NITEM); seti(ITEMS+ITEM_SIZE*a+0x14,25); seti(ITEMS+ITEM_SIZE*a+0x15C,b); seti(ITEMS+ITEM_SIZE*b+0x15C,a); }
    int p=(int)(rnd()%256); uint64_t pl=PLAYERS+PLAYER_SIZE*(uint64_t)p;
    int human=rnd()%6?(int)(rnd()%NHUMAN):-1; seti(pl+0x9C,human);
    if(human!=-1){ uint64_t h=HUMANS+HUMAN_SIZE*(uint64_t)human;
      seti(h+0x3C,rnd()%4?(int)(rnd()%100):-(int)(rnd()%3));
      for(int hand=0;hand<2;hand++){ seti(h+0x6AD0+40*hand,rnd()%4?1+(int)(rnd()%2):-(int)(rnd()%2)); seti(h+0x6AD4+40*hand,(int)(rnd()%NITEM)); } }
    unsigned kind=rnd()%3;
    if(kind<2){
      int action=(int)(rnd()%64); uint64_t ac=pl+0x1C8+0x54*(uint64_t)action;
      seti(ac,1); seti(ac+8,rnd()%4?(int)(rnd()%3):(int)rnd32()); random_text(D(ac+0x14),64);
      snapshot(); printf("== %d say %d %d\n",c,p,action);
#ifdef ENGINE
      player_say(p,action);
#else
      ((MS long long(*)(int,int))F(0x1401164B0ULL))(p,action);
#endif
    } else {
      random_text(text,sizeof text-1); text[sizeof text-1]=0;
      int what=(int)(rnd()%8), speaker=(int)rnd32(), volume=rnd()%2?(int)(rnd()%3):(int)rnd32();
      snapshot(); printf("== %d message %d %d %d\n",c,what,speaker,volume);
#ifdef ENGINE
      event_message(what,(const char*)text,speaker,volume);
#else
      ((MS long long(*)(unsigned,const void*,unsigned,unsigned))F(0x140051480ULL))((unsigned)what,text,(unsigned)speaker,(unsigned)volume);
#endif
    }
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
