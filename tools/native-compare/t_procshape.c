// Procedural block shapes, 0x14001A990 (src/engine/world_shape_build.c world_shape_build_procedural), in two
// processes, on random codes (side kinds 0-15, floor, ceiling, styles), random rectangle lists for the walls and
// boxes, a code table with made and unmade shapes, and preview mode. The face flags 0x14001B5C0 and the tessellator
// 0x140001F20 are stubs: the tessellator stub logs its grid and flags and appends the grid's four corners as points
// and one quad over them. malloc and free are logged as in t_shapefinish.c. After every call the result, the code
// table entry, the scratch shape and the made shape are printed as hashes.
#include "peload.h"
#ifdef ENGINE
MS int world_shape_build_procedural(int preview,uint32_t code);
#endif
static uint32_t rs=42424; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float rfn(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
#define G(type,addr) (*(type*)D(addr))
#define SHAPE(t) (0x145098C00ULL+0xE8ULL*(uint64_t)(t))
#define NBLK 8192
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
static uint32_t ss; static uint32_t sr(void){ ss=ss*1103515245u+12345u; return ss>>8; }
static MS int64_t s_1b5c0(int turn,int code){ uint32_t r=(uint32_t)code^(sr()%4==0?0x10000u:0); printf(" [flags %d %x]",turn,code); return (int64_t)(int32_t)r; }
static MS int64_t s_1f20(float *points,float *coords,int a,int b,int c,int d,int flags){
  h=1469598103934665603ULL; for(int i=0;i<48;i++){ uint32_t w; memcpy(&w,&points[i],4); w=canon(w); mix(&w,4); }
  printf(" [patch %08x %016llx]",(uint32_t)flags,(unsigned long long)h);
  int32_t np=G(int32_t,0x1510AB760ULL), nq=G(int32_t,0x1512DB764ULL);
  static const int corner[4]={0,3,15,12};
  for(int k=0;k<4;k++){ memcpy(D(0x1511AB764ULL+12ULL*(np+k)),&points[3*corner[k]],12);
    for(int j=0;j<3;j++){ G(float,0x1511DB764ULL+12ULL*(np+k)+4*j)=0.0f; G(float,0x15120B764ULL+12ULL*(np+k)+4*j)=0.0f; } G(int32_t,0x1512DB768ULL+16ULL*nq+4*k)=np+k; }
  G(uint32_t,0x15131B768ULL+4ULL*nq)=(uint32_t)flags; G(int32_t,0x15133B768ULL+4ULL*nq)=0;
  G(int32_t,0x1510AB760ULL)=np+4; G(int32_t,0x1512DB764ULL)=nq+1; return 0; }
static void *init_block(void){ if(rnd()%4==0) return NULL; void *p=malloc(4+rnd()%64); if(nblk<NBLK){ blk[nblk]=p; blksz[nblk]=0; nblk++; } return p; }
static void field(uint64_t s,int off,size_t bytes){
  void *p; memcpy(&p,D(s+off),8); int k=seq_of(p); printf(" %x:%d",off,k);
  if(k>=0 && bytes<=blksz[k]) for(size_t i=0;i<bytes;i+=4){ uint32_t w; memcpy(&w,(uint8_t*)p+i,4); w=canon(w); mix(&w,4); } }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):1500;
#ifdef ENGINE
  { uint8_t *m=Fname("sr_path_malloc"); memcpy(m,(uint8_t[]){0x48,0xB8},2); *(uint64_t*)(m+2)=(uint64_t)h_malloc; memcpy(m+10,(uint8_t[]){0xFF,0xE0},2); }
#else
  hook(0x14023ACF8ULL,h_malloc); hook(0x14023ACE4ULL,h_free);
