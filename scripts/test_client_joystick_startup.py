"""Compare SDL startup calls, ownership, high handles and joystick state with native."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import pefile
from repair_client_joystick_startup import PROJECT,MARKER,IMPORTS,repair

class JoystickStartup(unittest.TestCase):
    def test_native_initialization(self):
        source=read_client_source()
        if b'sr_pad_mappings(sr_pad_file' not in source:source,_=repair(source)
        a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        text=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
typedef uint64_t uint64;
static unsigned char *state;static unsigned devices,mode,calls,trace[1024];static int bad;
#define dword_140404A6C ((unsigned *)(state+0x404a6c))
static uintptr_t handle(unsigned i){return 0x123400000000ULL+i*64+16;}
static void record(unsigned op,unsigned arg){trace[calls++]=op;trace[calls++]=arg;}
static void *sr_pad_file(const char *path,const char *flags){if(strcmp(path,"gamecontrollerdb.txt")||strcmp(flags,"rb"))bad=1;record(0,mode);return mode&1?NULL:(void *)handle(100);}
static int sr_pad_mappings(void *p,int release){if(p!=(mode&1?NULL:(void *)handle(100))||release!=1)bad=1;record(1,release);return -1;}
static int sr_pad_count(void){record(2,devices);return devices;}
static int sr_pad_is_controller(int i){record(3,i);return (i+mode)&1;}
static void *sr_pad_controller_open(int i){record(4,i);return mode&2?NULL:(void *)handle(i);}
static void *sr_pad_controller_joystick(void *p){unsigned i=((uintptr_t)p-0x123400000010ULL)/64;record(5,i);return (void *)(handle(i)+8);}
static int sr_pad_instance(void *p){unsigned i=((uintptr_t)p-0x123400000010ULL)/64;record(6,i);return i+mode*7;}
static const char *sr_pad_name(int i){record(7,i);return "Fixture pad";}
static void *sr_pad_open(int i){record(8,i);return mode&2?NULL:(void *)(handle(i)+8);}
static int sr_pad_axes(void *p){unsigned i=((uintptr_t)p-0x123400000010ULL)/64;record(9,i);return i%9;}
static int sr_pad_buttons(void *p){unsigned i=((uintptr_t)p-0x123400000010ULL)/64;record(10,i);return i%23;}
static int sr_pad_hats(void *p){unsigned i=((uintptr_t)p-0x123400000010ULL)/64;record(11,i);return i%4;}
static int SDL_JoystickEventState(int enabled){record(12,enabled);return 1;}
'''.encode()+body+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x4439d000,MEM_RESERVE,PAGE_NOACCESS);
unsigned char *recovered=VirtualAlloc(0,0x4439d000,MEM_RESERVE,PAGE_NOACCESS);
unsigned pages[]={0x144000,0x198000,0x272000,0x277000,0x26e000,0x44397000,0x44398000,0x44399000,0x4439a000,0x4439b000};
for(unsigned i=0;i<10;i++)if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;
for(unsigned i=5;i<10;i++)if(!VirtualAlloc(recovered+pages[i],4096,MEM_COMMIT,PAGE_READWRITE))return 9;
'''.encode()
        data=pe.get_data(0x144700,0x2ac)
        text+=('{unsigned char b[]={'+','.join(map(str,data))+'};memcpy(image+0x144700,b,sizeof b);}\n').encode()
        text+=b'memcpy(image+0x277f50,"gamecontrollerdb.txt",21);memcpy(image+0x2724dc,"rb",3);\n'
        mapping={**{r:v[0] for r,v in IMPORTS.items()},0x198f4d:'SDL_JoystickEventState'}
        for r,alias in mapping.items():
            code=pe.get_data(r,6);target=r+6+int.from_bytes(code[2:],'little',signed=True)
            text+=('{unsigned char b[]={'+','.join(map(str,code))+'};memcpy(image+'+hex(r)+',b,6);void *p='+alias+';memcpy(image+'+hex(target)+',&p,8);}\n').encode()
        text+=r'''
unsigned total=0;unsigned counts[]={0,1,2,7,31,32,33,40};
for(unsigned d=0;d<8;d++)for(mode=0;mode<4;mode++){
devices=counts[d];unsigned saved_trace[1024],saved_calls=0;
for(unsigned native=0;native<2;native++){
state=native?image:recovered;memset(state+0x44397000,0xa5,0x5000);calls=0;bad=0;
if(native)((void (*)(void))(image+0x144700))();else sub_140144700();
if(bad)return 1;
if(!native){memcpy(saved_trace,trace,sizeof trace);saved_calls=calls;}
else if(calls!=saved_calls||memcmp(trace,saved_trace,calls*4)||memcmp(image+0x44397000,recovered+0x44397000,0x5000)){printf("pad mismatch devices %u mode %u calls %u/%u\n",devices,mode,calls,saved_calls);return 2;}}
total++;}printf("%u native joystick startup/state/ownership/high-pointer cases pass\n",total);return 0;}
'''.encode()
        out=PROJECT/'reports/client-joystick-startup-20261002';out.mkdir(exist_ok=True,parents=True)
        fixture=out/'joystick_fixture.c';fixture.write_bytes(text);exe=fixture.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)

if __name__=='__main__':unittest.main()
