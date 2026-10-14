// Sphere sweep against one triangle, 0x140035690, and its parts 0x140077FA0 / 0x1400D6890, in the original and the
// recompiled image on identical random inputs. Run with run_client.sh. Set ONLY=face|cap|edge to test one routine.
#include "peload.h"
static uint32_t rs=99; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static float rf(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static void pv(const char *t,const float *v,int n){ printf(" %s",t); for(int i=0;i<n;i++){ uint32_t w; memcpy(&w,&v[i],4); printf(" %08x",w); } }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):3000; const char *only=getenv("ONLY");
  for(int c=0;c<cases;c++){
    float a[3],b[3],cc[3],from[3],to[3];
    for(int k=0;k<3;k++){ a[k]=rf(-5,5); b[k]=rf(-5,5); cc[k]=rf(-5,5); from[k]=rf(-6,6); to[k]=rf(-6,6); }
    float radius=rf(0,1.5f);
    uint64_t rbits=0; memcpy(&rbits,&radius,4);
    float out[4]={1,2,3,4}, normal[4]={5,6,7,8}, dist[2]={9,10};
    printf("case %d",c);
    if(!only||!strcmp(only,"face")){
      uint64_t r6=0; memcpy(&r6,&radius,4);
      int r=(int)((MS uint64_t(*)(float*,float*,float*,float*,float*,uint64_t,float*,float*,float*))F(0x140035690ULL))(out,normal,dist,from,to,r6,a,b,cc);
      printf(" face %d",r); pv("p",out,3); pv("n",normal,3); pv("d",dist,1);
    }
    if(!only||!strcmp(only,"cap")){
      float o2[4]={0},n2[4]={0}; float rr=radius;
      int r=(int)((MS uint64_t(*)(float*,float*,float*,float*,float*,float*,float*,float*))F(0x140077FA0ULL))(o2,n2,&rr,from,to,a,b,cc);
      printf(" cap %d",r); pv("p",o2,3); pv("n",n2,3); pv("r",&rr,1);
    }
    if(!only||!strcmp(only,"edge")){
      float o3[4]={0},p3[4]={0},d3=100000.0f;
      int r=(int)((MS uint64_t(*)(float*,float*,float*,float*,float*,float*,float*,uint64_t))F(0x1400D6890ULL))(o3,p3,&d3,a,b,from,to,rbits);
      printf(" edge %d",r); pv("a",o3,3); pv("b",p3,3); pv("d",&d3,1);
    }
    printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
