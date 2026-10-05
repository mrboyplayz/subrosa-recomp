"""Compare the complete native final-frame presentation block at controlled GL/SDL boundaries."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import capstone
import pefile
from repair_client_frame_presentation import PROJECT,MARKER,repair


class FramePresentation(unittest.TestCase):
    def test_native_presentation(self):
        s=read_client_source();a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER))
        if b'unk_140404740(0, 0);' in s[a:b]:s,_=repair(s)
        a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER));body=s[a:b]
        start=body.index(b'      unk_1404046F0(36160, 0);');end=body.index(b'      sub_140198EF3();',start)+len(b'      sub_140198EF3();')
        block=body[start:end]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        pages={0x98000,0x198000,0x26e000}
        d=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);d.detail=True
        for ins in d.disasm(pe.get_data(0x98ea4,0xe5),0x98ea4):
            for op in ins.operands:
                if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:pages.add((ins.address+ins.size+op.mem.disp)&~4095)
        pages.add(0x43e99000)
        for n in re.findall(rb'\b\d{8,9}\b',block):
            at=0x404a6c+4*int(n)
            if at<0x74794000:pages.update((at&~4095,(at&~4095)+4096))
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
static unsigned *dword_140404A6C;static unsigned char *image;
static uint64_t trace[128];static unsigned at;
static void gl_bind(unsigned target,unsigned buffer){trace[at++]=1;trace[at++]=target;trace[at++]=buffer;}
static void color(float r,float g,float b,float a){trace[at++]=2;unsigned v[4];float f[4]={r,g,b,a};memcpy(v,f,16);for(unsigned i=0;i<4;i++)trace[at++]=v[i];}
static void clear(unsigned mask){trace[at++]=3;trace[at++]=mask;}
static void blit(int a,int b,int c,int d,int e,int f,int g,int h,unsigned mask,unsigned filter){int v[]={a,b,c,d,e,f,g,h};trace[at++]=4;for(unsigned i=0;i<8;i++)trace[at++]=(unsigned)v[i];trace[at++]=mask;trace[at++]=filter;}
static void swap(void *window){trace[at++]=5;trace[at++]=(uintptr_t)window;}
static void sub_140198EF3(void){void *window;memcpy(&window,&dword_140404A6C[137297751],8);swap(window);}
static void (*unk_1404046F0)(unsigned,unsigned)=gl_bind;
static void (*unk_140404740)(int,int,int,int,int,int,int,int,unsigned,unsigned)=blit;
static void recovered(void){int v11,v186,v187;__int64 v191;int v192,v193,v194,v195,v196;
'''.encode()+block+r'''
}
extern void native_frame(void *base,void *block);
__asm__(".text\n.global native_frame\nnative_frame:\npush %rbp\npush %rbx\npush %rdi\npush %r12\nsub $0x78,%rsp\nmovdqu %xmm9,0x50(%rsp)\nmov %rcx,%rbp\nxor %r12d,%r12d\nxorps %xmm9,%xmm9\njmp *%rdx\n");
int main(void){image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);unsigned char *working=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image||!working)return 9;
'''.encode()
        for page in sorted(pages):
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))abort();\n'.encode()
            data=pe.get_data(page,4096)
            if data:c+=('{unsigned char b[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        # The block starts in the main function's established frame; restore the test bridge at its end.
        c+=r'''unsigned char epilogue[]={0xf3,0x44,0x0f,0x6f,0x4c,0x24,0x50,0x48,0x83,0xc4,0x78,0x41,0x5c,0x5f,0x5b,0x5d,0xc3};memcpy(image+0x98f89,epilogue,sizeof epilogue);
*(void**)(image+0x4046f0)=gl_bind;*(void**)(image+0x404740)=blit;
*(void**)(image+0x4980d30)=color;*(void**)(image+0x4980d28)=clear;
'''.encode()
        thunk=pe.get_data(0x198ef3,6);self.assertEqual(thunk[:2],b'\xff\x25')
        slot=0x198ef3+6+int.from_bytes(thunk[2:],'little',signed=True)
        c+=f'*(void**)(image+{slot})=swap;\n'.encode()
        c+=r'''
int widths[]={0,1,640,1280,1920,2561},heights[]={0,1,480,720,1080,1441};unsigned cases=0;
for(unsigned w=0;w<6;w++)for(unsigned h=0;h<6;h++)for(unsigned rw=0;rw<6;rw++)for(unsigned rh=0;rh<6;rh++)for(unsigned framebuffer=0;framebuffer<4;framebuffer++){
uint64_t saved[128];unsigned saved_at=0;
for(unsigned native=0;native<2;native++){
unsigned char *base=native?image:working;dword_140404A6C=(void*)(base+0x404a6c);
dword_140404A6C[137297755]=widths[w];dword_140404A6C[137297756]=heights[h];
dword_140404A6C[278520508]=widths[rw];dword_140404A6C[278520509]=heights[rh];
dword_140404A6C[283790134]=framebuffer;dword_140404A6C[2*framebuffer+283791765]=0xabcdef00+framebuffer;
*(void**)&dword_140404A6C[18215089]=color;*(void**)&dword_140404A6C[18215087]=clear;
*(void**)&dword_140404A6C[137297751]=(void*)(uintptr_t)(0x1234567800000000ull+framebuffer);
at=0;memset(trace,0,sizeof trace);if(native)native_frame(image,image+0x98ea4);else recovered();
if(!native){saved_at=at;memcpy(saved,trace,sizeof trace);}else if(at!=saved_at||memcmp(trace,saved,sizeof trace)){
printf("frame dispatch mismatch w=%u h=%u rw=%u rh=%u fb=%u\n",w,h,rw,rh,framebuffer);for(unsigned i=0;i<at;i++)if(trace[i]!=saved[i])printf("%u C=%llx N=%llx\n",i,saved[i],trace[i]);return 1;}
}
cases++;}
printf("%u native final-frame clear/bind/blit/swap comparisons pass across window/render sizes, odd centering, framebuffer indices and full-width window handles; original presentation block executed with its native zero registers and image base\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-frame-presentation-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        f=out/'frame.c';f.write_bytes(c);exe=f.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)


if __name__=='__main__':unittest.main()
