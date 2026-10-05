"""Compare repaired checkbox and slider drawing with original instructions."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import capstone
import pefile
from repair_client_options_menu import PROJECT


class OptionsControls(unittest.TestCase):
    def test_native_controls(self):
        source=read_client_source();bodies=b''
        routines=[(0x742f0,0x2f8),(0x74040,0x2a3),(0x73d90,0x2af),(0x72f90,0x495),(0x73860,0x3db),(0x72ca0,0x2e7),(0xcfc80,0x462),(0xfcc90,0x35b)]
        for rva,n in routines:
            marker=f'//----- ({0x140000000+rva:016X})'.encode();a=source.index(marker);b=source.index(b'//----- (',a+10)
            bodies+=source[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);md.detail=True
        pages={0x72000,0x73000,0x74000,0x75000,0x7b000,0x6d000,0x404000,0x302000,0x1f8000,0x1fc000}
        for rva,n in routines:
            pages.update(range(rva&~4095,(rva+n+4095)&~4095,4096))
            for ins in md.disasm(pe.get_data(rva,n),rva):
                for op in ins.operands:
                    if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:pages.add((ins.address+ins.size+op.mem.disp)&~4095)
        for index in [70087071,70087095,70087099,70087106,70087109,70317864,70317861,70318060,70318065,70318066,70318069,18215101,438291413,72777086]+[122*i+j for i in [0,1,7,31] for j in range(70087115,70087233)]:pages.add((0x404a6c+4*index)&~4095)
        for index in [23*i+j for i in [0,1,7,31] for j in range(179473701,179473724)]:pages.add((0x404a6c+4*index)&~4095)
        code=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <math.h>
#include "defs.h"
typedef uint64_t uint64;
static unsigned *dword_140404A6C;static uintptr_t qword_140404050;
static uint64 trace[256];static unsigned calls;
static unsigned sr_text_float_bits(float v){unsigned b;memcpy(&b,&v,4);return b;}
static float bits_float(unsigned b){float v;memcpy(&v,&b,4);return v;}
static double sr_export_float_lane_container(unsigned b){double v=0;memcpy(&v,&b,4);return v;}
static void record(uint64 v){trace[calls++]=v;}
static void quad(float x,float y,float w,float h,unsigned f,float r,float g,float b,float a){record(1);record(sr_text_float_bits(x));record(sr_text_float_bits(y));record(sr_text_float_bits(w));record(sr_text_float_bits(h));record(f);record(sr_text_float_bits(r));record(sr_text_float_bits(g));record(sr_text_float_bits(b));record(sr_text_float_bits(a));}
static void sub_14006D660(double x,double y,uint64 w,float h,unsigned f,unsigned r,unsigned g,unsigned b,unsigned a){quad(*(float *)&x,*(float *)&y,bits_float((unsigned)w),h,f,bits_float(r),bits_float(g),bits_float(b),bits_float(a));}
static void text(char *s,float x,float y,float size,unsigned flags,float r,float g,float b,float a,const uint64 *args){uint64 hash=0;for(unsigned i=0;s[i];i++)hash=hash*131+(unsigned char)s[i];record(2);record(hash);record(sr_text_float_bits(x));record(sr_text_float_bits(y));record(sr_text_float_bits(size));record(flags);record(sr_text_float_bits(r));record(sr_text_float_bits(g));record(sr_text_float_bits(b));record(sr_text_float_bits(a));if(!strcmp(s,"/i")||!strcmp(s,"/f"))record(args[0]);else if(!strcmp(s,"/i///i")||!strcmp(s,"Alpha /i/c")){record(args[0]);record(args[1]);}}
static void sr_text_draw_recovered(char *s,float x,float y,float size,unsigned flags,float r,float g,float b,float a,const uint64 *args){text(s,x,y,size,flags,r,g,b,a,args);}
static void native_text(char *s,float x,float y,float size,unsigned flags,float r,float g,float b,float a,...){va_list ap;va_start(ap,a);uint64 arguments[2]={0};if(!strcmp(s,"/i"))arguments[0]=va_arg(ap,unsigned);else if(!strcmp(s,"/f")){double v=va_arg(ap,double);memcpy(arguments,&v,8);}else if(!strcmp(s,"/i///i")||!strcmp(s,"Alpha /i/c")){arguments[0]=va_arg(ap,unsigned);arguments[1]=va_arg(ap,unsigned);}va_end(ap);text(s,x,y,size,flags,r,g,b,a,arguments);}
static void texture(unsigned target,unsigned id){record(3);record(target);record(id);}
static void callback(unsigned a,unsigned b,float x,float y,float w,float h,unsigned flags){record(4);record(a);record(b);record(sr_text_float_bits(x));record(sr_text_float_bits(y));record(sr_text_float_bits(w));record(sr_text_float_bits(h));record(flags);}
static float cursor_width(int index,int position){record(5);record((unsigned)index);record((unsigned)position);return position*7.25f;}
static double sub_140074CE0(int index,int position){return sr_export_float_lane_container(sr_text_float_bits(cursor_width(index,position)));}
static unsigned clip_active;
static __int64 sub_140075460(float x,float y,float w,float h){record(6);record(sr_text_float_bits(x));record(sr_text_float_bits(y));record(sr_text_float_bits(w));record(sr_text_float_bits(h));return clip_active;}
static void disable(unsigned target){record(7);record(target);}
static double sub_14007BB00(void){record(8);return 0.0;}
static void sub_14007B7E0(float x,float y,float w,float h){record(9);record(sr_text_float_bits(x));record(sr_text_float_bits(y));record(sr_text_float_bits(w));record(sr_text_float_bits(h));}
'''.encode()+bodies+r'''
static void thunk(unsigned char *p,void *f){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&f,8);p[10]=0xff;p[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x6d29a000,MEM_RESERVE,PAGE_NOACCESS),*working=VirtualAlloc(0,0x6d29a000,MEM_RESERVE,PAGE_NOACCESS);if(!image||!working)return 9;
'''.encode()
        for page in sorted(pages):
            code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))return 8;\n'.encode()
            data=pe.get_data(page,4096)
            if data:code+=('{unsigned char b[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        code+=r'''
thunk(image+0x6d660,quad);thunk(image+0x6d930,native_text);*(void **)(image+0x404050)=texture;qword_140404050=(uintptr_t)texture;
thunk(image+0x74ce0,cursor_width);thunk(image+0x1fcd30,memset);image[0x1f8b20]=0xc3;
thunk(image+0x75460,sub_140075460);thunk(image+0x7bb00,sub_14007BB00);thunk(image+0x7b7e0,sub_14007B7E0);
char labels[5][16]={"one","two","three","four","five"};
unsigned indices[]={0,1,7,31},values[]={0x80000000,0xffffffff,0,1,17,100,0x7fffffff,0x7fc00000,0x80000000,0x3f800000};unsigned checked=0;
for(unsigned kind=0;kind<6;kind++)for(unsigned id=0;id<4;id++)for(unsigned selected=0;selected<2;selected++)for(unsigned callback_mode=0;callback_mode<2;callback_mode++)for(unsigned v=0;v<10;v++){
uint64 saved[256];unsigned saved_calls=0;int value;memcpy(&value,&values[v],4);
for(unsigned native=0;native<2;native++){
dword_140404A6C=(void*)((native?image:working)+0x404a6c);unsigned i=122*indices[id];
dword_140404A6C[70087109]=selected?indices[id]:999;dword_140404A6C[i+70087116]=v&1;
dword_140404A6C[i+70087127]=sr_text_float_bits(-1.0f+v*33.125f);dword_140404A6C[i+70087128]=sr_text_float_bits(3.0f+v*4.5f);
dword_140404A6C[i+70087133]=sr_text_float_bits(12.5f);dword_140404A6C[70087071]=sr_text_float_bits(15.0f);
for(unsigned j=0;j<8;j++)dword_140404A6C[70087095+j]=sr_text_float_bits(0.125f*(j+1));
*(void **)&dword_140404A6C[i+70087215]=&value;
dword_140404A6C[i+70087217]=kind==0?17:kind==1?(unsigned)-100:sr_text_float_bits(-1.0f);
dword_140404A6C[i+70087218]=kind==1?100:sr_text_float_bits(1.0f);dword_140404A6C[i+70087220]=sr_text_float_bits(8.0f+v);
*(void **)&dword_140404A6C[i+70087149]=callback_mode?(void *)callback:0;
dword_140404A6C[i+70087146]=1729;dword_140404A6C[i+70087147]=9001;strcpy((char *)&dword_140404A6C[i+70087151],"control label");
dword_140404A6C[438291413]=0;dword_140404A6C[72777086]=42;
if(kind==3){
 dword_140404A6C[70087106]=(v&1)?indices[id]:999;dword_140404A6C[i+70087124]=v&4;dword_140404A6C[i+70087115]=3+v%3;
 *(void **)&dword_140404A6C[i+70087215]=v%3==0?"":"editable string longer than thirty one characters";
 *(void **)&dword_140404A6C[i+70087217]=&value;strcpy((char *)&dword_140404A6C[70318069],v%3==0?"":"focused input buffer longer than thirty one characters");
 dword_140404A6C[70318066]=v%7;dword_140404A6C[70318065]=(v*2)%7;
}
if(kind==4){
 *(void **)&dword_140404A6C[i+70087217]=labels;dword_140404A6C[i+70087219]=16;dword_140404A6C[i+70087220]=v%5;
 dword_140404A6C[i+70087222]=v%4;dword_140404A6C[i+70087223]=(v+1)%4;dword_140404A6C[i+70087227]=1+v%3;
 dword_140404A6C[i+70087228]=sr_text_float_bits(35.5f);dword_140404A6C[i+70087229]=sr_text_float_bits(21.5f);
 dword_140404A6C[i+70087230]=sr_text_float_bits(3.5f);dword_140404A6C[i+70087232]=sr_text_float_bits(-8.5f+v);
 clip_active=v&1;dword_140404A6C[70317864]=(v%4)-1;*(void **)&dword_140404A6C[18215101]=disable;
 for(unsigned z=0;z<8;z++)dword_140404A6C[70317865+z]=sr_text_float_bits(z*13.25f);
}
if(kind==5)dword_140404A6C[i+70087215]=v&1;
calls=0;memset(trace,0,sizeof trace);float x=-18.25f,y=44.5f;
if(native)((void (*)(int,float,float))(image+(kind==0?0x742f0:kind==1?0x74040:kind==2?0x73d90:kind==3?0x72f90:kind==4?0x73860:0x72ca0)))(indices[id],x,y);
else {double a=sr_export_float_lane_container(sr_text_float_bits(x)),b=sr_export_float_lane_container(sr_text_float_bits(y));if(kind==0)sub_1400742F0(indices[id],a,b);else if(kind==1)sub_140074040(indices[id],a,b);else if(kind==2)sub_140073D90(indices[id],a,b);else if(kind==3)sub_140072F90(indices[id],a,b);else if(kind==4)sub_140073860(indices[id],a,b);else sub_140072CA0(indices[id],a,b);}
if(!native){saved_calls=calls;memcpy(saved,trace,sizeof trace);}else if(calls!=saved_calls||memcmp(saved,trace,calls*8)){printf("mismatch kind %u id %u selected %u callback %u value %u calls %u/%u\n",kind,id,selected,callback_mode,v,calls,saved_calls);for(unsigned t=0;t<calls;t++)if(saved[t]!=trace[t])printf("slot %u C %llx native %llx\n",t,(unsigned long long)saved[t],(unsigned long long)trace[t]);return 1;}
}checked++;}
printf("%u native checkbox/slider/text-input/grid/toggle geometry, labels, formatting slots, callback ABI and float edge cases pass; drawing, clipping and cursor width boundaries controlled\n",checked);
unsigned modes[]={0,3,4,5,7,99};unsigned server_cases=0;
for(unsigned id=0;id<4;id++)for(unsigned flags=0;flags<16;flags++)for(unsigned mode=0;mode<6;mode++)for(unsigned password=0;password<2;password++){
 uint64 saved[256];unsigned saved_calls=0;
 for(unsigned native=0;native<2;native++){
  dword_140404A6C=(void*)((native?image:working)+0x404a6c);unsigned row=23*indices[id];
  strcpy((char *)&dword_140404A6C[row+179473704],"test server name");
  dword_140404A6C[row+179473701]=38;dword_140404A6C[row+179473702]=flags%3;
  dword_140404A6C[row+179473717]=flags;dword_140404A6C[row+179473719]=32;
  dword_140404A6C[row+179473720]=flags?UINT32_MAX/flags:0;dword_140404A6C[row+179473721]=modes[mode];dword_140404A6C[row+179473723]=password;
  calls=0;memset(trace,0,sizeof trace);
  float x=-31.25f+id*12.5f,y=17.5f+flags*2.25f,w=895.5f-id*3.0f,h=21.0f+mode;
  if(native)((void (*)(int,unsigned,float,float,float,float,unsigned))(image+0xcfc80))(indices[id],12345,x,y,w,h,flags);
  else sub_1400CFC80(indices[id],12345,x,y,w,h,flags);
  if(!native){saved_calls=calls;memcpy(saved,trace,sizeof trace);}else if(calls!=saved_calls||memcmp(saved,trace,calls*8)){printf("server mismatch id %u flags %u mode %u password %u calls %u/%u\n",id,flags,mode,password,calls,saved_calls);for(unsigned t=0;t<calls;t++)if(saved[t]!=trace[t])printf("slot %u C %llx native %llx\n",t,(unsigned long long)saved[t],(unsigned long long)trace[t]);return 2;}
 }server_cases++;
}
uint64 saved_credits[256];unsigned saved_credit_calls=0;
for(unsigned native=0;native<2;native++){
 calls=0;memset(trace,0,sizeof trace);
 if(native)((void (*)(void))(image+0xfcc90))();else sub_1400FCC90();
 if(!native){saved_credit_calls=calls;memcpy(saved_credits,trace,sizeof trace);}else if(calls!=saved_credit_calls||memcmp(saved_credits,trace,calls*8)){puts("credits mismatch");return 3;}
}
printf("%u complete native server-row callback cases and the complete Credits draw trace pass; draw/text boundaries controlled\n",server_cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-options-controls-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        fixture=out/'controls.c';fixture.write_bytes(code);exe=fixture.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)


if __name__=='__main__':unittest.main()
