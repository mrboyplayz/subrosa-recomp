// Vehicle lifetimes (0x14010BE50) with identical vehicles, humans, items, points, bodies and the vehicle list at
// 0x15FD16260 in two processes. Mode "engine": src/engine/world_vehicles.c (world_expire_vehicles).
#include "peload.h"
#ifdef ENGINE
MS void world_expire_vehicles(void);
#endif
static uint32_t rs=2718; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
#define G(type,addr) (*(type*)D(addr))
#define NV 512
#define NH 256
#define NI 1024
static void pr(const char *t,int i,const void *p,size_t n){ printf("%s %d:",t,i); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ uint32_t w; memcpy(&w,b+k,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; printf(" %08x",w); } printf("\n"); }
static int32_t small_vehicle(void){ unsigned k=rnd()%10; return k<6?(int32_t)(rnd()%8):k<8?-1:(int32_t)rnd32(); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):400;
  uint8_t *vehicles=&G(uint8_t,0x15F2D9200ULL), *humans=&G(uint8_t,0x18329E308ULL), *items=&G(uint8_t,0x182BBB180ULL), *bodies=&G(uint8_t,0x1449816E0ULL),
          *points=&G(uint8_t,0x151A84920ULL), *list=&G(uint8_t,0x15FD16260ULL), *events=&G(uint8_t,0x1873DE460ULL);
  static const int32_t life[]={0,1,2,-5,0xFFFE,0xFFFF,0x10000,0x7FFFFFFF,(int32_t)0x80000000};
  for(int c=0;c<cases;c++){ printf("== case %d\n",c);
    for(int v=0;v<NV;v++){ uint8_t *p=vehicles+0x5168*v; int32_t a=v<8&&rnd()%4!=0?(int32_t)(1+rnd()%3):0; memcpy(p,&a,4);
      if(v>=8) continue;
      int32_t l=life[rnd()%9]; memcpy(p+0x1C,&l,4); for(int k=0x2C;k<0x38;k+=4){ uint32_t w=rnd32(); memcpy(p+k,&w,4); }
      int32_t body=rnd()%6==0?-1:rnd()%6==0?(int32_t)rnd32():(int32_t)(rnd()%64); memcpy(p+0x28,&body,4);
      int32_t np=rnd()%5==0?-1:(int32_t)(rnd()%5); memcpy(p+0xEC,&np,4); for(int i=0;i<5;i++){ int32_t pi=(int32_t)(rnd()%32); memcpy(p+0xF0+4*i,&pi,4); }
      int32_t nw=rnd()%5==0?-2:(int32_t)(rnd()%5); memcpy(p+0x3940,&nw,4); for(int w=0;w<5;w++){ int32_t wb=rnd()%5==0?-1:rnd()%7==0?0x1FFC+(int32_t)(rnd()%9):(int32_t)(rnd()%64); memcpy(p+0x3944+172*w,&wb,4); } }
    for(int h=0;h<NH;h++){ int32_t a=rnd()%3==0, veh=small_vehicle(); memcpy(humans+0x6FF8*h,&a,4); memcpy(humans+0x6FF8*h+0x28,&veh,4); }
    for(int i=0;i<NI;i++){ uint8_t *p=items+0x1B80*i; int32_t a=rnd()%3!=0, ty=rnd()%2?27:(int32_t)(rnd()%40), l=(int32_t)(rnd()%100), veh=small_vehicle(); memcpy(p,&a,4); memcpy(p+0x14,&ty,4); memcpy(p+0x1C,&l,4); memcpy(p+0x280,&veh,4); }
    int32_t n=rnd()%6==0?-1:(int32_t)(rnd()%40); G(int32_t,0x15FE95260ULL)=n; for(int i=0;i<40;i++){ int32_t veh=small_vehicle(); memcpy(list+0x5FC*i+8,&veh,4); }
    for(int b=0;b<64+9;b++){ int32_t a=1+(int32_t)(rnd()%3); memcpy(bodies+0xBC*(b<64?b:0x1FFC+b-64),&a,4); }
    for(int p=0;p<32;p++){ int32_t a=(int32_t)rnd32(); memcpy(points+0xF0*p+4,&a,4); }
    G(int32_t,0x1AD04ADC0ULL)=rnd()%4!=0; G(int32_t,0x183EBFD34ULL)=(int32_t)rnd32();
    int32_t ec=rnd()%9==0?0xFFFF:(int32_t)(rnd()%20); if(rnd()%11==0) ec|=0x30000; G(int32_t,0x189C1DC64ULL)=ec;
    memset(events+0x80*(ec&0xFFFF),0xAB,0x80*8); if(ec>0xFFFF) memset(events+0x80*(size_t)ec,0xAB,0x80*8);
#ifdef ENGINE
    world_expire_vehicles();
#else
    ((MS void(*)(void))F(0x14010BE50ULL))();
#endif
    for(int v=0;v<8;v++){ pr("vehicle",v,vehicles+0x5168*v,0x20); }
    for(int h=0;h<NH;h++){ int32_t veh; memcpy(&veh,humans+0x6FF8*h+0x28,4); printf("%d ",veh); } printf("\n");
    for(int i=0;i<NI;i++){ int32_t l,veh; memcpy(&l,items+0x1B80*i+0x1C,4); memcpy(&veh,items+0x1B80*i+0x280,4); printf("%d/%d ",l,veh); } printf("\n");
    for(int i=0;i<40;i++){ int32_t veh; memcpy(&veh,list+0x5FC*i+8,4); printf("%d ",veh); } printf("\n");
    for(int b=0;b<64+9;b++){ int32_t a; memcpy(&a,bodies+0xBC*(b<64?b:0x1FFC+b-64),4); printf("%d",a); } printf("\n");
    for(int p=0;p<32;p++){ int32_t a; memcpy(&a,points+0xF0*p+4,4); printf("%x ",a); } printf("\n");
    printf("events %08x\n",G(uint32_t,0x189C1DC64ULL));
    for(int e=0;e<8;e++) pr("event",e,events+0x80*((ec&0xFFFF)+e),0x30);
    if(ec>0xFFFF) for(int e=0;e<8;e++) pr("event_hi",e,events+0x80*((size_t)ec+e),0x30);
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
