"""Compare prepared Huffman tables and returns with original native builder."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_huffman import PROJECT, MARKER, repair

class Huffman(unittest.TestCase):
    def test_native_builder(self):
        source=read_client_source()
        start=source.index(MARKER);end=source.index(b'//----- (',start+len(MARKER))
        if b'return sub_1401F8B20' in source[start:end]:source,_=repair(source)
        start=source.index(MARKER);end=source.index(b'//----- (',start+len(MARKER));body=source[start:end]
        self.assertIn(b'unsigned int v27[17]',body)
        self.assertEqual(body.count(b'return 0;'),2);self.assertEqual(body.count(b'return 1;'),1)
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        data=pe.get_data(0x16f730,0x2a0)
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
'''.encode()+body+r'''
static unsigned native_error;
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
static void sink(unsigned char *image,unsigned rva,unsigned code,unsigned epilogue){
 unsigned char *a=image+rva;uintptr_t target=(uintptr_t)&native_error;
 a[0]=0x48;a[1]=0xba;memcpy(a+2,&target,8);a[10]=0xc7;a[11]=0x02;memcpy(a+12,&code,4);
 a[16]=0x31;a[17]=0xc0;a[18]=0xe9;int32_t jump=epilogue-(rva+23);memcpy(a+19,&jump,4);
}
static uint64_t state=0x123456789abcdefULL;
static unsigned random_u32(void){state^=state<<13;state^=state>>7;state^=state<<17;return (unsigned)state;}
static unsigned checked;
static int compare(unsigned char *image,unsigned char *lengths,int count){
 unsigned char tables[2][2080];memset(tables,0xa5,sizeof tables);uint64_t values[2];
 native_error=0;error_text=NULL;
 values[0]=sub_14016F730((uintptr_t)(tables[0]+16),lengths,count);
 unsigned expected_error=error_text?(strcmp(error_text,"bad sizes")==0?1:2):0;
 values[1]=((uint64_t (*)(uint64_t,unsigned char *,int))(image+0x16f730))((uintptr_t)(tables[1]+16),lengths,count);
 if(values[0]!=values[1]||native_error!=expected_error||memcmp(tables,tables+1,sizeof tables[0])){
  printf("Huffman mismatch case %u count %d return %llu/%llu error %u/%u\n",checked,count,values[0],values[1],expected_error,native_error);return 0;
 }
 checked++;return 1;
}
int main(void){
 unsigned char *image=VirtualAlloc(0,0x303000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
 unsigned pages[]={0x16f000,0x1fc000,0x1f8000,0x302000};
 for(unsigned j=0;j<4;j++)if(!VirtualAlloc(image+pages[j],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 8;
'''.encode()
        text+=('{unsigned char b[]={'+','.join(map(str,data))+'};memcpy(image+0x16f730,b,sizeof b);}\n').encode()
        text+=r'''
 thunk(image+0x1fcd30,sub_1401FCD30);
 /* Native TLS diagnostics are controlled fixture boundaries; original
    construction, error branches and restore/return paths remain intact. */
 sink(image,0x16f982,2,0x16f95b);sink(image,0x16f9a9,1,0x16f963);
 const uint64_t cookie=0x123456789abcdefULL;memcpy(image+0x3020a0,&cookie,8);
 unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};
 memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
 FlushInstructionCache(GetCurrentProcess(),image,0x303000);
 unsigned char lengths[288]={0};
 if(!compare(image,lengths,-1)||!compare(image,lengths,0)||!compare(image,lengths,288))return 1;
 for(unsigned i=0;i<288;i++)lengths[i]=i<144?8:i<256?9:i<280?7:8;
 if(!compare(image,lengths,288))return 1;
 memset(lengths,5,32);if(!compare(image,lengths,32))return 1;
 for(unsigned len=1;len<=15;len++)for(unsigned n=1;n<=288;n++){
  memset(lengths,len,n);if(!compare(image,lengths,n))return 1;
 }
 for(unsigned pattern=0;pattern<2048;pattern++){
  unsigned n=random_u32()%289;for(unsigned i=0;i<n;i++)lengths[i]=random_u32()%16;
  if(!compare(image,lengths,n))return 1;
 }
 for(unsigned pattern=0;pattern<2048;pattern++){
  unsigned n=2,target=2+random_u32()%287;lengths[0]=lengths[1]=1;
  while(n<target){unsigned chosen=random_u32()%n;if(lengths[chosen]>=15)continue;lengths[n++]=++lengths[chosen];}
  /* Randomize symbol ordering, preserving a complete valid prefix tree. */
  for(unsigned i=0;i<n;i++){unsigned j=random_u32()%n;unsigned char temp=lengths[i];lengths[i]=lengths[j];lengths[j]=temp;}
  if(!compare(image,lengths,n))return 1;
 }
 VirtualFree(image,0,MEM_RELEASE);printf("%u native Huffman table/guard-byte/success/failure/full-width-return comparisons pass; TLS diagnostic sinks controlled\n",checked);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-huffman-20261002';out.mkdir(parents=True,exist_ok=True)
        fixture=out/'huffman_fixture.c';fixture.write_bytes(text);exe=fixture.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout);(out/'stderr.txt').write_text(r.stderr)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)

if __name__=='__main__':unittest.main()
