"""Compare complete original quad extrusion, including vertices and connectivity."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
import capstone
import re
from repair_client_quad_extrusion import PROJECT,MARKER,repair
class QuadExtrusion(unittest.TestCase):
 def test_native_extrusion(self):
  s=read_client_source()
  if b'void            sub_140101220(' not in s:s,_=repair(s)
  a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER));body=s[a:b]
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True);native=pe.get_data(0x101220,0x2be)
  pages={0x101000,0x1f8000,0x302000,0x2b3000};d=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);d.detail=True
  for i in d.disasm(native,0x101220):
   for op in i.operands:
    if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:pages.add((i.address+i.size+op.mem.disp)&~4095)
  for n in re.findall(rb'\b\d{9}\b',body):
   at=0x404a6c+4*int(n)
   if at<0x74793000:pages.update([at&~4095,(at&~4095)+4096])
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <xmmintrin.h>
#include "defs.h"
static unsigned char *image;static unsigned *dword_140404A6C;
#define dword_1402B3674 (*(int*)(image+0x2b3674))
#define dword_1402B36B4 (*(int*)(image+0x2b36b4))
'''.encode()+body+r'''
int main(void){image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;dword_140404A6C=(void*)(image+0x404a6c);
'''.encode()
  for page in sorted(pages):
   data=pe.get_data(page,4096);c+=('if(!VirtualAlloc(image+'+hex(page)+',4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n').encode()
   if data:c+=('{unsigned char b[]={'+','.join(map(str,data))+'};memcpy(image+'+hex(page)+',b,sizeof b);}\n').encode()
  c+=r'''uint64_t cookie=0x123456789abcdef;memcpy(image+0x3020a0,&cookie,8);unsigned char check[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,2,0x0f,0x0b,0xc3};memcpy(check+2,&cookie,8);memcpy(image+0x1f8b20,check,sizeof check);
unsigned count=0,csr=_mm_getcsr();for(unsigned rounding=0;rounding<4;rounding++){_mm_setcsr((csr&~0x6000u)|(rounding<<13));for(unsigned scenario=0;scenario<256;scenario++)for(unsigned index=0;index<6;index++)for(unsigned alignment=0;alignment<4;alignment++){
float buffer[6],*offset=buffer+alignment;offset[0]=(int)(scenario%37)-18;offset[1]=(scenario%17)*0.00390625f;offset[2]=(int)(scenario%29-14)*0.0009765625f;unsigned vertex[50],quad[98],n,m;
for(unsigned original=0;original<2;original++){dword_140404A6C[177167565]=12;dword_140404A6C[178322641]=8;for(unsigned j=0;j<48;j++)((float*)&dword_140404A6C[177167567])[j]=(int)(j+scenario%17-12)*0.015625f;for(unsigned j=0;j<96;j++)dword_140404A6C[178322642+j]=(j+scenario)%12;
if(original)((void(*)(int,float*))(image+0x101220))(index,offset);else sub_140101220(index,offset);
if(!original){n=dword_140404A6C[177167565];m=dword_140404A6C[178322641];memcpy(vertex,&dword_140404A6C[177167565],sizeof vertex);memcpy(quad,&dword_140404A6C[178322641],sizeof quad);}else if(n!=dword_140404A6C[177167565]||m!=dword_140404A6C[178322641]||memcmp(vertex,&dword_140404A6C[177167565],sizeof vertex)||memcmp(quad,&dword_140404A6C[178322641],sizeof quad)){printf("mismatch %u %u %u %u\n",rounding,scenario,index,alignment);return 1;}}count++;}}
_mm_setcsr(csr);printf("%u complete native extrusion vertex/translation/connectivity/count/alignment/rounding cases pass\n",count);return 0;}
'''.encode()
  out=PROJECT/'reports/client-quad-extrusion-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'extrusion_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()
