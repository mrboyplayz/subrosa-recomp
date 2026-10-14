// A segment against one block's shape, 0x1400DE770 (src/engine/collision_shapes.c collision_segment_block_shape), in
// two processes: random block-shape records (quads over a vertex table, inline part quads, ids), gone masks, voxels
// and scales, segments through the cell from all sides (parts are hit from both). 0x140077FA0 runs for real.
#include "peload.h"
#ifdef ENGINE
MS int collision_segment_block_shape(float *point,float *normal,float *t,const float *from,const float *to,const int32_t *voxel,uint32_t type_and_gone,float scale);
#endif
static uint32_t rs=4711; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
static float rfn(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
static void pw(const char *n,const void *p,int k){ printf(" %s",n); for(int i=0;i<k;i++){ uint32_t w; memcpy(&w,(const uint8_t*)p+4*i,4); printf(" %08x",canon(w)); } }
#define G(type,addr) (*(type*)D(addr))
#define SHAPE(t) (&G(uint8_t,0x145098C00ULL+0xE8ULL*(uint64_t)(t)))
#define NTYPE 6
static float vertex[NTYPE][24][3]; static int32_t quad[NTYPE][12][4]; static int32_t ids[NTYPE][40]; static float part[NTYPE][40][12];
static void make_shape(int t){ uint8_t *s=SHAPE(t);
  for(int v=0;v<24;v++) for(int k=0;k<3;k++) vertex[t][v][k]=rnd()%3?(float)(rnd()%3)*0.5f:rfn(0,1);
  if(rnd()%30==0) vertex[t][rnd()%24][rnd()%3]=special[rnd()%11];
  int nq=(int)(rnd()%12), np=(int)(rnd()%40); if(rnd()%20==0) nq=-1;
  for(int q=0;q<12;q++) for(int i=0;i<4;i++) quad[t][q][i]=(int32_t)(rnd()%24);
  for(int i=0;i<40;i++) ids[t][i]=(int32_t)rnd32();
  for(int p=0;p<40;p++){ float c[3]; for(int k=0;k<3;k++) c[k]=rfn(0,1); for(int i=0;i<4;i++) for(int k=0;k<3;k++) part[t][p][3*i+k]=c[k]+rfn(-0.5f,0.5f);
    if(rnd()%3==0){ int ax=(int)(rnd()%3); for(int i=0;i<4;i++) part[t][p][3*i+ax]=c[ax]; }   /* flat: an axis-aligned quad */
    if(rnd()%30==0) part[t][p][rnd()%12]=special[rnd()%11]; }
  const void *vp=vertex[t], *qp=quad[t], *ip=ids[t], *pp=part[t];
  memcpy(s+0x48,&vp,8); memcpy(s+0x68,&nq,4); memcpy(s+0x88,&qp,8); memcpy(s+0x90,&ip,8); memcpy(s+0xD8,&np,4); memcpy(s+0xE0,&pp,8); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  for(int c=0;c<cases;c++){
    if(c%100==0) for(int t=0;t<NTYPE;t++) make_shape(t);
    int type=(int)(rnd()%NTYPE); uint32_t gone=rnd()%3?0:(uint32_t)rnd()&0xFFFF; if(rnd()%10==0) gone=0x3FF;
    int32_t voxel[3]; for(int k=0;k<3;k++) voxel[k]=(int32_t)(rnd()%40)-20;
    float scale=rnd()%3?0.25f:rfn(0.1f,3.0f); if(rnd()%50==0) scale=special[rnd()%11];
    float from[3], to[3];
    for(int k=0;k<3;k++){ float centre=((float)voxel[k]+0.5f)*scale; from[k]=centre+rfn(-1.5f,1.5f)*scale; to[k]=centre+rfn(-1.5f,1.5f)*scale; }
    if(rnd()%30==0) from[rnd()%3]=special[rnd()%11]; if(rnd()%30==0) to[rnd()%3]=special[rnd()%11];
    float point[3], normal[3], t; for(int k=0;k<3;k++){ uint32_t w=rnd32(); memcpy(&point[k],&w,4); w=rnd32(); memcpy(&normal[k],&w,4); }
    G(int32_t,0x151A848ECULL)=(int32_t)rnd32(); G(int32_t,0x151A848F4ULL)=(int32_t)rnd32();
    uint32_t arg=(uint32_t)type|(gone<<16);
#ifdef ENGINE
    int r=collision_segment_block_shape(point,normal,&t,from,to,voxel,arg,scale);
#else
    int r=(int)((MS uint64_t(*)(float*,float*,float*,const float*,const float*,const int32_t*,uint32_t,float))F(0x1400DE770ULL))(point,normal,&t,from,to,voxel,arg,scale);
#endif
    printf("%d %d",c,r); pw("p",point,3); pw("n",normal,3); pw("t",&t,1); printf(" id %08x %08x\n",G(uint32_t,0x151A848ECULL),G(uint32_t,0x151A848F4ULL));
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
