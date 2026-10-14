// Minimal PE64 loader for running individual functions of a Windows x64 image on Linux or Windows.
// On Windows the test program itself must be linked away from 0x140000000 (run.sh does this).
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <signal.h>
#include <ucontext.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/syscall.h>
#include <asm/prctl.h>
#endif
#define MS __attribute__((ms_abi))
typedef struct { uint64_t o, r; } MapEnt;
static uint8_t *img; static uint64_t img_base, img_size;
static MapEnt *fmap, *dmap; static size_t nf, nd; static uint64_t arr_o = 0x140404A6CULL, arr_r = 0x140404A6CULL; static int identity = 1;
static const char *img_name = "?";
static char **imp_names; static size_t nimp;
static int cmpent(const void *a, const void *b){ uint64_t x=((const MapEnt*)a)->o,y=((const MapEnt*)b)->o; return x<y?-1:x>y; }
static void *F(uint64_t o){ if(identity) return (void*)o; MapEnt k={o,0},*e=bsearch(&k,fmap,nf,sizeof k,cmpent); if(!e){fprintf(stderr,"[%s] no function map for %" PRIx64 "\n",img_name,o);exit(90);} return (void*)e->r; }
static int hasF(uint64_t o){ if(identity) return 1; MapEnt k={o,0}; return bsearch(&k,fmap,nf,sizeof k,cmpent)!=NULL; }
static void *D(uint64_t o){ if(identity) return (void*)o; if(o>=arr_o && o < 0x1B475D000ULL) return (void*)(o-arr_o+arr_r); MapEnt k={o,0},*e=bsearch(&k,dmap,nd,sizeof k,cmpent); if(!e){fprintf(stderr,"[%s] no data map for %" PRIx64 "\n",img_name,o);exit(91);} return (void*)e->r; }
static int hasD(uint64_t o){ if(identity) return 1; if(o>=arr_o && o < 0x1B475D000ULL) return 1; MapEnt k={o,0}; return bsearch(&k,dmap,nd,sizeof k,cmpent)!=NULL; }
// reverse lookup of runtime code address to original function (for diagnostics)
static uint64_t revF(uint64_t r, uint64_t *off){ if(identity){*off=0;return r;} uint64_t best=0,bo=0; for(size_t i=0;i<nf;i++) if(fmap[i].r<=r && fmap[i].r>best){best=fmap[i].r;bo=fmap[i].o;} *off=r-best; return bo; }
static struct { char name[64]; uint64_t r; } nmap[256]; static size_t nn;
static void *Fname(const char *n){ for(size_t i=0;i<nn;i++) if(!strcmp(nmap[i].name,n)) return (void*)nmap[i].r; return NULL; }
static void load_map(const char *path){ FILE *f=fopen(path,"r"); if(!f){perror(path);exit(92);} char t; uint64_t o,r; { char line[256]; FILE *g=fopen(path,"r"); while(fgets(line,sizeof line,g)){ char nm[64]; uint64_t a; if(line[0]=='n' && sscanf(line,"n %63s %" SCNx64,nm,&a)==2 && nn<256){ strcpy(nmap[nn].name,nm); nmap[nn++].r=a; } } fclose(g); } size_t cf=0,cd=0; fmap=malloc(sizeof(MapEnt)*20000); dmap=malloc(sizeof(MapEnt)*20000);
  char line2[256]; while(fgets(line2,sizeof line2,f)){ if(line2[0]=='n') continue; if(sscanf(line2," %c %" SCNx64 " %" SCNx64,&t,&o,&r)!=3) continue; if(t=='f') fmap[cf++]=(MapEnt){o,r}; else if(t=='d') dmap[cd++]=(MapEnt){o,r}; else if(t=='b'){arr_o=o;arr_r=r;} }
  fclose(f); nf=cf; nd=cd; qsort(fmap,nf,sizeof(MapEnt),cmpent); qsort(dmap,nd,sizeof(MapEnt),cmpent); identity=0; }
static void report_fault(int code, uint64_t addr, uint64_t rip, uint64_t rsp){ uint64_t off; uint64_t fo=revF(rip,&off);
  fprintf(stderr,"[%s] fault %#x addr %#" PRIx64 " rip %" PRIx64 " (orig fn %" PRIx64 " +%" PRIx64 ")\n",img_name,code,addr,rip,fo,off);
  for(int i=0;i<200;i++){ uint64_t v=((uint64_t*)rsp)[i]; if(v>=img_base+0x1000 && v<img_base+0x800000){ uint64_t o2; uint64_t f2=revF(v,&o2); fprintf(stderr,"   stack[%d] %" PRIx64 " (fn %" PRIx64 " +%" PRIx64 ")\n",i,v,f2,o2);} }
  fflush(stderr); _exit(99); }
