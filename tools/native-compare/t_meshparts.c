// The parts of mesh-against-mesh contact on their own, original vs recompiled (run_client.sh): mesh transform
// 0x14004A480, point against mesh faces 0x14004A1D0, closest points of two edges 0x14008CEB0, edge side 0x140187410.
// ONLY=transform|faces|edges|side picks one.
#include "peload.h"
#ifdef ENGINE
MS void collision_mesh_transform(float (*)[3],float (*)[3],const void*,const float*,const float*);
MS int collision_mesh_point_faces(void*,const void*,const float (*)[3],const float (*)[3],const float*,const float*);
MS int collision_edge_edge(float*,float*,float*,const float*,const float*,const float*,const float*);
MS int collision_edge_side(const float*,const float*,const float*,const float*,const float*);
#define T_TRANSFORM(tp,tn,m,pos,rot) collision_mesh_transform((void*)(tp),(void*)(tn),m,pos,rot)
#define T_FACES(h,m,tp,tn,f,t) collision_mesh_point_faces(h,m,(void*)(tp),(void*)(tn),f,t)
#define T_EDGES collision_edge_edge
#define T_SIDE collision_edge_side
#else
#define T_TRANSFORM(tp,tn,m,pos,rot) ((MS uint64_t(*)(float*,float*,void*,float*,float*))F(0x14004A480ULL))(tp,tn,m,pos,rot)
#define T_FACES(h,m,tp,tn,f,t) (int)((MS uint64_t(*)(float*,void*,float*,float*,float*,float*))F(0x14004A1D0ULL))(h,m,tp,tn,f,t)
#define T_EDGES(a,b,c,d,e,f,g) (int)((MS uint64_t(*)(float*,float*,float*,float*,float*,float*,float*))F(0x14008CEB0ULL))(a,b,c,d,e,f,g)
#define T_SIDE(a,b,c,d,e) (int)((MS uint64_t(*)(float*,float*,float*,float*,float*))F(0x140187410ULL))(a,b,c,d,e)
#endif
static uint32_t rs=99; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static float rf(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
// Small integers: exact arithmetic, so points land exactly on planes, edges and corners.
static float ri(void){ return (float)((int)(rnd()%5)-2); }
static void pw(const char *t,const void *p,int n){ printf(" %s",t); const uint32_t *w=p; for(int i=0;i<n;i++){ uint32_t x=w[i]; if((x&0x7f800000)==0x7f800000&&(x&0x7fffff)) x=0x7fc00000; printf(" %08x",x); } }
typedef struct { int32_t points; int32_t pad; void *point; int32_t faces; int32_t pad1; void *face; int32_t edges; int32_t pad2; void *edge; int32_t verts; float v[64*3]; } Mesh;
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  const char *only=getenv("ONLY"); int cases=argc>3?atoi(argv[3]):12000;
  static Mesh m; static float pts[64*4]; static int32_t faces[64*9];
  for(int c=0;c<cases;c++){
    int nv=4+(int)(rnd()%20), nf=1+(int)(rnd()%10);
    memset(&m,0,sizeof m); m.points=nv; m.point=pts; m.faces=nf; m.face=faces; m.verts=nv;
    for(int i=0;i<nv;i++){ for(int k=0;k<3;k++) pts[4*i+k]=rf(-2,2); int32_t ix=i; memcpy(&pts[4*i+3],&ix,4); }
    for(int f=0;f<nf;f++){ int32_t *r=faces+9*f; r[0]=(int32_t)rnd(); r[1]=rnd()%3==0?4:3; for(int k=2;k<6;k++) r[k]=(int32_t)(rnd()%nv);
      float nn[3]={rf(-1,1),rf(-1,1),rf(-1,1)}; memcpy(&r[6],nn,12);
      if(f>0&&rnd()%4==0) memcpy(r,r-9,36); }   /* a repeated face: equal fractions */
    float pos[3]={rf(-1,1),rf(-1,1),rf(-1,1)}, rot[9]; for(int k=0;k<9;k++) rot[k]=rf(-1,1);
    static float tp[64*3+8], tn[64*3+8];
    printf("%d",c);
    if(!only||!strcmp(only,"transform")){
      memset(tp,0,sizeof tp); memset(tn,0,sizeof tn);
      T_TRANSFORM(tp,tn,&m,pos,rot);
      pw("tp",tp,3*nv); pw("tn",tn,3*nf);
    }
    if(!only||!strcmp(only,"faces")){
      for(int i=0;i<nv*3;i++) tp[i]=rf(-2,2);
      for(int i=0;i<nf*3;i++) tn[i]=rf(-1,1);
      float hit[8]={1,2,3,4,5,6,7,8}, from[3]={rf(-3,3),rf(-3,3),rf(-3,3)}, to[3]={rf(-3,3),rf(-3,3),rf(-3,3)};
      int r=T_FACES(hit,&m,tp,tn,from,to);
      printf(" faces %d",r&1); pw("h",hit,7);
    }
    if(!only||!strcmp(only,"edges")){
      float a0[3],a1[3],b0[3],b1[3],oa[4]={1,2,3,4},ob[4]={5,6,7,8},d[2]={9,10};
      for(int k=0;k<3;k++){ a0[k]=rf(-2,2); a1[k]=rf(-2,2); b0[k]=rf(-2,2); b1[k]=rf(-2,2); }
      if(c%4==3) for(int k=0;k<3;k++){ a0[k]=ri(); a1[k]=ri(); b0[k]=ri(); b1[k]=ri(); }
      if(c%7==0) memcpy(b1,b0,12); if(c%11==0) for(int k=0;k<3;k++) b1[k]=b0[k]+(a1[k]-a0[k]);
      if(c%13==0) a0[rnd()%3]=__builtin_nanf(""); if(c%19==0) b1[rnd()%3]=__builtin_nanf("");
      int r=T_EDGES(oa,ob,d,a0,a1,b0,b1);
      printf(" edges %d",r&0xff); pw("a",oa,3); pw("b",ob,3); pw("d",d,1);
    }
    if(!only||!strcmp(only,"side")){
      float a0[3],a1[3],p[3],b0[3],b1[3];
      for(int k=0;k<3;k++){ a0[k]=rf(-2,2); a1[k]=rf(-2,2); p[k]=rf(-2,2); b0[k]=rf(-2,2); b1[k]=rf(-2,2); }
      if(c%4==3){ /* triangle p b0 b1 in a plane z = const, the segment crossing it at a lattice point */
        float z=ri(); for(int k=0;k<2;k++){ p[k]=ri(); b0[k]=ri(); b1[k]=ri(); } p[2]=b0[2]=b1[2]=z;
        a0[0]=a1[0]=ri(); a0[1]=a1[1]=ri(); a0[2]=z+(rnd()%3==0?0.0f:1.0f); a1[2]=z-(rnd()%3==0?0.0f:1.0f);
        if(rnd()%2){ float t[3]; memcpy(t,a0,12); memcpy(a0,a1,12); memcpy(a1,t,12); } }
      if(c%5==0) memcpy(a0,p,12); if(c%6==0) memcpy(a1,p,12); if(c%7==0) memcpy(b1,b0,12);
      if(c%23==0) a0[rnd()%3]=__builtin_nanf(""); if(c%29==0) a1[rnd()%3]=__builtin_nanf(""); if(c%31==0) p[rnd()%3]=__builtin_nanf("");
      int r=T_SIDE(a0,a1,p,b0,b1);
      printf(" side %d",r&1);
    }
    printf("\n");
  }
  return 0; }
