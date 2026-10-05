"""Compare entire original quicksort, including duplicate order and callbacks."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_sorter import PROJECT,MARKER,repair

class Sorter(unittest.TestCase):
 def test_native_sort_and_callback_order(self):
  s=read_client_source()
  if b'void            sub_14023AE00(' not in s:s,_=repair(s)
  a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER));body=s[a:b]
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
static int error,invalid;static unsigned calls;static uintptr_t base;static uint64_t trace[32768];
static int *errno_sr(void){return &error;}
static void sub_14024CF6C(void){invalid++;}
static int compare(unsigned __int64 a,_BYTE *b){if(calls>=32768)abort();trace[calls++]=((a-base)<<32)|((uintptr_t)b-base);
return *(unsigned char*)(uintptr_t)a>*b?1:(*(unsigned char*)(uintptr_t)a<*b?-1:0);}
'''.encode()+body+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x303000,MEM_RESERVE,PAGE_NOACCESS);
unsigned pages[]={0x23a000,0x23b000,0x24c000,0x24d000,0x26e000,0x302000,0x1f8000};for(unsigned i=0;i<7;i++)VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE);
'''.encode()
  c+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(0x23ae00,0x3b0)))+'};memcpy(image+0x23ae00,b,sizeof b);}\n').encode()
  for r,n in [(0x24d1bc,'errno_sr'),(0x24cf6c,'sub_14024CF6C')]:c+=('thunk(image+'+hex(r)+','+n+');\n').encode()
  c+=r'''unsigned char dispatch[]={0xff,0xe0};memcpy(image+0x26e800,dispatch,2);void *p=image+0x26e800;memcpy(image+0x26e698,&p,8);
uint64_t cookie=0x123456789abcdef;memcpy(image+0x3020a0,&cookie,8);unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
unsigned count=0,widths[]={1,3,4,8,12,24};unsigned char original[4096],data[2][4096];static uint64_t saved[32768];
for(unsigned length=0;length<=128;length++)for(unsigned width=0;width<6;width++)for(unsigned skew=0;skew<16;skew++)for(unsigned pattern=0;pattern<6;pattern++){
memset(original,0x5a,sizeof original);for(unsigned i=0;i<length;i++){unsigned char *r=original+32+skew+i*widths[width];for(unsigned j=0;j<widths[width];j++)r[j]=i*31+j;
r[0]=pattern==0?i:(pattern==1?length-i:(pattern==2?17:(pattern==3?i%3:(pattern==4?(i*73+11)%251:(i<length/2?i:length-i)))));}
unsigned saved_calls;int saved_error,saved_invalid;
for(unsigned native=0;native<2;native++){memcpy(data[native],original,4096);base=(uintptr_t)(data[native]+32+skew);calls=0;error=invalid=0;
if(native)((void(*)(unsigned __int64,unsigned __int64,unsigned __int64,int(*)(unsigned __int64,_BYTE*)))(image+0x23ae00))(base,length,widths[width],compare);else sub_14023AE00(base,length,widths[width],compare);
if(!native){saved_calls=calls;saved_error=error;saved_invalid=invalid;memcpy(saved,trace,calls*8);}else if(error!=saved_error||invalid!=saved_invalid||calls!=saved_calls||memcmp(saved,trace,calls*8)||memcmp(data[0],data[1],4096)){printf("sort mismatch %u %u %u %u %u %u\n",length,width,skew,pattern,calls,saved_calls);return 1;}}count++;}
for(unsigned scenario=0;scenario<4;scenario++){unsigned saved_calls;int saved_error,saved_invalid;
for(unsigned native=0;native<2;native++){calls=0;error=invalid=0;base=(uintptr_t)data[native];unsigned __int64 input=scenario<2?0:base,length=scenario==0?0:3,width=scenario==2?0:4;int(*cb)(unsigned __int64,_BYTE*)=scenario==3?NULL:compare;
if(native)((void(*)(unsigned __int64,unsigned __int64,unsigned __int64,int(*)(unsigned __int64,_BYTE*)))(image+0x23ae00))(input,length,width,cb);else sub_14023AE00(input,length,width,cb);
if(!native){saved_calls=calls;saved_error=error;saved_invalid=invalid;}else if(error!=saved_error||invalid!=saved_invalid||calls!=saved_calls)return 2;}count++;}
printf("%u native sort/output/duplicate/callback-order/alignment/invalid-argument cases pass; unused RAX excluded\n",count);return 0;}
'''.encode()
  out=PROJECT/'reports/client-sorter-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'sort_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60);(out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()
