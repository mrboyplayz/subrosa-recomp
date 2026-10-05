"""Compare paired native find-next wrappers, metadata, status and cleanup."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_find_next import PROJECT,NEXT,repair

class FindNext(unittest.TestCase):
 def test_native_next_chain(self):
  source=read_client_source()
  if NEXT not in source:source,_=repair(source)
  def region(r):
   m=('//----- (%016X)'%(0x140000000+r)).encode();a=source.index(m);b=source.index(b'//----- (',a+len(m));return source[a:b]
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
typedef void _LocaleUpdate;
static unsigned mode,changed,scenario,calls;static int error;
static unsigned char thread[1024],loc[32];static uint64_t trace[32];
static int *errno_sr(void){return &error;}
static void sub_14024CF6C(void){trace[calls++]=22;}
static void sub_14024CFBC(void){abort();}
static void sub_140213644(_LocaleUpdate *p,void *q){struct {uintptr_t thread,locale,multibyte;unsigned char changed;} *l=p;
 l->thread=(uintptr_t)thread;l->locale=(uintptr_t)loc;l->multibyte=123;l->changed=changed;*(unsigned*)(loc+12)=mode?1252:65001;}
static __int64 sub_14024EDA4(void){return mode==1;}
static BOOL mock_next(HANDLE handle,WIN32_FIND_DATAW *data){trace[calls++]=(uintptr_t)handle;
 memset(data,0xa5,sizeof *data);data->dwFileAttributes=scenario&1?128:0x80000000u+scenario;
 data->ftCreationTime.dwLowDateTime=scenario;data->ftLastAccessTime.dwLowDateTime=scenario+1;data->ftLastWriteTime.dwLowDateTime=scenario+2;
 data->nFileSizeLow=scenario*123;wcscpy(data->cFileName,L"second.sis");return !(scenario&8);}
static DWORD mock_error(void){unsigned errors[]={0,1,2,3,8,18,50,0xffffffff};return errors[scenario&7];}
static BOOL mock_close(HANDLE handle){trace[calls++]=(uintptr_t)handle;return scenario&1;}
static __int64 sub_140239610(_DWORD *p){uint64_t n;memcpy(&n,p,8);return n^0x123456789abcdefull;}
static __int64 sub_140259444(_WORD *out,__int64 n,__int64 in){if(n!=260)abort();wcscpy((wchar_t*)out,(wchar_t*)(uintptr_t)in);return 0;}
static char sub_140239928(__int64 in,__int64 out,unsigned cp){trace[calls++]=cp;trace[calls++]=*(unsigned*)(thread+936);
 if(wcscmp((wchar_t*)(uintptr_t)(in+36),L"second.sis"))abort();memcpy((void*)(uintptr_t)out,(void*)(uintptr_t)in,4);memcpy((void*)(uintptr_t)(out+8),(void*)(uintptr_t)(in+8),28);return !(scenario&16);}
#define FindNextFileW mock_next
#define FindClose mock_close
#define GetLastError mock_error
#define nullptr NULL
#define __debugbreak() abort()
'''.encode()+region(0x239448)+NEXT+region(0x239ccc)+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x303000,MEM_RESERVE,PAGE_NOACCESS);
unsigned pages[]={0x213000,0x239000,0x23a000,0x24c000,0x24d000,0x24e000,0x259000,0x26e000,0x302000,0x1f8000};for(unsigned i=0;i<10;i++)VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE);
'''.encode()
  for r,n in [(0x239448,0x126),(0x23a5c4,0xe0),(0x239ccc,0x25)]:c+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(r,n)))+'};memcpy(image+'+hex(r)+',b,sizeof b);}\n').encode()
  for r,n in [(0x213644,'sub_140213644'),(0x24eda4,'sub_14024EDA4'),(0x239610,'sub_140239610'),(0x239928,'sub_140239928'),(0x259444,'sub_140259444'),(0x24d1bc,'errno_sr'),(0x24cf6c,'sub_14024CF6C'),(0x24cfbc,'sub_14024CFBC')]:c+=('thunk(image+'+hex(r)+','+n+');\n').encode()
  for r,n in [(0x26e1d0,'mock_next'),(0x26e260,'mock_error'),(0x26e1e0,'mock_close')]:c+=('{void *p='+n+';memcpy(image+'+hex(r)+',&p,8);}\n').encode()
  c+=r'''uint64_t cookie=0x123456789abcdef;memcpy(image+0x3020a0,&cookie,8);unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
unsigned count=0;for(mode=0;mode<3;mode++)for(changed=0;changed<2;changed++)for(scenario=0;scenario<32;scenario++)for(unsigned kind=0;kind<3;kind++){
__int64 handle=kind==1?0:(kind==2?-1:(__int64)(0xabcdef123400ull+scenario));uint64_t saved[32],results[2];unsigned saved_calls;int saved_error;unsigned char data[2][320];
for(unsigned native=0;native<2;native++){memset(thread,0,sizeof thread);*(unsigned*)(thread+936)=7;memset(data[native],0x5a,320);calls=0;error=0;
__int64 out=(__int64)(uintptr_t)(data[native]+8);
results[native]=native?((__int64(*)(__int64,__int64))(image+0x23a5c4))(handle,out):sub_14023A5C4(handle,out);
if(*(unsigned*)(thread+936)!=(changed?5:7))return 2;
if(!native){saved_calls=calls;saved_error=error;memcpy(saved,trace,sizeof trace);}else if(results[0]!=results[1]||saved_error!=error||calls!=saved_calls||memcmp(saved,trace,calls*8)||memcmp(data[0],data[1],320))return 1;}count++;}
for(scenario=0;scenario<128;scenario++){__int64 handle=0xabcdef123400ull+scenario;uint64_t results[2],saved[32];unsigned saved_calls;int saved_error;
for(unsigned native=0;native<2;native++){calls=0;error=0;results[native]=native?((__int64(*)(__int64))(image+0x239ccc))(handle):sub_140239CCC(handle);
if(!native){saved_calls=calls;saved_error=error;memcpy(saved,trace,sizeof trace);}else if(results[0]!=results[1]||saved_error!=error||calls!=saved_calls||memcmp(saved,trace,calls*8))return 3;}count++;}
printf("%u native find-next chain and FindClose handle/status cases pass; API/locale/conversion boundaries controlled\n",count);return 0;}
'''.encode()
  out=PROJECT/'reports/client-find-files-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'next_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'next-stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()
