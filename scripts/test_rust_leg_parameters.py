"""Compare the recovered 1400bdc7d..1400bdd5b leg-parameter fragment with Rust.

The surrounding leg target/state controller is deliberately outside this check.
"""
import json
import subprocess
from pathlib import Path
from repair_client_menu_actions import pinned_pe

PROJECT = Path(__file__).resolve().parents[1]
OUT = PROJECT / 'reports/rust-leg-parameters-20261005'

def main():
    pe = pinned_pe()
    c = r'''
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
struct limb {
 unsigned parent,first;float target[3],reference[9],velocity[3],reach,twist,end[4],gains[3];
 unsigned limits[3],caps[3];float correction_cap;unsigned flags;float hip_bias[3];
};
struct result {float gains[3];unsigned limits[3],caps[3],flags;};
struct args {void *fn,*image,*out;unsigned state;float support;};
extern void native_leg_parameters(struct args*);
extern void native_leg_parameters_return(void);
extern void sr_rust_configure_leg_drive(struct limb*,unsigned,float,float,int);
int main(void){unsigned char *image=VirtualAlloc(NULL,0x43300000ULL,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''
    for rva, size in [(0xbd000, 4096), (0x278000, 4096)]:
        c += f'if(!VirtualAlloc(image+{rva},{size},MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 10;\n'
        c += '{const unsigned char bytes[]={' + ','.join(map(str, pe.get_data(rva,size))) + '};'
        c += f'memcpy(image+{rva},bytes,sizeof bytes);' + '}\n'
    c += r'''
if(!VirtualAlloc(image+0x4329e000,4096,MEM_COMMIT,PAGE_READWRITE))return 10;
unsigned char jump[14]={0xff,0x25,0,0,0,0};void (*done)(void)=native_leg_parameters_return;
memcpy(jump+6,&done,8);memcpy(image+0xbdd5b,jump,14);
const float supports[]={0,.01f,.5f,.99999994f,1,1.25f};
const float ups[]={-.5f,.87499994f,.875f,1};const int ticks[]={-1,0,1,29,30,31,100};
unsigned cases=0;
for(unsigned state=0;state<9;state++)for(unsigned s=0;s<6;s++)for(unsigned u=0;u<4;u++)for(unsigned t=0;t<7;t++){
 memcpy(image+0x4329e56c,ups+u,4);memcpy(image+0x4329e380,ticks+t,4);
 struct result original={0},rust={0};struct args args={image+0xbdc7d,image,&original,state,supports[s]};
 native_leg_parameters(&args);struct limb input={0};
 sr_rust_configure_leg_drive(&input,state,supports[s],ups[u],ticks[t]);
 memcpy(rust.gains,input.gains,12);memcpy(rust.limits,input.limits,12);memcpy(rust.caps,input.caps,12);rust.flags=input.flags;
 if(memcmp(&original,&rust,sizeof rust)){printf("mismatch state=%u support=%a up=%a ticks=%d flags=%x/%x\n",state,(double)supports[s],(double)ups[u],ticks[t],original.flags,rust.flags);return 1;}
 cases++;
}
printf("%u leg drive parameter cases match original instruction fragment\n",cases);return 0;
}
'''
    assembly = r'''
.text
.globl native_leg_parameters
native_leg_parameters:
    pushq %rbx
    pushq %rbp
    pushq %r14
    subq $256,%rsp
    movups %xmm14,0(%rsp)
    movups %xmm15,16(%rsp)
    leaq 128(%rsp),%rbp
    movq %rcx,%r10
    movq 8(%r10),%rdx
    xorl %ebx,%ebx
    movl 24(%r10),%r14d
    movss 28(%r10),%xmm1
    movl $0x3f800000,%eax
    movd %eax,%xmm14
    movl $0x3dc00000,%eax
    movd %eax,%xmm15
    movq $0,-104(%rbp)
    movl $0,-96(%rbp)
    movq $0,-24(%rbp)
    movl $0,-16(%rbp)
    jmp *(%r10)
.globl native_leg_parameters_return
native_leg_parameters_return:
    movq 16(%r10),%r11
    movl %eax,36(%r11)
    movq -56(%rbp),%rax
    movq %rax,0(%r11)
    movl -48(%rbp),%eax
    movl %eax,8(%r11)
    movq -104(%rbp),%rax
    movq %rax,12(%r11)
    movl -96(%rbp),%eax
    movl %eax,20(%r11)
    movq -24(%rbp),%rax
    movq %rax,24(%r11)
    movl -16(%rbp),%eax
    movl %eax,32(%r11)
    movups 0(%rsp),%xmm14
    movups 16(%rsp),%xmm15
    addq $256,%rsp
    popq %r14
    popq %rbp
    popq %rbx
    ret
'''
    OUT.mkdir(parents=True,exist_ok=True)
    source=OUT/'parameters.c';source.write_text(c)
    asm=OUT/'parameters.S';asm.write_text(assembly);exe=OUT/'parameters.exe'
    library=PROJECT/'rust-client/target/x86_64-pc-windows-gnu/release/libsubrosa_client.a'
    build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0',str(source),str(asm),str(library),'-o',str(exe)],capture_output=True,text=True)
    (OUT/'build.txt').write_text(build.stdout+build.stderr);build.check_returncode()
    run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
    (OUT/'stdout.txt').write_text(run.stdout+run.stderr);print(run.stdout);run.check_returncode()
    (OUT/'result.json').write_text(json.dumps({'passed':True,'cases':1512,
        'scope':'gains, angle limits, response caps and flags; state 0..8, support threshold 1, pelvis up threshold .875, landing counter boundaries; original 1400bdc7d..1400bdd5b fragment; outer target/state selection excluded'},indent=2)+'\n')

if __name__ == '__main__':
    main()
