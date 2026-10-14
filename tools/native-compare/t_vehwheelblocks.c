// A wheel against the blocks of one voxel: a cube (0x14003E100) and a block shape (0x14003E4B0), with identical
// shapes and arguments in two processes; nothing is stubbed (the wheel-triangle test runs for real).
// Mode "engine": src/engine/collision_wheel_blocks.c.
#include "peload.h"
#ifdef ENGINE
MS int collision_wheel_cube(float *point, float *normal, float *distance, const float *centre, const float *axle, float radius, const int32_t *voxel, uint32_t faces, float scale);
MS int collision_wheel_shape(float *point, float *normal, float *distance, const float *centre, const float *axle, float radius, const int32_t *voxel, uint16_t shape, float scale);
#endif
static uint32_t rs=1541; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float frand(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFFFF)/16777216.0f; }
#define G(type,addr) (*(type*)D(addr))
static uint32_t canon(float f){ uint32_t w; memcpy(&w,&f,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; return w; }
static void prf(const char *t,const float *p,int n){ printf("%s",t); for(int k=0;k<n;k++) printf(" %08x",canon(p[k])); }
#define NSHAPE 6
static float vertices[NSHAPE][24][3]; static int32_t tris[NSHAPE][16][3], tri_id[NSHAPE][16], quads[NSHAPE][16][4], quad_id[NSHAPE][16];
static const uint16_t shape_index[NSHAPE]={0,1,2,77,4000,65535};
static void make_shapes(void){
  for(int s=0;s<NSHAPE;s++){ uint8_t *sp=&G(uint8_t,0x145098C00ULL+0xE8ULL*shape_index[s]);
    for(int i=0;i<24;i++) for(int k=0;k<3;k++) vertices[s][i][k]=rnd()%3?(float)(rnd()%3)*0.5f:frand(-0.2f,1.2f);
    int nt=rnd()%4==0?0:(int)(rnd()%17), nq=rnd()%4==0?0:(int)(rnd()%17);
    for(int i=0;i<16;i++){ for(int k=0;k<3;k++) tris[s][i][k]=(int32_t)(rnd()%24); for(int k=0;k<4;k++) quads[s][i][k]=(int32_t)(rnd()%24); tri_id[s][i]=(int32_t)rnd32(); quad_id[s][i]=(int32_t)rnd32();
      if(rnd()%3==0){ int a=(int)(rnd()%21); quads[s][i][0]=a; quads[s][i][1]=a+1; quads[s][i][2]=a+2; quads[s][i][3]=a+3; } }
    void *p; p=vertices[s]; memcpy(sp+0x48,&p,8); p=quads[s]; memcpy(sp+0x88,&p,8); p=quad_id[s]; memcpy(sp+0x90,&p,8); p=tris[s]; memcpy(sp+0xB0,&p,8); p=tri_id[s]; memcpy(sp+0xB8,&p,8);
    memcpy(sp+0x68,&nq,4); memcpy(sp+0xA8,&nt,4); } }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):40000;
  for(int c=0;c<cases;c++){
    if(c%500==0) make_shapes();
    int32_t voxel[3]={(int32_t)(rnd()%64),(int32_t)(rnd()%64),(int32_t)(rnd()%64)}; if(rnd()%20==0) voxel[rnd()%3]=-(int32_t)(rnd()%5);
    float scale=rnd()%3?4.0f:frand(0.5f,8.0f), radius=frand(0.3f,3.0f)*(rnd()%4?1.0f:scale);
    float centre[3]; for(int k=0;k<3;k++) centre[k]=((float)voxel[k]+frand(-1.0f,2.0f))*scale;
    float axle[3]={frand(-1.0f,1.0f),frand(-1.0f,1.0f),frand(-1.0f,1.0f)}; { float l=sqrtf(axle[0]*axle[0]+axle[1]*axle[1]+axle[2]*axle[2]); if(l>0&&rnd()%4){ axle[0]/=l; axle[1]/=l; axle[2]/=l; } }
    if(rnd()%60==0) centre[rnd()%3]=NAN; if(rnd()%60==0) axle[rnd()%3]=rnd()%2?NAN:INFINITY;
    float point[3]={7,7,7}, normal[3]={7,7,7}, distance=7; int r; G(int32_t,0x151A848ECULL)=-77;
    if(c%2){ uint32_t faces=rnd()%4==0?rnd32():rnd()%3==0?0xFFFu:((rnd()&63)*65u);
#ifdef ENGINE
      r=collision_wheel_cube(point,normal,&distance,centre,axle,radius,voxel,faces,scale);
#else
      r=((MS int(*)(float*,float*,float*,const float*,const float*,float,const int32_t*,uint32_t,float))F(0x14003E100ULL))(point,normal,&distance,centre,axle,radius,voxel,faces,scale);
#endif
      printf("cube %08x -> %d",faces,r&0xFF);
    } else { uint16_t s=shape_index[rnd()%NSHAPE];
#ifdef ENGINE
      r=collision_wheel_shape(point,normal,&distance,centre,axle,radius,voxel,s,scale);
#else
      r=((MS int(*)(float*,float*,float*,const float*,const float*,float,const int32_t*,uint16_t,float))F(0x14003E4B0ULL))(point,normal,&distance,centre,axle,radius,voxel,s,scale);
#endif
      printf("shape %u -> %d",s,r&0xFF); }
    prf(" point",point,3); prf(" normal",normal,3); prf(" distance",&distance,1); printf(" face %d\n",G(int32_t,0x151A848ECULL));
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
