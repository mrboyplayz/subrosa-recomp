// A block part becomes an item (0x1400CDBD0) on identical random levels, block types and records at 0x1760C5638 in
// two processes. Rotation, item creation 0x140054130 and the block updates 0x140017110 / 0x1400516B0 are stubs that log their
// arguments (creation answers from a fixed sequence). Mode "engine": src/engine/item_state.c (item_break_block_part).
#include "peload.h"
#include <xmmintrin.h>
#ifdef ENGINE
MS uint64_t item_break_block_part(uint32_t,int,int,int,int,int);
#endif
static uint32_t rs=8128; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
#define G(type,addr) (*(type*)D(addr))
#define NI 8
static uint32_t answers; static uint32_t next(void){ answers=answers*1103515245u+12345u; return answers>>8; }
static void pw(const char *t,const void *p,int n){ printf(" %s",t); const uint32_t *w=p; for(int i=0;i<n;i++){ uint32_t x=w[i]; if((x&0x7f800000)==0x7f800000&&(x&0x7fffff)) x=0x7fc00000; printf(" %08x",x); } }
static MS uint64_t s_create(int32_t type,float *pos,float *vel,float *rot){ uint32_t a=next(); int32_t r=a%4==0?-1:(int32_t)((a>>3)%NI);
  printf("call create %d",type); pw("p",pos,3); printf(" v%d",vel!=0); pw("r",rot,9); printf(" -> %d\n",r); return (uint64_t)(uint32_t)r; }
static MS uint64_t s_setgone(uint32_t l,uint32_t x,uint32_t y,uint32_t z,uint32_t g){ printf("call setgone %u %u %u %u %08x\n",l,x,y,z,g); return 0; }
static MS uint64_t s_rebuild(uint32_t l,uint32_t x,uint32_t y,uint32_t z,uint32_t g,uint32_t u){ printf("call rebuild %u %u %u %u %08x %u\n",l,x,y,z,g,u); return 0; }
static void pr(const char *t,int i,const void *p,size_t n){ printf("%s %d:",t,i); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ uint32_t w; memcpy(&w,b+k,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; printf(" %08x",w); } printf("\n"); }
static MS void s_rotate(float matrix[9],const float axis[3],float angle){
  printf("call rotate");pw("matrix",matrix,9);pw("axis",axis,3);pw("angle",&angle,1);printf("\n");
  static const float basis[4][9]={{1,0,0,0,1,0,0,0,1},{0,0,-1,0,1,0,1,0,0},{-1,0,0,0,1,0,0,0,-1},{0,0,1,0,1,0,-1,0,0}};
  unsigned turn=(unsigned)(angle/1.570796326795f+0.5f)&3;memcpy(matrix,basis[turn],sizeof basis[0]);
}
static int32_t level_table[4][27];
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  #ifndef ITEM_REAL_ROTATION
  hook(0x14007B2A0ULL,s_rotate);
