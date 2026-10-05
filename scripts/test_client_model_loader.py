"""Compare complete CMO loader empty/invalid files and filename construction."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
import capstone
import re
from repair_client_model_loader import PROJECT,MARKER,repair

class ModelLoader(unittest.TestCase):
 def test_native_loader(self):
  s=read_client_source()
  if b'void            sub_1400E9A60(' not in s:s,_=repair(s)
  a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER));body=s[a:b]
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
  native=pe.get_data(0xe9a60,0xd5f)
  dis=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);dis.detail=True
  pages={0xe9000,0xea000,0x20b000,0x144000,0x1f8000,0x302000}
  for index in re.findall(rb'\b\d{9}\b',body):
   at=0x404a6c+4*int(index)
   if at<0x74794000:pages.add(at&~4095)
  for i in dis.disasm(native,0xe9a60):
   for op in i.operands:
    if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:pages.add((i.address+i.size+op.mem.disp)&~4095)
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
static unsigned char *image;static unsigned *dword_140404A6C;static char *off_1402B2C88;static __m128i xmmword_140279870;
static unsigned calls,position;static uint64_t trace[256];static unsigned char file[512];static char wanted[64];
static __int64 sub_14020B8D8(char *p,const char *mode){if(strcmp(p,wanted)||strcmp(mode,"rb"))abort();trace[calls++]=1;return 0xabcdef123456ull;}
static size_t read_file(void *p,size_t size,size_t n,uintptr_t handle){if(handle!=0xabcdef123456ull||position+size*n>sizeof file)abort();uintptr_t at=(uintptr_t)p-(uintptr_t)image;trace[calls++]=at<0x74794000?at:0xffffffff;trace[calls++]=size;trace[calls++]=n;memcpy(p,file+position,size*n);position+=size*n;return n;}
static __int64 sub_14020B9E8(__int64 h){if(h!=0xabcdef123456ull)abort();trace[calls++]=2;return 0;}
static void sub_1401449C0(int a,int b){trace[calls++]=3;trace[calls++]=a;trace[calls++]=b;}
static int strcmp_sr(const char *a,const char *b){return strcmp(a,b);}
'''.encode()+body+r'''
static void thunk(unsigned char *p,void *f){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&f,8);p[10]=0xff;p[11]=0xe0;}
int main(void){image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;dword_140404A6C=(void*)(image+0x404a6c);
'''.encode()
  for page in sorted(pages):
   data=pe.get_data(page,4096)
   c+=('if(!VirtualAlloc(image+'+hex(page)+',4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n').encode()
   if data:c+=('{unsigned char b[]={'+','.join(map(str,data))+'};memcpy(image+'+hex(page)+',b,sizeof b);}\n').encode()
  for at,name in [(0x20b8d8,'sub_14020B8D8'),(0x20b9e8,'sub_14020B9E8'),(0x1449c0,'sub_1401449C0')]:c+=('thunk(image+'+hex(at)+','+name+');\n').encode()
  magic=int.from_bytes(pe.get_data(0x2b2c88,8),'little')-0x140000000
  c+=('off_1402B2C88=(char*)(image+'+hex(magic)+');uintptr_t m=(uintptr_t)off_1402B2C88;memcpy(image+0x2b2c88,&m,8);\n').encode()
  c+=r'''uintptr_t reader=(uintptr_t)read_file;memcpy(&dword_140404A6C[293250407],&reader,8);
uint64_t cookie=0x123456789abcdef;memcpy(image+0x3020a0,&cookie,8);unsigned char check[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,2,0x0f,0x0b,0xc3};memcpy(check+2,&cookie,8);memcpy(image+0x1f8b20,check,sizeof check);
unsigned count=0;for(unsigned length=1;length<49;length++)for(unsigned version=0;version<5;version++)for(unsigned bad=0;bad<2;bad++)for(unsigned populated=0;populated<2;populated++){
char name[64];for(unsigned j=0;j<length;j++)name[j]='a'+(j+version)%26;name[length]=0;sprintf(wanted,"data/model/%s.cmo",name);memset(file,0,sizeof file);memcpy(file,off_1402B2C88,4);if(bad)file[0]^=255;memcpy(file+4,&version,4);
if(populated){unsigned at=8;*(unsigned*)(file+at)=4;at+=4;for(unsigned j=0;j<4;j++){at+=12;if(version>=3)at+=8;at+=4;}*(unsigned*)(file+at)=2;at+=4;for(unsigned j=0;j<2;j++){unsigned n=3+j;*(unsigned*)(file+at)=n;at+=4;for(unsigned k=0;k<n;k++){*(unsigned*)(file+at)=k;at+=4;}at+=4;if(version>=2)at+=4;}at+=4;}
unsigned saved_calls,saved_position;uint64_t saved[256];unsigned output[32];for(unsigned original=0;original<2;original++){calls=position=0;if(original)((void(*)(int,int,char*))(image+0xe9a60))(1,-1,name);else sub_1400E9A60(1,-1,name);
if(!original){saved_calls=calls;saved_position=position;memcpy(saved,trace,calls*8);memcpy(output,&dword_140404A6C[177167565],56);memcpy(output+14,&dword_140404A6C[177495247],40);}else if(calls!=saved_calls||position!=saved_position||memcmp(saved,trace,calls*8)||memcmp(output,&dword_140404A6C[177167565],56)||memcmp(output+14,&dword_140404A6C[177495247],40)){printf("mismatch %u %u %u %u\n",length,version,bad,populated);return 1;}}count++;}
printf("%u complete native CMO filename/empty-and-populated-file/triangle-quad/invalid-magic/version/read-order/close/final-dispatch cases pass; file and final helper boundaries controlled\n",count);return 0;}
'''.encode()
  # Magic strings can live on another read-only page referenced through a pointer.
  c=c.replace(b'uintptr_t m=',('if(!VirtualAlloc(image+'+hex(magic&~4095)+',4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n{unsigned char b[]={'+','.join(map(str,pe.get_data(magic&~4095,4096)))+'};memcpy(image+'+hex(magic&~4095)+',b,sizeof b);}\nuintptr_t m=').encode())
  out=PROJECT/'reports/client-model-loader-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'model_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()
