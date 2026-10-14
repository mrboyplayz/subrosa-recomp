// Probe: the C runtime's atan2 (0x14023EDE4) and tan (0x1402437E0), original against the recompiled client's copy.
#include "peload.h"
static uint32_t rs=99; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):200000;
  MS double (*at2)(double,double)=F(0x14023EDE4ULL); MS double (*tn)(double)=F(0x1402437E0ULL);
  for(int c=0;c<cases;c++){ double m=(double)(rnd()&0xFFFFFF)/16777216.0, y=ldexp(m+0.5,(int)(rnd()%120)-60), x=ldexp((double)(rnd()&0xFFFFFF)/16777216.0+0.5,(int)(rnd()%40)-20);
    if(rnd()&1) y=-y; if(rnd()%4==0) x=-x; if(rnd()%3==0) x=1.0;
    double a=at2(y,x), t=tn(ldexp(m+0.5,(int)(rnd()%40)-36)); uint64_t ua,ut,uy,ux; memcpy(&ua,&a,8); memcpy(&ut,&t,8); memcpy(&uy,&y,8); memcpy(&ux,&x,8);
    printf("%016llx %016llx -> %016llx ; %016llx\n",(unsigned long long)uy,(unsigned long long)ux,(unsigned long long)ua,(unsigned long long)ut); }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