#endif
  hook(0x140054130ULL,s_create); hook(0x140017110ULL,s_setgone); hook(0x1400516B0ULL,s_rebuild);
  int cases=argc>3?atoi(argv[3]):4000;
  uint8_t *items=&G(uint8_t,0x182BBB180ULL);
  for(int c=0;c<cases;c++){ printf("== case %d\n",c); answers=rnd32();
    if(c%50==0){
      for(int l=0;l<4;l++){ uint64_t L=0x100D70ULL*l; G(int32_t,0x15ADA9274ULL+L)=3; G(int32_t,0x15ADA9278ULL+L)=3; G(int32_t,0x15ADA927CULL+L)=3; G(float,0x15ADA9280ULL+L)=rnd()%3==0?2.5f:4.0f;
        for(int k=0;k<27;k++) level_table[l][k]=rnd()%5==0?-1:(int32_t)(rnd()%3);
        int32_t *t=level_table[l]; memcpy(&G(uint8_t,0x15ADA9288ULL+L),&t,8);
        for(int s=0;s<3;s++) for(int k=0;k<513;k++) G(int32_t,0x15ADA97B0ULL+L+0x804ULL*s+4ULL*k)=rnd()%4==0?-1:(int32_t)(rnd()%4); }
      for(int r=0;r<4;r++) for(int k=0;k<512;k++) G(uint32_t,0x154166A48ULL+0x6C48ULL*r+4ULL*k)=rnd()%2?rnd32():0;
      for(int b=0;b<4;b++) for(int q=0;q<40;q++){ uint8_t *p=&G(uint8_t,0x1812C2110ULL+0xED0ULL*b+0x74ULL*q); int32_t ty=(int32_t)(rnd()%45); memcpy(p,&ty,4);
        for(int k=0;k<12;k++){ float f=((int)(rnd()%2000)-1000)/400.0f; memcpy(p+4+4*k,&f,4); } }
      int32_t nrec=(int32_t)(rnd()%4); G(int32_t,0x1760C55F4ULL)=nrec;
      for(int r=0;r<3;r++){ uint64_t R=0x1760C5638ULL+0xDB0CULL*r; G(int32_t,R)=(int32_t)(rnd()%3); G(int32_t,R+0x1E8)=(int32_t)rnd32();
        for(int k=0;k<3;k++){ float lo=(float)(rnd()%400)-50.0f; G(float,R+0x40+4*k)=lo; G(float,R+0x4C+4*k)=lo+(float)(rnd()%500); }
        int32_t ne=(int32_t)(rnd()%40); G(int32_t,R+0xCAC8)=ne;
        for(int e=0;e<40;e++){ int32_t *en=&G(int32_t,R+0xCACC+16ULL*e); en[0]=(int32_t)(rnd()%8); en[1]=(int32_t)(rnd()%8); en[2]=(int32_t)(rnd()%8); en[3]=(int32_t)rnd32(); } } }
    for(int i=0;i<NI;i++){ uint8_t *p=items+0x1B80*i; int32_t ty=rnd()%2?39:(int32_t)(rnd()%45); memcpy(p+0x14,&ty,4); memset(p+0x318,0,0x20); memset(p+0x1658,0,4); }
    uint32_t id=(uint32_t)(rnd()%4)|((uint32_t)(rnd()%4)<<24)|(rnd()%3==0?(rnd32()&0xFCFFFC00u):0);
    int part=(int)(rnd()%40), layer=rnd()%9==0?(int)(rnd()%4):0, x=(int)(rnd()%8), y=(int)(rnd()%8), z=(int)(rnd()%8);
    if(rnd()%4==0){ x=(int)(rnd()%190); y=(int)(rnd()%190); z=(int)(rnd()%190); }
    if(rnd()%13==0) part=32+(int)(rnd()%8);
    /* Directed region cases: duplicate voxel records, last-match wins,
       kind-dependent computer teams, NaN upper/lower bounds, exact edges. */
    if(c%10<6){
      layer=0; x=y=z=1;
      level_table[0][0]=0;
      G(int32_t,0x15ADA97B0ULL+4ULL*73)=0;
      G(uint32_t,0x154166A48ULL+4ULL*73)=0;
      G(float,0x15ADA9280ULL)=4.0f;
      uint8_t *bp=&G(uint8_t,0x1812C2110ULL+0xED0ULL*(id&0x3FFu)+0x74ULL*part);
      for(int k=0;k<3;k++){float v=0;memcpy(bp+4+4*k,&v,4);}
      for(int i=0;i<NI;i++){int32_t type=39;memcpy(items+0x1B80*i+0x14,&type,4);}
      G(int32_t,0x1760C55F4ULL)=3;
      for(int r=0;r<3;r++){
        uint64_t R=0x1760C5638ULL+0xDB0CULL*r;
        G(int32_t,R)=r==1?0:1;G(int32_t,R+0x1E8)=100+r;
        for(int k=0;k<3;k++){G(float,R+0x40+4*k)=-100.0f;G(float,R+0x4C+4*k)=100.0f;}
        if(c%10==0 && r==0)G(float,R+0x40+4*((c/10)%3))=__builtin_nanf("");
        if(c%10==1 && r==2)G(float,R+0x4C+4*((c/10)%3))=__builtin_nanf("");
        if(c%10==2 && r==2)G(float,R+0x4C)=6.0f;
        if(c%10==3 && r==2)G(float,R+0x40)=6.0f;
        G(int32_t,R+0xCAC8)=c%10==5?-1:3;
        for(int e=0;e<3;e++){int32_t *en=&G(int32_t,R+0xCACC+16ULL*e);en[0]=en[1]=en[2]=1;en[3]=1000+r*10+e;}
      }
    }
_mm_setcsr(0x1f80);
#ifdef ENGINE
    uint64_t r=item_break_block_part(id,part,layer,x,y,z);
#else
    uint64_t r=((MS uint64_t(*)(uint32_t,int32_t,int32_t,int32_t,int32_t,int32_t))F(0x1400CDBD0ULL))(id,part,layer,x,y,z);
#endif
    printf("-> %016" PRIx64 " mxcsr=%08x\n",r,_mm_getcsr());
    for(int i=0;i<NI;i++){ uint8_t *p=items+0x1B80*i; pr("item",i,p+0x318,0x20); pr("i1658",i,p+0x1658,4); }
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
