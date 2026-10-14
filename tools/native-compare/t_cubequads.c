// Box faces as flat quads, 0x140019C10 (src/engine/world_block_patches.c world_block_cube_quads), in two processes,
// on random boxes (unit cubes moved and stretched, random corners, special values) and face masks. The scratch
// shape is printed as hashes after every call.
#include "peload.h"
#ifdef ENGINE
MS void world_block_cube_quads(const float (*corners)[3],uint32_t flags,uint32_t faces);
#endif
static uint32_t rs=13579; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
static float rfn(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
#define G(type,addr) (*(type*)D(addr))
static uint64_t h;
static void mix(const void *p,size_t n){ const uint8_t *b=p; for(size_t i=0;i<n;i++){ h^=b[i]; h*=1099511628211ULL; } }
static void mixf(uint64_t addr,int n){ for(int i=0;i<n;i++){ uint32_t c=canon(G(uint32_t,addr+4ULL*i)); mix(&c,4); } }
#define NP 200
#define NQ 80
static const float unitc[8][3]={{0,0,0},{1,0,0},{1,0,1},{0,0,1},{0,1,0},{1,1,0},{1,1,1},{0,1,1}};
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  for(int c=0;c<cases;c++){
    float box[8][3];
    unsigned kind=rnd()%4;
    float o[3],s[3]; for(int k=0;k<3;k++){ o[k]=rfn(-50,50); s[k]=rnd()%3?rfn(0.1f,3):rfn(-3,3); }
    for(int i=0;i<8;i++) for(int k=0;k<3;k++){
      box[i][k]=kind==0?rfn(-2,2):o[k]+s[k]*unitc[i][k]+(kind==1?rfn(-0.4f,0.4f):0.0f);
      if(rnd()%60==0) box[i][k]=special[rnd()%11]; }
    if(kind==3 && rnd()%2){ int a=rnd()%8,b=rnd()%8; memcpy(box[a],box[b],12); }   /* degenerate faces */
    int32_t np=(int32_t)(rnd()%100), nq=(int32_t)(rnd()%40);
    G(int32_t,0x1510AB760ULL)=np; G(int32_t,0x1512DB764ULL)=nq;
    for(int i=0;i<3*NP;i++){ G(uint32_t,0x1511AB764ULL+4ULL*i)=rnd32(); G(uint32_t,0x1511DB764ULL+4ULL*i)=rnd32(); G(uint32_t,0x15120B764ULL+4ULL*i)=rnd32(); G(uint32_t,0x15123B764ULL+4ULL*i)=rnd32(); }
    for(int i=0;i<4*NQ;i++) G(uint32_t,0x1512DB768ULL+4ULL*i)=rnd32();
    for(int i=0;i<NQ;i++){ G(uint32_t,0x15131B768ULL+4ULL*i)=rnd32(); G(uint32_t,0x15133B768ULL+4ULL*i)=rnd32(); }
    uint32_t flags=rnd()%2?rnd()%16:rnd32(), faces=rnd()%3?rnd()&0x3F:rnd32();
    printf("%d %d %08x %08x:",c,kind,flags,faces);
#ifdef ENGINE
    world_block_cube_quads((const float(*)[3])box,flags,faces);
#else
    ((MS int64_t(*)(const float*,uint32_t,uint32_t))F(0x140019C10ULL))(&box[0][0],flags,faces);
#endif
    printf(" points %d quads %d",G(int32_t,0x1510AB760ULL),G(int32_t,0x1512DB764ULL));
    h=1469598103934665603ULL;
    mixf(0x1511AB764ULL,3*NP); mixf(0x1511DB764ULL,3*NP); mixf(0x15120B764ULL,3*NP); mixf(0x15123B764ULL,3*NP);
    mix(D(0x1512DB768ULL),16*NQ); mix(D(0x15131B768ULL),4*NQ); mix(D(0x15133B768ULL),4*NQ);
    for(int q=nq;q<G(int32_t,0x1512DB764ULL);q++) printf(" %x",G(uint32_t,0x15131B768ULL+4ULL*q));
    printf(" %016llx\n",(unsigned long long)h);
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
