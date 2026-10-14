// Ray against a wheel, 0x1400DF380, on random inputs with NaN ends. run_client.sh: original vs recompiled; run.sh:
// original vs src/engine/collision.c.
#include "peload.h"
#ifdef ENGINE
MS int collision_ray_sphere(float *point,float *normal,float *fraction,const float *from,const float *to,const float *centre,float radius);
#endif
static uint32_t rs=5; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static float rf(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static void pv(const char *t,const float *v,int n){ printf(" %s",t); for(int i=0;i<n;i++){ uint32_t w; memcpy(&w,&v[i],4); if((w&0x7f800000)==0x7f800000&&(w&0x7fffff)) w=0x7fc00000; printf(" %08x",w); } }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  for(int c=0;c<20000;c++){
    float wheel[64], from[3], to[3], p[3]={0}, n[3]={0}, t=-1;
    for(int k=0;k<64;k++) wheel[k]=rf(-3,3);
    for(int k=0;k<3;k++){ from[k]=rf(-6,6); to[k]=rf(-6,6); }
    if(c%5==1) for(int k=0;k<3;k++) from[k]=wheel[k]+rf(-1,1);   /* starting inside */
    if(c%13==0) memcpy(to,from,12);
    if(c%7==0) from[rnd()%3]=__builtin_nanf(""); if(c%11==0) to[rnd()%3]=__builtin_nanf("");
    float radius=rf(0.2f,2);
    if(c%9==4||c%9==5){   /* exact ties: a ray ending on the sphere (t == 1), or touching it (miss == radius) */
      radius=(float)(1+rnd()%3); for(int k=0;k<3;k++) wheel[k]=(float)(int)rf(-3,3);
      float side=c%9==5?radius:0.0f;
      from[0]=wheel[0]+side; from[1]=wheel[1]; from[2]=wheel[2]-8.0f;
      to[0]=wheel[0]+side; to[1]=wheel[1]; to[2]=c%9==5?wheel[2]+8.0f:wheel[2]-radius;
    }
#ifdef ENGINE
    int r=collision_ray_sphere(p,n,&t,from,to,wheel,radius);
#else
    int r=(int)((MS uint64_t(*)(float*,float*,float*,float*,float*,float*,float))F(0x1400DF380ULL))(p,n,&t,from,to,wheel,radius);
#endif
    printf("%d -> %d",c,r); pv("p",p,3); pv("n",n,3); pv("t",&t,1); printf("\n");
  }
  return 0; }
