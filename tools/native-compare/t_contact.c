// Contact between two bodies, 0x1400052C0: the bond and constraint it fills in the first free bond slot.
// run.sh: original vs src/engine/physics_bonds.c (physics_add_contact).
#include "peload.h"
#ifdef ENGINE
MS int physics_add_contact(int,int,const float*,const float*,const float*,float,float,float,float);
#endif
static uint32_t rs=5150; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,0.5f,2.0f};
static float rf(void){ unsigned k=rnd()%40; if(k==0) return special[rnd()%12]; if(k==1){ uint32_t b=rnd32(); float f; memcpy(&f,&b,4); return f; } return ((int)(rnd()&0xFFFFF)-0x80000)/52428.8f; }
#define G(type,addr) (*(type*)D(addr))
static void pr(const char *t,int i,const void *p,size_t n){ printf("%s %d:",t,i); const uint8_t *b=p; for(size_t k=0;k+4<=n;k+=4){ uint32_t w; memcpy(&w,b+k,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; printf(" %08x",w); } printf("\n"); }
#define BONDS 0x4000
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):3000;
  uint8_t *bodies=&G(uint8_t,0x1449816E0ULL), *bonds=&G(uint8_t,0x1B4287C80ULL), *cons=&G(uint8_t,0x1B4037C40ULL);
  for(int c=0;c<cases;c++){ printf("== case %d\n",c);
    int full=c%97==5, used=full?BONDS:c%97==50?BONDS-1:(int)(rnd()%40);
    for(int i=0;i<BONDS;i++){ int32_t a=i<used?(int32_t)(rnd32()|1):0; if(i<used && rnd()%5==0) a=-1; memcpy(bonds+0xF4*i,&a,4); }
    for(int i=used;i<used+2 && i<BONDS;i++){ for(int k=4;k<0xF4;k+=4){ uint32_t w=rnd32(); memcpy(bonds+0xF4*i+k,&w,4); } for(int k=0;k<0x90;k+=4){ uint32_t w=rnd32(); memcpy(cons+0x90*i+k,&w,4); } }
    for(int i=0;i<8;i++){ float m=rf(); memcpy(bodies+0xBC*i+0x14,&m,4); }
    int a=(int)(rnd()%8), b=(int)(rnd()%8); if(rnd()%9==0) a=(int)(rnd()%8)+0x10000;  /* only the low 16 bits are stored */
    if(a>=0x10000){ float m=rf(); memcpy(bodies+0xBC*a+0x14,&m,4); }
    float oa[3]={rf(),rf(),rf()}, ob[3]={rf(),rf(),rf()}, n[3]={rf(),rf(),rf()}, depth=rf(), k1=rf(), k2=rf(), k3=rf();
#ifdef ENGINE
    physics_add_contact(a,b,oa,ob,n,depth,k1,k2,k3);
#else
    uint32_t w1,w3; memcpy(&w1,&k1,4); memcpy(&w3,&k3,4);
    ((MS uint64_t(*)(int,int,float*,float*,float*,float,uint32_t,float,uint32_t))F(0x1400052C0ULL))(a,b,oa,ob,n,depth,w1,k2,w3);
#endif
    for(int i=used;i<used+2 && i<BONDS;i++){ pr("bond",i,bonds+0xF4*i,0xF4); pr("constraint",i,cons+0x90*i,0x90); }
    if(full){ uint32_t sum=0; for(int i=0;i<BONDS*0xF4;i+=4){ uint32_t w; memcpy(&w,bonds+i,4); sum=sum*31+w; } printf("full %08x\n",sum); }
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
