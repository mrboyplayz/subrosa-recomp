"""Compare original human spawn bone loop, without surrounding callbacks."""
import hashlib
import json
from pathlib import Path
import subprocess
import struct
import pefile

PROJECT=Path(__file__).resolve().parents[1]
PIN='e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'

def main():
    original=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(original.read_bytes()).hexdigest()!=PIN:raise ValueError('Wrong original')
    pe=pefile.PE(str(original),fast_load=True)
    out=PROJECT/'reports/rust-human-bodies-20261003';out.mkdir(parents=True,exist_ok=True)
    c=r'''
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct body {unsigned words[47];};struct bone {unsigned words[78];};struct template {unsigned words[25];};
extern int sr_rust_build_human_bodies(struct bone*,struct body*,size_t,const struct template*,unsigned,const unsigned*,const unsigned*);
struct args {void *fn,*image,*position,*orientation,*bones,*templates;unsigned human;};
extern void native_bone_loop(struct args*);
extern void native_bone_return(void);
static unsigned bits(float f){unsigned u;memcpy(&u,&f,4);return u;}
static unsigned char *debug_image;
static LONG WINAPI fault(EXCEPTION_POINTERS *e){fprintf(stderr,"exception=%lx rva=%llx access=%llx rdx=%llx rbx=%llx rsp=%llx\n",e->ExceptionRecord->ExceptionCode,(unsigned long long)(e->ContextRecord->Rip-(uintptr_t)debug_image),(unsigned long long)e->ExceptionRecord->ExceptionInformation[1],(unsigned long long)e->ContextRecord->Rdx,(unsigned long long)e->ContextRecord->Rbx,(unsigned long long)e->ContextRecord->Rsp);fflush(stderr);ExitProcess(1);return EXCEPTION_CONTINUE_SEARCH;}
int main(void){AddVectoredExceptionHandler(1,fault);unsigned char *image=VirtualAlloc(NULL,0x43a00000ULL,MEM_RESERVE,PAGE_NOACCESS);debug_image=image;if(!image)return 9;
'''
    for page,size,copy in [(0x53000,4096,True),(0x5c000,8192,True),(0x1fc000,4096,False),(0x278000,4096,True),
        (0x4981000,0x180000,False),(0x4399d000,8192,False)]:
        c+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 10;\n'
        if copy:
            c+='{unsigned char data[]={'+','.join(map(str,pe.get_data(page,size)))+'};'
            c+=f'memcpy(image+{page},data,sizeof data);}}\n'
    c+=r'''
unsigned char bridge[12]={0x48,0xb8,0,0,0,0,0,0,0,0,0xff,0xe0};
void *(*host_memset)(void*,int,size_t)=memset;memcpy(bridge+2,&host_memset,8);memcpy(image+0x1fcd30,bridge,12);
// The fragment owns its outgoing shadow space. Enter by JMP so allocator
// home-slot stores cannot overwrite an artificial fragment return address.
void (*done)(void)=native_bone_return;memcpy(bridge+2,&done,8);memcpy(image+0x53ce2,bridge,12);
struct body *n=(struct body*)(image+0x49816e0),*r=malloc(8192*sizeof(*r));if(!r)return 11;
struct template *t=(struct template*)(image+0x4399dee0);
struct bone nb[16],rb[16];unsigned seed=0x463827,cases=0;
for(unsigned sample=0;sample<256;sample++){
 for(unsigned i=0;i<8192;i++){
  for(unsigned j=0;j<47;j++){seed=seed*1664525+1013904223;r[i].words[j]=seed;}
  r[i].words[0]=(i%23==sample%23||i>8174)?0:1;
 }
 memcpy(n,r,8192*sizeof(*r));
 for(unsigned i=0;i<16;i++){
  for(unsigned j=0;j<78;j++){seed=seed*1664525+1013904223;rb[i].words[j]=seed;}
  for(unsigned j=0;j<25;j++){seed=seed*1664525+1013904223;t[i].words[j]=bits(((int)(seed%1025)-512)*0.003f);}
  t[i].words[0]=i?((sample+i)%i):0;
  for(unsigned j=12;j<15;j++)t[i].words[j]=bits(0.1f+(sample+j)%29*0.125f);
 }
 if(sample==0)memcpy(t,original_templates,1600);
 memcpy(nb,rb,sizeof nb);
 unsigned p[3],m[9];
 for(unsigned j=0;j<3;j++)p[j]=bits(((int)(sample+j)%17-8)*0.375f);
 for(unsigned j=0;j<9;j++)m[j]=bits(((int)(sample*7+j*11)%31-15)*0.075f);
 if(sample==0){memset(m,0,sizeof m);m[0]=m[4]=m[8]=bits(1.0f);}
 struct args a={image+0x53a80,image,p,m,nb,t,sample%256};
 native_bone_loop(&a);
 int result=sr_rust_build_human_bodies(rb,r,8192,t,a.human,p,m);
 if(result||memcmp(nb,rb,sizeof rb)||memcmp(n,r,8192*sizeof(*r))){
  printf("mismatch sample=%u rust=%d\n",sample,result);
  for(unsigned i=0;i<16;i++)for(unsigned j=0;j<78;j++)if(nb[i].words[j]!=rb[i].words[j])printf("bone=%u word=%u native=%08x rust=%08x\n",i,j,nb[i].words[j],rb[i].words[j]);
  for(unsigned i=0;i<8192;i++)for(unsigned j=0;j<47;j++)if(n[i].words[j]!=r[i].words[j]){printf("body=%u word=%u native=%08x rust=%08x\n",i,j,n[i].words[j],r[i].words[j]);return 1;}
  return 1;
 }cases++;
}
// Safe adapter rejects malformed parent links and capacity before mutation.
struct bone before[16];memcpy(before,rb,sizeof rb);t[1].words[0]=1;
if(sr_rust_build_human_bodies(rb,r,8192,t,0,t[0].words+1,t[0].words+4)!=-1||memcmp(before,rb,sizeof rb))return 12;
printf("{\"cases\":%u,\"all_16_bone_bytes_match\":true,\"full_body_pool_bytes_match\":true,\"cyclic_hierarchy_rejected\":true}\n",cases);return 0;}
'''
    data=(PROJECT/'reports/human-templates-20261003/templates.bin').read_bytes()
    values=struct.unpack('<400I',data)
    c=c.replace('for(unsigned sample=0;sample<256;sample++){',
        'static const unsigned original_templates[400]={'+','.join(str(v)+'u' for v in values)+'};\nfor(unsigned sample=0;sample<256;sample++){')
    assembly=r'''
.text
.globl native_bone_loop
native_bone_loop:
    pushq %rbx
    pushq %rbp
    pushq %rdi
    pushq %rsi
    pushq %r12
    pushq %r13
    pushq %r14
    pushq %r15
    subq $200,%rsp
    movups %xmm6,64(%rsp)
    movups %xmm7,80(%rsp)
    movq %rcx,%r10
    movq 8(%r10),%rdx
    movq 16(%r10),%r12
    movq 24(%r10),%r14
    movq 32(%r10),%rbx
    leaq 52(%rbx),%r13
    addq $12,%rbx
    movq 40(%r10),%rdi
    addq $12,%rdi
    movl 48(%r10),%ebp
    xorl %r15d,%r15d
    movl $0x3f800000,%eax
    movd %eax,%xmm7
    movq $0,48(%rsp)
    movl $0,56(%rsp)
    jmp *(%r10)
.globl native_bone_return
native_bone_return:
    movups 64(%rsp),%xmm6
    movups 80(%rsp),%xmm7
    addq $200,%rsp
    popq %r15
    popq %r14
    popq %r13
    popq %r12
    popq %rsi
    popq %rdi
    popq %rbp
    popq %rbx
    ret
'''
    source=out/'human_bodies.c';source.write_text(c,encoding='utf-8');asm=out/'human_bodies.S';asm.write_text(assembly,encoding='utf-8');exe=source.with_suffix('.exe')
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(source),str(asm),str(library),'-o',str(exe)],capture_output=True,text=True)
    (out/'build.txt').write_text(build.stdout+build.stderr,encoding='utf-8');build.check_returncode()
    run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60)
    (out/'stdout.txt').write_text(run.stdout+run.stderr,encoding='utf-8')
    if run.returncode:print(run.stdout+run.stderr)
    run.check_returncode();result=json.loads(run.stdout)
    result.update(original_sha256=PIN,original_template_sha256=hashlib.sha256(data).hexdigest(),rust_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/human.rs').read_bytes()).hexdigest(),
        scope='140053a80..140053ce1 complete 16-bone loop and original body allocator; finite/default FP, valid acyclic hierarchy, positive template diagonal, sufficient slots, arbitrary finite matrices; surrounding human allocation/defaults, joints, controller and pose rendering excluded')
    (out/'result.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');print(json.dumps(result))

if __name__=='__main__':main()
