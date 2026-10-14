// Runs the physics routines with identical bodies, bonds and constraint records in two processes and prints
// the resulting state. Mode "native": the original executable's routines. Mode "engine": src/engine/physics.c.
#include "peload.h"
#ifdef ENGINE
#define E_ MS
E_ void physics_prepare_joint(int); E_ void physics_solve_point_velocity(int); E_ void physics_solve_joint(int); E_ void physics_expire_bonds(void);
#define CALL(engine,addr,...) engine(__VA_ARGS__)
#else
#define CALL(engine,addr,...) ((MS void(*)(int))F(addr))(__VA_ARGS__)
#endif
static uint32_t rs=2024; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,0.0625f,0.015625f,0.033333335f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,1111.0f,0.5f,2.0f};
// mostly physical magnitudes, sometimes extremes
static float rf(void){ unsigned k=rnd()%40; if(k==0) return special[rnd()%16]; if(k==1){ uint32_t b=rnd32(); float f; memcpy(&f,&b,4); return f; } float s=(k&1)?0.1f:(k&2)?10.0f:1.0f; return s*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
#define G(type,addr) (*(type*)D(addr))
#define NB 8
#define NBOND 16
static void pr(const char *t,int i,const void *p,size_t n){ printf("%s %d:",t,i); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ uint32_t w; memcpy(&w,b+k,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; printf(" %08x",w); } printf("\n"); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  uint8_t *bodies=(uint8_t*)&G(uint8_t,0x1449816E0ULL), *bonds=(uint8_t*)&G(uint8_t,0x1B4287C80ULL), *cons=(uint8_t*)&G(uint8_t,0x1B4037C40ULL);
  for(int c=0;c<cases;c++){ int kind=rnd()%4, idx=rnd()%NBOND; printf("== case %d kind %d index %d\n",c,kind,idx);
    // identical starting state in both processes
    for(int i=0;i<NB;i++){ uint8_t *b=bodies+0xBC*i; for(int k=0;k<0xBC;k+=4){ float v=rf(); memcpy(b+k,&v,4); } float m=rnd()%8?(float)(1+rnd()%100)*0.5f:rf(); memcpy(b+0x14,&m,4); }
    for(int i=0;i<NBOND;i++){ uint8_t *b=bonds+0xF4*i; for(int k=0;k<0xF4;k+=4){ float v=rf(); memcpy(b+k,&v,4); }
      int32_t a=rnd()%NB, o=rnd()%4==0?a:(int32_t)(rnd()%NB); memcpy(b+0x98,&a,4); memcpy(b+0x9C,&o,4);
      int32_t mode=rnd()%3==0?1111:rnd()%2?(int32_t)rnd32():(int32_t)(rnd()%4); memcpy(b+0xA4,&mode,4);
      if(rnd()%3==0){ float z=rnd()%3==0?__builtin_nanf(""):rnd()%2?0.0f:-0.0f; memcpy(b+0x88,&z,4); } }   // the limit test treats NaN as zero
    for(int i=0;i<NBOND;i++){ uint8_t *r=cons+0x90*i; for(int k=0;k<0x90;k+=4){ float v=rf(); memcpy(r+k,&v,4); }
      uint16_t a=rnd()%NB, o=rnd()%4==0?a:(uint16_t)(rnd()%NB); memcpy(r,&a,2); memcpy(r+2,&o,2);
      int32_t flag=rnd()%2?0:(int32_t)rnd32(); memcpy(r+0x4C,&flag,4); if(rnd()%3==0){ float z=0.0f; memcpy(r+0x8C,&z,4); } if(rnd()%8==0){ float z=0.0f; memset(r+0x50,0,12); (void)z; } }
    switch(kind){
    case 0: CALL(physics_prepare_joint,0x14001C780ULL,idx); break;
    case 1: CALL(physics_solve_point_velocity,0x14001CBB0ULL,idx); break;
    case 2: CALL(physics_solve_joint,0x14001BF70ULL,idx); break;
    default: { // bond expiry: lifetimes, and bond lists of points and vehicles that hold the expiring bonds
      uint8_t *points=(uint8_t*)&G(uint8_t,0x151A84920ULL), *vehicles=(uint8_t*)&G(uint8_t,0x15F2D9200ULL);
      for(int i=0;i<NBOND;i++){ uint8_t *b=bonds+0xF4*i; static const int32_t life[]={0,1,2,-5,0xFFFF,0x10000,0x7FFFFFFF,3};
        int32_t l=life[rnd()%8]; memcpy(b+0xC,&l,4); int32_t pc=(int32_t)(rnd()%6)-1; memcpy(b+0x14,&pc,4);
        for(int k=0;k<5;k++){ int32_t pi=rnd()%4==0?-1:(int32_t)(rnd()%8); memcpy(b+0x18+4*k,&pi,4); }
        int32_t vc=(int32_t)(rnd()%4)-1; memcpy(b+0x94,&vc,4); for(int k=0;k<3;k++){ int32_t vi=(int32_t)(rnd()%4); memcpy(b+0x98+4*k,&vi,4); } }
      for(int i=0;i<8;i++){ uint8_t *pt=points+0xF0*i; int32_t n=(int32_t)(rnd()%12); memcpy(pt+0x50,&n,4); for(int k=0;k<38;k++){ int32_t e=(int32_t)(rnd()%(NBOND+2)); memcpy(pt+0x54+4*k,&e,4); } }
      for(int i=0;i<4;i++){ uint8_t *v=vehicles+0x5168*i; int32_t n=(int32_t)(rnd()%12); memcpy(v+0x3F4,&n,4); for(int k=0;k<16;k++){ int32_t e=(int32_t)(rnd()%(NBOND+2)); memcpy(v+0x3F8+4*k,&e,4); } }
#ifdef ENGINE
      physics_expire_bonds();
#else
      ((MS void(*)(void))F(0x14001FB90ULL))();
#endif
      for(int i=0;i<8;i++) pr("point",i,points+0xF0*i,0xF0);
      for(int i=0;i<4;i++) pr("vehicle",i,vehicles+0x5168*i+0x3F4,4+16*4);
      break; }
    }
    for(int i=0;i<NB;i++) pr("body",i,bodies+0xBC*i,0xBC);
    for(int i=0;i<NBOND;i++) pr("constraint",i,cons+0x90*i,0x90);
    for(int i=0;i<NBOND;i++) pr("bond",i,bonds+0xF4*i,0xF4);
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
