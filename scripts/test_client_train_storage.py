"""Compare actual train pointer expressions against pinned native LEA instructions."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import pefile
from repair_client_vehicle_storage import PROJECT
class TrainStorage(unittest.TestCase):
 def test_native_addresses(self):
  s=read_client_source();a=s.index(b'//----- (000000014014E9C0)');b=s.index(b'//----- (',a+40);r=s[a:b]
  expressions=[re.search(rb'\b'+n+rb' = ([^;]+);',r)[1] for n in [b'v51',b'v119']]
  self.assertTrue(all(b'0x140000000LL' not in e for e in expressions),'Regenerate prepared train storage')
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
static unsigned char *image;
#define dword_140404A6C ((unsigned *)(image+0x404a6c))
'''.encode()
  for n,e in enumerate(expressions):c+=b'static float *recovered'+str(n).encode()+b'(int64_t v7){return '+e+b';}\n'
  c+=r'''int main(void){image=VirtualAlloc((void *)0x300000000ULL,0x51000000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;VirtualAlloc(image+0x1000,4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE);VirtualAlloc(image+0x50200000,0xe00000,MEM_COMMIT,PAGE_READWRITE);unsigned count=0;
'''.encode()
  for n,offset in enumerate([0x14ef21,0x14f7fe]):
   code=bytes.fromhex('41554989cd')+pe.get_data(offset,7)+bytes.fromhex('4801d14889c8415dc3')
   c+=('{unsigned char code[]={'+','.join(map(str,code))+'};').encode()
   c+=r'''memcpy(image+0x1000,code,sizeof code);FlushInstructionCache(GetCurrentProcess(),image+0x1000,sizeof code);
for(unsigned index=0;index<64;index++)for(unsigned skew=0;skew<32;skew++){int64_t v7=180288LL*index+skew;float *native=((float*(*)(void*,int64_t))(image+0x1000))(image,v7),*recovered=FUNCTION(v7);if(native!=recovered||((uintptr_t)native>>32)==0)return 1;unsigned char expected[16];for(unsigned j=0;j<16;j++)expected[j]=j+skew+index;memcpy(native,expected,16);if(memcmp(recovered,expected,16))return 2;count++;}}
'''.replace('FUNCTION','recovered'+str(n)).encode()
  c+=r'''printf("%u native train address/stride/high-pointer/read cases pass; surrounding train setup excluded\n",count);return 0;}
'''.encode()
  out=PROJECT/'reports/client-train-storage-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'train_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11',str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(result.returncode,0,result.stderr)
  result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_text(result.stdout);self.assertEqual(result.returncode,0,result.stdout+result.stderr)
if __name__=='__main__':unittest.main()
