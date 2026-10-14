// Calls the sine/cosine pair routine (0x1401F8AC0) of the original and of the recompiled client with the same
// angles, small to huge, and prints both lanes. The engine reaches this routine through math3d.c.
#include "peload.h"
#include <xmmintrin.h>
static uint32_t rs=1618; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):60000;
  static const float fixed[]={0.0f,-0.0f,1e-30f,0.5f,3.0f,100.0f,9999.0f,10000.0f,10001.0f,1e5f,1e7f,4e13f,1e20f,3e38f,-1e5f,-7.0f,
    __builtin_inff(),-__builtin_inff(),__builtin_nanf(""),-__builtin_nanf("")};
  for(int c=0;c<cases;c++){ float a; unsigned k=rnd()%4;
    if(c<20) a=fixed[c];
    else if(k==0){ uint32_t b=rnd32(); if((b&0x7f800000)==0x7f800000) b&=0xbfffffff; memcpy(&a,&b,4); }   // any finite float
    else if(k==1) a=((int)(rnd()&0xFFFFF)-0x80000)/8192.0f;                                              // within 64
    else if(k==2) a=((int)(rnd()&0xFFFFF)-0x80000)/16.0f;                                                // within 32,768
    else a=((int)(rnd()&0xFFFFF)-0x80000)*4096.0f;
    double lane=0; memcpy(&lane,&a,4); float r[4]; uint32_t in,s,co; memcpy(&in,&a,4);
    _mm_storeu_ps(r,((MS __m128(*)(double))F(0x1401F8AC0ULL))(lane)); memcpy(&s,r,4); memcpy(&co,r+1,4);
    printf("%08x: %08x %08x\n",in,s,co); }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
