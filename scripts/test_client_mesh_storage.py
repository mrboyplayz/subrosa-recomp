"""Compare mesh cursor LEAs and the complete two-box position call sequence."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import pefile
from repair_client_mesh_storage import PROJECT,MARKER,repair

class MeshStorage(unittest.TestCase):
 def test_native_storage_and_position(self):
  s=read_client_source()
  if b'_DWORD sr_mesh_position[3]' not in s:s,_=repair(s)
  a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER));r=s[a:b]
  expressions=[re.search(rb'\b'+n+rb' = ([^;]+);',r)[1] for n in [b'v82',b'v196',b'v200']]
  m=b'//----- (00000001400636E0)';a=s.index(m);b=s.index(b'//----- (',a+len(m));paired=s[a:b]
  expressions.append(re.search(rb'\bv187 = ([^;]+);',paired)[1])
  a=r.index(b'  if ( v2 == 1 )');b=r.index(b'  if ( (int)v195 < v16 )',a);position=r[a:b]
  a=r.index(b'  if ( v2 <= 6 )');b=r.index(b'  v80 =',a);indices=r[a:b]
  pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
static unsigned char *image;
#define dword_140404A6C ((unsigned *)(image+0x404a6c))
static unsigned scenario,calls;static unsigned trace[32];
static __int64 sub_140004140(__int64 p){memcpy(trace,(void *)(uintptr_t)p,32);calls++;return 0;}
static __m128i xmmword_140279020,xmmword_140279060,xmmword_140278FF0,xmmword_140279040;
static __int64 sub_140002D00(float *p,float x,float y,float z){memcpy(trace+6*calls,p,12);memcpy(trace+6*calls+3,&x,4);memcpy(trace+6*calls+4,&y,4);memcpy(trace+6*calls+5,&z,4);calls++;
 unsigned a=0x3f000000+scenario*31,b=0xbf000000+scenario*37;memcpy(p,&a,4);memcpy(p+2,&b,4);return 0;}
static void recovered_position(void){_DWORD sr_mesh_position[3];unsigned v2=1;int v16;
'''.encode()+position+b'}\n'
  c+=b'static void recovered_indices(unsigned v2){__m128i sr_mesh_indices[2],v79;unsigned v16;'+indices+b'; }\n'
  for n,e in enumerate(expressions):c+=b'static void *recovered'+str(n).encode()+b'(__int64 v3,__int64 v195){__int64 v186=v195;return (void *)(uintptr_t)('+e+b');}\n'
  c+=r'''static void commit(unsigned at,unsigned size){unsigned start=at&~4095u;unsigned end=(at+size+4095u)&~4095u;if(!VirtualAlloc(image+start,end-start,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();}
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){image=VirtualAlloc((void*)0x300000000ull,0x54000000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;commit(0x1000,8192);commit(0x52e90000,0x700000);commit(0x2ab13000,0x10000);commit(0x2a91b000,4096);commit(0x63000,4096);commit(0x278000,8192);unsigned count=0;
'''.encode()
  native=[bytes.fromhex('41544989cc4989d0')+pe.get_data(0x628f0,8)+bytes.fromhex('4c01c24889d0415cc3'),
    bytes.fromhex('4989c8488d0c52')+pe.get_data(0x63454,8)+bytes.fromhex('4c01c0c3'),
    bytes.fromhex('41544989cc')+pe.get_data(0x634ab,8)+bytes.fromhex('4901d24c89d0415cc3'),
    bytes.fromhex('4989c8488d0c52')+pe.get_data(0x64f77,8)+bytes.fromhex('4c01c0c3')]
  for n,code in enumerate(native):
   c+=('{unsigned char b[]={'+','.join(map(str,code))+'};memcpy(image+0x1000,b,sizeof b);\n').encode()
   c+=r'''for(unsigned index=0;index<64;index++)for(unsigned skew=0;skew<16;skew++){int64_t v3=99776LL*index+skew,v195=index*13+skew,arg=(KIND==1||KIND==3)?v195:v3;void *a=((void*(*)(void*,int64_t))(image+0x1000))(image,arg),*b=FUNCTION(v3,v195);if(a!=b||((uintptr_t)a>>32)==0)return 1;unsigned char expected[16];for(unsigned i=0;i<16;i++)expected[i]=index*7+skew+i;memcpy(a,expected,16);if(memcmp(b,expected,16))return 2;count++;}}
'''.replace('KIND',str(n)).replace('FUNCTION','recovered'+str(n)).encode()
  for at,size in [(0x278000,4096),(0x279000,4096),(0x633d0,0x76)]:c+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(at,size)))+'};memcpy(image+'+hex(at)+',b,sizeof b);}\n').encode()
  c+=r'''unsigned char head[]={0x48,0x83,0xec,0x58},tail[]={0x48,0x83,0xc4,0x58,0xc3};memcpy(image+0x633cc,head,4);memcpy(image+0x63446,tail,5);thunk(image+0x2d00,sub_140002D00);
for(scenario=0;scenario<256;scenario++){unsigned saved[32],saved_calls;
for(unsigned native=0;native<2;native++){calls=0;memset(trace,0,sizeof trace);if(native)((void(*)(void))(image+0x633cc))();else recovered_position();if(!native){saved_calls=calls;memcpy(saved,trace,sizeof trace);}else if(calls!=saved_calls||memcmp(saved,trace,sizeof trace))return 3;}count++;}
unsigned char ih[]={0x55,0x48,0x81,0xec,0xc0,0,0,0,0x48,0x8d,0xac,0x24,0xa0,0,0,0},it[]={0x48,0x81,0xc4,0xc0,0,0,0,0x5d,0xc3};
memcpy(image+0x62831,ih,sizeof ih);memcpy(image+0x62864,it,sizeof it);thunk(image+0x4140,sub_140004140);
for(unsigned k=0;k<256;k++){for(unsigned j=0;j<8;j++)((unsigned *)(image+0x279020))[j%4]=k*31+j;for(unsigned j=0;j<4;j++)((unsigned *)(image+0x279060))[j]=k*47+j;
memcpy(&xmmword_140279020,image+0x279020,16);memcpy(&xmmword_140279060,image+0x279060,16);
calls=0;recovered_indices(0);unsigned saved[8];memcpy(saved,trace,32);if(calls!=1)return 4;calls=0;((void(*)(void))(image+0x62831))();if(calls!=1||memcmp(saved,trace,32))return 5;count++;}
printf("%u native mesh address/stride/high-pointer/position/shape-call/index-object cases pass; remaining mesh behavior excluded\n",count);return 0;}
'''.encode()
  c=c.replace(b'commit(0x1000,8192);',b'commit(0x1000,16384);')
  c=c.replace(b'commit(0x63000,4096);',b'commit(0x62000,8192);')
  blob=pe.get_data(0x62841,0x23)
  c=c.replace(b'unsigned char ih[]={',('{unsigned char b[]={'+','.join(map(str,blob))+'};memcpy(image+0x62841,b,sizeof b);}\nunsigned char ih[]={').encode())
  out=PROJECT/'reports/client-mesh-storage-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'mesh_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(result.returncode,0,result.stderr)
  result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_text(result.stdout);self.assertEqual(result.returncode,0,result.stdout+result.stderr)
if __name__=='__main__':unittest.main()
