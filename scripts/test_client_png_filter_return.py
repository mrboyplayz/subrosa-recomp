"""Compare noninterlaced filter wrapper's argument and status ABI with native code."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_inflate_context import PROJECT

class FilterReturn(unittest.TestCase):
    def test_native_wrapper(self):
        source=read_client_source()
        marker=b'//----- (000000014015E260)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
        body=source[a:b]
        self.assertNotIn(b'return sub_1401F8B20',body)
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        text=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
#define nullptr NULL
#define SR_VEC_LANES(w,v,t) ((int *)&(v))
typedef uint64_t uint64;
static __m128i xmmword_140278F00,xmmword_140278E00,xmmword_140278F70,xmmword_140278F90;
static uintptr_t args[8];static unsigned status;
static void *sr_path_malloc(size_t n){return malloc(n);}
static void sub_1401FC920(void *d,const void *s,size_t n){memcpy(d,s,n);}
static uint64_t sub_14015E5F0(_QWORD *a,unsigned char *b,unsigned c,int d,int e,unsigned f,int g,int h){
args[0]=(uintptr_t)a;args[1]=(uintptr_t)b;args[2]=c;args[3]=d;args[4]=e;args[5]=f;args[6]=g;args[7]=h;return status;}
'''.encode()+body+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x303000,MEM_RESERVE,PAGE_NOACCESS);
unsigned pages[]={0x15e000,0x1f8000,0x302000};for(unsigned i=0;i<3;i++)if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;
'''.encode()
        text+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(0x15e260,0x381)))+'};memcpy(image+0x15e260,b,sizeof b);}\n').encode()
        text+=r'''
thunk(image+0x15e5f0,sub_14015E5F0);
const uint64_t cookie=0x123456789abcdefULL;memcpy(image+0x3020a0,&cookie,8);
unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
unsigned count=0;
for(unsigned width=1;width<65;width++)for(status=0;status<2;status++)for(int depth=8;depth<=16;depth+=8){
int header[4]={width,67-width,3,4};uint64_t ctx[5]={(uintptr_t)header,0,0,0,depth};unsigned char bytes[16];uintptr_t recorded[2][8];uint64_t values[2];
for(unsigned native=0;native<2;native++){
values[native]=native?((uint64_t (*)(uint64_t,unsigned char *,unsigned,int,int,int,int))(image+0x15e260))((uintptr_t)ctx,bytes,0xf0000100,4,depth,0,0):sub_14015E260((uintptr_t)ctx,bytes,0xf0000100,4,depth,0,0);
memcpy(recorded[native],args,sizeof args);}
if(values[0]!=status||values[1]!=status||memcmp(recorded[0],recorded[1],sizeof args))return 1;
count++;}printf("%u native PNG filter status and argument cases pass\n",count);return 0;}
'''.encode()
        out=PROJECT/'reports/client-png-filter-return-20261002';out.mkdir(parents=True,exist_ok=True)
        fixture=out/'filter_fixture.c';fixture.write_bytes(text);exe=fixture.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)

if __name__=='__main__':unittest.main()
