// Vehicle wheel joints 0x14010D610 on identical vehicles, wheels and bodies in two processes.
// Mode "engine": src/engine/world_vehicles.c (world_solve_vehicle_wheels).
#include "peload.h"
#ifdef ENGINE
MS void world_solve_vehicle_wheels(void);
#endif
static uint32_t rs=1337; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,0.5f,2.0f};
static float rf(void){ unsigned k=rnd()%60; if(k==0) return special[rnd()%12]; if(k==1){ uint32_t b=rnd32(); float f; memcpy(&f,&b,4); return f; } return ((int)(rnd()&0xFFFFF)-0x80000)/262144.0f; }
#define G(type,addr) (*(type*)D(addr))
#define NV 512
#define NB 24
static void pr(const char *t,int i,const void *p,size_t n){ printf("%s %d:",t,i); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ uint32_t w; memcpy(&w,b+k,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; printf(" %08x",w); } printf("\n"); }
static void put(uint8_t *p,int off,int32_t v){ memcpy(p+off,&v,4); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):1500;
  uint8_t *vehicles=&G(uint8_t,0x15F2D9200ULL), *bodies=&G(uint8_t,0x1449816E0ULL);
  int on[3];
  for(int c=0;c<cases;c++){ printf("== case %d\n",c);
    for(int v=0;v<NV;v++) put(vehicles+0x5168*v,0,0);
    for(int j=0;j<3;j++){ int v=on[j]=(int)(rnd()%NV); uint8_t *p=vehicles+0x5168*v;
      put(p,0,1+(int32_t)(rnd()%2)); put(p,4,rnd()%6==0?12:(int32_t)(rnd()%20)); put(p,0x28,(int32_t)(rnd()%NB));
      int32_t nw=(int32_t)(rnd()%7)-(rnd()%9==0?2:0); put(p,0x3940,nw); put(p,0x3894,(int32_t)rnd32());
      for(int w=0;w<6;w++){ uint8_t *q=p+0x3944+172*w; for(int k=4;k<172;k+=4){ float f=rf(); memcpy(q+k,&f,4); } put(q,0,(int32_t)(rnd()%NB)); } }
    for(int b=0;b<NB;b++){ uint8_t *q=bodies+0xBC*b; for(int k=0;k<0xBC;k+=4){ float f=rf(); memcpy(q+k,&f,4); } }
#ifdef ENGINE
    world_solve_vehicle_wheels();
#else
    ((MS void(*)(void))F(0x14010D610ULL))();
#endif
    for(int j=0;j<3;j++){ uint8_t *p=vehicles+0x5168*on[j]; pr("vehicle",on[j],p+0x3894,4); for(int w=0;w<6;w++) pr("wheel",w,p+0x3944+172*w,172); }
    for(int b=0;b<NB;b++) pr("body",b,bodies+0xBC*b,0xBC);
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
