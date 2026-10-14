// A human's bones against the level, items and other humans (src/engine/human_collide.c) against the original
// (0x1400B2E70). The triangle sweep, the capsule test and contact creation between bodies are engine code with
// suites of their own; five routines stay in recompiled code and are replaced in both images by stubs that log
// their arguments and write results from a fixed sequence: the level's triangles in a box (0x140188900), a contact
// with the level (0x140005160), the items in a box of voxels (0x140038230), the placing of an item's mesh
// (0x14011BF40) and the capsule sweep against it (0x140033BE0).
// Mode "engine": the engine function.
#include "peload.h"
#ifdef ENGINE
MS void human_collide(int human);
#endif
static uint32_t rs=414243; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float rfc(float scale){ return scale*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
#define G(type,addr) (*(type*)D(addr))
#define HUMAN(i) (&G(uint8_t,0x18329E308ULL+0x6FF8ULL*(uint64_t)(i)))
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
static uint32_t fb(float f){ uint32_t w; memcpy(&w,&f,4); return canon(w); }
static void setf(uint8_t *h,int off,float v){ memcpy(h+off,&v,4); }
static void seti(uint8_t *h,int off,int32_t v){ memcpy(h+off,&v,4); }
static float getf(const uint8_t *h,int off){ float v; memcpy(&v,h+off,4); return v; }

static uint32_t ss; static float centre[3]; static int triangle_count, item_count;
static uint32_t sr(void){ ss=ss*1103515245u+12345u; return ss>>8; }
static float sf(void){ return ((int)(sr()&0xFFFF)-0x8000)/32768.0f; }
static void p3(const char *n,const float *v){ printf(" %s[%08x %08x %08x]",n,fb(v[0]),fb(v[1]),fb(v[2])); }
static MS int64_t s_188900(int *buf,float *lo,float *hi,int flag){ printf("call 188900 %d %d %d",flag,buf[0],buf[12289]); p3("min",lo); p3("max",hi); printf("\n");
  buf[0]=triangle_count; float *t=(float*)(buf+1);
  for(int k=0;k<triangle_count;k++){ float o[3]={centre[0]+sf()*1.5f,centre[1]+sf()*1.5f,centre[2]+sf()*1.5f}; for(int c=0;c<3;c++) for(int a=0;a<3;a++) t[12*k+3*c+a]=o[a]+sf()*2.0f; for(int a=0;a<3;a++) t[12*k+9+a]=sf(); }
  return 0; }
static MS int64_t s_5160(int16_t body,float *offset,float *normal,float depth,uint32_t a5,float a6,uint32_t a7){ printf("call 5160 %d %08x %08x %08x %08x",(int)body,fb(depth),a5,fb(a6),a7); p3("o",offset); p3("n",normal); printf("\n"); return 0; }
static MS void s_38230(int *list,int *lo,int *hi){ printf("call 38230 %d %d %d  %d %d %d\n",lo[0],lo[1],lo[2],hi[0],hi[1],hi[2]); list[0]=item_count; list[1]=(int)sr(); for(int k=0;k<item_count;k++){ list[2+2*k]=(int)(sr()%12); list[3+2*k]=(int)sr(); } }
static MS int64_t s_11bf40(int *placed,uint8_t *mesh,float *position,float *rotation){ printf("call 11bf40 type %lld",(long long)((mesh-(uint8_t*)D(0x182A7F088ULL))/0x13D0)); p3("p",position); p3("r",rotation); printf("\n");
  placed[0]=(int)(sr()%7); for(int k=1;k<40;k++) placed[k]=(int)sr(); return 0; }
static MS int64_t s_33be0(float *hit,uint8_t *mesh,int *placed,float *from,float *to,uint32_t radius_bits){ printf("call 33be0 type %lld %d %08x",(long long)((mesh-(uint8_t*)D(0x182A7F088ULL))/0x13D0),placed[0],radius_bits); p3("from",from); p3("to",to); printf("\n");
  int r=sr()%3==0; if(r || sr()%2){ for(int a=0;a<3;a++){ hit[a]=from[a]+sf()*0.2f; hit[3+a]=sf(); } hit[6]=sf(); hit[7]=sf()*0.3f; } return r; }

#define NBOND 64
#define NHUMAN 4
typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={ {0x18329E308ULL,0x6FF8*NHUMAN,NULL,"human"}, {0x151A84880ULL,0x80,NULL,"hit"}, {0x1B4037C40ULL,144*NBOND,NULL,"constraint"}, {0x1B4287C80ULL,244*NBOND,NULL,"bond"},
  {0x1449816E0ULL,188*32,NULL,"body"}, {0x182BBB180ULL,0x1B80*12,NULL,"item"} };
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr); for(size_t k=0;k+4<=regions[r].size;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
      if(a!=b && canon(a)!=canon(b)) printf("  %s+%zx %08x\n",regions[r].name,k,canon(b)); else if(a!=b) printf("  %s+%zx nan\n",regions[r].name,k); } } }