#ifdef _WIN32
static LONG CALLBACK fault_handler(EXCEPTION_POINTERS *e){ DWORD c=e->ExceptionRecord->ExceptionCode;
  if(c!=EXCEPTION_ACCESS_VIOLATION && c!=EXCEPTION_ILLEGAL_INSTRUCTION && c!=EXCEPTION_INT_DIVIDE_BY_ZERO && c!=EXCEPTION_BREAKPOINT && c!=EXCEPTION_PRIV_INSTRUCTION && c!=EXCEPTION_STACK_OVERFLOW) return EXCEPTION_CONTINUE_SEARCH;
  uint64_t addr = e->ExceptionRecord->NumberParameters>1 ? (uint64_t)e->ExceptionRecord->ExceptionInformation[1] : 0;
  report_fault((int)c,addr,e->ContextRecord->Rip,e->ContextRecord->Rsp); return EXCEPTION_CONTINUE_SEARCH; }
static void *exec_alloc(size_t n){ void *p=VirtualAlloc(NULL,n,MEM_RESERVE|MEM_COMMIT,PAGE_EXECUTE_READWRITE); if(!p){fprintf(stderr,"VirtualAlloc %zu failed\n",n);exit(97);} return p; }
#else
static void segv(int sig, siginfo_t *si, void *uc_){ ucontext_t *uc=uc_; report_fault(sig,(uint64_t)si->si_addr,uc->uc_mcontext.gregs[REG_RIP],uc->uc_mcontext.gregs[REG_RSP]); }
static void *exec_alloc(size_t n){ void *p=mmap(NULL,n,PROT_READ|PROT_WRITE|PROT_EXEC,MAP_PRIVATE|MAP_ANONYMOUS,-1,0); if(p==MAP_FAILED){perror("mmap");exit(97);} return p; }
#endif
static MS uint64_t import_trap_c(uint64_t idx){ fprintf(stderr,"[%s] unimplemented import called: %s\n",img_name, idx<nimp?imp_names[idx]:"?"); _exit(98); return 0; }
// implemented imports
static MS double i_acos(double x){return acos(x);} static MS double i_asin(double x){return asin(x);} static MS double i_atan(double x){return atan(x);} static MS double i_atan2(double a,double b){return atan2(a,b);}
static MS double i_sin(double x){return sin(x);} static MS double i_cos(double x){return cos(x);} static MS double i_tan(double x){return tan(x);} static MS double i_sqrt(double x){return sqrt(x);}
static MS double i_pow(double a,double b){return pow(a,b);} static MS double i_exp(double x){return exp(x);} static MS double i_log(double x){return log(x);} static MS double i_floor(double x){return floor(x);} static MS double i_ceil(double x){return ceil(x);} static MS double i_fmod(double a,double b){return fmod(a,b);} static MS double i_fabs(double x){return fabs(x);}
static MS float i_sinf(float x){return sinf(x);} static MS float i_cosf(float x){return cosf(x);} static MS float i_sqrtf(float x){return sqrtf(x);} static MS float i_acosf(float x){return acosf(x);} static MS float i_atan2f(float a,float b){return atan2f(a,b);} static MS float i_floorf(float x){return floorf(x);} static MS float i_ceilf(float x){return ceilf(x);} static MS float i_fmodf(float a,float b){return fmodf(a,b);} static MS float i_powf(float a,float b){return powf(a,b);}
static MS void *i_memcpy(void *d,const void *s,size_t n){return memcpy(d,s,n);} static MS void *i_memmove(void *d,const void *s,size_t n){return memmove(d,s,n);} static MS void *i_memset(void *d,int c,size_t n){return memset(d,c,n);} static MS int i_memcmp(const void *a,const void *b,size_t n){return memcmp(a,b,n);}
static MS size_t i_strlen(const char *s){return strlen(s);} static MS int i_strcmp(const char *a,const char *b){return strcmp(a,b);}
static MS void *i_malloc(size_t n){return malloc(n);} static MS void i_free(void *p){free(p);} static MS void *i_calloc(size_t a,size_t b){return calloc(a,b);}
static MS uint64_t i_zero(void){return 0;}
static MS float i_fmaxf(float a,float b){return fmaxf(a,b);} static MS float i_fminf(float a,float b){return fminf(a,b);} static MS double i_fmax(double a,double b){return fmax(a,b);} static MS double i_fmin(double a,double b){return fmin(a,b);} static MS float i_fabsf(float a){return fabsf(a);} static MS float i_roundf(float a){return roundf(a);} static MS double i_round(double a){return round(a);} static MS float i_truncf(float a){return truncf(a);} static MS double i_trunc(double a){return trunc(a);} static MS float i_tanf(float a){return tanf(a);} static MS float i_asinf(float a){return asinf(a);} static MS float i_atanf(float a){return atanf(a);} static MS float i_expf(float a){return expf(a);} static MS float i_logf(float a){return logf(a);} static MS double i_log10(double a){return log10(a);} static MS double i_hypot(double a,double b){return hypot(a,b);}
static int *i_errno_store; static MS int *i_errno(void){ static int e; return &e; }
static struct { const char *name; void *fn; } impl[] = {
 {"acos",i_acos},{"asin",i_asin},{"atan",i_atan},{"atan2",i_atan2},{"sin",i_sin},{"cos",i_cos},{"tan",i_tan},{"sqrt",i_sqrt},{"pow",i_pow},{"exp",i_exp},{"log",i_log},{"floor",i_floor},{"ceil",i_ceil},{"fmod",i_fmod},{"fabs",i_fabs},
 {"sinf",i_sinf},{"cosf",i_cosf},{"sqrtf",i_sqrtf},{"acosf",i_acosf},{"atan2f",i_atan2f},{"floorf",i_floorf},{"ceilf",i_ceilf},{"fmodf",i_fmodf},{"powf",i_powf},
 {"fmaxf",i_fmaxf},{"fminf",i_fminf},{"fmax",i_fmax},{"fmin",i_fmin},{"fabsf",i_fabsf},{"roundf",i_roundf},{"round",i_round},{"truncf",i_truncf},{"trunc",i_trunc},{"tanf",i_tanf},{"asinf",i_asinf},{"atanf",i_atanf},{"expf",i_expf},{"logf",i_logf},{"log10",i_log10},{"hypot",i_hypot},
 {"memcpy",i_memcpy},{"memmove",i_memmove},{"memset",i_memset},{"memcmp",i_memcmp},{"strlen",i_strlen},{"strcmp",i_strcmp},{"malloc",i_malloc},{"free",i_free},{"calloc",i_calloc},{"_errno",i_errno},
 {"EnterCriticalSection",i_zero},{"LeaveCriticalSection",i_zero},{"GetLastError",i_zero},{"SetLastError",i_zero},{"SDL_LockAudio",i_zero},{"SDL_UnlockAudio",i_zero},{"SDL_LockMutex",i_zero},{"SDL_UnlockMutex",i_zero},{"SDL_GetTicks",i_zero},
};
static void load_pe(const char *path){
  FILE *f=fopen(path,"rb"); if(!f){perror(path);exit(93);} fseek(f,0,SEEK_END); long sz=ftell(f); fseek(f,0,SEEK_SET); uint8_t *raw=malloc(sz); if(fread(raw,1,sz,f)!=(size_t)sz)exit(94); fclose(f);
  uint32_t pe=*(uint32_t*)(raw+0x3c); uint8_t *nt=raw+pe; uint16_t nsec=*(uint16_t*)(nt+6), optsz=*(uint16_t*)(nt+20); uint8_t *opt=nt+24;
  img_base=*(uint64_t*)(opt+24); img_size=*(uint32_t*)(opt+56); uint32_t hdrsz=*(uint32_t*)(opt+60);
#ifdef _WIN32
  img=VirtualAlloc((void*)img_base,img_size,MEM_RESERVE|MEM_COMMIT,PAGE_EXECUTE_READWRITE);
  if(img!=(void*)img_base){fprintf(stderr,"cannot map image at %#" PRIx64 " (error %lu)\n",img_base,(unsigned long)GetLastError());exit(95);}
#else
  img=mmap((void*)img_base,img_size,PROT_READ|PROT_WRITE|PROT_EXEC,MAP_PRIVATE|MAP_ANONYMOUS|MAP_FIXED_NOREPLACE|MAP_NORESERVE,-1,0);
  if(img!=(void*)img_base){perror("mmap image");exit(95);}
#endif
  memcpy(img,raw,hdrsz); uint8_t *sec=opt+optsz;
  for(int i=0;i<nsec;i++,sec+=40){ uint32_t va=*(uint32_t*)(sec+12), rs=*(uint32_t*)(sec+16), rp=*(uint32_t*)(sec+20), vs=*(uint32_t*)(sec+8); if(sec[0]=='.'&&!memcmp(sec,".debug",6)) continue; if(rs&&rp){ uint32_t n=rs; if(vs&&vs<n) n=vs; if(va+(uint64_t)n<=img_size) memcpy(img+va,raw+rp,n);} }
  // imports
  uint32_t imp_rva=*(uint32_t*)(opt+112+8*1); 
  size_t cap=4096; imp_names=malloc(cap*sizeof(char*)); uint8_t *stubs=exec_alloc(cap*32);
  if(imp_rva){ for(uint8_t *d=img+imp_rva; *(uint32_t*)(d+12); d+=20){ const char *dll=(char*)img+*(uint32_t*)(d+12); uint32_t oft=*(uint32_t*)d, ft=*(uint32_t*)(d+16); uint64_t *names=(uint64_t*)(img+(oft?oft:ft)), *iat=(uint64_t*)(img+ft);
      for(;*names;names++,iat++){ const char *nm = (*names>>63)? "(ordinal)" : (char*)img+(uint32_t)*names+2; char *full=malloc(strlen(dll)+strlen(nm)+2); sprintf(full,"%s!%s",dll,nm); void *fn=NULL;
        for(size_t k=0;k<sizeof impl/sizeof impl[0];k++) if(!strcmp(impl[k].name,nm)) fn=impl[k].fn;
        if(!fn){ if(nimp>=cap){fprintf(stderr,"too many imports\n");exit(96);} imp_names[nimp]=full; uint8_t *s=stubs+nimp*32; // mov rcx, idx ; mov rax, trap ; jmp rax
          s[0]=0x48;s[1]=0xB9;*(uint64_t*)(s+2)=nimp; s[10]=0x48;s[11]=0xB8;*(uint64_t*)(s+12)=(uint64_t)import_trap_c; s[20]=0xFF;s[21]=0xE0; fn=s; nimp++; }
        *iat=(uint64_t)fn; } } }
  free(raw);
#ifdef _WIN32
  // gs already points at this thread's real TEB, which serves __chkstk and TLS reads.
  AddVectoredExceptionHandler(1,fault_handler);
#else
  // fake TEB for gs-relative accesses (stack limit for __chkstk, TLS slots)
  uint64_t *teb=mmap(NULL,0x4000,PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0); teb[0x30/8]=(uint64_t)teb; teb[0x08/8]=~0ULL; teb[0x10/8]=0;
  uint64_t *tls=mmap(NULL,0x1000,PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0); for(int i=0;i<64;i++) tls[i]=(uint64_t)mmap(NULL,0x10000,PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0); teb[0x58/8]=(uint64_t)tls;
  syscall(SYS_arch_prctl,ARCH_SET_GS,teb);
  stack_t ss; ss.ss_sp=malloc(1<<20); ss.ss_size=1<<20; ss.ss_flags=0; sigaltstack(&ss,NULL);
  struct sigaction sa; memset(&sa,0,sizeof sa); sa.sa_sigaction=segv; sa.sa_flags=SA_SIGINFO|SA_ONSTACK; sigaction(SIGSEGV,&sa,NULL); sigaction(SIGBUS,&sa,NULL); sigaction(SIGILL,&sa,NULL); sigaction(SIGFPE,&sa,NULL); sigaction(SIGTRAP,&sa,NULL);
#endif
}
static void hook(uint64_t orig, void *fn){ uint8_t *p=F(orig); p[0]=0x48;p[1]=0xB8;*(uint64_t*)(p+2)=(uint64_t)fn;p[10]=0xFF;p[11]=0xE0; }
static void stub_ret0(uint64_t orig){ uint8_t *p=F(orig); p[0]=0x31;p[1]=0xC0;p[2]=0xC3; }
static void init_image(int argc,char **argv){ if(argc<2){fprintf(stderr,"usage: %s image.exe [mapfile]\n",argv[0]);exit(2);} img_name = (argc>2 && argv[2][0]) ? "recomp" : "native"; if(argc>2 && argv[2][0]) load_map(argv[2]); load_pe(argv[1]); }
