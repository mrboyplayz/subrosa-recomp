// Vehicle drivetrain 0x140107ED0 (engine curve, brakes, driven wheels) on identical vehicles, wheels and bodies in
// two processes, with the wheels as bodies and without. Mode "engine": src/engine/world_vehicles.c (world_drive_vehicles).
#include "peload.h"
#ifdef ENGINE
MS void world_drive_vehicles(void);
#endif
static uint32_t rs=2112; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,0.5f,2.0f,1e-6f,-1e-6f};
static float rf(float scale){ unsigned k=rnd()%50; if(k==0) return special[rnd()%14]; if(k==1){ uint32_t b=rnd32(); float f; memcpy(&f,&b,4); return f; } return scale*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
#define G(type,addr) (*(type*)D(addr))
#define NV 512
#define NB 24
static void pr(const char *t,int i,const void *p,size_t n){ printf("%s %d:",t,i); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ uint32_t w; memcpy(&w,b+k,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; printf(" %08x",w); } printf("\n"); }
static void put(uint8_t *p,int off,int32_t v){ memcpy(p+off,&v,4); }
static void putf(uint8_t *p,int off,float v){ memcpy(p+off,&v,4); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):3000;
  uint8_t *vehicles=&G(uint8_t,0x15F2D9200ULL), *bodies=&G(uint8_t,0x1449816E0ULL);
  int on[3];
  for(int c=0;c<cases;c++){ printf("== case %d\n",c);
    for(int v=0;v<NV;v++) put(vehicles+0x5168*v,0,0);
    G(int32_t,0x16B27ECF4ULL)=rnd()%2?0:(int32_t)(1+rnd()%3);
    for(int j=0;j<3;j++){ int v=on[j]=(int)(rnd()%NV); uint8_t *p=vehicles+0x5168*v;
      static const int32_t types[]={7,9,12,0,3,7,9,1};
      put(p,0,1+(int32_t)(rnd()%2)); put(p,4,types[rnd()%8]);
      for(int k=0x44;k<0x68;k+=4) putf(p,k,rf(1.0f));
      int32_t nw=(int32_t)(rnd()%6)-(rnd()%9==0?1:0); put(p,0x3940,nw);
      for(int k=0x3894;k<0x38E0;k+=4) putf(p,k,rf(2.0f));
      /* engine speeds over the whole curve: x = speed * 3600 * ~2.3e-5 */
      putf(p,0x3898,rf(rnd()%2?14.0f:0.01f)); putf(p,0x389C,rf(1.0f)*0.5f+0.5f); putf(p,0x38D4,rf(1.5f));
      if(rnd()%5==0) putf(p,0x38C8,0.0f); if(rnd()%9==0) putf(p,0x3898,rf(1e-5f)); if(rnd()%9==0) putf(p,0x38A4,rf(1e-5f));
      int32_t nd=(int32_t)(rnd()%5)-(rnd()%9==0?1:0); put(p,0x38E0,nd); for(int k=0;k<5;k++) put(p,0x38E4+4*k,(int32_t)(rnd()%(nw>0?nw:1)));
      for(int w=0;w<6;w++){ uint8_t *q=p+0x3944+172*w; for(int k=4;k<172;k+=4) putf(q,k,rf(1.0f)); put(q,0,(int32_t)(rnd()%NB)); } }
    for(int b=0;b<NB;b++){ uint8_t *q=bodies+0xBC*b; for(int k=0;k<0xBC;k+=4) putf(q,k,rf(1.0f)); }
    printf("flag %d\n",G(int32_t,0x16B27ECF4ULL)); for(int j=0;j<3;j++){ uint8_t *p=vehicles+0x5168*on[j]; pr("in-veh",on[j],p,8); pr("in-drive",on[j],p+0x3894,0xA0); for(int w=0;w<6;w++) pr("in-wheel",w,p+0x3944+172*w,172); }
#ifdef ENGINE
    world_drive_vehicles();
#else
    ((MS void(*)(void))F(0x140107ED0ULL))();
#endif
    for(int j=0;j<3;j++){ uint8_t *p=vehicles+0x5168*on[j]; pr("drive",on[j],p+0x3894,0x50); for(int w=0;w<6;w++) pr("wheel",w,p+0x3944+172*w,172); }
    for(int b=0;b<NB;b++) pr("body",b,bodies+0xBC*b,0xBC);
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
