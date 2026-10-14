// The vehicle stage of a tick (0x140108930) and block-part breaking (0x14000B7D0) with identical vehicles, bodies,
// constraints, items, types, train stops, streets and events in two processes.
//
// Run for real in both: vehicle damage, the sound event, car controls (with tan), the train's rails (no streets are
// filed in the street cells, so it only sets the bogies' bonds) and each wheel's own work. Replaced in both by the
// same recording stubs: rand, atan2, the helicopter 0x14010AF90, the level sweep 0x1400DC050, the hull sweep
// 0x1400E21F0, the item query 0x140038230, the two item contact routines 0x140048DA0 / 0x14004A7A0, the contacts
// 0x1400052C0 / 0x140005160, the layout write 0x140016E30 and the wheel's ball tests 0x14003DE80 / 0x14003D830.
// Mode "engine": src/engine/vehicle_tick.c (vehicle_update_all, world_break_block_part).
#include "peload.h"
#ifdef ENGINE
MS void vehicle_update_all(void);
MS int world_break_block_part(uint32_t layer, int32_t x, uint32_t y, uint32_t z, uint32_t layout, int32_t part, const float *position, const float *velocity);
#endif
static uint32_t rs=1337; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float frand(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFFFF)/16777216.0f; }
#define G(type,addr) (*(type*)D(addr))
static uint32_t canon(float f){ uint32_t w; memcpy(&w,&f,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; return w; }
static void prf(const char *t,const float *p,int n){ printf("%s",t); for(int k=0;k<n;k++) printf(" %08x",canon(p[k])); printf("\n"); }
static void prw(const char *t,int i,const void *p,size_t n){ printf("%s %d:",t,i); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ float f; memcpy(&f,b+k,4); printf(" %08x",canon(f)); } printf("\n"); }
static void pri(const char *t,const void *p,int n){ printf("%s",t); for(int k=0;k<n;k++){ int32_t v; memcpy(&v,(const uint8_t*)p+4*k,4); printf(" %d",v); } printf("\n"); }
static const float specials[]={0.0f,-0.0f,1.0f,-1.0f,0.5f,2.0f,-32.0f,-33.0f,1e30f,-1e30f,INFINITY,-INFINITY,NAN,0.033333335f,0.11666667f,16.0f};
static int wild;   // how often a value is taken from the specials: one in `wild`
static float pick(float lo,float hi){ if(wild && rnd()%(unsigned)wild==0) return specials[rnd()%16]; return frand(lo,hi); }
static void putf(uint8_t *p,float f){ memcpy(p,&f,4); }
static void puti(uint8_t *p,int32_t i){ memcpy(p,&i,4); }
static int32_t geti(const uint8_t *p){ int32_t i; memcpy(&i,p,4); return i; }
static void fill(uint8_t *p,size_t n){ for(size_t k=0;k+4<=n;k+=4){ uint32_t w=rnd32(); memcpy(p+k,&w,4); } }
static uint32_t hash(const void *p,size_t n){ uint32_t h=2166136261u; const uint8_t *b=p; for(size_t i=0;i<n;i++){ h=(h^b[i])*16777619u; } return h; }
static uint32_t stub_rs; static uint32_t srnd(void){ stub_rs=stub_rs*1664525u+1013904223u; return stub_rs>>8; }
static float sf(float lo,float hi){ return lo+(hi-lo)*(float)(srnd()&0xFFFF)/65536.0f; }
static uint8_t *vehicles,*bodies,*items,*events,*constraints;
static float *hit;
static int sweep_hits;

static MS int stub_rand(void){ int r=(int)(srnd()&0x7FFF); printf("rand %d\n",r); return r; }
static MS double same_atan2(double y,double x){ return atan2(y,x); }
static MS void stub_helicopter(int v){ printf("helicopter %d\n",v); }
static void make_hit(void){ for(int k=0;k<3;k++){ hit[k]=sf(-20.0f,20.0f); hit[3+k]=sf(-1.0f,1.0f); } if(srnd()%40==0) hit[srnd()%6]=NAN;
  hit[6]=sf(0.0f,1.0f); hit[7]=sf(0.0f,3.0f); }
