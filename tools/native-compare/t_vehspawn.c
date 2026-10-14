// Making a vehicle (0x14005BCA0) with identical vehicle, body, bond and constraint pools, vehicle types, events and
// connection records in two processes. Nothing is stubbed: the body and bond creators run for real.
// Mode "engine": src/engine/vehicle_spawn.c (vehicle_create).
#include "peload.h"
#ifdef ENGINE
MS int vehicle_create(int type, const float *position, const float *velocity, const float *rotation, uint32_t color);
#endif
static uint32_t rs=1977; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float frand(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFFFF)/16777216.0f; }
#define G(type,addr) (*(type*)D(addr))
static uint32_t canon(float f){ uint32_t w; memcpy(&w,&f,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; return w; }
static void prw(const char *t,const void *p,size_t n){ printf("%s:",t); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ float f; memcpy(&f,b+k,4); printf(" %08x",canon(f)); } printf("\n"); }
static uint32_t hash(const void *p,size_t n){ uint32_t h=2166136261u; const uint8_t *b=p; for(size_t i=0;i+4<=n;i+=4){ float f; memcpy(&f,b+i,4); h=(h^canon(f))*16777619u; } return h; }
static const float specials[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,INFINITY,-INFINITY,NAN};
static float pick(float lo,float hi){ if(rnd()%30==0) return specials[rnd()%9]; return frand(lo,hi); }
static void fill(uint8_t *p,size_t n){ for(size_t k=0;k+4<=n;k+=4){ uint32_t w=rnd32(); memcpy(p+k,&w,4); } }
static void fillf(uint8_t *p,size_t n,float lo,float hi){ for(size_t k=0;k+4<=n;k+=4){ float f=pick(lo,hi); memcpy(p+k,&f,4); } }
static void puti(uint8_t *p,int32_t i){ memcpy(p,&i,4); }
static const int types[]={0,5,12,13,15,17,12,13};
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):2500;
  uint8_t *vehicles=&G(uint8_t,0x15F2D9200ULL), *bodies=&G(uint8_t,0x1449816E0ULL), *bonds=&G(uint8_t,0x1B4287C80ULL), *constraints=&G(uint8_t,0x1B4037C40ULL),
          *events=&G(uint8_t,0x1873DE460ULL);
  for(int i=0;i<8192;i++) puti(bodies+0xBC*i,1); for(int i=0;i<0x4000;i++) puti(bonds+0xF4*i,1);
  for(int c=0;c<cases;c++){
    int slot=rnd()%25==0?-1:rnd()%6==0?511:(int)(rnd()%6);
    for(int v=0;v<512;v++) puti(vehicles+0x5168*v,slot<0||v<slot?1+(int32_t)(rnd()%2):v==slot?0:(int32_t)(rnd()%2));
    if(slot>=0) fill(vehicles+0x5168*slot+4,0x5164);
    int type=types[rnd()%8]; uint8_t *tp=&G(uint8_t,0x192E9A680ULL+0x185C0ULL*(uint64_t)type);
    puti(tp+8,(int32_t)(rnd()%4)); { float m=pick(50.0f,3000.0f); memcpy(tp+0x38,&m,4); }
    int nparts=(int)(rnd()%4); puti(tp+0x1458,nparts); fill(tp+0x145C,64*4);
    { float a=pick(0.0f,2.0f); memcpy(tp+0x17874,&a,4); }
    int nwheels=rnd()%5==0?0:(int)(rnd()%7); puti(tp+0x17878,nwheels); fill(tp+0x1787C,80*6);
    for(int w=0;w<6;w++){ uint8_t *wp=tp+0x1787C+80*w; fillf(wp+0x14,12,0.1f,40.0f); fillf(wp+0x2C,16,-1.0f,3.0f); fillf(wp+0x44,12,-3.0f,3.0f); }
    fillf(tp+0x1827C,8,0.2f,1.5f);
    int nseats=rnd()%4==0?(int)(rnd()%4):(int)(rnd()%10); if(rnd()%20==0) nseats=-2; puti(tp+0x18318,nseats); fill(tp+0x1831C,12*10);
    fillf(tp+0x18528,12,-1.0f,1.0f); fillf(tp+0x18540,12,-1.0f,900.0f);
    // free bodies and bonds from a random place on, with rubbish in them; now and then too few
    int body0=(int)(rnd()%40), nbody=rnd()%6==0?(int)(rnd()%4):12, bond0=(int)(rnd()%40), nbond=rnd()%12==0?(int)(rnd()%3):6;
    for(int i=0;i<60;i++){ puti(bodies+0xBC*i,1); fill(bodies+0xBC*i+4,0xB8); puti(bonds+0xF4*i,1); fill(bonds+0xF4*i+4,0xF0); fill(constraints+0x90*i,0x90); }
    fill(bodies-0xBC,0xBC);   // what lies before the bodies: a helicopter made with no body left writes there
    for(int i=0;i<nbody;i++) puti(bodies+0xBC*(body0+i),0); for(int i=0;i<nbond;i++) puti(bonds+0xF4*(bond0+i),0);
    float pos[3]={pick(-500,500),pick(-50,50),pick(-500,500)}, vel[3]={pick(-1,1),pick(-1,1),pick(-1,1)}, rot[9]; for(int k=0;k<9;k++) rot[k]=pick(-1,1);
    uint32_t color=rnd32(); const float *vp=rnd()%4==0?NULL:vel;
    G(int32_t,0x1AD04ADC0ULL)=rnd()%4!=0; G(int32_t,0x183EBFD34ULL)=(int32_t)rnd32();
    int32_t ec=rnd()%9==0?0xFFFF:(int32_t)(rnd()%20); G(int32_t,0x189C1DC64ULL)=ec; memset(events+0x80*(size_t)ec,0xAB,0x80*2);
    int nconn=rnd()%5==0?-1:(int)(rnd()%4); G(int32_t,0x1AD04ADA0ULL)=nconn;
    for(int k=0;k<4;k++) for(int v=0;v<512;v++) G(int32_t,0x1A8E3DBC0ULL+0x2E1E0ULL*(uint64_t)k+8ULL*(uint64_t)v)=(int32_t)(rnd()&0xFF);
    int r;
#ifdef ENGINE
    r=vehicle_create(type,pos,vp,rot,color);
#else
    r=((MS int(*)(int,const float*,const float*,const float*,uint32_t))F(0x14005BCA0ULL))(type,pos,vp,rot,color);
#endif
    printf("== case %d type %d slot %d -> %d\n",c,type,slot,r);
    if(r>=0&&r<512){ const uint8_t *vp2=vehicles+0x5168*r; prw("vehicle",vp2,0x100); prw("parts",vp2+0x7F8,0x108); prw("controls",vp2+0x3600,0x60); prw("drive",vp2+0x3894,0xB0);
      for(int w=0;w<6;w++) prw("wheel",vp2+0x3944+0xAC*w,0xAC);
      prw("tail",vp2+0x4FA0,0x40); prw("seats",vp2+0x50D4,0x94); printf("whole %08x\n",hash(vp2,0x5168)); }
    prw("before bodies",bodies-0xBC,0xBC); for(int i=0;i<12;i++) prw("body",bodies+0xBC*(body0+i),0xBC);
    for(int i=0;i<6;i++){ prw("bond",bonds+0xF4*(bond0+i),0xF4); printf("constraint %08x\n",hash(constraints+0x90*(bond0+i),0x90)); }
    printf("events %08x\n",G(uint32_t,0x189C1DC64ULL)); prw("event",events+0x80*(size_t)ec,0x80);
    { uint32_t h=2166136261u; for(int k=0;k<4;k++) for(int v=0;v<512;v++) h=(h^(uint32_t)G(int32_t,0x1A8E3DBC0ULL+0x2E1E0ULL*(uint64_t)k+8ULL*(uint64_t)v))*16777619u; printf("connections %08x\n",h); }
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
