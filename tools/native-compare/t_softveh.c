// A ray against a soft-body vehicle, 0x1400DC940 (src/engine/collision_soft_vehicle.c collision_ray_soft_vehicle), in
// two processes: random vehicles (point lists, triangle and quad faces with blended corners, reported-slot maps,
// wheels), random physics points (positions and velocities), rays aimed through faces, wheels on or off. The weights
// 0x14002D370 and the wheel test 0x1400DF380 run for real. Rigid vehicle types are left to the vehicle-ray suite.
#include "peload.h"
#ifdef ENGINE
MS int collision_ray_soft_vehicle(int vehicle,const float *from,const float *to,int wheels);
#endif
static uint32_t rs=60606; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
static float rfn(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
#define G(type,addr) (*(type*)D(addr))
#define VEH(v) (0x15F2D9200ULL+0x5168ULL*(uint64_t)(v))
#define POINT(i) (0x151A84920ULL+0xF0ULL*(uint64_t)(i))
#define NPOINT 64
static void setf(uint64_t a,float v){ memcpy(D(a),&v,4); }
static void seti(uint64_t a,int32_t v){ memcpy(D(a),&v,4); }
static float getf(uint64_t a){ float v; memcpy(&v,D(a),4); return v; }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):8000;
  for(int t=0;t<4;t++) seti(0x192E9A680ULL+0x185C0ULL*t,0);
  for(int c=0;c<cases;c++){
    int v=(int)(rnd()%3); uint64_t V=VEH(v);
    float centre[3]; for(int k=0;k<3;k++) centre[k]=rfn(-50,50);
    float size=rfn(1,4);
    for(int i=0;i<NPOINT;i++){ for(int k=0;k<3;k++){ setf(POINT(i)+0x14+4*k,centre[k]+rfn(-size,size)); setf(POINT(i)+0x2C+4*k,rfn(-5,5)); }
      if(rnd()%200==0) setf(POINT(i)+0x14+4*(rnd()%3),special[rnd()%11]); }
    seti(V+4,(int32_t)(rnd()%4));
    for(int k=0;k<3;k++){ float lo=centre[k]-size-rfn(0,1), hi=centre[k]+size+rfn(0,1); if(rnd()%30==0) lo=centre[k]+rfn(0,size); setf(V+0xB0+4*k,lo); setf(V+0xBC+4*k,hi); }
    int nslot=8+(int)(rnd()%24); for(int s=0;s<nslot;s++){ seti(V+0xF0+4ULL*s,(int32_t)(rnd()%NPOINT)); seti(V+0x2E0C+16ULL*s,(int32_t)(rnd()%nslot)); }
    int nf=(int)(rnd()%12); if(rnd()%30==0) nf=0; seti(V+0x7F8,nf);
    for(int f=0;f<nf;f++){ uint64_t F=V+0x7FC+0x40ULL*f; seti(F,rnd()%2?4:3);
      for(int k=0;k<4;k++){ seti(F+4+4*k,(int32_t)(rnd()%nslot)); seti(F+0x14+4*k,rnd()%3?(rnd()%20?-1:-2):(int32_t)(rnd()%nslot)); setf(F+0x24+4*k,rfn(0,1)); }
      seti(F+0x3C,rnd()%6?1:(int32_t)(rnd()%2)-1); }
    int nw=rnd()%3?(int)(rnd()%4):0; seti(V+0x3940,nw);
    for(int w=0;w<nw;w++){ uint64_t W=V+0x3978+172ULL*w; setf(W,rfn(0.2f,1.0f)); for(int k=0;k<3;k++) setf(V+0x3990+172ULL*w+4*k,centre[k]+rfn(-size,size)); }
    float from[3], to[3];
    if(nf>0 && rnd()%3){ uint64_t F=V+0x7FC+0x40ULL*(rnd()%nf); float m[3]={0,0,0};
      for(int q=0;q<3;q++){ int32_t slot; memcpy(&slot,D(F+4+4*q),4); int32_t pi; memcpy(&pi,D(V+0xF0+4ULL*slot),4); for(int k=0;k<3;k++) m[k]+=getf(POINT(pi)+0x14+4*k)/3.0f; }
      for(int k=0;k<3;k++){ float d=rfn(-1,1)*rfn(0.5f,6); from[k]=m[k]+d; to[k]=m[k]-d*rfn(0.5f,2); } }
    else for(int k=0;k<3;k++){ from[k]=centre[k]+rfn(-3*size,3*size); to[k]=centre[k]+rfn(-3*size,3*size); }
    if(nw>0 && rnd()%4==0){ int w=(int)(rnd()%nw); for(int k=0;k<3;k++){ float c0=getf(V+0x3990+172ULL*w+4*k), d=rfn(-1,1)*3.0f; from[k]=c0+d; to[k]=c0-d; } }   /* at a wheel */
    if(rnd()%30==0) from[rnd()%3]=special[rnd()%11]; if(rnd()%30==0) to[rnd()%3]=special[rnd()%11];
    for(int w=0;w<0x50;w+=4) G(uint32_t,0x151A84880ULL+w)=rnd32();
    int wheels=rnd()%2;
#ifndef ENGINE
    if(getenv("SOFTVEH_DEBUG") && nw>0){ float pt[3],nm[3],tt; uint64_t W=V+0x3990; float rad; memcpy(&rad,D(V+0x3978),4);
      int hr=(int)((MS uint64_t(*)(float*,float*,float*,const float*,const float*,const float*,float))F(0x1400DF380ULL))(pt,nm,&tt,from,to,(float*)D(W),rad);
      fprintf(stderr,"dbg %d wheels %d nw %d hit %d t %g rad %g\n",c,wheels,nw,hr,tt,rad); }
#endif
#ifdef ENGINE
    int r=collision_ray_soft_vehicle(v,from,to,wheels);
#else
    int r=(int)((MS uint64_t(*)(int,const float*,const float*,int))F(0x1400DC940ULL))(v,from,to,wheels);
#endif
    printf("%d %d:",c,r); for(int w=0;w<0x50;w+=4){ uint32_t x=G(uint32_t,0x151A84880ULL+w); printf(" %08x",w>=0x2C&&w<0x44?x:canon(x)); }   /* the words at 0x2C-0x40 are integers */
    printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