static MS int stub_sweep_level(float *from,float *to,int flag){ prf("sweep_level from",from,3); prf("  to",to,3); printf("  flag %d\n",flag);
  make_hit(); int32_t *b=&G(int32_t,0x151A848D4ULL);
  b[0]=srnd()%4==0?-1:(int32_t)(srnd()%5); b[1]=srnd()%8==0?-1:srnd()%9==0?-5:(int32_t)(srnd()%64); b[2]=(int32_t)(srnd()%64); b[3]=(int32_t)(srnd()%64);
  G(uint32_t,0x151A848F0ULL)=srnd()%4==0?(srnd()<<8):(0x80000000u|(srnd()&0x1FFFFF)); G(uint32_t,0x151A848F4ULL)=(srnd()%3?0x10000u:0u)|(srnd()%40)|(srnd()%7==0?0x20000u:0u);
  G(int32_t,0x151A84908ULL)=srnd()%5==0?(int32_t)(srnd()%3):-1;
  if(srnd()%6==0) to[srnd()%3]+=0.125f;
  int r=srnd()%5!=0; sweep_hits+=r; return r; }
static MS int stub_sweep_hull(int vehicle,float *from,float *to){ printf("sweep_hull %d",vehicle); prf(" from",from,3); prf("  to",to,3); make_hit(); return srnd()%3!=0; }
static MS void stub_query(int32_t *out,const int32_t *lo,const int32_t *hi){ printf("query %d %d %d .. %d %d %d\n",lo[0],lo[1],lo[2],hi[0],hi[1],hi[2]);
  int n=(int)(srnd()%5); out[0]=n; for(int i=0;i<n;i++){ out[1+2*i]=0; out[2+2*i]=(int32_t)(srnd()%12); } out[1]=(int32_t)srnd(); }
static MS int stub_mesh_contact(int a,int b,void *ma,void *mb,const float *pa,const float *ra,const float *pb,const float *rb,uint32_t flags){
  printf("mesh_contact %d %d mesh %llx %llx flags %u soft %d\n",a,b,(unsigned long long)((uint8_t*)ma-&G(uint8_t,0x19028EC54ULL)),(unsigned long long)((uint8_t*)mb-&G(uint8_t,0x182A7E180ULL)),flags,G(int32_t,0x16B2A2EA0ULL));
  prf("  pa",pa,3); prf("  ra",ra,9); prf("  pb",pb,3); prf("  rb",rb,9); return srnd()%2; }
static MS int stub_points_contact(int a,int b,void *ma,void *mb,const float *pa,const float *ra,const float *pb,const float *rb){
  printf("points_contact %d %d points %llx %llx soft %d\n",a,b,(unsigned long long)((uint8_t*)ma-&G(uint8_t,0x19028EC54ULL)),(unsigned long long)((uint8_t*)mb-&G(uint8_t,0x182A7E180ULL)),G(int32_t,0x16B2A2EA0ULL));
  prf("  pa",pa,3); prf("  ra",ra,9); prf("  pb",pb,3); prf("  rb",rb,9); return srnd()%2; }
static MS uintptr_t stub_world_contact(int16_t body,const float *offset,const float *normal,float depth,float friction,float scale,float stiffness){
  printf("world_contact body %d soft %d",body,G(int32_t,0x16B2A2EA0ULL)); prf(" offset",offset,3); prf("  normal",normal,3); printf("  %08x %08x %08x %08x\n",canon(depth),canon(friction),canon(scale),canon(stiffness)); return 0; }
static MS long long stub_contact(int a,int b,const float *oa,const float *ob,const float *normal,float depth,float friction,float scale,float stiffness){
  printf("contact %d %d",a,b); prf(" oa",oa,3); prf("  ob",ob,3); prf("  normal",normal,3); printf("  %08x %08x %08x %08x\n",canon(depth),canon(friction),canon(scale),canon(stiffness)); return 0; }
