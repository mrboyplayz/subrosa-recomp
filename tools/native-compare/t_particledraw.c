// Drawing of the particles at rest (src/engine/world_particles.c, world_draw_resting_particles) against the
// original (0x1401259B0): every OpenGL call with its arguments, uploaded buffer contents included, and the two
// uploaded counts left behind.
// Mode "engine": the engine function.
#include "peload.h"
#include "gltrace.h"
#ifdef ENGINE
MS void world_draw_resting_particles(int depth_only);
#endif
static uint32_t rs=24680; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
#define G(type,addr) (*(type*)D(addr))
int main(int argc,char **argv){ init_image(argc,argv); gltrace_install(stdout); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):3000;
  for(int c=0;c<cases;c++){
    for(int b=0;b<32;b++) G(uint32_t,0x183E9B0C0ULL+8ULL*b)=rnd()%5000+1;
    for(int t=0;t<64;t++) G(uint32_t,0x183F7CC2CULL+176ULL*t)=rnd()%5000+1;
    G(int32_t,0x183E98BC4ULL)=(int)(rnd()%32); G(int32_t,0x183E98BC8ULL)=(int)(rnd()%32);
    G(int32_t,0x183EBF118ULL)=(int)(rnd()%64); G(int32_t,0x183EBC414ULL)=(int)(rnd()%64); G(int32_t,0x183EBE408ULL)=(int)(rnd()%64); G(int32_t,0x183EBE42CULL)=(int)(rnd()%64);
    int n0=(int)(rnd()%24), n1=(int)(rnd()%24);
    G(int32_t,0x1A72FE728ULL)=n0; G(int32_t,0x1A72FE72CULL)=rnd()%3?n0:(int)(rnd()%24);
    G(int32_t,0x1A74FE730ULL)=n1; G(int32_t,0x1A74FE734ULL)=rnd()%3?n1:(int)(rnd()%24);
    for(int k=0;k<24*8;k++){ G(uint32_t,0x1A72FE730ULL+4ULL*k)=rnd32(); G(uint32_t,0x1A74FE738ULL+4ULL*k)=rnd32(); }
    G(int32_t,0x151E46208ULL)=rnd()%6?(int)(rnd()%3)+1:0;
    int depth=rnd()%2?0:(int)(rnd32()|1);
    printf("== case %d depth %d counts %d %d\n",c,depth!=0,n0,n1);
#ifdef ENGINE
    world_draw_resting_particles(depth);
#else
    ((MS void(*)(int,int64_t,int64_t))F(0x1401259B0ULL))(depth,0,0);
#endif
    printf("uploaded %d %d\n",G(int32_t,0x1A72FE72CULL),G(int32_t,0x1A74FE734ULL));
  }
  fprintf(stderr,"[%s] %d cases, %ld GL calls\n",img_name,cases,gl_calls); return 0; }
