// A human's hands (src/engine/human_arms.c) against the original (0x1400B62E0): letting go, item types 28/36/39 and
// 19-24, picking up, doors, holding another human, swapping hands. Eight routines stay in recompiled code and are
// replaced in both images by stubs that log their arguments and answer from a fixed sequence: take from a slot
// (0x1400CA7C0), detach (0x1400CA9B0), transfer (0x1400E35D0; it also shuffles the hands to show what is read
// before and after it), the level sweep (0x1400DC050; it writes the hit globals), the block at a voxel
// (0x140016590), the corporation area test (0x14011B8F0), the door event (0x1400518B0) and a free bond (0x1400A4440).
// Every word that changes in the humans, items 0..63 and 1024, bonds, corporations and change counters is printed.
// Mode "engine": the engine function.
#include "peload.h"
#ifdef ENGINE
MS void human_use_hands(int human);
#endif
static uint32_t rs=626262; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float rfc(float scale){ return scale*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
#define G(type,addr) (*(type*)D(addr))
#define HUMAN(i) (&G(uint8_t,0x18329E308ULL+0x6FF8ULL*(uint64_t)(i)))
#define ITEM(i) (&G(uint8_t,0x182BBB180ULL+0x1B80ULL*(uint64_t)(int64_t)(i)))
#define ITYPE(i) (&G(uint8_t,0x182A7E180ULL+0x13D0ULL*(uint64_t)(int64_t)(i)))
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
static uint32_t fb(float f){ uint32_t w; memcpy(&w,&f,4); return canon(w); }
static void setf(uint8_t *h,int off,float v){ memcpy(h+off,&v,4); }
static void seti(uint8_t *h,int off,int32_t v){ memcpy(h+off,&v,4); }
static float getf(const uint8_t *h,int off){ float v; memcpy(&v,h+off,4); return v; }

static uint32_t ss; static int current;
static uint32_t sr(void){ ss=ss*1103515245u+12345u; return ss>>8; }
static void p3(const char *n,const float *v){ printf(" %s[%08x %08x %08x]",n,fb(v[0]),fb(v[1]),fb(v[2])); }
static MS void s_ca7c0(int item,int human,int slot){ printf("call ca7c0 %d %d %d\n",item,human,slot); }
static MS int64_t s_ca9b0(int item,int parent){ printf("call ca9b0 %d %d\n",item,parent); return 0; }
static MS int64_t s_e35d0(int item,int child,int human,int slot){ printf("call e35d0 %d %d %d %d\n",item,child,human,slot);
  if(sr()%3==0){ uint8_t *h=HUMAN(current); int k=(int)(sr()%2); seti(h,0x6AD0+40*k,(int)(sr()%3)-1); seti(h,0x6AD4+40*k,(int)(sr()%64)); } return 0; }
static MS int s_dc050(float *from,float *to,int flag){ printf("call dc050 %d",flag); p3("from",from); p3("to",to); printf("\n");
  G(int32_t,0x151A848D4ULL)=sr()%5==0?-1:(int)(sr()%4); for(int k=0;k<3;k++) G(int32_t,0x151A848D8ULL+4*k)=(int)(sr()%64);
  G(int32_t,0x151A848FCULL)=sr()%4==0?6:(int)(sr()%8); return sr()%4!=0; }
static MS int64_t s_16590(int layer,int x,int y,int z){ printf("call 16590 %d %d %d %d\n",layer,x,y,z);
  uint32_t first=G(uint32_t,0x14500CA14ULL)|0x80000000u, last=G(uint32_t,0x14500CA20ULL)|0x80000000u; uint32_t pick=sr()%8, v;
  v=pick==0?first-1:pick==1?first:pick==2?last:pick==3?last+1:pick==4?first+(last-first)/2:pick==5?(first+1)|0x03000000u:pick==6?(first&0x7FFFFFFF):sr();
  return (int64_t)(int32_t)v; }
static MS int64_t s_11b8f0(float *position,int corporation,float margin){ printf("call 11b8f0 %d %08x",corporation,fb(margin)); p3("p",position); printf("\n"); return sr()%3!=0; }
static MS int64_t s_518b0(int corporation,int open){ printf("call 518b0 %d %d\n",corporation,open); return 0; }
#define NBOND 64
static MS int64_t s_a4440(void){ int r=sr()%8==0?-1:(int)(sr()%NBOND); printf("call a4440 -> %d\n",r); return r; }

#define NHUMAN 4
#define NITEM 64
typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={ {0x18329E308ULL,0x6FF8*NHUMAN,NULL,"human"}, {0x182BBB180ULL-0x1B80ULL,0x1B80*(NITEM+1),NULL,"item-1+"}, {0x182BBB180ULL+0x1B80ULL*1024,0x1B80,NULL,"item1024"},
  {0x1B4287C80ULL,244*NBOND,NULL,"bond"}, {0x183EBFD60ULL,0x5BC4*7,NULL,"corp"}, {0x18329B1E0ULL,4*1025,NULL,"changes"} };
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr); for(size_t k=0;k+4<=regions[r].size;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
      if(a!=b && canon(a)!=canon(b)) printf("  %s+%zx %08x\n",regions[r].name,k,canon(b)); else if(a!=b) printf("  %s+%zx nan\n",regions[r].name,k); } } }

