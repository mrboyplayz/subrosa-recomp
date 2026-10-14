// Mesh-against-mesh contact 0x140048DA0 (vehicle type 17 against items) in two processes on identical random meshes
// and placements. The contact it applies, 0x1400052C0, is replaced in both by a stub that logs its arguments.
// Mesh layout as the routine and its callees read it: +0 point count, +8 points (16 bytes: x y z, vertex index),
// +16 face count, +24 faces (36 bytes: ?, corner count 3/4, 4 point indices, normal), +32 edge count, +40 edges (12
// bytes: 3 indices), +48 vertex count, +52 vertices (x, y, z).
// run_client.sh: original vs recompiled; run.sh: original vs src/engine/collision_mesh.c.
#include "peload.h"
#ifdef ENGINE
MS int collision_mesh_contact(int body_a,int body_b,const void *a,const void *b,const float *pa,const float *ra,const float *pb,const float *rb,uint32_t flags);
#endif
static uint32_t rs=48; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static float rf(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static void pw(const char *t,const void *p,int n){ printf(" %s",t); const uint32_t *w=p; for(int i=0;i<n;i++){ uint32_t x=w[i]; if((x&0x7f800000)==0x7f800000&&(x&0x7fffff)) x=0x7fc00000; printf(" %08x",x); } }
static MS uint64_t s_contact(int a,int b,float *p,float *q,float *n,uint64_t f6,uint64_t f7,uint64_t f8,uint64_t f9){
  printf("contact %d %d",a,b); pw("p",p,3); pw("q",q,3); pw("n",n,3);
  uint32_t w6=(uint32_t)f6, w7=(uint32_t)f7, w9=(uint32_t)f9; pw("a6",&w6,1); pw("a7",&w7,1); uint32_t w8=(uint32_t)f8; pw("a8",&w8,1); pw("a9",&w9,1); printf("\n"); return 0; }
typedef struct { int32_t points; int32_t pad; void *point; int32_t faces; int32_t pad1; void *face; int32_t edges; int32_t pad2; void *edge; int32_t verts; float v[1024*3]; } Mesh;
static void make(Mesh *m, float *points, int32_t *faces, int32_t *edges){
  int nv=4+(int)(rnd()%28), nf=(int)(rnd()%12), ne=(int)(rnd()%16);
  memset(m,0,sizeof *m); m->points=nv; m->point=points; m->faces=nf; m->face=faces; m->edges=ne; m->edge=edges; m->verts=nv;
  for(int i=0;i<3*nv;i++) m->v[i]=rf(-2,2);
  for(int i=0;i<nv;i++){ float *r=points+4*i; for(int k=0;k<3;k++) r[k]=m->v[3*i+k]+(rnd()%4==0?rf(-0.3f,0.3f):0.0f); int32_t ix=(int32_t)(rnd()%nv); if(rnd()%2) ix=i; memcpy(&r[3],&ix,4); }
  for(int f=0;f<nf;f++){ int32_t *r=faces+9*f; r[0]=(int32_t)rnd(); r[1]=rnd()%3==0?4:3; for(int k=2;k<6;k++) r[k]=(int32_t)(rnd()%nv);
    float x=rf(-1,1),y=rf(-1,1),z=rf(-1,1),l=sqrtf(x*x+y*y+z*z); if(l==0) l=1; float nn[3]={x/l,y/l,z/l}; memcpy(&r[6],nn,12); }
  for(int e=0;e<ne;e++) for(int k=0;k<3;k++) edges[3*e+k]=(int32_t)(rnd()%nv);
}
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  hook(0x1400052C0ULL,s_contact);
  int cases=argc>3?atoi(argv[3]):2000;
  static Mesh m1,m2; static float p1s[64*4],p2s[64*4]; static int32_t f1[64*9],f2[64*9],e1[64*3],e2[64*3];
  for(int c=0;c<cases;c++){
    make(&m1,p1s,f1,e1); make(&m2,p2s,f2,e2);
    float p1[3]={rf(-1,1),rf(-1,1),rf(-1,1)}, p2[3]={rf(-1,1),rf(-1,1),rf(-1,1)}, r1[9], r2[9];
    float a1=rf(-3.2f,3.2f), a2=rf(-3.2f,3.2f);
    float t1[9]={cosf(a1),0,-sinf(a1),0,1,0,sinf(a1),0,cosf(a1)}, t2[9]={cosf(a2),0,-sinf(a2),0,1,0,sinf(a2),0,cosf(a2)};
    memcpy(r1,t1,36); memcpy(r2,t2,36);
    if(c%3==1) for(int k=0;k<9;k++){ r1[k]=rf(-1,1); r2[k]=rf(-1,1); }
    uint32_t flag=rnd()%3;   /* bit 0 skips a's points; any nonzero skips the first edge side test */
    printf("== case %d %d/%d/%d %d/%d/%d flag %d\n",c,m1.faces,m1.edges,m1.verts,m2.faces,m2.edges,m2.verts,flag);
#ifdef ENGINE
    int r=collision_mesh_contact(7,9,&m1,&m2,p1,r1,p2,r2,flag);
#else
    int r=(int)((MS uint64_t(*)(int,int,void*,void*,float*,float*,float*,float*,uint64_t))F(0x140048DA0ULL))(7,9,&m1,&m2,p1,r1,p2,r2,flag);
#endif
    printf("-> %d\n",r&0xff);
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
