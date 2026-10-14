// Finishing a block shape, 0x140017CA0 (src/engine/world_shape_build.c world_shape_build_finish), in two processes,
// on random scratch shapes: points often on the unit cube's faces (so quads are outer), quads with random sides,
// sometimes more than 1024 quads (the swap slot is a real quad then). malloc is logged and served by the test's
// own heap, and frees are logged and leaked (the original's 0x14023ACF8 and free 0x14023ACE4 are hooked; the engine's
// sr_path_malloc is patched and its free is the test's own). After every call the scratch areas and the shape's fields and arrays are printed.
#include "peload.h"
#ifdef ENGINE
MS void world_shape_build_finish(int shape);
#endif
static uint32_t rs=60916; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
static float rfn(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
#define G(type,addr) (*(type*)D(addr))
#define SHAPE(t) (0x145098C00ULL+0xE8ULL*(uint64_t)(t))
#define NBLK 4096
static void *blk[NBLK]; static size_t blksz[NBLK]; static int nblk;
static int seq_of(void *p){ for(int i=nblk-1;i>=0;i--) if(blk[i]==p) return i; return -1; }
static MS void *h_malloc(size_t n){ printf(" [malloc %zd]",(ptrdiff_t)n); void *p=n>(1u<<28)?NULL:malloc(n?n:1); if(nblk<NBLK){ blk[nblk]=p; blksz[nblk]=n; nblk++; } return p; }
static int logging;
#ifdef ENGINE
// The engine's free (crt.h) links here: log it and keep the block (a small leak).
void free(void *p){ if(logging) printf(" [free %d]",seq_of(p)); }
#else
static MS void h_free(void *p){ if(logging) printf(" [free %d]",seq_of(p)); }
#endif
static uint64_t h;
static void mix(const void *p,size_t n){ const uint8_t *b=p; for(size_t i=0;i<n;i++){ h^=b[i]; h*=1099511628211ULL; } }
static void mixf(const void *p,int n){ const uint32_t *w=p; for(int i=0;i<n;i++){ uint32_t c=canon(w[i]); mix(&c,4); } }
static int np,nq,nx,nb;
static void field(uint64_t s,int off,size_t bytes,int floats){
  void *p; memcpy(&p,D(s+off),8); int k=seq_of(p); printf(" %x:%d",off,k);
  if(k>=0 && bytes<=blksz[k]){ if(floats) mixf(p,(int)(bytes/4)); else mix(p,bytes); } }
static void dump(int shape){
  uint64_t s=SHAPE(shape);
  h=1469598103934665603ULL;
  mixf(D(0x1511AB764ULL),3*np); mixf(D(0x15123B764ULL),3*np);
  mix(D(0x1512DB768ULL),16*(nq>1025?nq:1025)); mix(D(0x15131B768ULL),4*(nq>1025?nq:1025));
  mix(D(0x15132B768ULL),4*(nq>1025?nq:1025)); mix(D(0x15133B768ULL),4*(nq>1025?nq:1025));
  printf(" scratch %016llx",(unsigned long long)h);
  h=1469598103934665603ULL;
  mix(D(s+0x40),4); mix(D(s+0x68),0x20); mix(D(s+0xA8),4); mix(D(s+0xC0),0x18); mix(D(s+0xD8),4);
  int pc=G(int32_t,s+0x40), qc=G(int32_t,s+0x68), xc=G(int32_t,s+0xA8), bc=G(int32_t,s+0xD8);
  field(s,0x48,12*(size_t)pc,1); field(s,0x50,12*(size_t)pc,1); field(s,0x58,12*(size_t)pc,1); field(s,0x60,8*(size_t)pc,1);
  field(s,0x88,16*(size_t)qc,0); field(s,0x90,4*(size_t)qc,0); field(s,0x98,4*(size_t)qc,0); field(s,0xA0,4*(size_t)qc,0);
  field(s,0xB0,12*(size_t)xc,0); field(s,0xB8,4*(size_t)xc,0); field(s,0xE0,48*(size_t)bc,0);
  for(int t=0;t<8;t++) if(t!=shape) mix(D(SHAPE(t)),0xE8);
  printf(" shape %016llx\n",(unsigned long long)h);
}
static float rcoord(void){ unsigned k=rnd()%10; return k<4?0.0f:k<8?1.0f:k==8?rfn(-1,2):special[rnd()%11]; }
static void *init_block(void){ if(rnd()%4==0) return NULL; void *p=malloc(1+rnd()%64); if(nblk<NBLK){ blk[nblk]=p; blksz[nblk]=0; nblk++; } return p; }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):3000;
#ifdef ENGINE
  { uint8_t *m=Fname("sr_path_malloc"); memcpy(m,(uint8_t[]){0x48,0xB8},2); *(uint64_t*)(m+2)=(uint64_t)h_malloc; memcpy(m+10,(uint8_t[]){0xFF,0xE0},2); }
