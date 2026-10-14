#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
static uint32_t rs=5; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
int main(void){ volatile float cf[]={0.30000001f,0.00075000001f,0.0018229167f,0.46666667f,0.033333335f,0.11666667f,0.0011111111f,10.471975f};
  for(int k=0;k<8;k++){ volatile double exact=(double)cf[k]; int mul=0,add=0,sub=0,dv=0,cmp=0;
    for(int i=0;i<3000000;i++){ uint32_t w=(rnd()<<16)^rnd(); volatile float x; memcpy((void*)&x,&w,4); if(!isfinite(x)) continue;
      float a=x*cf[k], b=(float)(x*exact); if(memcmp(&a,&b,4)) mul++;
      a=x+cf[k]; b=(float)(x+exact); if(memcmp(&a,&b,4)) add++;
      a=x-cf[k]; b=(float)(x-exact); if(memcmp(&a,&b,4)) sub++;
      a=x/cf[k]; b=(float)(x/exact); if(memcmp(&a,&b,4)) dv++;
      if((x<=cf[k])!=(x<=exact)) cmp++; }
    printf("%.17g: mul %d add %d sub %d div %d cmp %d differ\n",exact,mul,add,sub,dv,cmp); }
  return 0; }
