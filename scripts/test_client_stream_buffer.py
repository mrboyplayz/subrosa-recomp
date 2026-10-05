"""Compare CRT stream buffer allocation, flags and fallback with native code."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_ui_return import PROJECT

class StreamBuffer(unittest.TestCase):
    def test_native_stream_buffer(self):
        source=read_client_source()
        marker=b'//----- (0000000140253EF8)';start=source.index(marker);end=source.index(b'//----- (',start+len(marker))
        body=source[start:end]
        self.assertIn(b'sr_path_malloc(4096)',body)
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        data=pe.get_data(0x253ef8,0x68)
        text=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
typedef uint64_t _QWORD;typedef unsigned _DWORD;
static unsigned dword_140404A6C[19064596];static unsigned failure,allocs,frees;static uint64_t size;
static uint64_t sr_path_malloc(uint64_t requested){size=requested;allocs++;return failure?0:0x12345678abcdef00ULL;}
static void free_base(void *p){if(p)ExitProcess(21);frees++;}
static int mock_or(volatile int *p,int mask){int old=*p;*p|=mask;return old;}
#define _InterlockedOr mock_or
#define nullptr NULL
'''.encode()+body+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
struct result {uint64_t returned,size,begin,base;unsigned allocs,frees,counter,count,capacity,flags;};
int main(void){
 unsigned char *image=VirtualAlloc(0,0x4cc0000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
 unsigned pages[]={0x253000,0x24e000,0x4cbe000};
 for(unsigned i=0;i<3;i++)if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 8;
'''.encode()
        text+=('{unsigned char b[]={'+','.join(map(str,data))+'};memcpy(image+0x253ef8,b,sizeof b);}\n').encode()
        text+=r'''
 thunk(image+0x253f60,sr_path_malloc);thunk(image+0x24e018,free_base);FlushInstructionCache(GetCurrentProcess(),image,0x4cc0000);
 unsigned cases=0;
 for(unsigned flags=0;flags<256;flags++)for(failure=0;failure<2;failure++){
  struct result results[2];memset(results,0,sizeof results);
  for(unsigned native=0;native<2;native++){
   unsigned char stream[88];memset(stream,0xa5,sizeof stream);*(unsigned *)(stream+20)=flags;
   allocs=frees=0;size=0;dword_140404A6C[19064595]=17;*(unsigned *)(image+0x4cbe6b8)=17;
   uint64_t value=native?((uint64_t (*)(uint64_t))(image+0x253ef8))((uintptr_t)stream):sub_140253EF8((uintptr_t)stream);
   uintptr_t base,begin;memcpy(&base,stream+8,8);memcpy(&begin,stream,8);
   results[native]=(struct result){failure?value-(uintptr_t)stream:value,size,failure?begin-(uintptr_t)stream:begin,failure?base-(uintptr_t)stream:base,
    allocs,frees,native?*(unsigned *)(image+0x4cbe6b8):dword_140404A6C[19064595],*(unsigned *)(stream+16),*(unsigned *)(stream+32),*(unsigned *)(stream+20)};
  }
  if(memcmp(results,results+1,sizeof results[0])||results[0].size!=4096){printf("stream mismatch flags %u failure %u\n",flags,failure);return 1;}cases++;
 }
 VirtualFree(image,0,MEM_RELEASE);printf("%u native stream buffer size/flags/counter/fallback/full-width-return cases pass\n",cases);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-ui-return-20261002';out.mkdir(parents=True,exist_ok=True)
        fixture=out/'stream_buffer.c';fixture.write_bytes(text);exe=fixture.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11',str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=20)
        (out/'stream-buffer-stdout.txt').write_text(r.stdout);(out/'stream-buffer-stderr.txt').write_text(r.stderr)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)

if __name__=='__main__':unittest.main()
