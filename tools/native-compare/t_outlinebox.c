// Block outlines over a box, in two processes (src/engine/world_block_outline.c): cube outlines 0x1400174D0
// (world_block_cube_outline) on random entries, and outlines of every block in a world box 0x14000C180
// (world_block_outline_box) on the random level of t_blockmore.c with random block shapes, layer origins and
// scales. The line list is printed (NaN canonical) after every call.
#include "peload.h"
#ifdef ENGINE
MS void world_block_cube_outline(void *list,int layer,const int32_t *voxel,uint32_t cube,float scale);
MS void world_block_outline_box(void *list,int layer,const float *box_min,const float *box_max);
#endif
static uint32_t rs=16180; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
static float rfn(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
#define G(type,addr) (*(type*)D(addr))
#define LAYER(l) (0x15ADA9240ULL+0x100D70ULL*(uint64_t)(l))
#define REC(r) (0x154161240ULL+0x6C48ULL*(uint64_t)(r))
#define SHAPE(t) (0x145098C00ULL+0xE8ULL*(uint64_t)(t))
#define NPOOL 12
static int32_t tables[4][27];
static int pool[NPOOL];
static struct { int32_t count; float lines[257][6]; } list;
static float pts[4][16][3]; static int32_t quads[4][6][4];
static void setup(void){
  for(int l=0;l<4;l++){ uint64_t L=LAYER(l); int32_t s[3]={1+(int32_t)(rnd()%3),1+(int32_t)(rnd()%2),1+(int32_t)(rnd()%3)};
    memcpy(D(L+0x34),s,12); for(int k=0;k<27;k++) tables[l][k]=rnd()%3?-1:(int32_t)(rnd()%6);
    int32_t *t=tables[l]; memcpy(D(L+0x48),&t,8);
    for(int k=0;k<3;k++) G(float,L+4+4*k)=rnd()%2?0.0f:rfn(-100,100);
    float sc=rnd()%2?0.25f:rfn(0.1f,2); G(float,L+0x40)=sc; G(float,L+0x44)=1.0f/sc;
    for(int sl=0;sl<8;sl++) for(int c=0;c<512;c++) G(int32_t,L+0x570+0x804ULL*sl+4ULL*c)=rnd()%3?-1:pool[rnd()%NPOOL]; }
  for(int i=0;i<NPOOL;i++){ uint64_t R=REC(pool[i]);
    for(int v=0;v<512;v++) for(int tb=0;tb<2;tb++){ unsigned k=rnd()%4; uint32_t e=rnd32();
      G(uint32_t,R+(tb?0x3008:8)+4*v)=k==0?0x40000000u|(e&0xFFF):k==1?0x80000000u|(e&0xFFFF0000u&0x1FFF0000u)|(rnd()%4):k==2?0:e; } }
  for(int t=0;t<4;t++){ uint64_t s=SHAPE(t);
    for(int p=0;p<16;p++) for(int k=0;k<3;k++) pts[t][p][k]=rfn(0,1);
    for(int q=0;q<6;q++) for(int k=0;k<4;k++) quads[t][q][k]=(int32_t)(rnd()%16);
    const void *pp=pts[t],*qp=quads[t]; int32_t n=(int32_t)(rnd()%6);
    memcpy(D(s+0x48),&pp,8); memcpy(D(s+0x88),&qp,8); memcpy(D(s+0x68),&n,4); }
}
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):4000;
  for(int c=0;c<cases;c++){
    if(c%20==0){ for(int i=0;i<NPOOL;i++) pool[i]=(int)(rnd()%4096); setup(); }
    for(int i=0;i<257;i++) for(int k=0;k<6;k++){ uint32_t w=rnd32(); memcpy(&list.lines[i][k],&w,4); }
    unsigned k=rnd()%4; list.count=k<2?0:k==2?(int32_t)(rnd()%256):240+(int32_t)(rnd()%20);
    int layer=(int)(rnd()%4);
    if(rnd()%3==0){
      int32_t voxel[3]; for(int j=0;j<3;j++) voxel[j]=(int32_t)(rnd()%300)-20;
      uint32_t cube=rnd()%4?rnd32():0x40000000u|0xFFF; float scale=rnd()%20==0?special[rnd()%11]:rfn(-2,2);
      printf("%d cube %d %d %d %d %08x %08x %d:",c,layer,voxel[0],voxel[1],voxel[2],cube,canon(*(uint32_t*)&scale),list.count);
#ifdef ENGINE
      world_block_cube_outline(&list,layer,voxel,cube,scale);
#else
      ((MS char(*)(void*,int,const int32_t*,uint32_t,float))F(0x1400174D0ULL))(&list,layer,voxel,cube,scale);
#endif
    } else {
      uint64_t L=LAYER(layer); float bmin[3],bmax[3];
      for(int j=0;j<3;j++){ float o=G(float,L+4+4*j), sc=G(float,L+0x40); float lo=o+sc*(float)((int)(rnd()%(rnd()%2?40:200))-4)+rfn(0,sc); bmin[j]=lo; bmax[j]=lo+sc*(float)(rnd()%4)+rfn(-sc,sc); }
      printf("%d box %d %08x %08x %08x %08x %08x %08x %d:",c,layer,canon(*(uint32_t*)&bmin[0]),canon(*(uint32_t*)&bmin[1]),canon(*(uint32_t*)&bmin[2]),
             canon(*(uint32_t*)&bmax[0]),canon(*(uint32_t*)&bmax[1]),canon(*(uint32_t*)&bmax[2]),list.count);
#ifdef ENGINE
      world_block_outline_box(&list,layer,bmin,bmax);
#else
      ((MS int64_t(*)(void*,int,const float*,const float*))F(0x14000C180ULL))(&list,layer,bmin,bmax);
#endif
    }
    printf(" -> %d",list.count);
    for(int i=0;i<257;i++) for(int j=0;j<6;j++){ uint32_t w; memcpy(&w,&list.lines[i][j],4); printf(" %x",canon(w)); }
    printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
