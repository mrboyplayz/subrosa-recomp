"""Compare full ITM loader reads, allocations, records and target item identity."""
import subprocess
from client_sources import read_client_source
import unittest
import re
import pefile
import capstone
from repair_client_item_header import PROJECT,MARKER,repair
class ItemHeader(unittest.TestCase):
 def test_native_item_loader(self):
  s=read_client_source()
  if b'_DWORD Buffer; // native four-byte header object' not in s:s,_=repair(s)
  a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER));body=s[a:b]
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True);native=pe.get_data(0xe7f80,0x5f5)
  pages={0xe7000,0xe8000,0x20b000,0x20c000,0x23a000,0x1fc000};d=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);d.detail=True
  for i in d.disasm(native,0xe7f80):
   for op in i.operands:
    if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:pages.add((i.address+i.size+op.mem.disp)&~4095)
  for n in re.findall(rb'\b\d{9}\b',body):
   at=0x404a6c+4*int(n)
   if at<0x74793000:pages.update([at&~4095,(at&~4095)+4096])
  types=0x404a6c+4*278521297
  pages.update(range(types&~4095,((types+16*5072+4095)&~4095),4096))
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
static unsigned char *image;static unsigned *dword_140404A6C;static unsigned char arena[4096],file[1024];static unsigned used,pos,calls;static uint64_t trace[512];
static __int64 sub_14020B8D8(char *p,const char *mode){if(strcmp(p,"fixture.itm")||strcmp(mode,"rb"))abort();trace[calls++]=1;return 0xabcdef123456ull;}
static size_t fread_sr(void *p,size_t n,size_t count,FILE *h){if((uintptr_t)h!=0xabcdef123456ull||pos+n*count>sizeof file)abort();uintptr_t at=(uintptr_t)p-(uintptr_t)image,a=(uintptr_t)p-(uintptr_t)arena;trace[calls++]=at<0x74794000?at:(a<sizeof arena?0x80000000ull+a:0xffffffff);trace[calls++]=n;trace[calls++]=count;memcpy(p,file+pos,n*count);pos+=n*count;return count;}
static __int64 sr_path_malloc(size_t n){trace[calls++]=2;trace[calls++]=n;unsigned at=used;used+=(n+15)&~15u;if(n==0)used+=16;if(used>sizeof arena)abort();return (__int64)(uintptr_t)(arena+at);}
static void fake_free(void *p){trace[calls++]=3;trace[calls++]=p?(uintptr_t)p-(uintptr_t)arena:0xffffffff;}
#define free fake_free
static __int64 sub_14020B9E8(__int64 h){if(h!=0xabcdef123456ull)abort();trace[calls++]=4;return 0;}
static __m128i *sub_1401FC920(__m128i *p,const __m128i *q,int n){memcpy(p,q,n);return p;}
'''.encode()+body+r'''
static void thunk(unsigned char *p,void *f){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&f,8);p[10]=0xff;p[11]=0xe0;}
static unsigned at;static void u(unsigned v){memcpy(file+at,&v,4);at+=4;}static void f(float v){memcpy(file+at,&v,4);at+=4;}
int main(void){image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;dword_140404A6C=(void*)(image+0x404a6c);
'''.encode()
  for page in sorted(pages):
   data=pe.get_data(page,4096);c+=('if(!VirtualAlloc(image+'+hex(page)+',4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n').encode()
   if data:c+=('{unsigned char b[]={'+','.join(map(str,data))+'};memcpy(image+'+hex(page)+',b,sizeof b);}\n').encode()
  for at,name in [(0x20b8d8,'sub_14020B8D8'),(0x20c0c8,'fread_sr'),(0x20b9e8,'sub_14020B9E8'),(0x23ace4,'fake_free'),(0x23acf8,'sr_path_malloc'),(0x1fc920,'sub_1401FC920')]:c+=('thunk(image+'+hex(at)+','+name+');\n').encode()
  c+=r'''unsigned count=0;static unsigned char records[16*5072],memory[4096],faces[128];static uint64_t saved[512];unsigned saved_calls,saved_pos,saved_used;
for(unsigned index=0;index<16;index++)for(unsigned vertices=0;vertices<9;vertices++)for(unsigned markers=0;markers<4;markers++)for(unsigned shape=0;shape<3;shape++){
at=0;memset(file,0,sizeof file);u(index?0x12345678:1);for(unsigned j=0;j<3;j++)f(0.03125f);for(unsigned j=0;j<3;j++)f(0.125f);u(markers);for(unsigned j=0;j<markers;j++){u(j);f(0.125f);f(0.25f);f(0.375f);}u(vertices);for(unsigned j=0;j<vertices;j++){f(j*0.03125f);f(j*0.015625f);f(j*0.0078125f);f(j*0.0625f);f(j*0.125f);}u(vertices>=4?2:0);if(vertices>=4)for(unsigned j=0;j<2;j++){u(shape==0?3:4);u(0);u(1);u(2);if(shape!=0)u(3);}
for(unsigned original=0;original<2;original++){calls=pos=used=0;memset(arena,0xa5,sizeof arena);memset(&dword_140404A6C[278521297],0,16*5072);memset(&dword_140404A6C[177495247],0,132);dword_140404A6C[177544400]=0;
if(original)((void(*)(int,char*))(image+0xe7f80))(index,"fixture.itm");else sub_1400E7F80(index,"fixture.itm");
if(!original){saved_calls=calls;saved_pos=pos;saved_used=used;memcpy(saved,trace,calls*8);memcpy(records,&dword_140404A6C[278521297],sizeof records);memcpy(memory,arena,sizeof memory);memcpy(faces,&dword_140404A6C[177495248],sizeof faces);}else if(calls!=saved_calls||pos!=saved_pos||used!=saved_used||memcmp(saved,trace,calls*8)||memcmp(records,&dword_140404A6C[278521297],sizeof records)||memcmp(memory,arena,sizeof memory)||memcmp(faces,&dword_140404A6C[177495248],sizeof faces)){printf("mismatch %u %u %u %u\n",index,vertices,markers,shape);return 1;}}count++;}
printf("%u complete native ITM header/item-index/read-order/allocator/vertex-UV/triangle-quad/marker/record/guard cases pass; file and allocator boundaries controlled\n",count);return 0;}
'''.encode()
  out=PROJECT/'reports/client-item-header-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'item_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()