static void random_human(int i,float spread){
  uint8_t *h=HUMAN(i);
  for(int k=0;k<0x6FF8;k+=4) setf(h,k,rfc(1.5f));
  seti(h,0,rnd()%8!=0); seti(h,0x28,rnd()%6?-1:(int)(rnd()%4)); seti(h,0x3C,rnd()%4?100:(int)(rnd()%3)-1); seti(h,0x58,(int)(rnd()%4)); seti(h,0x6D50,rnd()%2?100:(int)(rnd()%100));
  for(int b=0;b<16;b++){ uint8_t *bo=h+0x220+0x138*b; seti(bo,0,(int)(rnd()%32));
    for(int a=0;a<3;a++){ float p=centre[a]+rfc(spread); setf(bo,4+4*a,p); setf(bo,0x108+4*a,p+rfc(0.3f)); setf(bo,0x114+4*a,p+rfc(0.3f)); } }
  // the box around the bones, sometimes one that misses
  for(int a=0;a<3;a++){ float lo=centre[a]-spread-0.5f, hi=centre[a]+spread+0.5f; if(rnd()%16==0){ lo+=40.0f; hi+=40.0f; } if(rnd()%40==0) lo=__builtin_nanf(""); setf(h,0x1C0+4*a,lo); setf(h,0x1CC+4*a,hi); }
  for(int a=0;a<6;a++) seti(h,0x1D8+4*a,(int)(rnd()%2000)); }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):2500;
  hook(0x140188900ULL,s_188900); hook(0x140005160ULL,s_5160); hook(0x140038230ULL,s_38230); hook(0x14011BF40ULL,s_11bf40); hook(0x140033BE0ULL,s_33be0);
  for(int i=0;i<256;i++) seti(HUMAN(i),0,0);
  for(int k=NBOND;k<0x4000;k++) G(int32_t,0x1B4287C80ULL+244ULL*k)=1;
  for(int c=0;c<cases;c++){
    for(int a=0;a<3;a++) centre[a]=rfc(60.0f);
    float spread=rnd()%2?0.6f:2.5f;
    for(int i=0;i<NHUMAN;i++) random_human(i,spread);
    int i=(int)(rnd()%NHUMAN); if(rnd()%3==0) i=0;
    for(int b=0;b<16;b++){ uint8_t *x=&G(uint8_t,0x18399DF20ULL+100ULL*b); for(int k=0;k<100;k+=4) setf(x,k,rfc(1.0f)); seti(x,0x18,(int)(rnd()%3)); setf(x,0x1C,0.1f+(float)(rnd()%64)/64.0f); setf(x,0x20,0.05f+(float)(rnd()%32)/128.0f); }
    for(int b=0;b<32;b++){ uint8_t *x=&G(uint8_t,0x1449816E0ULL+188ULL*b); for(int k=0;k<188;k+=4) setf(x,k,rfc(1.0f)); seti(x,0,1); setf(x,0x14,rnd()%10?0.2f+(float)(rnd()%64)/16.0f:0.0f); for(int a=0;a<3;a++) setf(x,0x18+4*a,centre[a]+rfc(1.0f)); }
    for(int it=0;it<12;it++){ uint8_t *x=&G(uint8_t,0x182BBB180ULL+0x1B80ULL*it); for(int k=0;k<0x400;k+=4) seti(x,k,(int)rnd32()); seti(x,0x14,(int)(rnd()%40)); seti(x,0x58,(int)(rnd()%32));
      for(int a=0;a<3;a++){ float lo=centre[a]-1.0f+rfc(0.5f), hi=centre[a]+1.0f+rfc(0.5f); if(rnd()%12==0){ lo-=50.0f; hi-=50.0f; } setf(x,0x104+4*a,lo); setf(x,0x110+4*a,hi); } }
    { int none=rnd()%10==0; for(int k=0;k<NBOND;k++){ uint8_t *bo=&G(uint8_t,0x1B4287C80ULL+244ULL*k); for(int w=0;w<244;w+=4) seti(bo,w,(int)rnd32()); seti(bo,0,none?1:rnd()%4==0); }
      memset(&G(uint8_t,0x1B4037C40ULL),0x11,144*NBOND); }
    for(int k=0;k<0x80;k+=4) G(float,0x151A84880ULL+k)=rfc(3.0f);
    triangle_count=rnd()%4?(int)(rnd()%6):0; item_count=rnd()%3?(int)(rnd()%4):0; ss=rnd32();
    snapshot(); printf("== %d human %d\n",c,i);
#ifdef ENGINE
    human_collide(i);
#else
    ((MS int64_t(*)(int))F(0x1400B2E70ULL))(i);
#endif
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
