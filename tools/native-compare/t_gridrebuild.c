// Rebuilding the item voxel grid, 0x140037FE0 (src/engine/world_grid.c world_grid_rebuild), and adding a grid block,
// 0x140038130 (world_grid_add_block), in two processes, on random layer sizes, items (active or not, types that do or
// do not occupy space, small voxel boxes partly outside the layer) and grids as in t_grid.c. The cells, blocks,
// leaves and counters are printed as hashes after every call.
#include "peload.h"
#ifdef ENGINE
MS void world_grid_rebuild(void);
MS int32_t world_grid_add_block(int layer,int32_t cx,int32_t cy,int32_t cz);
#endif
static uint32_t rs=8086; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint64_t fnv(const void *p,size_t n){ const uint8_t *b=p; uint64_t h=1469598103934665603ULL; for(size_t i=0;i<n;i++){ h^=b[i]; h*=1099511628211ULL; } return h; }
#define G(type,addr) (*(type*)D(addr))
#define LEAF 0x10800
#define ITEM(i) (0x182BBB180ULL+0x1B80ULL*(uint64_t)(i))
#define TYPE(t) (0x182A7E180ULL+0x13D0ULL*(uint64_t)(t))
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):1500;
  static int32_t cells[4][64];
  uint8_t *leaves=malloc((size_t)2048*LEAF);
  int32_t *blocks=&G(int32_t,0x1A4BF0924ULL);
  for(int c=0;c<cases;c++){
    for(int l=0;l<4;l++){ G(int32_t,0x15ADA9274ULL+0x100D70ULL*l)=(int32_t)(rnd()%4); G(int32_t,0x15ADA9278ULL+0x100D70ULL*l)=(int32_t)(rnd()%4); G(int32_t,0x15ADA927CULL+0x100D70ULL*l)=(int32_t)(rnd()%4);
      for(int i=0;i<64;i++) cells[l][i]=rnd()%3?-1:(int32_t)(rnd()%6); G(int32_t*,0x1A4BF0900ULL+8ULL*l)=cells[l]; }
    if(rnd()%5){ for(int k=0;k<3;k++) G(int32_t,0x15ADA9274ULL+4*k)=1+(int32_t)(rnd()%3); }
    G(int32_t,0x1A4BF0920ULL)=(int32_t)(rnd()%6);
    for(int i=0;i<16*512;i++) blocks[i]=rnd()%4?-1:(int32_t)(rnd()%6);
    G(int32_t,0x1A4CF0924ULL)=(int32_t)(rnd()%6);
    for(int lf=0;lf<12;lf++) for(int u=0;u<512;u++){ int32_t *unit=(int32_t*)(leaves+(size_t)lf*LEAF+132*u); unit[0]=(int32_t)(rnd()%4); }
    G(uint8_t*,0x1A4CF0928ULL)=leaves;
    for(int t=0;t<8;t++) G(int32_t,TYPE(t)+0xC)=rnd()%3?1:(rnd()%2?0:(int32_t)rnd());
    int dense=rnd()%3==0;
    for(int i=0;i<1024;i++){ uint64_t I=ITEM(i); G(int32_t,I)=rnd()%(dense?3:40)==0; G(int32_t,I+0x14)=(int32_t)(rnd()%8);
      for(int k=0;k<3;k++){ int32_t lo=(int32_t)(rnd()%140)-4, n=rnd()%6==0?-1:(int32_t)(rnd()%3); G(int32_t,I+0x11C+4*k)=lo; G(int32_t,I+0x128+4*k)=lo+n; } }
    int op=rnd()%4==0;
    if(op){ int layer=(int)(rnd()%4); int32_t cx=(int32_t)(rnd()%4), cy=(int32_t)(rnd()%4), cz=(int32_t)(rnd()%4); int32_t r;
      if(G(int32_t,0x15ADA9274ULL+0x100D70ULL*layer)*G(int32_t,0x15ADA9278ULL+0x100D70ULL*layer)*G(int32_t,0x15ADA927CULL+0x100D70ULL*layer)==0) G(int32_t,0x15ADA9274ULL+0x100D70ULL*layer)=G(int32_t,0x15ADA9278ULL+0x100D70ULL*layer)=G(int32_t,0x15ADA927CULL+0x100D70ULL*layer)=2;
      cx%=G(int32_t,0x15ADA9274ULL+0x100D70ULL*layer); cy%=G(int32_t,0x15ADA9278ULL+0x100D70ULL*layer); cz%=G(int32_t,0x15ADA927CULL+0x100D70ULL*layer);
#ifdef ENGINE
      r=world_grid_add_block(layer,cx,cy,cz);
#else
      r=(int32_t)((MS int64_t(*)(int,int,int,int))F(0x140038130ULL))(layer,cx,cy,cz);
#endif
      printf("%d add %d %d %d %d -> %d",c,layer,cx,cy,cz,r);
    } else {
#ifdef ENGINE
      world_grid_rebuild();
#else
      ((MS void(*)(void))F(0x140037FE0ULL))();
#endif
      printf("%d rebuild",c);
    }
    int nbk=G(int32_t,0x1A4BF0920ULL), nlf=G(int32_t,0x1A4CF0924ULL); if(nbk>512) nbk=512; if(nlf>2048) nlf=2048;
    printf(" counts %d %d cells %016llx blocks %016llx leaves %016llx\n",G(int32_t,0x1A4BF0920ULL),G(int32_t,0x1A4CF0924ULL),
           (unsigned long long)fnv(cells,sizeof cells),(unsigned long long)fnv(blocks,4*512*(size_t)(nbk>16?nbk:16)),(unsigned long long)fnv(leaves,(size_t)(nlf>12?nlf:12)*LEAF));
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
