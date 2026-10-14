// A player's saved inventory, mute toggle and a corporation's cars against the original: 0x140117340
// player_save_inventory, 0x140117020 player_restore_inventory, 0x140117820 player_toggle_mute, 0x1400F00D0
// corporation_spawn_car (src/engine/player_inventory.c). Making an item (0x140054130), moving it into a slot
// (0x1400E35D0, engine item_transfer) and making a vehicle (0x14005BCA0, engine vehicle_create) are replaced in
// both images by stubs that print their arguments and answer from the test's sequence; in mode "engine" the two
// engine functions are patched in the test program itself.
// Every word that changes in the players, humans, items, vehicles, saved cars, corporations and mute lists is
// printed.
#include "peload.h"
#ifdef ENGINE
MS void player_save_inventory(int player);
MS void player_restore_inventory(int player);
MS void player_toggle_mute(uint32_t player);
MS int corporation_spawn_car(int corporation, int type, uint32_t color);
MS uint64_t item_transfer(int item, int child, int human, int slot);
MS int vehicle_create(int type, const float position[3], const float velocity[3], const float rotation[9], uint32_t color);
#endif
static uint32_t rs=4242; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
#define PLAYERS 0x151620C60ULL
#define PLAYER_SIZE 0x3834ULL
#define HUMANS 0x18329E308ULL
#define HUMAN_SIZE 0x6FF8ULL
#define ITEMS 0x182BBB180ULL
#define ITEM_SIZE 0x1B80ULL
#define ITEM_TYPES 0x182A7E180ULL
#define ITEM_TYPE_SIZE 0x13D0ULL
#define VEHICLES 0x15F2D9200ULL
#define VEHICLE_SIZE 0x5168ULL
#define CORPS 0x183EBFD60ULL
#define CORP_SIZE 0x5BC4ULL
#define SAVED_COUNT 0x16B2A2EE0ULL
#define SAVED 0x16B2A2EE4ULL
#define MUTE 0x183F7AEF4ULL
#define NHUMAN 8
#define NITEM 48
#define NVEH 12
static void seti(uint64_t addr,int32_t v){ memcpy(D(addr),&v,4); }
static int32_t geti(uint64_t addr){ int32_t v; memcpy(&v,D(addr),4); return v; }

static uint64_t next_item, next_vehicle;
static MS uint64_t s_create_item(int type,const uint32_t *pos,const void *vel,const uint32_t *rot){
  printf("call item %d %08x %08x %08x %d",type,pos[0],pos[1],pos[2],vel!=NULL);
  for(int k=0;k<9;k++) printf(" %08x",rot[k]);
  printf(" -> %d\n",(int)next_item); uint64_t r=next_item; next_item=rnd()%2?(uint64_t)(rnd()%NITEM):((uint64_t)rnd32()<<32)|(rnd()%NITEM); return r; }
static MS uint64_t s_transfer(int item,int child,int human,int slot){ printf("call transfer %d %d %d %d\n",item,child,human,slot); return 0; }
static MS uint64_t s_create_vehicle(int type,const uint32_t *pos,const void *vel,const uint32_t *rot,uint32_t color){
  printf("call vehicle %d %08x %08x %08x %d",type,pos[0],pos[1],pos[2],vel!=NULL);
  for(int k=0;k<9;k++) printf(" %08x",rot[k]);
  printf(" %08x -> %d\n",color,(int)next_vehicle); uint64_t r=next_vehicle; next_vehicle=rnd()%4?(uint64_t)(rnd()%NVEH):(uint64_t)(int64_t)-1; return r; }

#ifdef ENGINE
// The engine calls item_transfer and vehicle_create directly, so they are patched where this program has them.
#ifdef _WIN32
static void hook_engine(void *fn,void *stub){ DWORD old; VirtualProtect(fn,12,PAGE_EXECUTE_READWRITE,&old);
  uint8_t *p=fn; p[0]=0x48;p[1]=0xB8;memcpy(p+2,&stub,8);p[10]=0xFF;p[11]=0xE0; VirtualProtect(fn,12,old,&old); FlushInstructionCache(GetCurrentProcess(),fn,12); }
#else
static void hook_engine(void *fn,void *stub){ uintptr_t page=(uintptr_t)fn&~(uintptr_t)4095; mprotect((void*)page,8192,PROT_READ|PROT_WRITE|PROT_EXEC);
  uint8_t *p=fn; p[0]=0x48;p[1]=0xB8;memcpy(p+2,&stub,8);p[10]=0xFF;p[11]=0xE0; }
