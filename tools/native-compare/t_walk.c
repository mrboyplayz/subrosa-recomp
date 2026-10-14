// Walking (src/engine/human_walk.c) against the original: the ground probe (0x1400B91E0), the ground ahead
// (0x1400AC890), the walk point's height (0x1400B2440) and the walk point (0x1400B40B0), on random humans, vehicles,
// items and item types. The two level queries they reach stay in recompiled code and are replaced in both images by
// stubs that log their arguments and write a hit from a fixed sequence: the level sweep (0x1400DC050) and the sweep
// against one vehicle (0x1400DC940).
// Mode "engine": the engine functions.
#include "peload.h"
#ifdef ENGINE
MS int human_probe_ground(int human, float *from, float *to);
MS void human_feel_ground_ahead(int human);
MS void human_update_walk_height(int human);
MS void human_update_walk_point(int human);
#endif
static uint32_t rs=90417; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float rfc(float scale){ return scale*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
#define G(type,addr) (*(type*)D(addr))
#define HUMAN(i) (&G(uint8_t,0x18329E308ULL+0x6FF8ULL*(uint64_t)(i)))
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
static uint32_t fb(float f){ uint32_t w; memcpy(&w,&f,4); return canon(w); }
static void setf(uint8_t *h,int off,float v){ memcpy(h+off,&v,4); }
static void seti(uint8_t *h,int off,int32_t v){ memcpy(h+off,&v,4); }
static float getf(const uint8_t *h,int off){ float v; memcpy(&v,h+off,4); return v; }

// ---- stubs -------------------------------------------------------------------------------------------------------
static uint32_t ss; static int hit_rate;              // stub sequence, reset per case; hits out of 8
static uint32_t sr(void){ ss=ss*1103515245u+12345u; return ss>>8; }
static float sf(void){ return ((int)(sr()&0xFFFF)-0x8000)/32768.0f; }
static void write_hit(const float *from,const float *to){
  float t=(float)(sr()&0xFFFF)/65536.0f; unsigned k=sr()%24;
  if(k==0) t=1.0f; else if(k==1) t=1.25f; else if(k==2) t=__builtin_nanf(""); else if(k==3) t=0.0f;
  float *hit=&G(float,0x151A84880ULL);
  for(int a=0;a<3;a++){ hit[a]=from[a]+(to[a]-from[a])*t+sf()*0.05f; hit[3+a]=sf(); hit[8+a]=sf(); }
  if(sr()%16==0) hit[1]=sf()*40.0f;
  hit[6]=t; }
static void logray(const char *name,int vehicle,int flag,const float *from,const float *to){
  printf("call %s %d %d %08x %08x %08x  %08x %08x %08x\n",name,vehicle,flag,fb(from[0]),fb(from[1]),fb(from[2]),fb(to[0]),fb(to[1]),fb(to[2])); }
static MS int s_dc050(float *from,float *to,int flag){ logray("dc050",-1,flag,from,to); int r=(int)(sr()%8)<hit_rate; if(r || sr()%4==0) write_hit(from,to); return r; }
static MS int s_dc940(int vehicle,float *from,float *to,int flag){ logray("dc940",vehicle,flag,from,to); int r=(int)(sr()%8)<hit_rate; if(r || sr()%4==0) write_hit(from,to); return r; }

#define NITEM 12
#define NTYPE 40
#define NVEH 16
typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={
  {0,0x6FF8,NULL,"human"},
  {0x151A84880ULL,0x80,NULL,"hit"},
  {0x15F2D9200ULL,0x5168ULL*NVEH,NULL,"vehicle"},
  {0x182BBB180ULL,0x1B80*NITEM,NULL,"item"},
  {0x182A7E180ULL,0x13D0*NTYPE,NULL,"itemtype"},
  {0x183EBFD34ULL,4,NULL,"tick"},
};
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr); for(size_t k=0;k+4<=regions[r].size;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
      if(a!=b && canon(a)!=canon(b)) printf("  %s+%zx %08x\n",regions[r].name,k,canon(b)); else if(a!=b) printf("  %s+%zx nan\n",regions[r].name,k); } } }