static MS void stub_write_layout(uint32_t layer,uint32_t x,uint32_t y,uint32_t z,uint32_t value){ printf("write_layout %u %u %u %u %08x\n",layer,x,y,z,value); }
static MS int stub_ball_level(const float *centre,const float *axis,float radius){ prf("ball_level",centre,3); prf("  axis",axis,3); printf("  radius %08x\n",canon(radius));
  int r=srnd()%3==0; for(int k=0;k<8;k++) hit[k]=sf(-10.0f,10.0f); return r; }
static MS int stub_ball_triangles(float *out,const int32_t *list,const float *centre,const float *axis,float radius){ printf("ball_triangles %d",list[0]); prf(" centre",centre,3); (void)axis; (void)radius;
  int r=srnd()%4==0; for(int k=0;k<8;k++) out[k]=sf(-10.0f,10.0f); return r; }

static const int32_t types[]={0,1,9,10,11,12,13,14,17};
static const int slots[]={0,1,2,3,4,511};
#define NSLOT 6
static void rotation(uint8_t *p){ if(rnd()%4==0){ for(int k=0;k<9;k++) putf(p+4*k,pick(-1.0f,1.0f)); return; }
  float a=frand(-3.2f,3.2f), c=cosf(a), s=sinf(a), m[9]={c,0,-s, 0,1,0, s,0,c}; for(int k=0;k<9;k++) putf(p+4*k,m[k]+pick(-0.05f,0.05f)); }
