// A segment against a list of triangles, 0x1400DA300 (src/engine/collision_level.c collision_segment_triangles),
// in two processes, on random lists: triangles across the segment, degenerate ones (zero and NaN normals), NaN
// corners and endpoints, empty and negative counts. The line/triangle test 0x140077FA0 runs for real.
#include "peload.h"
#ifdef ENGINE
MS int collision_segment_triangles(float *hit,const void *list,const float *from,const float *to);
#endif
static uint32_t rs=5150; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
static float rfn(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  static uint32_t list[1+12*1024+1]; float *f=(float*)(list+1);
  for(int c=0;c<cases;c++){
    float from[3], to[3], hit[8];
    for(int k=0;k<3;k++){ from[k]=rfn(-20,20); to[k]=from[k]+rfn(-30,30); }
    if(rnd()%40==0) from[rnd()%3]=special[rnd()%11]; if(rnd()%40==0) to[rnd()%3]=special[rnd()%11];
    int n=(int)(rnd()%12); if(rnd()%30==0) n=-(int)(rnd()%3); if(rnd()%50==0) n=200+(int)(rnd()%300);
    list[0]=(uint32_t)n;
    for(int t=0;t<(n>0?n:0);t++){ float *tr=f+12*t; float m=rfn(0.05f,0.95f), at[3];
      for(int k=0;k<3;k++) at[k]=from[k]+(to[k]-from[k])*m;
      for(int v=0;v<3;v++) for(int k=0;k<3;k++) tr[3*v+k]=at[k]+rfn(-6,6);
      unsigned d=rnd()%25; if(d==0) memcpy(tr+3,tr,12); else if(d==1){ for(int k=0;k<3;k++) tr[6+k]=tr[k]+(tr[3+k]-tr[k])*2.0f; }
      else if(d==2) tr[rnd()%9]=special[rnd()%11]; else if(d==3) tr[rnd()%9]=__builtin_nanf("");
      if(rnd()%6==0 && t>0){ float *o=f+12*(rnd()%t); memcpy(tr,o,12); memcpy(tr+3,o+6,12); memcpy(tr+6,o+3,12); }   /* same triangle turned over: equal fractions, opposite normal */
      for(int k=9;k<12;k++){ uint32_t w=rnd32(); memcpy(tr+k,&w,4); } }
    for(int k=0;k<8;k++){ uint32_t w=rnd32(); memcpy(&hit[k],&w,4); }
#ifdef ENGINE
    int r=collision_segment_triangles(hit,list,from,to);
#else
    int r=(int)((MS uint64_t(*)(float*,void*,float*,float*))F(0x1400DA300ULL))(hit,list,from,to);
#endif
    printf("%d %d:",c,r); for(int k=0;k<8;k++){ uint32_t w; memcpy(&w,&hit[k],4); printf(" %08x",canon(w)); } printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
