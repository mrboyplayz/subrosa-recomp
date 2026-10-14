// Covered faces of a block shape, 0x14001B390 (src/engine/world_block_faces.c world_block_covered_faces), in two
// processes, over random block shapes whose corners lie on a half-unit grid (so faces often meet), NaN corners now
// and then, random sides, masks and neighbours.
#include "peload.h"
#ifdef ENGINE
MS uint32_t world_block_covered_faces(int shape,int side,uint32_t mask,int neighbour);
#endif
static uint32_t rs=5555; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
#define G(type,addr) (*(type*)D(addr))
#define SHAPE(t) (0x145098C00ULL+0xE8ULL*(uint64_t)(t))
#define NST 6
static float vertex[NST][24][3]; static int32_t quad[NST][40][4]; static int32_t side[NST][40];
static void make(int t){ uint64_t s=SHAPE(t);
  for(int v=0;v<24;v++) for(int k=0;k<3;k++) vertex[t][v][k]=(float)(rnd()%3)*0.5f;
  if(rnd()%6==0) vertex[t][rnd()%24][rnd()%3]=__builtin_nanf("");
  int n=(int)(rnd()%40); if(rnd()%20==0) n=0;
  for(int q=0;q<40;q++){ for(int i=0;i<4;i++) quad[t][q][i]=(int32_t)(rnd()%24); side[t][q]=(int32_t)(rnd()%7); }
  /* copies of another shape's quads turned over, so they match */
  if(t>0 && rnd()%2) for(int q=0;q<n;q++) if(rnd()%2){ int o=(int)(rnd()%t), oq=(int)(rnd()%40); int32_t *src=quad[o][oq];
      for(int i=0;i<24;i++) memcpy(vertex[t][i],vertex[o][i],12);
      quad[t][q][0]=src[1]; quad[t][q][1]=src[0]; quad[t][q][2]=src[3]; quad[t][q][3]=src[2]; side[t][q]=5-side[o][oq]; }
  const void *vp=vertex[t], *qp=quad[t], *sp=side[t];
  memcpy(D(s+0x48),&vp,8); memcpy(D(s+0x6C),&n,4); memcpy(D(s+0x88),&qp,8); memcpy(D(s+0xA0),&sp,8);
  for(int k=0;k<6;k++) G(uint32_t,s+0x70+4*k)=rnd32(); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):30000;
  for(int c=0;c<cases;c++){
    if(c%200==0) for(int t=0;t<NST;t++) make(t);
    int a=(int)(rnd()%NST), b=(int)(rnd()%NST), sd=(int)(rnd()%6); uint32_t mask=rnd()%3?rnd32():0xFFFFFFFFu;
#ifdef ENGINE
    uint32_t r=world_block_covered_faces(a,sd,mask,b);
#else
    uint32_t r=(uint32_t)((MS uint64_t(*)(int,int,uint32_t,int))F(0x14001B390ULL))(a,sd,mask,b);
#endif
    printf("%d %d %d %d %08x: %08x\n",c,a,sd,b,mask,r);
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
