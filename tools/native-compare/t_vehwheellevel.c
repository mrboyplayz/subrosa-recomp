// A wheel against the level: the terrain gathered as a mesh (0x1400D05B0), a wheel against such a mesh (0x14003DAE0)
// and the whole test (0x14003DE80), with identical terrain, meshes and arguments in two processes.
// The first two run with nothing stubbed (wheel-triangle and normalize for real). For the third, the mesh routines
// and the block layer test 0x14003C760 are replaced in both by the same recording stubs.
// Mode "engine": src/engine/collision_wheel_level.c.
#include "peload.h"
#ifndef WHOLE_TEST
#define WHOLE_TEST 0
#endif
#ifdef ENGINE
MS void collision_terrain_mesh_in_box(void *mesh, const float box_min[3], const float box_max[3]);
MS int collision_wheel_level_mesh(float *hit, const void *mesh, const float centre[3], const float axle[3], float radius);
MS int collision_wheel_level(const float centre[3], const float axle[3], float radius);
#endif
static uint32_t rs=64738; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float frand(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFFFF)/16777216.0f; }
#define G(type,addr) (*(type*)D(addr))
static uint32_t canon(float f){ uint32_t w; memcpy(&w,&f,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; return w; }
static void prf(const char *t,const float *p,int n){ printf("%s",t); for(int k=0;k<n;k++) printf(" %08x",canon(p[k])); }
static uint32_t hashf(const float *p,size_t n){ uint32_t h=2166136261u; for(size_t i=0;i<n;i++) h=(h^canon(p[i]))*16777619u; return h; }
static uint32_t hashi(const int32_t *p,size_t n){ uint32_t h=2166136261u; for(size_t i=0;i<n;i++) h=(h^(uint32_t)p[i])*16777619u; return h; }
#define NBUF 3
static uint16_t mask[1024*1024];
static float *heights[NBUF];
static int32_t mesh[18436];
static float *hit;
static uint32_t stub_rs; static uint32_t srnd(void){ stub_rs=stub_rs*1664525u+1013904223u; return stub_rs>>8; }
static float sf(float lo,float hi){ return lo+(hi-lo)*(float)(srnd()&0xFFFF)/65536.0f; }
static void make_world(void){ unsigned kind=rnd()%3;
  for(int i=0;i<1024*1024;i++) mask[i]=kind==0?0xFFFF:kind==1?(uint16_t)rnd():(rnd()%3?0xFFFF:(uint16_t)rnd());
  uint16_t *mp=mask; memcpy(&G(uint8_t,0x181290050ULL),&mp,8);
  float origin[3]; for(int k=0;k<3;k++) origin[k]=rnd()%2?0.0f:frand(-300.0f,300.0f); memcpy(&G(uint8_t,0x181290040ULL),origin,12);
  for(int t=0;t<64;t++){ uint8_t *tile=&G(uint8_t,0x1811BF840ULL+0x3420ULL*t);
    float o[3]={origin[0]+(float)(2048*(t%8)),frand(-5.0f,5.0f),origin[2]+(float)(2048*(t/8))}; memcpy(tile,o,12); float *hp=heights[rnd()%NBUF]; memcpy(tile+0x18,&hp,8); } }
// the mesh as text: counts and a hash of exactly what the counts cover
static void pr_mesh(const int32_t *m){ int nv=m[0], nf=m[8193]; uint32_t hv=2166136261u;
  for(int i=0;i<nv&&i<2048;i++) hv=(hv^hashf((const float*)(const void*)&m[2+4*i],3))*16777619u;
  uint32_t hf=2166136261u; for(int i=0;i<nf&&i<1024;i++){ const int32_t *f=&m[8194+8*i]; hf=(hf^hashi(f,4))*16777619u; hf=(hf^hashf((const float*)(const void*)(f+5),3))*16777619u; }
  printf(" vertices %d %08x faces %d %08x extra %d",nv,hv,nf,hf,m[16386]); }
static MS void stub_terrain_mesh(int32_t *m,const float *lo,const float *hi){ printf("terrain_mesh"); prf(" min",lo,3); prf(" max",hi,3); printf(" counts %d %d %d\n",m[0],m[8193],m[16386]); m[0]=(int32_t)(srnd()%9); m[8193]=(int32_t)(srnd()%9); }
static MS int stub_level_mesh(float *out,const int32_t *m,const float *centre,const float *axle,float radius){ printf("level_mesh counts %d %d",m[0],m[8193]); prf(" centre",centre,3); prf(" axle",axle,3); printf(" radius %08x\n",canon(radius));
  for(int k=0;k<8;k++) out[k]=sf(-9.0f,9.0f); if(srnd()%7==0) out[7]=NAN; out[7]=srnd()%2?sf(0.0f,3.0f):out[7]; return srnd()%3!=0; }
static MS int stub_block_layer(float *point,float *normal,float *distance,int layer,const float *centre,const float *axle,float radius){
  printf("block_layer %d",layer); prf(" centre",centre,3); prf(" axle",axle,3); printf(" radius %08x\n",canon(radius));
  for(int k=0;k<3;k++){ point[k]=sf(-9.0f,9.0f); normal[k]=sf(-1.0f,1.0f); } *distance=srnd()%9==0?NAN:sf(0.0f,3.0f); G(int32_t,0x151A848E8ULL)=(int32_t)srnd(); return srnd()%3!=0; }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):9000; int whole=WHOLE_TEST;  // t_vehwheelwhole.c: only the whole test, with its stubs
  for(int b=0;b<NBUF;b++){ heights[b]=malloc(4ULL*2049*2049);
    for(size_t i=0;i<2049ULL*2049;i++){ float h=b==0?frand(-1.5f,1.5f):b==1?(float)((i*7)%5)*0.5f:0.25f; if(rnd()%20000==0) h=rnd()%2?NAN:INFINITY; heights[b][i]=h; } }
  hit=&G(float,0x151A84880ULL);
  if(whole){ hook(0x1400D05B0ULL,stub_terrain_mesh); hook(0x14003DAE0ULL,stub_level_mesh); hook(0x14003C760ULL,stub_block_layer); }
  for(int c=0;c<cases;c++){
    if(c%300==0) make_world();
    float origin[3]; memcpy(origin,&G(uint8_t,0x181290040ULL),12);
    float centre[3]={origin[0]+frand(-20.0f,16400.0f),frand(-8.0f,8.0f),origin[2]+frand(-20.0f,16400.0f)}, radius=frand(0.2f,rnd()%6==0?9.0f:2.0f);
    if(rnd()%5==0){ centre[rnd()%2?0:2]=origin[rnd()%2?0:2]+2048.0f*(float)(1+rnd()%7)+frand(-2.0f,2.0f); }     // across a tile edge
    float axle[3]={frand(-1.0f,1.0f),frand(-1.0f,1.0f),frand(-1.0f,1.0f)}; { float l=sqrtf(axle[0]*axle[0]+axle[1]*axle[1]+axle[2]*axle[2]); if(l>0&&rnd()%4){ axle[0]/=l; axle[1]/=l; axle[2]/=l; } }
    float lo[3],hi[3]; for(int k=0;k<3;k++){ lo[k]=centre[k]-radius; hi[k]=centre[k]+radius; }
    if(rnd()%40==0) lo[1]=NAN; if(rnd()%60==0){ float t=lo[0]; lo[0]=hi[0]; hi[0]=t; }
    printf("== case %d",c);
    if(whole){ stub_rs=rnd32(); printf("\n"); for(int k=0;k<40;k++){ uint32_t w=rnd32(); memcpy(&hit[k],&w,4); }
      for(int l=0;l<4;l++) G(int32_t,0x15ADA9240ULL+0x100D70ULL*(uint64_t)l)=rnd()%3!=0;
      int r;
#ifdef ENGINE
      r=collision_wheel_level(centre,axle,radius);
#else
      r=((MS int(*)(const float*,const float*,float))F(0x14003DE80ULL))(centre,axle,radius);
#endif
      printf("-> %d",r&0xFF); prf(" hit",hit,8); for(int k=8;k<40;k++){ uint32_t w; memcpy(&w,&hit[k],4); printf(" %08x",w); } printf("\n"); continue; }
    // the mesh: start empty, or with what an earlier call left (shared corners), or nearly full
    if(c%3!=1){ mesh[0]=0; mesh[8193]=0; mesh[16386]=0; }
    if(rnd()%50==0){ mesh[0]=2040+(int32_t)(rnd()%9); } if(rnd()%50==0){ mesh[8193]=1018+(int32_t)(rnd()%7); }
#ifdef ENGINE
    collision_terrain_mesh_in_box(mesh,lo,hi);
#else
    ((MS void(*)(void*,const float*,const float*))F(0x1400D05B0ULL))(mesh,lo,hi);
#endif
    pr_mesh(mesh);
    // four-cornered faces do not come from the terrain: make some
    if(rnd()%4==0){ int nf=mesh[8193], nv=mesh[0]; for(int i=0;i<nf&&i<1024&&nv>3;i++) if(rnd()%3==0){ mesh[8194+8*i]=4; mesh[8194+8*i+4]=(int32_t)(rnd()%(unsigned)(nv>2048?2048:nv)); } }
    float out[8]; for(int k=0;k<8;k++) out[k]=7.0f; int r;
#ifdef ENGINE
    r=collision_wheel_level_mesh(out,mesh,centre,axle,radius);
#else
    r=((MS int(*)(float*,const void*,const float*,const float*,float))F(0x14003DAE0ULL))(out,mesh,centre,axle,radius);
#endif
    printf(" wheel %d",r&0xFF); prf(" touch",out,8); printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
