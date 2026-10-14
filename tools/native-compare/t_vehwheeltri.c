// A wheel (a disc) against triangles: an edge through a plane (0x140077B30), one triangle (0x14003F0B0) and a list of
// triangles (0x14003D830), with identical arguments in two processes; nothing is stubbed (the vector normalize
// 0x14007A240 runs for real). Mode "engine": src/engine/collision_wheel.c.
#include "peload.h"
#ifdef ENGINE
MS int collision_edge_plane(float point[3], const float normal[3], float *t, const float a[3], const float b[3], const float on_plane[3]);
MS int collision_wheel_triangle(float point[3], float normal[3], float *distance, const float centre[3], const float axle[3], float radius, const float a[3], const float b[3], const float c[3]);
MS int collision_wheel_triangles(float *hit, const int32_t *list, const float centre[3], const float axle[3], float radius);
#endif
static uint32_t rs=5150; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static float frand(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFFFF)/16777216.0f; }
static uint32_t canon(float f){ uint32_t w; memcpy(&w,&f,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; return w; }
static void prf(const char *t,const float *p,int n){ printf("%s",t); for(int k=0;k<n;k++) printf(" %08x",canon(p[k])); }
static const float specials[]={0.0f,-0.0f,1.0f,-1.0f,1e30f,-1e30f,INFINITY,-INFINITY,NAN,0.00390625f,1e-20f};
static int wild;
static float pick(float lo,float hi){ if(wild && rnd()%(unsigned)wild==0) return specials[rnd()%11]; return frand(lo,hi); }
static int32_t list[1+12*40+4];
static void unit(float *v){ float l=sqrtf(v[0]*v[0]+v[1]*v[1]+v[2]*v[2]); if(l>0){ v[0]/=l; v[1]/=l; v[2]/=l; } }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):60000;
  for(int c=0;c<cases;c++){ wild=c%4==3?12:c%4==2?0:90;
    float centre[3]={pick(-5.0f,5.0f),pick(-5.0f,5.0f),pick(-5.0f,5.0f)}, axle[3]={pick(-1.0f,1.0f),pick(-1.0f,1.0f),pick(-1.0f,1.0f)}, radius=pick(0.2f,2.5f);
    if(rnd()%3) unit(axle);
    float tri[3][3]; for(int i=0;i<3;i++) for(int k=0;k<3;k++) tri[i][k]=centre[k]+pick(-3.0f,3.0f);
    if(rnd()%4==0){ // a floor under the wheel: the face is touched
      float y=centre[1]-frand(0.0f,1.2f)*radius; tri[0][0]=centre[0]-9; tri[0][1]=y; tri[0][2]=centre[2]-9; tri[1][0]=centre[0]; tri[1][1]=y+pick(-0.2f,0.2f); tri[1][2]=centre[2]+9; tri[2][0]=centre[0]+9; tri[2][1]=y; tri[2][2]=centre[2]-9; }
    float normal[3];
    { float b[3],d[3]; for(int k=0;k<3;k++){ b[k]=tri[1][k]-tri[0][k]; d[k]=tri[2][k]-tri[0][k]; } normal[0]=d[1]*b[2]-d[2]*b[1]; normal[1]=d[2]*b[0]-d[0]*b[2]; normal[2]=d[0]*b[1]-d[1]*b[0]; unit(normal); }
    if(rnd()%10==0) for(int k=0;k<3;k++) normal[k]=pick(-1.0f,1.0f);
    if(rnd()%25==0) memcpy(normal,axle,sizeof normal);       // the wheel lies flat on the triangle's plane
    printf("== case %d",c);
    switch(c%3){
      case 0: { float point[3]={7,7,7}, t=7; int r;
#ifdef ENGINE
        r=collision_edge_plane(point,axle,&t,tri[0],tri[1],centre);
#else
        r=((MS int(*)(float*,const float*,float*,const float*,const float*,const float*))F(0x140077B30ULL))(point,axle,&t,tri[0],tri[1],centre);
#endif
        printf(" edge %d",r); prf(" point",point,3); prf(" t",&t,1); } break;
      case 1: { float point[3]={7,7,7}, distance=7; int r;
#ifdef ENGINE
        r=collision_wheel_triangle(point,normal,&distance,centre,axle,radius,tri[0],tri[1],tri[2]);
#else
        r=((MS int(*)(float*,float*,float*,const float*,const float*,float,const float*,const float*,const float*))F(0x14003F0B0ULL))(point,normal,&distance,centre,axle,radius,tri[0],tri[1],tri[2]);
#endif
        printf(" triangle %d",r&0xFF); prf(" point",point,3); prf(" normal",normal,3); prf(" distance",&distance,1); } break;
      default: { float hit[8]; for(int k=0;k<8;k++) hit[k]=7; int n=rnd()%6==0?(int)(rnd()%3)-1:(int)(1+rnd()%30); list[0]=n;
        for(int i=0;i<40;i++){ float *q=(float*)(void*)&list[1+12*i]; for(int k=0;k<12;k++) q[k]=centre[k%3]+pick(-3.0f,3.0f);
          if(rnd()%5==0){ float y=centre[1]-frand(0.0f,1.2f)*radius; q[0]=centre[0]-9; q[1]=y; q[2]=centre[2]-9; q[3]=centre[0]; q[4]=y; q[5]=centre[2]+9; q[6]=centre[0]+9; q[7]=y; q[8]=centre[2]-9; } }
        int r;
#ifdef ENGINE
        r=collision_wheel_triangles(hit,list,centre,axle,radius);
#else
        r=((MS int(*)(float*,const int32_t*,const float*,const float*,float))F(0x14003D830ULL))(hit,list,centre,axle,radius);
#endif
        printf(" list of %d: %d",n,r&0xFF); prf(" hit",hit,8); } break; }
    printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
