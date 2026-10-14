// Small lookups in two processes: the free bond 0x1400A4440, the block at a voxel following multi-voxel blocks
// back 0x140016590, the corporation area test 0x14011B8F0 and the door event 0x1400518B0.
// Mode "engine": src/engine/physics_free.c, world_blocks.c, corporation.c.
#include "peload.h"
#ifdef ENGINE
MS int physics_free_bond(void);
MS uint32_t world_block_resolved_at(uint32_t,uint32_t,uint32_t,uint32_t);
MS uint32_t world_block_unknown_8_at(uint32_t,uint32_t,uint32_t,uint32_t);
MS int corporation_contains(const float *position,int corporation,float margin);
MS void corporation_door_event(int corporation,int open);
#define FREE_BOND() physics_free_bond()
#define BLOCK(l,x,y,z) world_block_resolved_at(l,x,y,z)
#define BLOCK8(l,x,y,z) world_block_unknown_8_at(l,x,y,z)
#define CONTAINS(p,c,m) corporation_contains(p,c,m)
#define DOOR(c,o) corporation_door_event(c,o)
#else
#define FREE_BOND() (int)((MS uint64_t(*)(void))F(0x1400A4440ULL))()
#define BLOCK(l,x,y,z) (uint32_t)((MS uint64_t(*)(uint32_t,uint32_t,uint32_t,uint32_t))F(0x140016590ULL))(l,x,y,z)
#define BLOCK8(l,x,y,z) (uint32_t)((MS uint64_t(*)(uint32_t,uint32_t,uint32_t,uint32_t))F(0x1400129D0ULL))(l,x,y,z)
#define CONTAINS(p,c,m) (int)((MS uint64_t(*)(const float*,int,float))F(0x14011B8F0ULL))(p,c,m)
#define DOOR(c,o) ((MS uint64_t(*)(int,int))F(0x1400518B0ULL))(c,o)
#endif
static uint32_t rs=99173; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
static float rf(float lo,float hi){ unsigned k=rnd()%40; if(k==0) return special[rnd()%11]; return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
#define G(type,addr) (*(type*)D(addr))
#define LAYER 0x100D70ULL
#define NREC 6
static int32_t tables[4][64];
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):300;
  for(int c=0;c<cases;c++){ printf("== case %d\n",c);
    /* free bond */
    { int all=rnd()%5==0, at=(int)(rnd()%0x4000); if(rnd()%3==0) at=(int)(rnd()%4); if(rnd()%7==0) at=0x3FFF;
      for(int k=0;k<0x4000;k++) G(int32_t,0x1B4287C80ULL+244ULL*k)=all||k<at?(int32_t)(1+rnd()%3):(rnd()%2?0:(int32_t)rnd32());
      if(!all) G(int32_t,0x1B4287C80ULL+244ULL*at)=0;
      G(int32_t,0x1B4287C80ULL+244ULL*0x4000)=0;   /* just past the end */
      printf("free bond %d\n",FREE_BOND()); }
    /* blocks */
    for(int l=0;l<4;l++){ int32_t sx=1+(int32_t)(rnd()%3), sy=1+(int32_t)(rnd()%2), sz=1+(int32_t)(rnd()%3); if(rnd()%15==0) sx=-1; if(rnd()%15==0) sy=0;
      G(int32_t,0x15ADA9274ULL+LAYER*l)=sx; G(int32_t,0x15ADA9278ULL+LAYER*l)=sy; G(int32_t,0x15ADA927CULL+LAYER*l)=sz;
      for(int k=0;k<64;k++) tables[l][k]=rnd()%8==0?-1:(int32_t)(rnd()%3);
      int32_t *t=tables[l]; memcpy(&G(uint8_t,0x15ADA9288ULL+LAYER*l),&t,8);
      for(int s=0;s<3;s++) for(int k=0;k<513;k++) G(int32_t,0x15ADA97B0ULL+LAYER*l+0x804ULL*s+4ULL*k)=rnd()%8==0?-1:(int32_t)(rnd()%NREC); }
    for(int r=0;r<NREC;r++) for(int k=0;k<512;k++){ uint32_t v=rnd32(); unsigned m=rnd()%4;
      if(m==0) v=0xC0000000u|(v&0x1FFF0000u&~0xFFFF0000u)|((rnd()%9)<<16)|((rnd()%9)<<8)|(rnd()%9);   /* continues a block */
      else if(m==1) v=(v&0x1FFFFFFFu)|0xC0000000u;
      else if(m==2) v&=0x3FF;
      G(uint32_t,0x154164248ULL+0x6C48ULL*r+4ULL*k)=v; G(uint32_t,0x154166248ULL+0x6C48ULL*r+4ULL*k)=rnd32(); G(uint32_t,0x154161248ULL+0x6C48ULL*r+4ULL*k)=rnd32(); }
    for(int q=0;q<400;q++){
      uint32_t l=rnd()%13==0?(rnd()%2?4:0xFFFFFFFFu):rnd()%4, x=rnd()%200, y=rnd()%140, z=rnd()%200;
      if(rnd()%17==0) x=rnd32(); if(rnd()%17==0) y=(uint32_t)-(int32_t)(rnd()%5); if(rnd()%17==0) z=0x80000000u|rnd();
      printf("%u %u %u %u: %08x %08x\n",l,x,y,z,BLOCK(l,x,y,z),BLOCK8(l,x,y,z));
    }
    /* corporation areas */
    for(int k=0;k<7;k++) for(int w=0;w<0x30;w+=4){ float v=rf(-500,500); memcpy(&G(uint8_t,0x183EBFD60ULL+0x5BC4ULL*k+w),&v,4); }
    for(int q=0;q<60;q++){ int corp=(int)(rnd()%7); float p[3], m=rnd()%3?4.0f:rf(-5,10);
      float *box=&G(float,0x183EBFD60ULL+0x5BC4ULL*corp);
      for(int a=0;a<3;a++) p[a]=rnd()%3?box[a]+(box[3+a]-box[a])*rf(-0.3f,1.3f):rf(-600,600);
      if(rnd()%10==0) p[0]=box[0]-m; if(rnd()%10==0) p[2]=box[5]+m;
      uint32_t pw[3]; memcpy(pw,p,12); printf("contains %d %08x %08x %08x %08x: %d\n",corp,canon(pw[0]),canon(pw[1]),canon(pw[2]),canon(*(uint32_t*)&m),CONTAINS(p,corp,m)); }
    /* door event */
    { G(int32_t,0x1AD04ADC0ULL)=rnd()%3!=0; int32_t count=(int32_t)(rnd()%40); if(rnd()%6==0) count=0xFFFF; if(rnd()%9==0) count|=0x30000; if(rnd()%9==0) count=(int32_t)(rnd()%40)-0;
      G(int32_t,0x189C1DC64ULL)=count&0x3FFFF? count:count; G(int32_t,0x183EBFD34ULL)=(int32_t)rnd32();
      int slot=count&0xFFFF?count:count; (void)slot;
      int32_t at=G(int32_t,0x189C1DC64ULL);
      for(int w=0;w<0x80;w+=4) G(int32_t,0x1873DE460ULL+0x80ULL*(uint64_t)(int64_t)(at&0x3FFFF)+w)=(int32_t)rnd32();
      int corp=(int)(rnd()%8)-1, open=(int)(rnd()%3);
      DOOR(corp,open);
      printf("door count %08x:",G(uint32_t,0x189C1DC64ULL)); for(int w=0;w<0x80;w+=4) printf(" %08x",G(uint32_t,0x1873DE460ULL+0x80ULL*(uint64_t)(int64_t)(at&0x3FFFF)+w)); printf("\n"); }
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
