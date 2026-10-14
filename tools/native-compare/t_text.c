// Runs the text routines (formatter, width, glyph drawing, sr_CSDrawText) with identical inputs in two
// processes and prints, per case, the result, the bytes written, the scratch vertices and every OpenGL call.
// Mode "native": the original executable's routines. Mode "engine": src/engine/text.c on the recomp's memory.
#include "peload.h"
#include "gltrace.h"
#ifdef ENGINE
#define E_ MS
E_ int text_format(char*,const char*,int,const uint64_t*); E_ float text_width(int,const char*,float);
E_ void text_draw_glyphs(const char*,float,float,float,float,float,float,float,int);
E_ void text_draw_variadic(const char*,float,float,float,int,float,float,float,float,...);
#endif
typedef MS void (*draw_text_fn)(const char*,float,float,float,int,float,float,float,float,...);
static uint32_t rs=99; static uint32_t rnd(void){ rs=rs*1664525u+1013904223u; return rs>>8; }
static uint32_t rnd32(void){ return (rnd()<<16)^rnd(); }
static uint64_t rnd64(void){ return ((uint64_t)rnd32()<<32)^rnd32(); }
static float special[]={0.0f,-0.0f,1.0f,-1.0f,0.5f,1e-30f,1e30f,__builtin_inff(),-__builtin_inff(),__builtin_nanf(""),1e-45f,2.0f,16.0f,24.0f,0.25f,0.75f};
static float rf(void){ unsigned k=rnd()%24; if(k==0) return special[rnd()%16]; if(k==1){ uint32_t b=rnd32(); float f; memcpy(&f,&b,4); return f; } float s=(k&1)?10.0f:(k&2)?1000.0f:1.0f; return s*((int)(rnd()&0xFFFFF)-0x80000)/524288.0f; }
static float rsize(void){ return rnd()%8?(float)(8+rnd()%40):rf(); }
static uint64_t fnv(const void *p,size_t n){ const uint8_t *b=p; uint64_t h=1469598103934665603ULL; for(size_t i=0;i<n;i++){ h^=b[i]; h*=1099511628211ULL; } return h; }
#define G(type,addr) (*(type*)D(addr))
// Strings that /s reads live at one fixed address in both processes, so a pointer printed by /i or /x matches.
static char *pool; static const char *strings[6];
static void make_pool(void){
#ifdef _WIN32
  pool=VirtualAlloc((void*)0x30000000,0x10000,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
#else
  pool=mmap((void*)0x30000000,0x10000,PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS|MAP_FIXED_NOREPLACE,-1,0);
#endif
  if(pool!=(char*)0x30000000){ fprintf(stderr,"cannot map string pool\n"); exit(80); }
  static const char *src[]={"hello","","Sub Rosa /i not a directive","x","a longer string with spaces and punctuation!?"}; char *p=pool;
  for(int i=0;i<5;i++){ strcpy(p,src[i]); strings[i]=p; p+=strlen(src[i])+1; } strings[5]=NULL; }
static double doubles[]={0.0,-0.0,1.0,-1.5,3.14159265358979,1e300,-1e-300,123456.789,0.0005,0.00049999,2.5,1e15};
// an argument slot for a directive: integers, doubles (as their bits) or string pointers
static uint64_t rarg(char d){
  if(d=='s') return (uint64_t)(uintptr_t)strings[rnd()%6];
  if(d=='f'||d=='h'){ double v=doubles[rnd()%12]; if(rnd()%3==0) v=(double)rf(); uint64_t b; memcpy(&b,&v,8); return b; }
  if(rnd()%2){ static const int32_t iv[]={0,-1,999,1000,999999,1000000,1234567,-1234567,2147483647,(int32_t)0x80000000,1000000000,65}; return (uint64_t)(uint32_t)iv[rnd()%12]|((uint64_t)rnd32()<<32); }
  return rnd64(); }
// a format string, and one argument per directive that takes one (at most 8)
static void rformat(char *f,int max,uint64_t *args){ static const char *dir[]={"//","/i","/u","/x","/l","/L","/f","/h","/s","/c","/b","/I","/q","/ ","/%","%d"}; int n=0,k=rnd()%12,used=0;
  for(int j=0;j<k && n<max-80;j++){ if(rnd()%2){ const char *d=dir[rnd()%16]; if(strchr("iuxlLfhscbI",d[1]) && d[0]=='/'){ if(used==8) continue; args[used++]=rarg(d[1]); } size_t l=strlen(d); memcpy(f+n,d,l); n+=l; }
    else { int m=1+rnd()%6; for(int q=0;q<m;q++){ char ch=(char)(rnd()%3?'a'+rnd()%26:1+rnd()%255); f[n++]=ch=='/'?'_':ch; } } }
  if(rnd()%6==0) f[n++]='/';   // a '/' at the very end
  f[n]=0; for(int i=used;i<8;i++) args[i]=rarg('i'); }
// text to draw; no '/' so that it formats to itself
static void rtext(char *t,int max){ int n=rnd()%5==0?(int)(rnd()%(unsigned)max):(int)(rnd()%40); for(int i=0;i<n;i++){ char ch=(char)(rnd()%4?32+rnd()%95:1+rnd()%255); t[i]=ch=='/'?'_':ch; } t[n]=0; }
// float data with any NaN printed as one canonical NaN
static void prfloats(const char *tag,const void *p,size_t n){ uint64_t h=1469598103934665603ULL; const uint8_t *b=p; for(size_t i=0;i+4<=n;i+=4){ uint32_t w; memcpy(&w,b+i,4); if((w&0x7f800000)==0x7f800000 && (w&0x7fffff)) w=0x7fc00000; for(int k=0;k<4;k++){ h^=(w>>(8*k))&0xff; h*=1099511628211ULL; } } printf("%s %zu #%016" PRIx64 "\n",tag,n,h); }
static void prhex(const char *tag,const void *p,size_t n){ printf("%s %zu:",tag,n); const uint8_t *b=p; for(size_t i=0;i<n && i<200;i++) printf("%02x",b[i]); printf(" #%016" PRIx64 "\n",fnv(p,n)); }
static void prf(const char *t,float v){ uint32_t b; memcpy(&b,&v,4); if((b&0x7f800000)==0x7f800000 && (b&0x7fffff)) b=0x7fc00000; printf("%s %08x\n",t,b); }
// The original's sprintf (0x140158AB0) needs a started C runtime, so both processes route it here. The
// formatter passes one argument after the format; a Windows x64 variadic call has it in r8 even when it is
// a double, so it arrives here as its 64 bits.
static MS void h_sprintf(char *b,const char *f,uint64_t a){
  if(!strcmp(f,"%I64d")) sprintf(b,"%lld",(long long)a); else if(!strcmp(f,"%I64u")) sprintf(b,"%llu",(unsigned long long)a);
  else if(strchr(f,'f')){ double d; memcpy(&d,&a,8); sprintf(b,f,d); } else if(!strcmp(f,"%s")) sprintf(b,"%s",a?(const char*)(uintptr_t)a:"(null)");
  else sprintf(b,f,(int)(uint32_t)a); }
int main(int argc,char **argv){ init_image(argc,argv); gltrace_install(stdout); make_pool(); hook(0x140158AB0ULL,h_sprintf); setvbuf(stdout,NULL,_IOFBF,1<<20);
  int cases=argc>3?atoi(argv[3]):6000;
  // identical starting state in both processes: fonts (and the bytes before font 0, read by characters >= 0x80)
  uint8_t *fonts=(uint8_t*)&G(uint8_t,0x1519A4060ULL);
  for(int i=-0x1000;i<4*0x3820;i+=4){ float v=(i%16==8||i%16==0)?(float)(rnd()%64)/64.0f:rf(); if(rnd()%5) v=(float)(int)(rnd()%32)*0.03125f; memcpy(fonts+i,&v,4); }
  G(uint32_t,0x1ABD4AC00ULL)=7; G(int32_t,0x1ABD4AC14ULL)=3; G(uint32_t,0x1ABD4AC9CULL)=11; G(uint32_t,0x1AD29946CULL)=22;
  for(int i=0;i<16;i++) (&G(float,0x1A724E6C0ULL))[i]=0.25f*i-1.0f;
  int32_t *scratch=&G(int32_t,0x1A8BF79CCULL);
  static char fmt[2048], text[2048], out[20000];
  for(int c=0;c<cases;c++){ int kind=rnd()%4; printf("== case %d kind %d\n",c,kind);
    for(int f=0;f<4;f++){ *(int32_t*)(fonts+0x3820*f)=rnd()%4!=0; *(uint32_t*)(fonts+0x3820*f+4)=100+f; }
    G(int32_t,0x1A8BF79C0ULL)=rnd()%4;
    uint64_t args[8]; for(int i=0;i<8;i++) args[i]=rarg('i');
    switch(kind){
    case 0: { rformat(fmt,sizeof fmt,args); int cap=rnd()%4?10000:(int)(rnd()%20); memset(out,0xCC,sizeof out);
      int r=
#ifdef ENGINE
        text_format(out,fmt,cap,args);
#else
        (int)((MS int64_t(*)(char*,const char*,int,const uint64_t*))F(0x14006E530ULL))(out,fmt,cap,args);
#endif
      printf("format return %d\n",r); prhex("format in",fmt,strlen(fmt)); prhex("format out",out,sizeof out); break; }
    case 1: { rtext(text,1500); int font=rnd()%4; float size=rsize(); float w=
#ifdef ENGINE
        text_width(font,text,size);
#else
        ((MS float(*)(int,const char*,float))F(0x14006F060ULL))(font,text,size);
#endif
      prf("width",w); break; }
    case 2: { rtext(text,1500); float x=rf(),y=rf(),size=rsize(),r=rf(),g=rf(),b=rf(),a=rf(); int flip=rnd()%3==0?(int)rnd32():(int)(rnd()%2);
#ifdef ENGINE
      text_draw_glyphs(text,x,y,size,r,g,b,a,flip);
#else
      ((MS void(*)(const char*,float,float,float,float,float,float,float,int))F(0x14006DB90ULL))(text,x,y,size,r,g,b,a,flip);
#endif
      break; }
    default: { if(rnd()%2) rformat(fmt,sizeof fmt,args); else rtext(fmt,1200); float x=rf(),y=rf(),size=rsize(),r=rf(),g=rf(),b=rf(),a=rf(); int flags=(int)(rnd()%256); if(rnd()%8==0) flags=(int)rnd32();
      draw_text_fn fn=
#ifdef ENGINE
        (draw_text_fn)text_draw_variadic;
#else
        (draw_text_fn)F(0x14006D930ULL);
#endif
      fn(fmt,x,y,size,flags,r,g,b,a,args[0],args[1],args[2],args[3],args[4],args[5],args[6],args[7]); break; }
    }
    if(kind>=2){ int n=scratch[0]*scratch[1]; printf("scratch count %d stride %d\n",scratch[0],scratch[1]); if(n>0 && n<=20000) prfloats("scratch data",scratch+2,4ULL*n); }
  }
  fprintf(stderr,"[%s] %d cases, %ld GL calls\n",img_name,cases,gl_calls); return 0; }
