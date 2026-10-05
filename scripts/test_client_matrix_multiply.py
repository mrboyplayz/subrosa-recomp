"""Compare matrix floats, overlap, byte alignment, preserved RAX and MXCSR with native."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_matrix_multiply import PROJECT,MARKER,repair

class MatrixMultiply(unittest.TestCase):
    def test_native_matrix(self):
        source=read_client_source()
        if b'float left[16],right[16],result[16];' not in source:source,_=repair(source)
        a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        text=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <xmmintrin.h>
typedef __int128 _OWORD;
'''.encode()+body+r'''
int main(void){unsigned char *image=VirtualAlloc(0,0x303000,MEM_RESERVE,PAGE_NOACCESS);
unsigned pages[]={0x7a000,0x1f8000,0x302000};for(unsigned i=0;i<3;i++)if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;
'''.encode()
        text+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(0x7a0e0,0xe6)))+'};memcpy(image+0x7a0e0,b,sizeof b);}\n').encode()
        text+=r'''
const uint64_t cookie=0x123456789abcdefULL;memcpy(image+0x3020a0,&cookie,8);
unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
unsigned checked=0,seed=187,old=_mm_getcsr();
for(unsigned sample=0;sample<1024;sample++)for(unsigned align=0;align<4;align++)for(unsigned overlap=0;overlap<3;overlap++)for(unsigned rounding=0;rounding<4;rounding++){
unsigned char buffers[2][256];memset(buffers,0xa5,sizeof buffers);
for(unsigned j=0;j<32;j++){seed=seed*1664525u+1013904223u;uint32_t bits=(seed&0x807fffffu)|((sample%120+60)<<23);memcpy(buffers[0]+align+j*4,&bits,4);}
memcpy(buffers[1],buffers[0],256);unsigned status[2];uint64_t result[2];
for(unsigned native=0;native<2;native++){
unsigned char *left=buffers[native]+align,*right=left+64,*out=overlap==0?left+128:overlap==1?left:right;
_mm_setcsr(0x1f80|(rounding<<13));
result[native]=native?((uint64_t (*)(void *,uint64_t,uint64_t))(image+0x7a0e0))(out,(uintptr_t)left,(uintptr_t)right):sub_14007A0E0((_OWORD *)out,(uintptr_t)left,(uintptr_t)right);
status[native]=_mm_getcsr();if(result[native]!=(uintptr_t)right+48)return 2;}
if(memcmp(buffers[0],buffers[1],256)||status[0]!=status[1]){printf("matrix mismatch sample %u alignment %u overlap %u rounding %u MXCSR %x/%x\n",sample,align,overlap,rounding,status[0],status[1]);return 1;}
checked++;}
_mm_setcsr(old);printf("%u native matrix bit/overlap/alignment/return/MXCSR cases pass\n",checked);return 0;}
'''.encode()
        out=PROJECT/'reports/client-matrix-multiply-20261002';out.mkdir(exist_ok=True,parents=True)
        fixture=out/'matrix_fixture.c';fixture.write_bytes(text);exe=fixture.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing',str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)

if __name__=='__main__':unittest.main()