#endif
#endif

typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={ {PLAYERS,256*PLAYER_SIZE,NULL,"players"}, {HUMANS,NHUMAN*HUMAN_SIZE,NULL,"humans"},
  {ITEMS,NITEM*ITEM_SIZE,NULL,"items"}, {VEHICLES,NVEH*VEHICLE_SIZE,NULL,"vehicles"}, {CORPS,6*CORP_SIZE,NULL,"corps"},
  {SAVED_COUNT,4+72*0x40,NULL,"saved"}, {MUTE,0x400+4+0x1000,NULL,"mute"} };
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr);
    for(size_t blk=0;blk<regions[r].size;blk+=4096){ size_t n=regions[r].size-blk<4096?regions[r].size-blk:4096;
      if(!memcmp(regions[r].copy+blk,now+blk,n)) continue;
      for(size_t k=blk;k+4<=blk+n;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
        if(a!=b) printf("  %s+%zx %08x\n",regions[r].name,k,b); } } } }

static int item_type(void){ unsigned k=rnd()%8; return k<4?(int)(rnd()%15):k==4?18:k==5?27:k==6?(int)(rnd()%40):rnd()%2?(int)(100+rnd()%900):-(int)(rnd()%3); }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):5000;
  hook(0x140054130ULL,s_create_item); hook(0x1400E35D0ULL,s_transfer); hook(0x14005BCA0ULL,s_create_vehicle);
#ifdef ENGINE
  hook_engine((void*)item_transfer,s_transfer); hook_engine((void*)vehicle_create,s_create_vehicle);
