"""Compare status text layout and full GL argument/vertex emission against native."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_text_startup import PROJECT,DRAW,repair

class TextStartup(unittest.TestCase):
    def test_native_draw(self):
        source=read_client_source()
        if b'sr_text_draw_recovered' not in source:source,_=repair(source)
        marker=b'//----- (000000014006DB90)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b]
        quads=b''
        for name in ['14006CFF0','14006D660']:
            marker=('//----- (0000000'+name+')').encode();a=source.index(marker);b=source.index(b'//----- (',a+len(marker));region=source[a:b]
            quads+=region.split(b'static unsigned sr_text_float_bits',1)[0]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        text=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
#define bind sr_mock_bind
typedef uint64_t uint64;
static unsigned char *state,*image;static uint64_t trace[1024];static unsigned calls;
#define dword_140404A6C ((unsigned *)(state+0x404a6c))
static float flt_140384000[131092];
static uintptr_t qword_140404170,unk_140404190,qword_1404042E0,qword_140404378,qword_140404050,qword_140404238,qword_1404044A8,unk_140404470,qword_140404230,qword_140302FF8;
#define SR_L_f32(value) ((float *)&(value))
#define SR_L_i32(value) ((int *)&(value))
#define SR_VEC_LANES(bits,value,type) SR_L_##type(value)
#define SR_VEC_READ_LANES(bits,value,type) (((union {__m128 v;uint64_t u64[2];}){.v=(value)}).u64)
static double sr_export_float_lane_container(uint64_t bits){double value;memcpy(&value,&bits,8);return value;}
static void record(uint64_t value){trace[calls++]=value;}
static void bind(unsigned target,unsigned value){record(0);record(target);record(value);}
static void upload(unsigned target,intptr_t n,const void *p,unsigned usage){record(1);record(target);record(n);record((uintptr_t)p-(uintptr_t)state);record(usage);}
static void program(unsigned value){record(2);record(value);}
static void matrix(int location,int count,unsigned char transpose,const float *p){record(3);record(location);record(count);record(transpose);record((uintptr_t)p-(uintptr_t)state);}
static void texture(unsigned target,unsigned value){record(4);record(target);record(value);}
static void enable(unsigned value){record(5);record(value);}
static void attribute(unsigned index,int n,unsigned type,unsigned char normalized,int stride,const void *offset){record(6);record(index);record(n);record(type);record(normalized);record(stride);record((uintptr_t)offset);}
static void color(unsigned index,const float *p){record(7);record(index);for(unsigned i=0;i<4;i++){unsigned bits;memcpy(&bits,p+i,4);record(bits);}}
static void elements(unsigned mode,int count,unsigned type,const void *offset){record(8);record(mode);record(count);record(type);record((uintptr_t)offset);}
static void disable(unsigned index){record(9);record(index);}
static void arrays(unsigned mode,int first,int count){record(11);record(mode);record(first);record(count);}
static uint64_t sub_14006E530(unsigned char *dest,unsigned char *src,int n,uint64_t args){record(10);strcpy((char *)dest,(char *)src);return strlen((char *)src);}
static void sub_14006DB90(unsigned char *,float,unsigned char *,float,int,int,int,int,int);
'''.encode()+DRAW+body+quads+r'''
extern void sr_probe_stack(void) __asm__("___chkstk_ms");
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){image=VirtualAlloc(0,0x6d29a000,MEM_RESERVE,PAGE_NOACCESS);unsigned char *recovered=VirtualAlloc(0,0x6d29a000,MEM_RESERVE,PAGE_NOACCESS);
unsigned pages[]={0x6c000,0x6d000,0x6e000,0x1f8000,0x278000,0x302000,0x404000,0x6724e000,0x68bf7000,0x68bf8000,0x6bd4a000,0x6d299000,0x119a4000,0x119a5000,0x119a6000,0x119a7000};
for(unsigned i=0;i<16;i++){if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;if(pages[i]>=0x404000&&!VirtualAlloc(recovered+pages[i],4096,MEM_COMMIT,PAGE_READWRITE))return 9;}
'''.encode()
        for r,n in [(0x6cff0,0x310),(0x6d660,0x2d0),(0x6d930,0x25c),(0x6db90,0x540),(0x278000,4096)]:
            text+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(r,n)))+'};memcpy(image+'+hex(r)+',b,sizeof b);}\n').encode()
        text+=r'''
thunk(image+0x6e530,sub_14006E530);
{unsigned char *p=image+0x1f89d0;void *target=sr_probe_stack;p[0]=0x49;p[1]=0xbb;memcpy(p+2,&target,8);p[10]=0x41;p[11]=0xff;p[12]=0xe3;}
const uint64_t cookie=0x123456789abcdefULL;memcpy(image+0x3020a0,&cookie,8);
unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
'''.encode()
        for slot,name,mock in [(0x404170,'qword_140404170','bind'),(0x404190,'unk_140404190','upload'),(0x4042e0,'qword_1404042E0','program'),(0x404378,'qword_140404378','matrix'),(0x404050,'qword_140404050','texture'),(0x404238,'qword_140404238','enable'),(0x4044a8,'qword_1404044A8','attribute'),(0x404470,'unk_140404470','color'),(0x404230,'qword_140404230','disable')]:
            text+=('{void *p='+mock+';memcpy(image+'+hex(slot)+',&p,8);'+name+'=(uintptr_t)p;}\n').encode()
        text+=r'''
{void *p=elements;memcpy(image+0x404010,&p,8);memcpy(&flt_140384000[131076],&p,8);}
{void *p=arrays;memcpy(image+0x302ff8,&p,8);qword_140302FF8=(uintptr_t)p;}
const char *strings[]={"","generating","connecting","A b"};unsigned checked=0;
for(unsigned flags=0;flags<256;flags++)for(unsigned active=0;active<2;active++)for(unsigned string=0;string<4;string++){
uint64_t saved[1024];unsigned saved_calls=0;
for(unsigned native=0;native<2;native++){
state=native?image:recovered;memset(state+0x119a4000,0,0x4000);memset(state+0x68bf7000,0xa5,0x2000);
state[0x68bf79c0]=state[0x68bf79c1]=state[0x68bf79c2]=state[0x68bf79c3]=0;
dword_140404A6C[72777085]=active;dword_140404A6C[72777086]=18;
dword_140404A6C[451221644]=21;dword_140404A6C[451221605]=22;dword_140404A6C[451221610]=23;dword_140404A6C[456807040]=24;
for(unsigned i=0;i<3500;i++){float value=(float)((int)(i%19)-9)*0.0625f;memcpy(&dword_140404A6C[72777093+i],&value,4);}
calls=0;
if(native)((void (*)(char *,float,float,float,unsigned,float,float,float,float,...))(image+0x6d930))((char *)strings[string],512.0f,160.0f,20.0f,flags,0.25f,0.5f,0.75f,1.0f);
else sr_text_draw_recovered((char *)strings[string],512.0f,160.0f,20.0f,flags,0.25f,0.5f,0.75f,1.0f,NULL);
if(!native){memcpy(saved,trace,sizeof trace);saved_calls=calls;}
else if(calls!=saved_calls||memcmp(saved,trace,calls*8)||memcmp(image+0x68bf7000,recovered+0x68bf7000,0x2000)){printf("text mismatch flags %u active %u string %u calls %u/%u\n",flags,active,string,calls,saved_calls);return 1;}}
checked++;}
unsigned quad_cases=0;
for(unsigned textured=0;textured<2;textured++)for(unsigned flags=0;flags<256;flags++){
uint64_t saved[1024];unsigned saved_calls=0;
for(unsigned native=0;native<2;native++){
state=native?image:recovered;memset(state+0x68bf7000,0xa5,0x2000);
dword_140404A6C[451221644]=21;dword_140404A6C[451221605]=22;dword_140404A6C[451221610]=23;
calls=0;float x=-18.5f,y=42.25f,width=36.75f,height=53.5f;
if(native)((void (*)(float,float,float,float,char,float,float,float,float))(image+(textured?0x6cff0:0x6d660)))(x,y,width,height,flags,0.25f,0.5f,0.75f,1.0f);
else if(textured)sub_14006CFF0(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,flags,sr_text_float_bits(0.25f),sr_text_float_bits(0.5f),sr_text_float_bits(0.75f),sr_text_float_bits(1.0f));
else sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,flags,sr_text_float_bits(0.25f),sr_text_float_bits(0.5f),sr_text_float_bits(0.75f),sr_text_float_bits(1.0f));
if(!native){memcpy(saved,trace,sizeof trace);saved_calls=calls;}
else if(calls!=saved_calls||memcmp(saved,trace,calls*8)||memcmp(image+0x68bf7000,recovered+0x68bf7000,0x2000)){printf("quad mismatch textured %u flags %u calls %u/%u\n",textured,flags,calls,saved_calls);return 1;}}
quad_cases++;}
printf("%u native text style/GL ABI/color/vertex and %u native quad GL/vertex/UV/guard cases pass; formatter controlled, unrelated quad callers excluded\n",checked,quad_cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-text-startup-20261002';out.mkdir(exist_ok=True,parents=True)
        fixture=out/'text_fixture.c';fixture.write_bytes(text);exe=fixture.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-Wl,--stack,33554432','-I',str(PROJECT/'src/client'),str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)

if __name__=='__main__':unittest.main()
