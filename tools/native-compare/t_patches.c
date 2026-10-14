// Cube faces as surface patches, 0x140019940 (src/engine/world_block_patches.c world_block_cube_patches), in two
// processes. The face flags 0x14001B5C0 and the tessellator 0x140001F20 are logging stubs; the tessellator stub prints
// the whole control grid it is handed.
#include "peload.h"
#ifdef ENGINE
MS void world_block_cube_patches(int turn,const float *origin,const float *scale,uint32_t faces,const int32_t *textures);
#endif
static uint32_t rs=12321; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
static float rfn(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
#define G(type,addr) (*(type*)D(addr))
static uint32_t ss; static uint32_t sr(void){ ss=ss*1103515245u+12345u; return ss>>8; }
static MS int64_t s_1b5c0(int turn,int code){ uint32_t r=sr()<<16; printf(" [flags %d %x -> %x]",turn,code,r); return (int64_t)(int32_t)r; }
static MS int64_t s_1f20(float *points,float *coords,int a,int b,int c,int d,int flags){
  printf(" [patch %d %d %d %d %08x %d",a,b,c,d,(uint32_t)flags,coords==(float*)D(0x14500A680ULL));
  for(int i=0;i<48;i++){ uint32_t w; memcpy(&w,&points[i],4); printf(" %08x",canon(w)); } printf("]"); return 0; }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  hook(0x14001B5C0ULL,s_1b5c0); hook(0x140001F20ULL,s_1f20);
  for(int c=0;c<cases;c++){
    float origin[3], scale[3]; int32_t tex[6];
    for(int k=0;k<3;k++){ origin[k]=rfn(-100,100); scale[k]=rnd()%2?0.25f:rfn(-2,2); if(rnd()%40==0) origin[k]=special[rnd()%11]; }
    for(int f=0;f<6;f++) tex[f]=rnd()%2?(int32_t)(rnd()%16):(int32_t)rnd32();
    int turn=rnd()%5?(int)(rnd()%4):(int)rnd32(); uint32_t faces=rnd()%3?rnd()&0x3F:rnd32();
    for(int i=0;i<48;i++) G(uint32_t,0x14500A5C0ULL+4ULL*i)=rnd32();
    ss=rnd32();
    printf("%d:",c);
#ifdef ENGINE
    world_block_cube_patches(turn,origin,scale,faces,tex);
#else
    ((MS void(*)(int,float,float,float,float,float,float,uint32_t,int32_t*))F(0x140019940ULL))(turn,origin[0],origin[1],origin[2],scale[0],scale[1],scale[2],faces,tex);
#endif
    printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
