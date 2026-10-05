"""Compare native dynamic wide-name conversion and metadata copy end to end."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_find_files import PROJECT,PREFIX,NARROW

class FindNarrow(unittest.TestCase):
 def test_native_narrow_conversion(self):
  source=read_client_source()
  m=b'//----- (000000014023850C)';a=source.index(m);b=source.index(b'//----- (',a+len(m))
  converter=source[a:b].replace(b'malloc_base(',b'sr_path_malloc(')
  # Only the low DWORD enters the Windows conversion API in native code.
  import re
  converter=re.sub(rb'(__int64 v1[78]);',rb'\1 = 0;',converter)
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
#define nullptr NULL
'''.encode()+PREFIX+r'''
static int error;static unsigned fail_alloc,allocations,frees;
static int *errno_sr(void){return &error;}
__int64 sr_path_malloc(unsigned __int64 n){allocations++;return fail_alloc?0:(__int64)(uintptr_t)malloc(n);}
static void free_base(void *p){if(p)frees++;free(p);}
static void sub_14024D14C(unsigned n){error=n?42:0;}
static void sub_14024CFBC(void){abort();}
static __int64 strcpy_s_sr(__int64 out,__int64 size,const void *in){if(strlen(in)>=size)abort();strcpy((void*)(uintptr_t)out,in);return 0;}
static __int64 sub_140258A84(unsigned cp,__int64 flags,__int64 in,__int64 length,__int64 out,__int64 size,__int64 def,__int64 used){
 return (unsigned)WideCharToMultiByte(cp,(DWORD)flags,(wchar_t*)(uintptr_t)in,(int)length,(char*)(uintptr_t)out,(int)size,(char*)(uintptr_t)def,(BOOL*)(uintptr_t)used);}
'''.encode()+converter+NARROW+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x270000,MEM_RESERVE,PAGE_NOACCESS);
unsigned pages[]={0x238000,0x239000,0x24c000,0x24d000,0x24e000,0x253000,0x258000,0x26e000};for(unsigned i=0;i<8;i++)VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE);
'''.encode()
  for r,n in [(0x23850c,0x1f8),(0x239928,0xb2)]:c+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(r,n)))+'};memcpy(image+'+hex(r)+',b,sizeof b);}\n').encode()
  for r,n in [(0x253f60,'sr_path_malloc'),(0x258a84,'sub_140258A84'),(0x24c810,'strcpy_s_sr'),(0x24d14c,'sub_14024D14C'),(0x24d1bc,'errno_sr'),(0x24cfbc,'sub_14024CFBC'),(0x24e018,'free_base')]:c+=('thunk(image+'+hex(r)+','+n+');\n').encode()
  c+=r'''{void *p=GetLastError;memcpy(image+0x26e260,&p,8);}
unsigned cp[]={65001,1252,0,1};const wchar_t *names[]={L"",L"item.sis",L"caf\x00e9.sis",L"\x4e16\x754c.sis",L"\xd83d\xde80.sis",L"abcdefghijklmnopqrstuvwxyz.sis"};
unsigned count=0;for(unsigned code=0;code<4;code++)for(unsigned name=0;name<6;name++)for(fail_alloc=0;fail_alloc<2;fail_alloc++){
unsigned char wide[560],out[2][320];memset(wide,0xa5,sizeof wide);wcscpy((wchar_t*)(wide+36),names[name]);unsigned results[2],saved_alloc,saved_free;int saved_error;
for(unsigned native=0;native<2;native++){memset(out[native],0x5a,320);allocations=frees=0;error=0;
results[native]=native?((char(*)(__int64,__int64,unsigned))(image+0x239928))((__int64)(uintptr_t)wide,(__int64)(uintptr_t)(out[native]+8),cp[code]):sub_140239928((__int64)(uintptr_t)wide,(__int64)(uintptr_t)(out[native]+8),cp[code]);
if(!native){saved_alloc=allocations;saved_free=frees;saved_error=error;}else if(results[0]!=results[1]||saved_alloc!=allocations||saved_free!=frees||saved_error!=error||memcmp(out[0],out[1],320)){printf("conversion mismatch %u %u %u\n",code,name,fail_alloc);return 1;}}count++;}
printf("%u native dynamic wide-name conversion/allocation/metadata cases pass; conversion uses Windows API\n",count);return 0;}
'''.encode()
  out=PROJECT/'reports/client-find-files-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'narrow_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'narrow-stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()
