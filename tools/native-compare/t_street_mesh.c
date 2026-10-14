// Builds the World map's street meshes (0x140188B80) in two processes from identical random street lists and
// records every OpenGL call, buffer contents included, plus the scratch mesh and mesh sizes left behind.
// Mode "engine": src/engine/world_street_mesh.c.
#include "peload.h"
#include "gltrace.h"
#ifdef ENGINE
MS void world_build_street_meshes(void);
#endif
static uint32_t rs=777; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e38f};
static float rf(float lo,float hi){ unsigned k=rnd()%300; if(k==0) return special[rnd()%11]; if(k==1){ uint32_t b=rnd32(); float f; memcpy(&f,&b,4); return f; }
  return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
#define A(index) ((uint32_t*)D(0x140404A6CULL+4ULL*(index)))
#define STREET(i) A(358297501+15432*(i))
static void canon(uint32_t *w){ if((*w&0x7f800000)==0x7f800000 && (*w&0x7fffff)) *w=0x7fc00000; }
int main(int argc,char **argv){ init_image(argc,argv); gltrace_install(stdout); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):60;
  for(int b=0;b<16;b++) *A(283793813+2*b)=1000+b;
  for(int c=0;c<cases;c++){
    int n=(int)(rnd()%9); *A(421506973)=(uint32_t)n;
    for(int m=0;m<3;m++) *A(283790158+m)=rnd()%16;
    printf("== case %d: %d streets\n",c,n);
    for(int i=0;i<n;i++){ uint32_t *s=STREET(i);
      s[0]=rnd()%4==0?2:rnd()%2;
      int verts=1+(int)(rnd()%60); s[5]=verts;
      for(int v=0;v<verts;v++) for(int k=0;k<3;k++){ float f=rf(-100,100); memcpy(&s[6+3*v+k],&f,4); }
      if(rnd()%3==0){ float z=-0.0f; memcpy(&s[6+3*(rnd()%verts)+1],&z,4); }   /* -0 heights must stay -0 */
      if(rnd()%9==0){ int v=(int)(rnd()%verts); memcpy(&s[6+3*v],&s[6+3*((v+1)%verts)],12); }  /* degenerate faces */
      int tris=(int)(rnd()%40); s[3078]=tris;
      for(int t=0;t<tris;t++) for(int k=0;k<3;k++) s[3087+3*t+k]=rnd()%verts;
      for(int r=0;r<4;r++){ int a=(int)(rnd()%(tris+1)), e=(int)(rnd()%(tris+1)); if(rnd()%5==0) e=a-1; s[3079+r]=a; s[3083+r]=e; }
    }
#ifdef ENGINE
    world_build_street_meshes();
#else
    ((MS uint64_t(*)(void))F(0x140188B80ULL))();
#endif
    printf("scratch %d %d sizes",(int)*A(349908877),(int)*A(349908878));
    for(int k=0;k<6;k++) printf(" %d",(int)*A(358297493+k)); printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
