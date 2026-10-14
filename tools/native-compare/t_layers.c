// A segment through one block layer, 0x1400D6B60 (src/engine/collision_layers.c collision_sweep_layer), in two
// processes, over a random little level: layer frames (turned or not), chunk and cell tables, block records with all
// five tables (ids, gone parts, models, shape entries +8 and layout, with redirects), block types with parts (item
// meshes), block shapes and models. Everything it calls runs for real (all ported and checked on their own).
// The result, the hit and the hit globals 0x151A848A0..0x151A84910 are printed.
#include "peload.h"
#ifdef ENGINE
MS int collision_sweep_layer(float *point,float *normal,float *fraction,int layer,const float *from,const float *to);
#endif
static uint32_t rs=777123; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
static float rfn(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
static uint32_t canon(uint32_t w){ return ((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) ? 0x7fc00000 : w; }
static void pw(const char *n,const void *p,int k){ printf(" %s",n); for(int i=0;i<k;i++){ uint32_t w; memcpy(&w,(const uint8_t*)p+4*i,4); printf(" %08x",canon(w)); } }
#define G(type,addr) (*(type*)D(addr))
#define LAYER(l) (0x15ADA9240ULL+0x100D70ULL*(uint64_t)(l))
#define NREC 10
#define NBT 4      /* block types with parts */
#define NIT 3      /* item types with meshes */
#define NST 3      /* block shapes */
#define NMODEL 4
static void setf(uint64_t a,float v){ memcpy(D(a),&v,4); }
static void seti(uint64_t a,int32_t v){ memcpy(D(a),&v,4); }
static void setp(uint64_t a,const void *p){ memcpy(D(a),&p,8); }
static int32_t chunks[4][8];
/* item meshes (the grouped format) */
typedef struct { uint32_t u0; int32_t count; int32_t corner[4]; float normal[3]; } Face;
typedef struct { int32_t face_count; uint32_t u4; Face *faces; uint8_t pad[0x38-0x10]; } Group;
static float item_points[NIT][16][3]; static Face item_faces[NIT][8];
/* block shapes */
static float shape_vertex[NST][16][3]; static int32_t shape_quad[NST][6][4]; static int32_t shape_ids[NST][40]; static float shape_part[NST][6][12];

static void make_world(void){
  for(int l=0;l<4;l++){ uint64_t L=LAYER(l);
    seti(L,rnd()%4!=0);
    float o[3]={rfn(-4,4),rfn(-2,2),rfn(-4,4)}; if(rnd()%2) o[0]=o[1]=o[2]=0.0f; for(int k=0;k<3;k++) setf(L+4+4*k,o[k]);
    float a=rnd()%2?0.0f:rfn(-3.2f,3.2f), cs=__builtin_cosf(a), sn=__builtin_sinf(a), r[9]={cs,0,-sn, 0,1,0, sn,0,cs};
    if(rnd()%3==0) for(int k=0;k<9;k++) r[k]=rfn(-1,1);   /* any matrix */
    for(int k=0;k<9;k++) setf(L+0x10+4*k,r[k]);
    float size=rnd()%2?0.25f:rfn(0.2f,1.0f); setf(L+0x40,size); setf(L+0x44,rnd()%8?1.0f/size:rfn(0.5f,5.0f));
    for(int k=0;k<3;k++){ float lo=-rfn(0,2), hi=rfn(20,40); if(rnd()%10==0) lo+=rfn(5,15); setf(L+0x50+4*k,lo+o[k]); setf(L+0x5C+4*k,hi+o[k]); }
    if(rnd()%30==0) setf(L+0x50+4*(rnd()%3),__builtin_nanf(""));
    int sx=1+(int)(rnd()%2), sy=1, sz=1+(int)(rnd()%2); seti(L+0x34,sx); seti(L+0x38,sy); seti(L+0x3C,sz);
    for(int k=0;k<8;k++) chunks[l][k]=rnd()%6==0?-1:(int32_t)(rnd()%3);
    setp(L+0x48,chunks[l]);
    for(int sl=0;sl<3;sl++) for(int c=0;c<513;c++) seti(L+0x570+0x804ULL*sl+4ULL*c,rnd()%4==0?-1:(int32_t)(rnd()%NREC)); }
  for(int r=0;r<NREC;r++){ uint64_t base=0x154161240ULL+0x6C48ULL*r;
    for(int v=0;v<512;v++){ unsigned k;
      k=rnd()%10; seti(base+0x5008+4*v,k<6?0:(int32_t)((rnd()%NBT)|((rnd()%4)<<24)|(k==9?(rnd()%1024)<<10:0)));
      seti(base+0x5808+4*v,rnd()%3?0:(int32_t)rnd32());
      k=rnd()%12; seti(base+0x4808+4*v,k<8?0:k==11?(int32_t)(0x80000000u|(1+rnd()%(NMODEL-1))):(int32_t)(1+rnd()%(NMODEL-1))|(int32_t)((rnd()%4)<<10)|(k==10?(int32_t)(rnd()%4)<<7:0));
      for(int t=0;t<2;t++){ uint64_t a=base+(t?0x3008:0x8)+4*v; k=rnd()%12; uint32_t e;
        if(k<7) e=0; else if(k<9) e=0x40000000u|(rnd()&0xFFF); else if(k<11) e=0x80000000u|(uint32_t)(rnd()%NST)|((rnd()%4?0:rnd()&0x3FF)<<16);
        else e=0xC0000000u|(rnd()%3)|((rnd()%3)<<8)|((rnd()%3)<<16);
        seti(a,(int32_t)e); } } }
  /* item meshes */
  for(int t=0;t<NIT;t++){ uint64_t m=0x182A7F088ULL+0x13D0ULL*t; int np=4+(int)(rnd()%12);
    for(int p=0;p<np;p++) for(int k=0;k<3;k++) item_points[t][p][k]=rfn(-0.4f,0.4f);
    for(int f=0;f<8;f++){ Face *fc=&item_faces[t][f]; fc->count=rnd()%2?4:3; for(int k=0;k<4;k++) fc->corner[k]=(int32_t)(rnd()%np); }
    seti(m,np); setp(m+8,t==NIT-1&&rnd()%3==0?NULL:item_points[t]); seti(m+0x10,1); seti(m+0x30,(int32_t)(1+rnd()%8)); setp(m+0x38,item_faces[t]); }
  /* block types: parts */
  for(int b=0;b<NBT;b++){ uint64_t bt=0x1812C20CCULL+0xED0ULL*b; int np=(int)(rnd()%4); if(rnd()%3==0) np=10+(int)(rnd()%4); seti(bt,np);
    for(int p=0;p<np;p++){ uint64_t pt=0x1812C2110ULL+0xED0ULL*b+0x74ULL*p; seti(pt,(int32_t)(rnd()%NIT));
      for(int k=0;k<3;k++) setf(pt+4+4*k,rfn(-0.3f,0.3f));
      float a=rfn(-3.2f,3.2f), cs=__builtin_cosf(a), sn=__builtin_sinf(a), r[9]={cs,0,-sn, 0,1,0, sn,0,cs}; for(int k=0;k<9;k++) setf(pt+0x10+4*k,r[k]); } }
  /* block shapes */
  for(int t=0;t<NST;t++){ uint64_t s=0x145098C00ULL+0xE8ULL*t;
    for(int v=0;v<16;v++) for(int k=0;k<3;k++) shape_vertex[t][v][k]=(float)(rnd()%3)*0.5f;
    for(int q=0;q<6;q++) for(int i=0;i<4;i++) shape_quad[t][q][i]=(int32_t)(rnd()%16);
    for(int i=0;i<40;i++) shape_ids[t][i]=(int32_t)rnd32();
    for(int p=0;p<6;p++){ float c[3]; for(int k=0;k<3;k++) c[k]=rfn(0,1); for(int i=0;i<4;i++) for(int k=0;k<3;k++) shape_part[t][p][3*i+k]=c[k]+rfn(-0.5f,0.5f); }
    setp(s+0x48,shape_vertex[t]); seti(s+0x68,(int32_t)(rnd()%6)); setp(s+0x88,shape_quad[t]); setp(s+0x90,shape_ids[t]); seti(s+0xD8,(int32_t)(rnd()%6)); setp(s+0xE0,shape_part[t]); }
  /* models */
  for(int m=0;m<NMODEL;m++){ uint64_t md=0x1A75FE780ULL+9240ULL*m; float size=rfn(0.2f,0.8f); setf(md,size*2); int nv=8; seti(md+4,nv);
    for(int v=0;v<nv;v++) for(int k=0;k<3;k++) setf(md+8+12*v+4*k,rfn(-size,size));
    int nf=(int)(1+rnd()%6); seti(md+0xC08,nf);
    for(int f=0;f<nf;f++){ int32_t w[6]={rnd()%2?4:3,(int32_t)(rnd()%nv),(int32_t)(rnd()%nv),(int32_t)(rnd()%nv),(int32_t)(rnd()%nv),0}; memcpy(D(md+0xC0C+24*f),w,24); }
    for(int k=0;k<3;k++) setf(md+0x240C+4*k,rfn(-0.2f,0.2f)); }
}

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):6000;
  for(int c=0;c<cases;c++){
    if(c%60==0) make_world();
    int layer=(int)(rnd()%4); uint64_t L=LAYER(layer);
    float o[3]; memcpy(o,D(L+4),12); float size; memcpy(&size,D(L+0x40),4);
    float from[3], to[3]; float span=rnd()%4?rfn(0.5f,4.0f):rfn(4,40);
    for(int k=0;k<3;k++){ float lo=k==1?0.0f:0.0f, hi=(k==1?64.0f:128.0f)*size; from[k]=o[k]+rfn(lo-1,hi+1); to[k]=from[k]+rfn(-span,span); }
    if(rnd()%3==0){ float t[3]; memcpy(t,from,12); memcpy(from,to,12); memcpy(to,t,12); }
    if(rnd()%30==0) from[rnd()%3]=special[rnd()%11]; if(rnd()%30==0) to[rnd()%3]=special[rnd()%11];
    if(rnd()%40==0) memcpy(to,from,12);
    if(rnd()%25==0){ int k=(int)(rnd()%3); float hi; memcpy(&hi,D(L+0x5C+4*k),4); from[k]=hi+rfn(0.5f,3); to[k]=__builtin_nanf(""); }   /* beyond the far side, NaN end */
    float point[3], normal[3], fraction; for(int k=0;k<3;k++){ uint32_t w=rnd32(); memcpy(&point[k],&w,4); w=rnd32(); memcpy(&normal[k],&w,4); } { uint32_t w=rnd32(); memcpy(&fraction,&w,4); }
    for(int w=0;w<0x74;w+=4) G(uint32_t,0x151A848A0ULL+w)=rnd32();
#ifdef ENGINE
    int r=collision_sweep_layer(point,normal,&fraction,layer,from,to);
#else
    int r=(int)((MS uint64_t(*)(float*,float*,float*,int,const float*,const float*))F(0x1400D6B60ULL))(point,normal,&fraction,layer,from,to);
#endif
    printf("%d %d",c,r); pw("p",point,3); pw("n",normal,3); pw("t",&fraction,1); printf(" g"); for(int w=0;w<0x74;w+=4) printf(" %08x",G(uint32_t,0x151A848A0ULL+w)); printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