static void set_body(int b,const float *about){ uint8_t *bp=bodies+0xBC*b; fill(bp,0xBC); puti(bp,1);
  for(int k=0;k<3;k++){ putf(bp+0x18+4*k,about[k]+frand(-3.0f,3.0f)); putf(bp+0x24+4*k,pick(-0.6f,0.6f)); } rotation(bp+0x3C); putf(bp+0xB8,pick(-0.5f,2.0f)); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):3000;
  hook(0x14023B1B0ULL,stub_rand); hook(0x14023EDE4ULL,same_atan2); hook(0x14010AF90ULL,stub_helicopter); hook(0x1400DC050ULL,stub_sweep_level);
  hook(0x1400E21F0ULL,stub_sweep_hull); hook(0x140038230ULL,stub_query); hook(0x140048DA0ULL,stub_mesh_contact); hook(0x14004A7A0ULL,stub_points_contact);
  hook(0x140005160ULL,stub_world_contact); hook(0x1400052C0ULL,stub_contact); hook(0x140016E30ULL,stub_write_layout);
  hook(0x14003DE80ULL,stub_ball_level); hook(0x14003D830ULL,stub_ball_triangles);
  vehicles=&G(uint8_t,0x15F2D9200ULL); bodies=&G(uint8_t,0x1449816E0ULL); items=&G(uint8_t,0x182BBB180ULL); events=&G(uint8_t,0x1873DE460ULL); constraints=&G(uint8_t,0x1B4037C40ULL);
  hit=&G(float,0x151A84880ULL);
  uint8_t *streets=&G(uint8_t,0x195AD08E0ULL), *stops=&G(uint8_t,0x15B1AC808ULL);
  memset(&G(uint8_t,0x17CE4B5F8ULL),0,64*64*36);
  for(int v=0;v<512;v++) puti(vehicles+0x5168*v,0);
  for(int c=0;c<cases;c++){ printf("== case %d\n",c); stub_rs=rnd32(); wild=c%5==4?12:c%5==3?0:60;
    float centre[3]={frand(100.0f,400.0f),frand(-40.0f,60.0f),frand(100.0f,400.0f)};
    int active[NSLOT], nactive=0;
    for(int s=0;s<NSLOT;s++){ int v=slots[s]; uint8_t *vp=vehicles+0x5168*v; active[s]=rnd()%3!=0; puti(vp,0); if(!active[s]) continue; nactive++;
      fill(vp,0x100); fill(vp+0x27F0,0x40); fill(vp+0x3600,0x7A0); fill(vp+0x4EC0,0x5168-0x4EC0);
      int32_t type=types[rnd()%9];
      puti(vp,1+(int32_t)(rnd()%2)); puti(vp+4,type); puti(vp+8,rnd()%5==0?3:(int32_t)(rnd()%3)); if(type==12&&rnd()%2) puti(vp+8,2);
      puti(vp+0xC,rnd()%5==0?0:(int32_t)(1+rnd()%100)); puti(vp+0x1C,(int32_t)(rnd()%5000)); puti(vp+0x20,rnd()%5==0); puti(vp+0x28,s);
      for(int k=0;k<3;k++){ putf(vp+0x2C+4*k,centre[k]+pick(-6.0f,6.0f)); float vel=pick(-0.6f,0.6f); putf(vp+0x8C+4*k,vel); putf(vp+0x98+4*k,rnd()%3==0?vel+pick(-0.2f,0.2f):vel+pick(-0.02f,0.02f)); }
      if(rnd()%12==0) putf(vp+0x30,pick(-40.0f,-30.0f));
      rotation(vp+0x44);
      for(int k=0;k<3;k++){ float a=centre[k]-frand(-1.0f,9.0f), b=centre[k]+frand(-1.0f,9.0f); putf(vp+0xB0+4*k,a); putf(vp+0xBC+4*k,b); puti(vp+0xC8+4*k,(int32_t)(rnd()%60)); puti(vp+0xD4+4*k,(int32_t)(rnd()%60)); }
      if(wild && rnd()%20==0) putf(vp+0xB0+4*(rnd()%6),specials[10+rnd()%3]);
      set_body(s,centre);
      // controls: finite steering (the C runtime's tan reports others through machinery the loader does not set up)
      putf(vp+0x3600,(float)(rnd()%3)); putf(vp+0x3604,frand(-1.2f,1.2f)); putf(vp+0x3608,(float)((int)(rnd()%3)-1)); putf(vp+0x360C,pick(-1.0f,1.0f));
      { uint32_t f=rnd()%10==0?0xFFFFFFFFu:(rnd()&7); memcpy(vp+0x3620,&f,4); }
      puti(vp+0x3628,rnd()%6==0?slots[rnd()%NSLOT]:-1);
      putf(vp+0x3898,pick(0.0f,14.0f)); putf(vp+0x389C,pick(0.0f,1.2f)); puti(vp+0x38BC,(int32_t)(rnd()%6)-1); puti(vp+0x38C0,(int32_t)(rnd()%6)-1); putf(vp+0x38D0,pick(0.0f,1.0f));
      puti(vp+0x3938,(int32_t)(rnd()%31)); putf(vp+0x50D4,frand(0.2f,1.0f)); putf(vp+0x50D8,1.0f);
      // wheels on bodies of their own, kept at sane places (their cells are walked)
      int nw=type==13||rnd()%4==0?0:(int)(1+rnd()%4); puti(vp+0x3940,nw);
      for(int w=0;w<6;w++){ uint8_t *wp=vp+0x3944+0xAC*w; int b=8+6*s+w; puti(wp,b); set_body(b,centre); putf(wp+4,frand(0.0f,0.5f)); putf(wp+0x34,frand(0.2f,1.0f));
        for(int k=0;k<3;k++) putf(wp+0x24+4*k,pick(-2.0f,2.0f)); putf(wp+0x40,pick(-1.0f,1.0f)); putf(wp+0x44,pick(-3.0f,3.0f)); putf(wp+0x74,pick(-0.5f,0.5f)); }
      // a swivelling part (type 17)
      puti(vp+0x4EC4,rnd()%3==0?0:(int32_t)(rnd()%3)); puti(vp+0x4EC8,48+s); set_body(48+s,centre); puti(vp+0x4EFC,s);
      // train: bogies, rail street, timetable
      puti(vp+0x4FBC,56+s); puti(vp+0x4FC4,8+s); puti(vp+0x4FC8,64+s); puti(vp+0x4FD0,16+s); set_body(56+s,centre); set_body(64+s,centre);
      puti(vp+0x4FAC,rnd()%3==0?899:(int32_t)(rnd()%900)); puti(vp+0x4FB0,rnd()%3==0?-1:(int32_t)(rnd()%4)); puti(vp+0x4FB4,(int32_t)(rnd()%3)); puti(vp+0x4FB8,(int32_t)(rnd()%4));
      puti(vp+0x2808,(int32_t)(rnd()%2)); putf(vp+0x5140,pick(0.0f,2.5f));
      if(type==13 && rnd()%2){ // a train near its stop, slow
        for(int k=0;k<3;k++){ putf(vp+0x8C+4*k,pick(-0.02f,0.02f)); } } }
    for(int i=0;i<24;i++) fill(constraints+0x90*i,0x90);
    // hull corners of the types in use
    for(int t=0;t<9;t++){ uint8_t *tp=&G(uint8_t,0x19028EC54ULL+0x2C040ULL*(uint64_t)types[t]); int n=(int)(rnd()%4); puti(tp,n); for(int i=0;i<n*3;i++) putf(tp+4+4*i,pick(-3.0f,3.0f)); }
    // train stops and rail streets (only what the train's engine reads)
    G(int32_t,0x15B1AC800ULL)=(int32_t)(1+rnd()%4);
    for(int i=0;i<5;i++){ for(int k=0;k<3;k++) putf(stops+20*i+4*k,rnd()%2?centre[k]+pick(-40.0f,40.0f):centre[k]+pick(-400.0f,400.0f)); }
    for(int i=0;i<4;i++){ uint8_t *sp=streets+61728*i; puti(sp+0xF0FC,(int32_t)(rnd()%4)); puti(sp+0xF100,(int32_t)(rnd()%4)); putf(sp+0xF11C,pick(0.0f,1.0f)); }
    // items
    for(int i=0;i<12;i++){ uint8_t *ip=items+0x1B80*i; fill(ip,0x120); puti(ip,1); puti(ip+0x14,(int32_t)(rnd()%4)); puti(ip+0x58,80+i);
      for(int k=0;k<3;k++){ float a=centre[k]-pick(-3.0f,9.0f), b=centre[k]+pick(-3.0f,9.0f); putf(ip+0x104+4*k,a); putf(ip+0x110+4*k,b); } }
    for(int t=0;t<4;t++) G(int32_t,0x182A7E180ULL+0x13D0ULL*(uint64_t)t)=(int32_t)(rnd()%3);
    G(int32_t,0x1AD04ADC0ULL)=rnd()%4!=0; G(int32_t,0x183EBFD34ULL)=(int32_t)rnd32(); G(int32_t,0x183E936D0ULL)=(int32_t)rnd32(); G(int32_t,0x183E9361CULL)=(int32_t)rnd32();
    G(float,0x1873DE440ULL)=rnd()%3==0?centre[1]+20.0f:pick(-60.0f,0.0f); G(int32_t,0x183F7CBECULL)=(int32_t)rnd32(); G(int32_t,0x16B2A2EA0ULL)=(int32_t)rnd32();
    int32_t ec=rnd()%20==0?0xFFF0:(int32_t)(rnd()%20); G(int32_t,0x189C1DC64ULL)=ec; memset(events+0x80*(size_t)ec,0xAB,0x80*40);
    // edges: boxes that touch exactly (vehicle and item, vehicle and vehicle), a body exactly at the water level
    if(c%3==0){ int a=(int)(rnd()%NSLOT), b=(int)(rnd()%NSLOT), k=(int)(rnd()%3), i=(int)(rnd()%12); uint8_t *ap=vehicles+0x5168*slots[a], *bp=vehicles+0x5168*slots[b], *ip=items+0x1B80*i;
      switch(rnd()%5){
        case 0: memcpy(ip+0x104+4*k,ap+0xBC+4*k,4); break;          // item's low side on the vehicle's high side
        case 1: memcpy(ip+0x110+4*k,ap+0xB0+4*k,4); break;          // item's high side on the vehicle's low side
        case 2: if(a!=b) memcpy(bp+0xB0+4*k,ap+0xBC+4*k,4); break;
        case 3: if(a!=b) memcpy(bp+0xBC+4*k,ap+0xB0+4*k,4); break;
        default: memcpy(&G(float,0x1873DE440ULL),bodies+0xBC*a+0x1C,4); break; } }
    for(int k=0;k<8;k++) hit[k]=frand(-5.0f,5.0f);
    sweep_hits=0;
    if(c%12==11){ float pos[3]={pick(-9.0f,9.0f),pick(-9.0f,9.0f),pick(-9.0f,9.0f)}, vel[3]={pick(-1.0f,1.0f),pick(-1.0f,1.0f),pick(-1.0f,1.0f)};
      uint32_t layer=rnd()%6==0?(uint32_t)rnd32():rnd()%5, y=rnd()%64, z=rnd()%64, layout=rnd()%4==0?rnd32():(0x80000000u|(rnd()&0x1FFFFF)); int32_t x=rnd()%8==0?-1:(int32_t)(rnd()%64), part=(int32_t)((rnd()%3?0x10000u:0u)|(rnd()%40)|(rnd()%5==0?rnd32()&0xFFFE0000u:0u));
      const float *pp=rnd()%5==0?NULL:pos, *vv=rnd()%5==0?NULL:vel; int r;
#ifdef ENGINE
      r=world_break_block_part(layer,x,y,z,layout,part,pp,vv);
#else
      r=((MS int(*)(uint32_t,int32_t,uint32_t,uint32_t,uint32_t,int32_t,const float*,const float*))F(0x14000B7D0ULL))(layer,x,y,z,layout,part,pp,vv);
#endif
      printf("break -> %d\n",r);
    } else {
#ifdef ENGINE
      vehicle_update_all();
#else
      ((MS void(*)(void))F(0x140108930ULL))();
#endif
    }
    printf("stage %d soft %d events %08x active %d sweeps hit %d\n",G(int32_t,0x183F7CBECULL),G(int32_t,0x16B2A2EA0ULL),G(uint32_t,0x189C1DC64ULL),nactive,sweep_hits);
    for(int e=0;e<40;e++){ const uint8_t *ep=events+0x80*((size_t)ec+e); if(geti(ep)==(int32_t)0xABABABAB) break; prw("event",e,ep,0x38); }
    for(int s=0;s<NSLOT;s++){ if(!active[s]) continue; int v=slots[s]; const uint8_t *vp=vehicles+0x5168*v;
      prw("vehicle",v,vp,0xE0); pri("  ints",vp,8); prw("  windows",v,vp+0x27FC,0x20); prw("  controls",v,vp+0x3600,0x2C); prw("  drive",v,vp+0x3894,0xAC);
      for(int w=0;w<6;w++) prw("  wheel",w,vp+0x3944+0xAC*w,0xAC);
      prw("  tail",v,vp+0x4EC0,0x5168-0x4EC0); pri("  train",vp+0x4FAC,4); printf("  hash %08x\n",hash(vp,0x5168));
      prw("  body",s,bodies+0xBC*s,0xBC); for(int w=0;w<6;w++) printf(" %08x",hash(bodies+0xBC*(8+6*s+w),0xBC)); printf(" %08x %08x %08x\n",hash(bodies+0xBC*(48+s),0xBC),hash(bodies+0xBC*(56+s),0xBC),hash(bodies+0xBC*(64+s),0xBC)); }
    for(int i=0;i<24;i++) prw("constraint",i,constraints+0x90*i,0x90);
    for(int i=0;i<12;i++) pri("item",items+0x1B80*i,4);
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
