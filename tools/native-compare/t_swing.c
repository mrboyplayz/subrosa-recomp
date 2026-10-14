// A stepping leg (src/engine/human_legs.c, human_swing_step) against the original (0x1400BB6B0), on
// random humans and leg records. The ground probe it calls is the engine's own (suite walk); the two level queries
// under it stay in recompiled code and are replaced in both images by stubs that log their arguments and write a
// hit from a fixed sequence (0x1400DC050, 0x1400DC940).
// Mode "engine": the engine function.
#include "peload.h"
#ifdef ENGINE
MS void human_swing_step(int human, int leg, const float *hip_target, const float *axes);
#endif
static uint32_t rs=737373; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float rfc(float scale){ return scale*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
#define G(type,addr) (*(type*)D(addr))
#define HUMAN(i) (&G(uint8_t,0x18329E308ULL+0x6FF8ULL*(uint64_t)(i)))
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
static uint32_t fb(float f){ uint32_t w; memcpy(&w,&f,4); return canon(w); }
static void setf(uint8_t *h,int off,float v){ memcpy(h+off,&v,4); }
static void seti(uint8_t *h,int off,int32_t v){ memcpy(h+off,&v,4); }
static float getf(const uint8_t *h,int off){ float v; memcpy(&v,h+off,4); return v; }

static uint32_t ss; static int hit_rate;
static uint32_t sr(void){ ss=ss*1103515245u+12345u; return ss>>8; }
static float sf(void){ return ((int)(sr()&0xFFFF)-0x8000)/32768.0f; }
static void write_hit(const float *from,const float *to){
  float t=(float)(sr()&0xFFFF)/65536.0f; unsigned k=sr()%24; if(k==0) t=1.0f; else if(k==1) t=1.25f; else if(k==2) t=__builtin_nanf("");
  float *hit=&G(float,0x151A84880ULL); for(int a=0;a<3;a++){ hit[a]=from[a]+(to[a]-from[a])*t; hit[3+a]=sf(); hit[8+a]=sf(); } hit[6]=t; }
static void logray(const char *name,int vehicle,int flag,const float *from,const float *to){
  printf("call %s %d %d %08x %08x %08x  %08x %08x %08x\n",name,vehicle,flag,fb(from[0]),fb(from[1]),fb(from[2]),fb(to[0]),fb(to[1]),fb(to[2])); }
static MS int s_dc050(float *from,float *to,int flag){ logray("dc050",-1,flag,from,to); int r=(int)(sr()%8)<hit_rate; if(r || sr()%4==0) write_hit(from,to); return r; }
static MS int s_dc940(int vehicle,float *from,float *to,int flag){ logray("dc940",vehicle,flag,from,to); int r=(int)(sr()%8)<hit_rate; if(r || sr()%4==0) write_hit(from,to); return r; }

typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={ {0,0x6FF8,NULL,"human"}, {0x151A84880ULL,0x80,NULL,"hit"} };
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr); for(size_t k=0;k+4<=regions[r].size;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
      if(a!=b && canon(a)!=canon(b)) printf("  %s+%zx %08x\n",regions[r].name,k,canon(b)); else if(a!=b) printf("  %s+%zx nan\n",regions[r].name,k); } } }

