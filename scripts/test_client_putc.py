"""Compare native putc countdown, byte store and flush boundary."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_file_formatter import PROJECT
class Putc(unittest.TestCase):
 def test_native_countdown(self):
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
  source=read_client_source();m=b'//----- (000000014020BC54)';a=source.index(m);b=source.index(b'//----- (',a+len(m));body=source[a:b]
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
#define sub_140251DA8 flush
static uint64_t seen;static unsigned calls;
static uint64_t flush(unsigned char byte,uint64_t stream){seen=byte;calls++;return 0xffffffffu;}
'''.encode()+body+r'''
int main(void){unsigned char *image=VirtualAlloc(0,0x253000,MEM_RESERVE,PAGE_NOACCESS);VirtualAlloc(image+0x20b000,4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE);VirtualAlloc(image+0x251000,4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE);
'''.encode()
  c+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(0x20bc54,0x16)))+'};memcpy(image+0x20bc54,b,sizeof b); }\n').encode()
  c+=r'''void *f=flush;unsigned char *t=image+0x251da8;t[0]=0x48;t[1]=0xb8;memcpy(t+2,&f,8);t[10]=0xff;t[11]=0xe0;
unsigned initial[]={0,1,2,100,0xffffffffu,0x80000000u,0x7fffffffu,0x80000001u};unsigned count=0;
for(unsigned n=0;n<8;n++)for(unsigned byte=0;byte<256;byte++){unsigned char bytes[2][16],streams[2][48];uint64_t results[2],saved_seen;unsigned saved_calls;for(unsigned native=0;native<2;native++){memset(bytes[native],0xa5,16);memset(streams[native],0xa5,48);unsigned char *cursor=bytes[native]+4;memcpy(streams[native],&cursor,8);memcpy(streams[native]+16,&initial[n],4);calls=0;seen=0;results[native]=native?((uint64_t(*)(unsigned char,uint64_t))(image+0x20bc54))(byte,(uintptr_t)streams[native]):unknown_libname_207(byte,(uintptr_t)streams[native]);uint64_t offset=*(uint64_t*)streams[native]-(uintptr_t)bytes[native];memcpy(streams[native],&offset,8);if(!native){saved_seen=seen;saved_calls=calls;}else if(results[0]!=results[1]||calls!=saved_calls||seen!=saved_seen||memcmp(streams[0],streams[1],48)||memcmp(bytes[0],bytes[1],16)){printf("putc mismatch %u %u\n",n,byte);return 1;}}count++;}printf("%u native putc sign/store/flush cases pass; flush mocked\n",count);return 0;}
'''.encode()
  out=PROJECT/'reports/client-putc-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'putc_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()
