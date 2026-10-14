// The active ragdoll (src/engine/human_ragdoll.c) against the original:
//   the quaternion product (0x140105930), the look pose (0x1400AD030), and the per-tick drive (0x1400AD2B0) with
//   everything it calls (joint limits, arm inverse kinematics, holding items), on random humans, items, item
//   types and skeleton limits. Three physics routines it reaches stay in recompiled code and are replaced in both
//   images by stubs that log their arguments and write a fixed sequence into every array they receive: the level
//   sweep (0x1400DC050), the closest points of two segments (0x1400D6890) and contact creation (0x1400052C0).
// Mode "engine": the engine functions.
#include "peload.h"
#ifdef ENGINE
MS void math_quat_multiply(float *out, const float *a, const float *b);
MS void human_build_look_pose(int human, float twist);
MS void human_drive_ragdoll(int human);
MS void human_limb_inverse_kinematics(int human, int parent_bone, int bone, const float *target, const float *frame,
  const float *velocity, float length, float twist, float *wrist_turn, const float *change_limit, const uint32_t *unknown_8c,
  const uint32_t *angular_limit, float limit, int flags);
MS void human_limit_joint_turn(int human, int parent_bone, int child_bone, float *axis);
#endif
static uint32_t rs=7721; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3.14159265f,-3.14159265f,6.2831853f,100.0f};
static float rf(float scale){ unsigned k=rnd()%40; if(k==0) return special[rnd()%14]; if(k==1){ uint32_t b=rnd32(); float f; memcpy(&f,&b,4); return f; } return scale*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
static float rfn(float scale){ float f=rf(scale); return __builtin_isinf(f) ? -1e30f : f; }   // no infinities
static float rfc(float scale){ return scale*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }   // never special
#define G(type,addr) (*(type*)D(addr))
#define HUMAN(i) (&G(uint8_t,0x18329E308ULL+0x6FF8ULL*(uint64_t)(i)))
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
static void pr(const char *t,int i,const void *p,size_t n){ printf("%s %d:",t,i); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ uint32_t w; memcpy(&w,b+k,4); printf(" %08x",canon(w)); } printf("\n"); }
static void setf(uint8_t *h,int off,float v){ memcpy(h+off,&v,4); }
static void seti(uint8_t *h,int off,int32_t v){ memcpy(h+off,&v,4); }

// ---- the drive's stubs ------------------------------------------------------------------------------------------
static uint8_t *state_lo, *state_hi;
static uint32_t ss;                                   // stub output sequence, reset per case
static float sf(void){ ss=ss*1103515245u+12345u; return ((int)((ss>>8)&0xFFFF)-0x8000)/16384.0f; }
static void where(const char *name,const void *p,int n){
  const uint8_t *b=p;
  if(b>=state_lo && b<state_hi) printf(" %s=s+%llx[",name,(unsigned long long)(b-state_lo)); else printf(" %s=local[",name);
  for(int k=0;k<n;k++){ uint32_t w; memcpy(&w,b+4*k,4); printf("%s%08x",k?" ":"",canon(w)); } printf("]"); }
static void fill(void *p,int n){ float *f=p; for(int k=0;k<n;k++) f[k]=sf(); }
static uint32_t fb(float f){ uint32_t w; memcpy(&w,&f,4); return canon(w); }
static MS int s_dc050(float *from,float *to,int flag){ printf("call dc050 %d",flag); where("from",from,3); where("to",to,3); printf("\n"); return sf()>0.0f; }
static MS int64_t s_d6890(float *ca,float *cb,float *t,float *a0,float *a1,float *b1,float *b0,float reach){ printf("call d6890 %08x",fb(reach));
  where("a0",a0,3); where("a1",a1,3); where("b1",b1,3); where("b0",b0,3); printf("\n"); fill(ca,3); fill(cb,3); fill(t,1); return sf()>0.0f; }
