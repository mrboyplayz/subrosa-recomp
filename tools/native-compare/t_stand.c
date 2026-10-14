// Standing and walking legs (src/engine/human_stand.c) against the original (0x1400BCA30), with everything it calls
// (walk point, step planning, balance, swing, limb inverse kinematics: all engine code with suites of their own).
// The two level queries under the ground probe stay in recompiled code and are replaced in both images by stubs
// that log their arguments and write a hit from a fixed sequence (0x1400DC050, 0x1400DC940).
// Mode "engine": the engine function.
#include "peload.h"
#ifdef ENGINE
MS void human_stand_legs(int human);
#endif
static uint32_t rs=313131; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
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
static int hit_rate;
static void write_hit(const float *from,const float *to){ float t=(float)(sr()&0xFFFF)/65536.0f; unsigned k=sr()%24; if(k==0) t=1.0f; else if(k==1) t=1.25f; else if(k==2) t=__builtin_nanf("");
  float *hit=&G(float,0x151A84880ULL); for(int a=0;a<3;a++){ hit[a]=from[a]+(to[a]-from[a])*t; hit[3+a]=sf(); hit[8+a]=sf(); } hit[6]=t; }
static void logray(const char *name,int vehicle,int flag,const float *from,const float *to){
  printf("call %s %d %d %08x %08x %08x  %08x %08x %08x\n",name,vehicle,flag,fb(from[0]),fb(from[1]),fb(from[2]),fb(to[0]),fb(to[1]),fb(to[2])); }
static MS int s_dc050(float *from,float *to,int flag){ logray("dc050",-1,flag,from,to); int r=(int)(sr()%8)<hit_rate; if(r || sr()%4==0) write_hit(from,to); return r; }
static MS int s_dc940(int vehicle,float *from,float *to,int flag){ logray("dc940",vehicle,flag,from,to); int r=(int)(sr()%8)<hit_rate; if(r || sr()%4==0) write_hit(from,to); return r; }

#define NBOND 48
#define NBOND_ 48
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

static float getf(const uint8_t *h,int off){ float v; memcpy(&v,h+off,4); return v; }
static const float scales[]={0.004f,0.02f,0.08f,0.3f,1.5f};
static void random_human(int i){
  uint8_t *h=HUMAN(i);
  for(int k=0;k<0x6FF8;k+=4) setf(h,k,rfc(1.5f));
  seti(h,0x1C,(int)(rnd()%22)-2); seti(h,0x54,rnd()%4?1:(int)(rnd()%3)-1); seti(h,0x58,rnd()%8?(int)(rnd()%2):(int)(rnd()%7)); seti(h,0x5C,(int)(rnd()%12)); seti(h,0x60,(int)(rnd()%4));
  seti(h,0x78,rnd()%3?0:(int)(rnd()%45)-5); seti(h,0x7C,(int)rnd32()); seti(h,0x214,(int)(rnd()&0x3F)); seti(h,0x6734,rnd()%2?0:(int)(rnd()%4)-1); seti(h,0x68B4,(int)(rnd()%2));
  seti(h,0x1F0,(int)(rnd()%3)); for(int k=0;k<8;k++) seti(h,0x1F4+4*k,(int)(rnd()%8));
  for(int b=0;b<16;b++){ seti(h,0x220+0x138*b,(int)(rnd()%32)); seti(h,0x220+0x138*b+0x120,b); setf(h,0x220+0x138*b+0x84,rfc(0.4f)+0.5f); }
  for(int b=0;b<16;b++) for(int k=0;k<9;k++) setf(h,0x220+0x138*b+0x34+4*k,rfc(1.0f));
  for(int b=0;b<16;b++) if(rnd()%5){ float a=rfc(3.0f),c=cosf(a),s=sinf(a),t=rfc(rnd()%2?0.3f:3.0f),ct=cosf(t),st=sinf(t); float m[9]={c,0,-s, s*st,ct,c*st, s*ct,-st,c*ct}; memcpy(h+0x220+0x138*b+0x34,m,36); }
  { float m[9]; memcpy(m,h+0x220+0x34,36); if(rnd()%4) memcpy(h+0x6758,m,36); }
  // the feet near the body's centre, velocities at several magnitudes, the walk point near the centre
  { float s=scales[rnd()%5]; for(int k=0;k<3;k++){ setf(h,0x6798+4*k,rfc(scales[rnd()%5]*0.3f)); setf(h,0x678C+4*k,rfc(scales[rnd()%5]*0.3f)); setf(h,0x6884+4*k,rfc(0.06f)); setf(h,0x686C+4*k,rfc(0.02f)); setf(h,0x67A4+4*k,rfc(0.2f));
      setf(h,0x6854+4*k,getf(h,0x674C+4*k)+rfc(s)); }
    for(int foot=0;foot<2;foot++){ uint8_t *b=h+0x220+0x138*(12+3*foot); setf(b,4,getf(h,0x674C)+rfc(s)); setf(b,12,getf(h,0x6754)+rfc(s)); seti(b,0x130,rnd()%3?(int)(rnd()%3):0); } }
  setf(h,0x118,(float)(rnd()%65)/64.0f); setf(h,0x10C,rfc(rnd()%2?0.05f:0.3f)); setf(h,0x114,rfc(rnd()%2?0.05f:0.3f)); setf(h,0x12C,rnd()%3?rfc(1.0f):0.0f); setf(h,0x134,rnd()%4?rfc(1.0f):0.0f);
  setf(h,0x6768,rnd()%3?1.0f+rfc(0.6f):rfc(1.0f)); setf(h,0x68A8,1.0f+rfc(0.5f)); setf(h,0x68AC,rfc(0.3f)); setf(h,0x68B0,(float)(rnd()%33)/32.0f);
  for(int leg=0;leg<2;leg++){ uint8_t *l=h+0x68BC+0xDC*leg; seti(l,0x44,rnd()%6?(int)(rnd()%NBOND_):-1); seti(l,0x48,rnd()%2?0:(int)(rnd()%7)); seti(l,0x50,rnd()%3?1:rnd()%3?3:rnd()%2?0:(int)(rnd()%10)); seti(l,0x54,(int)(rnd()%40));
    setf(l,0x58,rnd()%3?(float)(rnd()%25)/24.0f:rnd()%2?0.0f:1.0f+rfc(0.3f)); setf(l,0xBC,(float)(rnd()%3)*0.5f); setf(l,0xC4,rfc(rnd()%2?0.4f:1.5f)); setf(l,0xCC,rfc(3.2f)); }
  seti(h,0x6D7C,rnd()%2?100:(int)(rnd()%130)); seti(h,0x6D84,rnd()%2?100:(int)(rnd()%130));
  seti(h,0x6AD0,0); seti(h,0x6AF8,0); }
