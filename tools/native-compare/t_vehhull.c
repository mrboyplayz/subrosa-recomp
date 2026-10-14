// A ray against a vehicle's hull (0x1400E21F0) with identical vehicles and hull meshes in two processes; nothing is
// stubbed. Mode "engine": src/engine/collision_hull_ray.c (collision_ray_hull).
#include "peload.h"
#ifdef ENGINE
MS int collision_ray_hull(int vehicle, const float from[3], const float to[3]);
#endif
static uint32_t rs=8086; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float frand(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFFFF)/16777216.0f; }
#define G(type,addr) (*(type*)D(addr))
static uint32_t canon(float f){ uint32_t w; memcpy(&w,&f,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; return w; }
static const float specials[]={0.0f,-0.0f,1.0f,-1.0f,1e30f,-1e30f,INFINITY,-INFINITY,NAN};
static int wild;
static float pick(float lo,float hi){ if(wild && rnd()%(unsigned)wild==0) return specials[rnd()%9]; return frand(lo,hi); }
static void putf(uint8_t *p,float f){ memcpy(p,&f,4); }
static void puti(uint8_t *p,int32_t i){ memcpy(p,&i,4); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):30000;
  uint8_t *vehicles=&G(uint8_t,0x15F2D9200ULL); uint32_t *hit=&G(uint32_t,0x151A84880ULL);
  for(int c=0;c<cases;c++){ wild=c%4==3?10:c%4==2?0:80;
    int v=rnd()%4==0?511:(int)(rnd()%8), type=(int)(rnd()%20); uint8_t *vp=vehicles+0x5168*v;
    uint8_t *tp=&G(uint8_t,0x19028EC54ULL+0x2C040ULL*(uint64_t)type), *fp=&G(uint8_t,0x190291C58ULL+0x2C040ULL*(uint64_t)type);
    for(int k=0;k<0xE0;k+=4){ uint32_t w=rnd32(); memcpy(vp+k,&w,4); }
    puti(vp+4,type);
    float centre[3]={frand(-50.0f,50.0f),frand(-50.0f,50.0f),frand(-50.0f,50.0f)};
    for(int k=0;k<3;k++){ putf(vp+0x2C+4*k,centre[k]+pick(-1.0f,1.0f)); putf(vp+0xB0+4*k,centre[k]-pick(0.5f,6.0f)); putf(vp+0xBC+4*k,centre[k]+pick(0.5f,6.0f)); }
    { float a=frand(-3.2f,3.2f), cs=cosf(a), sn=sinf(a), m[9]={cs,0,-sn, 0,1,0, sn,0,cs}; for(int k=0;k<9;k++) putf(vp+0x44+4*k,rnd()%5==0?pick(-1.0f,1.0f):m[k]+pick(-0.1f,0.1f)); }
    // hull: every count from 0 through the 4-at-a-time and leftover paths of the original's transform, up to 40
    int nv=rnd()%8==0?(int)(rnd()%4):(int)(4+rnd()%37), nf=nv<3?0:(int)(rnd()%14);
    puti(tp,nv); for(int i=0;i<nv*3;i++) putf(tp+4+4*i,pick(-5.0f,5.0f));
    puti(fp,nf); for(int f=0;f<nf;f++){ uint8_t *q=fp+8+24*f; puti(q,rnd()%3==0?4:rnd()%9==0?5:3); for(int k=0;k<4;k++) puti(q+4+4*k,rnd()%9==0&&k>0?(int32_t)(rnd()%(unsigned)nv):(int32_t)(rnd()%(unsigned)nv)); puti(q+20,(int32_t)rnd32()); }
    float from[3], to[3]; for(int k=0;k<3;k++){ from[k]=centre[k]+pick(-9.0f,9.0f); to[k]=rnd()%3==0?centre[k]+pick(-9.0f,9.0f):centre[k]+pick(-2.0f,2.0f); }
    for(int k=0;k<0x60/4;k++) hit[k]=rnd32();
    int r;
#ifdef ENGINE
    r=collision_ray_hull(v,from,to);
#else
    r=((MS int(*)(int,const float*,const float*))F(0x1400E21F0ULL))(v,from,to);
#endif
    printf("== case %d: %d verts %d faces %d ->",c,nv,nf,r&0xFF);
    for(int k=0;k<0x60/4;k++){ float f; memcpy(&f,&hit[k],4); printf(" %08x",k<8?canon(f):hit[k]); } printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
