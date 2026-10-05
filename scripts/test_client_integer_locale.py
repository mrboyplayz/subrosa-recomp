"""Compare complete native integer scanner with contiguous locale storage."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_startup_arguments import PROJECT
from repair_client_integer_locale import repair


class IntegerLocale(unittest.TestCase):
    def test_native_scan(self):
        s=read_client_source()
        if b'sr_format_locale sr_integer_locale;' not in s:s,_=repair(s)
        marker=b'//----- (000000014023B240)';a=s.index(marker);b=s.index(b'//----- (',a+len(marker))
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
typedef void _LocaleUpdate;
struct __crt_locale_pointers;
typedef struct {uint64_t thread,pair[2];unsigned char changed,pad[7];} sr_format_locale;
static unsigned char thread[968];static unsigned short classes[257];
static uintptr_t loc[43];static unsigned changed,calls;static int error;
static int *errno_sr(void){return &error;}
static void sub_14024CF6C(void){calls++;}
static void *sub_140213644(_LocaleUpdate *out,struct __crt_locale_pointers *in){
 sr_format_locale *p=(void*)out;memset(p,0,sizeof *p);p->thread=(uintptr_t)thread;
 p->pair[0]=(uintptr_t)loc;p->pair[1]=0x1234;p->changed=changed;return out;
}
static uint64_t sub_140236ED8(unsigned c,short mask,struct __crt_locale_pointers *pair){
 uintptr_t *p=(void*)pair;if(p[0]!=(uintptr_t)loc||p[1]!=0x1234)abort();
 return c+1<=256?classes[c+1]&mask:0;
}
'''.encode()+s[a:b]+r'''
static void thunk(unsigned char *p,void *f){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&f,8);p[10]=0xff;p[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x250000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''.encode()
        for page in (0x23b000,0x213000,0x236000,0x24c000,0x24d000):
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
        raw=pe.get_data(0x23b240,0x305)
        c+=('{unsigned char b[]={'+','.join(map(str,raw))+'};memcpy(image+0x23b240,b,sizeof b);}\n').encode()
        for rva,name in ((0x213644,'sub_140213644'),(0x236ed8,'sub_140236ED8'),(0x24d1bc,'errno_sr'),(0x24cf6c,'sub_14024CF6C')):
            c+=f'thunk(image+{rva},{name});\n'.encode()
        c+=r'''
classes[' '+1]=classes['\t'+1]=classes['\n'+1]=classes['\r'+1]=classes['\v'+1]=classes['\f'+1]=8;
loc[0]=(uintptr_t)(classes+1);loc[1]=1;
const char *inputs[]={""," ","0","02","32","-1","+1","  -42x","2147483647","2147483648","-2147483648",
 "-2147483649","4294967295","4294967296","0xff","-0x80000000","0777","zzz","+","--1","0x","00000000000000000000001"};
unsigned bases[]={0,1,2,8,10,16,36,37};unsigned count=0;
for(unsigned t=0;t<22;t++)for(unsigned bas=0;bas<8;bas++)for(unsigned flags=0;flags<16;flags++)
for(changed=0;changed<2;changed++)for(unsigned has_end=0;has_end<2;has_end++){
 uint64_t result=0;int old_error=0;unsigned old_calls=0,old_thread=0;intptr_t old_at=0,old_end=0;
 for(unsigned original=0;original<2;original++){
  uint64_t end=0;int64_t cursor[2]={(intptr_t)inputs[t],has_end?(intptr_t)&end:0};
  memset(thread,0,sizeof thread);*(unsigned*)(thread+936)=0x46;error=7;calls=0;
  uint64_t got=original?((uint64_t(*)(void*,int64_t*,unsigned,char))(image+0x23b240))(NULL,cursor,bases[bas],flags):
                       sub_14023B240(NULL,cursor,bases[bas],flags);
  intptr_t at=cursor[0]-(intptr_t)inputs[t],end_at=has_end?(intptr_t)end-(intptr_t)inputs[t]:0;
  if(!original){result=got;old_error=error;old_calls=calls;old_thread=*(unsigned*)(thread+936);old_at=at;old_end=end_at;}
  else if(got!=result||error!=old_error||calls!=old_calls||*(unsigned*)(thread+936)!=old_thread||at!=old_at||end_at!=old_end){
   printf("mismatch input=%u base=%u flags=%u changed=%u end=%u C=%llu native=%llu\n",t,bases[bas],flags,changed,has_end,result,got);return 1;}
 }count++;
}printf("%u native integer-value/overflow/end-pointer/errno/locale-cleanup comparisons pass; locale constructor and classifier boundaries controlled\n",count);return 0;}
'''.encode()
        out=PROJECT/'reports/client-integer-locale-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        f=out/'integer.c';f.write_bytes(c);exe=f.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing',
                          '-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)


if __name__=='__main__':unittest.main()
