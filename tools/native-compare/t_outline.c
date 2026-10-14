// Block shape outlines, 0x140018CA0 (src/engine/world_block_outline.c world_block_shape_outline), in two processes,
// on random shapes (points, quads), layer origins, voxels and scales, appending to lists that are empty, partly
// full or nearly full (the list holds 256 lines). The list is printed (NaN canonical) after every call.
#include "peload.h"
#ifdef ENGINE
MS void world_block_shape_outline(void *list,int layer,const int32_t *voxel,uint16_t shape,float scale);
#endif
static uint32_t rs=31415; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
static float rfn(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
#define G(type,addr) (*(type*)D(addr))
#define SHAPE(t) (0x145098C00ULL+0xE8ULL*(uint64_t)(t))
static struct { int32_t count; float lines[257][6]; } list;
static float pts[4][24][3]; static int32_t quads[4][40][4];
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):8000;
  for(int c=0;c<cases;c++){
    if(c%50==0) for(int t=0;t<4;t++){ uint64_t s=SHAPE(t);
      for(int p=0;p<24;p++) for(int k=0;k<3;k++) pts[t][p][k]=rnd()%40==0?special[rnd()%11]:rfn(-1,2);
      for(int q=0;q<40;q++) for(int k=0;k<4;k++) quads[t][q][k]=(int32_t)(rnd()%24);
      const void *pp=pts[t],*qp=quads[t]; int32_t n=rnd()%10==0?-(int32_t)(rnd()%3):(int32_t)(rnd()%40);
      memcpy(D(s+0x48),&pp,8); memcpy(D(s+0x88),&qp,8); memcpy(D(s+0x68),&n,4); }
    int layer=(int)(rnd()%4);
    for(int k=0;k<3;k++) G(float,0x15ADA9244ULL+0x100D70ULL*layer+4*k)=rnd()%30==0?special[rnd()%11]:rfn(-500,500);
    int32_t voxel[3]; for(int k=0;k<3;k++) voxel[k]=rnd()%10==0?(int32_t)rnd32():(int32_t)(rnd()%300)-20;
    float scale=rnd()%20==0?special[rnd()%11]:rnd()%2?0.25f:rfn(-2,2);
    uint16_t shape=(uint16_t)(rnd()%4);
    for(int i=0;i<257;i++) for(int k=0;k<6;k++) { uint32_t w=rnd32(); memcpy(&list.lines[i][k],&w,4); }
    unsigned k=rnd()%4; list.count=k==0?0:k==1?(int32_t)(rnd()%256):k==2?250+(int32_t)(rnd()%7):(int32_t)(rnd()%300);
    printf("%d %d %d %d %d %d %08x %d:",c,layer,voxel[0],voxel[1],voxel[2],shape,canon(*(uint32_t*)&scale),list.count);
#ifdef ENGINE
    world_block_shape_outline(&list,layer,voxel,shape,scale);
#else
    ((MS int64_t(*)(void*,int,const int32_t*,uint16_t,float))F(0x140018CA0ULL))(&list,layer,voxel,shape,scale);
#endif
    printf(" -> %d",list.count);
    for(int i=0;i<257;i++) for(int k=0;k<6;k++){ uint32_t w; memcpy(&w,&list.lines[i][k],4); printf(" %x",canon(w)); }
    printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
