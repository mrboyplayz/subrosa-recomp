// Point masses: integration 0x1401154D0 and lifetimes 0x140115830, in two processes on identical points, bonds,
// vehicles and humans, including the bond removal 0x14007F370 it calls.
// Mode "engine": src/engine/physics_points.c.
#include "peload.h"
#ifdef ENGINE
MS void physics_integrate_points(void);
MS void physics_expire_points(void);
#endif
static uint32_t rs=777; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,0.5f,2.0f};
static float rf(void){ unsigned k=rnd()%40; if(k==0) return special[rnd()%12]; if(k==1){ uint32_t b=rnd32(); float f; memcpy(&f,&b,4); return f; } return ((int)(rnd()&0xFFFFF)-0x80000)/52428.8f; }
#define G(type,addr) (*(type*)D(addr))
#define NP 48
#define NBOND 24
#define NV 6
#define NH 256
static void pr(const char *t,int i,const void *p,size_t n){ printf("%s %d:",t,i); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ uint32_t w; memcpy(&w,b+k,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; printf(" %08x",w); } printf("\n"); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):2000;
  uint8_t *points=&G(uint8_t,0x151A84920ULL), *bonds=&G(uint8_t,0x1B4287C80ULL), *vehicles=&G(uint8_t,0x15F2D9200ULL), *humans=&G(uint8_t,0x18329E308ULL);
  static const int32_t life[]={0,1,2,3,-4,0xFFFF,0x10000,0x7FFFFFFF,(int32_t)0x80000000,50};
  for(int c=0;c<cases;c++){ printf("== case %d\n",c);
    int n=(int)(rnd()%NP)-(rnd()%10==0?3:0);
    G(int32_t,0x151E44920ULL)=n; G(int32_t,0x16B27ECF4ULL)=rnd()%3==0?(int32_t)(rnd()%3):0;
    for(int p=0;p<NP;p++){ uint8_t *q=points+0xF0*p; for(int k=0;k<0x50;k+=4){ float v=rf(); memcpy(q+k,&v,4); }
      int32_t l=rnd()%3==0?life[rnd()%10]:100; memcpy(q+4,&l,4);
      int32_t nb=(int32_t)(rnd()%4)-(rnd()%9==0?1:0); memcpy(q+0x50,&nb,4); for(int k=0;k<4;k++){ int32_t b=(int32_t)(rnd()%NBOND); memcpy(q+0x54+4*k,&b,4); }
      int32_t nv=(int32_t)(rnd()%3); memcpy(q+0xD4,&nv,4); for(int k=0;k<3;k++){ int32_t v=(int32_t)(rnd()%NV); memcpy(q+0xD8+4*k,&v,4); } }
    for(int v=0;v<NV;v++){ uint8_t *q=vehicles+0x5168*v; int32_t nb=(int32_t)(rnd()%6); memcpy(q+0x3F4,&nb,4); for(int k=0;k<6;k++){ int32_t b=(int32_t)(rnd()%NBOND); memcpy(q+0x3F8+4*k,&b,4); } }
    for(int b=0;b<NBOND;b++){ uint8_t *q=bonds+0xF4*b; int32_t one=1, nv=(int32_t)(rnd()%3); memcpy(q,&one,4); memcpy(q+0x94,&nv,4); for(int k=0;k<3;k++){ int32_t v=(int32_t)(rnd()%NV); memcpy(q+0x98+4*k,&v,4); } int32_t np=(int32_t)(rnd()%7); memcpy(q+0x14,&np,4); for(int k=0;k<6;k++){ int32_t p=(int32_t)(rnd()%NP); memcpy(q+0x18+4*k,&p,4); } }
    for(int v=0;v<NV;v++){ uint8_t *q=vehicles+0x5168*v; int32_t np=(int32_t)(rnd()%6); memcpy(q+0xEC,&np,4); for(int k=0;k<6;k++){ int32_t p=(int32_t)(rnd()%NP); memcpy(q+0xF0+4*k,&p,4); } }
    for(int h=0;h<NH;h++){ int32_t a=rnd()%3==0, p=(int32_t)(rnd()%NP); memcpy(humans+0x6FF8*h,&a,4); memcpy(humans+0x6FF8*h+0x24,&p,4); }
#ifdef ENGINE
    physics_integrate_points(); physics_expire_points();
#else
    ((MS void(*)(void))F(0x1401154D0ULL))(); ((MS void(*)(void))F(0x140115830ULL))();
#endif
    printf("count %d\n",G(int32_t,0x151E44920ULL));
    for(int p=0;p<NP;p++) pr("point",p,points+0xF0*p,0xF0);
    for(int b=0;b<NBOND;b++){ pr("bond",b,bonds+0xF4*b,4); pr("bondpts",b,bonds+0xF4*b+0x14,0x1C); }
    for(int v=0;v<NV;v++){ pr("vehicle",v,vehicles+0x5168*v+0xEC,0x1C); pr("vbonds",v,vehicles+0x5168*v+0x3F4,0x1C); }
    for(int h=0;h<NH;h++){ int32_t p; memcpy(&p,humans+0x6FF8*h+0x24,4); printf("%d ",p); } printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
