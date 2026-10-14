// Runs the whole bond solver of a physics tick (0x14001D080) on identical random worlds in two processes and
// prints every body, bond, constraint, point and scratch entry afterwards. Vehicles are left inactive, so the
// wheel solvers it calls have nothing to do. Mode "engine": src/engine/physics_solve.c.
#include "peload.h"
#ifdef ENGINE
MS void physics_solve(void);
#endif
static uint32_t rs=777; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,0.0625f,0.125f,0.25f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,1111.0f,0.5f,2.0f};
static float rf(void){ unsigned k=rnd()%60; if(k==0) return special[rnd()%16]; if(k==1){ uint32_t b=rnd32(); float f; memcpy(&f,&b,4); return f; } float s=(k&1)?0.1f:(k&2)?3.0f:1.0f; return s*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
static float rpos(void){ return rnd()%30?(float)(rnd()%2000)/1000.0f+0.01f:rf(); }   // masses, lengths, coefficients
#define G(type,addr) (*(type*)D(addr))
#define NB 24
#define NBOND 40
#define NP 20
static void put(uint8_t *p,int off,float v){ memcpy(p+off,&v,4); } static void puti(uint8_t *p,int off,int32_t v){ memcpy(p+off,&v,4); }
static void pr(const char *t,int i,const void *p,size_t n){ printf("%s %d:",t,i); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ uint32_t w; memcpy(&w,b+k,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; printf(" %08x",w); } printf("\n"); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):1500;
  uint8_t *bodies=&G(uint8_t,0x1449816E0ULL), *bonds=&G(uint8_t,0x1B4287C80ULL), *cons=&G(uint8_t,0x1B4037C40ULL), *points=&G(uint8_t,0x151A84920ULL);
  uint8_t *scratch=(uint8_t*)
#ifdef ENGINE
    D(0x140384000ULL);
#else
    (void*)0x140384000ULL;
#endif
  for(int c=0;c<cases;c++){ printf("== case %d\n",c);
    for(int i=0;i<NB;i++){ uint8_t *b=bodies+0xBC*i; for(int k=0;k<0xBC;k+=4) put(b,k,rf());
      puti(b,0,rnd()%5!=0); puti(b,4,(int32_t)(rnd()%5)); puti(b,8,rnd()%4==0); puti(b,0x10,(int32_t)(rnd()%12)-1); put(b,0x14,rpos()*50.0f);
      for(int k=0;k<3;k++) put(b,0x90+4*k,rpos()); put(b,0x9C,rpos());
      float r[9]; for(int k=0;k<9;k++) r[k]=(k%4==0)?1.0f:0.0f; if(rnd()%2){ for(int k=0;k<9;k++) r[k]=rf(); } for(int k=0;k<9;k++) put(b,0x3C+4*k,r[k]); }
    int np=(int)(rnd()%NP); G(int32_t,0x151E44920ULL)=np;
    for(int i=0;i<NP;i++){ uint8_t *p=points+0xF0*i; for(int k=0;k<0xF0;k+=4) put(p,k,rf()); put(p,8,rpos()); }
    for(int i=0;i<NP*8;i++) put(scratch,4*i,rf());
    for(int i=0;i<NBOND;i++){ uint8_t *b=bonds+0xF4*i, *r=cons+0x90*i; for(int k=0;k<0xF4;k+=4) put(b,k,rf()); for(int k=0;k<0x90;k+=4) put(r,k,rf());
      static const int types[]={0,1,2,3,4,5,6,7,8,9,10,11,8,7,10,5};
      puti(b,0,rnd()%4!=0); puti(b,4,types[rnd()%16]); puti(b,0xC,(int32_t)(rnd()%3)); puti(b,0x10,rnd()%10==0?256+(int32_t)(rnd()%4):(int32_t)(rnd()%4));
      int lim=np>0?np:1; for(int k=0;k<4;k++) puti(b,0x18+4*k,(int32_t)(rnd()%lim));
      puti(b,0x98,(int32_t)(rnd()%NB)); puti(b,0x9C,rnd()%5==0?*(int32_t*)(b+0x98):(int32_t)(rnd()%NB)); puti(b,0xA4,rnd()%4==0?1111:(int32_t)rnd32());
      for(int k=0;k<3;k++) put(b,0x50+4*k,rpos()); put(b,0x84,rnd()%8==0?__builtin_nanf(""):rpos());   // NaN friction: MINSS keeps its second operand if(rnd()%3==0) put(b,0x88,rnd()%2?0.0f:__builtin_nanf(""));
      uint16_t a=(uint16_t)(rnd()%NB), o=rnd()%5==0?a:(uint16_t)(rnd()%NB); memcpy(r,&a,2); memcpy(r+2,&o,2);
      puti(r,0x4C,rnd()%2?0:1); puti(r,0x5C,rnd()%2?0:1); put(r,0x48,rnd()%8==0?__builtin_nanf(""):rpos()); put(r,0x3C,rpos()); put(r,0x40,rpos());
      if(rnd()%4==0) memset(r+0x50,0,12); if(rnd()%3==0){ float z=0.0f; memcpy(r+0x8C,&z,4); } }
    G(int32_t,0x182A7D558ULL)=rnd()%2; G(uint8_t,0x183F7C960ULL)=(uint8_t)(rnd()%2);
#ifdef ENGINE
    physics_solve();
#else
    ((MS void(*)(void))F(0x14001D080ULL))();
#endif
    for(int i=0;i<NB;i++) pr("body",i,bodies+0xBC*i,0xBC);
    for(int i=0;i<NBOND;i++) pr("bond",i,bonds+0xF4*i,0xF4);
    for(int i=0;i<NBOND;i++) pr("constraint",i,cons+0x90*i,0x90);
    for(int i=0;i<NP;i++) pr("point",i,points+0xF0*i,0xF0);
    pr("scratch",0,scratch,32*NP); pr("iteration",0,scratch+0x80000,4);
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
