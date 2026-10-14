// Runs the camera routines (letterbox, viewport and scissor, projection/view/model matrices) with identical
// inputs in two processes and prints, per case, the OpenGL calls made, the matrices and the display state.
// Mode "native": the original executable's routines. Mode "engine": src/engine/camera.c on the recomp's memory.
#include "peload.h"
#include "gltrace.h"
#ifdef ENGINE
#define E_ MS
E_ void camera_update_letterbox(void); E_ void camera_begin_2d(void);
E_ void camera_begin_orthographic(int,int,int,int,float,float,float); E_ void camera_begin_perspective(int,int,int,int,float,float,float);
E_ void camera_set_view(const float*,const float*); E_ void camera_set_model(const float*,const float*);
E_ void camera_scale_model(float,float,float); E_ void camera_set_scissor(float,float,float,float);
#define CALL(engine,addr,type,...) engine(__VA_ARGS__)
#else
#define CALL(engine,addr,type,...) ((MS type)F(addr))(__VA_ARGS__)
#endif
static uint32_t rs=4242; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,3.14159274f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1.17549435e-38f,1e-45f,0.5f,2.0f,1280.0f,720.0f};
static float rf(void){ unsigned k=rnd()%24; if(k==0) return special[rnd()%16]; if(k==1){ uint32_t b=rnd32(); float f; memcpy(&f,&b,4); return f; } float s=(k&1)?10.0f:(k&2)?1000.0f:1.0f; return s*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
// canvas-sized values: mostly ordinary, sometimes anything
static float rcanvas(void){ unsigned k=rnd()%10; if(k==0) return rf(); if(k==1) return special[rnd()%16]; return (float)(200+rnd()%3000)+(rnd()%4)*0.25f; }
static int32_t rint_(int lo,int hi){ if(rnd()%12==0) return (int32_t)rnd32(); return lo+(int)(rnd()%(unsigned)(hi-lo+1)); }
#define G(type,addr) (*(type*)D(addr))
static void pr(const char *t,const void *p,int n){ printf("%s",t); for(int i=0;i<n;i++){ uint32_t b; memcpy(&b,(const uint8_t*)p+4*i,4); if((b&0x7f800000)==0x7f800000 && (b&0x7fffff)) b=0x7fc00000; printf(" %08x",b);} printf("\n"); }
int main(int argc,char **argv){ init_image(argc,argv); gltrace_install(stdout); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  int32_t *display=&G(int32_t,0x160FC47D8ULL); float *camera=&G(float,0x1A724E580ULL);
  for(int c=0;c<cases;c++){ int kind=rnd()%8; printf("== case %d kind %d\n",c,kind);
    // identical starting state in both processes
    display[0]=rint_(1,4000); display[1]=rint_(1,3000); display[2]=(int32_t)rnd32(); display[3]=(int32_t)rnd32(); display[4]=rint_(1,4000); display[5]=rint_(1,3000);
    display[6]=rint_(1,4000); display[7]=rint_(1,3000); display[8]=rint_(0,500); display[9]=rint_(0,500); display[10]=rnd()%3==0?0:(int32_t)(rnd()%3);
    G(float,0x1A8BF79C4ULL)=rcanvas(); G(float,0x1A8BF79C8ULL)=rcanvas();
    for(int i=0;i<96;i++) camera[i]=rf();
    for(int f=0;f<4;f++){ uint8_t *font=(uint8_t*)&G(int32_t,0x1519A4060ULL)+0x3820ULL*f; *(int32_t*)font=rnd()%2; *(uint32_t*)(font+4)=1000+rnd()%50; }
    G(int32_t,0x1A8BF79C0ULL)=rnd()%4;
    float a[9],b[9]; for(int i=0;i<9;i++){ a[i]=rf(); b[i]=rf(); } int null=rnd()%4;
    switch(kind){
    case 0: CALL(camera_update_letterbox,0x14006C780ULL,void(*)(void)); break;
    case 1: CALL(camera_begin_2d,0x14007BB00ULL,void(*)(void)); break;
    case 2: { int x=rint_(-100,2000),y=rint_(-100,1200),w=rint_(0,2000),h=rint_(0,1200); float p=rf(),q=rf(),r=rf();
      CALL(camera_begin_orthographic,0x14007A2C0ULL,void(*)(int,int,int,int,float,float,float),x,y,w,h,p,q,r); break; }
    case 3: { int x=rint_(-100,2000),y=rint_(-100,1200),w=rint_(0,2000),h=rint_(0,1200); float n=rnd()%4?0.01f*(1+rnd()%100):rf(), f=rnd()%4?10.0f*(1+rnd()%1000):rf(), t=rnd()%4?0.1f*(1+rnd()%30):rf();
      CALL(camera_begin_perspective,0x14007A570ULL,void(*)(int,int,int,int,float,float,float),x,y,w,h,n,f,t); break; }
    case 4: CALL(camera_set_view,0x14007BE20ULL,void(*)(const float*,const float*),(null&1)?NULL:a,(null&2)?NULL:b); break;
    case 5: CALL(camera_set_model,0x14007B990ULL,void(*)(const float*,const float*),(null&1)?NULL:a,(null&2)?NULL:b); break;
    case 6: CALL(camera_scale_model,0x14007B6F0ULL,void(*)(float,float,float),a[0],a[1],a[2]); break;
    default: { float x=rnd()%5?rcanvas()-600:rf(), y=rnd()%5?rcanvas()-400:rf(), w=rnd()%5?rcanvas():rf(), h=rnd()%5?rcanvas():rf();
      CALL(camera_set_scissor,0x14007B7E0ULL,void(*)(float,float,float,float),x,y,w,h); break; }
    }
    pr("display",display,11); pr("projection",camera,16); pr("view",camera+16,16); pr("model",camera+32,16);
    pr("model_view",camera+48,16); pr("view_projection",camera+64,16); pr("model_view_projection",camera+80,16);
  }
  fprintf(stderr,"[%s] %d cases, %ld GL calls\n",img_name,cases,gl_calls); return 0; }
