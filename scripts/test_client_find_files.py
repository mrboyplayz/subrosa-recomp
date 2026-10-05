"""Compare find-first wrapper with native code at controlled CRT boundaries."""
import subprocess
import unittest
import pefile
from repair_client_find_files import PROJECT, PREFIX, FIRST

class FindFiles(unittest.TestCase):
 def test_native_find_first(self):
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
typedef void _LocaleUpdate;
'''.encode()+PREFIX+r'''
static unsigned char thread[1024],loc[32],path[64];
static unsigned scenario,mode,changed,owned,calls;static int error;
static uint64_t trace[32];
static int *errno_sr(void){return &error;}
static void sub_14024CF6C(void){trace[calls++]=0x16;}
static void sub_140213644(_LocaleUpdate *p,void *q){
 struct {uintptr_t thread,locale,multibyte;unsigned char changed;} *l=p;
 l->thread=(uintptr_t)thread;l->locale=(uintptr_t)loc;l->multibyte=0xabcdef123456;l->changed=changed;
 *(unsigned *)(loc+12)=mode==0?65001:1252;trace[calls++]=(uintptr_t)q;
}
static __int64 sub_14024EDA4(void){trace[calls++]=0x24eda4;return mode==1;}
__int64 sr_path_mbs(_BYTE *s,__int64 p,unsigned cp){sr_find_buffer *b=(void*)(uintptr_t)p;
 if(b->initial||b->initial_capacity||b->buffer||b->capacity||b->size||b->owned)abort();
 trace[calls++]=s?1:0;trace[calls++]=cp;trace[calls++]=*(unsigned*)(thread+936);
 b->buffer=path;b->capacity=64;b->size=3;b->owned=owned;return scenario==1?12:0;}
static __int64 sub_140238DC8(__int64 p,__int64 out){if((void*)(uintptr_t)p!=path)abort();
 trace[calls++]=0x238dc8;memset((void*)(uintptr_t)out,0xa7,560);
 return scenario==2?-1:(__int64)(0x123456780000ull+scenario*1024);}
static char sub_140239928(__int64 p,__int64 out,unsigned cp){
 for(unsigned i=0;i<560;i++)if(((unsigned char*)(uintptr_t)p)[i]!=0xa7)abort();
 trace[calls++]=out;trace[calls++]=cp;return scenario!=3;}
static void free_base(void *p){if(p!=path)abort();trace[calls++]=0x24e018;}
'''.encode()+FIRST+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x303000,MEM_RESERVE,PAGE_NOACCESS);
unsigned pages[]={0x213000,0x238000,0x239000,0x23a000,0x24c000,0x24d000,0x24e000,0x302000,0x1f8000};
for(unsigned i=0;i<9;i++)VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE);
'''.encode()
  c+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(0x23a198,0x189)))+'};memcpy(image+0x23a198,b,sizeof b);}\n').encode()
  for r,n in [(0x213644,'sub_140213644'),(0x24eda4,'sub_14024EDA4'),(0x238394,'sr_path_mbs'),(0x238dc8,'sub_140238DC8'),(0x239928,'sub_140239928'),(0x24d1bc,'errno_sr'),(0x24cf6c,'sub_14024CF6C'),(0x24e018,'free_base')]:c+=('thunk(image+'+hex(r)+','+n+');\n').encode()
  c+=r'''uint64_t cookie=0x123456789abcdef;memcpy(image+0x3020a0,&cookie,8);
unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};
memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
unsigned count=0;for(mode=0;mode<3;mode++)for(changed=0;changed<2;changed++)for(owned=0;owned<2;owned++)for(scenario=0;scenario<32;scenario++)for(unsigned invalid=0;invalid<2;invalid++){
uint64_t saved[32],results[2];unsigned saved_calls;int saved_error;char name[]="*.sis",data[320];
for(unsigned native=0;native<2;native++){memset(thread,0,sizeof thread);*(unsigned*)(thread+936)=7;error=0;calls=0;
__int64 out=invalid?0:(__int64)(uintptr_t)data;
results[native]=native?((__int64(*)(_BYTE*,__int64))(image+0x23a198))(name,out):sub_14023A198(name,out);
if(*(unsigned*)(thread+936)!=(changed?5:7))return 2;
if(!native){saved_calls=calls;saved_error=error;memcpy(saved,trace,sizeof trace);}
else if(results[0]!=results[1]||saved_error!=error||calls!=saved_calls||memcmp(saved,trace,calls*8)){printf("find mismatch %u %u %u %u %u\n",mode,changed,owned,scenario,invalid);return 1;}}
count++;}printf("%u native find-first locale/codepage/buffer/handle/cleanup cases pass; boundaries controlled\n",count);return 0;}
'''.encode()
  out=PROJECT/'reports/client-find-files-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'find_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()
