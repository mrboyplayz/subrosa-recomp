// Builds the World-mode ("test2") train route and race track with 0x14002A9A0 (which calls the track generator
// 0x14002A680) in both images, then prints the street objects and train stops they leave in the state array.
// There is no engine build of this test: run the same program on both images (see run_client.sh).
#include "peload.h"
static uint64_t fnv(const void *p,size_t n){ const uint8_t *b=p; uint64_t h=1469598103934665603ULL; for(size_t i=0;i<n;i++){ h^=b[i]; h*=1099511628211ULL; } return h; }
#define A(index) ((uint32_t*)D(0x140404A6CULL+4ULL*(index)))
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  memcpy(A(283831313),"test2",6);
  ((MS uint64_t(*)(void))F(0x14002A9A0ULL))();
  int stops=(int)*A(112631653), streets=(int)*A(421506973);
  printf("train stops %d, street objects %d\n",stops,streets);
  for(int i=0;i<stops&&i<64;i++){ float *p=(float*)A(112631655+5*i); printf(" stop %d %a %a %a (%g %g %g)\n",i,p[0],p[1],p[2],p[0],p[1],p[2]); }
  for(int i=0;i<streets;i++){ uint32_t *s=A(358297501+15432*i); float *c=(float*)(s+2);
    printf(" street %d kind %u centre %g %g %g #%016" PRIx64 "\n",i,s[0],c[0],c[1],c[2],fnv(s,4u*15432)); }
  if(getenv("TRACK_DUMP")){ uint32_t *s0=A(358297501+15432*atoi(getenv("TRACK_DUMP"))); for(int k=0;k<15432;k++) printf("d %d %08x\n",k,s0[k]); }
  fprintf(stderr,"[%s] done\n",img_name); return 0; }