#else
  hook(0x14023ACF8ULL,h_malloc); hook(0x14023ACE4ULL,h_free);
#endif
  for(int c=0;c<cases;c++){
    nblk=0;
    for(int t=0;t<8;t++) for(int w=0;w<0xE8;w+=4) G(uint32_t,SHAPE(t)+w)=rnd32();
    int shape=(int)(rnd()%8); uint64_t s=SHAPE(shape);
    static const int ptrs[]={0x48,0x50,0x58,0x60,0x88,0x90,0x98,0xA0,0xB0,0xB8,0xE0};
    for(int i=0;i<11;i++){ void *p=init_block(); memcpy(D(s+ptrs[i]),&p,8); }
    np=(int)(rnd()%40); nq=rnd()%40==0?1000+(int)(rnd()%60):(int)(rnd()%40); nx=(int)(rnd()%20); nb=(int)(rnd()%10);
    if(np==0) nq=rnd()%3?0:nq;
    G(int32_t,0x1510AB760ULL)=np; G(int32_t,0x1512DB764ULL)=nq; G(int32_t,0x15138B768ULL)=nx; G(int32_t,0x15155CFB4ULL)=nb;
    for(int i=0;i<3*np;i++){ G(float,0x1511AB764ULL+4ULL*i)=rcoord(); G(float,0x1511DB764ULL+4ULL*i)=rfn(-1,1); G(float,0x15120B764ULL+4ULL*i)=rfn(-1,1); G(uint32_t,0x15123B764ULL+4ULL*i)=rnd32(); }
    int qmax=nq>1025?nq:1025;
    for(int q=0;q<qmax;q++){
      for(int k=0;k<4;k++) G(int32_t,0x1512DB768ULL+16ULL*q+4*k)=np?(int32_t)(rnd()%np):0;
      static const uint32_t sides[]={0,0x10000,0x20000,0x30000,0x40000,0x50000,0x60000,0x70000};
      G(uint32_t,0x15131B768ULL+4ULL*q)=(rnd()%6==0?rnd32()&0xFFF00000:0)|sides[rnd()%8]|(rnd32()&0xFFFF);
      G(uint32_t,0x15132B768ULL+4ULL*q)=rnd32(); G(uint32_t,0x15133B768ULL+4ULL*q)=rnd32(); }
    for(int i=0;i<4*nx;i++) G(uint32_t,0x15138B76CULL+4ULL*i)=rnd32();
    for(int i=0;i<nx;i++) G(uint32_t,0x1513EB770ULL+4ULL*i)=rnd32();
    for(int i=0;i<20*nb;i++) G(uint32_t,0x15155CFCCULL+4ULL*i)=rnd32();
    printf("%d shape %d points %d quads %d extra %d boxes %d:",c,shape,np,nq,nx,nb);
#ifdef ENGINE
    logging=1; world_shape_build_finish(shape); logging=0;
#else
    logging=1; ((MS void(*)(int))F(0x140017CA0ULL))(shape); logging=0;
#endif
    dump(shape);
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
