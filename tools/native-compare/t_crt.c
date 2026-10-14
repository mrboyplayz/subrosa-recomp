// Small run-time routines that used to be kept as original machine code: bounded string lengths
// (0x140254CCC, 0x140254F48) and stb_image's channel conversion (0x14015D7E0). Mode "engine":
// src/engine/crt_string.c and src/engine/image_convert.c.
#include "peload.h"
#ifdef ENGINE
MS size_t crt_strnlen(const char*,size_t); MS size_t crt_wcsnlen(const uint16_t*,size_t);
MS unsigned char *image_convert_channels(unsigned char*,int,int,unsigned,unsigned,const char**);
MS float crt_asinf(float);
#endif
static uint32_t rs=777; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static MS void *h_malloc(size_t n){ printf("malloc %zu\n",n); return n>(1u<<30)?NULL:malloc(n?n:1); }   // large requests fail, as they may
static MS void h_free(void *p){ free(p); }
static MS long long h_assert(const uint16_t *e,const uint16_t *f,int line){ printf("assert \""); for(;*e;e++) putchar(*e); printf("\" "); for(;*f;f++) putchar(*f); printf(" %d\n",line); return 0; }

// The original's choice of loop: 0 plain, 1 SSE2, 5 AVX2 (its __isa_available, 0x140302080).
static void strings(int cases,int isa){ printf("== strings, processor level %d\n",isa);
#ifndef ENGINE
  *(int*)D(0x140302080ULL)=isa==5&&!__builtin_cpu_supports("avx2")?1:isa;
#endif
  // Buffers at every alignment, with the terminator before, at and after the limit, so each of the
  // original's scalar head, vector body and scalar tail is entered.
  static _Alignas(64) unsigned char pool[1024];
  for(int c=0;c<cases;c++){ unsigned off=rnd()%64, len=rnd()%3?rnd()%200:rnd()%8, lim=rnd()%4?rnd()%260:rnd()%6; if(rnd()%9==0) lim=len+rnd()%3-1;
    memset(pool,0,sizeof pool); for(unsigned i=0;i<len;i++) pool[off+i]=(unsigned char)(1+rnd()%255);
    for(unsigned i=len+1;i<len+300 && off+i<sizeof pool;i++) pool[off+i]=(unsigned char)rnd();          // junk after the terminator
    size_t n;
#ifdef ENGINE
    n=crt_strnlen((char*)pool+off,lim);
#else
    n=((MS size_t(*)(const char*,size_t))F(0x140254CCCULL))((char*)pool+off,lim);
#endif
    printf("strnlen %u %u %u: %zu\n",off,len,lim,n);
    // 16-bit strings: `len` and `lim` in elements; odd addresses take the original's plain loop.
    memset(pool,0,sizeof pool); unsigned wl=len/2, wlim=lim/2; uint16_t w;
    for(unsigned i=0;i<wl;i++){ w=(uint16_t)(1+rnd()%65535); if(rnd()%4==0) w&=0xFF00; if(rnd()%4==0) w&=0x00FF; if(!w) w=0x100; memcpy(pool+off+2*i,&w,2); }
    for(unsigned i=wl+1;i<wl+200 && off+2*i+1<sizeof pool;i++){ w=(uint16_t)rnd(); memcpy(pool+off+2*i,&w,2); }
#ifdef ENGINE
    n=crt_wcsnlen((uint16_t*)(pool+off),wlim);
#else
    n=((MS size_t(*)(const uint16_t*,size_t))F(0x140254F48ULL))((uint16_t*)(pool+off),wlim);
#endif
    printf("wcsnlen %u %u %u: %zu\n",off,wl,wlim,n); } }

