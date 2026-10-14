// The level sweep 0x1400DC050 (src/engine/collision_level.c). The terrain (0x1400D1830) runs for real over a random
// height field; the block layers (empty here) run for real; the stubs that log their arguments and answer from a fixed sequence (fractions around
// the running best, NaN now and then): the level's own surfaces 0x1400D1830, a block layer 0x1400D6B60, one of the
// The 128 placed models (0x1400D8B70) and the street triangles go through the real 0x1400DA300 (engine: collision_segment_triangles).
// The street pass runs for real (0x140188720 / its engine port) over random streets and cells.
// collision_hit and the hit globals after 0x151A84880 are printed with the result. Mode "engine": the engine function.
#include "peload.h"
#ifdef ENGINE
MS int collision_sweep_level(float *from,float *to,int with_records);
#endif
static uint32_t rs=31337; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
static float rfn(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
static uint32_t fb(float f){ uint32_t w; memcpy(&w,&f,4); return canon(w); }
static void fbits(uint32_t *w,float f){ memcpy(w,&f,4); }
#define G(type,addr) (*(type*)D(addr))
#define A(index) ((uint32_t*)D(0x140404A6CULL+4ULL*(index)))
#define STREET(i) A(358297501+15432*(i))
#define CELLS A(254352099)
#define STREETS 12

static uint32_t ss;
static uint32_t sr(void){ ss=ss*1103515245u+12345u; return ss>>8; }
static float sfrac(void){ unsigned k=sr()%16; if(k==0) return __builtin_nanf(""); if(k==1) return 1.0f; if(k==2) return special[sr()%11];
  return (float)(sr()%1200)/1000.0f; }
static void p3(const char *n,const float *v){ printf(" %s[%08x %08x %08x]",n,fb(v[0]),fb(v[1]),fb(v[2])); }
static void fill(float *point,float *normal){ for(int k=0;k<3;k++){ point[k]=(float)(int)(sr()%2000)/16.0f; normal[k]=(float)((int)(sr()%200)-100)/100.0f; } }
static MS int __attribute__((unused)) s_d1830(float *hit,float *from,float *to){ int r=sr()%3!=0; printf("call d1830"); p3("f",from); p3("t",to); printf(" -> %d\n",r);
  fill(hit,hit+3); hit[6]=sfrac(); hit[7]=0; return r; }
static MS int __attribute__((unused)) s_d6b60(float *point,float *normal,float *fraction,int layer,float *from,float *to){ int r=sr()%2; printf("call d6b60 %d",layer); p3("f",from); p3("t",to); printf(" -> %d\n",r);
  fill(point,normal); *fraction=sfrac(); return r; }
static MS int __attribute__((unused)) s_d8b70(float *point,float *normal,float *fraction,int record,float *from,float *to){ int r=sr()%4==0; printf("call d8b70 %d",record); p3("f",from); p3("t",to); printf(" -> %d\n",r);
  fill(point,normal); *fraction=sfrac(); return r; }
static MS int __attribute__((unused)) s_da300(float *hit,uint32_t *list,float *from,float *to){ int r=sr()%3!=0; int n=(int)list[0];
  uint64_t h=1469598103934665603ULL; for(int i=0;i<1+12*(n>0&&n<=1024?n:0);i++){ if(i>0&&(i-1)%12>=9) continue; uint32_t x=list[i];   /* the last three words of each are never written */ for(int b=0;b<4;b++){ h^=(x>>(8*b))&255; h*=1099511628211ULL; } }
  printf("call da300 count %d c004 %d hash %016llx",n,(int)list[1+12*1024],(unsigned long long)h); p3("f",from); p3("t",to); printf(" -> %d\n",r);
  fill(hit,hit+3); hit[6]=sfrac(); hit[7]=0; return r; }

static void make_streets(void){
  for(int i=0;i<STREETS;i++){ uint32_t *s=STREET(i);
    int nv=1+(int)(rnd()%64); s[5]=(uint32_t)nv;
    float cx=rfn(0,4096), cy=rfn(0,40), cz=rfn(0,4096);
    for(int v=0;v<nv;v++){ fbits(&s[6+3*v],cx+rfn(-60,60)); fbits(&s[7+3*v],cy+rfn(-5,5)); fbits(&s[8+3*v],cz+rfn(-60,60)); }
    int nt=(int)(rnd()%80); s[3078]=(uint32_t)nt;
    for(int r=0;r<4;r++){ int a=(int)(rnd()%(nt+1)), b=(int)(rnd()%(nt+1)); s[3079+r]=(uint32_t)a; s[3083+r]=(uint32_t)b; }
    for(int t=0;t<nt+3;t++){ for(int k=0;k<3;k++) s[3087+3*t+k]=rnd()%nv;
      for(int k=0;k<3;k++){ float lo=(k==0?cx:k==1?cy:cz)+rfn(-60,60), w=rfn(0,30); fbits(&s[9231+6*t+k],lo); fbits(&s[9231+6*t+3+k],lo+w); } }
    for(int k=0;k<3;k++){ float lo=(k==0?cx:k==1?cy:cz)-rfn(0,80); fbits(&s[15425+k],lo); fbits(&s[15428+k],lo+rfn(0,160)); }
    if(rnd()%10==0) fbits(&s[15425+rnd()%6],__builtin_nanf(""));
  }
  for(int c=0;c<4096;c++){ uint32_t *cell=CELLS+9*c; unsigned k=rnd()%4; cell[0]=k<2?0:1+rnd()%8; if(rnd()%300==0) cell[0]=9+rnd()%3;
    for(int j=1;j<9;j++) cell[j]=rnd()%STREETS; }
}

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):3000;
  /* The block layers run for real (src/engine/collision_layers.c); this test leaves them empty. */
  /* terrain: one shared height buffer for every tile, a mask with a few solid patches */
  { static uint16_t mask[1024*1024]; float *heights=malloc(4ULL*2049*2049); for(size_t i=0;i<2049ULL*2049;i++) heights[i]=rfn(-3,3);
    for(int i=0;i<1024*1024;i++) mask[i]=rnd()%40==0?(uint16_t)rnd():0; uint16_t *mp=mask; memcpy(&G(uint8_t,0x181290050ULL),&mp,8);
    for(int t=0;t<64;t++){ uint8_t *tile=&G(uint8_t,0x1811BF840ULL+0x3420ULL*t); float o[3]={(float)(2048*(t%8)),rfn(0,30),(float)(2048*(t/8))}; memcpy(tile,o,12); memcpy(tile+0x18,&heights,8); }
    float origin[3]={0,0,0}; memcpy(&G(uint8_t,0x181290040ULL),origin,12); }
  for(int c=0;c<cases;c++){
    if(c%40==0) make_streets();
    for(int l=0;l<4;l++) G(int32_t,0x15ADA9240ULL+0x100D70ULL*l)=rnd()%3!=0;
    for(int i=0;i<128;i++){ uint8_t *r=&G(uint8_t,0x1A796F380ULL+0x54ULL*i); for(int w=0;w<0x54;w+=4){ uint32_t v=rnd32(); memcpy(r+w,&v,4); } uint32_t a=rnd()%6==0; memcpy(r,&a,4); int32_t m=(int32_t)(rnd()%4); memcpy(r+4,&m,4);
      for(int k=0;k<3;k++){ float v=rfn(0,4096); memcpy(r+8+4*k,&v,4); } }
    for(int m=0;m<4;m++){ uint8_t *md=&G(uint8_t,0x1A75FE780ULL+9240ULL*m); float rad=rfn(1,40); memcpy(md,&rad,4); int32_t fc=(int32_t)(rnd()%4); memcpy(md+0xC08,&fc,4);
      for(int k=0;k<24;k++){ float v=rfn(-20,20); memcpy(md+8+4*k,&v,4); }
      for(int f=0;f<4;f++){ int32_t w[6]={rnd()%2?3:4,(int32_t)(rnd()%8),(int32_t)(rnd()%8),(int32_t)(rnd()%8),(int32_t)(rnd()%8),0}; memcpy(md+0xC0C+24*f,w,24); } }
    for(int w=0;w<0x90;w+=4) G(uint32_t,0x151A84880ULL+w)=rnd32();
    float from[3], to[3];
    uint32_t *st=STREET(rnd()%STREETS); float base[3]; memcpy(base,&st[15425],12);
    for(int k=0;k<3;k++){ from[k]=rnd()%2?base[k]+rfn(-50,100):rfn(-100,4200); to[k]=from[k]+rfn(-150,150); }
    if(rnd()%30==0) from[rnd()%3]=special[rnd()%11]; if(rnd()%30==0) to[rnd()%3]=special[rnd()%11];
    for(int k=0;k<3;k+=2){ if(!(from[k]>-1e6f&&from[k]<1e6f)) from[k]=100.0f; if(!(to[k]>-1e6f&&to[k]<1e6f)) to[k]=from[k]+5.0f; }
    if(rnd()%8==0){ int k=(int)(rnd()%3); from[k]=rnd()%2?0.0f:-0.0f; to[k]=from[k]==0.0f&&rnd()%2?-from[k]:from[k]; if(rnd()%2){ float t=from[k]; from[k]=to[k]; to[k]=t; } }   /* signed-zero ties */
    if(rnd()%10==0) (rnd()%2?from:to)[1]=__builtin_nanf("");
    /* A NaN x or z makes both walk about 2^31 cells: only a few such cases. */
    if(c==7) from[0]=__builtin_nanf(""); if(c==1501) to[2]=__builtin_nanf(""); if(c==2903){ from[2]=__builtin_nanf(""); to[0]=__builtin_nanf(""); }
    if(c==2201) to[0]=__builtin_nanf("");
    if(rnd()%4 || c==1501){ int si=(int)((st-STREET(0))/15432); uint32_t *s=STREET(si); s[3081]=0; s[3085]=s[3078]+(rnd()%3==0);   /* range 2: all */
      for(int k=0;k<3;k++){ float lo=from[k]<to[k]?from[k]:to[k], hi=from[k]<to[k]?to[k]:from[k]; if(!(lo==lo)||!(hi==hi)) continue;
        fbits(&s[15425+k],lo-rfn(0,20)); fbits(&s[15428+k],hi+rfn(0,20)); }
      for(int t=0;t<(int)s[3078]+1;t++) if(rnd()%2) for(int k=0;k<3;k++){ float a=from[k]+(to[k]-from[k])*rfn(0,1); fbits(&s[9231+6*t+k],a-rfn(0,3)); fbits(&s[9231+6*t+3+k],a+rfn(0,3)); }
      if(rnd()%5==0) fbits(&s[15425+rnd()%6],__builtin_nanf(""));
      int c0=(int)((from[0]<to[0]?from[0]:to[0])/64), c1=(int)((from[0]<to[0]?to[0]:from[0])/64), r0=(int)((from[2]<to[2]?from[2]:to[2])/64), r1=(int)((from[2]<to[2]?to[2]:from[2])/64);
      for(int r=r0;r<=r1;r++) for(int cc=c0;cc<=c1;cc++) if(r>=0&&r<64&&cc>=0&&cc<64){ uint32_t *cell=CELLS+9*(r*64+cc); if(cell[0]==0||cell[0]>8) cell[0]=1+rnd()%3; cell[1+rnd()%cell[0]]=(uint32_t)si; } }
    int with=rnd()%2; ss=rnd32();
    printf("== %d with %d",c,with); p3("from",from); p3("to",to); printf("\n");
#ifdef ENGINE
    int r=collision_sweep_level(from,to,with);
#else
    int r=(int)((MS uint64_t(*)(float*,float*,int))F(0x1400DC050ULL))(from,to,with);
#endif
    printf("result %d:",r); for(int w=0;w<0x90;w+=4) printf(" %08x",canon(G(uint32_t,0x151A84880ULL+w))); printf("\n");
  }
  /* Directed: street 0 covers everything and sits alone in cell (row 5, column 7); one end of the segment has a
     NaN x or z. */
  { uint32_t *s=STREET(0); if(s[3078]<4) s[3078]=4; s[3081]=0; s[3085]=4;
    for(int t=0;t<4;t++) for(int k=0;k<3;k++){ fbits(&s[9231+6*t+k],-1e30f); fbits(&s[9231+6*t+3+k],1e30f); }
    for(int k=0;k<3;k++){ fbits(&s[15425+k],-1e30f); fbits(&s[15428+k],1e30f); }
    for(int cc=0;cc<4096;cc++) CELLS[9*cc]=0; CELLS[9*(5*64+7)]=1; CELLS[9*(5*64+7)+1]=0;
    for(int l=0;l<4;l++) G(int32_t,0x15ADA9240ULL+0x100D70ULL*l)=0;
    for(int k=0;k<4;k++){ float from[3]={7*64+10.0f,5.0f,5*64+10.0f}, to[3]={7*64+11.0f,6.0f,5*64+12.0f};
      if(k==0) to[2]=__builtin_nanf(""); if(k==1) from[2]=__builtin_nanf(""); if(k==2) to[0]=__builtin_nanf(""); if(k==3) from[0]=__builtin_nanf("");
      ss=rnd32(); printf("== nan %d\n",k);
#ifdef ENGINE
      int r=collision_sweep_level(from,to,0);
#else
      int r=(int)((MS uint64_t(*)(float*,float*,int))F(0x1400DC050ULL))(from,to,0);
#endif
      printf("result %d\n",r); } }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
