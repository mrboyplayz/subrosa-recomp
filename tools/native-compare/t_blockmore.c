// More voxel routines, in two processes, on the random level of t_place.c, called in random order:
// reads in src/engine/world_blocks.c (0x140012B10 resolved +8 entry, 0x140012DE0 / 0x140012CA0 face words,
// 0x140016720 bytes at +0x3808) and edits in src/engine/world_block_edit.c (0x140016C80 set layout, 0x140016E30
// write layout, 0x140017110 write +0x5808, 0x140016F60 place model, 0x140016AF0 clear a mesh part,
// 0x140012670 clear a voxel). The GPU release 0x1401941F0 is a logging stub. After every call the result and a
// hash of each area the routines touch are printed. Also 0x140016130 (placing a layout entry with its footprint) and
// 0x140017910 (refreshing a record's mesh model entries; the rebuild 0x14000C4C0 is a logging stub), on random block
// shapes (sizes up to 2 x 2 x 2); and 0x14011C510 (flagging a record at +0x6C34 / +0x6C38).
#include "peload.h"
#ifdef ENGINE
MS uint32_t world_block_unknown_8_resolved_at(uint32_t layer,uint32_t x,uint32_t y,uint32_t z);
MS uint32_t world_block_face_word_at(uint32_t layer,uint32_t x,uint32_t y,uint32_t z,int32_t index);
MS uint32_t world_block_last_face_word_at(uint32_t layer,uint32_t x,uint32_t y,uint32_t z);
MS uint32_t world_block_unknown_3808_at(uint32_t layer,uint32_t x,uint32_t y,uint32_t z,int32_t index);
MS void world_block_set_layout(int layer,uint32_t x,uint32_t y,uint32_t z,uint32_t value);
MS void world_block_write_layout(uint32_t layer,uint32_t x,uint32_t y,uint32_t z,uint32_t value);
MS void world_block_write_gone(uint32_t layer,uint32_t x,uint32_t y,uint32_t z,uint32_t value);
MS void world_block_set_id(int layer,uint32_t x,uint32_t y,uint32_t z,uint32_t value);
MS void world_block_mesh_clear_part(uint32_t layer,uint32_t x,uint32_t y,uint32_t z,int32_t part);
MS void world_block_clear(uint32_t layer,uint32_t x,uint32_t y,uint32_t z);
MS void world_block_place_layout(int layer,uint32_t x,uint32_t y,uint32_t z,uint32_t value,const uint16_t *parts);
MS void world_block_record_refresh(int record);
MS void world_block_mark_unknown_6c34(int layer,int32_t x,int32_t y,int32_t z);
#endif
static uint32_t rs=77113; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
#define G(type,addr) (*(type*)D(addr))
#define LAYER(l) (0x15ADA9240ULL+0x100D70ULL*(uint64_t)(l))
#define REC(r) (0x154161240ULL+0x6C48ULL*(uint64_t)(r))
#define MESH(m) (0x151E46224ULL+0x8C24ULL*(uint64_t)(m))
#define NPOOL 12
#define NMESH 6
static int32_t tables[4][27];
static int pool[NPOOL];
static uint64_t h;
static void mix(const void *p,size_t n){ const uint8_t *b=p; for(size_t i=0;i<n;i++){ h^=b[i]; h*=1099511628211ULL; } }
static MS int64_t s_1941f0(int kind,int mesh){ printf(" [release %d %d]",kind,mesh); return 0; }
static MS int64_t s_c4c0(int record){ printf(" [rebuild %d]",record); return 0; }
static void setup(void){
  for(int l=0;l<4;l++){ uint64_t L=LAYER(l); int32_t s[3]={1+(int32_t)(rnd()%3),1+(int32_t)(rnd()%2),1+(int32_t)(rnd()%3)}; if(rnd()%10==0) s[0]=0;
    memcpy(D(L+0x34),s,12); for(int k=0;k<27;k++) tables[l][k]=rnd()%3?-1:(int32_t)(rnd()%6);
    int32_t *t=tables[l]; memcpy(D(L+0x48),&t,8);
    int used=(int)(rnd()%8); if(rnd()%8==0) used=512;
    for(int sl=0;sl<512;sl++) G(int32_t,L+0x56C+0x804ULL*sl)=sl<used?1:(sl<used+3?0:1);
    if(used<512 && rnd()%6==0) for(int sl=0;sl<512;sl++) G(int32_t,L+0x56C+0x804ULL*sl)=1;
    for(int sl=0;sl<8;sl++) for(int c=0;c<512;c++) G(int32_t,L+0x570+0x804ULL*sl+4ULL*c)=rnd()%4?-1:pool[rnd()%NPOOL];
    G(int32_t,L+0x100D6C)=(int32_t)(rnd()%50); }
  for(int r=0;r<4096;r++) G(int32_t,REC(r))=1;
  int nfree=(int)(rnd()%(NPOOL/2));
  for(int i=0;i<NPOOL;i++){ uint64_t R=REC(pool[i]); G(int32_t,R)=i<nfree?0:1;
    for(int w=0;w<0x6C48;w+=4) if(w>=8) G(uint32_t,R+w)=rnd32();
    for(int v=0;v<512;v++){ unsigned k=rnd()%5; uint32_t e=rnd32();
      G(uint32_t,R+8+4*v)=k==0?0x40000000u|(e&0x3F):k==1?0xC0000000u|(rnd()%2)|((rnd()%2)<<8)|((rnd()%2)<<16):k==2?0:e; }
    for(int b=0;b<4;b++) G(int32_t,R+0x6008+4*b)=rnd()%3==0?-1:(rnd()%8==0?(int32_t)(0x400+rnd()%5):(int32_t)(rnd()%NMESH)); }
  for(int m=0x400;m<0x405;m++){ G(int32_t,MESH(m)+0x3820)=0; G(int32_t,MESH(m)+0x1E14)=0; }   /* out-of-range meshes some records name */
  for(int m=0;m<NMESH;m++){ G(int32_t,MESH(m))=(int32_t)rnd32(); int n=(int)(rnd()%12); G(int32_t,MESH(m)+0x3820)=n;
    G(int32_t,MESH(m)+0x1E14)=(int32_t)(rnd()%10);
    for(int e=0;e<10;e++){ uint64_t E=MESH(m)+0x1E18+28ULL*e; G(int32_t,E)=(int32_t)rnd32(); G(int32_t,E+4)=(int32_t)(rnd()%512); G(int32_t,E+8)=(int32_t)rnd32(); }
    for(int e=0;e<12;e++){ uint64_t E=MESH(m)+0x3824+84ULL*e; G(int32_t,E)=1; G(int32_t,E+8)=(int32_t)(rnd()%2); G(int32_t,E+12)=(int32_t)(rnd()%2); G(int32_t,E+16)=(int32_t)(rnd()%2); G(int32_t,E+20)=(int32_t)(rnd()%2); } }
}
static void dump(void){
  h=1469598103934665603ULL;
  for(int l=0;l<4;l++){ uint64_t L=LAYER(l); mix(tables[l],sizeof tables[l]); mix(D(L+0x100D6C),4);
    for(int sl=0;sl<16;sl++) mix(D(L+0x56C+0x804ULL*sl),0x804); for(int sl=16;sl<512;sl++) mix(D(L+0x56C+0x804ULL*sl),4); }
  for(int i=0;i<NPOOL;i++) mix(D(REC(pool[i])),0x6C48);
  for(int m=0;m<NMESH;m++){ mix(D(MESH(m)),4); mix(D(MESH(m)+0x3820),4+84*12); mix(D(MESH(m)+0x1E14),4+28*10); }
  printf(" hash %016llx\n",(unsigned long long)h);
}
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):6000;
  hook(0x1401941F0ULL,s_1941f0); hook(0x14000C4C0ULL,s_c4c0);
  for(int c=0;c<cases;c++){
    if(c%15==0){ for(int i=0;i<NPOOL;i++) pool[i]=(int)(rnd()%4096); setup();
      for(int t=0;t<4;t++) for(int k=0;k<3;k++) G(int32_t,0x145098CC0ULL+0xE8ULL*t+4*k)=rnd()%8==0?0:1+(int32_t)(rnd()%2); }
    uint32_t layer=rnd()%9==0?4+rnd()%3:rnd()%4;
    uint32_t x=rnd()%3?rnd()%24:rnd()%200, y=rnd()%3?rnd()%12:rnd()%140, z=rnd()%3?rnd()%24:rnd()%200;
    if(rnd()%20==0) x=(uint32_t)-(int32_t)(rnd()%3); if(rnd()%20==0) y=0x80000000u|rnd();
    uint32_t value=rnd()%3?rnd32():rnd()%4; int32_t index=rnd()%6==0?(int32_t)(rnd()%40)-16:(int32_t)(rnd()%8);
    unsigned op=rnd()%13; uint32_t r=0;
    if(op==8){ x=(x&~7u)|(rnd()%2); y=(y&~7u)|(rnd()%2); z=(z&~7u)|(rnd()%2); index&=1; }
    if(op==10) value=rnd()%4?0x80000000u|(rnd()%4)|(rnd()%4?0:(rnd()&0x3FF)<<16):value;
    uint16_t parts[8]; for(int i=0;i<8;i++) parts[i]=(uint16_t)rnd32();
    int record=rnd()%3?pool[rnd()%NPOOL]:(rnd()%5==0?(int)(rnd()%5000)-500:(int)(rnd()%4096));
    if(op==11 && record>=0 && record<4096) for(int b=0;b<4;b++){ int32_t m=G(int32_t,REC(record)+0x6008+4*b); if(m!=-1 && (m<0 || m>=NMESH)) G(int32_t,REC(record)+0x6008+4*b)=rnd()%2?-1:(int32_t)(rnd()%NMESH); }
    printf("%d op %u l %u %u %u %u %08x %d:",c,op,layer,x,y,z,value,index);
#ifdef ENGINE
    switch(op){
    case 0: r=world_block_unknown_8_resolved_at(layer,x,y,z); break;
    case 1: r=world_block_face_word_at(layer,x,y,z,index); break;
    case 2: r=world_block_last_face_word_at(layer,x,y,z); break;
    case 3: r=world_block_unknown_3808_at(layer,x,y,z,index); break;
    case 4: world_block_set_layout((int)layer,x,y,z,value); break;
    case 5: world_block_write_layout(layer,x,y,z,value); break;
    case 6: world_block_write_gone(layer,x,y,z,value); break;
    case 7: world_block_set_id((int)layer,x,y,z,value); break;
    case 8: world_block_mesh_clear_part(layer,x,y,z,index&3); break;
    case 9: world_block_clear(layer,x,y,z); break;
    case 10: world_block_place_layout((int)layer,x,y,z,value,parts); break;
    case 11: printf(" record %d",record); world_block_record_refresh(record); break;
    case 12: world_block_mark_unknown_6c34((int)(layer&3),(int32_t)x,(int32_t)y,(int32_t)z); break; }
#else
    typedef MS uint32_t (*R4)(uint32_t,uint32_t,uint32_t,uint32_t); typedef MS uint32_t (*R5)(uint32_t,uint32_t,uint32_t,uint32_t,int32_t);
    typedef MS void (*W5)(uint32_t,uint32_t,uint32_t,uint32_t,uint32_t); typedef MS void (*W4)(uint32_t,uint32_t,uint32_t,uint32_t);
    switch(op){
    case 0: r=((R4)F(0x140012B10ULL))(layer,x,y,z); break;
    case 1: r=((R5)F(0x140012DE0ULL))(layer,x,y,z,index); break;
    case 2: r=((R4)F(0x140012CA0ULL))(layer,x,y,z); break;
    case 3: r=((R5)F(0x140016720ULL))(layer,x,y,z,index); break;
    case 4: ((W5)F(0x140016C80ULL))(layer,x,y,z,value); break;
    case 5: ((W5)F(0x140016E30ULL))(layer,x,y,z,value); break;
    case 6: ((W5)F(0x140017110ULL))(layer,x,y,z,value); break;
    case 7: ((W5)F(0x140016F60ULL))(layer,x,y,z,value); break;
    case 8: ((W5)F(0x140016AF0ULL))(layer,x,y,z,(uint32_t)(index&3)); break;
    case 9: ((W4)F(0x140012670ULL))(layer,x,y,z); break;
    case 10: ((MS void(*)(uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,const uint16_t*))F(0x140016130ULL))(layer,x,y,z,value,parts); break;
    case 11: printf(" record %d",record); ((MS void(*)(int))F(0x140017910ULL))(record); break;
    case 12: ((MS void(*)(int,int32_t,int32_t,int32_t))F(0x14011C510ULL))((int)(layer&3),(int32_t)x,(int32_t)y,(int32_t)z); break; }
#endif
    printf(" -> %08x",r);
    dump();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
