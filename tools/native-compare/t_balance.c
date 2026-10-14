// Balance on a planted leg (src/engine/human_balance.c) against the original (0x1400BBF30), on random humans,
// points and wanted rotations. Nothing is stubbed: the routine only calls the quaternion helpers and acos.
// Mode "engine": the engine function.
#include "peload.h"
#ifdef ENGINE
MS void human_balance_on_leg(int human, int leg, float *target, float *turn, const float *hip, const float *foot,
  const float *wanted_centre, const float *wanted_rotation, float share);
#endif
static uint32_t rs=880033; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float rfc(float scale){ return scale*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
#define G(type,addr) (*(type*)D(addr))
#define HUMAN(i) (&G(uint8_t,0x18329E308ULL+0x6FF8ULL*(uint64_t)(i)))
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
static uint32_t fb(float f){ uint32_t w; memcpy(&w,&f,4); return canon(w); }
static void setf(uint8_t *h,int off,float v){ memcpy(h+off,&v,4); }
static void seti(uint8_t *h,int off,int32_t v){ memcpy(h+off,&v,4); }
static float getf(const uint8_t *h,int off){ float v; memcpy(&v,h+off,4); return v; }

typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={ {0,0x6FF8,NULL,"human"} };
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr); for(size_t k=0;k+4<=regions[r].size;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
      if(a!=b && canon(a)!=canon(b)) printf("  %s+%zx %08x\n",regions[r].name,k,canon(b)); else if(a!=b) printf("  %s+%zx nan\n",regions[r].name,k); } } }

static void rotation(float *m){
  if(rnd()%6==0){ for(int k=0;k<9;k++) m[k]=rfc(1.0f); return; }
  float a=rfc(3.2f),c=cosf(a),s=sinf(a),b=rfc(rnd()%2?0.3f:3.2f),cb=cosf(b),sb=sinf(b);
  float r[9]={c,0,-s, s*sb,cb,c*sb, s*cb,-sb,c*cb}; memcpy(m,r,36); }
static const float scales[]={0.01f,0.05f,0.2f,0.6f,2.0f};

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):60000;
  for(int c=0;c<cases;c++){
    int i=rnd()%3==0?0:(int)(rnd()%256), leg=(int)(rnd()%2); uint8_t *h=HUMAN(i);
    for(int k=0;k<0x6FF8;k+=4) setf(h,k,rfc(1.5f));
    seti(h,0x78,rnd()%2?0:(int)(rnd()%45)-5);
    for(int foot=0;foot<2;foot++) seti(h,0x220+0x138*(12+3*foot)+0x130,rnd()%2?(int)(rnd()%3):0);
    { float m[9]; rotation(m); memcpy(h+0x6758,m,36); }
    float sv=scales[rnd()%5]; for(int k=0;k<3;k++){ setf(h,0x6798+4*k,rfc(sv*0.3f)); setf(h,0x6884+4*k,rfc(0.08f)); setf(h,0x67A4+4*k,rfc(scales[rnd()%5]*0.3f)); }
    float hip[3],foot[3],centre[3],rot[9],target[3],turn[3]; float sc=scales[rnd()%5];
    for(int k=0;k<3;k++){ hip[k]=getf(h,0x674C+4*k)+rfc(0.5f); foot[k]=hip[k]+rfc(1.0f); centre[k]=getf(h,0x674C+4*k)+rfc(sc); target[k]=rfc(9.0f); turn[k]=rfc(9.0f); }
    if(rnd()%20==0) for(int k=0;k<3;k++) foot[k]=hip[k];
    if(rnd()%3) memcpy(rot,h+0x6758,36); else rotation(rot);
    if(rnd()%2){ float a=rfc(rnd()%2?0.2f:1.0f),ca=cosf(a),sa=sinf(a); for(int row=0;row<3;row++){ float x=rot[3*row],z=rot[3*row+2]; rot[3*row]=ca*x-sa*z; rot[3*row+2]=sa*x+ca*z; } }
    float share=rnd()%3?(float)(rnd()%5)*0.25f:rfc(1.5f);
    if(rnd()%40==0){ static const int offs[]={0x674C,0x6750,0x6798,0x679C,0x6884,0x67A4,0x6758,0x6768}; setf(h,offs[rnd()%8],rnd()%2?__builtin_nanf(""):__builtin_inff()); }
    if(rnd()%60==0) hip[rnd()%3]=__builtin_nanf("");
    G(uint8_t,0x183F7C960ULL)=rnd()%3==0;
    regions[0].addr=0x18329E308ULL+0x6FF8ULL*(uint64_t)i;
    snapshot(); printf("== %d human %d leg %d\n",c,i,leg);
#ifdef ENGINE
    human_balance_on_leg(i,leg,target,turn,hip,foot,centre,rot,share);
#else
    ((MS int64_t(*)(int,int,float*,float*,float*,float*,float*,float*,float))F(0x1400BBF30ULL))(i,leg,target,turn,hip,foot,centre,rot,share);
#endif
    printf("target %08x %08x %08x turn %08x %08x %08x\n",fb(target[0]),fb(target[1]),fb(target[2]),fb(turn[0]),fb(turn[1]),fb(turn[2]));
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
