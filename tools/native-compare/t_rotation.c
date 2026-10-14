// Integrates body rotation over a tick (0x14012B2D0) with identical inputs in two processes and prints the
// resulting rotation and angular velocity. Mode "engine": src/engine/physics_rotation.c.
#include "peload.h"
#ifdef ENGINE
MS void physics_integrate_rotation(float*,const float*,float*,const float*);
#endif
static uint32_t rs=90210; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,0x1p-16f,0x1.000002p-16f,0x1.fffffep-17f,0.5f};
static float rf(float scale){ unsigned k=rnd()%60; if(k==0) return special[rnd()%14]; if(k==1){ uint32_t b=rnd32(); float f; memcpy(&f,&b,4); return f; } return scale*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
static void pr(const char *t,const float *p,int n){ printf("%s:",t); for(int k=0;k<n;k++){ uint32_t w; memcpy(&w,p+k,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; printf(" %08x",w); } printf("\n"); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):40000;
  for(int c=0;c<cases;c++){ printf("== case %d\n",c);
    float body[24]; float *r=body, *l=body+9, *w=body+12, *in=body+18;
    for(int i=0;i<24;i++) body[i]=rf(1.0f);
    unsigned kind=rnd()%8;
    if(kind<5){ // a proper rotation matrix: rows from two angles
      float a=rf(3.2f), b=rf(3.2f); float ca=cosf(a),sa=sinf(a),cb=cosf(b),sb=sinf(b);
      float m[9]={cb,0,-sb, sa*sb,ca,sa*cb, ca*sb,-sa,ca*cb}; for(int i=0;i<9;i++) if(rnd()%50) r[i]=m[i]; }
    // angular momentum from tiny (below the smallest turn) to large; inverse inertia mostly positive
    static const float mag[]={1e-7f,1e-5f,1e-4f,0.01f,0.3f,3.0f,40.0f};
    float ls=mag[rnd()%7]; for(int i=0;i<3;i++) if(rnd()%30) l[i]=rf(ls);
    for(int i=0;i<3;i++) if(rnd()%30) in[i]=rnd()%4?(float)(1+rnd()%200)*0.01f:rf(2.0f);
    if(rnd()%20==0){ l[0]=l[1]=l[2]=0.0f; }
    pr("in",body,24);
#ifdef ENGINE
    physics_integrate_rotation(r,l,w,in);
#else
    ((MS void(*)(float*,float*,float*,float*))F(0x14012B2D0ULL))(r,l,w,in);
#endif
    pr("body",body,24);
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
