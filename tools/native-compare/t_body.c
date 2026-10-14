// The body as a whole (src/engine/human_body.c) against the original: the centre, mean velocities and smoothed
// pelvis rotation of a tick (0x1400ABB10) and the creation of the skeleton's joints (0x1400AB7B0), on random humans
// and skeletons. Joint creation itself (0x140055FA0) stays in recompiled code and is replaced in both images by a
// stub that logs its arguments and returns a bond index from a fixed sequence, sometimes -1.
// Mode "engine": the engine functions.
#include "peload.h"
#ifdef ENGINE
MS void human_create_joints(int human);
MS void human_update_centre(int human);
#endif
static uint32_t rs=551; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float rfc(float scale){ return scale*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
#define G(type,addr) (*(type*)D(addr))
#define HUMAN(i) (&G(uint8_t,0x18329E308ULL+0x6FF8ULL*(uint64_t)(i)))
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
static uint32_t fb(float f){ uint32_t w; memcpy(&w,&f,4); return canon(w); }
static void setf(uint8_t *h,int off,float v){ memcpy(h+off,&v,4); }
static void seti(uint8_t *h,int off,int32_t v){ memcpy(h+off,&v,4); }

static uint32_t ss;
static MS int s_55fa0(int human,int parent,int child,float *anchor){ ss=ss*1103515245u+12345u; int r=(ss>>8)%5==0?-1:(int)((ss>>8)%16384);
  printf("call 55fa0 %d %d %d %08x %08x %08x -> %d\n",human,parent,child,fb(anchor[0]),fb(anchor[1]),fb(anchor[2]),r); return r; }

typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={ {0,0x6FF8,NULL,"human"}, {0x18399DF20ULL,1600,NULL,"skeleton"} };
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr); for(size_t k=0;k+4<=regions[r].size;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
      if(a!=b && canon(a)!=canon(b)) printf("  %s+%zx %08x\n",regions[r].name,k,canon(b)); else if(a!=b) printf("  %s+%zx nan\n",regions[r].name,k); } } }

static void random_human(int i){
  uint8_t *h=HUMAN(i);
  for(int k=0;k<0x6FF8;k+=4) setf(h,k,rfc(1.5f));
  // masses: mostly positive, sometimes all zero or negative
  { int kind=(int)(rnd()%12); for(int b=0;b<16;b++){ float m=kind==0?0.0f:kind==1?rfc(1.0f):rfc(0.4f)+0.5f; if(kind==2 && b<3) m=0.0f; setf(h,0x220+0x138*b+0x84,m); } }
  // the pelvis's rotation near orthonormal most of the time, and the kept quaternion near it or far
  if(rnd()%4){ float a=rfc(3.0f),c=cosf(a),s=sinf(a); float m[9]={c,0,-s, 0,1,0, s,0,c}; if(rnd()%2){ m[1]=m[0]*0.1f; m[4]=c; m[5]=s; m[7]=-s; } memcpy(h+0x220+0x34,m,36); }
  if(rnd()%8==0) for(int k=0;k<9;k++) setf(h,0x220+0x34+4*k,0.0f);
  { int kind=(int)(rnd()%6); if(kind==0) for(int k=0;k<4;k++) setf(h,0x677C+4*k,0.0f);
    else if(kind==1){ setf(h,0x677C,0.0f); setf(h,0x6780,0.0f); setf(h,0x6784,0.0f); setf(h,0x6788,rnd()%2?1.0f:-1.0f); } }
  if(rnd()%30==0){ static const int offs[]={0x224,0x23C,0x278,0x2A4,0x3DC,0x514,0x678C,0x67A4,0x677C,0x686C,0x254,0x220+0x138*7+0x84};
    setf(h,offs[rnd()%12],rnd()%2?__builtin_nanf(""):rnd()%2?__builtin_inff():-__builtin_inff()); } }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  hook(0x140055FA0ULL,s_55fa0);
  for(int c=0;c<cases;c++){
    int i=(int)(rnd()%256); random_human(i); ss=rnd32(); regions[0].addr=0x18329E308ULL+0x6FF8ULL*(uint64_t)i;
    for(int k=0;k<1600;k+=4) G(float,0x18399DF20ULL+k)=rfc(1.0f);
    snapshot(); printf("== %d human %d\n",c,i);
    if(c%4==0){
#ifdef ENGINE
      human_create_joints(i);
#else
      ((MS int64_t(*)(int))F(0x1400AB7B0ULL))(i);
#endif
    } else {
#ifdef ENGINE
      human_update_centre(i);
#else
      ((MS void*(*)(int))F(0x1400ABB10ULL))(i);
#endif
    }
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
