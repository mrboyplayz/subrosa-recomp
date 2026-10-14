// A train on its rails (0x14010C110) and the street triangle copy (0x1401885C0) with identical vehicles, bodies,
// constraints, street cells and streets in two processes. The contact 0x140005160 is replaced in both by the same
// recording stub; the segment test 0x1400DA300 runs for real. Mode "engine": src/engine/vehicle_train.c.
#include "peload.h"
#ifdef ENGINE
MS void vehicle_update_train(int vehicle);
MS void world_street_range_triangles(void *list, int street, int range);
#endif
static uint32_t rs=90210; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float frand(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFFFF)/16777216.0f; }
#define G(type,addr) (*(type*)D(addr))
static uint32_t canon(float f){ uint32_t w; memcpy(&w,&f,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; return w; }
static void prf(const char *t,const float *p,int n){ printf("%s",t); for(int k=0;k<n;k++) printf(" %08x",canon(p[k])); printf("\n"); }
static const float specials[]={0.0f,-0.0f,1.0f,-1.0f,64.0f,4095.0f,4096.0f,1e30f,-1e30f,INFINITY,-INFINITY,NAN};
static float pick(float lo,float hi){ unsigned k=rnd()%40; if(k==0) return specials[rnd()%12]; return frand(lo,hi); }
static void putf(uint8_t *p,float f){ memcpy(p,&f,4); }
static void puti(uint8_t *p,int32_t i){ memcpy(p,&i,4); }
static uint32_t hash(const void *p,size_t n){ uint32_t h=2166136261u; const uint8_t *b=p; for(size_t i=0;i<n;i++){ h=(h^b[i])*16777619u; } return h; }
static MS uintptr_t stub_contact(int16_t body,const float *offset,const float *normal,float depth,float friction,float scale,float stiffness){
  printf("contact body %d",body); prf(" offset",offset,3); prf("  normal",normal,3); printf("  %08x %08x %08x %08x flag %d\n",canon(depth),canon(friction),canon(scale),canon(stiffness),G(int32_t,0x16B2A2EA0ULL));
  G(int32_t,0x16B2A2EA0ULL)=7; return 0; }
#define NS 10
static int32_t list[12292];
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):5000;
  hook(0x140005160ULL,stub_contact);
  uint8_t *vehicles=&G(uint8_t,0x15F2D9200ULL), *bodies=&G(uint8_t,0x1449816E0ULL), *cells=&G(uint8_t,0x17CE4B5F8ULL), *streets=&G(uint8_t,0x195AD08E0ULL),
          *constraints=&G(uint8_t,0x1B4037C40ULL);
  // What lies just past the last row of cells is made to look like cells with a street: a routine that read row 64
  // would show it.
  for(int k=0;k<66;k++){ int32_t *past=&G(int32_t,0x17CE4B5F8ULL+36ULL*(4096+k)); past[0]=1; past[1]=0; }
  for(int c=0;c<cases;c++){ printf("== case %d\n",c);
    int v=rnd()%4==0?511:(int)(rnd()%8); uint8_t *vp=vehicles+0x5168*v;
    int body[3]; body[0]=(int)(rnd()%64); body[1]=rnd()%8==0?8191:(int)(rnd()%64); body[2]=(int)(rnd()%64); int bond[2]={(int)(rnd()%32),rnd()%8==0?0x3FFF:(int)(rnd()%32)};
    float centre[3]={frand(100.0f,400.0f),frand(2.0f,40.0f),frand(100.0f,400.0f)};
    for(int k=0;k<0xE0;k+=4){ uint32_t x=rnd32(); memcpy(vp+k,&x,4); }
    puti(vp+0x28,body[0]); for(int k=0;k<9;k++) putf(vp+0x44+4*k,pick(-1.0f,1.0f));
    // (a box side that is huge or not a number makes the original walk two thousand million rows: keep those rare)
    for(int k=0;k<3;k++){ float a=centre[k]-frand(0.5f,12.0f), b=centre[k]+frand(0.5f,12.0f); putf(vp+0xB0+4*k,a); putf(vp+0xBC+4*k,b); }
    if(rnd()%25==0) putf(vp+0xB0+4*(rnd()%6),frand(-300.0f,5000.0f)); if(rnd()%500==0) putf(vp+0xB0+4*(rnd()%6),specials[rnd()%12]);
    puti(vp+0x4FB0,-1); puti(vp+0x4FBC,body[1]); puti(vp+0x4FC0,(int32_t)rnd32()); puti(vp+0x4FC4,bond[0]); puti(vp+0x4FC8,body[2]); puti(vp+0x4FCC,(int32_t)rnd32()); puti(vp+0x4FD0,bond[1]);
    for(int i=0;i<3;i++){ uint8_t *bp=bodies+0xBC*body[i]; for(int k=0;k<0xBC;k+=4){ uint32_t x=rnd32(); memcpy(bp+k,&x,4); }
      for(int k=0;k<3;k++) putf(bp+0x18+4*k,centre[k]+pick(-3.0f,3.0f)); for(int k=0;k<9;k++) putf(bp+0x3C+4*k,pick(-1.0f,1.0f));
      if(rnd()%3){ float up[3]={pick(-0.2f,0.2f),1.0f,pick(-0.2f,0.2f)}; for(int k=0;k<3;k++) putf(bp+0x48+4*k,up[k]); } }
    for(int i=0;i<2;i++){ uint8_t *cp=constraints+0x90*bond[i]; for(int k=0;k<0x90;k+=4){ uint32_t x=rnd32(); memcpy(cp+k,&x,4); } }
    memset(cells,0,64*64*36);
    for(int s=0;s<NS;s++){ uint8_t *sp=streets+61728*s; int nv=3+(int)(rnd()%10), nt=1+(int)(rnd()%10);
      puti(sp,rnd()%4==0?1:rnd()%9==0?(int32_t)rnd32():0);
      // a wide floor near the bogies' height so that the reach below a bogie often passes through it
      float y=centre[1]+pick(-4.0f,1.0f);
      puti(sp+0x14,nv); for(int i=0;i<nv;i++){ putf(sp+0x18+12*i,centre[0]+frand(-30.0f,30.0f)); putf(sp+0x18+12*i+4,y+frand(-0.6f,0.6f)); putf(sp+0x18+12*i+8,centre[2]+frand(-30.0f,30.0f)); }
      uint8_t *q=sp+0x3018; puti(q,nt); int32_t first[4],end[4]; for(int r=0;r<4;r++){ first[r]=(int32_t)(rnd()%(unsigned)nt); end[r]=first[r]+(int32_t)(rnd()%(unsigned)(nt-first[r]+1)); if(rnd()%9==0) first[r]=nt; }
      if(rnd()%2){ first[0]=0; end[0]=nt; }
      memcpy(q+4,first,16); memcpy(q+20,end,16);
      int32_t *tri=(int32_t*)(q+36); for(int t=0;t<nt;t++){ for(int k=0;k<3;k++) tri[3*t+k]=(int32_t)(rnd()%(unsigned)nv); }
      float *tn=(float*)(sp+0x603C); for(int t=0;t<nt*3;t++) tn[t]=pick(-1.0f,1.0f);
      float *bounds=(float*)(sp+0xF104); for(int k=0;k<3;k++){ float a=centre[k]-pick(-2.0f,30.0f), b=centre[k]+pick(-2.0f,30.0f); bounds[k]=a; bounds[3+k]=b; }
      if(rnd()%20==0) bounds[rnd()%6]=pick(-300.0f,5000.0f); }
    for(int i=0;i<30;i++){ int row=(int)(centre[2]/64.0f)+(int)(rnd()%3)-1, col=(int)(centre[0]/64.0f)+(int)(rnd()%3)-1; if(row<0||row>63||col<0||col>63) continue;
      int32_t *cell=(int32_t*)(cells+36*(row*64+col)); if(cell[0]<4) cell[1+cell[0]++]=(int32_t)(rnd()%NS); }
    if(c%4==0){ uint8_t *sp=streets+61728*(rnd()%NS); int k=rnd()%2?0:2;
      switch(rnd()%4){
        case 0: memcpy(sp+0xF104+4*k,vp+0xBC+4*k,4); break;         // street's low side on the car's high side
        case 1: memcpy(sp+0xF110+4*k,vp+0xB0+4*k,4); break;
        case 2: { float lo,hi; memcpy(&lo,vp+0xB0,4); memcpy(&hi,vp+0xBC,4); putf(vp+0xB0,hi+70.0f); putf(vp+0xBC,lo); } break;   // columns run backwards
        default: putf(vp+0xB8,frand(4000.0f,4090.0f)); putf(vp+0xC4,frand(4097.0f,4300.0f)); break; } }                          // rows 62 to 64 and beyond
    G(int32_t,0x16B2A2EA0ULL)=(int32_t)rnd32();
    if(c%10==9){ memset(list,0x5A,sizeof list); list[0]=rnd()%6==0?1020+(int32_t)(rnd()%6):(int32_t)(rnd()%40); int street=(int)(rnd()%NS), range=(int)(rnd()%4);
#ifdef ENGINE
      world_street_range_triangles(list,street,range);
#else
      ((MS void(*)(void*,int,int))F(0x1401885C0ULL))(list,street,range);
#endif
      printf("list count %d hash %08x\n",list[0],hash(list,sizeof list));
    } else {
#ifdef ENGINE
      vehicle_update_train(v);
#else
      ((MS void(*)(int))F(0x14010C110ULL))(v);
#endif
      printf("flag %d rail %d vehicle %08x\n",G(int32_t,0x16B2A2EA0ULL),G(int32_t,0x15F2DE1B0ULL+0x5168ULL*v),hash(vp,0x5168));
      for(int i=0;i<2;i++){ printf("constraint %d:",i); const uint8_t *cp=constraints+0x90*bond[i]; for(int k=0;k<0x90;k+=4){ float f; memcpy(&f,cp+k,4); printf(" %08x",k>=0x10&&k<0x1C?canon(f):*(const uint32_t*)(const void*)(cp+k)); } printf("\n"); }
      for(int i=0;i<3;i++) printf("body %08x ",hash(bodies+0xBC*body[i],0xBC)); printf("\n");
    }
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
