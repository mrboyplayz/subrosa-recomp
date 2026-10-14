// A segment against one placed model, 0x1400D8B70 (src/engine/collision_models.c collision_sweep_model) and, on odd
// cases, against the same model given directly, 0x1400D97A0 (collision_sweep_model_at), in two
// processes: random models (triangles and quads, some textured, degenerate and NaN corners), rotations, positions
// across the segment and boxes it misses. The line/triangle test 0x140077FA0 runs for real.
// A textured triangle is never placed before a model's first quad: the original then reads stack it never wrote.
#include "peload.h"
#ifdef ENGINE
MS int collision_sweep_model(float *point,float *normal,float *fraction,int index,const float *from,const float *to);
MS int collision_sweep_model_at(float *point,float *normal,float *fraction,int model,const float *position,const float *rotation,const float *from,const float *to);
#endif
static uint32_t rs=24601; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
static float rfn(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
#define G(type,addr) (*(type*)D(addr))
#define MODEL(m) (&G(uint8_t,0x1A75FE780ULL+9240ULL*(uint64_t)(m)))
#define PLACED(i) (&G(uint8_t,0x1A796F380ULL+0x54ULL*(uint64_t)(i)))
static void setf(uint8_t *p,int off,float v){ memcpy(p+off,&v,4); }
static void seti(uint8_t *p,int off,int32_t v){ memcpy(p+off,&v,4); }
static void pw(const char *n,const void *p,int k){ printf(" %s",n); for(int i=0;i<k;i++){ uint32_t w; memcpy(&w,(const uint8_t*)p+4*i,4); printf(" %08x",canon(w)); } }
static void pi(const char *n,const void *p,int k){ printf(" %s",n); for(int i=0;i<k;i++){ uint32_t w; memcpy(&w,(const uint8_t*)p+4*i,4); printf(" %08x",w); } }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  for(int c=0;c<cases;c++){
    int m=(int)(rnd()%6), idx=(int)(rnd()%128);
    uint8_t *md=MODEL(m), *pl=PLACED(idx);
    int nv=4+(int)(rnd()%12), nf=(int)(rnd()%8); if(rnd()%40==0) nf=-(int)(rnd()%2);
    float size=rfn(0.5f,6.0f);
    setf(md,0,rnd()%20?size*2.0f:rfn(0,size)); seti(md,4,nv); seti(md,0xC08,nf);
    for(int v=0;v<nv;v++) for(int k=0;k<3;k++) setf(md,8+12*v+4*k,rfn(-size,size));
    if(rnd()%20==0) setf(md,8+12*(rnd()%nv)+4*(rnd()%3),special[rnd()%11]);
    int seen_quad=0;
    for(int f=0;f<(nf>0?nf:0);f++){ uint8_t *fc=md+0xC0C+24*f; int quad=rnd()%2; int32_t w[6];
      w[0]=quad?4:(rnd()%10?3:(int32_t)(rnd()%6)); for(int k=1;k<5;k++) w[k]=(int32_t)(rnd()%nv);
      if(rnd()%12==0) w[2]=w[1];   /* degenerate */
      if(w[0]==4) seen_quad=1;
      w[5]=(seen_quad||w[0]==4)&&rnd()%2?(int32_t)(1+rnd()%3):(rnd()%3?0:-(int32_t)(rnd()%2));
      memcpy(fc,w,24); }
    /* rotation: a random turn about y, sometimes a random matrix */
    { float a=rfn(-3.2f,3.2f), cs=__builtin_cosf(a), sn=__builtin_sinf(a), r[9]={cs,0,-sn, 0,1,0, sn,0,cs};
      if(rnd()%4==0) for(int k=0;k<9;k++) r[k]=rfn(-1,1);
      for(int k=0;k<9;k++) setf(pl,0x20+4*k,r[k]); }
    float pos[3]; for(int k=0;k<3;k++){ pos[k]=rfn(-50,50); setf(pl,8+4*k,pos[k]); }
    seti(pl,0,1); seti(pl,4,m); for(int k=0;k<3;k++) seti(pl,0x14+4*k,(int32_t)rnd32());
    float from[3], to[3];
    for(int k=0;k<3;k++){ from[k]=pos[k]+rfn(-2*size,2*size)+(rnd()%2?rfn(-15,15):0); to[k]=pos[k]+rfn(-2*size,2*size); }
    if(nf>0 && rnd()%2){   /* straight through the middle of a face's first triangle */
      int32_t w[6]; memcpy(w,md+0xC0C+24*(rnd()%nf),24); float r[9], mid[3]={0,0,0}; memcpy(r,pl+0x20,36);
      for(int q=1;q<4;q++){ float v[3]; memcpy(v,md+8+12*w[q],12);
        for(int k=0;k<3;k++) mid[k]+=(v[0]*r[k]+v[1]*r[3+k]+v[2]*r[6+k]+pos[k])/3.0f; }
      for(int k=0;k<3;k++){ float dir=rfn(-1,1)*rfn(1,8); from[k]=mid[k]+dir; to[k]=mid[k]-dir*rfn(0.5f,2.0f); } }
    if(rnd()%3==0) for(int k=0;k<3;k++){ float t=from[k]; from[k]=to[k]; to[k]=t; }
    if(rnd()%30==0) from[rnd()%3]=special[rnd()%11]; if(rnd()%30==0) to[rnd()%3]=special[rnd()%11];
    if(rnd()%10==0){ int k=(int)(rnd()%3); float s=rnd()%2?1:-1; from[k]=pos[k]+s*(size*2+rfn(0,5)); to[k]=pos[k]+s*(size*2+rfn(0,5)); }   /* beyond one side */
    if(rnd()%6==0){   /* an end exactly on, or NaN beside, a face of the radius box */
      int k=(int)(rnd()%3); float rad; memcpy(&rad,md,4); float low=pos[k]-rad, high=pos[k]+rad; unsigned how=rnd()%6;
      if(how==0){ from[k]=low; to[k]=low-rfn(0.1f,3); } else if(how==1){ from[k]=__builtin_nanf(""); to[k]=low-rfn(0.1f,3); }
      else if(how==2){ from[k]=high+rfn(0.1f,3); to[k]=high; } else if(how==3){ from[k]=high+rfn(0.1f,3); to[k]=__builtin_nanf(""); }
      else if(how==4){ from[k]=high; to[k]=high+rfn(0.1f,3); } else { from[k]=low-rfn(0.1f,3); to[k]=low; } }
    float point[3], normal[3], fraction; for(int k=0;k<3;k++){ uint32_t w=rnd32(); memcpy(&point[k],&w,4); w=rnd32(); memcpy(&normal[k],&w,4); } { uint32_t w=rnd32(); memcpy(&fraction,&w,4); }
    G(int32_t,0x151A8490CULL)=(int32_t)rnd32(); G(int32_t,0x151A84910ULL)=(int32_t)rnd32();
    for(int k=0;k<3;k++) G(int32_t,0x151A848A0ULL+4*k)=(int32_t)rnd32();
    int r; float rot[9]; memcpy(rot,pl+0x20,36);
    if(c%2==0){
#ifdef ENGINE
      r=collision_sweep_model(point,normal,&fraction,idx,from,to);
#else
      r=(int)((MS uint64_t(*)(float*,float*,float*,int,const float*,const float*))F(0x1400D8B70ULL))(point,normal,&fraction,idx,from,to);
#endif
    } else {   /* 0x1400D97A0: the model given directly */
#ifdef ENGINE
      r=collision_sweep_model_at(point,normal,&fraction,m,pos,rot,from,to);
#else
      r=(int)((MS uint64_t(*)(float*,float*,float*,int,const float*,const float*,const float*,const float*))F(0x1400D97A0ULL))(point,normal,&fraction,m,pos,rot,from,to);
#endif
    }
    printf("%d %d",c,r); pw("p",point,3); pw("n",normal,3); pw("t",&fraction,1); pi("tex",&G(int32_t,0x151A8490CULL),2); pi("w",&G(int32_t,0x151A848A0ULL),3); printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
