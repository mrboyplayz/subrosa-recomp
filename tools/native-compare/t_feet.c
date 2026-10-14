// A foot's ground contact (src/engine/human_feet.c) against the original (0x1400B5460), on random humans, legs,
// skeletons and bond tables. The ground probe it calls is the engine's own (0x1400B91E0, suite walk); the two level
// queries under it stay in recompiled code and are replaced in both images by stubs that log their arguments and
// write a hit from a fixed sequence (0x1400DC050, 0x1400DC940).
// Mode "engine": the engine function.
#include "peload.h"
#ifdef ENGINE
MS void human_foot_ground_contact(int human, int leg);
#endif
static uint32_t rs=774411; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float rfc(float scale){ return scale*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
#define G(type,addr) (*(type*)D(addr))
#define HUMAN(i) (&G(uint8_t,0x18329E308ULL+0x6FF8ULL*(uint64_t)(i)))
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
static uint32_t fb(float f){ uint32_t w; memcpy(&w,&f,4); return canon(w); }
static void setf(uint8_t *h,int off,float v){ memcpy(h+off,&v,4); }
static void seti(uint8_t *h,int off,int32_t v){ memcpy(h+off,&v,4); }

static uint32_t ss; static int hit_rate;
static uint32_t sr(void){ ss=ss*1103515245u+12345u; return ss>>8; }
static float sf(void){ return ((int)(sr()&0xFFFF)-0x8000)/32768.0f; }
static void write_hit(const float *from,const float *to){
  float t=(float)(sr()&0xFFFF)/65536.0f; unsigned k=sr()%24;
  if(k==0) t=1.0f; else if(k==1) t=1.25f; else if(k==2) t=__builtin_nanf(""); else if(k==3) t=0.0f;
  float *hit=&G(float,0x151A84880ULL);
  for(int a=0;a<3;a++){ hit[a]=from[a]+(to[a]-from[a])*t+sf()*0.05f; hit[3+a]=sf(); hit[8+a]=sf(); }
  if(sr()%8==0) hit[1]=to[1]+sf()*0.2f;
  if(sr()%40==0) hit[1]=__builtin_nanf("");
  hit[6]=t; }
static void logray(const char *name,int vehicle,int flag,const float *from,const float *to){
  printf("call %s %d %d %08x %08x %08x  %08x %08x %08x\n",name,vehicle,flag,fb(from[0]),fb(from[1]),fb(from[2]),fb(to[0]),fb(to[1]),fb(to[2])); }
static MS int s_dc050(float *from,float *to,int flag){ logray("dc050",-1,flag,from,to); int r=(int)(sr()%8)<hit_rate; if(r || sr()%4==0) write_hit(from,to); return r; }
static MS int s_dc940(int vehicle,float *from,float *to,int flag){ logray("dc940",vehicle,flag,from,to); int r=(int)(sr()%8)<hit_rate; if(r || sr()%4==0) write_hit(from,to); return r; }

#define NBOND 24
#define NVEH 16
typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={
  {0,0x6FF8,NULL,"human"},
  {0x151A84880ULL,0x80,NULL,"hit"},
  {0x1B4287C80ULL,244*NBOND,NULL,"bond"},
  {0x1B4037C40ULL,144*NBOND,NULL,"constraint"},
  {0x18399DF20ULL,1600,NULL,"skeleton"},
};
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr); for(size_t k=0;k+4<=regions[r].size;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
      if(a!=b && canon(a)!=canon(b)) printf("  %s+%zx %08x\n",regions[r].name,k,canon(b)); else if(a!=b) printf("  %s+%zx nan\n",regions[r].name,k); } } }

static void rotation(uint8_t *at){
  if(rnd()%5==0){ for(int k=0;k<9;k++) setf(at,4*k,rfc(1.0f)); return; }
  float a=rfc(3.2f),c=cosf(a),s=sinf(a),b=rfc(rnd()%2?0.3f:3.2f),cb=cosf(b),sb=sinf(b);
  float m[9]={c,0,-s, s*sb,cb,c*sb, s*cb,-sb,c*cb}; memcpy(at,m,36); }
static void random_human(int i){
  uint8_t *h=HUMAN(i);
  for(int k=0;k<0x6FF8;k+=4) setf(h,k,rfc(1.5f));
  for(int b=0;b<16;b++){ seti(h,0x220+0x138*b,(int)(rnd()%8192)); rotation(h+0x220+0x138*b+0x34); seti(h,0x220+0x138*b+0x130,(int)(rnd()%5)); }
  seti(h,0x54,rnd()%2); seti(h,0x58,(int)(rnd()%6)); seti(h,0x214,(int)(rnd()&0x3F)); seti(h,0x6734,rnd()%3?(int)(rnd()%4):-(int)(rnd()%2));
  seti(h,0x1F0,(int)(rnd()%3)); for(int k=0;k<8;k++) seti(h,0x1F4+4*k,(int)(rnd()%NVEH));
  for(int leg=0;leg<2;leg++){ uint8_t *l=h+0x68B8+0xDC*leg; seti(l,0x48,(int)rnd32()); seti(l,0x54,rnd()%2?1:(int)(rnd()%5));
    setf(l,0xC0,rnd()%3?0.0f:rnd()%4?rfc(1.0f):rnd()%2?-0.0f:__builtin_nanf("")); setf(l,0xC8,rfc(rnd()%2?0.5f:3.0f)); setf(l,0xD0,rfc(3.2f)); }
  if(rnd()%30==0){ static const int offs[]={0x220+0x138*12+4,0x220+0x138*12+8,0x220+0x138*15+0xA0,0x220+0x138*11+0x44,0x220+0x138*14+0x44,0x686C,0x220+0x138*12+0x34,0x220+0x138*15+0x44};
    setf(h,offs[rnd()%8],rnd()%2?__builtin_nanf(""):rnd()%2?__builtin_inff():-__builtin_inff()); } }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):40000;
  hook(0x1400DC050ULL,s_dc050); hook(0x1400DC940ULL,s_dc940);
  // every bond beyond those printed is in use
  for(int k=NBOND;k<0x4000;k++) G(int32_t,0x1B4287C80ULL+244ULL*k)=1;
  for(int c=0;c<cases;c++){
    int i=(int)(rnd()%256), leg=(int)(rnd()%2); random_human(i); ss=rnd32(); hit_rate=rnd()%4?8:(int)(rnd()%9); regions[0].addr=0x18329E308ULL+0x6FF8ULL*(uint64_t)i;
    for(int k=0;k<1600;k+=4) G(float,0x18399DF20ULL+k)=rfc(1.0f);
    for(int k=0;k<0x80;k+=4) G(float,0x151A84880ULL+k)=rfc(3.0f);
    // bonds: garbage, a few free; sometimes none free
    { int none=rnd()%12==0; for(int k=0;k<NBOND;k++){ uint8_t *bo=&G(uint8_t,0x1B4287C80ULL+244ULL*k); for(int w=0;w<244;w+=4) seti(bo,w,(int)rnd32()); seti(bo,0,none?1:(int)(rnd()%3==0?0:1+rnd()%3)); }
      memset(&G(uint8_t,0x1B4037C40ULL),0x11,144*NBOND); }
    G(uint8_t,0x183F7C960ULL)=rnd()%4==0;
    snapshot(); printf("== %d human %d leg %d\n",c,i,leg);
#ifdef ENGINE
    human_foot_ground_contact(i,leg);
#else
    ((MS int64_t(*)(int,int))F(0x1400B5460ULL))(i,leg);
#endif
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
