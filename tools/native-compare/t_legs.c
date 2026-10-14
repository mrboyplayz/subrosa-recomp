// Legs (src/engine/human_legs.c) against the original: the legs of a sitting human (0x1400B9D90) and of one
// lying down (0x1400BA210), with the body
// centre and limb inverse kinematics it calls (both engine code, suites body and ragdoll). The level sweep
// (0x1400DC050) stays in recompiled code and is replaced in both images by a stub that logs its arguments and
// writes a hit from a fixed sequence.
// Mode "engine": the engine function.
#include "peload.h"
#ifdef ENGINE
MS void human_sit_legs(int human);
MS void human_lie_legs(int human);
#endif
static uint32_t rs=660099; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float rfc(float scale){ return scale*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
#define G(type,addr) (*(type*)D(addr))
#define HUMAN(i) (&G(uint8_t,0x18329E308ULL+0x6FF8ULL*(uint64_t)(i)))
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
static uint32_t fb(float f){ uint32_t w; memcpy(&w,&f,4); return canon(w); }
static void setf(uint8_t *h,int off,float v){ memcpy(h+off,&v,4); }
static void seti(uint8_t *h,int off,int32_t v){ memcpy(h+off,&v,4); }

static uint32_t ss;
static uint32_t sr(void){ ss=ss*1103515245u+12345u; return ss>>8; }
static float sf(void){ return ((int)(sr()&0xFFFF)-0x8000)/32768.0f; }
static MS int s_dc050(float *from,float *to,int flag){ printf("call dc050 %d %08x %08x %08x  %08x %08x %08x\n",flag,fb(from[0]),fb(from[1]),fb(from[2]),fb(to[0]),fb(to[1]),fb(to[2]));
  float *hit=&G(float,0x151A84880ULL); for(int a=0;a<12;a++) hit[a]=sf(); return sr()%2; }

#define NBOND 48
typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={
  {0,0x6FF8,NULL,"human"},
  {0x151A84880ULL,0x80,NULL,"hit"},
  {0x1B4037C40ULL,144*NBOND,NULL,"constraint"},
  {0x1B4287C80ULL,244*NBOND,NULL,"bond"},
  {0x1449816E0ULL,188*32,NULL,"body"},
  {0x18399DF20ULL,1600,NULL,"skeleton"},
};
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr); for(size_t k=0;k+4<=regions[r].size;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
      if(a!=b && canon(a)!=canon(b)) printf("  %s+%zx %08x\n",regions[r].name,k,canon(b)); else if(a!=b) printf("  %s+%zx nan\n",regions[r].name,k); } } }

static void random_human(int i){
  uint8_t *h=HUMAN(i);
  for(int k=0;k<0x6FF8;k+=4) setf(h,k,rfc(1.5f));
  seti(h,0x54,rnd()%4?(int)(rnd()%2):-1); seti(h,0x58,(int)(rnd()%6)); seti(h,0x7C,(int)rnd32());
  for(int b=0;b<16;b++){ seti(h,0x220+0x138*b,(int)(rnd()%32)); seti(h,0x220+0x138*b+0x120,b); setf(h,0x220+0x138*b+0x84,rfc(0.4f)+0.5f); }
  // rotations near orthonormal most of the time (asinf's error path cannot run in this loader)
  for(int b=0;b<16;b++) for(int k=0;k<9;k++) setf(h,0x220+0x138*b+0x34+4*k,rfc(1.0f));
  for(int b=0;b<16;b++) if(rnd()%4){ float a=rfc(3.0f),c=cosf(a),s=sinf(a); float m[9]={c,0,-s, 0,1,0, s,0,c}; if(rnd()%2){ m[1]=m[0]*0.1f; m[4]=c; m[5]=s; m[7]=-s; } memcpy(h+0x220+0x138*b+0x34,m,36); }
  for(int leg=0;leg<2;leg++) seti(h,0x690C+0xDC*leg,(int)(rnd()%5)); }
static void random_world(void){
  for(int b=0;b<32;b++){ uint8_t *x=&G(uint8_t,0x1449816E0ULL+188ULL*b); for(int k=0x14;k<0x30;k+=4) setf(x,k,rfc(50.0f)); }
  for(int b=0;b<16;b++){ uint8_t *x=&G(uint8_t,0x18399DF20ULL+100ULL*b); for(int k=0;k<100;k+=4) setf(x,k,rfc(1.0f));
    for(int a=0;a<3;a++){ float lo=rfc(2.0f), hi=lo+rfc(1.0f)+1.0f; if(rnd()%8==0){ float t=lo; lo=hi; hi=t; } setf(x,4*a,lo); setf(x,12+4*a,hi); } seti(x,0x18,(int)(rnd()%3)); }
  G(uint8_t,0x183F7C960ULL)=rnd()%5==0;
  for(int k=0;k<0x80;k+=4) G(float,0x151A84880ULL+k)=rfc(3.0f);
  for(int k=0;k<NBOND;k++){ uint8_t *bo=&G(uint8_t,0x1B4287C80ULL+244ULL*k); memset(&G(uint8_t,0x1B4037C40ULL+144ULL*k),0x11,144);
    for(int w=0;w<244;w+=4) setf(bo,w,rfc(1.0f)); seti(bo,0,k<16 || rnd()%2); } }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):12000;
  hook(0x1400DC050ULL,s_dc050);
  for(int c=0;c<cases;c++){
    int i=(int)(rnd()%256); random_human(i); random_world(); ss=rnd32(); regions[0].addr=0x18329E308ULL+0x6FF8ULL*(uint64_t)i;
    snapshot(); printf("== %d human %d\n",c,i);
    if(c%2){
#ifdef ENGINE
    human_sit_legs(i);
#else
    ((MS int64_t(*)(int))F(0x1400B9D90ULL))(i);
#endif
    } else {
      printf("lie\n");
#ifdef ENGINE
    human_lie_legs(i);
#else
    ((MS int64_t(*)(int))F(0x1400BA210ULL))(i);
#endif
    }
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
