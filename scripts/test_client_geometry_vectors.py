"""Compare full native convex-weight helper across SSE tails and unaligned buffers."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_geometry_vectors import PROJECT,MARKER,repair
class GeometryVectors(unittest.TestCase):
 def test_native_weights(self):
  s=read_client_source();a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER))
  if b'*(__m128 *)' in s[a:b]:s,_=repair(s)
  a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER));body=s[a:b];pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <emmintrin.h>
#include "defs.h"
#include "vector_views.h"
#include "client_export_helpers.h"
#include <math.h>
'''.encode()+body+r'''
int main(void){unsigned char *image=VirtualAlloc(0,0x281000,MEM_RESERVE,PAGE_NOACCESS);VirtualAlloc(image+0x2e000,4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE);VirtualAlloc(image+0x270000,0x11000,MEM_COMMIT,PAGE_READWRITE);
'''.encode()
  for r,size in [(0x2e730,0x6c0),(0x270000,0x11000)]:c+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(r,size)))+'};memcpy(image+'+hex(r)+',b,sizeof b); }\n').encode()
  c+=r'''unsigned counts[]={0,1,2,3,4,5,15,16,17,20,31,32},count=0,seed=0x19237,savedcsr=_mm_getcsr();unsigned char initial_out[256],initial_positions[512],output[2][256],positions[2][512];float center_initial[3]={0.3f,-0.25f,1.0f},center[2][3];
for(unsigned mode=0;mode<4;mode++)for(unsigned n=0;n<12;n++)for(unsigned skew=0;skew<16;skew++)for(unsigned shape=0;shape<3;shape++){unsigned size=counts[n];memset(initial_out,0xa5,256);memset(initial_positions,0xa5,512);for(unsigned j=0;j<size;j++){float zero=0;memcpy(initial_out+32+skew+j*4,&zero,4);for(unsigned k=0;k<3;k++){seed=seed*1664525u+1013904223u;float value=shape==0?0.0f:shape==1?(float)(int)(j+k)*0.25f:((float)((int)(seed%8192)-4096))*0.0078125f;memcpy(initial_positions+32+((skew+5)%16)+12*j+4*k,&value,4);}}
for(unsigned native=0;native<2;native++){memcpy(output[native],initial_out,256);memcpy(positions[native],initial_positions,512);memcpy(center[native],center_initial,12);_mm_setcsr(0x1f80|(mode<<13));if(native)((uint64_t(*)(uint64_t,int,uint64_t,float*))(image+0x2e730))((uintptr_t)(output[native]+32+skew),size,(uintptr_t)(positions[native]+32+((skew+5)%16)),center[native]);else sub_14002E730((uintptr_t)(output[native]+32+skew),size,(uintptr_t)(positions[native]+32+((skew+5)%16)),center[native]);}
if(memcmp(output[0],output[1],256)||memcmp(positions[0],positions[1],512)||memcmp(center[0],center[1],12)){printf("geometry mismatch mode %u size %u skew %u shape %u\n",mode,size,skew,shape);return 1;}count++;}_mm_setcsr(savedcsr);printf("%u native convex-weight output/input/guard cases pass; incidental unused RAX excluded\n",count);return 0;}
'''.encode()
  out=PROJECT/'reports/client-geometry-vectors-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'geometry_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60);(out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()
