"""Compare the original body's post-constraint pass with Rust, full 8192 pool."""
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
    out=PROJECT/'reports/rust-body-accumulation-20261003';out.mkdir(parents=True,exist_ok=True)
    c=r'''
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct body {unsigned words[47];};
extern void sr_rust_apply_body_deltas(struct body*,size_t);
extern void sr_rust_clear_body_deltas(struct body*,size_t);
extern void native_fragment(void*,void*);
int main(void){unsigned char *image=VirtualAlloc(NULL,0x4b10000ULL,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''
    for page,size,copy in [(0x1d000,4096,True),(0x1f000,4096,True),(0x278000,4096,True),(0x4981000,0x180000,False)]:
        c+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 10;\n'
        if copy:
            c+='{unsigned char data[]={'+','.join(map(str,pe.get_data(page,size)))+'};'
            c+=f'memcpy(image+{page},data,sizeof data);}}\n'
    c+=r'''
// Only the isolated fragment's exit is replaced by RET; reviewed loop bytes
// 1f794..1f96e remain original. No installed file is modified.
image[0x1f96f]=0xc3;
image[0x1db47]=0xc3;
struct body *native=(struct body*)(image+0x49816e0),*rust=malloc(8192*sizeof(*rust));
if(!rust)return 11;unsigned cases=0,seed=0x541992;
float scales[]={0,0.0001f,0.01f,0.1f},caps[]={0,0.00001f,0.125f,8.0f};
for(unsigned pattern=0;pattern<16;pattern++)for(unsigned scale=0;scale<4;scale++)for(unsigned cap=0;cap<4;cap++){
 for(unsigned i=0;i<8192;i++){
  for(unsigned j=0;j<47;j++){seed=seed*1664525+1013904223;float v=((int)(seed%2001)-1000)*scales[scale];memcpy(&rust[i].words[j],&v,4);}
  rust[i].words[0]=(i+pattern)%3==0?0:1;
  rust[i].words[2]=(i+pattern)%5==0?1:0;
  memcpy(&rust[i].words[39],&caps[cap],4);
 }
 memcpy(native,rust,8192*sizeof(*rust));
 for(unsigned repeat=0;repeat<((pattern&1)?32:1);repeat++){
  sr_rust_apply_body_deltas(rust,8192);
  native_fragment(image+0x1f794,image+0x4af9708);
  if(memcmp(native,rust,8192*sizeof(*rust))){
   printf("mismatch pattern=%u scale=%u cap=%u repeat=%u\n",pattern,scale,cap,repeat);
   for(unsigned i=0;i<8192;i++)for(unsigned j=0;j<47;j++)if(native[i].words[j]!=rust[i].words[j]){printf("body=%u word=%u native=%08x rust=%08x\n",i,j,native[i].words[j],rust[i].words[j]);return 1;}return 1;}
  cases++;
 }
 sr_rust_clear_body_deltas(rust,8192);
 native_fragment(image+0x1d9d4,image+0x4af9718);
 if(memcmp(native,rust,8192*sizeof(*rust))){printf("clearing mismatch pattern=%u scale=%u cap=%u\n",pattern,scale,cap);return 2;}
}
printf("{\"pool_passes\":%u,\"body_records_compared\":%u,\"clearing_pool_passes\":256,\"full_pool_bytes_match\":true}\n",cases,cases*8192);return 0;}
'''
    asm=r'''
.text
.globl native_fragment
native_fragment:
    pushq %rbx
    pushq %r14
    subq $168, %rsp
    movaps %xmm6, 0(%rsp)
    movaps %xmm7, 16(%rsp)
    movaps %xmm8, 32(%rsp)
    movaps %xmm9, 48(%rsp)
    movaps %xmm10, 64(%rsp)
    movaps %xmm11, 80(%rsp)
    movaps %xmm12, 96(%rsp)
    movaps %xmm13, 112(%rsp)
    movaps %xmm14, 128(%rsp)
    movaps %xmm15, 144(%rsp)
    movq %rdx, %rbx
    movq %rcx, %r11
    movq %rdx, %rcx
    xorl %r14d, %r14d
    call *%r11
    movaps 0(%rsp), %xmm6
    movaps 16(%rsp), %xmm7
    movaps 32(%rsp), %xmm8
    movaps 48(%rsp), %xmm9
    movaps 64(%rsp), %xmm10
    movaps 80(%rsp), %xmm11
    movaps 96(%rsp), %xmm12
    movaps 112(%rsp), %xmm13
    movaps 128(%rsp), %xmm14
    movaps 144(%rsp), %xmm15
    addq $168, %rsp
    popq %r14
    popq %rbx
    ret
'''
    source=out/'body_accumulation.c';source.write_text(c,encoding='utf-8')
    wrapper=out/'wrapper.s';wrapper.write_text(asm,encoding='utf-8');exe=source.with_suffix('.exe')
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(source),str(wrapper),str(library),'-o',str(exe)],capture_output=True,text=True)
    (out/'build.txt').write_text(build.stdout+build.stderr,encoding='utf-8');build.check_returncode()
    run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=120)
    (out/'stdout.txt').write_text(run.stdout+run.stderr,encoding='utf-8')
    if run.returncode:print(run.stdout+run.stderr)
    run.check_returncode();result=json.loads(run.stdout)
    result.update(original_sha256=PIN,rust_source_sha256=hashlib.sha256((PROJECT/'rust-client/src/physics.rs').read_bytes()).hexdigest(),scope='Body accumulation 14001f794..14001f96e and clearing 14001d9d4..14001db46; finite/default FP, full 8192-body pool, activation flags, angular caps, one/32 repetitions; surrounding simulation excluded')
    (out/'result.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');print(json.dumps(result))


if __name__=='__main__':main()
