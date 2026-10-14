// Inserts objects into the spatial grid (0x140037DE0) with identical grids, blocks and leaves in two processes
// and prints the resulting cells, blocks, leaves and counters. Mode "engine": src/engine/world_grid.c.
#include "peload.h"
#ifdef ENGINE
MS void world_grid_insert(int,int32_t,int32_t,int32_t,uint16_t);
#endif
static uint32_t rs=4711; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint64_t fnv(const void *p,size_t n){ const uint8_t *b=p; uint64_t h=1469598103934665603ULL; for(size_t i=0;i<n;i++){ h^=b[i]; h*=1099511628211ULL; } return h; }
#define G(type,addr) (*(type*)D(addr))
#define LEAF 0x10800
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):4000;
  static int32_t cells[4][64];
  uint8_t *leaves=malloc((size_t)2048*LEAF);
  int32_t *blocks=&G(int32_t,0x1A4BF0924ULL);
  for(int c=0;c<cases;c++){ printf("== case %d\n",c);
    for(int l=0;l<4;l++){ G(int32_t,0x15ADA9274ULL+0x100D70ULL*l)=(int32_t)(rnd()%5); G(int32_t,0x15ADA9278ULL+0x100D70ULL*l)=(int32_t)(rnd()%5); G(int32_t,0x15ADA927CULL+0x100D70ULL*l)=(int32_t)(rnd()%5);
      for(int i=0;i<64;i++) cells[l][i]=rnd()%3?-1:(int32_t)(rnd()%6); G(int32_t*,0x1A4BF0900ULL+8ULL*l)=cells[l]; }
    int32_t nb=(int32_t)(rnd()%6); G(int32_t,0x1A4BF0920ULL)=nb;
    for(int i=0;i<16*512;i++) blocks[i]=rnd()%4?-1:(int32_t)(rnd()%6);
    int32_t nl=rnd()%5==0?2045+(int32_t)(rnd()%4):(int32_t)(rnd()%6); G(int32_t,0x1A4CF0924ULL)=nl;
    for(int lf=0;lf<8;lf++) for(int u=0;u<512;u++){ int32_t *unit=(int32_t*)(leaves+(size_t)lf*LEAF+132*u); unit[0]=rnd()%8==0?32:(int32_t)(rnd()%4); }
    for(int lf=2044;lf<2048;lf++) for(int u=0;u<512;u++){ int32_t *unit=(int32_t*)(leaves+(size_t)lf*LEAF+132*u); unit[0]=(int32_t)(rnd()%40); }
    G(uint8_t*,0x1A4CF0928ULL)=leaves;
    int n=1+(int)(rnd()%10);
    for(int k=0;k<n;k++){ int layer=(int)(rnd()%6)-1; int32_t x=(int32_t)(rnd()%300)-10, y=(int32_t)(rnd()%300)-10, z=(int32_t)(rnd()%300)-10; uint16_t obj=(uint16_t)rnd();
#ifdef ENGINE
      world_grid_insert(layer,x,y,z,obj);
#else
      ((MS void(*)(int,int32_t,uint32_t,uint32_t,uint16_t))F(0x140037DE0ULL))(layer,x,(uint32_t)y,(uint32_t)z,obj);
#endif
    }
    printf("counts %d %d\n",G(int32_t,0x1A4BF0920ULL),G(int32_t,0x1A4CF0924ULL));
    printf("cells #%016" PRIx64 " blocks #%016" PRIx64 " leaves #%016" PRIx64 " #%016" PRIx64 "\n",fnv(cells,sizeof cells),fnv(blocks,16*2048),
           fnv(leaves,(size_t)8*LEAF),fnv(leaves+(size_t)2044*LEAF,(size_t)4*LEAF));
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
