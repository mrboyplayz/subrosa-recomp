// Building block shapes, in two processes (src/engine/world_shape_build.c): turning the scratch shape 0x14004D170
// (world_shape_build_turn) on random points, vectors and quad flags, and slabs 0x140019140 (world_shape_build_slab) and trimmed slabs 0x1400194B0
// with random offsets, removing a quad 0x140184AB0 (world_shape_build_remove_quad), boxes from rectangle lists 0x14001A590 (world_shape_build_boxes), and two-wall corners 0x14001A050 (world_shape_build_corner). The face flags 0x14001B5C0 and the tessellator 0x140001F20 are logging stubs; the tessellator
// stub prints the control grid it is handed and adds a quad. After every call the touched areas are printed as hashes.
#include "peload.h"
#ifdef ENGINE
MS void world_shape_build_turn(int shape,const int32_t *size);
MS void world_shape_build_slab(int kind,const float *offset);
MS void world_shape_build_slab_trimmed(int kind,const float *offset,uint32_t trim);
MS void world_shape_build_corner(int turn,float x,float z);
MS void world_shape_build_remove_quad(int q);
MS void world_shape_build_boxes(int turn,int a,int b);
MS void world_shape_build_wall(int turn,int a,int b);
#endif
static uint32_t rs=50607; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
static float rfn(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
#define G(type,addr) (*(type*)D(addr))
#define NPT 64
#define NQ 64
static uint64_t h;
static void mix(const void *p,size_t n){ const uint8_t *b=p; for(size_t i=0;i<n;i++){ h^=b[i]; h*=1099511628211ULL; } }
static void mixf(uint64_t addr,int n){ for(int i=0;i<n;i++){ uint32_t w=canon(G(uint32_t,addr+4ULL*i)); mix(&w,4); } }
static uint32_t ss; static uint32_t sr(void){ ss=ss*1103515245u+12345u; return ss>>8; }
static MS int64_t s_1b5c0(int turn,int code){ uint32_t r=sr()<<16; printf(" [flags %d %x -> %x]",turn,code,r); return (int64_t)(int32_t)r; }
static MS int64_t s_1f20(float *points,float *coords,int a,int b,int c,int d,int flags){
  printf(" [patch %d %d %d %d %08x %d %d",a,b,c,d,(uint32_t)flags,points==(float*)D(0x14500A5C0ULL),coords==(float*)D(0x14500A680ULL));
  for(int i=0;i<48;i++){ uint32_t w; memcpy(&w,&points[i],4); printf(" %08x",canon(w)); } printf("]");
  int32_t n=G(int32_t,0x1512DB764ULL); if(n>=0 && n<NQ) G(int32_t,0x1512DB764ULL)=n+(int32_t)(sr()%2); return 0; }
static void dump(void){
  h=1469598103934665603ULL;
  mix(D(0x1510AB760ULL),4); mix(D(0x1512DB764ULL),4);
  mixf(0x1511AB764ULL,3*NPT); mixf(0x1511DB764ULL,3*NPT); mixf(0x15120B764ULL,3*NPT);
  mix(D(0x1512DB768ULL),16*NQ); mix(D(0x15131B768ULL),4*NQ); mix(D(0x15133B764ULL),4*(NQ+1)); mixf(0x14500A5C0ULL,48);
  mix(D(0x145098CC0ULL),0xE8*8);
  printf(" hash %016llx\n",(unsigned long long)h);
}
static float rv(void){ return rnd()%40==0?special[rnd()%11]:rnd()%2?(float)(rnd()%5):rfn(-10,10); }
static uint32_t rflag(void){
  static const uint32_t sides[]={0,0x10000,0x20000,0x30000,0x40000,0x50000,0x60000,0x70000,0xF0000};
  unsigned k=rnd()%4; uint32_t low=k==0?rnd()%6:k==1?rnd()%16:rnd32()&0xFFFF;
  return (rnd()%6==0?rnd32()&0xFFF00000:0)|sides[rnd()%9]|(rnd()%3?(rnd()&3)<<12:0)|low; }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  hook(0x14001B5C0ULL,s_1b5c0); hook(0x140001F20ULL,s_1f20);
  for(int c=0;c<cases;c++){
    int32_t np=rnd()%10==0?-(int32_t)(rnd()%3):(int32_t)(rnd()%NPT), nq=rnd()%10==0?-(int32_t)(rnd()%3):(int32_t)(rnd()%NQ);
    G(int32_t,0x1510AB760ULL)=np; G(int32_t,0x1512DB764ULL)=nq;
    for(int i=0;i<3*NPT;i++){ G(float,0x1511AB764ULL+4ULL*i)=rv(); G(float,0x1511DB764ULL+4ULL*i)=rv(); G(float,0x15120B764ULL+4ULL*i)=rv(); }
    for(int q=0;q<NQ;q++){ G(uint32_t,0x15131B768ULL+4ULL*q)=rflag(); }
    for(int i=0;i<4*NQ;i++) G(uint32_t,0x1512DB768ULL+4ULL*i)=rnd32();
    for(int q=0;q<=NQ;q++) G(uint32_t,0x15133B764ULL+4ULL*q)=rnd32();
    for(int i=0;i<48;i++) G(uint32_t,0x14500A5C0ULL+4ULL*i)=rnd32();
    for(int i=0;i<0xE8*8/4;i++) G(uint32_t,0x145098CC0ULL+4ULL*i)=rnd32();
    ss=rnd32();
    if(rnd()%2){
      int shape=(int)(rnd()%8); int32_t size[3]; for(int k=0;k<3;k++) size[k]=rnd()%8==0?(int32_t)rnd32():(int32_t)(rnd()%5);
      printf("%d turn %d %d %d %d:",c,shape,size[0],size[1],size[2]);
#ifdef ENGINE
      world_shape_build_turn(shape,size);
#else
      ((MS void(*)(int,int32_t*))F(0x14004D170ULL))(shape,size);
#endif
    } else if(rnd()%5==0){
      int a=(int)(rnd()%3), b=(int)(rnd()%4), turn=rnd()%6==0?(int)(rnd()%9)-3:(int)(rnd()%4);
      uint64_t R=0x1ABC89C00ULL+0x3040ULL*a+0x300ULL*b; int32_t n=rnd()%8==0?-1:(int32_t)(rnd()%5);
      G(int32_t,R+0x40)=rnd()%2?1:(int32_t)(rnd()%4); G(int32_t,R+0x1B8)=n;
      for(int k=0;k<4;k++) G(float,R+0x44+4*k)=rnd()%3?rfn(0,0.6f):rv();
      for(int i=0;i<5;i++){ G(int32_t,R+0x1BC+24*i)=(int32_t)(rnd()%5); for(int k=0;k<4;k++) G(float,R+0x1C4+24*i+4*k)=rv(); }
      printf("%d wall %d %d %d:",c,turn,a,b);
#ifdef ENGINE
      world_shape_build_wall(turn,a,b);
#else
      ((MS int64_t(*)(int,int,int))F(0x14001A1C0ULL))(turn,a,b);
#endif
    } else if(rnd()%5==0){
      int a=(int)(rnd()%3), b=(int)(rnd()%4), turn=rnd()%6==0?(int)(rnd()%9)-3:(int)(rnd()%4);
      uint64_t R=0x1ABC89C00ULL+0x3040ULL*a+0x300ULL*b; int32_t n=rnd()%8==0?-1:(int32_t)(rnd()%6);
      G(int32_t,R+0x40)=rnd()%2?1:(int32_t)(rnd()%4); G(int32_t,R+0x74)=n;
      for(int i=0;i<6*5;i++) G(float,R+0x7C+4*i)=rv();
      int32_t nb=(int32_t)(rnd()%20); G(int32_t,0x15155CFB4ULL)=nb;
      for(int i=0;i<20*30;i++) G(uint32_t,0x15155CFCCULL+4ULL*i)=rnd32();
      printf("%d boxes %d %d %d:",c,turn,a,b);
#ifdef ENGINE
      world_shape_build_boxes(turn,a,b);
#else
      ((MS int64_t(*)(uint32_t,int,int))F(0x14001A590ULL))((uint32_t)turn,a,b);
#endif
      h=1469598103934665603ULL; mix(D(0x15155CFB4ULL),4); mixf(0x15155CFCCULL,20*30); printf(" b %016llx",(unsigned long long)h);
    } else if(rnd()%4==0){
      int q=rnd()%8==0?(int)(rnd()%20)-10:(int)(rnd()%(NQ+4));
      for(int i=0;i<3*NQ;i++) G(uint32_t,0x15134B768ULL+4ULL*i)=rnd32();
      printf("%d remove %d:",c,q);
#ifdef ENGINE
      world_shape_build_remove_quad(q);
#else
      ((MS void(*)(int))F(0x140184AB0ULL))(q);
#endif
      h=1469598103934665603ULL; mix(D(0x15134B768ULL),12*NQ); printf(" v %016llx",(unsigned long long)h);
    } else if(rnd()%3==0){
      int turn=rnd()%6==0?(int)(rnd()%9)-3:(int)(rnd()%4); float x=rv(), z=rv();
      printf("%d corner %d %08x %08x:",c,turn,canon(*(uint32_t*)&x),canon(*(uint32_t*)&z));
#ifdef ENGINE
      world_shape_build_corner(turn,x,z);
#else
      ((MS int64_t(*)(int64_t,float,float))F(0x14001A050ULL))(turn,x,z);
#endif
    } else {
      if(nq<=0) G(int32_t,0x1512DB764ULL)=1+(int32_t)(rnd()%(NQ-2));
      int kind=rnd()%8==0?(int)(rnd()%20)-5:(int)(rnd()%6); float off[3]; for(int k=0;k<3;k++) off[k]=rv();
      if(rnd()%2){
        uint8_t trim=(uint8_t)rnd();
        printf("%d trimmed slab %d %02x:",c,kind,trim);
#ifdef ENGINE
        world_shape_build_slab_trimmed(kind,off,trim);
#else
        ((MS void(*)(int,float*,char))F(0x1400194B0ULL))(kind,off,(char)trim);
#endif
      } else {
      printf("%d slab %d:",c,kind);
#ifdef ENGINE
      world_shape_build_slab(kind,off);
#else
      ((MS void(*)(int,float*))F(0x140019140ULL))(kind,off);
#endif
      }
    }
    dump();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