static void random_world(void){
  for(int b=0;b<32;b++){ uint8_t *x=&G(uint8_t,0x1449816E0ULL+188ULL*b); for(int k=0x14;k<0x30;k+=4) setf(x,k,rfc(50.0f)); }
  for(int v=0;v<8;v++){ uint8_t *x=&G(uint8_t,0x15F2D9200ULL+0x5168ULL*v); for(int k=0x8C;k<0xB0;k+=4) setf(x,k,rfc(0.5f)); }
  G(uint32_t,0x183EBFD34ULL)=rnd32();
  for(int b=0;b<16;b++){ uint8_t *x=&G(uint8_t,0x18399DF20ULL+100ULL*b); for(int k=0;k<100;k+=4) setf(x,k,rfc(1.0f));
    for(int a=0;a<3;a++){ float lo=rfc(2.0f), hi=lo+rfc(1.0f)+1.0f; if(rnd()%8==0){ float t=lo; lo=hi; hi=t; } setf(x,4*a,lo); setf(x,12+4*a,hi); } seti(x,0x18,(int)(rnd()%3)); }
  G(uint8_t,0x183F7C960ULL)=rnd()%5==0;
  for(int k=0;k<0x80;k+=4) G(float,0x151A84880ULL+k)=rfc(3.0f);
  for(int k=0;k<NBOND;k++){ uint8_t *bo=&G(uint8_t,0x1B4287C80ULL+244ULL*k); memset(&G(uint8_t,0x1B4037C40ULL+144ULL*k),0x11,144);
    for(int w=0;w<244;w+=4) setf(bo,w,rfc(1.0f)); seti(bo,0,k<16 || rnd()%2); } }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):12000;
  hook(0x1400DC050ULL,s_dc050); hook(0x1400DC940ULL,s_dc940);
  for(int c=0;c<cases;c++){
    int i=(int)(rnd()%256); random_human(i); random_world(); ss=rnd32(); hit_rate=(int)(rnd()%9); regions[0].addr=0x18329E308ULL+0x6FF8ULL*(uint64_t)i;
    snapshot(); printf("== %d human %d\n",c,i);
#ifdef ENGINE
    human_stand_legs(i);
#else
    ((MS int64_t(*)(int))F(0x1400BCA30ULL))(i);
#endif
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
