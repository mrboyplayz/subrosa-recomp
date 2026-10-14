// Tessellates surface patches with the block mesh routine 0x140001F20 in two processes (the original image and the
// recompiled client image) from identical control points and prints the scratch mesh it leaves behind.
// There is no engine build of this test: run the same program on both images (see run_client.sh).
#include "peload.h"
static uint32_t rs=90210; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static float rf(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static uint64_t fnv(const void *p,size_t n){ const uint8_t *b=p; uint64_t h=1469598103934665603ULL; for(size_t i=0;i<n;i++){ h^=b[i]; h*=1099511628211ULL; } return h; }
#define A(index) ((uint32_t*)D(0x140404A6CULL+4ULL*(index)))
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):3000;
  float *points=(float*)A(19928789), *coords=(float*)A(19928837);
  for(int c=0;c<cases;c++){
    int order_x=1+(int)(rnd()%3), order_y=1+(int)(rnd()%3), tess_x=1+(int)(rnd()%8), tess_y=1+(int)(rnd()%8);
    if(c%7==0){ order_x=order_y=1; tess_x=tess_y=1; }
    uint32_t flags=rnd()%3==0?(rnd()&0xFFFFF):(rnd()&7);
    for(int i=0;i<48;i++) points[i]=c%5==0?(float)(int)rf(-4,5):rf(-8,8);
    for(int i=0;i<32;i++) coords[i]=rf(0,4);
    int first=c%4==0?(int)(rnd()%50):0, first_triangle=c%4==0?(int)(rnd()%30):0;
    *A(70425405)=(uint32_t)first; *A(70998846)=(uint32_t)first_triangle;
    ((MS uint64_t(*)(void*,void*,int,int,int,int,uint32_t))F(0x140001F20ULL))(points,coords,tess_x,order_x,tess_y,order_y,flags); /* a3 and a5 are the step counts, a4 and a6 the curve orders */
    int vertices=(int)*A(70425405), triangles=(int)*A(70998846);
    printf("== case %d order %d %d tess %d %d flags %x from %d/%d: %d vertices %d faces\n",c,order_x,order_y,tess_x,tess_y,flags,first,first_triangle,vertices,triangles);
    if(vertices<first||vertices>60000||triangles<first_triangle||triangles>60000){ printf("counts out of range\n"); continue; }
    printf("position #%016" PRIx64 " coord #%016" PRIx64 " normal #%016" PRIx64 " tangent #%016" PRIx64 "\n",
           fnv(A(70687550+3*first),12u*(vertices-first)),fnv(A(70835006+3*first),12u*(vertices-first)),
           fnv(A(70736702+3*first),12u*(vertices-first)),fnv(A(70785854+3*first),12u*(vertices-first)));
    printf("faces #%016" PRIx64 " flags #%016" PRIx64 " extra #%016" PRIx64 "\n",
           fnv(A(70998847+4*first_triangle),16u*(triangles-first_triangle)),fnv(A(71064383+first_triangle),4u*(triangles-first_triangle)),
           fnv(A(71097151+first_triangle),4u*(triangles-first_triangle)));
    if(c<3||getenv("PATCH_VERBOSE")){ for(int i=first;i<vertices&&i<first+(getenv("PATCH_VERBOSE")?400:6);i++){ float *p=(float*)A(70687550+3*i); printf(" v%d %a %a %a\n",i,p[0],p[1],p[2]); }
      for(int i=first_triangle;i<triangles&&i<first_triangle+4;i++){ uint32_t *t=A(70998847+4*i); printf(" f%d %u %u %u %u\n",i,t[0],t[1],t[2],t[3]); } }
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
