// The traffic stage of the tick (0x14018A3E0) and filing the cars on the streets (0x14018B680), with an identical road
// network, crossings, traffic cars, vehicles, vehicle types, humans and players in two processes. Replaced in both by
// the same stubs: rand (0x14023B1B0), making a vehicle (0x14005BCA0, engine vehicle_create) and the level sweep
// (0x1400DC050, engine collision_sweep_level); the car update, route planning and the rest run for real.
// Mode "engine": src/engine/traffic_tick.c.
#include "peload.h"
#ifdef ENGINE
MS void traffic_update(void);
MS void traffic_file_cars(void);
#endif
static uint32_t rs=77003; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float frand(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFFFF)/16777216.0f; }
#define G(type,addr) (*(type*)D(addr))
static uint32_t canon(float f){ uint32_t w; memcpy(&w,&f,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; return w; }
static uint32_t hash(const void *p,size_t n){ uint32_t h=2166136261u; const uint8_t *b=p; for(size_t i=0;i+4<=n;i+=4){ float f; memcpy(&f,b+i,4); h=(h^canon(f))*16777619u; } return h; }
static uint32_t stub_rs; static MS int stub_rand(void){ stub_rs=stub_rs*214013u+2531011u; return (int)((stub_rs>>16)&0x7FFF); }
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
  float v[3]={0,0,0}; switch(rnd()%8){ case 0: v[0]=frand(-1,1); v[1]=frand(-.2f,.2f); v[2]=frand(-1,1); break; case 1: v[1]=1; break;
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
#define NVEH 6
#define NTYPE 4
#define VEH(v) (&G(uint8_t,0x15F2D9200ULL+0x5168ULL*(uint64_t)(v)))
#define HUMAN(h) (&G(uint8_t,0x18329E308ULL+0x6FF8ULL*(uint64_t)(h)))
#define PLAYER_BOT(p) G(int32_t,0x151623978ULL+0x3834ULL*(uint64_t)(p))
static uint32_t log_hash; static int sweeps, made;
static void logw(const void *p,size_t n){ log_hash=(log_hash^hash(p,n))*16777619u; }
static MS uint64_t s_create_vehicle(int type,const float *pos,const float *vel,const float *rot,uint32_t color){
  int32_t head[2]={type,(int32_t)color}; logw(head,8); logw(pos,12); logw(vel,12); logw(rot,36); made++;
  return made%4==0?(uint64_t)0xFFFFFFFFu:(uint64_t)((log_hash>>5)%NVEH); }
static MS int s_sweep(float *from,float *to,int records){ int32_t r=records; logw(&r,4); logw(from,12); logw(to,12); sweeps++;
  G(float,0x151A84884ULL)=from[1]-2.0f-(float)(sweeps%7)*0.25f; return sweeps%3!=0; }
static void make_world(void){
  for(int c=0;c<NCROSS;c++){ uint8_t *cp=CROSS(c); pi(cp,0x44,(int32_t)(rnd()%4)); pi(cp,0x48,(int32_t)(rnd()%3==0?795+rnd()%6:rnd()%3?660+rnd()%20:rnd()%800));
    if(rnd()%3==0) pi(cp,0x18+4*(int)(rnd()%4),-1); if(rnd()%4==0) pi(cp,0x18+4*(int)(rnd()%4),-1);
    if(rnd()%4==0){ pf(cp,0x70,-1000); pf(cp,0x78,-1000); pf(cp,0x7C,1000); pf(cp,0x84,1000); }
    else { float x=frand(-2,scale), z=frand(-2,scale); pf(cp,0x70,x); pf(cp,0x74,frand(-5,5)); pf(cp,0x78,z); pf(cp,0x7C,x+frand(0,scale)); pf(cp,0x80,frand(-5,5)); pf(cp,0x84,z+frand(0,scale)); } }
  for(int t=0;t<NTYPE;t++){ uint8_t *tp=&G(uint8_t,0x192E9A680ULL+0x185C0ULL*(uint64_t)t); for(int k=0;k<3;k++) pf(tp,0x848+4*k,frand(-2,2)); pf(tp,0x17894,frand(.2f,.6f)); pf(tp,0x178A0,frand(-.3f,.3f)); }
  for(int p=0;p<8;p++) PLAYER_BOT(p)=rnd()%3==0;
  for(int h=0;h<256;h++){ uint8_t *hp=HUMAN(h); pi(hp,0,0); pi(hp,8,-1); pi(hp,0x38,(int32_t)rnd32()); pi(hp,0x3C,0); }
  int n=(int)(rnd()%5); for(int k=0;k<n;k++){ int h=rnd()%4==0?(rnd()%2?0:255):(int)(rnd()%256); uint8_t *hp=HUMAN(h); pi(hp,0,rnd()%8!=0); pi(hp,8,rnd()%8==0?-1:(int32_t)(rnd()%8)); pi(hp,0x3C,rnd()%6==0?0:(int32_t)(1+rnd()%100)); point(hp,0x224); } }
static void place_humans_near(void){ // some humans right by a car, at the edges of the ranges
  for(int h=0;h<256;h++){ uint8_t *hp=HUMAN(h); if(!gi(hp,0)||rnd()%2) continue; const uint8_t *cp=CAR(rnd()%NCAR); float p[3]; memcpy(p,cp+0x10,12);
    static const float off[6]={15.5f,16.5f,19.5f,20.5f,95.5f,99.5f}; p[rnd()%3]+=off[rnd()%6]+frand(-1,1); memcpy(hp+0x224,p,12); } }
static void on_the_edge(void){ int car=(int)(rnd()%NCAR); uint8_t *cp=CAR(car); float p[3]; memcpy(p,cp+0x10,12);
  if(rnd()%2){ uint8_t *sp=STREET(rnd()%4==0&&gi(cp,0x5B4)>=0?gi(cp,0x5B4):(int)(rnd()%NSTREET)); for(int k=0;k<3;k++){ pf(sp,0x1FC+4*k,p[k]-(rnd()%2?0.0f:50.0f)); pf(sp,0x208+4*k,p[k]+(rnd()%2?0.0f:50.0f)); } }
  else { uint8_t *xp=CROSS(rnd()%NCROSS); for(int k=0;k<3;k++){ pf(xp,0x70+4*k,p[k]-(rnd()%2?0.0f:50.0f)); pf(xp,0x7C+4*k,p[k]+(rnd()%2?0.0f:50.0f)); } }
  // a car without a vehicle at whole coordinates, and a human exactly 16, 20, 96 or 100 from it
  if(rnd()%2){ static const float off[4]={16.0f,20.0f,96.0f,100.0f}; for(int k=0;k<3;k++) p[k]=(float)(int)p[k]; memcpy(cp+0x10,p,12); pi(cp,8,-1);
    int h=(int)(rnd()%256); uint8_t *hp=HUMAN(h); pi(hp,0,1); pi(hp,8,(int32_t)(rnd()%8)); pi(hp,0x3C,50); p[rnd()%3]+=off[rnd()%4]; memcpy(hp+0x224,p,12); } }
static void make_vehicle_record(int v){ uint8_t *vp=VEH(v); pi(vp,0x1C,(int32_t)rnd32()); point(vp,0x2C); for(int k=0;k<9;k++) pf(vp,0x44+4*k,frand(-1,1));
  for(int k=0;k<3;k++) pf(vp,0x8C+4*k,rnd()%4==0?0.0f:frand(-.4f,.4f)); for(int k=0;k<12;k++) pi(vp,0x3600+4*k,(int32_t)rnd32()); pi(vp,0x3648,(int32_t)rnd32()); }
static void dress_car(int car){ uint8_t *cp=CAR(car); pi(cp,0,(int32_t)(rnd()%NTYPE)); pi(cp,4,rnd()%3?-1:(int32_t)(rnd()%256)); pi(cp,8,rnd()%2?-1:(int32_t)(rnd()%NVEH));
  pi(cp,0xC,(int32_t)rnd32()); pi(cp,0x7C,(int32_t)(rnd()%6==0?0:rnd()%5==0?2:1)); pf(cp,0x58,frand(1,3)); pf(cp,0x5C,frand(-3,-1)); pf(cp,0x60,frand(1.5f,3));
  if(rnd()%40==0) pf(cp,0x50,0.0f); if(rnd()%50==0) pf(cp,0x58,NAN); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):6000;
  hook(0x14023B1B0ULL,stub_rand); hook(0x14005BCA0ULL,s_create_vehicle); hook(0x1400DC050ULL,s_sweep);
  for(int c=0;c<cases;c++){
    if(c%25==0){ make_network(); make_world(); }
    for(int car=0;car<NCAR+4;car++) if(c%25==0||rnd()%3==0){ make_car(car); dress_car(car); }
    for(int v=0;v<NVEH;v++) if(c%25==0||rnd()%2) make_vehicle_record(v);
    if(rnd()%2) place_humans_near();
    if(rnd()%3==0) on_the_edge();
    G(int32_t,0x15FE95260ULL)=rnd()%12==0?(int32_t)(rnd()%4):NCAR; G(int32_t,0x175FD145CULL)=rnd()%15==0?0:NCROSS;
    G(int32_t,0x16B2A2224ULL)=rnd()%12==0;
    G(int32_t,0x183F7CB60ULL)=rnd()%3==0; G(int32_t,0x183F7C304ULL)=(int32_t)(rnd()%6); G(int32_t,0x183EBFAACULL)=rnd()%3==0?6:(int32_t)(rnd()%8);
    G(int32_t,0x15FD06200ULL)=(int32_t)(rnd()%5); for(int k=0;k<16;k++) G(int32_t,0x15FD06204ULL+4ULL*(uint64_t)k)=-3;
    for(int k=0;k<200;k++) G(int32_t,0x1600D6290ULL+4ULL*(uint64_t)k)=-7;
    stub_rs=rnd32(); log_hash=2166136261u; sweeps=(int)(rnd()%3); made=(int)(rnd()%4);
    int whole=c%5!=0;
    if(whole){
#ifdef ENGINE
      traffic_update();
#else
      ((MS void(*)(void))F(0x14018A3E0ULL))();
#endif
    } else {
#ifdef ENGINE
      traffic_file_cars();
#else
      ((MS void(*)(void))F(0x14018B680ULL))();
#endif
    }
    if(argc>4&&atoi(argv[4])==c){ for(int car=0;car<NCAR;car++) for(int k=0;k<0x5FC;k+=4) printf("car %d +%03x %08x\n",car,k,(uint32_t)gi(CAR(car),k)); }
    printf("== case %d %s:",c,whole?"tick":"file");
    for(int car=0;car<NCAR;car++){ const uint8_t *cp=CAR(car); printf(" %08x",hash(cp,0x5FC)); }
    uint32_t hd=2166136261u; for(int h=0;h<256;h++) hd=(hd^(uint32_t)gi(HUMAN(h),0x38))*16777619u;
    printf(" | cars %08x streets %08x crossings %08x vehicles %08x humans %08x stubs %08x %d %d rand %08x scratch %d search %d %d %d\n",hash(CAR(0),0x5FC*(NCAR+4)),
      hash(STREET(0),0x630*NSTREET),hash(CROSS(0),0x88*NCROSS),hash(VEH(0),0x5168*NVEH),hd,log_hash,sweeps,made,stub_rs,G(int32_t,0x15FD06200ULL),
      G(int32_t,0x1600D6284ULL),G(int32_t,0x1600D6288ULL),G(int32_t,0x1600D628CULL));
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
