// Voxel edits in two processes (src/engine/world_block_edit.c): chunk slot allocation 0x140010020, block record
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
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):3000;
  hook(0x1401941F0ULL,s_1941f0);
  for(int c=0;c<cases;c++){
    if(c%12==0){ for(int i=0;i<NPOOL;i++) pool[i]=(int)(rnd()%4096); setup(); }
    uint32_t layer=rnd()%9==0?(uint32_t)(4+rnd()%3):rnd()%4;
    uint32_t x=rnd()%3?rnd()%64:rnd()%200, y=rnd()%3?rnd()%64:rnd()%140, z=rnd()%3?rnd()%64:rnd()%200;
    if(rnd()%15==0) x=(uint32_t)-(int32_t)(rnd()%5); if(rnd()%15==0) y=0x80000000u|rnd(); if(rnd()%15==0) z=rnd32();
    unsigned op=rnd()%8; int r=0;
    int slot=(int)(rnd()%9); if(rnd()%10==0) slot-=600; if(rnd()%12==0) slot=0x1FF+(int)(rnd()%2); uint32_t value=rnd32(); int rec=rnd()%6==0?(int)(0x1000+rnd()%3):pool[rnd()%NPOOL]; int band=(int)(rnd()%4);
    printf("%d op %u l %u %u %u %u:",c,op,layer,x,y,z);
#ifdef ENGINE
    switch(op){ case 0: r=world_chunk_allocate(layer,(int32_t)x>>6,(int32_t)y>>6,(int32_t)z>>6); break;
      case 1: r=world_block_record_allocate((int)layer,slot,(int32_t)x>>3,(int32_t)y>>3,(int32_t)z>>3); break;
      case 2: world_block_mark_changed(layer,x,y,z); break;
      case 3: world_block_set_unknown_8((int)layer,x,y,z,value); break;
      case 4: world_block_release_mesh(rec,band); break;
      case 5: world_block_set_model(layer,x,y,z,(int32_t)value); break;
      case 6: r=world_block_record_at(layer,x,y,z); break;
      default: r=(int)world_block_set_unknown_808(layer,x,y,z,value); }
#else
    switch(op){ case 0: r=(int)((MS uint64_t(*)(uint32_t,int32_t,int32_t,int32_t))F(0x140010020ULL))(layer,(int32_t)x>>6,(int32_t)y>>6,(int32_t)z>>6); break;
      case 1: r=(int)((MS uint64_t(*)(int,int,int32_t,int32_t,int32_t))F(0x140012490ULL))((int)layer,slot,(int32_t)x>>3,(int32_t)y>>3,(int32_t)z>>3); break;
      case 2: ((MS void(*)(uint32_t,uint32_t,uint32_t,uint32_t))F(0x1400173C0ULL))(layer,x,y,z); break;
      case 3: ((MS void(*)(int,uint32_t,uint32_t,uint32_t,uint32_t))F(0x140017AC0ULL))((int)layer,x,y,z,value); break;
      case 4: ((MS void(*)(int,int))F(0x140012940ULL))(rec,band); break;
      case 5: ((MS void(*)(uint32_t,uint32_t,uint32_t,uint32_t,int32_t))F(0x140017260ULL))(layer,x,y,z,(int32_t)value); break;
      case 6: r=(int)((MS uint64_t(*)(uint32_t,uint32_t,uint32_t,uint32_t))F(0x140013020ULL))(layer,x,y,z); break;
      default: r=(int)((MS uint64_t(*)(uint32_t,uint32_t,uint32_t,uint32_t,uint32_t))F(0x140017C40ULL))(layer,x,y,z,value); }
#endif
    printf(" -> %d",r); dump();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