#endif
  hook(0x14001B5C0ULL,s_1b5c0); hook(0x140001F20ULL,s_1f20);
  for(int c=0;c<cases;c++){
    nblk=0;
    if(c%25==0){
      for(int a=0;a<16;a++) for(int b=0;b<13;b++){ uint64_t R=0x1ABC89C00ULL+0x3040ULL*a+0x300ULL*b;
        G(int32_t,R+0x40)=rnd()%2?1:(int32_t)(rnd()%3); G(int32_t,R+0x74)=(int32_t)(rnd()%3); G(int32_t,R+0x1B8)=(int32_t)(rnd()%3);
        for(int k=0;k<4;k++) G(float,R+0x44+4*k)=rfn(0,0.5f);
        for(int i=0;i<3*5;i++) G(float,R+0x7C+4*i)=rfn(0,1);
        for(int i=0;i<3;i++){ G(int32_t,R+0x1BC+24*i)=(int32_t)(rnd()%4); for(int k=0;k<4;k++) G(float,R+0x1C4+24*i+4*k)=rfn(0,0.5f); } }
      for(uint32_t code=0;code<0x1000;code++) G(int32_t,0x145F54C00ULL+4ULL*code)=-1; }
    uint32_t code=0;
    for(int i=0;i<4;i++){ unsigned k=rnd()%5; code|=(k==0?0:k==1?1:k==2?2:3+rnd()%13)<<(4*i); }
    if(rnd()%2) code|=0x10000; if(rnd()%2) code|=0x20000; code|=(rnd()%16)<<18; if(rnd()%10==0) code|=rnd32()&0xFF000000u;
    if(rnd()%5==0) code&=0xFFF;   /* low codes: table entries can be reused */
    int preview=rnd()%3==0;
    G(int32_t,0x14500A700ULL)=rnd()%30==0?0x10000-(int32_t)(rnd()%2):(int32_t)(1+rnd()%200);
    uint32_t tc=code&0xFFFFFF; if(tc<0x1000 && rnd()%6==0) G(int32_t,0x145F54C00ULL+4ULL*tc)=rnd()%4==0?0:(int32_t)(rnd()%100);
    if(tc>=0x1000) G(int32_t,0x145F54C00ULL+4ULL*tc)=-1;
    int target=preview?0xFFFF:G(int32_t,0x14500A700ULL);
    if(target<0x10000){ uint64_t s=SHAPE(target); static const int ptrs[]={0x48,0x50,0x58,0x60,0x88,0x90,0x98,0xA0,0xB0,0xB8,0xE0};
      for(int w=0;w<0xE8;w+=4) G(uint32_t,s+w)=rnd32(); for(int i=0;i<11;i++){ void *p=init_block(); memcpy(D(s+ptrs[i]),&p,8); } }
    for(int i=0;i<64;i++) G(uint32_t,0x15155CFCCULL+4ULL*i)=rnd32();
    for(int i=0;i<300;i++){ G(uint32_t,0x15132B768ULL+4ULL*i)=rnd32(); G(uint32_t,0x15123B764ULL+4ULL*i)=rnd32(); }
    G(int32_t,0x15138B768ULL)=(int32_t)(rnd()%50);
    ss=rnd32();
    printf("%d %d %06x next %d:",c,preview,code,G(int32_t,0x14500A700ULL));
    logging=1;
#ifdef ENGINE
    int r=world_shape_build_procedural(preview,code);
#else
    int r=(int)((MS int64_t(*)(int,int))F(0x14001A990ULL))(preview,(int)code);
#endif
    logging=0;
    printf(" -> %d next %d entry %d",r,G(int32_t,0x14500A700ULL),tc<0x1000||1?G(int32_t,0x145F54C00ULL+4ULL*tc):0);
    int32_t np=G(int32_t,0x1510AB760ULL), nq=G(int32_t,0x1512DB764ULL), nb=G(int32_t,0x15155CFB4ULL);
    printf(" counts %d %d %d %d",np,nq,G(int32_t,0x15138B768ULL),nb);
    h=1469598103934665603ULL;
    if(np>0&&np<400){ mixf(0x1511AB764ULL,3*np); printf(" p %016llx",(unsigned long long)h); h=1469598103934665603ULL; mixf(0x15123B764ULL,3*np); printf(" uv %016llx",(unsigned long long)h); h=1469598103934665603ULL; }
    if(nq>0&&nq<100){ mix(D(0x1512DB768ULL),16*(size_t)nq); mix(D(0x15131B768ULL),4*(size_t)nq); printf(" qf %016llx",(unsigned long long)h); h=1469598103934665603ULL;
      mix(D(0x15132B768ULL),4*(size_t)nq); mix(D(0x15133B768ULL),4*(size_t)nq); printf(" su %016llx",(unsigned long long)h); h=1469598103934665603ULL; }
    if(nb>0&&nb<64) mixf(0x15155CFCCULL,20*nb);
    printf(" boxes %016llx",(unsigned long long)h);
    if(r>0 && r<0x10000 || r==0xFFFF){ uint64_t s=SHAPE(r); h=1469598103934665603ULL; mix(D(s+0x40),4); mix(D(s+0x68),0x20); mix(D(s+0xA8),4); mix(D(s+0xC0),0x14); mix(D(s+0xD8),4);
      if(!preview){ int pc=G(int32_t,s+0x40), qc=G(int32_t,s+0x68), bc=G(int32_t,s+0xD8);
        field(s,0x48,12*(size_t)pc); field(s,0x60,8*(size_t)pc); field(s,0x88,16*(size_t)qc); field(s,0x90,4*(size_t)qc); field(s,0x98,4*(size_t)qc); field(s,0xA0,4*(size_t)qc); field(s,0xE0,48*(size_t)bc); }
      printf(" shape %016llx",(unsigned long long)h); }
    printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
