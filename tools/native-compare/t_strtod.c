// Decimal digits to float/double (0x14023023C): the same digit strings and exponents in two processes; prints
// the status and the bits stored. Inputs are random digit strings over the whole exponent range, and exact
// binary values (M x 2^k as decimal digits, where rounding ties and exactly representable numbers live), also
// with their last digit nudged or more digits appended. Mode "engine": src/engine/crt_strtod.c.
#include "peload.h"
#include <xmmintrin.h>
#ifdef ENGINE
MS long long crt_convert_decimal(const void*,const void*);
#endif
static uint32_t rs=31337; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
typedef struct { int32_t exponent; uint32_t count; uint8_t digits[768]; uint8_t negative; } Number;
typedef struct { void *value; uint8_t is_double; } Target;

// decimal digits of a big number, most significant first, in a work buffer
static uint8_t work[2048]; static int wn;
static void w_set(uint64_t v){ wn=0; uint8_t t[24]; int n=0; do{ t[n++]=(uint8_t)(v%10); v/=10; }while(v); while(n) work[wn++]=t[--n]; }
static void w_mul(unsigned m){ unsigned carry=0; for(int i=wn-1;i>=0;i--){ unsigned v=work[i]*m+carry; work[i]=(uint8_t)(v%10); carry=v/10; } while(carry){ memmove(work+1,work,(size_t)wn); work[0]=(uint8_t)(carry%10); carry/=10; wn++; } }

static void random_digits(Number *n){
  unsigned k=rnd()%10; n->count=k<5?1+rnd()%20:k<8?1+rnd()%60:k<9?1+rnd()%400:700+rnd()%69;
  for(uint32_t i=0;i<n->count;i++) n->digits[i]=(uint8_t)(rnd()%10);
  if(rnd()%4==0) for(uint32_t i=1;i+1<n->count;i++) if(rnd()%3) n->digits[i]=rnd()%2?0:9;     // runs of 0 and 9
  n->digits[0]=(uint8_t)(1+rnd()%9); n->digits[n->count-1]=(uint8_t)(1+rnd()%9);
  unsigned e=rnd()%20;
  n->exponent = e<8?(int)(rnd()%40)-15 : e<14?(int)(rnd()%700)-380 : e<16?(int)(rnd()%60)-350 : e<17?280+(int)(rnd()%40) : e<18?(int)(rnd()%90)-60
              : e<19?(int)(rnd()%4000)-2000 : (int)rnd32();
  // where the 3,680-bit integers run out: the largest integer part, and the largest denominator
  if(rnd()%12==0){ n->count=1+rnd()%25; n->digits[n->count-1]=(uint8_t)(1+rnd()%9); n->exponent=rnd()%2?1095+(int)(rnd()%25):-(1070+(int)(rnd()%45)); } }

static void exact_binary(Number *n){
  // M x 2^k or M x 2^-k, M up to 64 bits, often just above a power of two or with few bits set
  uint64_t m=((uint64_t)rnd32()<<32)|rnd32(); unsigned bits=1+rnd()%64; if(bits<64) m&=((uint64_t)1<<bits)-1; m|=(uint64_t)1<<(bits-1);
  unsigned shape=rnd()%6; if(shape==0) m=((uint64_t)1<<(bits-1))|1; if(shape==1) m=((uint64_t)1<<(bits-1))|((uint64_t)1<<(rnd()%bits)); if(shape==2) m|=1; if(shape==3) m=(((uint64_t)1<<(bits-1))<<1)-1;
  w_set(m); int k; int e;
  if(rnd()%2){ k=rnd()%4?(int)(rnd()%120):(int)(rnd()%1040); for(int i=0;i<k;i++){ w_mul(2); if(wn>760) break; } e=wn; }
  else { k=rnd()%3?(int)(rnd()%130):(int)(rnd()%1076); int done=0; for(;done<k;done++){ if(wn>740) break; w_mul(5); } e=wn-done; }
  unsigned tweak=rnd()%8;
  if(tweak==0 && work[wn-1]<9) work[wn-1]++; if(tweak==1 && work[wn-1]>1) work[wn-1]--;
  if(tweak==2 && wn<740){ int z=1+(int)(rnd()%20); for(int i=0;i<z;i++) work[wn++]=0; work[wn++]=(uint8_t)(1+rnd()%9); }   // a little above
  if(tweak==3 && wn<760){ work[wn++]=5; }                                                                           // half a last digit above
  while(wn>1 && work[wn-1]==0) wn--;                       // as the caller strips trailing zeros
  if(wn>768) wn=768;
  n->count=(uint32_t)wn; memcpy(n->digits,work,(size_t)wn); n->exponent=e; }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):60000;
  for(int c=0;c<cases;c++){ static Number n; memset(&n,0,sizeof n);
    if(rnd()%2) random_digits(&n); else exact_binary(&n);
    n.negative=rnd()%2;
    uint64_t stored=((uint64_t)rnd32()<<32)|rnd32(), before=stored; Target t={&stored,(uint8_t)(rnd()%2)}; long long status;
    // a quarter of the cases under another rounding mode (the original asks the processor for it)
    unsigned mode=rnd()%8, csr=_mm_getcsr(); if(mode<3) _mm_setcsr((csr&~0x6000u)|((mode+1)<<13));
#ifdef ENGINE
    status=crt_convert_decimal(&n,&t);
#else
    status=((MS long long(*)(const void*,const void*))F(0x14023023CULL))(&n,&t);
#endif
    _mm_setcsr(csr);
    if(!t.is_double) stored=(stored&0xFFFFFFFFu)|(((stored^before)>>32)<<32);            // the upper half must be left alone
    printf("%c %c r%u e=%d n=%u ",t.is_double?'d':'f',n.negative?'-':'+',mode<3?mode+1:0,n.exponent,n.count); for(uint32_t i=0;i<n.count && i<24;i++) putchar('0'+n.digits[i]);
    printf("%s: %d %016llx\n",n.count>24?"..":"",(int)status,(unsigned long long)stored); }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
