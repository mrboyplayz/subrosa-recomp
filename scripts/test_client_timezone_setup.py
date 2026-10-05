"""Compare native TZ environment setup and cleanup through its void return."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_local_time import PROJECT

class TimezoneSetup(unittest.TestCase):
 def test_native_environment_wrapper(self):
  s=read_client_source();m=b'//----- (0000000140237EB8)';a=s.index(m);b=s.index(b'//----- (',a+len(m));body=s[a:b]
  self.assertIn(b'void sub_140237EB8()',body)
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
#define nullptr NULL
static unsigned dword_140404A6C[19064606];static int dword_140302280,dword_140302290;
static unsigned scenario,calls,envcalls;static uint64_t trace[32];static unsigned char allocation[8192];
static __int64 getenv_s_sr(unsigned __int64 *size,_BYTE *out,unsigned __int64 cap,__int64 name){
 if(strcmp((char*)(uintptr_t)name,"TZ"))abort();trace[calls++]=cap;*size=512+scenario;
 strcpy(out,scenario&4?"":"TZ0");if(!envcalls++)return scenario%3==1?22:(scenario%3==2?34:0);return scenario&8?22:0;}
__int64 sr_path_malloc(unsigned __int64 size){trace[calls++]=size;return scenario&16?0:(__int64)(uintptr_t)allocation;}
static void free_base(void *p){trace[calls++]=p==allocation?2:(!p?1:99);}
static void sub_140237B08(char *s){if(strcmp(s,"TZ0"))abort();trace[calls++]=0x237b08;}
static unsigned int *tzset_from_system_nolock(void){trace[calls++]=0x237d10;return dword_140404A6C;}
'''.encode()+body+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x4cc0000,MEM_RESERVE,PAGE_NOACCESS);
unsigned pages[]={0x237000,0x24e000,0x253000,0x258000,0x285000,0x302000,0x4cbe000,0x1f8000};for(unsigned i=0;i<8;i++)VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE);
'''.encode()
  c+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(0x237eb8,0x108)))+'};memcpy(image+0x237eb8,b,sizeof b);}\n').encode()
  for r,n in [(0x25889c,'getenv_s_sr'),(0x253f60,'sr_path_malloc'),(0x24e018,'free_base'),(0x237b08,'sub_140237B08'),(0x237d10,'tzset_from_system_nolock')]:c+=('thunk(image+'+hex(r)+','+n+');\n').encode()
  c+=r'''strcpy((char*)(image+0x285a28),"TZ");uint64_t cookie=0x123456789abcdef;memcpy(image+0x3020a0,&cookie,8);unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
unsigned count=0;for(scenario=0;scenario<512;scenario++){uint64_t saved[32];unsigned saved_calls;
for(unsigned native=0;native<2;native++){calls=envcalls=0;dword_140302280=dword_140302290=31;dword_140404A6C[19064605]=31;*(unsigned*)(image+0x302280)=*(unsigned*)(image+0x302290)=31;*(unsigned*)(image+0x4cbe6e0)=31;
if(native)((void(*)(void))(image+0x237eb8))();else sub_140237EB8();
if(native){if(*(unsigned*)(image+0x302280)!=0xffffffffu||*(unsigned*)(image+0x302290)!=0xffffffffu||*(unsigned*)(image+0x4cbe6e0))return 2;}
else if(dword_140302280!=-1||dword_140302290!=-1||dword_140404A6C[19064605])return 3;
if(!native){saved_calls=calls;memcpy(saved,trace,sizeof trace);}else if(calls!=saved_calls||memcmp(saved,trace,calls*8))return 1;}count++;}
printf("%u native TZ environment/allocation/failure/dispatch/cleanup cases pass; boundaries controlled\n",count);return 0;}
'''.encode()
  out=PROJECT/'reports/client-local-time-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'timezone_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'timezone-stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()
