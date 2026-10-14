// Records every OpenGL call an image makes, with arguments decoded by the real prototype, so that the
// call stream of the original executable can be compared with the stream produced by other code.
// Requires peload.h. Pointer arguments are recorded by content (or as a buffer offset), never by address.
static struct { const char *name; uint64_t slot; } gl_slots[] = {
#include "gl_slots.inc"
};
#define GL_NSLOTS (sizeof gl_slots/sizeof gl_slots[0])
static FILE *gl_out; static long gl_calls;
static void *gl_slot_addr(uint64_t a){ if(identity) return (void*)a; if(hasD(a)) return D(a); if(a>=0x140384000ULL && a<0x140404050ULL) return (uint8_t*)D(0x140384000ULL)+(a-0x140384000ULL); fprintf(stderr,"no storage for GL slot %" PRIx64 "\n",a); exit(70); }
static void gl_dump(const void *p, size_t n){ const uint8_t *b=p; uint64_t h=1469598103934665603ULL; for(size_t i=0;i<n;i++){ h^=b[i]; h*=1099511628211ULL; } fprintf(gl_out," [%zu bytes #%016" PRIx64,n,h); if(n<=64){ fprintf(gl_out," ="); for(size_t i=0;i+4<=n;i+=4){ uint32_t w; memcpy(&w,b+i,4); fprintf(gl_out," %08x",w);} } fprintf(gl_out,"]"); }
static float gl_f(const double *x,int i){ float f; memcpy(&f,&x[i],4); return f; }
// home[0..3] = rcx,rdx,r8,r9 ; home[4..] = stack arguments ; xmm[0..3] = low 64 bits of xmm0-3
static MS uint64_t gl_record(uint64_t idx, uint64_t *home, double *xmm){
  const char *n=gl_slots[idx].name; gl_calls++;
  #define I(k) ((int)(uint32_t)home[k])
  #define P(k) ((const void*)home[k])
  #define FARG(k) ((k)<4 ? gl_f(xmm,k) : ({ float f_; memcpy(&f_,&home[k],4); f_; }))
  fprintf(gl_out,"%s(",n);
  if(!strcmp(n,"glBufferData")){ fprintf(gl_out,"%#x, %d,",I(0),I(1)); gl_dump(P(2),(size_t)(int64_t)home[1]); fprintf(gl_out,", %#x",I(3)); }
  else if(!strcmp(n,"glBufferSubData")){ fprintf(gl_out,"%#x, %d, %d,",I(0),I(1),I(2)); gl_dump(P(3),(size_t)(int64_t)home[2]); }
  else if(!strcmp(n,"glUniformMatrix4fv")){ fprintf(gl_out,"%d, %d, %d,",I(0),I(1),I(2)&0xff); gl_dump(P(3),64u*I(1)); }
  else if(!strcmp(n,"glUniformMatrix3fv")){ fprintf(gl_out,"%d, %d, %d,",I(0),I(1),I(2)&0xff); gl_dump(P(3),36u*I(1)); }
  else if(!strcmp(n,"glUniform2fv")||!strcmp(n,"glUniform3fv")||!strcmp(n,"glUniform4fv")){ fprintf(gl_out,"%d, %d,",I(0),I(1)); gl_dump(P(2),4u*(n[9]-'0')*I(1)); }
  else if(!strcmp(n,"glVertexAttrib3fv")||!strcmp(n,"glVertexAttrib4fv")){ fprintf(gl_out,"%d,",I(0)); gl_dump(P(1),4u*(n[14]-'0')); }
  else if(!strcmp(n,"glVertexAttribPointer")) fprintf(gl_out,"%d, %d, %#x, %d, %d, offset %lld",I(0),I(1),I(2),I(3)&0xff,I(4),(long long)home[5]);
  else if(!strcmp(n,"glDrawElements")) fprintf(gl_out,"%#x, %d, %#x, offset %lld",I(0),I(1),I(2),(long long)home[3]);
  else if(!strcmp(n,"glDrawArrays")) fprintf(gl_out,"%#x, %d, %d",I(0),I(1),I(2));
  else if(!strcmp(n,"glBindBuffer")||!strcmp(n,"glBindTexture")||!strcmp(n,"glBindFramebuffer")||!strcmp(n,"glBlendFunc")) fprintf(gl_out,"%#x, %d",I(0),I(1));
  else if(!strcmp(n,"glUseProgram")||!strcmp(n,"glEnableVertexAttribArray")||!strcmp(n,"glDisableVertexAttribArray")||!strcmp(n,"glEnable")||!strcmp(n,"glDisable")||!strcmp(n,"glActiveTexture")||!strcmp(n,"glClear")||!strcmp(n,"glDepthMask")) fprintf(gl_out,"%#x",I(0));
  else if(!strcmp(n,"glViewport")||!strcmp(n,"glScissor")) fprintf(gl_out,"%d, %d, %d, %d",I(0),I(1),I(2),I(3));
  else if(!strcmp(n,"glUniform1i")) fprintf(gl_out,"%d, %d",I(0),I(1));
  else if(!strcmp(n,"glUniform1f")) fprintf(gl_out,"%d, %.9g",I(0),FARG(1));
  else if(!strcmp(n,"glClearColor")) fprintf(gl_out,"%.9g, %.9g, %.9g, %.9g",FARG(0),FARG(1),FARG(2),FARG(3));
  else if(!strcmp(n,"glVertexAttrib4f")) fprintf(gl_out,"%d, %.9g, %.9g, %.9g, %.9g",I(0),FARG(1),FARG(2),FARG(3),FARG(4));
  else if(!strcmp(n,"glLineWidth")) fprintf(gl_out,"%.9g",FARG(0));
  else fprintf(gl_out,"?? %#x, %#x, %#x, %#x",I(0),I(1),I(2),I(3));   // prototype not described yet: raw integer registers
  fprintf(gl_out,")\n");
  #undef I
  #undef P
  #undef FARG
  return 0; }
