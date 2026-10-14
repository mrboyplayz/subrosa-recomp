// The terrain sweep 0x1400D1830 (src/engine/collision_terrain.c collision_sweep_terrain) in two processes: random
// height fields (shared buffers per tile, spikes, NaN and infinite heights), solid masks from empty to full, a random
// terrain origin, and segments of every length (past 0x4000 steps too), across tile and map edges, vertical ones,
// and NaN or infinite ends. The line/triangle test 0x140077FA0 runs for real.
#include "peload.h"
#ifdef ENGINE
MS int collision_sweep_terrain(float *hit,const float *from,const float *to);
#endif
static uint32_t rs=8086; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
static float rfn(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
#define G(type,addr) (*(type*)D(addr))
#define NBUF 4
static uint16_t mask[1024*1024];
static float *heights[NBUF];
static void make_world(void){
  unsigned kind=rnd()%4;
  for(int i=0;i<1024*1024;i++) mask[i]=kind==0?0xFFFF:kind==1?(rnd()%3?(uint16_t)rnd():0):kind==2?(rnd()%50==0?0xFFFF:0):(uint16_t)rnd();
  uint16_t *mp=mask; memcpy(&G(uint8_t,0x181290050ULL),&mp,8);
  float origin[3]; for(int k=0;k<3;k++) origin[k]=rnd()%3?0.0f:rfn(-500,500); memcpy(&G(uint8_t,0x181290040ULL),origin,12);
  for(int t=0;t<64;t++){ uint8_t *tile=&G(uint8_t,0x1811BF840ULL+0x3420ULL*t);
    float o[3]={origin[0]+(float)(2048*(t%8))+(rnd()%8==0?rfn(-3,3):0.0f),rfn(-10,30),origin[2]+(float)(2048*(t/8))+(rnd()%8==0?rfn(-3,3):0.0f)};
    memcpy(tile,o,12); float *hp=heights[rnd()%NBUF]; memcpy(tile+0x18,&hp,8); }
}
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):6000;
  for(int b=0;b<NBUF;b++){ heights[b]=malloc(4ULL*2049*2049);
    for(size_t i=0;i<2049ULL*2049;i++){ float h=b==0?rfn(-2,2):b==1?(float)(i%7)-3.0f:b==2?rfn(-40,40):0.0f;   /* 3: flat */ if(rnd()%5000==0) h=special[rnd()%11]; heights[b][i]=h; } }
  for(int c=0;c<cases;c++){
    if(c%200==0) make_world();
    float origin[3]; memcpy(origin,&G(uint8_t,0x181290040ULL),12);
    float from[3], to[3]; unsigned how=rnd()%10;
    for(int k=0;k<3;k++) from[k]=origin[k]+(k==1?rfn(-20,40):rfn(-100,16500));
    if(how<3) for(int k=0;k<3;k++) to[k]=from[k]+(k==1?rfn(-60,20):rfn(-40,40));        /* short */
    else if(how<5) for(int k=0;k<3;k++) to[k]=from[k]+(k==1?rfn(-80,10):rfn(-600,600));  /* long */
    else if(how==5){ to[0]=from[0]; to[2]=from[2]; to[1]=from[1]-rfn(0,60); }             /* straight down */
    else if(how==6) for(int k=0;k<3;k++) to[k]=origin[k]+(k==1?rfn(-50,10):rfn(-100,16500));  /* across the map */
    else { int k=(int)(rnd()%2)*2; from[k]=origin[k]+2048.0f*(float)(1+rnd()%7)+rfn(-3,3); for(int j=0;j<3;j++) to[j]=from[j]+rfn(-8,8); }  /* tile edge */
    if(how==8){ int k=(int)(rnd()%2)*2; for(int j=0;j<3;j++) from[j]=origin[j]+rfn(200,6000); from[1]=origin[1]-60.0f;
      for(int j=0;j<3;j++) to[j]=from[j]+rfn(-30,30); to[k]=from[k]+(rnd()%2?1:-1)*rfn(1500,3000); to[1]=origin[1]+50.0f; }   /* far hit, many steps */
    if(how==9){ for(int j=0;j<3;j+=2){ from[j]=origin[j]+16384.0f-rfn(0,6); to[j]=from[j]+rfn(-4,4); } from[1]=origin[1]-40.0f; to[1]=origin[1]+40.0f; }   /* map edge */
    if(rnd()%40==0) from[rnd()%3]=special[rnd()%11]; if(rnd()%40==0) to[rnd()%3]=special[rnd()%11];
    if(rnd()%30==0){ from[0]=(float)(int)from[0]; from[2]=(float)(int)from[2]; if(rnd()%2){ from[0]=-from[0]; from[2]=-(float)(int)rfn(1,40); } }   /* whole coordinates, negative too */
    float hit[8]; for(int k=0;k<8;k++){ uint32_t w=rnd32(); memcpy(&hit[k],&w,4); }
#ifdef ENGINE
    int r=collision_sweep_terrain(hit,from,to);
#else
    int r=(int)((MS uint64_t(*)(float*,const float*,const float*))F(0x1400D1830ULL))(hit,from,to);
#endif
    printf("%d %d how %u:",c,r,how); for(int k=0;k<7;k++){ uint32_t w; memcpy(&w,&hit[k],4); printf(" %08x",canon(w)); } printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
