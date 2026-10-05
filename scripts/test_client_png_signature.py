"""Compare PNG byte signature and buffer/refill flow with native instructions."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_ui_return import PROJECT

class PNGSignature(unittest.TestCase):
    def test_native_signature(self):
        source=read_client_source()
        marker=b'//----- (000000014015CE80)';start=source.index(marker);end=source.index(b'//----- (',start+len(marker))
        body=source[start:end]
        self.assertIn(b'  unsigned char v4; // cl',body)
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        code=pe.get_data(0x15ce80,0xbd)
        text=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
typedef unsigned char _BYTE;typedef unsigned _DWORD;typedef uint64_t _QWORD;typedef uint64_t uint64;
static unsigned dword_140404A6C[19064471];static uintptr_t slot,tls[4];
static uint64_t mock_gs(unsigned ignored){tls[0]=(uintptr_t)&slot-16;return (uintptr_t)tls;}
#define __readgsqword mock_gs
/* Controlled native TLS boundary; template/isolation tested separately. */
static uint64_t sr_client_static_tls(void){return *(uint64_t *)(uintptr_t)__readgsqword(0x58);}
static unsigned char byte_14026E760[8]={137,80,78,71,13,10,26,10};
static unsigned char input[8];static unsigned filled,refills,chunk;
static uint64_t sub_14016D910(uint64_t context){
 unsigned char *p=(void *)(uintptr_t)context;unsigned amount=8-filled;if(amount>chunk)amount=chunk;
 refills++;memcpy(p+56,input+filled,amount);filled+=amount;
 uintptr_t begin=(uintptr_t)p+56,end=begin+amount;memcpy(p+192,&begin,8);memcpy(p+200,&end,8);return amount;
}
'''.encode()+body+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){
 unsigned char *image=VirtualAlloc(0,0x270000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
 unsigned pages[]={0x15c000,0x16d000,0x26e000};
 for(unsigned i=0;i<3;i++)if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 8;
'''.encode()
        text+=('{unsigned char b[]={'+','.join(map(str,code))+'};memcpy(image+0x15ce80,b,sizeof b);}\n').encode()
        text+=r'''
 memcpy(image+0x26e760,byte_14026E760,8);thunk(image+0x16d910,sub_14016D910);
 /* Fixture boundary replaces only the TLS error-string sink with an EAX=0
    jump to the original restore/return epilogue. Signature and refill code
    are unchanged; native TLS side effects are outside this fixture. */
 image[0x15cf08]=0x31;image[0x15cf09]=0xc0;image[0x15cf0a]=0xe9;
 int32_t delta=0x15cef8-0x15cf0f;memcpy(image+0x15cf0b,&delta,4);
 FlushInstructionCache(GetCurrentProcess(),image,0x270000);
 unsigned cases=0;
 for(unsigned variant=0;variant<2049;variant++)for(chunk=1;chunk<=8;chunk++)for(unsigned prefix=0;prefix<=8;prefix++){
  memcpy(input,byte_14026E760,8);if(variant<2048)input[variant/256]=(unsigned char)variant;
  uint64_t values[2],positions[2];unsigned counts[2];
  for(unsigned native=0;native<2;native++){
   unsigned char context[224]={0};uintptr_t begin=(uintptr_t)context+56,end=begin+prefix;
   memcpy(context+56,input,prefix);memcpy(context+192,&begin,8);memcpy(context+200,&end,8);
   *(unsigned *)(context+48)=1;filled=prefix;refills=0;slot=0;
   values[native]=native?((uint64_t (*)(uint64_t))(image+0x15ce80))((uintptr_t)context):sub_14015CE80((uintptr_t)context);
   uintptr_t current;memcpy(&current,context+192,8);positions[native]=current-begin;counts[native]=refills;
  }
  if(values[0]!=values[1]||positions[0]!=positions[1]||counts[0]!=counts[1]){printf("PNG mismatch variant %u chunk %u prefix %u\n",variant,chunk,prefix);return 1;}cases++;
 }
 VirtualFree(image,0,MEM_RELEASE);printf("%u native PNG signature byte/prefix/refill/return cases pass; TLS error sink controlled\n",cases);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-ui-return-20261002';out.mkdir(parents=True,exist_ok=True)
        fixture=out/'png_signature.c';fixture.write_bytes(text);exe=fixture.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11',str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=20)
        (out/'png-signature-stdout.txt').write_text(r.stdout);(out/'png-signature-stderr.txt').write_text(r.stderr)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)

if __name__=='__main__':unittest.main()
