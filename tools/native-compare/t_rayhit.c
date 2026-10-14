// Rays against a vehicle's collision mesh with 0x1400DFB70 (ROUTINE=dfb70, flag argument random) or 0x1400DDB70
// (ROUTINE=ddb70) in the original and the recompiled image, on identical random meshes and placements. Prints the
// result and the closest hit record at 0x151A84894... Run with run_client.sh.
#include "peload.h"
#ifdef ENGINE
MS int collision_ray_vehicle(int vehicle,const float *from,const float *to,int wheels);
#endif
static uint32_t rs=2024; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static float rf(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
#define A(index) ((uint32_t*)D(0x140404A6CULL+4ULL*(index)))
#define FA(index) ((float*)A(index))
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):3000; const char *which=getenv("ROUTINE"); int ddb=which&&!strcmp(which,"ddb70");
  const int T=3, M=45072*T;
  for(int c=0;c<cases;c++){
    for(int k=129716700;k<129716900;k++) *A(k)=0;
    *A(129716710)=T;
    *A(129716769)=rnd();   /* the value copied into face and window hits */
    float px=rf(-50,50), py=rf(0,20), pz=rf(-50,50), ang=rf(-3.2f,3.2f), cs=cosf(ang), sn=sinf(ang);
    *FA(129716720)=px; *FA(129716721)=py; *FA(129716722)=pz;
    float m[9]={cs,0,-sn, 0,1,0, sn,0,cs};
    for(int k=0;k<9;k++) *FA(129716726+k)=m[k];
    *FA(129716753)=px-40; *FA(129716754)=py-40; *FA(129716755)=pz-40; *FA(129716756)=px+40; *FA(129716757)=py+40; *FA(129716758)=pz+40;
    int nv=4+(int)(rnd()%60); *A(335170684+M)=nv;
    for(int v=0;v<nv;v++){ *FA(335170685+M+3*v)=rf(-6,6); *FA(335170686+M+3*v)=rf(-3,3); *FA(335170687+M+3*v)=rf(-6,6); }
    int nt=(int)(rnd()%40); *A(335173757+M)=nt;
    for(int t=0;t<nt;t++){ uint32_t *r=A(335173759+M+26*t); r[0]=rnd()%3==0?4:3; for(int k=1;k<5;k++) r[k]=rnd()%nv; for(int k=5;k<26;k++) r[k]=rnd()%4; }
    int nb=(int)(rnd()%4); *A(335200382+M)=nb;
    for(int k=129719268;k<129719268+8;k++) *A(k)=0;
    for(int b=0;b<nb;b++){ for(int k=0;k<13;k++) *FA(335200383+M+13*b+k)=rf(-6,6); *A(129719268+b)=rnd()%3==0; }
    int nw=(int)(rnd()%5); *A(129720373)=nw;
    for(int w=0;w<nw;w++){ for(int k=0;k<43;k++) *FA(129720387+43*w+k)=rf(-3,3); *FA(129720387+43*w)=rf(0.2f,1.5f);
      *FA(129720393+43*w)=px+rf(-6,6); *FA(129720394+43*w)=py+rf(-3,3); *FA(129720395+43*w)=pz+rf(-6,6); }
    if(c%3==1) for(int k=0;k<9;k++) *FA(129716726+k)=rf(-1,1);
    float from[3]={px+rf(-12,12),py+rf(-5,5),pz+rf(-12,12)}, to[3]={px+rf(-12,12),py+rf(-5,5),pz+rf(-12,12)};
    if(c%5==3){ int k=(int)(rnd()%3); float lim=*FA(129716756+k); from[k]=lim+rf(0,10); }   /* starting beyond the box */
    if(c%6==2 && nb>0){   /* a flat window in y and a ray starting exactly in its plane */
      float m0[9]={1,0,0,0,1,0,0,0,1}; for(int k=0;k<9;k++) *FA(129716726+k)=m0[k];
      float wy=(float)(int)rf(-2,2); for(int q=0;q<4;q++) *FA(335200383+M+2+3*q)=wy; *A(129719268)=0;
      from[1]=wy+py; if(rnd()%2){ to[1]=from[1]; from[1]=py+rf(-3,3); }
    }
    if(c%31==0) from[rnd()%3]=__builtin_nanf("");
    if(c%37==0) to[rnd()%3]=__builtin_nanf("");
    for(int k=73006981;k<=73007000;k++) *A(k)=rnd()|0x40000000u;   /* garbage: every field written must be written */
    *FA(73006987)=0.0f;
    int r;
    if(ddb) r=(int)((MS uint64_t(*)(int,float*,float*))F(0x1400DDB70ULL))(0,from,to);
    else {
      int wheels=(int)(rnd()%2);
#ifdef ENGINE
      r=collision_ray_vehicle(0,from,to,wheels);
#else
      r=(int)((MS uint64_t(*)(int,float*,float*,int))F(0x1400DFB70ULL))(0,from,to,wheels);
#endif
    }
    printf("case %d: %d verts %d faces -> %d",c,nv,nt,r);
    for(int k=73006981;k<=73007000;k++){ uint32_t w=*A(k); if((w&0x7f800000)==0x7f800000&&(w&0x7fffff)) w=0x7fc00000; printf(" %08x",w); } printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