static void gltrace_install(FILE *out){ gl_out=out;
  uint8_t *code=exec_alloc(GL_NSLOTS*96);
  for(size_t i=0;i<GL_NSLOTS;i++){ uint8_t *s=code+i*96, *p=s;
    #define B(...) do{ uint8_t t_[]={__VA_ARGS__}; memcpy(p,t_,sizeof t_); p+=sizeof t_; }while(0)
    B(0x48,0x89,0x4C,0x24,0x08, 0x48,0x89,0x54,0x24,0x10, 0x4C,0x89,0x44,0x24,0x18, 0x4C,0x89,0x4C,0x24,0x20);   // home rcx,rdx,r8,r9
    B(0x48,0x83,0xEC,0x48);                                                                                   // sub rsp,0x48
    B(0xF2,0x0F,0x11,0x44,0x24,0x20, 0xF2,0x0F,0x11,0x4C,0x24,0x28, 0xF2,0x0F,0x11,0x54,0x24,0x30, 0xF2,0x0F,0x11,0x5C,0x24,0x38); // save xmm0-3
    B(0xB9); { uint32_t v=(uint32_t)i; memcpy(p,&v,4); p+=4; }                                                // mov ecx,idx
    B(0x48,0x8D,0x54,0x24,0x50, 0x4C,0x8D,0x44,0x24,0x20);                                                    // lea rdx,[rsp+0x50] ; lea r8,[rsp+0x20]
    B(0x48,0xB8); { uint64_t v=(uint64_t)gl_record; memcpy(p,&v,8); p+=8; }                                   // mov rax,gl_record
    B(0xFF,0xD0, 0x48,0x83,0xC4,0x48, 0xC3);                                                                  // call rax ; add rsp,0x48 ; ret
    #undef B
    *(uint64_t*)gl_slot_addr(gl_slots[i].slot)=(uint64_t)s; } }
