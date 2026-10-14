// The local player's keys and buttons turned into actions (src/engine/player_input.c) against the original:
// 0x140116B00 player_queue_inventory_action, 0x140116A40 player_queue_chat, 0x14009EA20 player_read_hand_keys,
// 0x1400A1640 player_type_on_computer.
// Mode "engine": the engine functions.
#include "peload.h"
#ifdef ENGINE
MS int player_queue_inventory_action(int player, int what, int hand, int argument);
MS int player_queue_chat(int player, const char *text);
MS void player_read_hand_keys(int player, int human);
MS void player_type_on_computer(int player, int computer);
#endif
static uint32_t rs=31337; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
#define PLAYERS 0x151620C60ULL
#define PLAYER_SIZE 0x3834ULL
#define HUMANS 0x18329E308ULL
#define HUMAN_SIZE 0x6FF8ULL
#define ITEMS 0x182BBB180ULL
#define ITEM_SIZE 0x1B80ULL
#define KEYS_NOW 0x183F7C960ULL
#define KEYS_BEFORE 0x183F7C760ULL
#define NHUMAN 16
#define NITEM 64
static void seti(uint64_t addr,int32_t v){ memcpy(D(addr),&v,4); }
static int pick(const int *v,int n){ return v[rnd()%n]; }

typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={ {0,PLAYER_SIZE,NULL,"player"}, {0x18329CC20ULL,0x30,NULL,"keystate"}, {0x18329B180ULL,4,NULL,"blocked"},
  {KEYS_BEFORE,0x200,NULL,"before"}, {KEYS_NOW,0x200,NULL,"now"}, {0x183F7C6B0ULL,8,NULL,"mousebefore"}, {0x183F7C750ULL,8,NULL,"mouse"},
  {HUMANS,NHUMAN*HUMAN_SIZE,NULL,"humans"}, {ITEMS,NITEM*ITEM_SIZE,NULL,"items"}, {0x18329CC50ULL,32*0x14,NULL,"keyevents"} };
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr);
    for(size_t blk=0;blk<regions[r].size;blk+=4096){ size_t n=regions[r].size-blk<4096?regions[r].size-blk:4096;
      if(!memcmp(regions[r].copy+blk,now+blk,n)) continue;
      for(size_t k=blk;k+4<=blk+n;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
        if(a!=b) printf("  %s+%zx %08x\n",regions[r].name,k,b); } } } }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  static const int keys[]={8,21,30,31,32,33,34,225,20,53};
  static const int types[]={25,33,25,33,1,5,17,24,26,32,34,41};
  for(uint64_t k=0;k<NHUMAN*HUMAN_SIZE;k+=4) seti(HUMANS+k,(int)rnd32());
  for(uint64_t k=0;k<NITEM*ITEM_SIZE;k+=4) seti(ITEMS+k,(int)rnd32());
  for(int c=0;c<cases;c++){
    int p=(int)(rnd()%256); uint64_t pl=PLAYERS+PLAYER_SIZE*(uint64_t)p; regions[0].addr=pl;
    for(int k=0x1B4;k<0x16C8;k+=4) seti(pl+k,(int)rnd32());
    seti(pl+0x1B4,rnd()%16?(int)(rnd()%64):(int)(64+rnd()%40));         // sometimes past the end (still inside the record)
    seti(pl+0x120,(int)rnd32());
    unsigned kind=rnd()%5;
    if(kind==4){                                                        // typing on a computer
      static const int scancodes[]={224,82,81,80,79,4,30,40,42,44,225,83,78};
      static const int odd[]={32,13,8,0,127,96,123,200,-5,'@','_','!','`',65,90};
      static const int mods[]={1,2,3,0x40,0x80,0xC0,0x1000,0x2000};
      int n=rnd()%6?(int)(rnd()%8):rnd()%2?32:-(int)(rnd()%2); seti(0x18329CC4CULL,n);
      for(int k=0;k<32;k++){ uint64_t e=0x18329CC50ULL+0x14*(uint64_t)k;
        seti(e,rnd()%4?0:rnd()%2?1:(int)rnd32()); seti(e+4,rnd()%2?0:1);
        seti(e+8,rnd()%3?pick(scancodes,13):(int)(rnd()%300));
        seti(e+12,rnd()%3?'a'+(int)(rnd()%26):rnd()%2?33+(int)(rnd()%63):rnd()%4?pick(odd,15):(int)rnd32());
        seti(e+16,rnd()%3?0:rnd()%4?pick(mods,8):(int)rnd32()); }
      seti(0x183F7C754ULL,rnd()%5?0:1);
      int computer=(int)rnd32();
      snapshot(); printf("== %d computer %d %d\n",c,p,computer);
#ifdef ENGINE
      player_type_on_computer(p,computer);
#else
      ((MS void(*)(int,int))F(0x1400A1640ULL))(p,computer);
#endif
      diff(); continue;
    }
    if(kind==0){
      int what=(int)(rnd()%10),hand=(int)(rnd()%4),arg=(int)rnd32();
      snapshot(); printf("== %d inventory %d %d %d %d\n",c,p,what,hand,arg);
#ifdef ENGINE
      int r=player_queue_inventory_action(p,what,hand,arg);
#else
      int r=((MS int(*)(int,int,int,int))F(0x140116B00ULL))(p,what,hand,arg);
#endif
      printf("  -> %d\n",r); diff(); continue;
    }
    if(kind==1){
      char text[160]; unsigned len=rnd()%130; for(unsigned k=0;k<len;k++) text[k]=(char)(32+rnd()%90); text[len]=0;
      seti(0x183E93544ULL,(int)(rnd()%3));
      snapshot(); printf("== %d chat %d %u\n",c,p,len);
#ifdef ENGINE
      int r=player_queue_chat(p,text);
#else
      int r=((MS int(*)(int,const char*))F(0x140116A40ULL))(p,text);
#endif
      printf("  -> %d\n",r); diff(); continue;
    }
    for(int k=0;k<10;k++){ *(uint8_t*)D(KEYS_NOW+keys[k])=(uint8_t)(rnd()%2?0:rnd()%3?1:rnd()); *(uint8_t*)D(KEYS_BEFORE+keys[k])=(uint8_t)(rnd()%2?0:1); }
    seti(0x183F7C750ULL,rnd()%2); seti(0x183F7C754ULL,rnd()%2); seti(0x183F7C6B0ULL,rnd()%2); seti(0x183F7C6B4ULL,rnd()%2);
    seti(0x151E46200ULL,rnd()%2?0:(rnd()%2?1:(int)rnd32()));
    seti(0x18329B180ULL,rnd()%6?0:(int)rnd32()|1);
    for(int k=0;k<0x30;k+=4) seti(0x18329CC20ULL+k,rnd()%2?0:(rnd()%3?1:(int)rnd32()));
    int h=rnd()%8?(int)(rnd()%NHUMAN):-1;
    if(h>=0){ uint64_t hand0=HUMANS+HUMAN_SIZE*h+0x6AD0; seti(hand0,rnd()%3?1+(int)(rnd()%3):(int)(rnd()%2?0:-(int)(rnd()%4)));
      int item=rnd()%6?(int)(rnd()%NITEM):-1; seti(hand0+4,item);
      if(item>=0){ seti(ITEMS+ITEM_SIZE*item+0x14,pick(types,12)); seti(ITEMS+ITEM_SIZE*item+0x27C,rnd()%2?1:(int)(rnd()%5)); } }
    snapshot(); printf("== %d keys %d %d\n",c,p,h);
#ifdef ENGINE
    player_read_hand_keys(p,h);
#else
    ((MS void(*)(int,int))F(0x14009EA20ULL))(p,h);
#endif
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