#endif
  for(uint64_t k=0;k<256*PLAYER_SIZE;k+=4) seti(PLAYERS+k,(int)rnd32());
  for(uint64_t k=0;k<NHUMAN*HUMAN_SIZE;k+=4) seti(HUMANS+k,(int)rnd32());
  for(uint64_t k=0;k<NITEM*ITEM_SIZE;k+=4) seti(ITEMS+k,(int)rnd32());
  for(uint64_t k=0;k<NVEH*VEHICLE_SIZE;k+=4) seti(VEHICLES+k,(int)rnd32());
  for(uint64_t k=0;k<6*CORP_SIZE;k+=4) seti(CORPS+k,(int)rnd32());
  for(uint64_t k=0;k<4+72*0x40;k+=4) seti(SAVED_COUNT+k,(int)rnd32());
  for(int t=0;t<40;t++){ seti(ITEM_TYPES+ITEM_TYPE_SIZE*t+0x10,rnd()%2?0:rnd()%2?1:(int)rnd32()); seti(ITEM_TYPES+ITEM_TYPE_SIZE*t+0x24,rnd()%8?(int)(rnd()%40):(int)rnd32()); }
  seti(ITEM_TYPES+ITEM_TYPE_SIZE*3+0x24,0x7FFFFFFF);                  // a full magazine type: the + 1 wraps
  next_item=rnd()%NITEM; next_vehicle=rnd()%NVEH;
  for(int c=0;c<cases;c++){
    seti(0x183EBFAACULL,rnd()%2?4:(int)(rnd()%8));                     // game type
    int p=(int)(rnd()%256); uint64_t pl=PLAYERS+PLAYER_SIZE*(uint64_t)p;
    int human=rnd()%6?(int)(rnd()%NHUMAN):-1; seti(pl+0x9C,human);
    seti(pl+0x84,rnd()%4?(int)(rnd()%3):rnd()%2?(int)(rnd()%6):rnd()%2?17:(int)rnd32());
    // the human's slots: items of every kind
    if(human!=-1) for(int s=0;s<7;s++){ uint64_t hs=HUMANS+HUMAN_SIZE*(uint64_t)human+0x6AD0+40*(uint64_t)s;
      int n=rnd()%3?(int)(rnd()%4):rnd()%2?(int)(rnd()%9):-(int)(rnd()%3); seti(hs,n);
      for(int e=0;e<8;e++) seti(hs+4+4*e,(int)(rnd()%NITEM)); }
    for(int i=0;i<NITEM;i++){ uint64_t it=ITEMS+ITEM_SIZE*(uint64_t)i;
      if(c&&rnd()%3) continue;
      seti(it+0x14,item_type()); seti(it+0x34,rnd()%2?0:rnd()%2?1:rnd()%2?(int)(rnd()%3):-(int)(rnd()%3)); seti(it+0x38,(int)(rnd()%NITEM));
      seti(it+0x144,rnd()%3?(int)(rnd()%40):rnd()%2?-(int)(rnd()%5):(int)rnd32()); seti(it+0x280,rnd()%4?(int)(rnd()%NVEH):-1); }
    for(int v=0;v<NVEH;v++) if(rnd()%2) seti(VEHICLES+VEHICLE_SIZE*(uint64_t)v+0xC,rnd()%2?(int)(rnd()%101):-(int)(rnd()%5));
    // the player's saved slots
    for(int s=0;s<8;s++){ uint64_t ps=pl+0x17F4+100*(uint64_t)s;
      seti(ps,rnd()%3?(int)(rnd()%4):rnd()%2?(int)(rnd()%9):-(int)(rnd()%3));
      for(int e=0;e<8;e++){ seti(ps+4+12*e,item_type()); seti(ps+8+12*e,rnd()%3?(int)(rnd()%NVEH):rnd()%2?-(int)(rnd()%3):(int)rnd32()); seti(ps+12+12*e,(int)rnd32()); } }
    { seti(SAVED_COUNT,rnd()%4?(int)(rnd()%12):0);
      for(int r=0;r<12;r++){ seti(SAVED+0x40*r+8,(int)(rnd()%100)); seti(SAVED+0x40*r+0xC,(int)(rnd()%NVEH)); } }
    // corporation -1's record lies just before the table: give it a free place, so -1 must be refused
    seti(CORPS-CORP_SIZE+0x4BB8,3); for(int k=0;k<3;k++) seti(CORPS-CORP_SIZE+0x4BBC+0x34*(uint64_t)k,0);
    for(int t=0;t<6;t++){ uint64_t cp=CORPS+CORP_SIZE*(uint64_t)t; int n=rnd()%6?(int)(rnd()%8):rnd()%2?64:-(int)(rnd()%3); seti(cp+0x4BB8,n);
      for(int k=0;k<64;k++) seti(cp+0x4BBC+0x34*(uint64_t)k,rnd()%3?1:rnd()%2?0:(int)rnd32()); }
    // mute: flags, list with the player's number in it now and then
    for(int k=0;k<256;k++) seti(MUTE+4*(uint64_t)k,rnd()%3?(int)(rnd()%2):(int)(rnd()%4));
    { int n=rnd()%8?(int)(rnd()%12):rnd()%2?1024:rnd()%2?1023:0; seti(MUTE+0x400,n); uint32_t phone=(uint32_t)geti(pl+0x30);
      int full=n>=1023&&rnd()%2;                                       // a full list without the number
      for(int k=0;k<n&&k<1024;k++) seti(MUTE+0x404+4*(uint64_t)k,full?(int)(phone+1+k):rnd()%3?(int)(rnd()%8):(int)phone); }
    unsigned kind=rnd()%4;
    if(kind==0){
      snapshot(); printf("== %d save %d\n",c,p);
#ifdef ENGINE
      player_save_inventory(p);
#else
      ((MS long long(*)(int))F(0x140117340ULL))(p);
#endif
    } else if(kind==1){
      snapshot(); printf("== %d restore %d\n",c,p);
#ifdef ENGINE
      player_restore_inventory(p);
#else
      ((MS long long(*)(int))F(0x140117020ULL))(p);
#endif
    } else if(kind==2){
      uint32_t who=rnd()%8?(uint32_t)p:rnd()%2?256u+rnd()%4:rnd32();
      snapshot(); printf("== %d mute %u\n",c,who);
#ifdef ENGINE
      player_toggle_mute(who);
#else
      ((MS void(*)(uint32_t))F(0x140117820ULL))(who);
#endif
    } else {
      int corp=rnd()%8?(int)(rnd()%6):-1, type=(int)(rnd()%30); uint32_t color=rnd32();
      snapshot(); printf("== %d corporation car %d %d %08x\n",c,corp,type,color);
#ifdef ENGINE
      int r=corporation_spawn_car(corp,type,color);
#else
      int r=(int)((MS long long(*)(int,int,uint32_t))F(0x1400F00D0ULL))(type,corp,color);
#endif
      printf("-> %d\n",r);
    }
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