static MS int64_t s_52c0(int body_a,int body_b,float *oa,float *ob,float *n,float depth,uint32_t a7,float a8,uint32_t a9){
  printf("call 52c0 %d %d %08x %08x %08x %08x",body_a,body_b,fb(depth),a7,fb(a8),a9); where("oa",oa,3); where("ob",ob,3); where("n",n,3); printf("\n"); return 0; }

#define NITEM 12
#define NTYPE 40
#define NBOND 48
static const int interesting_types[]={3,11,15,18,25,26,28,29,34,36,39};
typedef struct { uint64_t addr; size_t size; uint8_t *copy; const char *name; } Region;
static Region regions[]={
  {0,0x6FF8,NULL,"human"},
  {0x1B4037C40ULL,144*NBOND,NULL,"constraint"},
  {0x1B4287C80ULL,244*NBOND,NULL,"bond"},
  {0x182BBB180ULL,0x1B80*NITEM,NULL,"item"},
  {0x182A7E180ULL,0x13D0*NTYPE,NULL,"itemtype"},
  {0x1449816E0ULL,188*32,NULL,"body"},
  {0x18399DF20ULL,1600,NULL,"skeleton"},
  {0x1602E12C0ULL,4,NULL,"rng"},
  {0x183F7C960ULL,4,NULL,"mode"},
  {0x151A84884ULL,4,NULL,"level"},
};
#define NREG (sizeof regions/sizeof regions[0])
static void snapshot(void){ for(size_t r=0;r<NREG;r++){ if(!regions[r].copy) regions[r].copy=malloc(regions[r].size); memcpy(regions[r].copy,D(regions[r].addr),regions[r].size); } }
static void diff(void){ for(size_t r=0;r<NREG;r++){ const uint8_t *now=D(regions[r].addr); for(size_t k=0;k+4<=regions[r].size;k+=4){ uint32_t a,b; memcpy(&a,regions[r].copy+k,4); memcpy(&b,now+k,4);
      if(a!=b && canon(a)!=canon(b)) printf("  %s+%zx %08x\n",regions[r].name,k,canon(b)); else if(a!=b) printf("  %s+%zx nan\n",regions[r].name,k); } } }

static void random_human(int i){
  uint8_t *h=HUMAN(i);
  // finite inputs only: sin and asinf of an infinite or out-of-range value take the C runtime's error path,
  // which this loader cannot run
  for(int k=0;k<0x6FF8;k+=4) setf(h,k,rfc(1.5f));
  seti(h,0x28,rnd()%4==0?(int)(rnd()%8):-1);
  seti(h,0x54,rnd()%2); seti(h,0x58,(int)(rnd()%5)); seti(h,0x60,(int)(rnd()%4)); seti(h,0x78,rnd()%3==0?(int)(rnd()%200)-20:0);
  seti(h,0x138,(int)rnd32()); seti(h,0x214,(int)(rnd()&0x3F)|(rnd()%2?0:0x20));
  for(int b=0;b<16;b++){ seti(h,0x220+0x138*b,(int)(rnd()%32)); seti(h,0x220+0x138*b+0x120,b); }
  // rotations of the bones near orthonormal most of the time
  for(int b=0;b<16;b++) for(int k=0;k<9;k++) setf(h,0x220+0x138*b+0x34+4*k,rfc(1.0f));   // asinf's error path cannot run here
  for(int b=0;b<16;b++) if(rnd()%4){ float a=rfc(3.0f),c=cosf(a),s=sinf(a); float m[9]={c,0,-s, 0,1,0, s,0,c}; if(rnd()%2){ m[1]=m[0]*0.1f; m[4]=c; m[5]=s; m[7]=-s; } memcpy(h+0x220+0x138*b+0x34,m,36); }
  seti(h,0x6734,(int)(rnd()%3)-1); seti(h,0x6850,(int)rnd32());
  for(int hand=0;hand<2;hand++){ int c=rnd()%3?(int)(rnd()%3):-(int)(rnd()%2); seti(h,0x6AD0+0x28*hand,c); seti(h,0x6AD4+0x28*hand,(int)(rnd()%NITEM)); }
  if(rnd()%2) setf(h,0x128,0.0f);   // item type 28: the hand's point straight ahead
  seti(h,0x6D6C,(int)(rnd()%150)); seti(h,0x6D74,(int)(rnd()%150)); seti(h,0x6DE0,(int)(rnd()%3)); }
