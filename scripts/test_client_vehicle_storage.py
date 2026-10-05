"""Compare native vehicle read destinations, version branches and parser prefix state."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_vehicle_storage import PROJECT,MARKER,repair
class VehicleStorage(unittest.TestCase):
 def test_native_reader_prefix(self):
  s=read_client_source();a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER))
  if b'0x140000000LL' in s[a:b]:s,_=repair(s)
  a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER));body=s[a:b];pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <setjmp.h>
#include <emmintrin.h>
#include "defs.h"
typedef uint64_t uint64;
#define nullptr NULL
static unsigned char *image;static unsigned current,version,geometry,calls;static uint64_t trace[4096];static jmp_buf stop;
#define dword_140404A6C ((unsigned *)(image+0x404a6c))
static int sub_140158AB0(void *out,const char *format,...){va_list args;va_start(args,format);int n=vsnprintf(out,512,format,args);va_end(args);return n;}
static __int64 sub_14020B8D8(const char *name,const char *mode){if(strcmp(name,"data/fixture.sbv")||strcmp(mode,"rb"))abort();return 0x123456789abcULL;}
static size_t fread_sr(void *dest,size_t size,size_t count,FILE *stream){if((uintptr_t)stream!=0x123456789abcULL||size!=4)abort();uint64_t offset=(uintptr_t)dest-(uintptr_t)image;unsigned char *record=(void*)&dword_140404A6C[335157365+45072*current];
if(!calls){memcpy(dest,&version,4);trace[calls++]=0;trace[calls++]=count;return count;}
if(offset<0x50200000||offset>0x51000000)abort();uint64_t slot=((uintptr_t)dest-(uintptr_t)record)/4+335157365;trace[calls++]=slot;trace[calls++]=count;
memset(dest,0,size*count);
if(slot==335157368)*(unsigned*)dest=geometry;
if(slot==335164539)*(unsigned*)dest=geometry?1:0;
if(slot==335164541)*(unsigned*)dest=3;
if(slot>=335164542&&slot<=335164544)*(unsigned*)dest=slot-335164542;
if(slot>=335157369&&slot<335157369+geometry*4&&count==3){unsigned values[]={0x3f800000,0x40000000,0x40400000};memcpy(dest,values,12);}
return count;}
static __int64 sub_14020B9E8(__int64 file){if(file!=0x123456789abcULL)abort();longjmp(stop,1);}
static uint64_t sr_path_malloc(uint64_t n){abort();}
static void sub_140192790(__int64 a,__int64 b){abort();}
static void sub_14007A240(__int64 a,float *b){abort();}
'''.encode()+body+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){image=VirtualAlloc(0,0x51000000,MEM_RESERVE,PAGE_NOACCESS);unsigned pages[]={0x192000,0x193000,0x158000,0x20b000,0x20c000,0x302000};for(unsigned i=0;i<6;i++)VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE);VirtualAlloc(image+0x270000,0x35000,MEM_COMMIT,PAGE_EXECUTE_READWRITE);VirtualAlloc(image+0x50200000,0xe00000,MEM_COMMIT,PAGE_READWRITE);
'''.encode()
  for r,size in [(0x192ec0,0x1120),(0x270000,0x35000)]:c+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(r,size)))+'};memcpy(image+'+hex(r)+',b,sizeof b); }\n').encode()
  for r,n in [(0x158ab0,'sub_140158AB0'),(0x20b8d8,'sub_14020B8D8'),(0x20c0c8,'fread_sr'),(0x20b9e8,'sub_14020B9E8')]:c+=('thunk(image+'+hex(r)+','+n+');\n').encode()
  c+=r'''uint64_t cookie=0x123456789abcdef;memcpy(image+0x3020a0,&cookie,8);static unsigned char expected[180288];static uint64_t saved[4096];unsigned count=0;
for(current=0;current<32;current++)for(version=0;version<6;version++)for(geometry=0;geometry<4;geometry++){unsigned saved_calls;unsigned char *record=(void*)&dword_140404A6C[335157365+45072*current];for(unsigned native=0;native<2;native++){memset(record,0,180288);calls=0;if(!_setjmp(stop,0)){if(native)((void(*)(int,const char*))(image+0x192ec0))(current,"fixture");else asset_load_vehicle_sbv_candidate(current,"fixture");abort();}if(!native){saved_calls=calls;memcpy(saved,trace,calls*8);memcpy(expected,record,180288);}else if(calls!=saved_calls||memcmp(saved,trace,calls*8)||memcmp(expected,record,180288)){printf("vehicle parser mismatch index %u version %u geometry %u calls %u/%u\n",current,version,geometry,saved_calls,calls);return 1;}}count++;}printf("%u native vehicle parser-prefix/read-slot/record cases pass; reads controlled, postprocessing excluded\n",count);return 0;}
'''.encode()
  out=PROJECT/'reports/client-vehicle-storage-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'vehicle_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()
