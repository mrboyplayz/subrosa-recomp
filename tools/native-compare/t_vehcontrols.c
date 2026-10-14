// Car controls (0x14010AA70) and the sound event (0x1400515E0) with identical vehicles and event list in two
// processes. Mode "engine": src/engine/vehicle_controls.c, event_sound.c.
#include "peload.h"
#ifdef ENGINE
MS void vehicle_update_car_controls(int vehicle);
MS void event_sound(int sound, const float position[3], float volume, float pitch);
#endif
static uint32_t rs=777; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float frand(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFFFF)/16777216.0f; }
#define G(type,addr) (*(type*)D(addr))
static void pr(const char *t,int i,const void *p,size_t n){ printf("%s %d:",t,i); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ uint32_t w; memcpy(&w,b+k,4); printf(" %08x",w); } printf("\n"); }
static const float specials[]={0.0f,-0.0f,0.125f,0.5f,-0.5f,0.875f,1.0f,1.5f,2.0f,-1.0f,1e-30f,-1e-30f,1e30f,INFINITY,-INFINITY,NAN,4.363323f,10.471975f,7.8539815f,1.5707964f};
static float pick(float lo,float hi){ unsigned k=rnd()%8; if(k==0) return specials[rnd()%20]; if(k==1){ uint32_t w=rnd32(); float f; memcpy(&f,&w,4); return f; } return frand(lo,hi); }
// The C runtime's tan and atan report not-a-number and infinite arguments through machinery the loader does not set up.
static float fin(float lo,float hi){ float f=pick(lo,hi); return isfinite(f)?f:lo; }
// atan2 (0x14023EDE4) is replaced in both programs by the same routine: the recompiled client's copy is compared with the
// original's separately (t_vehatan.c).
static MS double same_atan2(double y,double x){ return atan2(y,x); }
static void putf(uint8_t *p,float f){ memcpy(p,&f,4); }
static void puti(uint8_t *p,int32_t i){ memcpy(p,&i,4); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):40000;
  hook(0x14023EDE4ULL,same_atan2);
  uint8_t *vehicles=&G(uint8_t,0x15F2D9200ULL), *events=&G(uint8_t,0x1873DE460ULL);
  static const int32_t gears[]={-1,0,1,2,3,4,5,-2,7,0x7FFFFFFF,(int32_t)0x80000000};
  for(int c=0;c<cases;c++){
    int v=rnd()%4==0?511:(int)(rnd()%8); uint8_t *p=vehicles+0x5168*v;
    for(int k=0;k<0xA0;k+=4){ uint32_t w=rnd32(); memcpy(p+k,&w,4); }
    for(int k=0x3600;k<0x3A60;k+=4){ uint32_t w=rnd32(); memcpy(p+k,&w,4); }
    puti(p+4,rnd()%3==0?9:(int32_t)(rnd()%16)); puti(p+0xC,rnd()%4==0?0:rnd()%8==0?-1:(int32_t)(1+rnd()%100)); puti(p+0x20,rnd()%4==0);
    putf(p+0x3600,rnd()%2?(float)(rnd()%3):pick(-1,3)); putf(p+0x3604,fin(-1.2f,1.2f)); putf(p+0x3608,rnd()%2?(float)((int)(rnd()%3)-1):pick(-1.5f,1.5f)); putf(p+0x360C,pick(-1,1));
    { uint32_t f=rnd()%10==0?0xFFFFFFFFu:rnd()%4==0?rnd32():(rnd()&7); memcpy(p+0x3620,&f,4); }
    putf(p+0x3898,pick(0,14)); putf(p+0x389C,pick(0,1.2f)); putf(p+0x38D0,pick(0,1)); putf(p+0x38D4,pick(0,2));
    puti(p+0x38BC,gears[rnd()%(rnd()%3?6:11)]); puti(p+0x38C0,gears[rnd()%(rnd()%3?6:11)]); putf(p+0x38C8,pick(-11,11));
    puti(p+0x3938,rnd()%3==0?0:rnd()%5==0?-3:(int32_t)(rnd()%31));
    putf(p+0x50D4,fin(0.2f,1.0f)); putf(p+0x50D8,rnd()%3?1.0f:fin(0.5f,1.5f));
    G(int32_t,0x1AD04ADC0ULL)=rnd()%4!=0; G(int32_t,0x183EBFD34ULL)=(int32_t)rnd32(); G(int32_t,0x183E936D0ULL)=(int32_t)rnd32();
    int32_t ec=rnd()%9==0?0xFFFF:(int32_t)(rnd()%20); if(rnd()%11==0) ec|=0x30000; G(int32_t,0x189C1DC64ULL)=ec;
    memset(events+0x80*(size_t)ec,0xAB,0x80*2);
    if(c%8==7){ float pos[3]={pick(-9,9),pick(-9,9),pick(-9,9)}, vol=pick(0,2), pitch=pick(0,2); int32_t s=(int32_t)rnd32();
#ifdef ENGINE
      event_sound(s,pos,vol,pitch);
#else
      ((MS void(*)(int,const float*,float,float))F(0x1400515E0ULL))(s,pos,vol,pitch);
#endif
    } else {
#ifdef ENGINE
      vehicle_update_car_controls(v);
#else
      ((MS void(*)(int))F(0x14010AA70ULL))(v);
#endif
    }
    printf("== case %d vehicle %d\n",c,v);
    pr("vehicle",v,p,0xA0); pr("controls",v,p+0x3600,0x24); pr("drive",v,p+0x3894,0x3A60-0x3894); pr("steer",v,p+0x50D4,8);
    printf("events %08x\n",G(uint32_t,0x189C1DC64ULL)); pr("event",0,events+0x80*(size_t)ec,0x100);
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