static const float scales[]={0.02f,0.08f,0.125f,0.3f,1.5f};
static void random_human(int i){
  uint8_t *h=HUMAN(i);
  for(int k=0;k<0x6FF8;k+=4) setf(h,k,rfc(1.5f));
  seti(h,0x54,rnd()%3?1:(int)(rnd()%3)-1); seti(h,0x58,rnd()%3==0?5:rnd()%2?0:(int)(rnd()%6)); seti(h,0x5C,(int)(rnd()%13)-1);
  seti(h,0x214,(int)(rnd()&0x3F)); seti(h,0x6734,(int)(rnd()%3)); seti(h,0x1F0,(int)(rnd()%3)); for(int k=0;k<8;k++) seti(h,0x1F4+4*k,(int)(rnd()%16));
  setf(h,0x6768,rnd()%3?0.5f+rfc(0.1f):rnd()%2?0.5f:rfc(1.5f));
  // the feet near where they should stand, at several distances; the body's velocities at several magnitudes
  { float s=scales[rnd()%5]; for(int k=0;k<3;k++){ setf(h,0x6798+4*k,rfc(rnd()%2?0.004f:0.05f)); setf(h,0x6884+4*k,rfc(0.02f)); }
    for(int foot=0;foot<2;foot++){ uint8_t *b=h+0x220+0x138*(12+3*foot); setf(b,4,getf(h,0x674C)+rfc(s)); setf(b,12,getf(h,0x6754)+rfc(s));
      seti(b,0x130,rnd()%3?(int)(rnd()%3):rnd()%2?0:-1); }
    if(rnd()%3==0) setf(h,0x228,getf(h,0x220+0x138*(12+3*(rnd()%2))+8)+rfc(1.0f)); }
  for(int leg=0;leg<2;leg++){ uint8_t *l=h+0x68B8+0xDC*leg; seti(l,0x4C,rnd()%2?0:(int)(rnd()%7)-1); seti(l,0x54,rnd()%4?1:rnd()%2?3:(int)(rnd()%5)); seti(l,0x58,rnd()%3?(int)(rnd()%40):29);
    setf(l,0x5C,rnd()%2?1.0f+rfc(0.5f):rnd()%2?1.0f:rfc(1.5f)); setf(l,0xC0,rnd()%4?(float)(rnd()%3)*0.5f:rfc(2.0f));
    { uint8_t *b=h+0x220+0x138*(12+3*leg); float s=scales[rnd()%5]*0.3f; setf(l,0x78,getf(b,4)+rfc(s)); setf(l,0x80,getf(b,12)+rfc(s)); } }
  if(rnd()%30==0){ static const int offs[]={0x674C,0x6754,0x6798,0x679C,0x67A0,0x6884,0x688C,0x6768,0x220+0x138*12+4,0x220+0x138*15+12,0x228,0x68B8+0x5C,0x68B8+0xDC+0xC0,0x68B8+0x78,0x254,0x26C};
    setf(h,offs[rnd()%16],rnd()%2?__builtin_nanf(""):rnd()%2?__builtin_inff():-__builtin_inff()); } }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):40000;
  hook(0x1400DC050ULL,s_dc050); hook(0x1400DC940ULL,s_dc940);
  for(int c=0;c<cases;c++){
    int i=(int)(rnd()%256); random_human(i); ss=rnd32(); hit_rate=(int)(rnd()%9); regions[0].addr=0x18329E308ULL+0x6FF8ULL*(uint64_t)i;
    for(int k=0;k<0x80;k+=4) G(float,0x151A84880ULL+k)=rfc(3.0f);
    int leg=(int)(rnd()%2); float tgt[3],axes[9]; { uint8_t *h=HUMAN(i); for(int k=0;k<3;k++) tgt[k]=getf(h,0x674C+4*k)+rfc(0.6f);
      float a=rfc(3.2f),ca=cosf(a),sa=sinf(a); float m[9]={ca,0,-sa, 0,1,0, sa,0,ca}; if(rnd()%5==0) for(int k=0;k<9;k++) m[k]=rfc(1.0f); memcpy(axes,m,36);
      for(int l=0;l<2;l++){ uint8_t *r=h+0x68BC+0xDC*l; setf(r,0x58,rnd()%3==0?0.0f:rnd()%8==0?-0.0f:rnd()%20==0?__builtin_nanf(""):(float)(rnd()%25)/24.0f+rfc(0.01f)); setf(r,0xC4,rfc(1.2f)); }
      setf(h,0x6884,rfc(0.06f)); setf(h,0x6888,rfc(0.02f)); setf(h,0x688C,rfc(rnd()%2?0.06f:0.004f)); }
    snapshot(); printf("== %d human %d leg %d",c,i,leg); putchar(10);
#ifdef ENGINE
    human_swing_step(i,leg,tgt,axes);
#else
    ((MS int64_t(*)(int,int,int64_t,float*,int64_t,float*))F(0x1400BB6B0ULL))(i,leg,0,tgt,0,axes);
#endif
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
