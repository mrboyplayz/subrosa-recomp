// A helicopter's tick (0x14010AF90) with identical vehicles, humans, bodies and constraints in two processes. Nothing
// is stubbed: the matrix and quaternion routines and the C runtime's acos, sin and sine-cosine run for real.
// Mode "engine": src/engine/vehicle_helicopter.c (vehicle_update_helicopter).
#include "peload.h"
#ifdef ENGINE
MS void vehicle_update_helicopter(int vehicle);
#endif
static uint32_t rs=747; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float frand(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFFFF)/16777216.0f; }
#define G(type,addr) (*(type*)D(addr))
static uint32_t canon(float f){ uint32_t w; memcpy(&w,&f,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; return w; }
static void prw(const char *t,const void *p,size_t n){ printf("%s:",t); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ float f; memcpy(&f,b+k,4); printf(" %08x",canon(f)); } printf("\n"); }
static const float specials[]={0.0f,-0.0f,1.0f,-1.0f,1e30f,-1e30f,INFINITY,-INFINITY,NAN,3.1415927f,-3.1415927f};
static int wild;
static float pick(float lo,float hi){ if(wild && rnd()%(unsigned)wild==0) return specials[rnd()%11]; return frand(lo,hi); }
static void putf(uint8_t *p,float f){ memcpy(p,&f,4); }
static void puti(uint8_t *p,int32_t i){ memcpy(p,&i,4); }
static void fill(uint8_t *p,size_t n){ for(size_t k=0;k+4<=n;k+=4){ uint32_t w=rnd32(); memcpy(p+k,&w,4); } }
// A rotation: mostly a proper one (yaw, then a small tilt), sometimes anything.
static void rotation(uint8_t *p){ if(rnd()%6==0){ for(int k=0;k<9;k++) putf(p+4*k,pick(-1.0f,1.0f)); return; }
  float a=frand(-3.2f,3.2f), t=frand(-0.5f,0.5f), c=cosf(a), s=sinf(a), ct=cosf(t), st=sinf(t);
  float m[9]={c,0,-s, s*st,ct,c*st, s*ct,-st,c*ct}; for(int k=0;k<9;k++) putf(p+4*k,m[k]); if(rnd()%12==0) putf(p+4*(rnd()%9),pick(-1.0f,1.0f)); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  uint8_t *vehicles=&G(uint8_t,0x15F2D9200ULL), *bodies=&G(uint8_t,0x1449816E0ULL), *humans=&G(uint8_t,0x18329E308ULL), *constraints=&G(uint8_t,0x1B4037C40ULL);
  for(int h=0;h<256;h++) puti(humans+0x6FF8*h,0);
  static const int32_t speeds[]={0,5,9,10,11,1989,1990,1991,2000,2005,-3,1000};
  for(int c=0;c<cases;c++){ wild=c%4==3?15:c%4==2?0:120;
    int v=rnd()%4==0?511:(int)(rnd()%8); uint8_t *vp=vehicles+0x5168*v;
    int car=(int)(rnd()%40), rotor=rnd()%30==0?car:40+(int)(rnd()%40), bond=rnd()%8==0?0x3FFF:(int)(rnd()%64);
    uint8_t *cp=bodies+0xBC*car, *rp=bodies+0xBC*rotor, *kp=constraints+0x90*bond;
    fill(vp,0xE0); fill(vp+0x3600,0x2C); fill(vp+0x3894,0x200); fill(cp,0xBC); fill(rp,0xBC); fill(kp,0x90);
    puti(vp+0xC,rnd()%5==0?0:rnd()%9==0?-4:(int32_t)(1+rnd()%100)); puti(vp+0x20,rnd()%6==0); puti(vp+0x28,car); puti(vp+0x4FA8,rotor); puti(vp+0x4FAC,bond);
    rotation(vp+0x44); rotation(cp+0x3C); rotation(rp+0x3C); if(rnd()%4==0) memcpy(rp+0x3C,cp+0x3C,36);
    for(int k=0;k<3;k++){ putf(cp+0x24+4*k,pick(-1.0f,1.0f)); putf(rp+0x24+4*k,pick(-1.0f,1.0f)); putf(rp+0x60+4*k,pick(-2.0f,2.0f)); putf(rp+0x6C+4*k,pick(-0.3f,0.3f)); }
    if(rnd()%20==0) for(int k=0;k<3;k++) putf(cp+0x24+4*k,0.0f);
    // the controls stay finite: the C runtime's sin reports others through machinery the loader does not set up
    putf(vp+0x3600,frand(-1.0f,1.0f)); putf(vp+0x3604,frand(-1.0f,1.0f)); putf(vp+0x3608,frand(-1.0f,1.0f)); putf(vp+0x360C,frand(-1.0f,1.0f));
    puti(vp+0x3930,rnd()%3?speeds[rnd()%12]:(int32_t)(rnd()%2100));
    putf(vp+0x3988,rnd()%4==0?frand(-3.2f,3.2f):rnd()%4==0?frand(3.0f,3.3f)*(rnd()%2?1.0f:-1.0f):pick(-7.0f,7.0f)); putf(vp+0x3A34,pick(-7.0f,7.0f));
    // who is aboard
    int hs[3]; for(int i=0;i<3;i++){ hs[i]=i==0?255:(int)(rnd()%8); uint8_t *hp=humans+0x6FF8*hs[i]; puti(hp,rnd()%4!=0); puti(hp+0x28,rnd()%3?v:(int32_t)(rnd()%8)); puti(hp+0x2C,rnd()%2?0:(int32_t)(rnd()%4)); }
#ifdef ENGINE
    vehicle_update_helicopter(v);
#else
    ((MS void(*)(int))F(0x14010AF90ULL))(v);
#endif
    printf("== case %d rpm %d\n",c,G(int32_t,0x15F2D9200ULL+0x5168ULL*(uint64_t)v+0x3930));
    prw("vehicle",vp,0xE0); prw("controls",vp+0x3600,0x2C); prw("drive",vp+0x3894,0x200); prw("car",cp,0xBC); prw("rotor",rp,0xBC); prw("bond",kp,0x90);
    for(int i=0;i<3;i++) puti(humans+0x6FF8*hs[i],0);
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
