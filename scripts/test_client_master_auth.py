"""Compare complete native master auth transitions with controlled I/O boundaries."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import capstone
import pefile
from repair_client_master_auth import PROJECT,MARKER,repair


class MasterAuth(unittest.TestCase):
    def test_native_state_machine(self):
        s=read_client_source();a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER))
        if b'return sub_1401F8B20' in s[a:b]:s,_=repair(s)
        a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER));body=s[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        ticks_thunk=pe.get_data(0x198f9b,6)
        self.assertEqual(ticks_thunk[:2],b'\xff\x25')
        self.assertEqual(0x198f9b+6+int.from_bytes(ticks_thunk[2:],'little',signed=True),0x26e4c8)
        pages={0x6b000,0x6c000,0x198000,0x26e000,0x188000,0x7b000,0x130000,0x11c000,0x24c000,0x1f8000}
        d=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);d.detail=True
        for ins in d.disasm(pe.get_data(0x6bed0,0x41e),0x6bed0):
            for op in ins.operands:
                if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:pages.add((ins.address+ins.size+op.mem.disp)&~4095)
        for n in re.findall(rb'\b\d{8,9}\b',body):
            at=0x404a6c+4*int(n)
            if at<0x74794000:pages.update((at&~4095,(at&~4095)+4096))
        for index,size in ((289301092,65548),(289317483,65552),(278384730,2048),(73991096,32),(278520245,600)):
            at=0x404a6c+4*index;pages.update(range(at&~4095,(at+size+4095)&~4095,4096))
        header=pe.get_dword_at_rva(0x2b2658)
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <emmintrin.h>
#include "defs.h"
static unsigned *dword_140404A6C;static unsigned dword_1402B2658;
static unsigned char *image;static unsigned ticks,response_kind,response_at;
static char trace[4096];static unsigned trace_at;
static unsigned char packets[4][32];static unsigned sizes[4],queued;
static void sub_1401880C0(void){}
static void sub_140198D20(__int64 callback){if((uintptr_t)callback!=(uintptr_t)sub_1401880C0&&(uintptr_t)callback!=(uintptr_t)(image+0x1880c0))abort();trace_at+=sprintf(trace+trace_at,"ticket;");}
static unsigned sub_140198F9B(void){trace_at+=sprintf(trace+trace_at,"ticks;");return ticks;}
static void sub_14007B180(__m128i *p,int size,int count){
 unsigned n=size*count,at=dword_140404A6C[289301092];if(n>2048||at+n>65536)abort();
 memcpy((char*)&dword_140404A6C[289301094]+at,p,n);dword_140404A6C[289301092]+=n;trace_at+=sprintf(trace+trace_at,"append:%u;",n);
}
static void sub_140130350(unsigned ip,unsigned port,int kind){if(ip!=0x01020304||port!=27592||kind)abort();trace_at+=sprintf(trace+trace_at,"send:%u;",dword_140404A6C[289301092]);}
static int sub_14011C760(void){trace_at+=sprintf(trace+trace_at,"receive;");if(response_at>=queued)return 0;
 unsigned n=sizes[response_at];memcpy(&dword_140404A6C[289317486],packets[response_at++],n);
 dword_140404A6C[289317483]=n;dword_140404A6C[289317484]=4;dword_140404A6C[289317485]=0;return n;
}
static int sub_14024C22C(void *path){trace_at+=sprintf(trace+trace_at,"chdir:%s;",(char*)path);return 0;}
'''.encode()+body+r'''
static void thunk(unsigned char *p,void *f){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&f,8);p[10]=0xff;p[11]=0xe0;}
static void packet(unsigned type,unsigned one,unsigned two,unsigned three){unsigned char *p=packets[queued];memcpy(p,&dword_1402B2658,4);p[4]=type;memcpy(p+5,&one,4);memcpy(p+9,&two,4);memcpy(p+13,&three,4);sizes[queued++]=type==72?17:13;}
int main(void){image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);unsigned char *working=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image||!working)return 9;
'''.encode()
        for page in sorted(pages):
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))abort();\n'.encode()
            data=pe.get_data(page,4096)
            if data:c+=('{unsigned char b[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        c+=f'dword_1402B2658={header};\n'.encode()
        c+=r'''
thunk(image+0x198d20,sub_140198D20);*(void**)(image+0x26e4c8)=sub_140198F9B;
thunk(image+0x7b180,sub_14007B180);thunk(image+0x130350,sub_140130350);thunk(image+0x11c760,sub_14011C760);thunk(image+0x24c22c,sub_14024C22C);image[0x1f8b20]=0xc3;
unsigned states[]={0,1,2,UINT32_MAX},lengths[]={0,1,1023,1024},deltas[]={0,1000,1001,UINT32_MAX},cases=0;
for(unsigned state=0;state<4;state++)for(unsigned steam=0;steam<2;steam++)for(unsigned accepted=0;accepted<2;accepted++)
for(unsigned length=0;length<4;length++)for(unsigned delta=0;delta<4;delta++)for(response_kind=0;response_kind<6;response_kind++){
 queued=0;switch(response_kind){case 0:break;case 1:packet(72,444,0,0);break;case 2:packet(72,444,1,1234567);break;case 3:packet(73,0,0,0);break;case 4:packet(73,1,1234567,0);break;case 5:packet(72,444,1,1234567);packet(73,1,1234567,0);break;}
char saved[4096];unsigned saved_trace=0,saved_at=0;
for(unsigned native=0;native<2;native++){
unsigned char *base=native?image:working;dword_140404A6C=(void*)(base+0x404a6c);
'''.encode()
        data_pages=sorted(p for p in pages if p>=0x400000)
        for page in data_pages:c+=f'memset(base+{page},0xa5,4096);\n'.encode()
        c+=r'''
dword_140404A6C[179668277]=states[state];dword_140404A6C[134050338]=accepted;dword_140404A6C[134050334]=17;
dword_140404A6C[278384725]=steam;dword_140404A6C[278384729]=length&1;dword_140404A6C[278384987]=length!=0;dword_140404A6C[278384730]=lengths[length];
dword_140404A6C[179668278]=100;dword_140404A6C[280649181]=0x01020304;dword_140404A6C[280649182]=27592;
memset(&dword_140404A6C[73991096],'X',32);strcpy((char*)&dword_140404A6C[278520373],"data");strcpy((char*)&dword_140404A6C[278520245],"..");
response_at=trace_at=0;memset(trace,0,sizeof trace);ticks=100+deltas[delta];
for(unsigned frame=0;frame<2;frame++){if(native)((void(*)(void))(image+0x6bed0))();else sub_14006BED0();ticks+=1001;}
if(!native){saved_trace=trace_at;saved_at=response_at;memcpy(saved,trace,sizeof trace);}
else if(trace_at!=saved_trace||response_at!=saved_at||memcmp(trace,saved,sizeof trace)){
printf("dispatch mismatch state=%u steam=%u accept=%u len=%u delta=%u response=%u\nC %s\nN %s\n",state,steam,accepted,length,delta,response_kind,saved,trace);return 1;}
}
'''.encode()
        for page in data_pages:c+=f'if(memcmp(image+{page},working+{page},4096)){{printf("state mismatch page={page:x} state=%u steam=%u accept=%u len=%u delta=%u response=%u\\n",state,steam,accepted,length,delta,response_kind);return 2;}}\n'.encode()
        c+=r'''cases++;}
printf("%u complete native master H/I/auth/ticket/retry/packet/phone/state/guard comparisons over two frames pass; ticket, clock, packet-builder, transport and directory boundaries controlled; truncated packets excluded\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-master-auth-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        f=out/'auth.c';f.write_bytes(c);exe=f.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)


if __name__=='__main__':unittest.main()
