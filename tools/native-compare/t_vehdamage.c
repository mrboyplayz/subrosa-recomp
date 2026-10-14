// Vehicle damage (0x14000B650) with identical vehicles and event list in two processes.
// Mode "engine": src/engine/vehicle_damage.c (vehicle_damage).
#include "peload.h"
#ifdef ENGINE
MS void vehicle_damage(int vehicle, int damage);
#endif
static uint32_t rs=31337; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
#define G(type,addr) (*(type*)D(addr))
static void pr(const char *t,int i,const void *p,size_t n){ printf("%s %d:",t,i); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ uint32_t w; memcpy(&w,b+k,4); printf(" %08x",w); } printf("\n"); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  uint8_t *vehicles=&G(uint8_t,0x15F2D9200ULL), *events=&G(uint8_t,0x1873DE460ULL);
  static const int32_t healths[]={0,1,2,5,100,-3,0x7FFFFFFF,(int32_t)0x80000000};
  static const int32_t damages[]={0,1,2,5,99,100,101,-1,-7,0x7FFFFFFF,(int32_t)0x80000000};
  for(int c=0;c<cases;c++){
    int v=rnd()%4==0?511:(int)(rnd()%8); uint8_t *p=vehicles+0x5168*v;
    for(int k=0;k<0xA0;k+=4){ uint32_t w=rnd32(); memcpy(p+k,&w,4); }
    int32_t type=rnd()%4==0?13:(int32_t)(rnd()%16), health=rnd()%3?healths[rnd()%8]:(int32_t)(rnd()%120), damage=rnd()%3?damages[rnd()%11]:(int32_t)(rnd()%120);
    memcpy(p+4,&type,4); memcpy(p+0xC,&health,4);
    G(int32_t,0x1AD04ADC0ULL)=rnd()%4!=0; G(int32_t,0x183EBFD34ULL)=(int32_t)rnd32();
    int32_t ec=rnd()%9==0?0xFFFF:(int32_t)(rnd()%20); if(rnd()%11==0) ec|=0x30000; G(int32_t,0x189C1DC64ULL)=ec;
    memset(events+0x80*(size_t)ec,0xAB,0x80*2);
#ifdef ENGINE
    vehicle_damage(v,damage);
#else
    ((MS void(*)(int,int))F(0x14000B650ULL))(v,damage);
#endif
    printf("== case %d vehicle %d type %d health %d damage %d\n",c,v,type,health,damage);
    pr("vehicle",v,p,0xA0); printf("events %08x\n",G(uint32_t,0x189C1DC64ULL)); pr("event",0,events+0x80*(size_t)ec,0x100);
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
