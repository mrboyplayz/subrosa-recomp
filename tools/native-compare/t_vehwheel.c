// A wheel against the ground (0x14010D0D0) with identical vehicles, bodies, street cells and streets in two processes.
// The ball tests 0x14003DE80 / 0x14003D830 and the contact 0x140005160 are replaced in both by the same recording
// stubs (the street query 0x140188720 runs for real). Mode "engine": src/engine/vehicle_wheels.c.
#include "peload.h"
#ifdef ENGINE
MS void vehicle_collide_wheel(int vehicle, int wheel);
#endif
static uint32_t rs=4242; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float frand(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFFFF)/16777216.0f; }
#define G(type,addr) (*(type*)D(addr))
static uint32_t canon(float f){ uint32_t w; memcpy(&w,&f,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; return w; }
static void prf(const char *t,const float *p,int n){ printf("%s",t); for(int k=0;k<n;k++) printf(" %08x",canon(p[k])); printf("\n"); }
static const float specials[]={0.0f,-0.0f,1.0f,-1.0f,64.0f,4095.0f,4096.0f,1e30f,-1e30f,INFINITY,-INFINITY,NAN};
static float pick(float lo,float hi){ unsigned k=rnd()%24; if(k==0) return specials[rnd()%12]; return frand(lo,hi); }
static void putf(uint8_t *p,float f){ memcpy(p,&f,4); }
static void puti(uint8_t *p,int32_t i){ memcpy(p,&i,4); }
static uint32_t stub_rs; static uint32_t srnd(void){ stub_rs=stub_rs*1664525u+1013904223u; return stub_rs>>8; }
static uint32_t hash(const void *p,size_t n){ uint32_t h=2166136261u; const uint8_t *b=p; for(size_t i=0;i<n;i++){ h=(h^b[i])*16777619u; } return h; }
// A ball against the level: records its arguments, leaves a made-up hit in the shared hit record.
static MS int stub_ball_level(const float *centre,const float *axis,float radius){
  prf("ball_level centre",centre,3); prf("  axis",axis,3); printf("  radius %08x\n",canon(radius));
  float *hit=&G(float,0x151A84880ULL); int r=srnd()%3!=0; for(int k=0;k<8;k++) hit[k]=(float)(srnd()%2000)/100.0f-10.0f; return r; }
static MS int stub_ball_triangles(float *out,const int32_t *list,const float *centre,const float *axis,float radius){
  int n=list[0]; printf("ball_triangles count %d hash %08x after %d\n",n,n>=0&&n<=1024?hash(list+1,(size_t)n*48):0u,list[12289]);
  prf("  centre",centre,3); prf("  axis",axis,3); printf("  radius %08x\n",canon(radius));
  int r=srnd()%3!=0; for(int k=0;k<8;k++) out[k]=(float)(srnd()%2000)/100.0f-10.0f; return r; }
static MS uintptr_t stub_contact(int16_t body,const float *offset,const float *normal,float depth,float friction,float scale,float stiffness){
  printf("contact body %d",body); prf(" offset",offset,3); prf("  normal",normal,3); printf("  %08x %08x %08x %08x\n",canon(depth),canon(friction),canon(scale),canon(stiffness)); return 0; }
#define NS 12
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):6000;
  hook(0x14003DE80ULL,stub_ball_level); hook(0x14003D830ULL,stub_ball_triangles); hook(0x140005160ULL,stub_contact);
  uint8_t *vehicles=&G(uint8_t,0x15F2D9200ULL), *bodies=&G(uint8_t,0x1449816E0ULL), *cells=&G(uint8_t,0x17CE4B5F8ULL), *streets=&G(uint8_t,0x195AD08E0ULL);
  // What lies just past the last row of cells is made to look like cells with a street: a routine that read row 64
  // would show it.
  for(int k=0;k<66;k++){ int32_t *past=&G(int32_t,0x17CE4B5F8ULL+36ULL*(4096+k)); past[0]=1; past[1]=0; }
  for(int c=0;c<cases;c++){ printf("== case %d\n",c); stub_rs=rnd32();
    int v=rnd()%4==0?511:(int)(rnd()%8), w=(int)(rnd()%6), body=rnd()%8==0?8191:(int)(rnd()%64);
    uint8_t *wp=vehicles+0x5168*v+0x3944+0xAC*w, *bp=bodies+0xBC*body;
    for(int k=0;k<0xAC;k+=4){ uint32_t x=rnd32(); memcpy(wp+k,&x,4); }
    puti(wp,body); putf(wp+4,pick(0.0f,1.5f)); putf(wp+0x34,pick(0.1f,3.0f));
    float centre[3]={pick(100.0f,400.0f),pick(-5.0f,60.0f),pick(100.0f,400.0f)}; if(rnd()%20==0) centre[rnd()%3]=pick(-200.0f,5000.0f);
    if(c%9==0) centre[rnd()%2?0:2]=frand(4092.0f,4100.0f);
    for(int k=0;k<3;k++) putf(bp+0x18+4*k,centre[k]); for(int k=0;k<9;k++) putf(bp+0x3C+4*k,pick(-1.0f,1.0f));
    // Streets: a few with boxes around the wheel, triangles in range 2 (and some in other ranges that must be ignored).
    memset(cells,0,64*64*36);
    for(int s=0;s<NS;s++){ uint8_t *sp=streets+61728*s; int nv=3+(int)(rnd()%10), nt=1+(int)(rnd()%12);
      puti(sp+0x14,nv); for(int i=0;i<nv*3;i++) putf(sp+0x18+4*i,centre[i%3]+frand(-6.0f,6.0f));
      uint8_t *q=sp+0x3018; puti(q,nt); int32_t first[4],end[4]; for(int r=0;r<4;r++){ first[r]=(int32_t)(rnd()%(unsigned)nt); end[r]=first[r]+(int32_t)(rnd()%(unsigned)(nt-first[r]+1)); if(rnd()%9==0) first[r]=nt; }
      if(rnd()%3) { first[2]=0; end[2]=nt; }
      memcpy(q+4,first,16); memcpy(q+20,end,16);
      int32_t *tri=(int32_t*)(q+36); for(int t=0;t<nt;t++){ for(int k=0;k<3;k++) tri[3*t+k]=(int32_t)(rnd()%(unsigned)nv); }
      float *tb=(float*)(sp+0x903C); for(int t=0;t<nt;t++){ for(int k=0;k<3;k++){ float a=centre[k]+pick(-5.0f,5.0f), b=a+pick(-1.0f,6.0f); tb[6*t+k]=a; tb[6*t+3+k]=b; } }
      float *bounds=(float*)(sp+0xF104); for(int k=0;k<3;k++){ float a=centre[k]+pick(-4.0f,4.0f), b=a+pick(-1.0f,8.0f); bounds[k]=a; bounds[3+k]=b; } }
    for(int i=0;i<40;i++){ int row=(int)(centre[2]/64.0f)+(int)(rnd()%3)-1, col=(int)(centre[0]/64.0f)+(int)(rnd()%3)-1; if(row<0||row>63||col<0||col>63) continue;
      int32_t *cell=(int32_t*)(cells+36*(row*64+col)); if(cell[0]<8) cell[1+cell[0]++]=(int32_t)(rnd()%NS); }
    if(rnd()%10==0){ int row=(int)(centre[2]/64.0f), col=(int)(centre[0]/64.0f); if(row>=0&&row<63&&col>=0&&col<63){ int32_t *cell=(int32_t*)(cells+36*(row*64+col)); cell[0]=9+(int32_t)(rnd()%60); for(int k=1;k<9*8;k++) if(cell[k]<0||cell[k]>=NS) cell[k]=(int32_t)(rnd()%NS); } }
    G(int32_t,0x16B2A2EA0ULL)=(int32_t)rnd32();
#ifdef ENGINE
    vehicle_collide_wheel(v,w);
#else
    ((MS void(*)(int,int))F(0x14010D0D0ULL))(v,w);
#endif
    printf("flag %d wheel %08x body %08x\n",G(int32_t,0x16B2A2EA0ULL),hash(wp,0xAC),hash(bp,0xBC));
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
