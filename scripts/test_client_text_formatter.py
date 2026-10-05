"""Compare literal text formatter buffers and returned counts with native instructions."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_text_startup import PROJECT,repair

class TextFormatter(unittest.TestCase):
    def test_native_literal_formatter(self):
        source=read_client_source()
        if b'sr_text_draw_recovered' not in source:source,_=repair(source)
        marker=b'//----- (000000014006E530)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        text=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "defs.h"
typedef uint64_t uint64;
#define SR_VEC_LANES(w,v,t) ((char *)&(v))
static int sub_140158AB0(void *dest,const char *format,...){va_list args;va_start(args,format);int result=vsnprintf(dest,1024,format,args);va_end(args);return result;}
static void sub_1401FC920(void *dest,const void *src,size_t n){memcpy(dest,src,n);}
'''.encode()+body+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x303000,MEM_RESERVE,PAGE_NOACCESS);
unsigned pages[]={0x6e000,0x158000,0x1fc000,0x1f8000,0x302000};for(unsigned i=0;i<5;i++)if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;
'''.encode()
        text+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(0x6e530,0x710)))+'};memcpy(image+0x6e530,b,sizeof b);}\n').encode()
        text+=r'''
thunk(image+0x158ab0,sub_140158AB0);thunk(image+0x1fc920,sub_1401FC920);
const uint64_t cookie=0x123456789abcdefULL;memcpy(image+0x3020a0,&cookie,8);
unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
unsigned count=0,seed=891;unsigned char input[1024],outputs[2][1100];uint64_t args[4]={0};
int limits[]={-1,0,1,3,20,128,10000};
for(unsigned n=0;n<1024;n+=7)for(unsigned cap=0;cap<7;cap++){
for(unsigned i=0;i<n;i++){seed=seed*1664525+1013904223;input[i]='A'+seed%26;}input[n]=0;
memset(outputs,0xa5,sizeof outputs);uint64_t result[2];
result[0]=sub_14006E530(outputs[0],input,limits[cap],(uintptr_t)args);
result[1]=((uint64_t (*)(unsigned char *,unsigned char *,int,uint64_t))(image+0x6e530))(outputs[1],input,limits[cap],(uintptr_t)args);
if(result[0]!=result[1]||memcmp(outputs[0],outputs[1],1100)){printf("formatter mismatch length %u limit %d return %llu/%llu\n",n,limits[cap],result[0],result[1]);return 1;}count++;}
printf("%u native literal formatter capacity/count/buffer/guard cases pass; conversion callees controlled\n",count);return 0;}
'''.encode()
        out=PROJECT/'reports/client-text-formatter-20261002';out.mkdir(exist_ok=True,parents=True)
        fixture=out/'formatter_fixture.c';fixture.write_bytes(text);exe=fixture.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)

if __name__=='__main__':unittest.main()
