// Vector rotation 0x14007B4D0 with special angles (infinities, NaN, huge) in two processes.
// Mode "engine": src/engine/math3d.c (math_vec3_rotate).
#include "peload.h"
#ifdef ENGINE
MS void math_vec3_rotate(float *v,const float *axis,float angle);
#endif
static uint32_t rs=99; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static void pw(const char *t,const void *p,int n){ printf(" %s",t); const uint32_t *w=p; for(int i=0;i<n;i++) printf(" %08x",w[i]); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  static const float angles[]={__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e30f,-1e30f,0.5f,3e38f,1e10f};
  for(int c=0;c<64;c++){
    float v[3]={((int)(rnd()%2000)-1000)/500.0f,((int)(rnd()%2000)-1000)/500.0f,((int)(rnd()%2000)-1000)/500.0f}, ax[3]={0.6f,0.8f,0.0f};
    float a=angles[c%8];
    pw("in",v,3);
#ifdef ENGINE
    math_vec3_rotate(v,ax,a);
#else
    { double lane=0; memcpy(&lane,&a,4); ((MS void(*)(float*,const float*,double))F(0x14007B4D0ULL))(v,ax,lane); }
#endif
    pw("out",v,3); printf("\n");
  }
  return 0; }
