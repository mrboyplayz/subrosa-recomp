"""Compare shader source/compile/link log flow and record status with native."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_shader_status import PROJECT,MARKER,repair

class ShaderStatus(unittest.TestCase):
    def test_native_shader_flow(self):
        source=read_client_source()
        a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER))
        if b'return sub_1401F8B20' in source[a:b]:source,_=repair(source)
        a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        text=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "defs.h"
typedef __int128 _OWORD;typedef uint64_t uint64;
#define nullptr NULL
static unsigned char *state;static unsigned logs,calls;static uint64_t trace[256];
#define dword_140404A6C ((unsigned *)(state+0x404a6c))
static void record(uint64_t v){trace[calls++]=v;}
static void shader_source(unsigned shader,int n,const char *const *text,const int *length){record(0);record(shader);record(n);record(length?1:0);record(strlen(*text));}
static void info(uint64_t shader,uint64_t capacity,int *length,void *buffer){record(1);record(shader);record(capacity);int n=logs?5:0;*length=n;memcpy(buffer,n?"mock\n":"",n+1);}
static void compile(uint64_t shader,uint64_t ignored){record(2);record(shader);}
static void attach(uint64_t program,uint64_t shader,uint64_t ignored){record(3);record(program);record(shader);}
static void link_program(uint64_t program){record(4);record(program);}
static void validate(uint64_t program,const void *unused,uint64_t ignored){record(5);record(program);}
static int sub_140158AB0(void *dest,const char *format,...){va_list args;va_start(args,format);int result=vsnprintf(dest,512,format,args);va_end(args);return result;}
static void (*unk_1404042D8)(unsigned,int,const char *const *,const int *)=shader_source;
static void (*unk_140404268)(uint64_t,uint64_t,int *,void *)=info;
static void (*unk_140404200)(uint64_t,uint64_t)=compile;
static void (*unk_1404041F0)(uint64_t,uint64_t,uint64_t)=attach;
static void (*unk_1404042D0)(uint64_t)=link_program;
static void (*unk_140404380)(uint64_t,const void *,uint64_t)=validate;
'''.encode()+body+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x11610000,MEM_RESERVE,PAGE_NOACCESS);unsigned char *recovered=VirtualAlloc(0,0x11610000,MEM_RESERVE,PAGE_NOACCESS);
unsigned pages[]={0x4c000,0x158000,0x1f8000,0x302000,0x404000,0x115ac000,0x115ad000,0x115b0000,0x115f0000,0x277000};
for(unsigned i=0;i<10;i++){if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;if(i>=5&&!VirtualAlloc(recovered+pages[i],4096,MEM_COMMIT,PAGE_READWRITE))return 9;}
'''.encode()
        text+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(0x4c4e0,0x480)))+'};memcpy(image+0x4c4e0,b,sizeof b);}\n').encode()
        text+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(0x277000,4096)))+'};memcpy(image+0x277000,b,sizeof b);}\n').encode()
        text+=r'''
thunk(image+0x158ab0,sub_140158AB0);
const uint64_t cookie=0x123456789abcdefULL;memcpy(image+0x3020a0,&cookie,8);
unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
'''.encode()
        for r,name in [(0x4042d8,'shader_source'),(0x404268,'info'),(0x404200,'compile'),(0x4041f0,'attach'),(0x4042d0,'link_program'),(0x404380,'validate')]:text+=('{void *p='+name+';memcpy(image+'+hex(r)+',&p,8);}\n').encode()
        text+=r'''
unsigned count=0;
for(unsigned index=0;index<4;index++)for(unsigned mask=0;mask<8;mask++)for(logs=0;logs<2;logs++)for(unsigned status=0;status<4;status++){
uint64_t values[2],saved[256];unsigned saved_calls=0;
for(unsigned native=0;native<2;native++){
state=native?image:recovered;memset(state+0x115ac000,0xa5,8192);memset(state+0x115b0000,0,4096);memset(state+0x115f0000,0xa5,4096);
memcpy(state+0x115b0bbc,"LOG:",5);
for(unsigned j=0;j<5;j++)dword_140404A6C[index*60+71737685+j]=100+index*5+j;
dword_140404A6C[index*60+71737689]=status;
const char *vertex=mask&1?"vertex source":NULL,*fragment=mask&2?"fragment source":NULL,*geometry=mask&4?"geometry source":NULL;
calls=0;values[native]=native?((uint64_t (*)(int,uint64_t,uint64_t,uint64_t))(image+0x4c4e0))(index,(uintptr_t)vertex,(uintptr_t)fragment,(uintptr_t)geometry):sub_14004C4E0(index,(uintptr_t)vertex,(uintptr_t)fragment,(uintptr_t)geometry);
if(!native){saved_calls=calls;memcpy(saved,trace,sizeof trace);}
else if(values[0]!=values[1]||calls!=saved_calls||memcmp(trace,saved,calls*8)||memcmp(image+0x115ac000,recovered+0x115ac000,8192)||memcmp(image+0x115b0000,recovered+0x115b0000,4096)||memcmp(image+0x115f0000,recovered+0x115f0000,4096)){printf("shader mismatch index %u mask %u logs %u status %u return %llu/%llu\n",index,mask,logs,status,values[0],values[1]);return 1;}}
count++;}printf("%u native shader stage/log/state/GL-call/return cases pass; GL and format boundaries controlled\n",count);return 0;}
'''.encode()
        out=PROJECT/'reports/client-shader-status-20261002';out.mkdir(exist_ok=True,parents=True)
        fixture=out/'shader_fixture.c';fixture.write_bytes(text);exe=fixture.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)

if __name__=='__main__':unittest.main()
