"""Compare PNG filter output with original instructions over unaligned rows."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_startup_arguments import PROJECT
from repair_client_png_store_alignment import repair

class PngStoreAlignment(unittest.TestCase):
    def test_native_filter_rows(self):
        source = read_client_source()
        marker = b'//----- (000000014015E5F0)'
        a = source.index(marker); b = source.index(b'//----- (', a+len(marker))
        if b'sr_png_store' not in source[a:b]:
            source, _ = repair(source)
            a = source.index(marker); b = source.index(b'//----- (', a+len(marker))
        body = source[a:b]
        pe = pefile.PE(str(PROJECT.parent/'subrosa.exe'), fast_load=True)
        text = r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
typedef uint64_t uint64;
#define SR_VEC_PTR_LANES(w,v,t) ((t##TYPE *)(v))
#define SR_VEC_LANES(w,v,t) ((t##TYPE *)&(v))
typedef int8_t i8TYPE; typedef uint8_t u8TYPE;
typedef int16_t i16TYPE; typedef uint16_t u16TYPE;
typedef int32_t i32TYPE; typedef uint32_t u32TYPE;
typedef int64_t i64TYPE; typedef uint64_t u64TYPE;
static unsigned dword_140404A6C[19064471];
static unsigned char byte_140301848[8]={5,5,6,5,7,0,0,0};
static unsigned char byte_14026E768[24];
static uintptr_t tls[1],error_store[4];
static uint64_t mock_gs(unsigned x){tls[0]=(uintptr_t)error_store;return (uintptr_t)tls;}
#define __readgsqword mock_gs
/* Controlled native TLS boundary; template/isolation tested separately. */
static uint64_t sr_client_static_tls(void){return *(uint64_t *)(uintptr_t)__readgsqword(0x58);}
static uint64_t sr_path_malloc(uint64_t n){return (uintptr_t)malloc(n);}
static void sub_1401FC920(void *d,const void *s,size_t n){memcpy(d,s,n);}
static void sub_14023E640(char *a,char *b,int c){abort();}
'''.encode() + body + r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){
unsigned char *image=VirtualAlloc(0,0x303000,MEM_RESERVE,PAGE_NOACCESS);
if(!image)return 9;
if(!VirtualAlloc(image+0x15e000,0x2000,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 8;
if(!VirtualAlloc(image+0x1fc000,0x1000,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 8;
if(!VirtualAlloc(image+0x23a000,0x1000,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 8;
if(!VirtualAlloc(image+0x301000,0x1000,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 8;
'''.encode()
        raw = pe.get_data(0x15e5f0,0x1230)
        text += ('{unsigned char b[]={'+','.join(map(str,raw))+'};memcpy(image+0x15e5f0,b,sizeof b);}\n').encode()
        mapping=pe.get_data(0x301848,8)
        text += ('{unsigned char b[]={'+','.join(map(str,mapping))+'};memcpy(image+0x301848,b,8);memcpy(byte_140301848,b,8);}\n').encode()
        text += r'''
thunk(image+0x23acf8,sr_path_malloc);thunk(image+0x1fc920,sub_1401FC920);
unsigned count=0;
for(unsigned width=17;width<82;width++)for(unsigned channels=1;channels<=4;channels++)for(unsigned filter=0;filter<5;filter++){
unsigned height=4,n=width*channels,bytes=(n+1)*height;
unsigned char *input=malloc(bytes+16);uint32_t state=width*999+channels*11+filter;
for(unsigned row=0;row<height;row++){input[row*(n+1)]=filter;for(unsigned j=0;j<n;j++){state=state*1664525u+1013904223u;input[row*(n+1)+1+j]=state>>24;}}
int header[4]={width,height,channels,channels};uint64_t ctx[5]={(uintptr_t)header,0,0,0,8};
uint64_t r=sub_14015E5F0(ctx,input,bytes,channels,width,height,8,0);void *out=(void *)(uintptr_t)ctx[3];ctx[3]=0;
uint64_t native=((uint64_t (*)(uint64_t*,unsigned char*,unsigned,int,int,unsigned,int,int))(image+0x15e5f0))(ctx,input,bytes,channels,width,height,8,0);
if(r!=native||r!=1||memcmp(out,(void*)(uintptr_t)ctx[3],n*height)){printf("mismatch width=%u channels=%u filter=%u\n",width,channels,filter);return 1;}
free(out);free((void*)(uintptr_t)ctx[3]);free(input);count++;
}printf("%u original PNG filter output comparisons pass\n",count);return 0;}
'''.encode()
        out=PROJECT/'reports/client-png-alignment-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        fixture=out/'png.c';fixture.write_bytes(text);exe=fixture.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)

if __name__=='__main__':unittest.main()
