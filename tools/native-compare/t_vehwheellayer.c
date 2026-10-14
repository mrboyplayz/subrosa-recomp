// A wheel against a block layer (0x14003C760) with an identical small layer in two processes: 2 x 1 x 2 chunks of 64
// voxels, a few block records with cube faces, shapes and pointers to other voxels in both shape entries, random
// layer position, turn, cell size and bounds. Nothing is stubbed: the cube and shape tests, the wheel-triangle test
// and the voxel lookups (0x1400129D0, 0x140016450, 0x140012DE0, 0x140016720) run for real.
// Mode "engine": src/engine/collision_wheel_blocks.c (collision_wheel_block_layer).
#include "peload.h"
#ifdef ENGINE
MS int collision_wheel_block_layer(float *point, float *normal, float *distance, int layer, const float *centre, const float *axle, float radius);
#endif
static uint32_t rs=6510; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float frand(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFFFF)/16777216.0f; }
#define G(type,addr) (*(type*)D(addr))
static uint32_t canon(float f){ uint32_t w; memcpy(&w,&f,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; return w; }
static void prf(const char *t,const float *p,int n){ printf("%s",t); for(int k=0;k<n;k++) printf(" %08x",canon(p[k])); }
#define NSHAPE 6
static float vertices[NSHAPE][24][3]; static int32_t tris[NSHAPE][16][3], tri_id[NSHAPE][16], quads[NSHAPE][16][4], quad_id[NSHAPE][16];
static const uint16_t shape_index[NSHAPE]={0,1,2,77,4000,65535};
static void make_shapes(void){
  for(int s=0;s<NSHAPE;s++){ uint8_t *sp=&G(uint8_t,0x145098C00ULL+0xE8ULL*shape_index[s]);
    for(int i=0;i<24;i++) for(int k=0;k<3;k++) vertices[s][i][k]=rnd()%3?(float)(rnd()%3)*0.5f:frand(-0.2f,1.2f);
    int nt=(int)(rnd()%9), nq=(int)(rnd()%9);
    for(int i=0;i<16;i++){ for(int k=0;k<3;k++) tris[s][i][k]=(int32_t)(rnd()%24); for(int k=0;k<4;k++) quads[s][i][k]=(int32_t)(rnd()%24); tri_id[s][i]=(int32_t)(rnd()%8); quad_id[s][i]=(int32_t)(rnd()%8); }
    void *p; p=vertices[s]; memcpy(sp+0x48,&p,8); p=quads[s]; memcpy(sp+0x88,&p,8); p=quad_id[s]; memcpy(sp+0x90,&p,8); p=tris[s]; memcpy(sp+0xB0,&p,8); p=tri_id[s]; memcpy(sp+0xB8,&p,8);
    memcpy(sp+0x68,&nq,4); memcpy(sp+0xA8,&nt,4); } }
#define NREC 6
static int32_t chunk_table[4];
static float layer_rot[4][9], layer_org[4][3], layer_size[4];
static uint32_t entry_word(void){ unsigned k=rnd()%10;
  if(k<5) return rnd()%3?0:(rnd32()&0x1FFFFFFF);                                   // nothing
  if(k<7) return 0x40000000u|(rnd()%3?0xFFFu:(rnd()&0xFFF))|((rnd()&0xFF)<<12);     // cube
  if(k<9) return 0x80000000u|shape_index[rnd()%NSHAPE]|((rnd()&0x1FFF)<<16);        // shape
  return 0xC0000000u|(rnd()%3)|((rnd()%3)<<8)|((rnd()%3)<<16); }                    // held by a voxel nearby
static void make_layers(void){
  for(int r=0;r<NREC;r++){ uint8_t *rp=&G(uint8_t,0x154161240ULL+0x6C48ULL*r); for(int k=0;k<0x6C48;k+=4){ uint32_t w=rnd32(); memcpy(rp+k,&w,4); }
    uint32_t *first=&G(uint32_t,0x154161248ULL+0x6C48ULL*r), *second=&G(uint32_t,0x154164248ULL+0x6C48ULL*r);
    for(int i=0;i<512;i++){ first[i]=entry_word(); second[i]=rnd()%3?0:entry_word(); if((first[i]&0xE0000000u)==0xC0000000u && rnd()%2) first[i]&=0xFFFFFF00u|1u; } }
  for(int l=0;l<4;l++){ uint8_t *lp=&G(uint8_t,0x15ADA9240ULL+0x100D70ULL*l);
    float a=rnd()%3?0.0f:frand(-3.2f,3.2f), c=cosf(a), s=sinf(a), m[9]={c,0,-s, 0,1,0, s,0,c}; if(rnd()%6==0) for(int k=0;k<9;k++) m[k]+=frand(-0.05f,0.05f);
    memcpy(layer_rot[l],m,sizeof m); for(int k=0;k<3;k++) layer_org[l][k]=rnd()%3?0.0f:frand(-200.0f,200.0f);
    layer_size[l]=rnd()%3?4.0f:frand(1.0f,6.0f);
    int32_t one=1; memcpy(lp,&one,4); memcpy(lp+4,layer_org[l],12); memcpy(lp+0x10,m,36);
    int32_t chunks[3]={2,1,2}; memcpy(lp+0x34,chunks,12); float inv=rnd()%4?1.0f/layer_size[l]:0.25f; memcpy(lp+0x40,&layer_size[l],4); memcpy(lp+0x44,&inv,4);
    void *p=chunk_table; memcpy(lp+0x48,&p,8);
    float lo[3],hi[3]; for(int k=0;k<3;k++){ lo[k]=rnd()%4?-1e9f:frand(-300.0f,300.0f); hi[k]=rnd()%4?1e9f:frand(-300.0f,900.0f); } if(rnd()%30==0) lo[rnd()%3]=NAN;
    memcpy(lp+0x50,lo,12); memcpy(lp+0x5C,hi,12);
    for(int slot=0;slot<4;slot++){ int32_t *cells=&G(int32_t,0x15ADA97B0ULL+0x100D70ULL*l+0x804ULL*slot); for(int i=0;i<513;i++) cells[i]=rnd()%4==0?-1:(int32_t)(rnd()%NREC); } }
  for(int i=0;i<4;i++) chunk_table[i]=rnd()%6==0?-1:(int32_t)(rnd()%4); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):12000;
  for(int c=0;c<cases;c++){
    if(c%400==0){ make_shapes(); make_layers(); }
    int l=(int)(rnd()%4); const float *m=layer_rot[l]; float size=layer_size[l];
    // a place in the layer's frame, mostly inside its 128 x 64 x 128 voxels, taken to the world
    float p[3]={frand(-3.0f,131.0f)*size,frand(-3.0f,67.0f)*size,frand(-3.0f,131.0f)*size};
    float centre[3]={m[0]*p[0]+m[3]*p[1]+m[6]*p[2]+layer_org[l][0],m[1]*p[0]+m[4]*p[1]+m[7]*p[2]+layer_org[l][1],m[2]*p[0]+m[5]*p[1]+m[8]*p[2]+layer_org[l][2]};
    float radius=frand(0.2f,2.2f)*size;
    float axle[3]={frand(-1.0f,1.0f),frand(-1.0f,1.0f),frand(-1.0f,1.0f)}; { float n=sqrtf(axle[0]*axle[0]+axle[1]*axle[1]+axle[2]*axle[2]); if(n>0&&rnd()%4){ axle[0]/=n; axle[1]/=n; axle[2]/=n; } }
    if(rnd()%80==0) axle[rnd()%3]=NAN;
    float point[3]={7,7,7}, normal[3]={7,7,7}, distance=7; uint32_t *hit=&G(uint32_t,0x151A84880ULL); for(int k=0;k<40;k++) hit[k]=rnd32();
    int r;
#ifdef ENGINE
    r=collision_wheel_block_layer(point,normal,&distance,l,centre,axle,radius);
#else
    r=((MS int(*)(float*,float*,float*,int,const float*,const float*,float))F(0x14003C760ULL))(point,normal,&distance,l,centre,axle,radius);
#endif
    printf("== case %d layer %d -> %d",c,l,r&0xFF); prf(" point",point,3); prf(" normal",normal,3); prf(" distance",&distance,1);
    printf(" hit"); for(int k=0;k<40;k++) printf(" %08x",hit[k]); printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
