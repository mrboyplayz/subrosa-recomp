"""Compare original CMC filename/version prefix and invalid-version exits."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
import capstone
from repair_client_character_loader import PROJECT,MARKER,repair
class CharacterLoader(unittest.TestCase):
 def test_native_prefix(self):
  s=read_client_source()
  if b'void            asset_load_character_cmc_candidate(' not in s:s,_=repair(s)
  a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER));r=s[a:b];prefix=r[:r.index(b'    v6 = 0;')]+b'  }\n}\n'
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True);native=pe.get_data(0xe8580,0x14e0)
  pages={0xe8000,0xe9000,0x158000,0x20b000,0x1f8000,0x302000};d=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);d.detail=True
  for i in d.disasm(native,0xe8580):
   for op in i.operands:
    if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:pages.add((i.address+i.size+op.mem.disp)&~4095)
  pages.add((0x404a6c+4*174250135)&~4095)
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include "defs.h"
static unsigned char *image;static unsigned *dword_140404A6C;static jmp_buf stop;static unsigned version,calls,reads;static uint64_t trace[32];static char expected[512];
static int sub_140158AB0(char *p,const char *format,const char *name){if(strcmp(format,"data/model/%s.cmc"))abort();return sprintf(p,format,name);}
static __int64 sub_14020B8D8(char *p,const char *mode){if(strcmp(p,expected)||strcmp(mode,"rb"))abort();trace[calls++]=1;return 0xabcdef123456ull;}
static size_t read_file(void *p,size_t n,size_t count,uintptr_t h){if(h!=0xabcdef123456ull)abort();uintptr_t at=(uintptr_t)p-(uintptr_t)image;trace[calls++]=at<0x74794000?at:0xffffffff;trace[calls++]=n;trace[calls++]=count;reads++;if(reads==3)longjmp(stop,1);if(reads==1)memcpy(p,"CMC\0",4);else memcpy(p,&version,4);return count;}
static __int64 sub_14020B9E8(__int64 h){if(h!=0xabcdef123456ull)abort();trace[calls++]=2;return 0;}
'''.encode()+prefix+r'''
static void thunk(unsigned char *p,void *f){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&f,8);p[10]=0xff;p[11]=0xe0;}
int main(void){image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;dword_140404A6C=(void*)(image+0x404a6c);
'''.encode()
  for page in sorted(pages):
   data=pe.get_data(page,4096);c+=('if(!VirtualAlloc(image+'+hex(page)+',4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n').encode()
   if data:c+=('{unsigned char b[]={'+','.join(map(str,data))+'};memcpy(image+'+hex(page)+',b,sizeof b);}\n').encode()
  for at,name in [(0x158ab0,'sub_140158AB0'),(0x20b8d8,'sub_14020B8D8'),(0x20b9e8,'sub_14020B9E8')]:c+=('thunk(image+'+hex(at)+','+name+');\n').encode()
  c+=r'''uintptr_t reader=(uintptr_t)read_file;memcpy(&dword_140404A6C[293250407],&reader,8);uint64_t cookie=0x123456789abcdef;memcpy(image+0x3020a0,&cookie,8);unsigned char check[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,2,0x0f,0x0b,0xc3};memcpy(check+2,&cookie,8);memcpy(image+0x1f8b20,check,sizeof check);
unsigned total=0;static unsigned saved_calls,saved_reads;static uint64_t saved[32];for(unsigned id=0;id<32;id++)for(unsigned length=1;length<=48;length++)for(version=0;version<5;version++){char name[64];for(unsigned j=0;j<length;j++)name[j]='a'+(id+j)%26;name[length]=0;sprintf(expected,"data/model/%s.cmc",name);
for(unsigned original=0;original<2;original++){reads=calls=0;if(!_setjmp(stop,0)){if(original)((void(*)(int,char*))(image+0xe8580))(id,name);else asset_load_character_cmc_candidate(id,name);}
if(!original){saved_calls=calls;saved_reads=reads;memcpy(saved,trace,calls*8);}else if(calls!=saved_calls||reads!=saved_reads||memcmp(saved,trace,calls*8)){printf("mismatch %u %u %u\n",id,length,version);return 1;}}total++;}
printf("%u native CMC filename/version/read-prefix/invalid-exit/close cases pass; valid geometry body excluded and file/formatter boundaries controlled\n",total);return 0;}
'''.encode()
  out=PROJECT/'reports/client-character-loader-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'character_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()
