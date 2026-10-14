// Calls the packed sin/cos routine 0x1401F8AC0 (angle as a float in xmm0, result lanes 0/1) in both images.
#include "peload.h"
#include <xmmintrin.h>
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  typedef __m128 (MS *fn)(float);
  fn f=(fn)F(0x1401F8AC0ULL);
  float angles[]={0.0f,0.39269909f,0.78539819f,1.1780972f,-0.39269909f,3.0f,10.0f,-7.5f};
  for(unsigned i=0;i<sizeof angles/sizeof *angles;i++){ __m128 r=f(angles[i]); float o[4]; _mm_storeu_ps(o,r);
    printf("%g -> %a %a (%g %g)\n",angles[i],o[0],o[1],o[0],o[1]); }
  return 0; }