static void random_world(void){
  for(int t=0;t<NTYPE;t++){ uint8_t *ty=&G(uint8_t,0x182A7E180ULL+0x13D0ULL*t);
    for(int k=0x10;k<0x13D0;k+=4) setf(ty,k,rfc(1.0f));
    seti(ty,0x10,rnd()%3?1:0); seti(ty,0x14,rnd()%3?0:1); seti(ty,0x7C,(int)(rnd()%4)); }
  for(int it=0;it<NITEM;it++){ uint8_t *x=&G(uint8_t,0x182BBB180ULL+0x1B80ULL*it);
    for(int k=0;k<0x400;k+=4) setf(x,k,rfc(2.0f));
    int ty=rnd()%2?interesting_types[rnd()%11]:(int)(rnd()%NTYPE); seti(x,0x14,ty); seti(x,0x58,(int)(rnd()%32)); seti(x,0x27C,(int)(rnd()%5)); seti(x,0x36C,(int)(rnd()%2));
    if(ty==28 && rnd()%2){ for(int k=0xA4;k<0xC8;k+=4) setf(x,k,0.0f); float px,pz; memcpy(&px,x+0x5C,4); memcpy(&pz,x+0x64,4);   // the hand's point near the grip
      setf(x,0x300,px-0.875f+rfc(0.07f)); setf(x,0x308,pz+rfc(0.07f)); } }
  for(int b=0;b<32;b++){ uint8_t *x=&G(uint8_t,0x1449816E0ULL+188ULL*b); for(int k=0x14;k<0x30;k+=4) setf(x,k,rfc(50.0f)); }
  // the skeleton template: per bone the joint's angle limits, a row index at 0x18 and floats
  for(int b=0;b<16;b++){ uint8_t *x=&G(uint8_t,0x18399DF20ULL+100ULL*b); for(int k=0;k<100;k+=4) setf(x,k,rfc(1.0f));
    for(int a=0;a<3;a++){ float lo=rfc(2.0f), hi=lo+rfc(1.0f)+1.0f; if(rnd()%8==0){ float t=lo; lo=hi; hi=t; } setf(x,4*a,lo); setf(x,12+4*a,hi); } seti(x,0x18,(int)(rnd()%3)); }
  G(uint32_t,0x1602E12C0ULL)=rnd32(); G(uint8_t,0x183F7C960ULL)=rnd()%5==0; G(float,0x151A84884ULL)=rfc(30.0f);
  // bonds: about a third free, so holding an item finds a slot among those printed
  for(int k=0;k<NBOND;k++){ uint8_t *bo=&G(uint8_t,0x1B4287C80ULL+244ULL*k); memset(&G(uint8_t,0x1B4037C40ULL+144ULL*k),0x11,144);
    for(int w=0;w<244;w+=4) setf(bo,w,rfc(1.0f)); seti(bo,0,k<16 || rnd()%2); } }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  state_lo=D(0x140404A6CULL); state_hi=state_lo+(0x1B475D000ULL-0x140404A6CULL);
  hook(0x1400DC050ULL,s_dc050); hook(0x1400D6890ULL,s_d6890); hook(0x1400052C0ULL,s_52c0);
  for(int c=0;c<cases;c++){
    // quaternion product, also in place
    float a[4],b[4],o[4]; for(int k=0;k<4;k++){ a[k]=rf(1.5f); b[k]=rf(1.5f); }
#ifdef ENGINE
    math_quat_multiply(o,a,b); pr("qmul",c,o,16); math_quat_multiply(a,a,b); pr("qmul_a",c,a,16); math_quat_multiply(b,a,b); pr("qmul_b",c,b,16);
#else
    MS void (*qm)(float*,const float*,const float*)=F(0x140105930ULL);
    qm(o,a,b); pr("qmul",c,o,16); qm(a,a,b); pr("qmul_a",c,a,16); qm(b,a,b); pr("qmul_b",c,b,16);
#endif
    if(c%4) continue;
    // look pose of a random human; the pose block starts with garbage
    int i=(int)(rnd()%256); uint8_t *h=HUMAN(i);
    // no infinite angles: the recompiled sine/cosine core (0x1401FA180) reads stack garbage for them
    setf(h,0x9C,rfn(2.0f)); setf(h,0xF8,rfn(4.0f)); setf(h,0x140,rfn(2.0f)); setf(h,0x144,rfn(2.0f));
    for(int k=0;k<16;k++) setf(h,0x6A74+4*k,rf(1.0f));
    float twist=rfn(2.0f);
#ifdef ENGINE
    human_build_look_pose(i,twist);
#else
    ((MS void(*)(int,float))F(0x1400AD030ULL))(i,twist);
#endif
    pr("pose",i,h+0x6A74,64); pr("inputs",i,h+0x9C,4); pr("inputs2",i,h+0x140,8);
    if(c%8) continue;
    // the drive of another random human
    i=(int)(rnd()%256); random_human(i); random_world(); ss=rnd32(); regions[0].addr=0x18329E308ULL+0x6FF8ULL*(uint64_t)i;
    snapshot(); printf("== drive %d human %d\n",c,i);
#ifdef ENGINE
    human_drive_ragdoll(i);
#else
    ((MS void(*)(int))F(0x1400AD2B0ULL))(i);
#endif
    diff();
    // the limb's inverse kinematics on its own: arms and legs, every flag, random arguments
    { static const int limbs[4][2]={{2,4},{2,7},{0,10},{0,13}}; int l=(int)(rnd()%4), fl=(int)(rnd()%32);
      float tg[3],fr[9],ve[3],wt[4],cl[3]; uint32_t u8[3],al[3]; for(int k=0;k<3;k++){ tg[k]=rfc(1.2f); ve[k]=rfc(2.0f); cl[k]=rfc(1.0f); u8[k]=rnd32(); al[k]=rnd32(); }
      for(int k=0;k<9;k++) fr[k]=rfc(1.0f); for(int k=0;k<4;k++) wt[k]=rfc(1.0f);
      float len=rfc(1.0f), tw=rfc(2.0f), lim=rfc(1.0f)+1.0f;
      snapshot(); printf("== limb %d %d flags %d\n",c,l,fl);
#ifdef ENGINE
      human_limb_inverse_kinematics(i,limbs[l][0],limbs[l][1],tg,fr,ve,len,tw,wt,cl,u8,al,lim,fl);
#else
      { int twb; memcpy(&twb,&tw,4); ((MS int64_t(*)(int,int,int,float*,float*,float*,float,int,float*,float*,uint32_t*,uint32_t*,float,char))F(0x1400B1450ULL))(i,limbs[l][0],limbs[l][1],tg,fr,ve,len,twb,wt,cl,u8,al,lim,(char)fl); }
#endif
      diff(); pr("wrist",c,wt,16);
      // the small-angle limit, also for the knees
      int child=(int)(rnd()%15)+1, parent=(int)(rnd()%16); float ax[3]={rfc(1.0f),rfc(1.0f),rfc(1.0f)};
#ifdef ENGINE
      human_limit_joint_turn(i,parent,child,ax);
#else
      ((MS int64_t(*)(int,int,int,float*))F(0x1400A9940ULL))(i,parent,child,ax);
#endif
      pr("turn",child,ax,12); }
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
