// Item removal 0x14007F970 in two processes on identical items, vehicles and bodies. Its recompiled callees
// 0x1400CDFF0 is replaced in both by a stub that logs its argument; taking it from a hand (0x1400CA7C0) and the detach
// (0x1400CA9B0) run for real.
// Mode "engine": src/engine/world_items.c (world_remove_item).
#include "peload.h"
#ifdef ENGINE
MS void world_remove_item(int);
#endif
static uint32_t rs=4242; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
#define G(type,addr) (*(type*)D(addr))
#define NI 16
static MS uint64_t s_cdff0(int32_t item){ printf("call cdff0 %d\n",item); return 0; }
static void pr(const char *t,int i,const void *p,size_t n){ printf("%s %d:",t,i); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ uint32_t w; memcpy(&w,b+k,4); printf(" %08x",w); } printf("\n"); }
static void put(uint8_t *p,int off,int32_t v){ memcpy(p+off,&v,4); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  hook(0x1400CDFF0ULL,s_cdff0);
  int cases=argc>3?atoi(argv[3]):3000;
  uint8_t *items=&G(uint8_t,0x182BBB180ULL), *vehicles=&G(uint8_t,0x15F2D9200ULL), *bodies=&G(uint8_t,0x1449816E0ULL), *links=&G(uint8_t,0x1857BD740ULL);
  int32_t *changes=&G(int32_t,0x18329B1E0ULL);
  for(int c=0;c<cases;c++){ printf("== case %d\n",c);
    for(int i=0;i<NI;i++){ uint8_t *p=items+0x1B80*i;
      put(p,0,1+(int32_t)(rnd()%2)); put(p,0x14,rnd()%3==0?27:rnd()%3==0?29:(int32_t)(rnd()%40));
      put(p,0x24,rnd()%2?-1:(int32_t)(rnd()%NI)); put(p,0x28,rnd()%2?-1:(int32_t)(rnd()%NI)); put(p,0x2C,(int32_t)rnd32());
      int nc=(int)(rnd()%5)-(rnd()%8==0?1:0); put(p,0x34,nc); for(int k=0;k<5;k++) put(p,0x38+4*k,rnd()%9==0?0x400+(int32_t)(rnd()%3):(int32_t)(rnd()%NI));
      put(p,0x58,rnd()%6==0?-1:rnd()%6==0?0x2000:(int32_t)(rnd()%32));
      put(p,0x138,(int32_t)(rnd()%3)-1); put(p,0x318,(int32_t)(rnd()%2));
      put(p,0x170,rnd()%2?(int32_t)rnd32():0); put(p,0x174,rnd()%2?(int32_t)rnd32():0); for(int k=0;k<64;k++) put(p,0x178+4*k,(int32_t)(rnd()%64));
      put(p,0x280,rnd()%5==0?-1:rnd()%5==0?0x200:(int32_t)(rnd()%8)); }
    uint8_t *humans=&G(uint8_t,0x18329E308ULL);
    for(int h=0;h<NI;h++){ uint8_t *p=humans+0x6FF8*h; for(int k=0x494;k<0x4F8;k+=4){ float f=((int)(rnd()%2000)-1000)/64.0f; memcpy(p+k,&f,4); }
      for(int s2=0;s2<4;s2++){ put(p,0x6AD0+40*s2,(int32_t)(rnd()%5)-(rnd()%9==0?1:0)); for(int k=0;k<9;k++) put(p,0x6AD4+40*s2+4*k,(int32_t)(rnd()%NI)); } }
    for(int i=0;i<NI;i++) put(items+0x1B80*i,0x2C,(int32_t)(rnd()%4));
    for(int v=0;v<8;v++) put(vehicles+0x5168*v,0x1C,100);
    for(int b=0;b<32;b++) put(bodies+0xBC*b,0,1);
    put(bodies+0xBC*0x2000,0,1);
    for(int k=0;k<64;k++) put(links+156*k,0,7);
    for(int i=0;i<NI+3;i++) changes[i]=(int32_t)(rnd()%5);
    G(int32_t,0x1AD04ADC0ULL)=rnd()%2; G(int32_t,0x183F7AEE8ULL)=(int32_t)(rnd()%5);
    int it=rnd()%10==0?(int)(0x400+rnd()%4):rnd()%17==0?-1:(int)(rnd()%NI);
#ifdef ENGINE
    world_remove_item(it);
#else
    ((MS void(*)(int32_t))F(0x14007F970ULL))(it);
#endif
    for(int i=0;i<NI;i++){ uint8_t *p=items+0x1B80*i; pr("item",i,p,0x74); }
    for(int h=0;h<NI;h++) pr("hands",h,humans+0x6FF8*h+0x6AD0,160);
    for(int b=0;b<32;b++) pr("bodypos",b,bodies+0xBC*b+0x18,12);
    for(int v=0;v<8;v++) pr("vehicle",v,vehicles+0x5168*v+0x1C,4);
    for(int b=0;b<32;b++){ int32_t a; memcpy(&a,bodies+0xBC*b,4); printf("%d",a); } printf(" %d\n",*(int32_t*)(bodies+0xBC*0x2000));
    for(int k=0;k<64;k++){ int32_t a; memcpy(&a,links+156*k,4); printf("%d",a); } printf("\n");
    for(int i=0;i<NI+3;i++) printf("%d ",changes[i]); printf("| %d\n",G(int32_t,0x183F7AEE8ULL));
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
