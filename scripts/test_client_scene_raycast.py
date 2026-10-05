"""Native scene selection, broadphase and scratch layout with controlled leaves."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import capstone
import pefile
from repair_client_scene_raycast import PROJECT,MARKER,repair


class SceneRaycast(unittest.TestCase):
    def test_native_scene(self):
        source=read_client_source()
        a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER))
        if b'return sub_1401F8B20' in source[a:b]:source,_=repair(source)
        a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        pages={0xdc000,0xd1000,0xd6000,0xd8000,0xda000,0x188000,0x1f8000}
        decoder=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);decoder.detail=True
        for ins in decoder.disasm(pe.get_data(0xdc050,0x5f4),0xdc050):
            for op in ins.operands:
                if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:pages.add((ins.address+ins.size+op.mem.disp)&~4095)
        for n in re.findall(rb'\b\d{8,9}\b',body):
            at=0x404a6c+4*int(n)
            if at<0x74794000:pages.update((at&~4095,(at&~4095)+4096))
        for tile in range(4):pages.add((0x404a6c+4*(111579637+263004*tile))&~4095)
        for index in range(128):
            at=0x404a6c+4*(433433157+21*index);pages.update((at&~4095,(at+28)&~4095))
        first=0x404a6c+4*254352099;last=first+64*64*36
        pages.update(range(first&~4095,(last+4095)&~4095,4096))
        for index in range(8):
            at=0x404a6c+4*(358312926+15432*index);pages.update((at&~4095,(at+24)&~4095))
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "defs.h"
typedef unsigned __int128 _OWORD;
static unsigned *dword_140404A6C;
static uint32_t trace[8192];static unsigned trace_at,hit_mask,distance_mode;
static void word(uint32_t x){if(trace_at>=8192)abort();trace[trace_at++]=x;}
static void vector(const float *v){for(unsigned i=0;i<3;i++){uint32_t x;memcpy(&x,v+i,4);word(x);}}
static float distance_for(unsigned kind,unsigned index){return distance_mode==0?0.5f:distance_mode==1?1.0f:distance_mode==2?(0.875f-0.0078125f*index-0.0625f*kind):(-0.125f+0.015625f*kind);}
static int hit_record(float *out,unsigned kind,unsigned index,float *start,float *end){
 word(kind);word(index);vector(start);vector(end);int hit=(hit_mask>>kind)&1;word(hit);
 if(hit){for(unsigned i=0;i<6;i++)out[i]=(float)(kind*16+index*2+i)*0.25f;out[6]=distance_for(kind,index);}return hit;}
static int sub_1400D1830(uintptr_t out,float *start,float *end){return hit_record((float*)out,0,0,start,end);}
static int map_hit(float *point,float *normal,float *distance,unsigned index,float *start,float *end,unsigned kind){
 float out[7];int hit=hit_record(out,kind,index,start,end);if(hit){memcpy(point,out,12);memcpy(normal,out+3,12);*distance=out[6];}return hit;}
static int sub_1400D6B60(float *p,float *n,float *d,unsigned index,float *a,float *b){return map_hit(p,n,d,index,a,b,1);}
static int sub_1400D8B70(float *p,float *n,float *d,unsigned index,float *a,float *b){return map_hit(p,n,d,index,a,b,2);}
static void sub_140188720(int *scratch,float *minimum,float *maximum,int index,int kind){
 word(4);word(index);word(kind);vector(minimum);vector(maximum);
 if(scratch[0]<64)scratch[1+scratch[0]++]=index;
 ++scratch[12289];}
static int sub_1400DA300(uintptr_t out,int *scratch,float *start,float *end){
 word(5);word(scratch[0]);word(scratch[12289]);for(int i=0;i<scratch[0];i++)word(scratch[i+1]);
 return hit_record((float*)out,3,scratch[0],start,end);}
__attribute__((naked)) static void probe_stack(void){__asm__("jmp ___chkstk_ms");}
'''.encode()+body+r'''
static void thunk(unsigned char *at,void *target){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&target,8);}
int main(void){unsigned char *image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS),*working=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image||!working)return 9;
'''.encode()
        for page in sorted(pages):
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))abort();\n'.encode()
            raw=pe.get_data(page,4096)
            if raw:c+=('{unsigned char bytes[]={'+','.join(map(str,raw))+f'}};memcpy(image+{page},bytes,sizeof bytes);}}\n').encode()
        c+=r'''
thunk(image+0xd1830,sub_1400D1830);thunk(image+0xd6b60,sub_1400D6B60);thunk(image+0xd8b70,sub_1400D8B70);thunk(image+0x188720,sub_140188720);thunk(image+0xda300,sub_1400DA300);thunk(image+0x1f89d0,probe_stack);image[0x1f8b20]=0xc3;
float rays[][6]={{0,0,0,0,0,0},{1,2,1,129,-2,129},{129,2,129,1,-2,1},{-65,3,-65,65,-3,65},{4095,3,4095,4100,-3,4100},{1,2,129,129,-2,1}};
unsigned cases=0;uint32_t saved_trace[8192];unsigned char saved_output[4096];
for(hit_mask=0;hit_mask<16;hit_mask++)for(distance_mode=0;distance_mode<4;distance_mode++)for(unsigned map_mask=0;map_mask<16;map_mask++)for(unsigned include=0;include<2;include++)for(unsigned transient=0;transient<3;transient++)for(unsigned ray=0;ray<6;ray++)for(unsigned grid=0;grid<3;grid++){
 int saved_result=0;unsigned saved_at=0;
 for(unsigned native=0;native<2;native++){
 unsigned char *base=native?image:working;unsigned alignment_delta=native?0:4*(cases&3);dword_140404A6C=(void*)(base+0x404a6c+alignment_delta);
 for(unsigned i=0;i<4;i++)dword_140404A6C[111579637+263004*i]=(map_mask>>i)&1;
 for(unsigned i=0;i<128;i++){unsigned at=433433157+21*i;dword_140404A6C[at]=transient==0?0:transient==1?(i==0||i==127):(i%13==0);for(unsigned j=0;j<3;j++)*(float*)&dword_140404A6C[at+5+j]=(float)(i+j)*0.0625f;}
 for(unsigned cell=0;cell<4096;cell++){unsigned at=254352099+9*cell;dword_140404A6C[at]=grid==0?0:grid==1?(cell==0?1:0):8;for(unsigned i=0;i<8;i++)dword_140404A6C[at+1+i]=i;}
 for(unsigned i=0;i<8;i++){unsigned at=358312926+15432*i;for(unsigned j=0;j<3;j++){*(float*)&dword_140404A6C[at+j]=(i&1)?256.0f:-4096.0f;*(float*)&dword_140404A6C[at+3+j]=8192.0f;}}
 unsigned output_page=((0x404a6c+4*73006981)&~4095)+alignment_delta;memset(base+output_page,0xa5,4096);
 float start[3],end[3];memcpy(start,rays[ray],12);memcpy(end,rays[ray]+3,12);trace_at=0;memset(trace,0,sizeof trace);
 int hit=native?((int(*)(float*,float*,int))(image+0xdc050))(start,end,include):sub_1400DC050(start,end,include);
 if(memcmp(start,rays[ray],12)||memcmp(end,rays[ray]+3,12))return 3;
 if(!native){saved_result=hit;saved_at=trace_at;memcpy(saved_trace,trace,sizeof trace);memcpy(saved_output,base+output_page,4096);}
 else if(hit!=saved_result||trace_at!=saved_at||memcmp(trace,saved_trace,sizeof trace)||memcmp(base+output_page,saved_output,4096)){
 printf("scene mismatch mask=%u distance=%u maps=%u include=%u transient=%u ray=%u grid=%u C=%d/%u N=%d/%u\n",hit_mask,distance_mode,map_mask,include,transient,ray,grid,saved_result,saved_at,hit,trace_at);
 for(unsigned i=0;i<4096;i++)if(base[output_page+i]!=saved_output[i])printf("output %u C=%02x N=%02x\n",i,saved_output[i],base[output_page+i]);for(unsigned i=0;i<trace_at;i++)if(trace[i]!=saved_trace[i])printf("trace %u C=%08x N=%08x\n",i,saved_trace[i],trace[i]);return 1;}
 }
 cases++;}
printf("%u complete native scene raycast result/closest-hit/tie, map and transient dispatch, broadphase bounds, 64-candidate cap, scratch counts and output-page guard comparisons pass; leaf intersections controlled\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-scene-raycast-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        f=out/'scene.c';f.write_bytes(c);exe=f.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60)
        (out/'stdout.txt').write_text(result.stdout)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
