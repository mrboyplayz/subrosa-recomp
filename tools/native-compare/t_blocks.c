// Block lookups 0x140016870 (block id) and 0x1400169B0 (gone-parts mask) on identical random level layers in two
// processes, and item detach 0x1400CA9B0. Mode "engine": src/engine/world_blocks.c, world_items.c.
#include "peload.h"
#ifdef ENGINE
MS uint32_t world_block_at(uint32_t,uint32_t,uint32_t,uint32_t);
MS uint32_t world_block_gone_at(uint32_t,uint32_t,uint32_t,uint32_t);
MS void world_detach_item(int,int);
#define BLOCK(l,x,y,z) world_block_at(l,x,y,z)
#define GONE(l,x,y,z) world_block_gone_at(l,x,y,z)
#define DETACH(i,p) world_detach_item(i,p)
#else
#define BLOCK(l,x,y,z) (uint32_t)((MS uint64_t(*)(uint32_t,uint32_t,uint32_t,uint32_t))F(0x140016870ULL))(l,x,y,z)
#define GONE(l,x,y,z) (uint32_t)((MS uint64_t(*)(uint32_t,uint32_t,uint32_t,uint32_t))F(0x1400169B0ULL))(l,x,y,z)
#define DETACH(i,p) ((MS uint64_t(*)(int32_t,int32_t))F(0x1400CA9B0ULL))(i,p)
#endif
static uint32_t rs=6502; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
#define G(type,addr) (*(type*)D(addr))
#define LAYER 0x100D70ULL
#define NREC 6
static int32_t tables[4][64];
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):300;
  for(int c=0;c<cases;c++){ printf("== case %d\n",c);
    for(int l=0;l<4;l++){ int32_t sx=(int32_t)(rnd()%4), sy=(int32_t)(rnd()%3), sz=(int32_t)(rnd()%4); if(rnd()%9==0) sx=-1;
      G(int32_t,0x15ADA9274ULL+LAYER*l)=sx; G(int32_t,0x15ADA9278ULL+LAYER*l)=sy; G(int32_t,0x15ADA927CULL+LAYER*l)=sz;
      for(int k=0;k<64;k++) tables[l][k]=rnd()%4==0?-1:(int32_t)(rnd()%3);
      int32_t *t=tables[l]; memcpy(&G(uint8_t,0x15ADA9288ULL+LAYER*l),&t,8);
      for(int s=0;s<3;s++) for(int k=0;k<513;k++) G(int32_t,0x15ADA97B0ULL+LAYER*l+0x804ULL*s+4ULL*k)=rnd()%3==0?-1:(int32_t)(rnd()%NREC); }
    for(int r=0;r<NREC;r++) for(int k=0;k<512;k++){ G(uint32_t,0x154166248ULL+0x6C48ULL*r+4ULL*k)=rnd32(); G(uint32_t,0x154166A48ULL+0x6C48ULL*r+4ULL*k)=rnd32(); }
    for(int q=0;q<400;q++){
      uint32_t l=rnd()%13==0?(rnd()%2?4:0xFFFFFFFFu):rnd()%4, x=rnd()%300, y=rnd()%200, z=rnd()%300;
      if(rnd()%17==0) x=rnd32(); if(rnd()%17==0) y=(uint32_t)-(int32_t)(rnd()%5); if(rnd()%17==0) z=0x80000000u|rnd();
      printf("%u %u %u %u: %08x %08x\n",l,x,y,z,BLOCK(l,x,y,z),GONE(l,x,y,z));
    }
    /* detach */
    uint8_t *items=&G(uint8_t,0x182BBB180ULL); int32_t *changes=&G(int32_t,0x18329B1E0ULL);
    for(int i=0;i<8;i++){ uint8_t *p=items+0x1B80*i; int32_t n=(int32_t)(rnd()%6)-(rnd()%9==0?1:0), par=(int32_t)(rnd()%8); memcpy(p+0x34,&n,4); memcpy(p+0x28,&par,4);
      for(int k=0;k<6;k++){ int32_t ch=(int32_t)(rnd()%4); memcpy(p+0x38+4*k,&ch,4); } }
    for(int i=0;i<10;i++) changes[i]=(int32_t)(rnd()%4);
    G(int32_t,0x1AD04ADC0ULL)=rnd()%2;
    int it=(int)(rnd()%4), par=(int)(rnd()%8); if(rnd()%11==0) it=0x400;
    DETACH(it,par);
    for(int i=0;i<8;i++){ int32_t w[8]; memcpy(w,items+0x1B80*i+0x28,4); memcpy(w+1,items+0x1B80*i+0x34,28); printf("item %d:",i); for(int k=0;k<8;k++) printf(" %d",w[k]); printf("\n"); }
    for(int i=0;i<10;i++) printf("%d ",changes[i]); printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
