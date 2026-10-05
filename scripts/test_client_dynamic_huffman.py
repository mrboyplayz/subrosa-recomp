"""Compare dynamic block parser with native control and table output."""
import random
from client_sources import read_client_source
import struct
import subprocess
import unittest
import zlib
import pefile
from repair_client_dynamic_huffman import PROJECT, MARKER, repair

class DynamicHuffman(unittest.TestCase):
    def test_native_parser(self):
        source=read_client_source()
        start=source.index(MARKER);end=source.index(b'//----- (',start+len(MARKER))
        if b'return sub_1401F8B20' in source[start:end]:source,_=repair(source)
        def region(marker):
            a=source.index(marker);return source[a:source.index(b'//----- (',a+len(marker))]
        builder=region(b'//----- (000000014016F730)').replace(b'sub_14016F730',b'sr_builder')
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        inputs=[];rng=random.Random(130)
        for k in range(128):
            raw=bytes(rng.randrange(2+k%63) for _ in range(4000+k*7))
            data=zlib.compress(raw,1+k%9)[2:-4]
            if (data[0]>>1)&3==2:inputs.append(data[:512].ljust(512,b'\0'))
        png=(PROJECT.parent/'font/vcr.png').read_bytes();a=8;idat=b''
        while a<len(png):
            n=struct.unpack('>I',png[a:a+4])[0]
            if png[a+4:a+8]==b'IDAT':idat+=png[a+8:a+8+n]
            a+=n+12
        if (idat[2]>>1)&3==2:inputs.append(idat[2:514].ljust(512,b'\0'))
        self.assertGreater(len(inputs),100)
        text=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
typedef uint64_t uint64;
static unsigned dword_140404A6C[19064471];static uintptr_t tls[2];static const char *error_text;
static uint64_t mock_gs(unsigned ignored){tls[0]=(uintptr_t)&error_text-16;return (uintptr_t)tls;}
#define __readgsqword mock_gs
/* Controlled native TLS boundary; template/isolation tested separately. */
static uint64_t sr_client_static_tls(void){return *(uint64_t *)(uintptr_t)__readgsqword(0x58);}
static void sub_1401FCD30(void *dest,int value,unsigned count){memset(dest,value,count);}
'''.encode()+builder+region(b'//----- (0000000140160350)')+region(b'//----- (000000014016FB90)')
        text+=r'''
static unsigned calls,failed_call;
static uint64_t sub_14016F730(uint64_t table,unsigned char *lengths,int count){calls++;if(calls==failed_call)return 0;return sr_builder(table,lengths,count);}
static unsigned char byte_14026FED0[32];
'''.encode()+region(MARKER)
        text+=('static unsigned char inputs[][512]={'+','.join('{'+','.join(map(str,i))+'}' for i in inputs)+'};\n').encode()
        text+=r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){
 unsigned char *image=VirtualAlloc(0,0x303000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
 unsigned pages[]={0x15c000,0x15d000,0x160000,0x16f000,0x1fc000,0x1f8000,0x26f000,0x302000};
 for(unsigned j=0;j<8;j++)if(!VirtualAlloc(image+pages[j],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 8;
'''.encode()
        data=pe.get_data(0x15cf70,0x489)
        text+=('{unsigned char b[]={'+','.join(map(str,data))+'};memcpy(image+0x15cf70,b,sizeof b);}\n').encode()
        order=pe.get_data(0x26fed0,32)
        text+=('{unsigned char b[]={'+','.join(map(str,order))+'};memcpy(image+0x26fed0,b,sizeof b);memcpy(byte_14026FED0,b,sizeof b);}\n').encode()
        text+=r'''
 thunk(image+0x160350,sub_140160350);thunk(image+0x16f730,sub_14016F730);
 thunk(image+0x16fb90,sub_14016FB90);thunk(image+0x1fcd30,sub_1401FCD30);
 /* Control only native TLS diagnostic sink, leaving parser and epilogue intact. */
 unsigned char *sink=image+0x15d3ac;uintptr_t error=(uintptr_t)&error_text,value=(uintptr_t)"bad codelengths";
 sink[0]=0x48;sink[1]=0xb8;memcpy(sink+2,&error,8);sink[10]=0x48;sink[11]=0xba;memcpy(sink+12,&value,8);
 sink[20]=0x48;sink[21]=0x89;sink[22]=0x10;sink[23]=0xe9;int32_t delta=0x15d3cf-(0x15d3ac+28);memcpy(sink+24,&delta,4);
 const uint64_t cookie=0x123456789abcdefULL;memcpy(image+0x3020a0,&cookie,8);
 unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
 FlushInstructionCache(GetCurrentProcess(),image,0x303000);
 unsigned checked=0;
 for(unsigned input=0;input<sizeof inputs/sizeof *inputs;input++)for(failed_call=0;failed_call<4;failed_call++)for(unsigned preload=0;preload<4;preload++){
  unsigned char contexts[2][4120];memset(contexts,0xa5,sizeof contexts);uint64_t values[2];unsigned call_counts[2];const char *errors[2];
  for(unsigned native=0;native<2;native++){
   unsigned char *context=contexts[native];uintptr_t begin=(uintptr_t)inputs[input]+1,end=(uintptr_t)inputs[input]+512;
   unsigned bits=5,buffer=inputs[input][0]>>3;
   for(unsigned j=0;j<preload;j++){buffer|=((unsigned)inputs[input][1+j])<<bits;bits+=8;begin++;}
   memcpy(context,&begin,8);memcpy(context+8,&end,8);memcpy(context+16,&bits,4);memcpy(context+20,&buffer,4);
   calls=0;error_text=NULL;
   values[native]=native?((uint64_t (*)(uint64_t))(image+0x15cf70))((uintptr_t)context):sub_14015CF70((uintptr_t)context);
   call_counts[native]=calls;errors[native]=error_text;
  }
  if(values[0]!=values[1]||call_counts[0]!=call_counts[1]||memcmp(contexts,contexts+1,sizeof contexts[0])||
     (!!errors[0]!=!!errors[1])||(errors[0]&&strcmp(errors[0],errors[1]))){printf("dynamic mismatch input %u fail %u preload %u return %llu/%llu calls %u/%u\n",input,failed_call,preload,values[0],values[1],call_counts[0],call_counts[1]);return 1;}
  checked++;
 }
 VirtualFree(image,0,MEM_RELEASE);printf("%u native dynamic block scratch/table/bit-consumption/builder-failure/return cases pass; TLS sink and callees controlled\n",checked);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-dynamic-huffman-20261002';out.mkdir(parents=True,exist_ok=True)
        fixture=out/'dynamic_fixture.c';fixture.write_bytes(text);exe=fixture.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout);(out/'stderr.txt').write_text(r.stderr)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)

if __name__=='__main__':unittest.main()
