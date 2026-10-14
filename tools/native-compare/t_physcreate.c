// Creating bodies (0x14005CF80) and body bonds (0x14004E5B0 rotation, 0x14004E430 point) with identical body, bond and
// constraint pools in two processes; nothing is stubbed. Mode "engine": src/engine/physics_create.c.
#include "peload.h"
#ifdef ENGINE
MS int physics_create_body(int type, const float *position, const float *rotation, const float *velocity, float mass, const float *inertia);
MS int physics_create_rotation_bond(int body, int other_body);
MS int physics_create_point_bond(int body, int other_body, const float *local_point, const float *other_local_point);
#endif
static uint32_t rs=4004; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float frand(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFFFF)/16777216.0f; }
#define G(type,addr) (*(type*)D(addr))
static uint32_t canon(float f){ uint32_t w; memcpy(&w,&f,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; return w; }
static void prw(const char *t,const void *p,size_t n){ printf(" %s",t); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ float f; memcpy(&f,b+k,4); printf(" %08x",canon(f)); } }
static const float specials[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,INFINITY,-INFINITY,NAN};
static float pick(float lo,float hi){ if(rnd()%12==0) return specials[rnd()%9]; return frand(lo,hi); }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  uint8_t *bodies=&G(uint8_t,0x1449816E0ULL), *bonds=&G(uint8_t,0x1B4287C80ULL), *constraints=&G(uint8_t,0x1B4037C40ULL);
  for(int c=0;c<cases;c++){
    // pools: a run of taken slots, then a free one, with rubbish in it; sometimes everything taken
    int first_free=rnd()%40==0?-1:rnd()%6==0?(rnd()%2?8191:8190):(int)(rnd()%12);
    if(c%3==0){ int full=first_free<0; for(int i=0;i<8192;i++){ int32_t a=full||i<first_free?(int32_t)(1+rnd()%3):(i==first_free?0:(int32_t)(rnd()%2)); memcpy(bodies+0xBC*i,&a,4); }
      if(!full){ uint8_t *bp=bodies+0xBC*first_free; for(int k=4;k<0xBC;k+=4){ uint32_t w=rnd32(); memcpy(bp+k,&w,4); } }
      float pos[3]={pick(-9,9),pick(-9,9),pick(-9,9)}, rot[9], vel[3]={pick(-1,1),pick(-1,1),pick(-1,1)}, inertia[3]={pick(-1,5),pick(-1,5),pick(-1,5)}, mass=pick(0,200); for(int k=0;k<9;k++) rot[k]=pick(-1,1);
      int type=(int)rnd32(); const float *vp=rnd()%4==0?NULL:vel; int r;
#ifdef ENGINE
      r=physics_create_body(type,pos,rot,vp,mass,inertia);
#else
      r=((MS int(*)(int,const float*,const float*,const float*,float,const float*))F(0x14005CF80ULL))(type,pos,rot,vp,mass,inertia);
#endif
      printf("body -> %d",r); if(r>=0) prw("is",bodies+0xBC*r,0xBC); printf("\n");
    } else { int nb=first_free<0?0x4000:(first_free>=8190?0x3FFF:first_free), full=first_free<0;
      for(int i=0;i<0x4000;i++){ int32_t a=full||i<nb?(int32_t)(1+rnd()%3):(i==nb?0:(int32_t)(rnd()%2)); memcpy(bonds+0xF4*i,&a,4); }
      if(!full){ uint8_t *bp=bonds+0xF4*nb; for(int k=4;k<0xF4;k+=4){ uint32_t w=rnd32(); memcpy(bp+k,&w,4); } uint8_t *cp=constraints+0x90*nb; for(int k=0;k<0x90;k+=4){ uint32_t w=rnd32(); memcpy(cp+k,&w,4); } }
      int a=(int)rnd32(), b=(int)rnd32(); float p[3]={pick(-3,3),pick(-3,3),pick(-3,3)}, q[3]={pick(-3,3),pick(-3,3),pick(-3,3)}; int r;
      if(c%3==1){
#ifdef ENGINE
        r=physics_create_rotation_bond(a,b);
#else
        r=((MS int(*)(int,int))F(0x14004E5B0ULL))(a,b);
#endif
        printf("rotation bond -> %d",r);
      } else {
#ifdef ENGINE
        r=physics_create_point_bond(a,b,p,q);
#else
        r=((MS int(*)(int,int,const float*,const float*))F(0x14004E430ULL))(a,b,p,q);
#endif
        printf("point bond -> %d",r); }
      if(r>=0){ prw("is",bonds+0xF4*r,0xF4); prw("constraint",constraints+0x90*r,0x90); } printf("\n"); }
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
