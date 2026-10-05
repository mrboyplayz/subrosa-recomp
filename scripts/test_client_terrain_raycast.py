"""Compare complete native terrain grid traversal with controlled triangle intersections."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import capstone
import pefile
from repair_client_terrain_raycast import PROJECT,MARKER,repair


class TerrainRaycast(unittest.TestCase):
    def test_native_terrain(self):
        s=read_client_source();a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER))
        if b'return sub_1401F8B20' in s[a:b]:s,_=repair(s)
        a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER));body=s[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        pages={0xd1000,0xd2000,0x77000,0x1f8000}
        d=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);d.detail=True
        for ins in d.disasm(pe.get_data(0xd1830,0xaa8),0xd1830):
            for op in ins.operands:
                if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:pages.add((ins.address+ins.size+op.mem.disp)&~4095)
        first=0x404a6c+4*272034677;last=0x404a6c+4*(272034683+63*3336)+8
        pages.update(range(first&~4095,(last+4095)&~4095,4096))
        for n in re.findall(rb'\b\d{8,9}\b',body):
            at=0x404a6c+4*int(n)
            if at<0x74794000:pages.update((at&~4095,(at&~4095)+4096))
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <emmintrin.h>
#include "defs.h"
#include "vector_views.h"
static unsigned *dword_140404A6C;
#define abs32(v) ((v)<0?-(v):(v))
#define fsqrt(v) _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss((float)(v))))
static int test_bit(const int *v,unsigned bit){return((unsigned)*v>>(bit&31))&1;}
#define _bittest test_bit
static uint32_t trace[8192];static unsigned trace_at,calls,hit_mode;
static int sub_140077FA0(float *point,float *normal,float *distance,float *start,float *end,float *a,float *b,float *c){
 if(trace_at+22>8192)abort();float *values[]={normal,start,end,a,b,c};
 for(unsigned i=0;i<6;i++){memcpy(trace+trace_at,values[i],12);trace_at+=3;}
 unsigned hit=hit_mode==1||(hit_mode==2&&calls==1)||(hit_mode==3&&calls==0);calls++;
 if(hit){*distance=hit_mode==3?1.0f:(calls&1?0.75f:0.25f);for(unsigned i=0;i<3;i++)point[i]=start[i]+(end[i]-start[i])*(*distance);}
 trace[trace_at++]=hit;return hit;
}
'''.encode()+body+r'''
static void thunk(unsigned char *p,void *f){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&f,8);p[10]=0xff;p[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);unsigned char *working=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image||!working)return 9;
'''.encode()
        for page in sorted(pages):
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))abort();\n'.encode()
            data=pe.get_data(page,4096)
            if data:c+=('{unsigned char b[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        c+=r'''
thunk(image+0x77fa0,sub_140077FA0);image[0x1f8b20]=0xc3;
unsigned short *bitmap=malloc(1024*1024*2);float *height=malloc(2049*2049*sizeof(float));if(!bitmap||!height)return 10;
float rays[][6]={{0,0,0,0,0,0},{1.25,3,1.75,1.25,-3,1.75},{1,2,1,4,-2,1},{1,2,1,1,-2,4},{1,2,1,4,-2,4},{4,2,4,1,-2,1},{-1,2,-1,2,-2,2},{2,2,2,-1,-2,-1},{2047.75,3,2047.75,2050.25,-3,2050.25},{16383,3,16383,16385,-3,16385},{16385,3,16385,16383,-3,16383},{0.25,3,0.25,-0.25,-3,-0.25},{7.5,3,2.5,2.5,-3,7.5},{8,3,8,4,-3,4},{4,3,4,8,-3,8},{12.75,2,12.25,12.25,-2,12.75}};
unsigned cases=0;
for(unsigned shape=0;shape<3;shape++){
for(unsigned z=0;z<2049;z++)for(unsigned x=0;x<2049;x++)height[x+2049*z]=shape==0?0.0f:(shape==1?0.125f:0.001f*x-0.002f*z);
for(unsigned occupancy=0;occupancy<3;occupancy++){
for(unsigned i=0;i<1024*1024;i++)bitmap[i]=occupancy==0?0:(occupancy==1?0xffff:(i&1?0x5555:0xaaaa));
for(unsigned ray=0;ray<16;ray++)for(hit_mode=0;hit_mode<4;hit_mode++)for(unsigned origin=0;origin<2;origin++){
uint32_t saved_trace[8192];unsigned saved_at=0,saved_calls=0;unsigned char saved_out[64];int saved_result=0;
for(unsigned native=0;native<2;native++){
unsigned char *base=native?image:working;dword_140404A6C=(void*)(base+0x404a6c);
float offset=origin?-0.5f:0.0f;float start[3],end[3];for(unsigned i=0;i<3;i++){start[i]=rays[ray][i]+offset;end[i]=rays[ray][i+3]+offset;}
for(unsigned tile=0;tile<64;tile++){
 unsigned index=272034677+3336*tile;*(float*)&dword_140404A6C[index]=2048.0f*(tile&7)+offset;*(float*)&dword_140404A6C[index+1]=offset;*(float*)&dword_140404A6C[index+2]=2048.0f*(tile>>3)+offset;*(void**)&dword_140404A6C[index+6]=height;
}
for(unsigned i=0;i<3;i++)*(float*)&dword_140404A6C[272248181+i]=offset;*(void**)&dword_140404A6C[272248185]=bitmap;
_Alignas(16) unsigned char result[64];memset(result,0xa5,sizeof result);trace_at=calls=0;memset(trace,0,sizeof trace);
int hit=native?((int(*)(uintptr_t,float*,float*))(image+0xd1830))((uintptr_t)(result+16),start,end):sub_1400D1830((uintptr_t)(result+16),start,end);
if(!native){saved_result=hit;saved_at=trace_at;saved_calls=calls;memcpy(saved_trace,trace,sizeof trace);memcpy(saved_out,result,sizeof result);}
else if(hit!=saved_result||trace_at!=saved_at||calls!=saved_calls||memcmp(trace,saved_trace,sizeof trace)||memcmp(result,saved_out,sizeof result)){
printf("terrain mismatch shape=%u occupancy=%u ray=%u hitmode=%u origin=%u C=%d/%u/%u N=%d/%u/%u\n",shape,occupancy,ray,hit_mode,origin,saved_result,saved_at,saved_calls,hit,trace_at,calls);
for(unsigned i=0;i<64;i++)if(result[i]!=saved_out[i])printf("output %u C=%02x N=%02x\n",i,saved_out[i],result[i]);for(unsigned i=0;i<trace_at;i++)if(trace[i]!=saved_trace[i])printf("trace %u C=%08x N=%08x\n",i,saved_trace[i],trace[i]);return 1;}
}
cases++;}}}
printf("%u complete native terrain raycast hit/miss, grid walk, triangle/normal dispatch, tile boundaries, signed/fractional origins and output-guard comparisons pass; triangle intersections controlled\n",cases);free(bitmap);free(height);return 0;}
'''.encode()
        out=PROJECT/'reports/client-terrain-raycast-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        f=out/'terrain.c';f.write_bytes(c);exe=f.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)


if __name__=='__main__':unittest.main()