static void convert(int cases){
#ifdef ENGINE
  hook(0x14023E640ULL,h_assert); memcpy(Fname("sr_path_malloc"),(uint8_t[]){0x48,0xB8},2); *(uint64_t*)((uint8_t*)Fname("sr_path_malloc")+2)=(uint64_t)h_malloc; memcpy((uint8_t*)Fname("sr_path_malloc")+10,(uint8_t[]){0xFF,0xE0},2);
#else
  hook(0x14023E640ULL,h_assert); hook(0x14023ACF8ULL,h_malloc); hook(0x14023ACE4ULL,h_free);
#endif
  for(int c=0;c<cases;c++){ printf("== convert %d\n",c);
    int src=1+rnd()%4, req=1+rnd()%4, w=rnd()%5?rnd()%24:rnd()%3, h=rnd()%5?rnd()%12:rnd()%3;
    unsigned odd=rnd()%40;
    if(odd==0) src=rnd()%2?0:5; if(odd==1) req=rnd()%2?0:5; if(odd==2) req=-1; if(odd==3) w=-1-(int)(rnd()%3); if(odd==4) h=-1-(int)(rnd()%3);
    if(odd==5){ w=0x7fffffff/(req>0?req:1)+1+rnd()%3; h=rnd()%3; }      // width * channels does not fit
    if(odd==6){ w=40000+rnd()%9; h=60000+rnd()%9; }                      // rows fit, the image does not
    if(odd==7){ w=0x10000; h=0x10000; }                                  // 32-bit product wraps to zero
    if(odd==8 && req>0){ w=0x7fffffff/req+(int)(rnd()%2); h=0; }           // the widest row that fits, and one more
    if(odd==9 && req>0 && req<4){ w=65538/req+(int)(rnd()%2); h=32767; }   // the largest image that fits, and one row byte more
#ifndef _WIN32
    if(odd<3 || (src==req && 0)) { src=1; req=3; }   // the failure reason is kept per thread through the Windows thread block
#endif
    size_t bytes=(w>0&&h>0&&w<1000&&h<1000)?(size_t)w*h*(src>0?src:1):0; unsigned char *px=malloc(bytes+16); for(size_t i=0;i<bytes+16;i++) px[i]=(unsigned char)rnd();
    printf("in %d %d %d %d\n",src,req,w,h);
    const char *reason="(unset)"; unsigned char *out;
#ifdef ENGINE
    out=image_convert_channels(px,src,req,(unsigned)w,(unsigned)h,&reason);
#else
    { // The original stores the reason at offset 16 of its thread-local block; lend it one for the call.
      void *block[4]={0,0,(void*)reason,0}; void *slots[1]={block};
#ifdef _WIN32
      uint64_t saved=__readgsqword(0x58); *(uint32_t*)D(0x144CBE4C4ULL)=0; __writegsqword(0x58,(uint64_t)slots);
#endif
      out=((MS unsigned char*(*)(unsigned char*,int,int,int,int))F(0x14015D7E0ULL))(px,src,req,w,h);
#ifdef _WIN32
      __writegsqword(0x58,saved);
#endif
      reason=block[2]; }
#endif
    printf("%s reason %s\n",out==NULL?"null":out==px?"same":"new",reason);
    if(out){ size_t n=(size_t)w*h*(out==px?src:req); if(w<=0||h<=0||w>=1000||h>=1000) n=0; for(size_t i=0;i<n;i++) printf("%02x%s",out[i],(i+1)%32&&i+1<n?"":"\n"); free(out); } } }

// asinf (0x14023EB20, src/engine/crt_math.c) on [-1, 1]: a fine grid, every exponent from 2^-20 and random bits.
// Outside [-1, 1] and NaN it reports an error through the C runtime's error machinery, which cannot run here.
static void arcsine(int cases){ printf("== asinf\n");
  for(int c=0;c<cases*4;c++){ float x; uint32_t b;
    if(c<cases*2) x=-1.0f+c*(1.0f/cases);
    else if(c<cases*3){ b=(rnd()%0x1F)<<23 | 0x34000000u | (rnd()&0x7FFFFF) | (rnd()%2u)<<31; memcpy(&x,&b,4); }   // exponents 0x68..0x86, kept within 1 below
    else { b=rnd()<<9 ^ rnd(); b&=0xBF7FFFFF; memcpy(&x,&b,4); }
    if(!(x>=-1.0f && x<=1.0f)) x=x/1e3f; if(!(x>=-1.0f && x<=1.0f)) x=0.5f;
    float r;
#ifdef ENGINE
    r=crt_asinf(x);
#else
    r=((MS float(*)(float))F(0x14023EB20ULL))(x);
#endif
    uint32_t a,o; memcpy(&a,&x,4); memcpy(&o,&r,4); printf("asinf %08x %08x\n",a,o); } }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):20000;
  strings(cases,0); strings(cases,1); strings(cases,5); convert(cases); arcsine(cases);
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
