"""Compare the complete native main menu with controlled UI/platform boundaries."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import capstone
import pefile
from repair_client_main_menu import PROJECT,MARKER,PREFIX,repair


class MainMenu(unittest.TestCase):
    def test_native_ui_mouse(self):
        s=read_client_source()
        a=s.index(b'//----- (0000000140076770)');b=s.index(b'//----- (',a+10);body=s[a:b].replace(b'\r\n',b'\n')
        a=body.index(b'    v13 = sr_ui_mouse_state');b=body.index(b'\n  }\n  v18',a);block=body[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);md.detail=True
        pages={0x76000,0x198000,0x26e000}
        for ins in md.disasm(pe.get_data(0x769f9,0x80),0x769f9):
            for op in ins.operands:
                if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:
                    pages.add((ins.address+ins.size+op.mem.disp)&~4095)
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
static unsigned *dword_140404A6C;static int mouse_x,mouse_y;static unsigned mask,calls;
static unsigned sr_ui_mouse_state(int *x,int *y){*x=mouse_x;*y=mouse_y;calls++;return mask;}
static void recovered(void){unsigned v13,v16,v17;int v14,v15,v72,v73;
'''.encode()+block+r'''
}
extern void native_mouse(void *base,void *code);
__asm__(".text\n.global native_mouse\nnative_mouse:\npush %rbp\npush %rsi\npush %r12\nsub $0x80,%rsp\nmov $1,%r12d\njmp *%rdx\n");
int main(void){unsigned char *image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS),*working=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image||!working)return 9;
'''.encode()
        for page in sorted(pages):
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))return 8;\n'.encode()
            data=pe.get_data(page,4096)
            if data:c+=('{unsigned char b[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        thunk=pe.get_data(0x198eff,6);self.assertEqual(thunk[:2],b'\xff\x25')
        slot=0x198eff+6+int.from_bytes(thunk[2:],'little',signed=True)
        c+=f'*(void**)(image+{slot})=sr_ui_mouse_state;\n'.encode()
        c+=r'''
unsigned char end[]={0x48,0x81,0xc4,0x80,0,0,0,0x41,0x5c,0x5e,0x5d,0xc3};memcpy(image+0x76a79,end,sizeof end);
int positions[]={INT_MIN,-32768,-1025,-1,0,1,15,16,1023,1024,1920,32767,INT_MAX};unsigned indices[]={468760125,468760126,468760161,468760162,468760163},cases=0;
for(mask=0;mask<32;mask++)for(unsigned p=0;p<13;p++)for(unsigned size=0;size<4;size++){
mouse_x=positions[p];mouse_y=positions[12-p];unsigned saved[5];
for(unsigned native=0;native<2;native++){
dword_140404A6C=(void*)((native?image:working)+0x404a6c);
dword_140404A6C[137297755]=640+size*431;dword_140404A6C[137297756]=480+size*277;
*(float*)&dword_140404A6C[438291414]=1024;*(float*)&dword_140404A6C[438291415]=576;
calls=0;if(native)native_mouse(image,image+0x769f9);else recovered();if(calls!=1)return 1;
for(unsigned j=0;j<5;j++)if(!native)saved[j]=dword_140404A6C[indices[j]];else if(saved[j]!=dword_140404A6C[indices[j]])return 2;
}cases++;}
printf("%u native mouse output-pointer, signed coordinate scaling and button-mask cases pass; SDL polling controlled\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-ui-mouse-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        f=out/'mouse.c';f.write_bytes(c);exe=f.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)

    def test_native_menu(self):
        s=read_client_source();a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER))
        if b'return sub_1401F8B20' in s[a:b]:s,_=repair(s)
        a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER));body=s[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        pages={0xfe000,0x198000,0x199000,0x26e000,0x6f000,0x95000,0x1fc000,0x1f8000}
        d=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);d.detail=True
        for ins in d.disasm(pe.get_data(0xfe1b0,0x412),0xfe1b0):
            for op in ins.operands:
                if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:pages.add((ins.address+ins.size+op.mem.disp)&~4095)
        for n in re.findall(rb'\b\d{8,9}\b',body):
            at=0x404a6c+4*int(n)
            if at<0x74794000:pages.update((at&~4095,(at&~4095)+4096))
        for index,size in ((73991224,256),(456202458,256),(70317963,160),(179457309,160)):
            at=0x404a6c+4*index;pages.update(range(at&~4095,(at+size+4095)&~4095,4096))
        clear_start=0x404a6c+4*421831837;clear_end=clear_start+0x2270864
        clear_page=clear_start&~4095;clear_size=((clear_end+4095)&~4095)-clear_page
        # Compare the large join reset as a contiguous region, including both edge guards.
        pages={p for p in pages if not clear_page<=p<clear_page+clear_size}
        c=r'''#include <winsock2.h>
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <emmintrin.h>
#include "defs.h"
static unsigned *dword_140404A6C;static unsigned char *image;
static unsigned mask,button_at,dns_case,address_count,mouse_flags,ticks;
static int mouse_x,mouse_y;
static char trace[4096];static unsigned trace_at;
static unsigned ips[17];static char *addresses[18];static struct hostent host;
static unsigned sr_DrawMenuButton(const char *name){trace_at+=sprintf(trace+trace_at,"button:%s;",name);return(mask>>button_at++)&1;}
static int sub_140198F0B(int enabled){if(enabled!=1)abort();trace_at+=sprintf(trace+trace_at,"relative;");return 0;}
static unsigned sub_140198F05(int *x,int *y){*x=mouse_x;*y=mouse_y;trace_at+=sprintf(trace+trace_at,"mouse;");return mouse_flags;}
static void sub_140095B00(void){trace_at+=sprintf(trace+trace_at,"practice;");}
static void *sub_1401FCD30(void *p,int value,size_t size){if(value||size!=0x2270864||p!=&dword_140404A6C[421831837])abort();trace_at+=sprintf(trace+trace_at,"clear;");return memset(p,value,size);}
static unsigned sub_140198F9B(void){trace_at+=sprintf(trace+trace_at,"ticks;");return ticks;}
static int sub_140199037(char *name,int capacity){if(capacity!=512)abort();strcpy(name,"local-test");trace_at+=sprintf(trace+trace_at,"hostname;");return dns_case==1?-1:0;}
static struct hostent *sub_140199031(const char *name){if(strcmp(name,"local-test"))abort();trace_at+=sprintf(trace+trace_at,"resolve;");return dns_case==2?0:&host;}
static unsigned ntohl_sr(unsigned ip){trace_at+=sprintf(trace+trace_at,"ntohl;");return __builtin_bswap32(ip);}
'''.encode()+PREFIX+body+r'''
static void thunk(unsigned char *p,void *f){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&f,8);p[10]=0xff;p[11]=0xe0;}
int main(void){image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);unsigned char *working=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image||!working)return 9;
'''.encode()
        for page in sorted(pages):
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))abort();\n'.encode()
            data=pe.get_data(page,4096)
            if data:c+=('{unsigned char b[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        c+=f'if(!VirtualAlloc(image+{clear_page},{clear_size},MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{clear_page},{clear_size},MEM_COMMIT,PAGE_READWRITE))abort();\n'.encode()
        c+=r'''
thunk(image+0x6f1f0,sr_DrawMenuButton);thunk(image+0x95b00,sub_140095B00);thunk(image+0x1fcd30,sub_1401FCD30);image[0x1f8b20]=0xc3;
'''.encode()
        for rva,f in ((0x198f0b,'sub_140198F0B'),(0x198f05,'sub_140198F05'),(0x198f9b,'sub_140198F9B'),(0x199037,'sub_140199037'),(0x199031,'sub_140199031'),(0x199001,'ntohl_sr')):
            thunk=pe.get_data(rva,6);self.assertEqual(thunk[:2],b'\xff\x25')
            slot=rva+6+int.from_bytes(thunk[2:],'little',signed=True)
            c+=f'*(void**)(image+{slot})={f};\n'.encode()
        c+=r'''
unsigned depths[]={0,15,16,17},counts[]={0,1,16,17},cases=0;
for(mask=0;mask<128;mask++)for(unsigned depth=0;depth<4;depth++){
 dns_case=(mask>>3)%3;address_count=counts[depth];mouse_flags=mask&7;mouse_x=(int)(mask*371)-22000;mouse_y=12000-(int)(mask*193);ticks=mask?UINT32_MAX-mask:0;
 for(unsigned i=0;i<17;i++){ips[i]=0x0200a8c0+i*0x1000000;addresses[i]=i<address_count?(char*)&ips[i]:0;}addresses[17]=0;memset(&host,0,sizeof host);host.h_addr_list=addresses;
 char saved[4096];unsigned saved_trace=0;
 for(unsigned native=0;native<2;native++){
 unsigned char *base=native?image:working;dword_140404A6C=(void*)(base+0x404a6c);
'''.encode()
        data_pages=sorted(p for p in pages if p>=0x400000)
        for page in data_pages:c+=f'memset(base+{page},0xa5,4096);\n'.encode()
        c+=f'memset(base+{clear_page},0xa5,{clear_size});\n'.encode()
        c+=r'''
 dword_140404A6C[70317962]=depths[depth];dword_140404A6C[283831310]=mask%7;dword_140404A6C[283831311]=0;
 dword_140404A6C[179473694]=12;dword_140404A6C[289301091]=27585;
 strcpy((char*)&dword_140404A6C[73991224],mask&16?"longer local player name":"Player");
 button_at=trace_at=0;memset(trace,0,sizeof trace);
 if(native)((void(*)(void))(image+0xfe1b0))();else sub_1400FE1B0();
 if(!native){saved_trace=trace_at;memcpy(saved,trace,sizeof trace);}
 else if(button_at!=7||trace_at!=saved_trace||memcmp(trace,saved,sizeof trace)){printf("dispatch mismatch mask=%u depth=%u\nC %s\nN %s\n",mask,depth,saved,trace);return 1;}
 }
'''.encode()
        for page in data_pages:c+=f'if(memcmp(image+{page},working+{page},4096)){{printf("state mismatch page={page:x} mask=%u depth=%u\\n",mask,depth);return 2;}}\n'.encode()
        c+=f'if(memcmp(image+{clear_page},working+{clear_page},{clear_size})){{puts("join reset/guard mismatch");return 3;}}\n'.encode()
        c+=r'''cases++;}
printf("%u complete native main-menu button combinations, mouse outputs, practice/join transitions, DNS/address limits, stack-depth and state/guard comparisons pass; UI, platform, reset and practice initialization boundaries controlled\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-main-menu-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        f=out/'menu.c';f.write_bytes(c);exe=f.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=90)
        (out/'stdout.txt').write_text(r.stdout)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)


if __name__=='__main__':unittest.main()
