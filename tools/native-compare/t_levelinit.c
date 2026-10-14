// Setting up a level layer, 0x14004DB20 (src/engine/world_level.c world_level_layer_init), in two processes, on
// random layers (also out of range), origins, chunk counts (also zero and negative) and scales. malloc and free are
// logged as in t_shapefinish.c. After every call the layer header, the chunk table, the slot flags, the mesh owners
// and the block records' first words are printed as hashes.
#include "peload.h"
#ifdef ENGINE
MS void world_level_layer_init(int layer,const float *origin,int32_t cx,int32_t cy,int32_t cz,float scale);
#endif
static uint32_t rs=27182; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
static float rfn(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
#define G(type,addr) (*(type*)D(addr))
#define LAYER(l) (0x15ADA9240ULL+0x100D70ULL*(uint64_t)(l))
#define NBLK 4096
static void *blk[NBLK]; static size_t blksz[NBLK]; static int nblk;
static int seq_of(void *p){ for(int i=nblk-1;i>=0;i--) if(blk[i]==p) return i; return -1; }
static MS void *h_malloc(size_t n){ printf(" [malloc %zd]",(ptrdiff_t)n); void *p=n>(1u<<26)?NULL:malloc(n?n:1); if(nblk<NBLK){ blk[nblk]=p; blksz[nblk]=n; nblk++; } return p; }
static int logging;
#ifdef ENGINE
void free(void *p){ if(logging) printf(" [free %d]",seq_of(p)); }
#else
static MS void h_free(void *p){ if(logging) printf(" [free %d]",seq_of(p)); }
#endif
static uint64_t h;
static void mix(const void *p,size_t n){ const uint8_t *b=p; for(size_t i=0;i<n;i++){ h^=b[i]; h*=1099511628211ULL; } }
static void mixf(uint64_t addr,int n){ for(int i=0;i<n;i++){ uint32_t c=canon(G(uint32_t,addr+4ULL*i)); mix(&c,4); } }
static void *init_block(void){ if(rnd()%4==0) return NULL; void *p=malloc(4+rnd()%64); if(nblk<NBLK){ blk[nblk]=p; blksz[nblk]=0; nblk++; } return p; }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):1500;
#ifdef ENGINE
  { uint8_t *m=Fname("sr_path_malloc"); memcpy(m,(uint8_t[]){0x48,0xB8},2); *(uint64_t*)(m+2)=(uint64_t)h_malloc; memcpy(m+10,(uint8_t[]){0xFF,0xE0},2); }
#else
  hook(0x14023ACF8ULL,h_malloc); hook(0x14023ACE4ULL,h_free);
#endif
  for(int c=0;c<cases;c++){
    nblk=0;
    for(int l=0;l<4;l++){ uint64_t L=LAYER(l);
      for(int w=0;w<0x6C;w+=4) if(w!=0x48) G(uint32_t,L+w)=rnd32();
      void *p=init_block(); memcpy(D(L+0x48),&p,8); p=init_block(); memcpy(D(0x1A4BF0900ULL+8ULL*l),&p,8);
      for(int sl=0;sl<512;sl++) G(int32_t,L+0x56C+0x804ULL*sl)=(int32_t)(rnd()%3); }
    G(int32_t,0x151E46220ULL)=(int32_t)rnd32();
    for(int m=0;m<1024;m++) G(int32_t,0x151E46224ULL+0x8C24ULL*m)=(int32_t)(rnd()%5)-1;
    for(int r=0;r<4096;r++){ G(int32_t,0x154161240ULL+0x6C48ULL*r)=(int32_t)(rnd()%3); G(int32_t,0x154161244ULL+0x6C48ULL*r)=(int32_t)(rnd()%6); }
    int layer=rnd()%8==0?(int)(rnd()%10)-3:(int)(rnd()%4);
    float origin[3]; for(int k=0;k<3;k++) origin[k]=rnd()%30==0?special[rnd()%11]:rfn(-3000,3000);
    int32_t cx=rnd()%10==0?-(int32_t)(rnd()%3):(int32_t)(rnd()%9), cy=rnd()%10==0?0:(int32_t)(rnd()%5), cz=(int32_t)(rnd()%9);
    float scale=rnd()%20==0?special[rnd()%11]:rnd()%2?0.25f:rfn(0.05f,2);
    printf("%d %d %d %d %d %08x:",c,layer,cx,cy,cz,canon(*(uint32_t*)&scale));
    logging=1;
#ifdef ENGINE
    world_level_layer_init(layer,origin,cx,cy,cz,scale);
#else
    ((MS void(*)(int,const float*,uint32_t,int32_t,uint32_t,float))F(0x14004DB20ULL))(layer,origin,cx,cy,cz,scale);
#endif
    logging=0;
    h=1469598103934665603ULL;
    for(int l=0;l<4;l++){ uint64_t L=LAYER(l); mixf(L,0x48/4); mixf(L+0x50,(0x6C-0x50)/4);
      void *p; memcpy(&p,D(L+0x48),8); int k=seq_of(p); printf(" t%d",k);
      if(k>=0 && cx>0 && cy>0 && cz>0 && (size_t)(4*cx*cy*cz)<=blksz[k]) mix(p,4*(size_t)cx*cy*cz);
      memcpy(&p,D(0x1A4BF0900ULL+8ULL*l),8); printf(" u%d",seq_of(p));
      for(int sl=0;sl<512;sl++) mix(D(L+0x56C+0x804ULL*sl),4); }
    mix(D(0x151E46220ULL),4); for(int m=0;m<1024;m++) mix(D(0x151E46224ULL+0x8C24ULL*m),4);
    for(int r=0;r<4096;r++) mix(D(0x154161240ULL+0x6C48ULL*r),8);
    printf(" %016llx\n",(unsigned long long)h);
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
