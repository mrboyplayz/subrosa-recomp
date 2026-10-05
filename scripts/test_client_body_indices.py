"""Compare complete native body builder, including empty-count signed offsets."""
import subprocess
from client_sources import read_client_source
import unittest
import re
import pefile
import capstone
from repair_client_body_indices import PROJECT,MARKER,repair
class BodyIndices(unittest.TestCase):
 def test_native_body(self):
  s=read_client_source()
  if b'v31 = (int32_t)' not in s:s,_=repair(s)
  a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER));body=s[a:b]
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True);native=pe.get_data(0x5b840,0x45d)
  pages={0x5b000,0x144000};d=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);d.detail=True
  for i in d.disasm(native,0x5b840):
   for op in i.operands:
    if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:pages.add((i.address+i.size+op.mem.disp)&~4095)
  for n in re.findall(rb'\b\d{9}\b',body):
   at=0x404a6c+4*int(n)
   if at<0x74792000:pages.update([(at&~4095)-4096,at&~4095,(at&~4095)+4096,(at&~4095)+8192])
  at=0x404a6c+4*432531270;pages.update(range(at&~4095,(at+7*9240+8191)&~4095,4096))
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
static unsigned char *image;static unsigned *dword_140404A6C;static unsigned calls,trace[2];
static double sub_1401449C0(int a,int b){calls++;trace[0]=a;trace[1]=b;return 0;}
'''.encode()+body+r'''
int main(void){image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;dword_140404A6C=(void*)(image+0x404a6c);
'''.encode()
  for page in sorted(pages):
   data=pe.get_data(page,4096);c+=('if(!VirtualAlloc(image+'+hex(page)+',4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n').encode()
   if data:c+=('{unsigned char b[]={'+','.join(map(str,data))+'};memcpy(image+'+hex(page)+',b,sizeof b);}\n').encode()
  c+=r'''unsigned char thunk[]={0x48,0xb8,0,0,0,0,0,0,0,0,0xff,0xe0};uintptr_t h=(uintptr_t)sub_1401449C0;memcpy(thunk+2,&h,8);memcpy(image+0x1449c0,thunk,sizeof thunk);
unsigned total=0;static unsigned vertex[128],tri[200],uv[512],flags[128],saved_trace[2],saved_counts[4];
for(unsigned type=1;type<=6;type++)for(unsigned vertices=0;vertices<10;vertices++)for(unsigned faces=0;faces<=32;faces++)for(unsigned shape=0;shape<2;shape++){
unsigned at=2310*type;dword_140404A6C[at+432531270]=vertices;for(unsigned j=0;j<30;j++)dword_140404A6C[at+432531271+j]=0x3f000000+j*31+vertices;dword_140404A6C[at+432532039]=faces;
for(unsigned j=0;j<faces;j++){dword_140404A6C[at+432532040+6*j]=shape?4:3;for(unsigned k=0;k<4;k++)dword_140404A6C[at+432532041+6*j+k]=vertices?(j+k)%vertices:0;}
for(unsigned original=0;original<2;original++){calls=0;memset(&dword_140404A6C[177167565],0xa5,sizeof vertex);memset(&dword_140404A6C[177495247],0x5a,sizeof tri);memset(&dword_140404A6C[178011217],0xc3,sizeof uv);memset(&dword_140404A6C[178207953],0xb4,sizeof flags);
if(original)((void(*)(int,int))(image+0x5b840))(0x100+type,type);else sub_14005B840(0x100+type,type);
unsigned counts[]={dword_140404A6C[177167565],dword_140404A6C[177495247],dword_140404A6C[178322641],dword_140404A6C[178519250]};
if(!original){if(calls!=1)return 2;memcpy(saved_trace,trace,8);memcpy(saved_counts,counts,16);memcpy(vertex,&dword_140404A6C[177167565],sizeof vertex);memcpy(tri,&dword_140404A6C[177495247],sizeof tri);memcpy(uv,&dword_140404A6C[178011217],sizeof uv);memcpy(flags,&dword_140404A6C[178207953],sizeof flags);}else if(calls!=1||memcmp(saved_trace,trace,8)||memcmp(saved_counts,counts,16)||memcmp(vertex,&dword_140404A6C[177167565],sizeof vertex)||memcmp(tri,&dword_140404A6C[177495247],sizeof tri)||memcmp(uv,&dword_140404A6C[178011217],sizeof uv)||memcmp(flags,&dword_140404A6C[178207953],sizeof flags)){printf("mismatch %u %u %u %u\n",type,vertices,faces,shape);return 1;}}total++;}
printf("%u complete native body vertex/quad/face-count/signed-offset/texture/attribute/guard/final-dispatch cases pass; final upload helper controlled\n",total);return 0;}
'''.encode()
  out=PROJECT/'reports/client-body-indices-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'body_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()
