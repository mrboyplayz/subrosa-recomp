// Placing blocks, 0x14000F830 (src/engine/world_block_edit.c world_block_place), in two processes, on the random
// level of t_blockedit.c plus random block shapes (footprints up to 2 x 2 x 2, outer quads that meet). Voxel edits in two processes (src/engine/world_block_edit.c): chunk slot allocation 0x140010020, block record
// allocation 0x140012490, marking a record changed 0x1400173C0, writing a voxel's +8 entry 0x140017AC0, releasing a
// record's mesh 0x140012940 and writing a voxel's model 0x140017260, called in random order on a small random level
// (few free slots and records, so allocation also fails). The GPU release 0x1401941F0 is a logging stub.
// After every call the result and a hash of each area the routines touch are printed.
#include "peload.h"
#ifdef ENGINE
MS int world_chunk_allocate(uint32_t layer,int32_t cx,int32_t cy,int32_t cz);
MS int world_block_record_allocate(int layer,int slot,int32_t x8,int32_t y8,int32_t z8);
MS void world_block_mark_changed(uint32_t layer,uint32_t x,uint32_t y,uint32_t z);
MS void world_block_set_unknown_8(int layer,uint32_t x,uint32_t y,uint32_t z,uint32_t value);
MS void world_block_release_mesh(int record,int band);
MS void world_block_set_model(uint32_t layer,uint32_t x,uint32_t y,uint32_t z,int32_t value);
MS int world_block_record_at(uint32_t layer,uint32_t x,uint32_t y,uint32_t z);
MS uint32_t world_block_set_unknown_808(uint32_t layer,uint32_t x,uint32_t y,uint32_t z,uint32_t value);
MS void world_block_place(int layer,int32_t x,uint32_t y,int32_t z,uint32_t value,const uint16_t *faces);
#endif
static uint32_t rs=91919; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
#define G(type,addr) (*(type*)D(addr))
#define LAYER(l) (0x15ADA9240ULL+0x100D70ULL*(uint64_t)(l))
#define REC(r) (0x154161240ULL+0x6C48ULL*(uint64_t)(r))
#define NPOOL 12
static int32_t tables[4][27];
static int pool[NPOOL];
static uint64_t h;
static void mix(const void *p,size_t n){ const uint8_t *b=p; for(size_t i=0;i<n;i++){ h^=b[i]; h*=1099511628211ULL; } }
static MS int64_t s_1941f0(int kind,int mesh){ printf(" [release %d %d]",kind,mesh); return 0; }
static void setup(void){
  for(int l=0;l<4;l++){ uint64_t L=LAYER(l); int32_t s[3]={1+(int32_t)(rnd()%3),1+(int32_t)(rnd()%2),1+(int32_t)(rnd()%3)}; if(rnd()%10==0) s[0]=0;
    memcpy(D(L+0x34),s,12); for(int k=0;k<27;k++) tables[l][k]=rnd()%3?-1:(int32_t)(rnd()%6);
    int32_t *t=tables[l]; memcpy(D(L+0x48),&t,8);
    int used=(int)(rnd()%8); if(rnd()%8==0) used=512;
    for(int sl=0;sl<512;sl++) G(int32_t,L+0x56C+0x804ULL*sl)=sl<used?1:(sl<used+3?0:1);   /* a few free slots after the used ones */
    if(used<512 && rnd()%6==0) for(int sl=0;sl<512;sl++) G(int32_t,L+0x56C+0x804ULL*sl)=1;  /* none free */
    for(int sl=0;sl<8;sl++) for(int c=0;c<512;c++) G(int32_t,L+0x570+0x804ULL*sl+4ULL*c)=rnd()%4?-1:pool[rnd()%NPOOL];
    G(int32_t,L+0x100D6C)=(int32_t)(rnd()%50); }
  for(int r=0;r<4096;r++) G(int32_t,REC(r))=1;
  int nfree=(int)(rnd()%(NPOOL/2));
  for(int i=0;i<NPOOL;i++){ uint64_t R=REC(pool[i]); G(int32_t,R)=i<nfree?0:1;
    for(int w=0;w<0x6C48;w+=4) if(w>=8) G(uint32_t,R+w)=rnd32();
    for(int b=0;b<4;b++) G(int32_t,R+0x6008+4*b)=rnd()%3==0?-1:(rnd()%8==0?(int32_t)(0x400+rnd()%5):rnd()%6==0?0:(int32_t)(rnd()%0x400)); }
}
static void dump(void){
  h=1469598103934665603ULL;
  for(int l=0;l<4;l++){ uint64_t L=LAYER(l); mix(tables[l],sizeof tables[l]); mix(D(L+0x100D6C),4);
    for(int sl=0;sl<16;sl++) mix(D(L+0x56C+0x804ULL*sl),0x804); for(int sl=16;sl<512;sl++) mix(D(L+0x56C+0x804ULL*sl),4); }
  for(int i=0;i<NPOOL;i++) mix(D(REC(pool[i])),0x6C48);
  for(int m=0;m<4;m++) mix(D(0x151E46224ULL+0x8C24ULL*(uint64_t)m),4);
  printf(" hash %016llx\n",(unsigned long long)h);
}
#define SHAPE(t) (0x145098C00ULL+0xE8ULL*(uint64_t)(t))
#define NST 4
static float svert[NST][16][3]; static int32_t squad[NST][12][4]; static int32_t sside[NST][12];
static void make_shapes(void){
  for(int t=0;t<NST;t++){ uint64_t s=SHAPE(t);
    for(int v=0;v<16;v++) for(int k=0;k<3;k++) svert[t][v][k]=(float)(rnd()%3)*0.5f;
    if(t>0) for(int v=0;v<16;v++) if(rnd()%2) memcpy(svert[t][v],svert[0][v],12);
    for(int q=0;q<12;q++){ for(int i=0;i<4;i++) squad[t][q][i]=(int32_t)(rnd()%16); sside[t][q]=(int32_t)(rnd()%6); }
    int32_t n=(int32_t)(rnd()%12), sz[3]={1+(int32_t)(rnd()%2),1+(int32_t)(rnd()%2),1+(int32_t)(rnd()%2)};
    const void *vp=svert[t],*qp=squad[t],*sp=sside[t];
    memcpy(D(s+0x48),&vp,8); memcpy(D(s+0x6C),&n,4); memcpy(D(s+0x88),&qp,8); memcpy(D(s+0xA0),&sp,8);
    for(int k=0;k<6;k++) G(uint32_t,s+0x70+4*k)=rnd32();
    memcpy(D(s+0xC0),sz,12); } }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):3000;
  hook(0x1401941F0ULL,s_1941f0);
  for(int c=0;c<cases;c++){
    if(c%15==0){ for(int i=0;i<NPOOL;i++) pool[i]=(int)(rnd()%4096); setup(); make_shapes();
      for(int i=0;i<NPOOL;i++){ uint64_t R=REC(pool[i]); for(int v=0;v<512;v++){ uint32_t e=rnd32(); unsigned k=rnd()%5;
          e=k==0?0x40000000u|(e&0x3FFF):k==1?0x80000000u|(uint32_t)(rnd()%NST):k==2?0xC0000000u|(rnd()%2):e; G(uint32_t,R+8+4*v)=e; } } }
    int layer=rnd()%9==0?(int)(4+rnd()%3):(int)(rnd()%4);
    int32_t x=(int32_t)(rnd()%3?rnd()%24:rnd()%200); uint32_t y=rnd()%3?rnd()%12:rnd()%140; int32_t z=(int32_t)(rnd()%3?rnd()%24:rnd()%200);
    if(rnd()%20==0) x=-(int32_t)(rnd()%3); if(rnd()%20==0) y=0x80000000u|rnd();
    uint32_t value; unsigned k=rnd()%10;
    value=k<4?0x40000000u|(rnd32()&0x1FFFFFFF):k<8?0x80000000u|(uint32_t)(rnd()%NST)|((rnd()%4?0:rnd()&0x3FF)<<16):k==8?0:rnd32();
    uint16_t faces[8]; for(int i=0;i<8;i++) faces[i]=(uint16_t)(rnd()%3?rnd()%300:0x8000|rnd());
    printf("%d place l %d %d %u %d %08x:",c,layer,x,y,z,value);
#ifdef ENGINE
    world_block_place(layer,x,y,z,value,faces);
#else
    ((MS void(*)(int,int32_t,uint32_t,int32_t,uint32_t,const uint16_t*))F(0x14000F830ULL))(layer,x,y,z,value,faces);
#endif
    dump();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
