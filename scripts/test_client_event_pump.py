"""Compare full native event pump with controlled SDL queues and window APIs."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import capstone
import pefile
from repair_client_event_pump import PROJECT,MARKER,PREFIX,repair


class EventPump(unittest.TestCase):
    def test_native_events(self):
        s=read_client_source()
        if b'sr_event_poll(sr_event)' not in s:s,_=repair(s)
        a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER));body=s[a:b]
        # This fixture compares the recovered native pump. The recomp's separate
        # desktop-mode extension is exercised by test_client_borderless.py.
        body=body.replace(b'sr_recomp_window_toggle',b'sr_event_fullscreen')
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        pages={0x7c000,0x198000,0x26e000,0x1f8000};d=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);d.detail=True
        for ins in d.disasm(pe.get_data(0x7cc30,0x35c),0x7cc30):
            for op in ins.operands:
                if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:pages.add((ins.address+ins.size+op.mem.disp)&~4095)
        for n in re.findall(rb'\b\d{8,9}\b',body):
            at=0x404a6c+4*int(n)
            if at<0x74794000:pages.update((at&~4095,(at&~4095)+4096))
        at=0x404a6c+4*468760165;pages.update(range(at&~4095,(at+8+20*1024+4095)&~4095,4096))
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
static unsigned *dword_140404A6C;
static unsigned char queue[16][56];static unsigned queued,cursor,width,height;
static char trace[4096];static unsigned trace_at;
static void event(unsigned type,unsigned sub,unsigned key,unsigned symbol,unsigned mod){
 unsigned char *p=queue[queued++];memset(p,0,56);memcpy(p,&type,4);p[12]=sub;memcpy(p+16,&key,4);memcpy(p+20,&symbol,4);memcpy(p+24,&mod,2);
}
static int sr_event_poll(void *out){if(!out)abort();trace_at+=sprintf(trace+trace_at,"poll;");if(cursor>=queued)return 0;memcpy(out,queue[cursor++],56);return 1;}
static int sr_event_fullscreen(void *w,unsigned flags){if(w!=(void*)0x1234)abort();trace_at+=sprintf(trace+trace_at,"full:%u;",flags);return 0;}
static void sr_event_restore(void *w){if(w!=(void*)0x1234)abort();trace_at+=sprintf(trace+trace_at,"restore;");}
static void sr_event_size(void *w,int *a,int *b){if(w!=(void*)0x1234||!a||!b)abort();*a=width;*b=height;trace_at+=sprintf(trace+trace_at,"size;");}
static void sr_event_set_size(void *w,int a,int b){if(w!=(void*)0x1234)abort();trace_at+=sprintf(trace+trace_at,"set:%d,%d;",a,b);}
'''.encode()+body+r'''
int main(void){unsigned char *image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS),*working=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image||!working)return 9;
'''.encode()
        for page in sorted(pages):
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))abort();\n'.encode()
            data=pe.get_data(page,4096)
            if data:c+=('{unsigned char b[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        c+=r'''
*(void**)(image+0x26e3d0)=sr_event_poll;*(void**)(image+0x26e400)=sr_event_set_size;
*(void**)(image+0x26e408)=sr_event_size;*(void**)(image+0x26e410)=sr_event_restore;*(void**)(image+0x26e418)=sr_event_fullscreen;
image[0x1f8b20]=0xc3;
unsigned cases=0,mods[]={0,0x100,0x300};
for(unsigned sequence=0;sequence<10;sequence++)for(unsigned dimensions=0;dimensions<2;dimensions++)for(unsigned head=0;head<2;head++)
for(unsigned fullscreen=0;fullscreen<2;fullscreen++)for(unsigned camera=0;camera<2;camera++)for(unsigned modifier=0;modifier<3;modifier++){
width=dimensions?1920:640;height=dimensions?1080:480;queued=0;
switch(sequence){
 case 0:break;
 case 1:event(1027,0,0,3,0);event(1027,0,0,(unsigned)-2,0);break;
 case 2:event(768,0,40,13,mods[modifier]);break;
 case 3:event(769,0,40,13,mods[modifier]);break;
 case 4:event(512,6,11,22,0);break;
 case 5:event(512,5,11,22,0);break;
 case 6:event(512,8,11,22,0);break;
 case 7:event(256,0,0,0,0);break;
 case 8:event(768,0,7,99,mods[modifier]);event(769,0,7,99,mods[modifier]);event(512,6,33,44,0);event(1027,0,0,(unsigned)-17,0);break;
 case 9:event(768,0,40,13,0x300);event(512,8,33,44,0);event(512,5,33,44,0);event(512,6,33,44,0);event(256,0,0,0,0);break;
}
char saved[4096];unsigned saved_cursor=0,saved_trace=0;
for(unsigned native=0;native<2;native++){
unsigned char *base=native?image:working;dword_140404A6C=(void*)(base+0x404a6c);
'''.encode()
        data_pages=sorted(p for p in pages if p>=0x400000)
        for page in data_pages:c+=f'memset(base+{page},0xa5,4096);\n'.encode()
        c+=r'''
*(_QWORD*)&dword_140404A6C[137297751]=0x1234;dword_140404A6C[137297755]=width;dword_140404A6C[137297756]=height;
dword_140404A6C[468760165]=head?1023:0;dword_140404A6C[137297766]=fullscreen;dword_140404A6C[137297769]=camera;dword_140404A6C[137297749]=0;
cursor=trace_at=0;memset(trace,0,sizeof trace);
if(native)((void(*)(void))(image+0x7cc30))();else input_poll_events_candidate();
if(!native){saved_cursor=cursor;saved_trace=trace_at;memcpy(saved,trace,sizeof trace);}
else if(cursor!=saved_cursor||trace_at!=saved_trace||memcmp(saved,trace,sizeof trace)){
printf("dispatch mismatch sequence=%u full=%u mod=%u\nC %s\nN %s\n",sequence,fullscreen,modifier,saved,trace);return 1;}
}
'''.encode()
        for page in data_pages:c+=f'if(memcmp(image+{page},working+{page},4096)){{printf("state mismatch page={page:x} sequence=%u head=%u full=%u camera=%u mod=%u\\n",sequence,head,fullscreen,camera,modifier);for(unsigned j=0;j<4096;j++)if(image[{page}+j]!=working[{page}+j]){{printf("first offset %u C=%u N=%u\\n",j,working[{page}+j],image[{page}+j]);break;}}return 2;}}\n'.encode()
        c+=r'''cases++;}
printf("%u complete native SDL event/key/wheel/resize/fullscreen/quit/ring-wrap/viewport/guard comparisons pass; SDL queue and window boundaries controlled\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-event-pump-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        f=out/'events.c';f.write_bytes(c);exe=f.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)


if __name__=='__main__':unittest.main()
