"""Compare font numeric extraction and complete row flips with pinned native code."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_font_startup import PROJECT


class FontStartup(unittest.TestCase):
    def test_native_csv_and_row_flip(self):
        s=read_client_source()
        def body(rva):
            marker=('//----- (%016X)'%(0x140000000+rva)).encode();a=s.index(marker);b=s.index(b'//----- (',a+10)
            return s[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "defs.h"
typedef uint64_t uint64;
static unsigned *dword_140404A6C;
static unsigned scanned;static char seen[1024];
static __int64 sub_14015B070(__int64 text,char *format,...){va_list args;va_start(args,format);int *out=va_arg(args,int*);va_end(args);if((uintptr_t)out<=UINT32_MAX||strcmp(format,"%d"))abort();scanned++;strcpy(seen,(char*)(uintptr_t)text);return sscanf((char*)(uintptr_t)text,format,out);}
static void sub_1401F8694(void){abort();}
static void sub_1401FC920(void *p,const void *q,size_t n){memcpy(p,q,n);}
'''.encode()+body(0x6edd0)+body(0x16f470)+r'''
static void thunk(unsigned char *p,void *target){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&target,8);p[10]=0xff;p[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x1f1da000,MEM_RESERVE,PAGE_NOACCESS);unsigned char *state=VirtualAlloc(0,0x1f1da000,MEM_RESERVE,PAGE_NOACCESS);if(!image||!state)return 9;
unsigned pages[]={0x6e000,0x15b000,0x16f000,0x1fc000,0x1f8000,0x302000,0x1f1d9000};
for(unsigned i=0;i<7;i++)if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 10;
if(!VirtualAlloc(state+0x1f1d9000,4096,MEM_COMMIT,PAGE_READWRITE))return 10;
'''.encode()
        for rva,n in ((0x6edd0,0xf0),(0x16f470,0x11d),(0x2b34f8,3)):
            if rva==0x2b34f8:continue
            c+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(rva,n)))+'};memcpy(image+'+hex(rva)+',b,sizeof b);}\n').encode()
        # CSV parser format string is RIP-relative; route the formatter at its call boundary.
        c+=r'''
thunk(image+0x15b070,sub_14015B070);thunk(image+0x1fc920,sub_1401FC920);
/* The format string's original RVA is outside the mapped code pages. */
'''.encode()
        format_rva=0x6ee8d+7+int.from_bytes(pe.get_data(0x6ee8d+3,4),'little',signed=True)
        c+=f'if(!VirtualAlloc(image+{format_rva&~4095},4096,MEM_COMMIT,PAGE_READWRITE))return 11;memcpy(image+{format_rva},"%d",3);\n'.encode()
        c+=r'''
const uint64_t cookie=0x123456789abcdefULL;memcpy(image+0x3020a0,&cookie,8);
unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
unsigned csv_cases=0;
for(unsigned i=0;i<512;i++){char text[512];int value=(int)i*193-32000;sprintf(text,"Cell Width, junk %d trailing text",value);int saved;unsigned cursor;char scanned_text[1024];
for(unsigned native=0;native<2;native++){
dword_140404A6C=(void*)((native?image:state)+0x404a6c);dword_140404A6C[129454557]=i%8;dword_140404A6C[129454558]=strlen(text);strcpy((char*)&dword_140404A6C[129454559],text);scanned=0;memset(seen,0,sizeof seen);
int result=native?((int(*)(void))(image+0x6edd0))():sub_14006EDD0();
if(result!=value||scanned!=1)return 1;
if(!native){saved=result;cursor=dword_140404A6C[129454557];strcpy(scanned_text,seen);}
else if(saved!=result||cursor!=dword_140404A6C[129454557]||strcmp(scanned_text,seen))return 2;
}csv_cases++;}
unsigned widths[]={0,1,2,511,512,513,1024};unsigned rows[]={0,1,2,3,5};unsigned flip_cases=0;
for(unsigned w=0;w<7;w++)for(unsigned h=0;h<5;h++)for(unsigned channels=1;channels<=4;channels++)for(unsigned align=0;align<4;align++){
size_t n=widths[w]*rows[h]*channels;unsigned char *p=malloc(n+64),*q=malloc(n+64);for(size_t j=0;j<n+64;j++)p[j]=(unsigned char)(j*73+19);memcpy(q,p,n+64);
sub_14016F470((void*)(p+16+align),widths[w],rows[h],channels);
((void(*)(void*,int,int,int))(image+0x16f470))(q+16+align,widths[w],rows[h],channels);
if(memcmp(p,q,n+64))return 3;free(p);free(q);flip_cases++;
}
printf("%u native CSV result/cursor/high-address output-pointer cases and %u complete native row-flip/unaligned/chunk/guard cases pass; decimal scanner controlled\n",csv_cases,flip_cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-font-startup-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        f=out/'font_startup.c';f.write_bytes(c);exe=f.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)


if __name__=='__main__':unittest.main()
