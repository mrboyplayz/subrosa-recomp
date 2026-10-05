"""Compare item-set pointer aliases against native LEA with high address storage."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_itemset_storage import PROJECT,MARKER,EXPRESSION,repair
class ItemsetStorage(unittest.TestCase):
 def test_native_record_addresses(self):
  s=read_client_source();a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER))
  if b'0x140000000LL' in s[a:b]:s,_=repair(s)
  a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER));self.assertEqual(s[a:b].count(EXPRESSION),5)
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
static unsigned char *image;
#define dword_140404A6C ((unsigned *)(image+0x404a6c))
static uint64_t recovered(void){return EXPRESSION;}
int main(void){image=VirtualAlloc((void*)0x300000000ULL,0x42000000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;VirtualAlloc(image+0x1000,4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE);VirtualAlloc(image+0x41200000,0x100000,MEM_COMMIT,PAGE_READWRITE);unsigned count=0;
'''.replace('EXPRESSION',EXPRESSION.decode().replace('__int64','int64_t')).encode()
  for r in [0x13f06e,0x13f14e,0x13f179]:
   code=bytes.fromhex('4801d1')+pe.get_data(r,7)+bytes.fromhex('4889c8c3')
   c+=('{unsigned char code[]={'+','.join(map(str,code))+'};memcpy(image+0x1000,code,sizeof code);FlushInstructionCache(GetCurrentProcess(),image+0x1000,sizeof code);').encode()
   c+=r'''for(unsigned index=0;index<128;index++){dword_140404A6C[272301312]=index;uint64_t native=((uint64_t(*)(void*,uint64_t))(image+0x1000))(image,index*116ULL),actual=recovered();if(native!=actual||!(native>>32))return 1;unsigned char bytes[32];for(unsigned j=0;j<32;j++)bytes[j]=index+j;memcpy((void*)(uintptr_t)native,bytes,32);if(memcmp((void*)(uintptr_t)actual,bytes,32))return 2;count++;}}
'''.encode()
  c+=r'''printf("%u native item-set record/stride/high-pointer/read cases pass; complete scanner excluded\n",count);return 0;}
'''.encode()
  out=PROJECT/'reports/client-itemset-storage-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'itemset_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11',str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(result.returncode,0,result.stderr)
  result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_text(result.stdout);self.assertEqual(result.returncode,0,result.stdout+result.stderr)
if __name__=='__main__':unittest.main()
