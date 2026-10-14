// One pass of the main loop (0x14003B920, with its patch block at 0x1400403F0): random game, replay, key and
// timer state in two processes; every routine the pass calls is replaced by a recorder that also moves the
// state the pass waits on. Prints the result, the calls and all state the pass can change.
// Mode "engine": src/engine/frame.c.
#include "peload.h"
#ifdef ENGINE
MS int game_frame(int);
#endif
static uint32_t rs=4242; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static uint32_t hs; static uint32_t hrnd(void){ hs=hs*1664525u+1013904223u; return hs>>8; }   // for the recorders
#define I(a) (*(int32_t*)D(a))
#define U(a) (*(uint32_t*)D(a))
#define B(a) (*(uint8_t*)D(a))
#define FL(a) (*(float*)D(a))
static float rf(float scale){ return scale*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
static float odd_float(float scale){ unsigned k=rnd()%40; if(k==0) return __builtin_nanf(""); if(k==1) return __builtin_inff(); if(k==2){ uint32_t b=rnd32(); float f; memcpy(&f,&b,4); return f; } return rf(scale); }

// ---- recorders -----------------------------------------------------------------------------------------------
static uint32_t clock_now;
static MS uint64_t h_ticks(void){ clock_now+=hrnd()%7; printf(" ticks=%u\n",clock_now); return clock_now; }
static MS uint64_t h_replay_read(void){ printf(" replay_read\n"); I(0x144CBFAB0ULL)+=1+(int)(hrnd()%2); if(hrnd()%3==0) I(0x183EBFD34ULL)+=1+(int)(hrnd()%3); if(hrnd()%4==0) I(0x144CBFAC8ULL)=1; if(hrnd()%9==0) I(0x144CBFAC0ULL)-=2; return 0; }
static MS uint64_t h_104ea0(int a){ printf(" 104EA0(%d)\n",a); return 0; }
static MS uint64_t h_1178f0(int a){ printf(" 1178F0(%d)\n",a); return 0; }
static MS uint64_t h_load(char *a,char *b,int c){ printf(" load_building(%lld,%lld,%d)\n",(long long)(a-(char*)D(0x1AD2C94A0ULL)),(long long)(b-(char*)D(0x1ABD4ACA0ULL)),c); return 0; }
static MS uint64_t h_23ac0(int a,unsigned b,int c,unsigned d,int e,int f,int g,unsigned h,int i){ printf(" 23AC0(%d,%u,%d,%u,%d,%d,%d,%u,%d)\n",a,b,c,d,e,f,g,h,i); return 0; }
static MS uint64_t h_40490(void){ printf(" 40490\n"); I(0x1A4D3BD30ULL)=I(0x183EBFD34ULL); if(hrnd()%3==0){ I(0x183F7C540ULL)=hrnd()%4?(int)(hrnd()%256):-1; I(0x183EBFD34ULL)+=(int)(hrnd()%40); } return 0; }
#define PLAIN(n) static MS uint64_t h_##n(void){ printf(" " #n " paused=%d\n",I(0x183EBFD48ULL)); return 0; }   // as the callee would see it
PLAIN(reset_game) PLAIN(26E70) PLAIN(10110) PLAIN(E65F0) PLAIN(28BD0) PLAIN(29120) PLAIN(132F90) PLAIN(133090) PLAIN(11B2A0) PLAIN(physics_tick)
PLAIN(F5820) PLAIN(136450) PLAIN(8F1B0) PLAIN(8F050) PLAIN(44920) PLAIN(42930) PLAIN(2B9C0) PLAIN(C2210) PLAIN(CF160) PLAIN(1597F0) PLAIN(158CD0) PLAIN(2CE50)
static void hooks(void){
  hook(0x140198F9BULL,h_ticks); hook(0x140127300ULL,h_replay_read); hook(0x140104EA0ULL,h_104ea0); hook(0x1401178F0ULL,h_1178f0); hook(0x140026830ULL,h_load); hook(0x140023AC0ULL,h_23ac0); hook(0x140040490ULL,h_40490);
  hook(0x140127910ULL,h_reset_game); hook(0x140026E70ULL,h_26E70); hook(0x140010110ULL,h_10110); hook(0x1400E65F0ULL,h_E65F0); hook(0x140028BD0ULL,h_28BD0); hook(0x140029120ULL,h_29120);
  hook(0x140132F90ULL,h_132F90); hook(0x140133090ULL,h_133090); hook(0x14011B2A0ULL,h_11B2A0); hook(0x140116210ULL,h_physics_tick); hook(0x1400F5820ULL,h_F5820); hook(0x140136450ULL,h_136450);
  hook(0x14008F1B0ULL,h_8F1B0); hook(0x14008F050ULL,h_8F050); hook(0x140044920ULL,h_44920); hook(0x140042930ULL,h_42930); hook(0x14002B9C0ULL,h_2B9C0); hook(0x1400C2210ULL,h_C2210); hook(0x1400CF160ULL,h_CF160);
  hook(0x1401597F0ULL,h_1597F0); hook(0x140158CD0ULL,h_158CD0); hook(0x14002CE50ULL,h_2CE50); }

// ---- state ---------------------------------------------------------------------------------------------------
static const uint64_t ints[]={0x183EBFD50ULL,0x183EBFD40ULL,0x16B27DF84ULL,0x16B27E094ULL,0x16B27E198ULL,0x183EBFD38ULL,0x183EBFD34ULL,0x1A4D3BD30ULL,0x183EBFD3CULL,0x183EBFD4CULL,0x183EBFD48ULL,
  0x189F0EEA0ULL,0x1AD04ADC0ULL,0x183EBFCCCULL,0x183EBFCD8ULL,0x183EBFAACULL,0x183EBFCC8ULL,0x1A4D2DCE4ULL,0x1A4D2DCE0ULL,0x16B165F70ULL,0x16B1F5F74ULL,0x16B2A2EC0ULL,0x183EBFD54ULL,0x183EBFD58ULL,
  0x18402CCA0ULL,0x144CBFAA4ULL,0x144CBFAB0ULL,0x144CBFAB4ULL,0x144CBFAC0ULL,0x144CBFAC8ULL,0x151E461D4ULL,0x151E461D0ULL,0x183F7C2FCULL,0x183F7AEE0ULL,0x183F7C540ULL,0x18399EB60ULL,0x183F79DF8ULL,
  0x183F79DFCULL,0x183F7AED8ULL,0x183F7AEDCULL,0x1A7971D80ULL,0x1AD2C94ECULL,0x1AD2C94F0ULL,0x1AD2C94F4ULL,0x1AE1C94F8ULL,0x1AE1C94FCULL,0x1AE1C9500ULL};
static const uint64_t keys[]={0x183F7C9A4ULL,0x183F7C7A4ULL,0x183F7C99AULL,0x183F7C79AULL,0x183F7C99CULL,0x183F7C79CULL,0x183F7C99DULL,0x183F7C79DULL,0x183F7C969ULL,0x183F7C96AULL,0x183F7C79EULL,
  0x183F7C99EULL,0x183F7C975ULL,0x183F7C775ULL,0x183F7C977ULL,0x183F7C777ULL,0x183F7C97CULL,0x183F7C77CULL,0x183F7CA41ULL};
#define NI (sizeof ints/sizeof *ints)
#define NK (sizeof keys/sizeof *keys)
#define PLAYER(i,o) I(0x151620C60ULL+0x3834ULL*(uint64_t)(i)+(o))
#define HUMAN(i,o)  I(0x18329E308ULL+0x6FF8ULL*(uint64_t)(i)+(o))
#define HUMANF(i,o) FL(0x18329E308ULL+0x6FF8ULL*(uint64_t)(i)+(o))
#define ITEM(i,o)   I(0x182BBB180ULL+0x1B80ULL*(uint64_t)(i)+(o))
#define ITEMF(i,o)  FL(0x182BBB180ULL+0x1B80ULL*(uint64_t)(i)+(o))
#define RECORD(i)   ((uint8_t*)D(0x1A771F380ULL+0x94ULL*(uint64_t)(i)))
#define TYPES 6

static void setup(void){
  for(size_t i=0;i<NI;i++) I(ints[i])=(int)(rnd()%7)-1;
  for(size_t i=0;i<NK;i++) B(keys[i])=rnd()%3==0;
  // pacing: sometimes too early, sometimes far behind
  I(0x183EBFD50ULL)=rnd()%4==0; clock_now=1000+rnd()%100000; { unsigned k=rnd()%10; U(0x183EBFD40ULL)=clock_now-(k==0?rnd()%20:k==1?240+rnd()%20:k==2?rnd32():16+rnd()%120); }
  I(0x16B27E094ULL)=rnd()%32; for(int i=0;i<32;i++) I(0x16B27E098ULL+4*i)=rnd()%6==0?(int)rnd32():(int)(rnd()%40);
  // game and replay
  I(0x183EBFD34ULL)=rnd()%5000; I(0x1A4D3BD30ULL)=rnd()%3?I(0x183EBFD34ULL):(int)(rnd()%5000); I(0x183EBFD3CULL)=I(0x183EBFD34ULL)-(int)(rnd()%64)+(rnd()%9==0?5000:0);
  I(0x183EBFD4CULL)=rnd()%5==0; I(0x183EBFD48ULL)=rnd()%4==0; I(0x189F0EEA0ULL)=rnd()%6==0; I(0x1AD04ADC0ULL)=rnd()%2; I(0x183EBFCCCULL)=rnd()%20?(int)(rnd()%5):-1; I(0x183EBFAACULL)=rnd()%6;
  I(0x183EBFCC8ULL)=rnd()%3; I(0x1A4D2DCE4ULL)=rnd()%3; I(0x16B2A2EC0ULL)=rnd()%4?(int)(rnd()%5184000):(int)rnd32(); FL(0x18402CCA0ULL)=rnd()%3?3.1415927f-rf(0.06f):odd_float(7.0f);
  I(0x144CBFAA4ULL)=rnd()%3==0; I(0x144CBFAB0ULL)=rnd()%60; I(0x144CBFAB4ULL)=rnd()%70; I(0x144CBFAC0ULL)=rnd()%4?I(0x183EBFD34ULL)+(int)(rnd()%12)-4:(int)(rnd()%3)-1; I(0x144CBFAC8ULL)=rnd()%3==0;
  if(rnd()%12==0) I(0x183EBFD34ULL)=(int)(0x80000000u+rnd()%2000);            // rewinding wraps
  for(int k=0;k<3;k++){ I(0x1AD2C94ECULL+4*k)=rnd()%80; I(0x1AE1C94F8ULL+4*k)=(int)rnd32(); }
  // players, the local one and its human
  for(int p=0;p<256;p++){ PLAYER(p,0)=rnd()%4==0; PLAYER(p,0x2D18)=rnd()%2; PLAYER(p,0x9C)=rnd()%5?(int)(rnd()%256):-1; PLAYER(p,0x120)=(int)rnd32(); }
  int lp=rnd()%7?(int)(rnd()%256):-1; I(0x183F7C540ULL)=lp; float origin[3]={rf(20.0f),rf(20.0f),rf(20.0f)};
  for(int h=0;h<256;h++){ HUMAN(h,0x28)=rnd()%9?-1:(int)(rnd()%8); HUMAN(h,0x3C)=rnd()%6; HUMAN(h,0x78)=(int)(rnd()%80)-10; HUMAN(h,0x6D50)=rnd()%8?(int)(rnd()%110):(int)rnd32();
    for(int k=0;k<3;k++){ HUMANF(h,0x5CC+4*k)=origin[k]+rf(0.5f); HUMANF(h,0x614+4*k)=rnd()%50?rf(1.0f):odd_float(1.0f); }
    for(int k=0;k<2;k++){ HUMAN(h,0x6AD0+0x28*k)=rnd()%3?0:(int)(rnd()%3); HUMAN(h,0x6AD4+0x28*k)=rnd()%1024; } }
  I(0x183F79DF8ULL)=rnd()%6; FL(0x183F79DFCULL)=odd_float(1.0f); FL(0x183F7AED8ULL)=odd_float(1.0f); FL(0x183F7AEDCULL)=rnd()%3?rf(0.05f):odd_float(1.0f);
  // items around the reach, some held, some attached to held ones; which types accept which
  for(int i=0;i<1024;i++){ ITEM(i,0)=rnd()%3!=0; ITEM(i,0x14)=rnd()%TYPES; ITEM(i,0x24)=rnd()%6?-1:(int)(rnd()%256); ITEM(i,0x28)=rnd()%5?-1:(int)(rnd()%1024);
    for(int k=0;k<3;k++) ITEMF(i,0x5C+4*k)=origin[k]+(rnd()%8==0?rf(1.2f):rf(30.0f)); if(rnd()%300==0) ITEMF(i,0x5C)=odd_float(1.0f); }
  for(int a=0;a<TYPES;a++) for(int b=0;b<TYPES;b++) I(0x182A7E29CULL+4ULL*(0x4F4ULL*a+b))=rnd()%2;
  // timed records and countdowns
  int n=rnd()%4?(int)(rnd()%24):0; if(rnd()%30==0) n=-(int)(rnd()%3); I(0x1A7971D80ULL)=n;
  for(int i=0;i<26;i++){ uint8_t *r=RECORD(i); for(int k=0;k<0x94;k++) r[k]=(uint8_t)rnd(); static const int left[]={0,1,1,2,2,3,9,0xFFFE,0xFFFF,0x10000,-1,-5}; int v=left[rnd()%12]; memcpy(r+4,&v,4); }
  for(int i=0;i<128;i++){ I(0x192E8F668ULL+0x130ULL*i)=(int)(rnd()%5)-1; I(0x192E8F668ULL+0x130ULL*i+0x98)=(int)(rnd()%5)-1; if(rnd()%40==0) I(0x192E8F668ULL+0x130ULL*i)=(int)rnd32(); }
  for(int i=0;i<32;i++) I(0x18399EF78ULL+0x20CULL*i)=rnd()%20?(int)(rnd()%5)-1:(int)rnd32(); }

static void dump(void){
  printf("ints:"); for(size_t i=0;i<NI;i++) printf(" %08x",U(ints[i])); printf("\nkeys:"); for(size_t i=0;i<NK;i++) printf(" %u",B(keys[i]));
  printf("\ndurations:"); for(int i=0;i<32;i++) printf(" %x",U(0x16B27E098ULL+4*i));
  printf("\nrecords:"); for(int i=0;i<26;i++){ uint8_t *r=RECORD(i); uint32_t sum=0; for(int k=0;k<0x94;k++) sum=sum*31+r[k]; printf(" %08x",sum); }
  printf("\ncountdowns:"); for(int i=0;i<128;i++) printf(" %x %x",U(0x192E8F668ULL+0x130ULL*i),U(0x192E8F668ULL+0x130ULL*i+0x98)); for(int i=0;i<32;i++) printf(" %x",U(0x18399EF78ULL+0x20CULL*i)); printf("\n"); }

int main(int argc,char **argv){ init_image(argc,argv); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):6000; hooks();
  for(int c=0;c<cases;c++){ printf("== case %d\n",c); setup(); hs=rnd32(); int input=rnd()%4!=0, result;
#ifdef ENGINE
    result=game_frame(input);
#else
    result=((MS int(*)(int))F(0x14003B920ULL))(input);
#endif
    printf("result %d input %d\n",result,input); dump(); }
  fprintf(stderr,"[%s] %d cases\n",img_name,cases); return 0; }
