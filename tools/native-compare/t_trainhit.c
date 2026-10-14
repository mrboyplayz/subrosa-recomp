// Sweeps spheres against a train (vehicle type 13) with 0x140035E50 in the original and the recompiled image, on
// identical random train meshes (vertices, triangle and quad faces, boxes) and placements, and prints the result and
// the closest hit (point, normal, distance at 0x151A84880..). run_client.sh: original vs recompiled; run.sh: original vs
// src/engine/collision.c.
#include "peload.h"
#ifdef ENGINE
MS int collision_sweep_train(int vehicle,const float *from,const float *to,float radius);
#endif
static uint32_t rs=1313; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static float rf(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
#define A(index) ((uint32_t*)D(0x140404A6CULL+4ULL*(index)))
#define FA(index) ((float*)A(index))
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):3000;
  const int T=13, M=45072*T;
  for(int c=0;c<cases;c++){
    /* vehicle 0: a train at a random place, rotated about y */
    for(int k=129716700;k<129716900;k++) *A(k)=0;
    for(int k=129719268;k<129719268+8;k++) *A(k)=0;
    *A(129716710)=T;
    float px=rf(-50,50), py=rf(0,20), pz=rf(-50,50), ang=rf(-3.2f,3.2f), cs=cosf(ang), sn=sinf(ang);
    *FA(129716720)=px; *FA(129716721)=py; *FA(129716722)=pz;
    float m[9]={cs,0,-sn, 0,1,0, sn,0,cs}; if(c%5==0){ float t[9]={1,0,0,0,1,0,0,0,1}; memcpy(m,t,36); }
    if(c%3==1) for(int k=0;k<9;k++) m[k]=rf(-1,1);   /* general matrices: every term of the transform counts */
    for(int k=0;k<9;k++) *FA(129716726+k)=m[k];
    *FA(129716753)=px-40; *FA(129716754)=py-40; *FA(129716755)=pz-40; *FA(129716756)=px+40; *FA(129716757)=py+40; *FA(129716758)=pz+40;
    /* mesh of type 13 */
    int nv=4+(int)(rnd()%60); *A(335170684+M)=nv;
    for(int v=0;v<nv;v++){ *FA(335170685+M+3*v)=rf(-6,6); *FA(335170686+M+3*v)=rf(-3,3); *FA(335170687+M+3*v)=rf(-20,20); }
    int nt=(int)(rnd()%40); *A(335173757+M)=nt;
    for(int t=0;t<nt;t++){ uint32_t *r=A(335173759+M+26*t); r[0]=rnd()%3==0?4:3; for(int k=1;k<5;k++) r[k]=rnd()%nv; }
    int nb=(int)(rnd()%4); if(getenv("NOBOX")) nb=0; if(getenv("NOFACE")) { nt=0; *A(335173757+M)=0; } *A(335200382+M)=nb;
    for(int b=0;b<nb;b++){ for(int k=0;k<13;k++) *FA(335200383+M+13*b+k)=rf(-4,4); *A(129719268+b)=rnd()%3==0; }
    float from[3]={px+rf(-15,15),py+rf(-5,5),pz+rf(-25,25)}, to[3]={px+rf(-15,15),py+rf(-5,5),pz+rf(-25,25)}, radius=rf(0,1.5f);
    if(c%4==2){ int k=(int)(rnd()%3); float edge=*FA((rnd()%2?129716756:129716753)+k); from[k]=edge+rf(-3,3); to[k]=edge+rf(-3,3); }   /* ends around a face of the box */
    if(c%31==0){ float nan=__builtin_nanf(""); if(rnd()%2) radius=nan; else from[rnd()%3]=nan; }
    for(int k=73006981;k<=73006988;k++) *A(k)=0;
#ifdef ENGINE
    int r=collision_sweep_train(0,from,to,radius);
#else
    int r=(int)((MS uint64_t(*)(int,float*,float*,float))F(0x140035E50ULL))(0,from,to,radius);
#endif
    printf("case %d: %d verts %d faces %d boxes -> %d",c,nv,nt,nb,r);
    for(int k=73006981;k<=73006988;k++) printf(" %08x",*A(k)); printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
