// Sweeps spheres against an ordinary vehicle (type 3) with 0x140037220 on identical random hull meshes (the second
// collision mesh of a vehicle type: vertices at 0x19028EC54, faces of 3 or 4 corners at 0x190291C58) and placements.
// Prints the result and the closest hit. run_client.sh: original vs recompiled; run.sh: original vs src/engine.
#include "peload.h"
#ifdef ENGINE
MS int collision_sweep_vehicle(int vehicle,const float *from,const float *to,float radius);
#endif
static uint32_t rs=777; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static float rf(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
#define A(index) ((uint32_t*)D(0x140404A6CULL+4ULL*(index)))
#define FA(index) ((float*)A(index))
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):3000;
  for(int c=0;c<cases;c++){
    const int T=c%10==9?13:3, M=45072*T;   /* trains go to 0x140035E50 instead (their own mesh, left empty here) */
    for(int k=129716700;k<129716900;k++) *A(k)=0;
    *A(129716710)=T;
    float px=rf(-50,50), py=rf(0,20), pz=rf(-50,50), ang=rf(-3.2f,3.2f), cs=cosf(ang), sn=sinf(ang);
    *FA(129716720)=px; *FA(129716721)=py; *FA(129716722)=pz;
    float m[9]={cs,0,-sn, 0,1,0, sn,0,cs};
    if(c%3==1) for(int k=0;k<9;k++) m[k]=rf(-1,1);
    for(int k=0;k<9;k++) *FA(129716726+k)=m[k];
    *FA(129716753)=px-10; *FA(129716754)=py-6; *FA(129716755)=pz-10; *FA(129716756)=px+10; *FA(129716757)=py+6; *FA(129716758)=pz+10;
    int nv=4+(int)(rnd()%60); *A(335161466+M)=nv;
    for(int v=0;v<nv;v++){ *FA(335161467+M+3*v)=rf(-6,6); *FA(335161468+M+3*v)=rf(-3,3); *FA(335161469+M+3*v)=rf(-6,6); }
    if(c%7==0) nv=1+(int)(rnd()%3), *A(335161466+M)=nv;   /* fewer than 4: only the remainder loop */
    int nt=(int)(rnd()%40); *A(335164539+M)=nt;
    for(int t=0;t<nt;t++){ uint32_t *r=A(335164541+M+6*t); r[0]=rnd()%3==0?4:3; for(int k=1;k<5;k++) r[k]=rnd()%nv; r[5]=rnd(); }
    float from[3]={px+rf(-15,15),py+rf(-8,8),pz+rf(-15,15)}, to[3]={px+rf(-15,15),py+rf(-8,8),pz+rf(-15,15)}, radius=rf(0,1.5f);
    if(c%31==0){ float nan=__builtin_nanf(""); if(rnd()%2) radius=nan; else from[rnd()%3]=nan; }
    for(int k=73006981;k<=73006988;k++) *A(k)=0;
#ifdef ENGINE
    int r=collision_sweep_vehicle(0,from,to,radius);
#else
    int r=(int)((MS uint64_t(*)(int,float*,float*,float))F(0x140037220ULL))(0,from,to,radius);
#endif
    printf("case %d: %d verts %d faces -> %d",c,nv,nt,r&1);
    for(int k=73006981;k<=73006988;k++){ uint32_t w=*A(k); if((w&0x7f800000)==0x7f800000&&(w&0x7fffff)) w=0x7fc00000; printf(" %08x",w); } printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
