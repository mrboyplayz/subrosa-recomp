// Two segment tests in two processes. The cube-face test 0x1400DC650 (src/engine/collision_cells.c
// collision_segment_cell) on random cells, face masks and scales; the placed-mesh sweep 0x1400DA960
// (src/engine/collision_placed_sweep.c collision_segment_placed_mesh) on random grouped meshes. The line/triangle
// test 0x140077FA0 runs for real.
#include "peload.h"
#ifdef ENGINE
MS int collision_segment_cell(float *point,float *normal,float *t,const float *from,const float *to,const int32_t *voxel,uint32_t faces,float scale);
MS int collision_segment_placed_mesh(float *hit,const void *mesh,const float *points,const float *from,const float *to);
#endif
static uint32_t rs=1999; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
static float rfn(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
static void pw(const char *n,const void *p,int k){ printf(" %s",n); for(int i=0;i<k;i++){ uint32_t w; memcpy(&w,(const uint8_t*)p+4*i,4); printf(" %08x",canon(w)); } }
#define G(type,addr) (*(type*)D(addr))
typedef struct { uint32_t u0; int32_t count; int32_t corner[4]; float normal[3]; } Face;
typedef struct { int32_t face_count; uint32_t u4; Face *faces; uint8_t pad[0x38-0x10]; } Group;
typedef struct { int32_t point_count; uint32_t u4; float *points; int32_t group_count; uint8_t pad[0x30-0x14]; Group groups[4]; } Mesh;
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  static Mesh mesh; static Face faces[4][16]; static float points[32][3];
  for(int c=0;c<cases;c++){
    if(c%2==0){   /* cube faces */
      int32_t voxel[3]; for(int k=0;k<3;k++) voxel[k]=(int32_t)(rnd()%40)-20;
      uint32_t mask=rnd()%3?(uint32_t)rnd()&0xFFF:0xFFF; if(rnd()%10==0) mask=(uint32_t)rnd32();
      float scale=rnd()%4?(rnd()%2?1.0f:0.25f):rfn(0.1f,4.0f); if(rnd()%50==0) scale=special[rnd()%11];
      float from[3], to[3];
      for(int k=0;k<3;k++){ float centre=((float)voxel[k]+0.5f)*scale; from[k]=centre+rfn(-2,2)*scale; to[k]=centre+rfn(-2,2)*scale; }
      if(rnd()%30==0) from[rnd()%3]=special[rnd()%11]; if(rnd()%30==0) to[rnd()%3]=special[rnd()%11];
      float point[3], normal[3], t; for(int k=0;k<3;k++){ uint32_t w=rnd32(); memcpy(&point[k],&w,4); w=rnd32(); memcpy(&normal[k],&w,4); } { uint32_t w=rnd32(); memcpy(&t,&w,4); }
      G(int32_t,0x151A848ECULL)=(int32_t)rnd32();
#ifdef ENGINE
      int r=collision_segment_cell(point,normal,&t,from,to,voxel,mask,scale);
#else
      int r=(int)((MS uint64_t(*)(float*,float*,float*,const float*,const float*,const int32_t*,uint32_t,float))F(0x1400DC650ULL))(point,normal,&t,from,to,voxel,mask,scale);
#endif
      printf("cell %d %d",c,r); pw("p",point,3); pw("n",normal,3); pw("t",&t,1); printf(" face %08x\n",G(uint32_t,0x151A848ECULL));
    } else {      /* placed mesh */
      int np=4+(int)(rnd()%28); float size=rfn(0.5f,5.0f);
      for(int p=0;p<np;p++) for(int k=0;k<3;k++) points[p][k]=rfn(-size,size);
      if(rnd()%20==0) points[rnd()%np][rnd()%3]=special[rnd()%11];
      mesh.point_count=np; mesh.points=&points[0][0]; mesh.group_count=(int)(rnd()%5); if(rnd()%30==0) mesh.group_count=-1;
      for(int g=0;g<4;g++){ mesh.groups[g].face_count=(int)(rnd()%16); mesh.groups[g].faces=faces[g];
        for(int f=0;f<16;f++){ Face *fc=&faces[g][f]; fc->count=rnd()%2?4:(rnd()%8?3:(int)(rnd()%6)); for(int k=0;k<4;k++) fc->corner[k]=(int32_t)(rnd()%np);
          if(rnd()%10==0) fc->corner[2]=fc->corner[1]; fc->u0=rnd32(); for(int k=0;k<3;k++) fc->normal[k]=rfn(-1,1); } }
      float from[3], to[3];
      if(rnd()%2){ Face *fc=&faces[rnd()%4][rnd()%16]; for(int k=0;k<3;k++){ float m=(points[fc->corner[0]][k]+points[fc->corner[1]][k]+points[fc->corner[2]][k])/3.0f, d=rfn(-1,1)*rfn(0.5f,6); from[k]=m+d; to[k]=m-d*rfn(0.5f,2); } }
      else for(int k=0;k<3;k++){ from[k]=rfn(-2*size,2*size); to[k]=rfn(-2*size,2*size); }
      if(rnd()%30==0) from[rnd()%3]=special[rnd()%11]; if(rnd()%30==0) to[rnd()%3]=special[rnd()%11];
      float hit[8]; for(int k=0;k<8;k++){ uint32_t w=rnd32(); memcpy(&hit[k],&w,4); }
#ifdef ENGINE
      int r=collision_segment_placed_mesh(hit,&mesh,&points[0][0],from,to);
#else
      int r=(int)((MS uint64_t(*)(float*,void*,float*,const float*,const float*))F(0x1400DA960ULL))(hit,&mesh,&points[0][0],from,to);
#endif
      printf("mesh %d %d",c,r); pw("h",hit,8); printf("\n");
    }
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
