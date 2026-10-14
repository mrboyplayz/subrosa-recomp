// Building the traffic road network from the streets (0x140009340) and filling the city with traffic cars
// (0x14012E960), with identical streets, crossings, traffic cars and vehicle types in two processes. Replaced in
// both by the same stubs: rand (0x14023B1B0) and the level sweep (0x1400DC050); making each car and planning its
// route run for real. Mode "engine": src/engine/traffic_route.c (traffic_build_network) and traffic_spawn.c
// (traffic_populate).
#include "peload.h"
#ifdef ENGINE
MS void traffic_build_network(void);
MS void traffic_populate(int count);
#endif
static uint32_t rs=90417; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float frand(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFFFF)/16777216.0f; }
#define G(type,addr) (*(type*)D(addr))
static uint32_t canon(float f){ uint32_t w; memcpy(&w,&f,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; return w; }
static uint32_t hash(const void *p,size_t n){ uint32_t h=2166136261u; const uint8_t *b=p; for(size_t i=0;i+4<=n;i+=4){ float f; memcpy(&f,b+i,4); h=(h^canon(f))*16777619u; } return h; }
// rand, often with its low bits clear: the lane changes hang on rand() & 0x7F and rand() & 0xFF being 0
static uint32_t stub_rs; static MS int stub_rand(void){ stub_rs=stub_rs*214013u+2531011u; int v=(int)((stub_rs>>16)&0x7FFF);
  if((stub_rs>>9)&1) v&=~0x7F; if((stub_rs>>10)&3) ; else v&=~0xFF; return v; }
#define NSTREET 72
#define NCROSS 20
#define NCAR 12
#define STREET(s) (&G(uint8_t,0x175FF3480ULL+0x630ULL*(uint64_t)(s)))
#define CROSS(c) (&G(uint8_t,0x175FD1464ULL+0x88ULL*(uint64_t)(c)))
#define CAR(c) (&G(uint8_t,0x15FD16260ULL+0x5FCULL*(uint64_t)(c)))
static void pi(uint8_t *p,int off,int32_t v){ memcpy(p+off,&v,4); }
static void pf(uint8_t *p,int off,float v){ memcpy(p+off,&v,4); }
static int32_t gi(const uint8_t *p,int off){ int32_t v; memcpy(&v,p+off,4); return v; }
static float scale;
static void point(uint8_t *p,int off){ pf(p,off,frand(0,scale)); pf(p,off+4,frand(-2,2)); pf(p,off+8,frand(0,scale)); }
static void unit(uint8_t *p,int off){ // a direction: mostly along x or z as streets are, sometimes any, sometimes straight up
  float v[3]={0,0,0}; switch(rnd()%8){ case 0: v[0]=frand(-1,1); v[1]=frand(-.2f,.2f); v[2]=frand(-1,1); break; case 1: if(rnd()%2) v[1]=1; else v[rnd()%2?0:2]=rnd()%2?0.5f:-0.5f; break;
    case 2: case 3: case 4: v[0]=rnd()%2?1.0f:-1.0f; break; default: v[2]=rnd()%2?1.0f:-1.0f; } memcpy(p+off,v,12); }
static void make_network(void){
  int32_t *nodes=&G(int32_t,0x15FE96284ULL), *ends=&G(int32_t,0x1600D7290ULL); int nnode=2*NSTREET;
  scale=rnd()%3==0?6.0f:rnd()%2?40.0f:300.0f;
  G(int32_t,0x15FE96280ULL)=nnode; G(int32_t,0x175FF3464ULL)=NSTREET;
  for(int c=0;c<NCROSS;c++){ uint8_t *cp=CROSS(c); for(int k=0;k<0x88;k+=4) pi(cp,k,(int32_t)rnd32()); point(cp,0xC);
    for(int k=0;k<4;k++){ pi(cp,0x18+4*k,(int32_t)(rnd()%NSTREET)); pi(cp,0x50+4*k,(int32_t)(rnd()%4)); pi(cp,0x60+4*k,(int32_t)(rnd()%4)); } }
  for(int s=0;s<NSTREET;s++){ uint8_t *sp=STREET(s); for(int k=0;k<0x630;k+=4) pi(sp,k,(int32_t)rnd32());
    int32_t a=(int32_t)(rnd()%NCROSS), b=(int32_t)(rnd()%NCROSS), one=(int32_t)(1+rnd()%4), other=(int32_t)(1+rnd()%4);
    pi(sp,0xC,a); pi(sp,0x10,b); pi(sp,0x18,one); pi(sp,0x1C,other); pi(sp,0x20,one+other);
    for(int l=0;l<16;l++){ point(sp,0x28+0x1C*l); point(sp,0x34+0x1C*l); if(rnd()%12==0) memcpy(sp+0x34+0x1C*l,sp+0x28+0x1C*l,12); }
    unit(sp,0x1E4); unit(sp,0x1F0);
    if(rnd()%5==0){ for(int k=0;k<3;k++){ pf(sp,0x1FC+4*k,-1000.0f); pf(sp,0x208+4*k,1000.0f); } }
    else for(int k=0;k<3;k++){ float lo=frand(-2,scale); pf(sp,0x1FC+4*k,lo); pf(sp,0x208+4*k,lo+frand(0,scale)); }
    if(rnd()%40==0) pf(sp,0x208+4*(int)(rnd()%3),NAN);
    pi(sp,0x214,(int32_t)(rnd()%7)); for(int k=0;k<8;k++) pi(sp,0x218+4*k,(int32_t)(rnd()%NCAR));
    if(rnd()%4){ pi(CROSS(a),0x18+4*(int)(rnd()%4),s); pi(CROSS(b),0x18+4*(int)(rnd()%4),s); }
    for(int e=0;e<2;e++){ int n=2*s+e; int32_t *np=nodes+18*n; float pos[3]={frand(0,2000),frand(-600,600),frand(0,2000)}; memcpy(np,pos,12);
      np[15]=s; np[16]=e; np[17]=rnd()%6==0; ends[n]=n; } }
  for(int n=0;n<nnode;n++){ int32_t *np=nodes+18*n; int k=(int)(rnd()%5); np[3]=k; for(int i=0;i<8;i++) np[4+i]=(int32_t)(rnd()%(unsigned)nnode); np[4]=n^1; if(k==0&&rnd()%2) np[3]=1; } }
static void make_car(int car){ uint8_t *cp=CAR(car); for(int k=0;k<0x5FC;k+=4) pi(cp,k,(int32_t)rnd32());
  point(cp,0x10); for(int k=0;k<3;k++) pf(cp,0x1C+4*k,rnd()%4==0?0.0f:rnd()%3?frand(-.02f,.02f):frand(-1,1)); if(rnd()%60==0) pf(cp,0x20,NAN);
  pf(cp,0x28,frand(-4,4)); for(int k=0;k<9;k++) pf(cp,0x2C+4*k,frand(-1,1));
  pf(cp,0x50,rnd()%40==0?NAN:frand(-1,1)); pf(cp,0x54,frand(0,.5f)); pf(cp,0x60,frand(0,3)); point(cp,0x64); point(cp,0x70); if(rnd()%25==0) pf(cp,0x64+4*(int)(rnd()%6),NAN);
  pi(cp,0x7C,1); pi(cp,0x80,rnd()%3==0);
  int pos=(int)(rnd()%4), len=rnd()%4==0?pos+1:pos+2+(int)(rnd()%3); if(rnd()%30==0) len=0; pi(cp,0x84,pos); pi(cp,0x88,len);
  for(int l=0;l<8;l++){ uint8_t *lp=cp+0x8C+20*l; pi(lp,0,(int32_t)(rnd()%6==0?67+(rnd()&1):rnd()%NSTREET)); pi(lp,8,(int32_t)(rnd()&1)); pi(lp,16,(int32_t)(rnd()%3)-1); }
  int32_t street=gi(cp,0x8C+20*pos), lane=(int32_t)(rnd()%8);
  switch(rnd()%8){ case 0: case 1: case 2: pi(cp,0x590,-1); pi(cp,0x598,rnd()%8==0?-1:(int32_t)(rnd()%NCROSS)); break;
    case 3: pi(cp,0x590,(int32_t)(rnd()%NSTREET)); pi(cp,0x598,-1); break; default: pi(cp,0x590,street); pi(cp,0x598,-1); }
  pi(cp,0x59C,lane); pi(cp,0x5A0,rnd()%3==0?(int32_t)(rnd()%8):lane); pi(cp,0x5A4,(int32_t)(rnd()%8));
  pf(cp,0x5AC,rnd()%50==0?NAN:frand(0,1.1f)); pi(cp,0x5B0,(int32_t)(rnd()%3==0?170+rnd()%160:rnd()%5));
  pi(cp,0x5B4,rnd()%3==0?-1:(int32_t)(rnd()%NSTREET)); pf(cp,0x5BC,frand(0,scale)); pf(cp,0x5C0,frand(0,scale)+frand(0,8));
  pf(cp,0x5CC,frand(0,24)); pf(cp,0x5D0,frand(0,24)); pi(cp,0x5D4,(int32_t)(rnd()&0xFF)); }
#define NTYPE 16
static uint32_t log_hash; static int sweeps;
static void logw(const void *p,size_t n){ log_hash=(log_hash^hash(p,n))*16777619u; }
static MS int s_sweep(float *from,float *to,int records){ int32_t r=records; logw(&r,4); logw(from,12); logw(to,12); sweeps++;
  G(float,0x151A84884ULL)=from[1]-2.0f-(float)(sweeps%7)*0.25f; return sweeps%3!=0; }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):4000;
  hook(0x14023B1B0ULL,stub_rand); hook(0x1400DC050ULL,s_sweep);
  int32_t *nodes=&G(int32_t,0x15FE96284ULL), *ends=&G(int32_t,0x1600D7290ULL);
  for(int c=0;c<cases;c++){
    make_network();
    // crossings that have lost streets, streets that end nowhere, crossings that only know the street itself
    for(int x=0;x<NCROSS;x++){ uint8_t *cp=CROSS(x); pi(cp,4,(int32_t)(rnd()%3)); for(int k=0;k<4;k++) if(rnd()%3==0) pi(cp,0x18+4*k,-1); }
    for(int s=0;s<NSTREET;s++){ uint8_t *sp=STREET(s); if(rnd()%8==0) pi(sp,0xC+4*(int)(rnd()%2),-1); pi(sp,0x14,(int32_t)(rnd()%3==0?0:rnd32()));
      if(rnd()%6==0){ int x=gi(sp,0xC+4*(int)(rnd()%2)); if(x>=0) for(int k=0;k<4;k++) pi(CROSS(x),0x18+4*k,rnd()%2?s:-1); }
      if(rnd()%5==0){ pi(sp,0x18,3); pi(sp,0x20,3+(int32_t)(1+rnd()%3)); if(rnd()%2){ int a=gi(sp,0xC), b=gi(sp,0x10); if(a>=0&&b>=0) pi(CROSS(b),4,gi(CROSS(a),4)); } } }
    for(int t=0;t<NTYPE;t++) pf(&G(uint8_t,0x192E9A680ULL+0x185C0ULL*(uint64_t)t),0x178A0,frand(-.3f,.3f));
    int nstreet=rnd()%10==0?0:rnd()%4==0?(int)(1+rnd()%NSTREET):NSTREET;
    G(int32_t,0x175FF3464ULL)=nstreet;
    // stale values that a link to a street beyond the count can still be followed through
    for(int k=0;k<18*2*NSTREET;k++) nodes[k]=(int32_t)(rnd()%7); for(int k=0;k<2*NSTREET;k++) ends[k]=(int32_t)(rnd()%(unsigned)(nstreet?2*nstreet:1)); G(int32_t,0x15FE96280ULL)=(int32_t)rnd32();
    for(int car=0;car<NCAR+4;car++){ uint8_t *cp=CAR(car); for(int k=0;k<0x5FC;k+=4) pi(cp,k,(int32_t)rnd32()); }
    for(int k=0;k<NCAR+4;k++) G(int32_t,0x15FE95280ULL+4ULL*(uint64_t)k)=(int32_t)(rnd()%9);
    G(int32_t,0x183F7CB60ULL)=rnd()%3==0; G(int32_t,0x183EBFAACULL)=rnd()%2?5:(int32_t)(rnd()%8);
    for(int k=0;k<200;k++) G(int32_t,0x1600D6290ULL+4ULL*(uint64_t)k)=-7;
    stub_rs=rnd32(); log_hash=2166136261u; sweeps=(int)(rnd()%3);
#ifdef ENGINE
    traffic_build_network();
#else
    ((MS void(*)(void))F(0x140009340ULL))();
#endif
    int built=G(int32_t,0x15FE96280ULL);
    printf("== case %d streets %d: nodes %d %08x ends %08x",c,nstreet,built,hash(nodes,72*2*NSTREET),hash(ends,8*NSTREET));
    // the cars are made on the network just built; with the turning streets on, 67 and 23 must not be the only ones
    int count=rnd()%6==0?(int)(rnd()%3)-1:(int)(1+rnd()%4); G(int32_t,0x15FE95260ULL)=(int32_t)(rnd()%(NCAR-4));
    if(nstreet>=1&&nstreet<=68&&nstreet!=24) G(int32_t,0x183F7CB60ULL)=0;
    if(nstreet<25) G(int32_t,0x183F7CB60ULL)=0;
#ifdef ENGINE
    traffic_populate(count);
#else
    ((MS void(*)(int))F(0x14012E960ULL))(count);
#endif
    printf(" | populate %d: count %d cars %08x made %08x stubs %08x %d rand %08x search %d %d %d nodes %08x\n",count,G(int32_t,0x15FE95260ULL),hash(CAR(0),0x5FC*(NCAR+4)),
      hash(&G(int32_t,0x15FE95280ULL),4*(NCAR+4)),log_hash,sweeps,stub_rs,G(int32_t,0x1600D6284ULL),G(int32_t,0x1600D6288ULL),G(int32_t,0x1600D628CULL),hash(nodes,72*2*NSTREET));
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
