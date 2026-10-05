"""Check SDL buffer-swap pointer forwarding and full return register."""
import struct
from client_sources import read_client_source
import subprocess
import unittest
import pefile
from repair_client_swap_window import PROJECT,MARKER,repair

class SwapWindow(unittest.TestCase):
    def test_native_argument(self):
        source=read_client_source()
        if b'sr_swap_window_import(window)' not in source:source,_=repair(source)
        a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b]
        body=body[body.index(b'__int64 sub_140198EF3'):]
        text=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
static unsigned char *state;static uintptr_t observed;static uint64_t response;
#define dword_140404A6C ((unsigned *)(state+0x404a6c))
static uint64_t sr_swap_window_import(void *p){observed=(uintptr_t)p;return response;}
'''.encode()+body+r'''
int main(void){unsigned char *image=VirtualAlloc(0,0x20fd0000,MEM_RESERVE,PAGE_NOACCESS);
state=image;if(!VirtualAlloc(image+0x20fc4000,4096,MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(image+0x198000,4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;
unsigned char bytes[]={0x48,0x83,0xec,0x28,0x48,0x8b,0x0d,0,0,0,0,0x48,0xb8,0,0,0,0,0,0,0,0,0xff,0xd0,0x48,0x83,0xc4,0x28,0xc3};
int32_t displacement=0x20fc47c8-(0x198000+11);memcpy(bytes+7,&displacement,4);void *fn=sr_swap_window_import;memcpy(bytes+13,&fn,8);memcpy(image+0x198000,bytes,sizeof bytes);
unsigned seed=991;for(unsigned i=0;i<2048;i++){
seed=seed*1664525+1013904223;uintptr_t window=((uint64_t)seed<<32)|i;memcpy(image+0x20fc47c8,&window,8);response=~window;
uint64_t result=sub_140198EF3();if(result!=response||observed!=window)return 1;
result=((uint64_t (*)(void))(image+0x198000))();if(result!=response||observed!=window)return 2;}
printf("2048 native window load/full SDL argument and return cases pass; SDL controlled\n");return 0;}
'''.encode()
        out=PROJECT/'reports/client-swap-window-20261002';out.mkdir(exist_ok=True,parents=True)
        fixture=out/'swap_fixture.c';fixture.write_bytes(text);exe=fixture.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11',str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)

if __name__=='__main__':unittest.main()
