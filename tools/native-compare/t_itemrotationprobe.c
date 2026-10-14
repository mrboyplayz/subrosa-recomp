#include "peload.h"
#include <xmmintrin.h>
int main(int argc,char **argv){init_image(argc,argv);uint32_t rs=271828;
for(int c=0;c<1000;c++){float m[9],up[3]={0,1,0};for(int k=0;k<9;k++){rs=rs*1664525u+1013904223u;m[k]=((int)(rs%2000)-1000)/400.0f;}float angle=(float)((double)(c%4)*1.570796326795);
_mm_setcsr(0x1f80);((MS void(*)(float*,const float*,float))F(0x14007B2A0ULL))(m,up,angle);printf("%d %08x",c,_mm_getcsr());for(int k=0;k<9;k++){uint32_t bits;memcpy(&bits,m+k,4);printf(" %08x",bits);}puts("");}return 0;}
