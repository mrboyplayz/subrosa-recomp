// Bezier patches, in two processes (src/engine/world_patch_mesh.c): the curve 0x140187180 (patch_bezier) and its
// slope 0x1401872F0 (patch_bezier_slope) on random inputs of orders 1-3, turning the control grid 0x14001B5C0
// (world_patch_grid_turn), and tessellating a patch into the scratch shape 0x140001F20 (world_patch_tessellate) on
// random grids, steps (also 0 and negative) and orders. Results are printed raw (NaN canonical) and the scratch
// areas as hashes.
#include "peload.h"
#ifdef ENGINE
MS float patch_bezier(int order,float t,float p0,float p1,float p2,float p3);
MS float patch_bezier_slope(int order,float t,float p0,float p1,float p2,float p3);
MS uint32_t world_patch_grid_turn(int turns,uint32_t side_code);
MS void world_patch_tessellate(const float *points,const float *coordinates,int steps_u,int order_u,int steps_v,int order_v,uint32_t flags);
#endif
static uint32_t rs=24680; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
static float rfn(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
static uint32_t bits(float f){ uint32_t w; memcpy(&w,&f,4); return canon(w); }
#define G(type,addr) (*(type*)D(addr))
static uint64_t h;
static void mix(const void *p,size_t n){ const uint8_t *b=p; for(size_t i=0;i<n;i++){ h^=b[i]; h*=1099511628211ULL; } }
static void mixf(uint64_t addr,int n){ for(int i=0;i<n;i++){ uint32_t c=canon(G(uint32_t,addr+4ULL*i)); mix(&c,4); } }
#define NP 1200
#define NQ 400
static float rv(void){ return rnd()%40==0?special[rnd()%11]:rnd()%3==0?(float)(rnd()%3):rfn(-4,4); }
static float grid_buf[48], coord_buf[32];
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):6000;
  for(int c=0;c<cases;c++){
    unsigned kind=rnd()%4;
    if(kind==0){
      for(int i=0;i<20;i++){
        int order=1+(int)(rnd()%3); float t=rnd()%6==0?special[rnd()%11]:rfn(-0.5f,1.5f), p[4]; for(int k=0;k<4;k++) p[k]=rv();
        float a,b;
#ifdef ENGINE
        a=patch_bezier(order,t,p[0],p[1],p[2],p[3]); b=patch_bezier_slope(order,t,p[0],p[1],p[2],p[3]);
#else
        a=((MS float(*)(int,float,float,float,float,float))F(0x140187180ULL))(order,t,p[0],p[1],p[2],p[3]);
        b=((MS float(*)(int,float,float,float,float,float))F(0x1401872F0ULL))(order,t,p[0],p[1],p[2],p[3]);
#endif
        printf(" %08x %08x",bits(a),bits(b));
      }
      printf("\n"); continue;
    }
    for(int i=0;i<48;i++) G(float,0x14500A5C0ULL+4ULL*i)=rv();
    for(int i=0;i<32;i++) G(float,0x14500A680ULL+4ULL*i)=rv();
    if(kind==1){
      static const uint32_t codes[]={0,0x10000,0x20000,0x30000,0x40000,0x50000,0x60000,0x70000};
      int turns=rnd()%6==0?-(int)(rnd()%3):(int)(rnd()%7); uint32_t code=rnd()%8==0?rnd32():codes[rnd()%8], r;
#ifdef ENGINE
      r=world_patch_grid_turn(turns,code);
#else
      r=(uint32_t)((MS int64_t(*)(int64_t,uint32_t))F(0x14001B5C0ULL))(turns,code);
#endif
      h=1469598103934665603ULL; mixf(0x14500A5C0ULL,48+32);
      printf("%d turn %d %x -> %x %016llx\n",c,turns,code,r,(unsigned long long)h); continue;
    }
    int32_t np=(int32_t)(rnd()%200), nq=(int32_t)(rnd()%100);
    G(int32_t,0x1510AB760ULL)=np; G(int32_t,0x1512DB764ULL)=nq;
    for(int i=0;i<3*NP;i++){ G(float,0x1511AB764ULL+4ULL*i)=rv(); G(uint32_t,0x1511DB764ULL+4ULL*i)=rnd32(); G(uint32_t,0x15120B764ULL+4ULL*i)=rnd32(); G(uint32_t,0x15123B764ULL+4ULL*i)=rnd32(); }
    for(int i=0;i<4*NQ;i++) G(uint32_t,0x1512DB768ULL+4ULL*i)=rnd32();
    for(int i=0;i<NQ;i++){ G(uint32_t,0x15131B768ULL+4ULL*i)=rnd32(); G(uint32_t,0x15133B768ULL+4ULL*i)=rnd32(); }
    for(int i=0;i<36;i++) G(uint32_t,0x14500A3E0ULL+4ULL*i)=rnd32();
    int su=rnd()%10==0?-(int)(rnd()%2):(int)(rnd()%6), sv=rnd()%10==0?-(int)(rnd()%2):(int)(rnd()%6);
    int ou=1+(int)(rnd()%3), ov=1+(int)(rnd()%3); uint32_t flags=rnd32();
    const float *pts=(const float*)D(0x14500A5C0ULL), *crd=(const float*)D(0x14500A680ULL);
    if(rnd()%4==0){ for(int i=0;i<48;i++) grid_buf[i]=rv(); for(int i=0;i<32;i++) coord_buf[i]=rv(); pts=grid_buf; crd=coord_buf; }
    printf("%d patch %d %d %d %d %08x %d:",c,su,ou,sv,ov,flags,pts==grid_buf);
#ifdef ENGINE
    world_patch_tessellate(pts,crd,su,ou,sv,ov,flags);
#else
    ((MS int64_t(*)(const float*,const float*,int,int,int,int,uint32_t))F(0x140001F20ULL))(pts,crd,su,ou,sv,ov,flags);
#endif
    int32_t np2=G(int32_t,0x1510AB760ULL), nq2=G(int32_t,0x1512DB764ULL);
    printf(" points %d quads %d",np2,nq2);
    h=1469598103934665603ULL;
    mixf(0x1511AB764ULL,3*NP); mixf(0x1511DB764ULL,3*NP); mixf(0x15120B764ULL,3*NP); mixf(0x15123B764ULL,3*NP);
    printf(" p %016llx",(unsigned long long)h); h=1469598103934665603ULL;
    mix(D(0x1512DB768ULL),16*NQ); mix(D(0x15131B768ULL),4*NQ); mix(D(0x15133B768ULL),4*NQ);
    printf(" q %016llx",(unsigned long long)h); h=1469598103934665603ULL;
    mixf(0x14500A3E0ULL,36); mixf(0x14500A5C0ULL,48+32);
    printf(" s %016llx\n",(unsigned long long)h);
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
