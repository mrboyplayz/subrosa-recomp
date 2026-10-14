// Putting a vehicle type together (edges 0x14010C850, parts 0x14010C900, wheels 0x14010CAC0), a vehicle's turning
// from its points (0x1400A48D0), a train at every train stop (0x140061950) and a random direction in a plane
// (0x1400A5510), with identical vehicle types, vehicles, points, train stops and noise seed in two processes. Making a
// vehicle (0x14005BCA0) is replaced in both by the same recording stub.
// Mode "engine": src/engine/vehicle_type_build.c, world_vehicles.c, vehicle_train.c, human_ragdoll.c.
#include "peload.h"
#ifdef ENGINE
MS void vehicle_type_add_edge(int type, uint32_t value, uint32_t point_a, uint32_t point_b);
MS void vehicle_type_add_part(int type, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
MS int vehicle_type_add_wheel(int type, uint32_t unknown_0, int point_a, int point_b, const float where[2], uint32_t radius, uint32_t mass, uint32_t unknown_1c, float extension, uint32_t spring, uint32_t damping, uint32_t grip);
MS void world_vehicle_spin_from_points(int vehicle, const float origin[3]);
MS void vehicle_spawn_trains(void);
MS void human_random_direction_2d(float v[2], float length, float add);
#endif
static uint32_t rs=60606; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float frand(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFFFF)/16777216.0f; }
static float odd(float lo,float hi){ unsigned k=rnd()%40; return k==0?NAN:k==1?0.0f:k==2?INFINITY:frand(lo,hi); }
#define G(type,addr) (*(type*)D(addr))
static uint32_t canon(float f){ uint32_t w; memcpy(&w,&f,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; return w; }
static uint32_t hash(const void *p,size_t n){ uint32_t h=2166136261u; const uint8_t *b=p; for(size_t i=0;i+4<=n;i+=4){ float f; memcpy(&f,b+i,4); h=(h^canon(f))*16777619u; } return h; }
static void prw(const char *t,const void *p,size_t n){ printf(" %s",t); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ float f; memcpy(&f,b+k,4); printf(" %08x",canon(f)); } }
#define NTYPE 4
#define TYPE(t) (&G(uint8_t,0x192E9A680ULL+0x185C0ULL*(uint64_t)(t)))
#define VEH(v) (&G(uint8_t,0x15F2D9200ULL+0x5168ULL*(uint64_t)(int64_t)(v)))
#define POINT(p) (&G(uint8_t,0x151A84920ULL+0xF0ULL*(uint64_t)(p)))
static void pi(uint8_t *p,int off,int32_t v){ memcpy(p+off,&v,4); }
static void pf(uint8_t *p,int off,float v){ memcpy(p+off,&v,4); }
static int32_t gi(const uint8_t *p,int off){ int32_t v; memcpy(&v,p+off,4); return v; }
static uint32_t log_hash; static int made;
static MS uint64_t s_create_vehicle(int type,const float *pos,const float *vel,const float *rot,uint32_t color){
  int32_t head[3]={type,(int32_t)color,vel!=NULL}; log_hash=(log_hash^hash(head,12))*16777619u; log_hash=(log_hash^hash(pos,12))*16777619u; log_hash=(log_hash^hash(rot,36))*16777619u;
  made++; return made%5==0?(uint64_t)0xFFFFFFFFu:(uint64_t)((log_hash>>7)%8); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  hook(0x14005BCA0ULL,s_create_vehicle);
  for(int c=0;c<cases;c++){
    int type=(int)(rnd()%NTYPE); uint8_t *tp=TYPE(type);
    printf("== case %d",c);
    switch(c%6){
      case 0: { // an edge: few points, so that pairs come again both ways round
        int n=(int)(rnd()%12); pi(tp,0x854,n); for(int k=0;k<14;k++){ pi(tp,0x858+12*k,(int32_t)rnd32()); pi(tp,0x858+12*k+4,(int32_t)(rnd()%5)); pi(tp,0x858+12*k+8,(int32_t)(rnd()%5)); }
        uint32_t v=rnd32(), a=rnd()%5, b=rnd()%5;
#ifdef ENGINE
        vehicle_type_add_edge(type,v,a,b);
#else
        ((MS void(*)(int,uint32_t,uint32_t,uint32_t))F(0x14010C850ULL))(type,v,a,b);
#endif
        printf(" edge %u %u: count %d edges %08x\n",a,b,gi(tp,0x854),hash(tp+0x858,12*14)); } break;
      case 1: { int n=(int)(rnd()%10); pi(tp,0x1458,n); for(int k=0;k<64*12;k+=4) pi(tp,0x145C+k,(int32_t)rnd32());
        uint32_t a[7]; for(int k=0;k<7;k++) a[k]=rnd32();
#ifdef ENGINE
        vehicle_type_add_part(type,a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
#else
        ((MS void(*)(int,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t))F(0x14010C900ULL))(type,a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
#endif
        printf(" part: count %d",gi(tp,0x1458)); prw("new",tp+0x145C+64*n,64); printf(" all %08x\n",hash(tp+0x145C,64*12)); } break;
      case 2: { int n=(int)(rnd()%6); pi(tp,0x17878,n); for(int k=0;k<80*8;k+=4) pi(tp,0x1787C+k,(int32_t)rnd32());
        for(int k=0;k<8;k++){ pf(tp,0x48+20*k,odd(-3,3)); pf(tp,0x48+20*k+4,odd(-3,3)); pf(tp,0x48+20*k+8,odd(-3,3)); }
        uint32_t a[7]; for(int k=0;k<7;k++) a[k]=rnd32(); int pa=(int)(rnd()%8), pb=(int)(rnd()%8); float where[2]={frand(-1,1),odd(0,1)}, ext=odd(-1,1); int r;
#ifdef ENGINE
        r=vehicle_type_add_wheel(type,a[0],pa,pb,where,a[1],a[2],a[3],ext,a[4],a[5],a[6]);
#else
        r=((MS int(*)(int,uint32_t,int,int,const float*,uint32_t,uint32_t,uint32_t,float,uint32_t,uint32_t,uint32_t))F(0x14010CAC0ULL))(type,a[0],pa,pb,where,a[1],a[2],a[3],ext,a[4],a[5],a[6]);
#endif
        printf(" wheel %d: count %d",r,gi(tp,0x17878)); prw("new",tp+0x1787C+80*n,80); printf(" all %08x\n",hash(tp+0x1787C,80*8)); } break;
      case 3: { int v=(int)(rnd()%6); uint8_t *vp=VEH(v); for(int k=0;k<9;k++) pf(vp,0x44+4*k,odd(-1,1)); for(int k=0;k<3;k++) pf(vp,0xA4+4*k,frand(-9,9));
        int n=rnd()%8==0?-(int)(rnd()%3):(int)(rnd()%6); pi(vp,0xEC,n); for(int k=0;k<6;k++) pi(vp,0xF0+4*k,(int32_t)(rnd()%32));
        for(int p=0;p<32;p++){ uint8_t *pp=POINT(p); for(int k=0;k<3;k++){ pf(pp,0x14+4*k,odd(-20,20)); pf(pp,0x2C+4*k,odd(-2,2)); } }
        float origin[3]={odd(-20,20),frand(-20,20),frand(-20,20)};
#ifdef ENGINE
        world_vehicle_spin_from_points(v,origin);
#else
        ((MS void(*)(int,const float*))F(0x1400A48D0ULL))(v,origin);
#endif
        prw("spin",vp+0xA4,12); printf("\n"); } break;
      case 4: { int n=rnd()%8==0?-1:(int)(rnd()%5); G(int32_t,0x15B1AC800ULL)=n; uint8_t *sp=&G(uint8_t,0x15B1AC808ULL);
        for(int k=0;k<5;k++){ pf(sp,20*k,frand(-500,500)); pf(sp,20*k+4,frand(-50,50)); pf(sp,20*k+8,frand(-500,500)); pf(sp,20*k+12,frand(-7,7)); pi(sp,20*k+16,(int32_t)rnd32()); }
        for(int v=-1;v<8;v++) pi(VEH(v),0x4FB8,-9); log_hash=2166136261u; made=(int)(rnd()%5);
#ifdef ENGINE
        vehicle_spawn_trains();
#else
        ((MS void(*)(void))F(0x140061950ULL))();
#endif
        printf(" trains %d: made %d log %08x stops",n,made,log_hash); for(int v=-1;v<8;v++) printf(" %d",gi(VEH(v),0x4FB8)); printf("\n"); } break;
      default: { G(uint32_t,0x1602E12C0ULL)=rnd()%4==0?rnd()%8:rnd32(); float v[2]={frand(-9,9),frand(-9,9)}, len=odd(0,5), add=odd(-2,2);
#ifdef ENGINE
        human_random_direction_2d(v,len,add);
#else
        ((MS void(*)(float*,float,float))F(0x1400A5510ULL))(v,len,add);
#endif
        prw("direction",v,8); printf(" seed %08x\n",G(uint32_t,0x1602E12C0ULL)); } break; }
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
