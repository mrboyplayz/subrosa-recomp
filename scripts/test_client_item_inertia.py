"""Compare pinned native item inertia fields with recovered relocation and float flow."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_item_stores import PROJECT,MARKER
class ItemInertia(unittest.TestCase):
 def test_native_inertia(self):
  s=read_client_source();a=s.index(MARKER);a=s.index(b'    v142 = 1268 * v141;',a);b=s.index(b'    if ( v140 != 35 )',a);body=s[a:b]
  self.assertNotIn(b'0x140000000LL',body,'Regenerate the prepared client before testing recovered inertia')
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <emmintrin.h>
#include "defs.h"
static unsigned char *image;
#define dword_140404A6C ((unsigned *)(image+0x404a6c))
static void recovered(int64_t v141){int64_t v142;float v143,v144,v147,*v145,*v146;
'''.encode()+body+r'''}
__attribute__((naked)) static void native_wrapper(void *base,uint64_t index,void *function){__asm__("push %rbx;push %r12;push %r15;sub $80,%rsp;movups %xmm10,32(%rsp);movups %xmm11,48(%rsp);movups %xmm13,64(%rsp);mov %rcx,%r12;mov %rdx,%r15;xor %eax,%eax;movd %eax,%xmm10;mov $0x3f800000,%eax;movd %eax,%xmm11;mov $0x40400000,%eax;movd %eax,%xmm13;call *%r8;movups 32(%rsp),%xmm10;movups 48(%rsp),%xmm11;movups 64(%rsp),%xmm13;add $80,%rsp;pop %r15;pop %r12;pop %rbx;ret");}
int main(void){image=VirtualAlloc(0,0x42b00000,MEM_RESERVE,PAGE_NOACCESS);VirtualAlloc(image+0x143000,4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE);VirtualAlloc(image+0x42a7e000,0x51000,MEM_COMMIT,PAGE_READWRITE);
'''.encode()
  c+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(0x143740,0xf2)))+'};memcpy(image+0x143740,b,sizeof b);image[0x143832]=0xc3;}\n').encode()
  c+=r'''unsigned seed=0x8171263,count=0,saved=_mm_getcsr();unsigned specials[]={0,0x80000000,0x3f800000,0xbf800000,0x7fc00000,0x7f800000,0x00000001,0x7f7fffff};
for(unsigned mode=0;mode<4;mode++)for(unsigned index=0;index<64;index++)for(unsigned n=0;n<128;n++){unsigned char initial[32],results[2][32];memset(initial,0xa5,32);unsigned *dims=(void*)initial;for(unsigned k=0;k<3;k++){seed=seed*1664525u+1013904223u;dims[k]=n<8?specials[(n+k)%8]:0x3c000000u+(seed%0x8000000u);}unsigned char *p=image+0x42a7e284+index*0x13d0;for(unsigned native=0;native<2;native++){memcpy(p,initial,32);_mm_setcsr(0x1f80|(mode<<13));if(native)native_wrapper(image,index,image+0x143740);else recovered(index);memcpy(results[native],p,32);}if(memcmp(results[0],results[1],32)){printf("inertia mismatch mode %u index %u input %u x/y/z %08x/%08x/%08x outputs %08x/%08x/%08x vs %08x/%08x/%08x\n",mode,index,n,dims[0],dims[1],dims[2],((unsigned*)results[0])[3],((unsigned*)results[0])[4],((unsigned*)results[0])[5],((unsigned*)results[1])[3],((unsigned*)results[1])[4],((unsigned*)results[1])[5]);return 1;}count++;}_mm_setcsr(saved);printf("%u native inertia relocation/float/branch/guard cases pass; special item overrides excluded\n",count);return 0;}
'''.encode()
  out=PROJECT/'reports/client-item-inertia-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'inertia_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()
