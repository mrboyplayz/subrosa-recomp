// Probe for the decimal-literal repair (tools/repairs/decimal_literals.py): routines that are still recompiled code
// and compute with float constants the decompiler had printed with eight digits. The same program runs on the
// original and on a linked client (tools/native-compare/run_linked.sh); nothing is stubbed.
//   0x1401A6B90 (float, float) -> float     an arctangent approximation (four constants)
//   0x1401F2690 (float) -> float            a table lookup with interpolation (0.04)
//   0x1401305F0, 0x1400384F0, 0x1400D47A0 (float, float, int) -> float   value noise (2^-30 printed as 9.3132257e-10)
//   0x140180360 (float) -> float
//   0x1401ECD80 (float state[3], float *out, const float *in, int count) -> float   a filter that halves a signal
//   0x1401D1340 (double) -> float           a logarithm to base 2
#include "peload.h"
static uint32_t rs=2026; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static float frand(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFFFF)/16777216.0f; }
static uint32_t bits(float f){ uint32_t w; memcpy(&w,&f,4); return w; }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):100000;
  MS float (*arctangent)(float,float)=F(0x1401A6B90ULL);
  MS float (*lookup)(float)=F(0x1401F2690ULL);
  MS float (*noise_a)(float,float,int)=F(0x1401305F0ULL), (*noise_b)(float,float,int)=F(0x1400384F0ULL), (*noise_c)(float,float,int)=F(0x1400D47A0ULL);
  MS float (*curve)(float)=F(0x140180360ULL);
  MS float (*halve)(float*,float*,const float*,int)=F(0x1401ECD80ULL);
  MS float (*log2_of)(double)=F(0x1401D1340ULL);
  for(int c=0;c<cases;c++){
    float x=frand(-4.0f,4.0f), y=frand(-4.0f,4.0f), t=frand(-9.0f,9.0f), u=frand(0.0f,900.0f), v=frand(0.0f,900.0f), w=frand(-3.0f,3.0f);
    int mask=(1<<(1+rnd()%10))-1;
    float state[3]={frand(-1.0f,1.0f),frand(-1.0f,1.0f),frand(-1.0f,1.0f)}, in[32], out[16]; for(int k=0;k<32;k++) in[k]=frand(-1.0f,1.0f);
    float energy=halve(state,out,in,32); uint32_t h=2166136261u; for(int k=0;k<16;k++) h=(h^bits(out[k]))*16777619u; for(int k=0;k<3;k++) h=(h^bits(state[k]))*16777619u;
    printf("%08x %08x %08x %08x %08x %08x %08x%08x %08x\n",bits(arctangent(x,y)),bits(lookup(t)),bits(noise_a(u,v,mask)),bits(noise_b(u,v,mask)),bits(noise_c(u,v,mask)),bits(curve(w)),
           h,bits(energy),bits(log2_of((double)frand(0.001f,5000.0f))));
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
