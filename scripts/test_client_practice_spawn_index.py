"""Compare native spawn-index epilogue and its counter writes."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT,pinned_pe,region


class PracticeSpawnIndex(unittest.TestCase):
    def test_native_counter_and_result_block(self):
        _,_,body=region(read_client_source(),0x12ceb0)
        a=body.index(b'  v41 = dword_140404A6C[132792829];')
        b=body.index(b';',body.index(b'  return ',a))+1
        tail=body[a:b]
        self.assertIn(b'return (unsigned int)v41;',tail)
        pe=pinned_pe()
        code=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
static unsigned *dword_140404A6C;
static unsigned recovered(void){unsigned v41;
'''.encode()+tail+r'''
}
int main(void){
 unsigned char *image=VirtualAlloc(0,0x21000000,MEM_RESERVE,PAGE_NOACCESS);
 unsigned char *working=VirtualAlloc(0,0x21000000,MEM_RESERVE,PAGE_NOACCESS);
 if(!image||!working)return 8;
 if(!VirtualAlloc(image+0x12d000,4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;
 if(!VirtualAlloc(image+0x1fe95000,8192,MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+0x1fe95000,8192,MEM_COMMIT,PAGE_READWRITE))return 9;
'''.encode()
        native=bytes.fromhex('41554989cd')+pe.get_data(0x12d2b0,0x1a)+bytes.fromhex('415dc3')
        code+=('{unsigned char b[]={'+','.join(map(str,native))+'};memcpy(image+0x12d2ab,b,sizeof b);}\n').encode()
        code+=r'''
 uint64_t seed=0x9324eb;unsigned cases=0;
 for(unsigned count=0;count<512;count++)for(unsigned sample=0;sample<64;sample++){
  seed=seed*6364136223846793005ULL+1;unsigned value=(unsigned)(seed>>32);
  memset(image+0x1fe95000,0xa5,8192);memset(working+0x1fe95000,0xa5,8192);
  memcpy(image+0x1fe95260,&count,4);memcpy(working+0x1fe95260,&count,4);
  memcpy(image+0x1fe95280+count*4,&value,4);memcpy(working+0x1fe95280+count*4,&value,4);
  unsigned expected=((unsigned(*)(void*))(image+0x12d2ab))(image);
  dword_140404A6C=(void *)(working+0x404a6c);unsigned actual=recovered();
  if(expected!=actual||memcmp(image+0x1fe95000,working+0x1fe95000,8192)){printf("spawn count %u sample %u mismatch\n",count,sample);return 1;}
  cases++;
 }
 printf("%u native Practice spawn-index result/counter/guard cases pass; initialization before this block excluded\n",cases);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-practice-spawn-index-20261004';out.mkdir(parents=True,exist_ok=True)
        fixture=out/'spawn_index.c';fixture.write_bytes(code);exe=fixture.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11',str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout,encoding='utf-8')
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
