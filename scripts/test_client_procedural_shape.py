"""Compare full native shape dispatch with controlled construction/rotation edges."""
import subprocess
from client_sources import read_client_source
import unittest
import re
import pefile
import capstone
from repair_client_procedural_shape import PROJECT,MARKER,repair
from repair_client_quad_shape import MARKER as QUAD_MARKER,repair as repair_quad
from repair_client_layered_shape import MARKER as LAYER_MARKER,repair as repair_layer
from repair_client_branch_shape import MARKER as BRANCH_MARKER,repair as repair_branch
class ProceduralShape(unittest.TestCase):
 def test_native_shape(self):
  s=read_client_source()
  if b'float sr_shape_matrix[9]' not in s:s,_=repair(s)
  if b'_DWORD sr_quad_matrix[9]' not in s:s,_=repair_quad(s)
  if b'_DWORD sr_layer_matrix[9]' not in s:s,_=repair_layer(s)
  if b'_DWORD sr_branch_matrix[9]' not in s:s,_=repair_branch(s)
  a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER));body=s[a:b]
  a=s.index(QUAD_MARKER);b=s.index(b'//----- (',a+len(QUAD_MARKER));quad=s[a:b]
  a=s.index(LAYER_MARKER);b=s.index(b'//----- (',a+len(LAYER_MARKER));layer=s[a:b]
  a=s.index(BRANCH_MARKER);b=s.index(b'//----- (',a+len(BRANCH_MARKER));branch=s[a:b]
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True);native=pe.get_data(0x4e6e0,0x1b5)
  pages={0x4e000,0x4f000,0x50000,0x56000,0x2000,0x3000,0x5000,0x6000,0x7b000,0x18c000,0x144000,0x1f8000,0x302000};d=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);d.detail=True
  for i in list(d.disasm(native,0x4e6e0))+list(d.disasm(pe.get_data(0x561c0,0x39a),0x561c0))+list(d.disasm(pe.get_data(0x4fdb0,0x4c5),0x4fdb0))+list(d.disasm(pe.get_data(0x18c340,0x360),0x18c340)):
   for op in i.operands:
    if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:pages.add((i.address+i.size+op.mem.disp)&~4095)
  for n in re.findall(rb'\b\d{9}\b',body+quad+layer+branch):
   at=0x404a6c+4*int(n)
   if at<0x74793000:pages.update([at&~4095,(at&~4095)+4096])
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <immintrin.h>
#include "defs.h"
#include "vector_views.h"
static unsigned char *image;static unsigned *dword_140404A6C;static __int128 xmmword_140278D30;static unsigned scenario,calls;static unsigned trace[128];
static void word(float x){memcpy(trace+calls++,&x,4);}
static void position(float *p){for(unsigned j=0;j<3;j++)word(p[j]);}
static void matrix(float *p){for(unsigned j=0;j<9;j++)word(p[j]);}
static void sub_140002D00(float *p,float x,float y,float z){trace[calls++]=1;position(p);word(x);word(y);word(z);p[2]=0.25f;dword_140404A6C[177495247]=scenario%9;}
static void sub_1400066B0(float *p,float *m,float x,float y,float z,int k){trace[calls++]=2;position(p);matrix(m);word(x);word(y);word(z);trace[calls++]=k;p[2]=0.125f;dword_140404A6C[177495247]=scenario%9;}
static void native_rotate(__int64 p,float *m,float angle){trace[calls++]=3;position(m);word(angle);for(unsigned j=0;j<9;j++)((float*)(uintptr_t)p)[j]=(int)(scenario%31+j-15)*0.03125f;}
static double sr_export_float_lane_container(uint64_t n){double x;memcpy(&x,&n,8);return x;}
static void sub_14007B2A0(__int64 p,float *m,double angle){float a;memcpy(&a,&angle,4);native_rotate(p,m,a);}
static void sub_1401449C0(int a,int b){trace[calls++]=4;trace[calls++]=a;trace[calls++]=b;}
static void sub_140003460(float *p,float x,float y,float z){trace[calls++]=5;position(p);word(x);word(y);word(z);unsigned n=scenario%5;dword_140404A6C[178322641]=n;for(unsigned j=0;j<n*4;j++)dword_140404A6C[178322642+j]=j;}
static void native_quad(float *p,float *m,float x,float y){trace[calls++]=6;position(p);matrix(m);word(x);word(y);dword_140404A6C[177495247]+=scenario%3;}
static void sub_1400054F0(float *p,float *m,double x,float y){float a;memcpy(&a,&x,4);native_quad(p,m,a,y);}
static void native_branch(float *p,float *m,float x,float y,float z){trace[calls++]=7;position(p);matrix(m);word(x);word(y);word(z);for(unsigned j=0;j<9;j++)m[j]=(int)(scenario%19+j-9)*0.03125f;p[0]=0.125f;p[2]=0.25f;dword_140404A6C[177495247]+=scenario%3;}
static __int64 sub_14018C6A0(float *p,float *m,double x,float y,float z){float a;memcpy(&a,&x,4);native_branch(p,m,a,y,z);return 0;}
'''.encode()+body+quad+layer+branch+r'''
static void thunk(unsigned char *p,void *f){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&f,8);p[10]=0xff;p[11]=0xe0;}
int main(void){image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;dword_140404A6C=(void*)(image+0x404a6c);
'''.encode()
  for page in sorted(pages):
   data=pe.get_data(page,4096);c+=('if(!VirtualAlloc(image+'+hex(page)+',4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n').encode()
   if data:c+=('{unsigned char b[]={'+','.join(map(str,data))+'};memcpy(image+'+hex(page)+',b,sizeof b);}\n').encode()
  for at,name in [(0x2d00,'sub_140002D00'),(0x3460,'sub_140003460'),(0x54f0,'native_quad'),(0x66b0,'sub_1400066B0'),(0x7b2a0,'native_rotate'),(0x18c6a0,'native_branch'),(0x1449c0,'sub_1401449C0')]:c+=('thunk(image+'+hex(at)+','+name+');\n').encode()
  c+=r'''memcpy(&xmmword_140278D30,image+0x278d30,16);uint64_t cookie=0x123456789abcdef;memcpy(image+0x3020a0,&cookie,8);unsigned char check[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,2,0x0f,0x0b,0xc3};memcpy(check+2,&cookie,8);memcpy(image+0x1f8b20,check,sizeof check);
unsigned count=0;for(scenario=0;scenario<256;scenario++)for(unsigned branch=0;branch<2;branch++){int a=10+branch;dword_140404A6C[283826981]=10;float x=(int)(scenario%31-15)*0.0625f,y=(scenario%17)*0.03125f,z=(scenario%23)*0.015625f;unsigned saved[128],out[54],saved_calls;
for(unsigned original=0;original<2;original++){calls=0;memset(&dword_140404A6C[178011345],0xa5,sizeof out);if(original)((void(*)(int,float,float,float))(image+0x4e6e0))(a,x,y,z);else sub_14004E6E0(a,x,y,z);
if(!original){saved_calls=calls;memcpy(saved,trace,calls*4);memcpy(out,&dword_140404A6C[178011345],sizeof out);}else if(calls!=saved_calls||memcmp(saved,trace,calls*4)||memcmp(out,&dword_140404A6C[178011345],sizeof out)){printf("mismatch %u %u\n",scenario,branch);return 1;}}count++;}
for(scenario=0;scenario<256;scenario++)for(unsigned kind=0;kind<3;kind++){unsigned saved[128],out[160],faces[64],colors[32],saved_calls,n;
for(unsigned original=0;original<2;original++){calls=0;dword_140404A6C[178322641]=0;memset(&dword_140404A6C[178011345],0xa5,sizeof out);memset(&dword_140404A6C[177495248],0x5a,sizeof faces);memset(&dword_140404A6C[178388178],0x3c,sizeof colors);if(original)((void(*)(int))(image+(kind==2?0x18c340:(kind?0x4fdb0:0x561c0))))(13);else if(kind==2)sub_14018C340(13);else if(kind)sub_14004FDB0(13);else sub_1400561C0(13);
if(!original){saved_calls=calls;n=dword_140404A6C[177495247];memcpy(saved,trace,calls*4);memcpy(out,&dword_140404A6C[178011345],sizeof out);memcpy(faces,&dword_140404A6C[177495248],sizeof faces);memcpy(colors,&dword_140404A6C[178388178],sizeof colors);}else if(calls!=saved_calls||n!=dword_140404A6C[177495247]||memcmp(saved,trace,calls*4)||memcmp(out,&dword_140404A6C[178011345],sizeof out)||memcmp(faces,&dword_140404A6C[177495248],sizeof faces)||memcmp(colors,&dword_140404A6C[178388178],sizeof colors)){printf("quad mismatch %u\n",scenario);return 2;}}count++;}
printf("%u complete native procedural/quad/layered/branch position/matrix/axis/rotation/shape-call/face-clear/triangulation/layer-attributes/final-dispatch cases pass; construction and rotation boundaries controlled\n",count);return 0;}
'''.encode()
  out=PROJECT/'reports/client-procedural-shape-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'shape_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()
