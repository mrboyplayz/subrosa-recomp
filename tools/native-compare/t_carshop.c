// Buying a car at a car shop against the original: 0x1400EFD20 player_buy_car (src/engine/car_shop.c). Making an
// item (0x140054130), moving it into a slot (0x1400E35D0, engine item_transfer) and making a vehicle (0x14005BCA0,
// engine vehicle_create) are replaced in both images by stubs that print their arguments and answer from the test's
// sequence; in mode "engine" the two engine functions are patched in the test program itself. The rotation and the
// events run for real. Every word that changes in the player, buildings, vehicles, items and events is printed.
#include "peload.h"
#ifdef ENGINE
MS void player_buy_car(int player, int choice);
MS uint64_t item_transfer(int item, int child, int human, int slot);
MS int vehicle_create(int type, const float position[3], const float velocity[3], const float rotation[9], uint32_t color);
#endif
static uint32_t rs=5150; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
#define PLAYERS 0x151620C60ULL
#define PLAYER_SIZE 0x3834ULL
#define BUILDINGS 0x1760C5638ULL
#define BUILDING_SIZE 0xDB0CULL
#define ITEMS 0x182BBB180ULL
#define ITEM_SIZE 0x1B80ULL
#define VEHICLES 0x15F2D9200ULL
#define VEHICLE_SIZE 0x5168ULL
#define EVENTS 0x1873DE460ULL
#define EVENT_COUNT 0x189C1DC64ULL
#define NBUILD 4
#define NITEM 16
#define NVEH 8
static void seti(uint64_t addr,int32_t v){ memcpy(D(addr),&v,4); }
static void setf(uint64_t addr,float v){ memcpy(D(addr),&v,4); }

static uint64_t next_item, next_vehicle;
static MS uint64_t s_create_item(int type,const uint32_t *pos,const void *vel,const uint32_t *rot){
  printf("call item %d %08x %08x %08x %d",type,pos[0],pos[1],pos[2],vel!=NULL);
  for(int k=0;k<9;k++) printf(" %08x",rot[k]);
  printf(" -> %d\n",(int)next_item); uint64_t r=next_item; next_item=rnd()%2?(uint64_t)(rnd()%NITEM):((uint64_t)rnd32()<<32)|(rnd()%NITEM); return r; }
static MS uint64_t s_transfer(int item,int child,int human,int slot){
  uint64_t r=rnd()%3?0:rnd()%2?1:((uint64_t)rnd32()<<32);
  printf("call transfer %d %d %d %d -> %llx\n",item,child,human,slot,(unsigned long long)r); return r; }
static MS uint64_t s_create_vehicle(int type,const uint32_t *pos,const void *vel,const uint32_t *rot,uint32_t color){
  printf("call vehicle %d %08x %08x %08x %d",type,pos[0],pos[1],pos[2],vel!=NULL);
  for(int k=0;k<9;k++) printf(" %08x",rot[k]);
  printf(" %08x -> %d\n",color,(int)next_vehicle); uint64_t r=next_vehicle; next_vehicle=rnd()%4?(uint64_t)(rnd()%NVEH):(uint64_t)(int64_t)-1; return r; }

#ifdef ENGINE
#ifdef _WIN32
static void hook_engine(void *fn,void *stub){ DWORD old; VirtualProtect(fn,12,PAGE_EXECUTE_READWRITE,&old);
  uint8_t *p=fn; p[0]=0x48;p[1]=0xB8;memcpy(p+2,&stub,8);p[10]=0xFF;p[11]=0xE0; VirtualProtect(fn,12,old,&old); FlushInstructionCache(GetCurrentProcess(),fn,12); }
#else
static void hook_engine(void *fn,void *stub){ uintptr_t page=(uintptr_t)fn&~(uintptr_t)4095; mprotect((void*)page,8192,PROT_READ|PROT_WRITE|PROT_EXEC);
  uint8_t *p=fn; p[0]=0x48;p[1]=0xB8;memcpy(p+2,&stub,8);p[10]=0xFF;p[11]=0xE0; }
#endif
#endif

typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={ {0,PLAYER_SIZE,NULL,"player"}, {BUILDINGS,NBUILD*BUILDING_SIZE,NULL,"buildings"},
  {VEHICLES,NVEH*VEHICLE_SIZE,NULL,"vehicles"}, {ITEMS,NITEM*ITEM_SIZE,NULL,"items"}, {EVENT_COUNT,4,NULL,"eventcount"}, {0,0x100,NULL,"events"} };
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr);
    for(size_t blk=0;blk<regions[r].size;blk+=4096){ size_t n=regions[r].size-blk<4096?regions[r].size-blk:4096;
      if(!memcmp(regions[r].copy+blk,now+blk,n)) continue;
      for(size_t k=blk;k+4<=blk+n;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
        if(a!=b) printf("  %s+%zx %08x\n",regions[r].name,k,b); } } } }

static float rf(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()%10000)/10000.0f; }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):5000;
  hook(0x140054130ULL,s_create_item); hook(0x1400E35D0ULL,s_transfer); hook(0x14005BCA0ULL,s_create_vehicle);
#ifdef ENGINE
  hook_engine((void*)item_transfer,s_transfer); hook_engine((void*)vehicle_create,s_create_vehicle);
#endif
  next_item=rnd()%NITEM; next_vehicle=rnd()%NVEH;
  for(int c=0;c<cases;c++){
    seti(0x1AD04ADC0ULL,rnd()%4?1:0);                                   // connected
    seti(0x183EBFAACULL,rnd()%2?3:(int)(rnd()%8));                      // game type
    seti(0x183EBFD34ULL,(int)rnd32());
    int count=(int)(rnd()%65000); seti(EVENT_COUNT,count); regions[NREG-1].addr=EVENTS+0x80ULL*(uint64_t)count;
    for(int b=0;b<NBUILD;b++){ uint64_t bl=BUILDINGS+BUILDING_SIZE*(uint64_t)b;
      for(int k=0;k<9;k++) setf(bl+0x1C+4*k,rf(-1,1));
      for(int k=0;k<3;k++) setf(bl+0xCABC+4*k,rf(-500,500));
      seti(bl+0xCAB8,rnd()%4?(int)(rnd()%8):(int)rnd32());
      seti(bl+0xC9F4,rnd()%5?(int)(rnd()%17):-(int)(rnd()%2));
      for(int k=0;k<17;k++){ uint64_t e=bl+0xC9F8+12*(uint64_t)k; seti(e,(int)(rnd()%30)); seti(e+4,rnd()%4?(int)(rnd()%5000):(int)rnd32()); seti(e+8,(int)rnd32()); } }
    int p=(int)(rnd()%256); uint64_t pl=PLAYERS+PLAYER_SIZE*(uint64_t)p; regions[0].addr=pl;
    for(uint64_t k=0;k<PLAYER_SIZE;k+=4) seti(pl+k,(int)rnd32());
    seti(pl+0x9C,rnd()%6?(int)(rnd()%8):-1);
    seti(pl+0x6C,rnd()%4?(int)(rnd()%4):(int)rnd32());
    seti(pl+0x4C,rnd()%4?(int)(rnd()%8000):(int)rnd32());
    seti(pl+0x168,(int)(rnd()%NBUILD));
    int choice=rnd()%8?1+(int)(rnd()%16):(int)(rnd()%2);
    snapshot(); printf("== %d buy %d %d\n",c,p,choice);
#ifdef ENGINE
    player_buy_car(p,choice);
#else
    ((MS long long(*)(int,int))F(0x1400EFD20ULL))(p,choice);
#endif
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
