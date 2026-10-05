"""Compare original linear integration loop with angular callback excluded."""
import hashlib
import json
from pathlib import Path
import subprocess
import pefile

PROJECT=Path(__file__).resolve().parents[1]
PIN='e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e'


def main():
    original=PROJECT.parent/'subrosa.exe'
    if hashlib.sha256(original.read_bytes()).hexdigest()!=PIN:raise ValueError('Wrong original')
    pe=pefile.PE(str(original),fast_load=True)
    out=PROJECT/'reports/rust-linear-body-step-20261003';out.mkdir(parents=True,exist_ok=True)
    c=r'''
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct body {unsigned words[47];};
extern void sr_rust_advance_linear_bodies(struct body*,size_t);
extern void native_linear_fragment(void*);
int main(void){unsigned char *image=VirtualAlloc(NULL,0x4b10000ULL,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''
    for page,size,copy in [(0x116000,4096,True),(0x12b000,4096,False),(0x278000,4096,True),(0x4981000,0x180000,False)]:
        c+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 10;\n'
        if copy:
            c+='{unsigned char data[]={'+','.join(map(str,pe.get_data(page,size)))+'};'
            c+=f'memcpy(image+{page},data,sizeof data);}}\n'
    c+=r'''
// Scoped linear loop: angular integration excluded, exit replaced by RET.
image[0x12b2d0]=0xc3;image[0x1162d8]=0xc3;
struct body *n=(struct body*)(image+0x49816e0),*r=malloc(8192*sizeof(*r));if(!r)return 11;
unsigned seed=0x947123,cases=0;
for(unsigned sample=0;sample<128;sample++){
 for(unsigned i=0;i<8192;i++){
  for(unsigned j=0;j<47;j++){seed=seed*1664525+1013904223;float v=((int)(seed%4097)-2048)*0.001f;memcpy(&r[i].words[j],&v,4);}
  r[i].words[0]=(i+sample)%4?1:0;r[i].words[2]=(i+sample)%5?0:1;
 }
 memcpy(n,r,8192*sizeof(*r));
 for(unsigned iteration=0;iteration<8;iteration++){
  sr_rust_advance_linear_bodies(r,8192);native_linear_fragment(image+0x116250);
  if(memcmp(n,r,8192*sizeof(*r))){printf("mismatch sample=%u iteration=%u\n",sample,iteration);return 1;}cases++;
 }
}
printf("{\"pool_passes\":%u,\"records_compared\":%u,\"all_record_bytes_match\":true}\n",cases,cases*8192);return 0;}
'''
    asm=r'''
.text
.globl native_linear_fragment
native_linear_fragment:
    pushq %rbx
    pushq %rsi
    pushq %rdi
    pushq %r12
    subq $168, %rsp
    movaps %xmm6, 0(%rsp)
    xorq %r12, %r12
    call *%rcx
    movaps 0(%rsp), %xmm6
    addq $168, %rsp
    popq %r12
    popq %rdi
    popq %rsi
    popq %rbx
    ret
'''
    source=out/'linear_body.c';source.write_text(c,encoding='utf-8');assembly=out/'linear_body.S';assembly.write_text(asm,encoding='utf-8');exe=source.with_suffix('.exe')
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(source),str(assembly),str(library),'-o',str(exe)],capture_output=True,text=True)
    (out/'build.txt').write_text(build.stdout+build.stderr,encoding='utf-8');build.check_returncode()
    run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
    (out/'stdout.txt').write_text(run.stdout+run.stderr,encoding='utf-8');run.check_returncode()
    result=json.loads(run.stdout)
    result.update(original_sha256=PIN,rust_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/physics.rs').read_bytes()).hexdigest(),scope='140116250..1401162d7 linear body integration with original gravity and active/disabled gates; angular callback excluded; full 8192-body bytes; finite/default FP; full simulation and real-time cadence unverified')
    (out/'result.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');print(json.dumps(result))


if __name__=='__main__':main()
