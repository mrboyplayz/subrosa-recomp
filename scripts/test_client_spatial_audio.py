"""Compare the native spatial audio updater with controlled audio/raycast leaves."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import capstone
import pefile
from repair_client_spatial_audio import PROJECT, MARKER, repair


class SpatialAudio(unittest.TestCase):
    def test_native_update(self):
        source = read_client_source()
        a = source.index(MARKER); b = source.index(b'//----- (', a+len(MARKER))
        if b'return sub_1401F8B20' in source[a:b]: source, _ = repair(source)
        a = source.index(MARKER); b = source.index(b'//----- (', a+len(MARKER))
        body = source[a:b]
        pe = pefile.PE(str(PROJECT.parent/'subrosa.exe'), fast_load=True)
        pages = {0x14f000, 0x150000, 0x151000, 0x69000, 0x7d000, 0xdc000, 0x1e2000, 0x1fc000, 0x1f8000}
        decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64); decoder.detail = True
        for ins in decoder.disasm(pe.get_data(0x14fcf0, 5265), 0x14fcf0):
            for op in ins.operands:
                if op.type == capstone.CS_OP_MEM and op.mem.base == capstone.x86.X86_REG_RIP:
                    pages.add((ins.address+ins.size+op.mem.disp)&~4095)
        def index_page(index):
            address = 0x404a6c+4*index
            pages.update((address&~4095, (address&~4095)+4096))
        for n in re.findall(rb'\b\d{8,9}\b', body):
            if 0x404a6c+4*int(n) < 0x74794000: index_page(int(n))
        for slot in range(512):
            for index in (129721918+5210*slot, 129716709+5210*slot, 129720369+5210*slot): index_page(index)
        for slot in range(256): index_page(71856270+3597*slot)
        for slot in (100, 101):
            index_page(285044401+77*slot)
        for slot in range(8):
            for index in (308307077+96401*slot, 308337812+96401*slot, 308370709+96401*slot,
                          299853565+2*slot, 18182163+8*slot,
                          278720*(56+slot)+327698, 278720*(56+slot)+606302): index_page(index)
        c = r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <emmintrin.h>
#include "defs.h"
#include "vector_views.h"
#define nullptr NULL
#define fsqrt(x) _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(x)))
typedef unsigned __int128 _OWORD;
static unsigned *dword_140404A6C;
static unsigned trace[1024], trace_at, ray_hit;
static void word(unsigned x){if(trace_at>=1024)abort();trace[trace_at++]=x;}
static void vector(const float *p){for(int i=0;i<3;i++){unsigned x;memcpy(&x,p+i,4);word(x);}}
static __int64 sub_140069FA0(int id,unsigned *p,float gain,float pitch,unsigned kind){word(1);word(id);vector((float*)p);word(kind);return -1;}
static __int64 sub_14007D6C0(int id){word(2);word(id);return 5760;}
static int sub_1400DC050(float *a,float *b,int mode){word(3);vector(a);vector(b);word(mode);return ray_hit;}
static __int64 sub_1401E27C0(int *p,int size,int *q){word(4);word(size);return 0;}
static __int64 sub_1401E25C0(int *p,char *a,int size,__int64 out,int cap,unsigned flags){abort();}
static void *sub_1401FCD30(void *p,int value,size_t size){return memset(p,value,size);}
'''.encode()+body+r'''
static void thunk(unsigned char *at,void *target){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&target,8);}
static void putf(unsigned index,float value){memcpy(&dword_140404A6C[index],&value,4);}
int main(void){
 unsigned char *image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS),*working=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);
 if(!image||!working)return 9;
'''.encode()
        for page in sorted(pages):
            c += f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))abort();\n'.encode()
            if page < 0x400000:
                data = pe.get_data(page, 4096)
                if data: c += ('{unsigned char bytes[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},bytes,sizeof bytes);}}\n').encode()
        c += r'''
thunk(image+0x69fa0,sub_140069FA0);thunk(image+0x7d6c0,sub_14007D6C0);thunk(image+0xdc050,sub_1400DC050);
thunk(image+0x1e27c0,sub_1401E27C0);thunk(image+0x1e25c0,sub_1401E25C0);thunk(image+0x1fcd30,sub_1401FCD30);image[0x1f8b20]=0xc3;
unsigned saved_trace[1024],saved_at;unsigned cases=0;
unsigned pages[]={'''.encode()+','.join(str(p) for p in sorted(pages) if p >= 0x400000).encode()+r'''};
unsigned char *saved=malloc(sizeof(pages)/sizeof(pages[0])*4096);if(!saved)return 8;
float listeners[][3]={{0,0,0},{1.25f,-2.5f,3.75f},{-0.0f,0.5f,-16.25f}};
for(unsigned state=0;state<4;state++)for(unsigned mask=0;mask<16;mask++)for(unsigned listener=0;listener<3;listener++)
for(unsigned distant=0;distant<2;distant++)for(unsigned hit=0;hit<2;hit++)for(unsigned compact=0;compact<3;compact++){
 for(unsigned native=0;native<2;native++){
 unsigned char *base=native?image:working;dword_140404A6C=(unsigned*)(base+0x404a6c);
 for(unsigned page=0;page<sizeof(pages)/sizeof(pages[0]);page++)memset(base+pages[page],0,4096);
 dword_140404A6C[283831309]=(state!=0);dword_140404A6C[283831448]=state;
 dword_140404A6C[283831450]=30;dword_140404A6C[73991612]=7;
 for(unsigned slot=0;slot<512;slot++)dword_140404A6C[129721918+5210*slot]=~0u;
 dword_140404A6C[70326525]=compact;
 for(unsigned i=0;i<compact;i++){
  unsigned *p=&dword_140404A6C[70326526+5*i];p[0]=100+i;p[1]=~0u;p[2]=~0u;p[3]=0x3f000000+i;p[4]=0xfeed0000+i;
  if(mask&8){dword_140404A6C[129716709+5210*(100+i)]=1;dword_140404A6C[129720369+5210*(100+i)]=1;}
 }
 for(unsigned slot=0;slot<8;slot++){
  unsigned index=308307086+96401*slot;unsigned active=(mask>>(slot%4))&1;
  dword_140404A6C[index-9]=active;dword_140404A6C[index-8]=slot&1;
  dword_140404A6C[index-7]=~0u;dword_140404A6C[index-6]=~0u;dword_140404A6C[index-5]=~0u;dword_140404A6C[index-4]=~0u;
  for(unsigned axis=0;axis<3;axis++)putf(index-2+axis,listeners[listener][axis]+(distant?256.0f:2.0f*slot));
  putf(index+4,0.25f);
 }
 float start[3];memcpy(start,listeners[listener],12);unsigned rotation[9]={0x3f800000,0,0,0,0x3f800000,0,0,0,0x3f800000},velocity[3]={0x3f000000,0xbf000000,0x3e800000};
 ray_hit=hit;trace_at=0;memset(trace,0,sizeof trace);
 if(native)((void(*)(float*,unsigned*,unsigned*))(image+0x14fcf0))(start,rotation,velocity);else sub_14014FCF0(start,rotation,velocity);
 if(memcmp(start,listeners[listener],12))return 4;
 if(!native){saved_at=trace_at;memcpy(saved_trace,trace,sizeof trace);for(unsigned p=0;p<sizeof(pages)/sizeof(pages[0]);p++)memcpy(saved+4096*p,base+pages[p],4096);}
 else{
  if(trace_at!=saved_at||memcmp(trace,saved_trace,sizeof trace)){printf("trace mismatch state=%u mask=%u listener=%u distant=%u hit=%u compact=%u C=%u N=%u\n",state,mask,listener,distant,hit,compact,saved_at,trace_at);return 1;}
  for(unsigned p=0;p<sizeof(pages)/sizeof(pages[0]);p++)if(memcmp(saved+4096*p,base+pages[p],4096)){
   for(unsigned b=0;b<4096;b++)if(saved[4096*p+b]!=base[pages[p]+b]){printf("memory mismatch rva=%x state=%u mask=%u listener=%u distant=%u hit=%u compact=%u C=%02x N=%02x\n",pages[p]+b,state,mask,listener,distant,hit,compact,saved[4096*p+b],base[pages[p]+b]);break;}return 2;
  }
 }
 }cases++;
}
printf("%u native spatial audio listener bit-copy, compacted-list, voice slot reset/position/gain/occlusion and output-page comparisons pass; decoder and raycast leaves controlled\n",cases);return 0;}
'''.encode()
        out = PROJECT/'reports/client-spatial-audio-fixture-20261003'; out.mkdir(parents=True, exist_ok=True)
        path = out/'spatial.c'; path.write_bytes(c); exe = path.with_suffix('.exe')
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing',
            '-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result = subprocess.run([str(exe)],capture_output=True,text=True,timeout=90)
        (out/'stdout.txt').write_text(result.stdout)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__ == '__main__': unittest.main()
