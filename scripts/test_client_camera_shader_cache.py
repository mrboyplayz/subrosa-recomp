"""Compare native shader-cache failure-stage log and return branches."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import pefile
from repair_client_camera_shader_cache import PROJECT,MARKER,repair
class CameraShaderCache(unittest.TestCase):
 def test_native_empty_and_logged_return(self):
  s=read_client_source();a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER))
  if b'return sub_1401F8B20' in s[a:b]:s,_=repair(s)
  a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER));body=s[a:b];pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
  c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
static unsigned char *image;static unsigned logs,fail_open,calls;static uint64_t closing,trace[64];
#define dword_140404A6C ((unsigned *)(image+0x404a6c))
static __int64 gl(){abort();}
static __int64 sub_14004C4E0(int index,__int64 v,__int64 f,__int64 g){if(logs)strcpy((char*)image+0x115b0bc0,"shader log");return 0;}
static __int64 sub_14020B8D8(const char *filename,const char *mode){if(strcmp(filename,"shaderoutput.txt")||strcmp(mode,"wb"))abort();trace[calls++]=1;return fail_open?0:0x123456789abcULL;}
static __int64 sub_1400920F0(__int64 file,const char *format,...){if(file!=0x123456789abcULL||strcmp(format,"shader log"))abort();trace[calls++]=2;return 10;}
static __int64 sub_14020B9E8(__int64 file){trace[calls++]=file;return closing;}
static float unk_1402F61B8[4],unk_1402F61C8[4];static char *off_140301DB0[3];
'''.encode()
  for n in sorted(set(re.findall(rb'sr_mem_[0-9a-f]+',body))):c+=b'static unsigned char '+n+b'[1];\n'
  for n in [b'qword_1404042E0',b'qword_140404308',b'qword_140404338',b'unk_140404288',b'unk_140404330',b'unk_140404340',b'unk_140404538',b'unk_1404042D0']:c+=b'#define '+n+b' gl\n'
  c+=body+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){image=VirtualAlloc(0,0x11600000,MEM_RESERVE,PAGE_NOACCESS);unsigned pages[]={0x14b000,0x14c000,0x4c000,0x92000,0x20b000,0x1f8000,0x302000,0x115b0000,0x276000,0x277000,0x278000,0x273000};for(unsigned i=0;i<12;i++)VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE);
'''.encode()
  for r,size in [(0x14b2a0,0x10f0),(0x276000,8192),(0x278000,4096),(0x273000,4096)]:c+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(r,size)))+'};memcpy(image+'+hex(r)+',b,sizeof b); }\n').encode()
  for r,n in [(0x4c4e0,'sub_14004C4E0'),(0x20b8d8,'sub_14020B8D8'),(0x920f0,'sub_1400920F0'),(0x20b9e8,'sub_14020B9E8')]:c+=('thunk(image+'+hex(r)+','+n+');\n').encode()
  c+=r'''uint64_t cookie=0x123456789abcdef;memcpy(image+0x3020a0,&cookie,8);unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
unsigned count=0;for(unsigned n=0;n<256;n++)for(logs=0;logs<2;logs++)for(fail_open=0;fail_open<2;fail_open++){closing=n&1?0xffffffffu:n*97;uint64_t results[2],saved[64];unsigned saved_calls;for(unsigned native=0;native<2;native++){calls=0;memset(image+0x115b0000,0xa5,4096);results[native]=native?((__int64(*)())(image+0x14b2a0))():render_cache_camera_uniforms_candidate();if(!native){saved_calls=calls;memcpy(saved,trace,sizeof trace);}else if(results[0]!=results[1]||calls!=saved_calls||memcmp(saved,trace,calls*8)){printf("shader-cache mismatch %u %u %u\n",n,logs,fail_open);return 1;}}count++;}printf("%u native cache log/return cases pass; stages fail under controlled shader boundary\n",count);return 0;}
'''.encode()
  out=PROJECT/'reports/client-camera-shader-cache-20261002';out.mkdir(parents=True,exist_ok=True);f=out/'camera_fixture.c';f.write_bytes(c);exe=f.with_suffix('.exe')
  r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(r.returncode,0,r.stderr)
  r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)
if __name__=='__main__':unittest.main()
