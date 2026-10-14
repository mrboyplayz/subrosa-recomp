/* 0x14007A240: values and MXCSR, including quiet/signaling NaN, zero,
   subnormals, overflow, infinity and in-place normalization. */
#include "peload.h"
#include <xmmintrin.h>
#ifdef ENGINE
MS void math_vec3_normalize(float*,const float*);
#endif
static uint32_t rs=789456;
static uint32_t rnd(void){rs=rs*1664525u+1013904223u;return rs;}
int main(int argc,char**argv){
    init_image(argc,argv);int cases=argc>3?atoi(argv[3]):3000;
    static const uint32_t values[]={0,0x80000000,1,0x00800000,0x7f7fffff,0x7f800000,0xff800000,0x7fc00001,0xffc12345,0x7f800001,0x3f800000,0xbf800000};
    for(int c=0;c<cases;c++){
        float input[3],out[4];
        for(int k=0;k<3;k++){
            uint32_t bits=c%3==0?rnd():values[(c+5*k)%12];memcpy(input+k,&bits,4);
            bits=rnd();memcpy(out+k,&bits,4);
        }
        out[3]=123.0f;float *v=c%2?out:input;if(c%2)memcpy(out,input,12);
        _mm_setcsr(0x1f80);
#if defined(ENGINE) && !defined(NORMALIZE_WRAPPER)
        math_vec3_normalize(out,v);
#else
        ((MS void(*)(float*,const float*))F(0x14007A240ULL))(out,v);
#endif
        uint32_t csr=_mm_getcsr();printf("normalize %d csr=%08x",c,csr);
        for(int k=0;k<4;k++){uint32_t bits;memcpy(&bits,out+k,4);if((bits&0x7f800000)==0x7f800000&&(bits&0x7fffff))bits=0x7fc00000;printf(" %08x",bits);}printf("\n");
    }
    fprintf(stderr,"[%s] %d cases\n",img_name,cases);return 0;
}