static int pool_item(void){ unsigned k=rnd()%60; return k==0?-1:k==1?1024:(int)(rnd()%NITEM); }
static int pick_flags(void){ static const int bits[]={0x1,0x10,0x20,0x40,0x80,0x100,0x200,0x400,0x800,0x1000,0x2000}; int f=0; for(int k=0;k<11;k++) if(rnd()%3==0) f|=bits[k];
  if(rnd()%4==0) f&=~0x7C0; return f; }

static void random_human(int i,const float *centre){
  uint8_t *h=HUMAN(i);
  for(int k=0;k<0x6FF8;k+=4) setf(h,k,rfc(1.5f));
  seti(h,0,rnd()%6!=0); seti(h,8,rnd()%4?(int)(rnd()%4):-1); seti(h,0x1C,(int)(rnd()%16)-2); seti(h,0x50,(int)rnd32());
  setf(h,0x128,rfc(4.0f)); if(rnd()%50==0) setf(h,0x128,special[rnd()%11]);
  seti(h,0x214,pick_flags()); seti(h,0x218,(rnd()%2?1:0)|(rnd()%2?0x2000:0)|(rnd()%5==0?(int)rnd32():0));
  for(int b=0;b<16;b++){ uint8_t *bo=h+0x220+0x138*b; seti(bo,0,(int)(rnd()%32));
    for(int a=0;a<3;a++) setf(bo,4+4*a,centre[a]+rfc(1.0f));
    for(int a=0;a<9;a++) setf(bo,0x34+4*a,rfc(1.0f));
    setf(bo,0x84,rnd()%20?0.5f+(float)(rnd()%64)/16.0f:0.0f); }
  for(int s=0;s<7;s++){ uint8_t *sl=h+0x6AD0+40*s; unsigned k=rnd()%10; seti(sl,0,s<2?(k<4?0:k<8?1:k<9?2:-1):(int)(rnd()%3));
    for(int e=0;e<9;e++) seti(sl,4+4*e,pool_item()); seti(sl,0x24,(int)(rnd()%4)); }
  for(int g=0;g<2;g++){ uint8_t *gr=h+0x6C10+0x38*g; seti(gr,0x10,rnd()%2); seti(gr,0x14,rnd()%5?(int)(rnd()%NHUMAN):-1); seti(gr,0x1C,(int)(rnd()%16)); }
  seti(h,0x6D48,(int)(rnd()%7)-2); seti(h,0x6D50,rnd()%3?(int)(rnd()%100):(int)(rnd()%3)+49); seti(h,0x6DF8,(int)(rnd()%10)); }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):4000;
  hook(0x1400CA7C0ULL,s_ca7c0); hook(0x1400CA9B0ULL,s_ca9b0); hook(0x1400E35D0ULL,s_e35d0); hook(0x1400DC050ULL,s_dc050); hook(0x140016590ULL,s_16590);
  hook(0x14011B8F0ULL,s_11b8f0); hook(0x1400518B0ULL,s_518b0); hook(0x1400A4440ULL,s_a4440);
  for(int i=-1;i<=1024;i++) seti(ITEM(i),0,0);
  for(int i=0;i<256;i++) seti(HUMAN(i),0,0);
  for(int c=0;c<cases;c++){
    float centre[3]; for(int a=0;a<3;a++) centre[a]=rfc(60.0f);
    for(int i=0;i<NHUMAN;i++) random_human(i,centre);
    int hm=(int)(rnd()%NHUMAN); current=hm;
    uint8_t *h=HUMAN(hm); const uint8_t *head=h+0x220+0x138*3, *pelvis=h+0x220;
    for(int t=0;t<=40;t++){ uint8_t *x=ITYPE(t); seti(x,0x10,rnd()%3==0); for(int k=0;k<12;k++) setf(x,0x80+4*k,rfc(0.5f)); }
    for(int i=-1;i<=NITEM;i++){ int idx=i==NITEM?1024:i; uint8_t *x=ITEM(idx);
      static const int types[]={19,20,21,22,23,24,28,36,39,39,39,5};
      seti(x,0,rnd()%5!=0); seti(x,8,(int)rnd32()); seti(x,0x14,rnd()%12==11?(int)(rnd()%41):types[rnd()%11]);
      seti(x,0x24,rnd()%5<3?-1:rnd()%15==0?-2-(int)(rnd()%3):(int)(rnd()%NHUMAN)); seti(x,0x28,rnd()%5<3?-1:(int)(rnd()%NITEM)); seti(x,0x2C,(int)(rnd()%7)); seti(x,0x34,rnd()%3==0);
      seti(x,0x150,(int)(rnd()%8)); for(int k=0;k<3;k++) setf(x,0x300+4*k,rfc(30.0f));
      unsigned where=rnd()%4; float t=(float)(rnd()%64)/32.0f;
      for(int a=0;a<3;a++){ float p;
        if(where==0) p=getf(head,4+4*a)-getf(head,0x34+4*(6+a))*t+rfc(0.6f);          /* ahead of the head */
        else if(where==1) p=getf(pelvis,4+4*a)-2.0f*getf(pelvis,0x34+4*(6+a))*t*0.5f+rfc(1.4f);  /* by the pelvis line */
        else if(where==2) p=getf(h+0x220+0x138*(rnd()%2?9:6),4+4*a)+rfc(1.2f);         /* by a hand */
        else p=centre[a]+rfc(4.0f);
        setf(x,0x5C+4*a,p); }
      if(rnd()%25==0) setf(x,0x5C+4*(rnd()%3),rnd()%2?__builtin_nanf(""):special[rnd()%11]);
      if(i>0 && i<NITEM && rnd()%6==0){ uint8_t *y=ITEM(rnd()%i); memcpy(x+0x5C,y+0x5C,12); } }   /* same place: ties */
    for(int k=0;k<NBOND;k++){ uint8_t *bo=&G(uint8_t,0x1B4287C80ULL+244ULL*k); for(int w=0;w<244;w+=4) seti(bo,w,(int)rnd32()); }
    for(int k=0;k<7;k++) for(int w=0;w<0x80;w+=4) G(int32_t,0x183EBFD60ULL+0x5BC4ULL*k+w)=(int)(rnd()%3);
    for(int p=0;p<4;p++) G(int32_t,0x151620CE4ULL+0x3834ULL*p)=(int)(rnd()%9)-1;
    G(uint32_t,0x14500CA14ULL)=0x100+rnd()%64; G(uint32_t,0x14500CA20ULL)=G(uint32_t,0x14500CA14ULL)+rnd()%16;
    G(uint32_t,0x183EBFCCCULL)=rnd()%4?2:(uint32_t)(rnd()%5); G(int32_t,0x183EBFAACULL)=rnd()%4?(int)(rnd()%5):5;
    G(int32_t,0x183EBFD34ULL)=(int)rnd32(); G(int32_t,0x1AD04ADC0ULL)=rnd()%2;
    for(int k=0;k<1025;k++) G(int32_t,0x18329B1E0ULL+4ULL*k)=(int)(rnd()%5);
    ss=rnd32();
    snapshot(); printf("== %d human %d\n",c,hm);
#ifdef ENGINE
    human_use_hands(hm);
#else
    ((MS int64_t(*)(int))F(0x1400B62E0ULL))(hm);
#endif
    diff();
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
