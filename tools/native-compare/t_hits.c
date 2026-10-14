// A human struck by a vehicle (src/engine/human_hits.c) against the original (0x1400B3A80), on random humans,
// skeletons, bodies, vehicles and players. Four routines it calls are replaced in both images by stubs that log
// their arguments: the hull sweep (0x140037220, writes a hit from a fixed sequence), contact creation
// (0x1400052C0) and the two scoring routines (0x140116D80, 0x14011B7F0).
// Mode "engine": the engine function.
#include "peload.h"
#ifdef ENGINE
MS void human_collide_vehicle(int human, int vehicle);
#endif
static uint32_t rs=420017; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
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
static void p3(const char *n,const float *v){ printf(" %s[%08x %08x %08x]",n,fb(v[0]),fb(v[1]),fb(v[2])); }
static MS int64_t s_37220(int vehicle,float *from,float *to,float radius){ printf("call 37220 %d %08x",vehicle,fb(radius)); p3("from",from); p3("to",to); printf("\n");
  int r=(int)(sr()%8)<hit_rate; if(r || sr()%4==0){ float *hit=&G(float,0x151A84880ULL); for(int a=0;a<3;a++){ hit[a]=from[a]+sf(); hit[3+a]=sf(); } hit[6]=sf(); hit[7]=sf()*0.3f;
    if(sr()%30==0) hit[3+sr()%3]=__builtin_nanf(""); }
  return r; }
static MS int64_t s_52c0(int a,int b,float *oa,float *ob,float *n,float depth,uint32_t a7,float a8,uint32_t a9){ printf("call 52c0 %d %d %08x %08x %08x %08x",a,b,fb(depth),a7,fb(a8),a9); p3("oa",oa); p3("ob",ob); p3("n",n); printf("\n"); return (int64_t)(sr()%100); }
static MS void s_116d80(int a,int b,int c){ printf("call 116d80 %d %d %d\n",a,b,c); }
static MS int64_t s_11b7f0(int a,int b){ printf("call 11b7f0 %d %d\n",a,b); return 0; }

#define NVEH 12
#define NPLAYER 16
typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={ {0,0x6FF8,NULL,"human"}, {0x151A84880ULL,0x80,NULL,"hit"}, {0x1449816E0ULL,188*32,NULL,"body"},
  {0x1873DE460ULL,128*8,NULL,"event"}, {0x1873DE460ULL+128ULL*65530,128*6,NULL,"event_end"}, {0x189C1DC64ULL,4,NULL,"event_count"},
  {0x15F2D9200ULL,0x100,NULL,"vehicle0"}, {0x18399DF20ULL,1600,NULL,"skeleton"} };
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr); for(size_t k=0;k+4<=regions[r].size;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
      if(a!=b && canon(a)!=canon(b)) printf("  %s+%zx %08x\n",regions[r].name,k,canon(b)); else if(a!=b) printf("  %s+%zx nan\n",regions[r].name,k); } } }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):12000;
  hook(0x140037220ULL,s_37220); hook(0x1400052C0ULL,s_52c0); hook(0x140116D80ULL,s_116d80); hook(0x14011B7F0ULL,s_11b7f0);
  for(int c=0;c<cases;c++){
    int i=(int)(rnd()%256), v=(int)(rnd()%NVEH); uint8_t *h=HUMAN(i);
    for(int k=0;k<0x6FF8;k+=4) setf(h,k,rfc(1.5f));
    for(int b=0;b<16;b++) seti(h,0x220+0x138*b,(int)(rnd()%32));
    seti(h,0x8,rnd()%4?(int)(rnd()%NPLAYER):-1); seti(h,0x30,rnd()%4?(int)(rnd()%NVEH):v); seti(h,0x40,rnd()%5==0);
    { static const int life[]={1,60,119,120,121,122,240,0,-1,-119,-120,100,100,100}; seti(h,0x3C,rnd()%5?life[rnd()%14]:(int)(rnd()%400)-100); }
    for(int k=0x80;k<0x8C;k+=4) seti(h,k,(int)rnd32());
    for(int b=0;b<16;b++){ uint8_t *x=&G(uint8_t,0x18399DF20ULL+100ULL*b); for(int k=0;k<100;k+=4) setf(x,k,rfc(1.0f)); seti(x,0x18,(int)(rnd()%3)); }
    for(int b=0;b<32;b++){ uint8_t *x=&G(uint8_t,0x1449816E0ULL+188ULL*b); for(int k=0;k<188;k+=4) setf(x,k,rfc(rnd()%2?0.3f:2.0f)); }
    for(int k=0;k<NVEH;k++){ uint8_t *x=&G(uint8_t,0x15F2D9200ULL+0x5168ULL*k); seti(x,0x28,(int)(rnd()%32)); seti(x,0x14,rnd()%4?(int)(rnd()%NPLAYER):-1); }
    for(int p=0;p<NPLAYER;p++) G(int32_t,0x151620CE4ULL+0x3834ULL*p)=(int)(rnd()%3);
    G(uint32_t,0x183EBFD34ULL)=rnd32(); G(int32_t,0x183E9362CULL)=(int)rnd32(); G(int32_t,0x1AD04ADC0ULL)=rnd()%4!=0;
    G(int32_t,0x189C1DC64ULL)=rnd()%8==0?0xFFFF:rnd()%8==0?0xFFFD:(int)(rnd()%4);
    for(int k=0;k<0x80;k+=4) G(float,0x151A84880ULL+k)=rfc(3.0f);
    ss=rnd32(); hit_rate=rnd()%3?(int)(rnd()%9):1; regions[0].addr=0x18329E308ULL+0x6FF8ULL*(uint64_t)i;
    snapshot(); printf("== %d human %d vehicle %d\n",c,i,v);
#ifdef ENGINE
    human_collide_vehicle(i,v);
#else
    ((MS int64_t(*)(unsigned,int))F(0x1400B3A80ULL))((unsigned)i,v);
#endif
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
