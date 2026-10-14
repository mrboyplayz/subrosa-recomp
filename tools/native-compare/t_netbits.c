// Network bit streams, in two processes (src/engine/net_bits.c): writing bits 0x140115D90, scaled 0x140115E80 and
// angles 0x14010E610, reading bits 0x140115AE0, scaled 0x140115C20, with -1 for all ones 0x140115BD0 and signed
// 0x140115D20, on random stream states (positions near the 64 KB end, bit positions also past 7) and bit counts
// (also 0, negative and 32 or more). Results, values, stream positions and the bytes around them are printed.
#include "peload.h"
#ifdef ENGINE
MS int net_write_bits(const uint32_t *value,int bits);
MS int net_write_bits_scaled(const uint32_t *value,int bits,uint32_t divisor);
MS int net_write_angle(const float *angle,int bits);
MS int net_read_bits(uint32_t *value,int bits);
MS int net_read_bits_scaled(uint32_t *value,int bits,int32_t scale);
MS int net_read_bits_or_none(int32_t *value,int bits);
MS int net_read_bits_signed(int32_t *value,int bits);
#endif
static uint32_t rs=5309; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,3e9f};
static float rfn(float lo,float hi){ return lo+(hi-lo)*(float)(rnd()&0xFFFF)/65535.0f; }
#define G(type,addr) (*(type*)D(addr))
#define WPOS 0x18539D3FCULL
#define WBIT 0x18539D400ULL
#define WBUF 0x18539D404ULL
#define RLEN 0x1853AD418ULL
#define RPOS 0x1853AD41CULL
#define RBIT 0x1853AD420ULL
#define RBUF 0x1853AD424ULL
static int32_t rpos(void){ unsigned k=rnd()%6; return k==0?0xFFF0+(int32_t)(rnd()%20):k==1?(int32_t)(rnd()%8):(int32_t)(rnd()%4000); }
static int32_t rbit(void){ return rnd()%12==0?(int32_t)(rnd()%14):(int32_t)(rnd()%8); }
static int rbits(void){ unsigned k=rnd()%10; return k==0?-(int)(rnd()%3):k==1?32+(int)(rnd()%10):k==2?0:1+(int)(rnd()%31); }
static void window(uint64_t buf,int32_t p){ for(int i=-1;i<7;i++){ int32_t q=p+i; if(q<0||q>=0x10005) printf(" --"); else printf(" %02x",G(uint8_t,buf+(uint64_t)q)); } }
int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):60000;
  typedef MS int (*W2)(const uint32_t*,int); typedef MS int (*R2)(uint32_t*,int);
  for(int c=0;c<cases;c++){
    if(c%200==0){ for(int i=0;i<0x10010;i++){ G(uint8_t,WBUF+i)=(uint8_t)rnd(); G(uint8_t,RBUF+i)=(uint8_t)rnd(); } }
    if(rnd()%4==0){ G(int32_t,WPOS)=rpos(); G(int32_t,WBIT)=rbit(); }
    if(rnd()%4==0){ G(int32_t,RPOS)=rpos(); G(int32_t,RBIT)=rbit(); G(int32_t,RLEN)=rnd()%4?0x10000:(int32_t)(rnd()%5000); }
    int op=(int)(rnd()%7), bits=rbits(), r=0; uint32_t value=rnd()%3?rnd32():rnd()%16, out=0xDEADBEEF;
    int32_t w0=G(int32_t,WPOS), r0=G(int32_t,RPOS);
    if(op>=5 && (r0>0xFF00 || r0+(bits>>3)>G(int32_t,RLEN))){ G(int32_t,RPOS)=r0=(int32_t)(rnd()%100); G(int32_t,RLEN)=0x10000; }
    printf("%d op %d bits %d w %d/%d r %d/%d/%d v %08x:",c,op,bits,w0,G(int32_t,WBIT),r0,G(int32_t,RBIT),G(int32_t,RLEN),value);
    switch(op){
    case 0:
#ifdef ENGINE
      r=net_write_bits(&value,bits);
#else
      r=((W2)F(0x140115D90ULL))(&value,bits);
#endif
      break;
    case 1: { uint32_t d=rnd()%3?1+rnd()%9:1+rnd32()%100000;
#ifdef ENGINE
      r=net_write_bits_scaled(&value,bits,d);
#else
      r=((MS int(*)(const uint32_t*,int,uint32_t))F(0x140115E80ULL))(&value,bits,d);
#endif
      printf(" d %u",d); break; }
    case 2: { float a=rnd()%20==0?special[rnd()%11]:rnd()%4==0?rfn(-1000,1000):rfn(-7,7);
#ifdef ENGINE
      r=net_write_angle(&a,bits);
#else
      r=((MS int(*)(const float*,int))F(0x14010E610ULL))(&a,bits);
#endif
      printf(" a %08x",*(uint32_t*)&a); break; }
    case 3:
#ifdef ENGINE
      r=net_read_bits(&out,bits);
#else
      r=((R2)F(0x140115AE0ULL))(&out,bits);
#endif
      break;
    case 4: { int32_t s=(int32_t)(rnd()%2?rnd()%100:rnd32());
#ifdef ENGINE
      r=net_read_bits_scaled(&out,bits,s);
#else
      r=((MS int(*)(uint32_t*,int,int32_t))F(0x140115C20ULL))(&out,bits,s);
#endif
      printf(" s %d",s); break; }
    case 5:
#ifdef ENGINE
      r=net_read_bits_or_none((int32_t*)&out,bits);
#else
      r=((R2)F(0x140115BD0ULL))(&out,bits);
#endif
      break;
    case 6:
#ifdef ENGINE
      r=net_read_bits_signed((int32_t*)&out,bits);
#else
      r=((R2)F(0x140115D20ULL))(&out,bits);
#endif
      break; }
    printf(" -> %d %08x w %d/%d r %d/%d",r,out,G(int32_t,WPOS),G(int32_t,WBIT),G(int32_t,RPOS),G(int32_t,RBIT));
    if(op<=2) window(WBUF,w0); else window(RBUF,r0);
    printf("\n");
  }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
