// The traffic car update (0x140009E30) with an identical road network, streets, crossings and traffic cars in two
// processes. Nothing is stubbed except rand (0x14023B1B0, replaced in both by the same generator): route planning,
// the speed behind other cars, listing a street's cars and the random street all run for real.
// Mode "engine": src/engine/traffic_car.c.
#include "peload.h"
#ifdef ENGINE
MS void traffic_update_car(int car);
#endif
static uint32_t rs=40921; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
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
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  hook(0x14023B1B0ULL,stub_rand);
  for(int c=0;c<cases;c++){
    if(c%50==0) make_network();
    for(int car=0;car<NCAR+4;car++) if(c%50==0||rnd()%3==0) make_car(car);
    G(int32_t,0x183F7CB60ULL)=rnd()%3==0; G(int32_t,0x183F7C304ULL)=(int32_t)(rnd()%6); G(int32_t,0x183EBFAACULL)=rnd()%3==0?6:(int32_t)(rnd()%8);
    G(int32_t,0x15FD06200ULL)=(int32_t)(rnd()%5); for(int k=0;k<16;k++) G(int32_t,0x15FD06204ULL+4ULL*(uint64_t)k)=-3;
    for(int k=0;k<200;k++) G(int32_t,0x1600D6290ULL+4ULL*(uint64_t)k)=-7;
    G(int32_t,0x175FF3464ULL)=rnd()%4==0?NSTREET-2:NSTREET;
    // now and then only the first street's box holds anything
    if(rnd()%40==0) for(int s=0;s<NSTREET;s++) for(int k=0;k<3;k++){ pf(STREET(s),0x1FC+4*k,s?1.0e9f:-1000.0f); pf(STREET(s),0x208+4*k,s?1.0e9f:1000.0f); }
    stub_rs=rnd32();
    printf("== case %d",c);
    for(int turn=0;turn<3;turn++){ int car=(int)(rnd()%NCAR);
      // the same car again sometimes: the state the update itself leaves
      if(turn&&rnd()%2) car=(int)(rnd()%NCAR);
      if(rnd()%10==0){ uint8_t *wp=CAR(car); int pos=gi(wp,0x84); if(pos>=0&&pos<6){ float at[3]={frand(0,scale),frand(-2,2),frand(0,scale)};
          for(int e=0;e<2;e++){ uint8_t *sp=STREET(gi(wp,0x8C+20*(pos+e))); for(int l=0;l<16;l++){ memcpy(sp+0x28+0x1C*l,at,12); memcpy(sp+0x34+0x1C*l,at,12); } }
          if(rnd()%3) at[1]+=rnd()%2?0.25f:-0.25f; memcpy(wp+0x10,at,12); pi(wp,0x590,-1); pi(wp,0x598,(int32_t)(rnd()%NCROSS)); } }
      if(rnd()%10==0){ uint8_t *wp=CAR(car); float p[3]; pf(wp,0x28,0.0f); memcpy(p,wp+0x10,12); p[0]+=12.0f;   // heading 0: the point ahead is 12 along x
        uint8_t *sp=STREET(rnd()%NSTREET); for(int k=0;k<3;k++){ pf(sp,0x1FC+4*k,p[k]-(rnd()%2?0.0f:50.0f)); pf(sp,0x208+4*k,p[k]+(rnd()%2?0.0f:50.0f)); } }
      const uint8_t *cp=CAR(car);
      int mode=gi(cp,0x590)!=-1?1:gi(cp,0x598)!=-1?2:0;
#ifdef ENGINE
      traffic_update_car(car);
#else
      ((MS void(*)(int))F(0x140009E30ULL))(car);
#endif
      float steer,speed,change; memcpy(&steer,cp+0x50,4); memcpy(&speed,cp+0x54,4); memcpy(&change,cp+0x5AC,4);
      printf(" | car %d mode %d: steer %08x speed %08x street %d crossing %d lanes %d %d %d change %08x stuck %d route %d/%d rec %08x",car,mode,canon(steer),canon(speed),
        gi(cp,0x590),gi(cp,0x598),gi(cp,0x59C),gi(cp,0x5A0),gi(cp,0x5A4),canon(change),gi(cp,0x5B0),gi(cp,0x84),gi(cp,0x88),hash(cp,0x5FC)); }
    printf(" | cars %08x scratch %d %08x rand %08x search %d %d %d path %08x nodes %08x\n",hash(CAR(0),0x5FC*(NCAR+4)),G(int32_t,0x15FD06200ULL),hash(&G(int32_t,0x15FD06204ULL),64),stub_rs,
      G(int32_t,0x1600D6284ULL),G(int32_t,0x1600D6288ULL),G(int32_t,0x1600D628CULL),hash(&G(int32_t,0x1600D6290ULL),800),hash(&G(int32_t,0x15FE96284ULL),72*2*NSTREET));
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
