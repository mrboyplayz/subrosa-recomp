// A human's health for a tick (src/engine/human_health.c) against the original (0x1400B5E70), on random humans,
// players, game types and ticks. The C runtime's rand (0x14023B1B0) is replaced in both images by a stub with a
// fixed sequence.
// Mode "engine": the engine function.
#include "peload.h"
#ifdef ENGINE
MS void human_update_health(int human);
#endif
static uint32_t rs=31337; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float rfc(float scale){ return scale*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
#define G(type,addr) (*(type*)D(addr))
#define HUMAN(i) (&G(uint8_t,0x18329E308ULL+0x6FF8ULL*(uint64_t)(i)))
static void setf(uint8_t *h,int off,float v){ memcpy(h+off,&v,4); }
static void seti(uint8_t *h,int off,int32_t v){ memcpy(h+off,&v,4); }

static uint32_t ss;
static MS int s_rand(void){ ss=ss*1103515245u+12345u; int r=(int)((ss>>16)&0x7FFF); if((ss>>8)%3==0) r&=~0x1FF; printf("call rand -> %d\n",r); return r; }

#define NPLAYER 16
typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={ {0,0x6FF8,NULL,"human"}, {0x1873DE460ULL,128*8,NULL,"event"}, {0x1873DE460ULL+128ULL*65530,128*6,NULL,"event_end"}, {0x189C1DC64ULL,4,NULL,"event_count"},
  {0x183EBFD34ULL,4,NULL,"tick"}, {0x183EBFAACULL,4,NULL,"type"} };
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr); for(size_t k=0;k+4<=regions[r].size;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
      if(a!=b) printf("  %s+%zx %08x\n",regions[r].name,k,b); } } }

// a value around the thresholds the routine tests
static int around(void){ static const int v[]={-5,-1,0,1,9,10,11,19,20,21,49,50,51,74,75,76,99,100,101,45,60,30}; return rnd()%4?v[rnd()%22]:(int)(rnd()%140)-20; }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):60000;
  hook(0x14023B1B0ULL,s_rand);
  for(int c=0;c<cases;c++){
    int i=(int)(rnd()%256); uint8_t *h=HUMAN(i);
    for(int k=0;k<0x6FF8;k+=4) seti(h,k,(int)rnd32());
    for(int k=0x220;k<0x15A0;k+=4) setf(h,k,rfc(40.0f));
    seti(h,0x8,rnd()%3?(int)(rnd()%NPLAYER):-1); seti(h,0x3C,rnd()%6?1:(int)(rnd()%5)-2); seti(h,0x40,rnd()%3==0); seti(h,0x44,rnd()%3?(int)(rnd()%3000):-(int)(rnd()%3));
    seti(h,0x78,(int)(rnd()%80)-5); seti(h,0x6D50,around()); seti(h,0x6D54,around()); seti(h,0x6D58,rnd()%2?(int)(rnd()%3):0);
    for(int p=0;p<6;p++) seti(h,0x6D5C+8*p,rnd()%3?around():50+(int)(rnd()%60));
    for(int p=0;p<NPLAYER;p++) G(int32_t,0x151623978ULL+0x3834ULL*p)=rnd()%3==0;
    G(int32_t,0x183EBFAACULL)=rnd()%3?(int)(rnd()%8):6;
    { uint32_t t=rnd32(); unsigned k=rnd()%6; if(k==0) t&=~0xFFu; else if(k==1) t&=~0x3Fu; else if(k==2) t&=~0x7u; else if(k==3) t=(t&~0xFFu)|((uint32_t)(i*i*i)&0xFF); G(uint32_t,0x183EBFD34ULL)=t; }
    G(int32_t,0x1AD04ADC0ULL)=rnd()%4!=0;
    G(int32_t,0x189C1DC64ULL)=rnd()%8==0?0xFFFF:rnd()%8==0?0xFFFE:(int)(rnd()%6);
    ss=rnd32(); regions[0].addr=0x18329E308ULL+0x6FF8ULL*(uint64_t)i;
    snapshot(); printf("== %d human %d\n",c,i);
#ifdef ENGINE
    human_update_health(i);
#else
    ((MS int(*)(int))F(0x1400B5E70ULL))(i);
#endif
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