static const float scales[]={0.004f,0.02f,0.05f,0.3f,1.5f};
static void random_human(int i){
  uint8_t *h=HUMAN(i);
  for(int k=0;k<0x6FF8;k+=4) setf(h,k,rfc(1.5f));
  seti(h,0x1C,(int)(rnd()%22)-2); seti(h,0x54,rnd()%2); seti(h,0x58,(int)(rnd()%7)); seti(h,0x60,(int)(rnd()%4));
  seti(h,0x214,(int)(rnd()&0x3F)); seti(h,0x6734,rnd()%2?0:(int)(rnd()%4)-1); seti(h,0x6738,(int)rnd32());
  // near vehicles
  { int n=(int)(rnd()%4); if(rnd()%16==0) n=8; if(rnd()%16==0) n=-1; seti(h,0x1F0,n); for(int k=0;k<8;k++) seti(h,0x1F4+4*k,(int)(rnd()%NVEH)); }
  // velocities and the walk point at several magnitudes, so every threshold is crossed both ways
  { float s=scales[rnd()%5]; for(int k=0;k<3;k++){ setf(h,0x6884+4*k,rfc(s)); setf(h,0x6798+4*k,rfc(scales[rnd()%5])); setf(h,0x686C+4*k,rfc(s)); }
    float c=scales[rnd()%5]; for(int k=0;k<3;k++) setf(h,0x6854+4*k,getf(h,0x674C+4*k)+rfc(c)); }
  setf(h,0x118,rnd()%4?(float)(rnd()%65)/64.0f+rfc(0.01f):rfc(1.5f)); setf(h,0x10C,rfc(0.05f)); setf(h,0x114,rfc(0.05f));
  setf(h,0x12C,rnd()%3?rfc(1.0f):0.0f); setf(h,0x134,rnd()%4?rfc(1.0f):0.0f);
  setf(h,0x6768,rnd()%3?1.0f+rfc(0.6f):rfc(1.0f)); setf(h,0x68A8,rnd()%2?1.0f+rfc(0.7f):rfc(1.5f)); setf(h,0x68AC,rfc(rnd()%2?0.1f:1.5f));
  setf(h,0x68B0,rnd()%2?(float)(rnd()%33)/32.0f:rfc(1.5f));
  // legs: planted or not, the feet's flag
  for(int leg=0;leg<2;leg++){ seti(h,0x690C+0xDC*leg,(int)(rnd()%3)); seti(h,0x220+0x138*(12+3*leg)+0x130,rnd()%3?(int)rnd32():0); setf(h,0x697C+0xDC*leg,getf(h,0x224+4)+rfc(2.0f)); }
  for(int hand=0;hand<2;hand++){ int c=rnd()%2?(int)(rnd()%3):-(int)(rnd()%2); seti(h,0x6AD0+0x28*hand,c); seti(h,0x6AD4+0x28*hand,rnd()%8?(int)(rnd()%NITEM):-1); }
  // not-a-number in fields that do not reach a sine or cosine
  if(rnd()%40==0){ static const int offs[]={0x6884,0x688C,0x6798,0x67A0,0x674C,0x6750,0x6854,0x6858,0x68A8,0x68AC,0x68B0,0x118,0x12C,0x134,0x10C,0x114,0x6768,0x697C,0x228};
    setf(h,offs[rnd()%19],rnd()%2?__builtin_nanf(""):rnd()%2?__builtin_inff():-__builtin_inff()); } }
static void random_world(int i){
  uint8_t *h=HUMAN(i);
  for(int t=0;t<NTYPE;t++){ uint8_t *ty=&G(uint8_t,0x182A7E180ULL+0x13D0ULL*t); for(int k=0x80;k<0x8C;k+=4) setf(ty,k,rfc(1.0f)); }
  for(int it=0;it<NITEM;it++){ uint8_t *x=&G(uint8_t,0x182BBB180ULL+0x1B80ULL*it);
    for(int k=0;k<0x400;k+=4) setf(x,k,rfc(2.0f));
    seti(x,0x14,rnd()%2?28:(int)(rnd()%NTYPE));
    // the anchor and the item itself near the walk point, at several distances
    float s=scales[1+rnd()%4]*2.0f; setf(x,0x300,getf(h,0x6854)+rfc(s)); setf(x,0x308,getf(h,0x685C)+rfc(s));
    if(rnd()%2){ setf(x,0x5C,getf(x,0x300)+rfc(s)); setf(x,0x64,getf(x,0x308)+rfc(s)); } }
  for(int v=0;v<NVEH;v++){ uint8_t *x=&G(uint8_t,0x15F2D9200ULL+0x5168ULL*v); for(int k=0x8C;k<0xB0;k+=4) setf(x,k,rfc(0.5f)); }
  G(uint32_t,0x183EBFD34ULL)=rnd()%3?rnd32():rnd32()&~0xFu;
  for(int k=0;k<0x80;k+=4) G(float,0x151A84880ULL+k)=rfc(3.0f);
  G(int32_t,0x151A848F8ULL)=(int)(rnd()%NVEH); }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):40000;
  hook(0x1400DC050ULL,s_dc050); hook(0x1400DC940ULL,s_dc940);
  for(int c=0;c<cases;c++){
    int i=(int)(rnd()%256); random_human(i); random_world(i); ss=rnd32(); hit_rate=(int)(rnd()%10); regions[0].addr=0x18329E308ULL+0x6FF8ULL*(uint64_t)i;
    int what=c%4; snapshot(); printf("== %d what %d human %d\n",c,what,i);
    if(what==0){
#ifdef ENGINE
      human_update_walk_point(i);
#else
      ((MS int64_t(*)(int))F(0x1400B40B0ULL))(i);
#endif
    } else if(what==1){
#ifdef ENGINE
      human_feel_ground_ahead(i);
#else
      ((MS int64_t(*)(int))F(0x1400AC890ULL))(i);
#endif
    } else if(what==2){
#ifdef ENGINE
      human_update_walk_height(i);
#else
      ((MS int64_t(*)(int))F(0x1400B2440ULL))(i);
#endif
    } else {
      float from[3]={rfc(30.0f),rfc(30.0f),rfc(30.0f)}, to[3]={rfc(30.0f),rfc(30.0f),rfc(30.0f)}; int r;
#ifdef ENGINE
      r=human_probe_ground(i,from,to);
#else
      r=(int)((MS int64_t(*)(int,float*,float*))F(0x1400B91E0ULL))(i,from,to);
#endif
      printf("probe %d\n",r);
    }
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
