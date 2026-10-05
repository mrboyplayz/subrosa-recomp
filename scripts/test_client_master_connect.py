"""Compare native master HTTP exchange with controlled Winsock boundaries."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import capstone
import pefile
from repair_client_master_connect import PROJECT,MARKER,repair


class MasterConnect(unittest.TestCase):
    def test_native_exchange(self):
        source=read_client_source()
        a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER))
        if b'return sub_1401F8B20' in source[a:b]:source,_=repair(source)
        a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        d=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);d.detail=True
        pages={0xa3000,0xa4000,0x158000,0x15b000,0x1f8000,0x198000,0x199000}
        for ins in d.disasm(pe.get_data(0xa3f30,0x4da),0xa3f30):
            for op in ins.operands:
                if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:
                    p=ins.address+ins.size+op.mem.disp
                    if p>=0:pages.add(p&~4095)
        bindings={0x19902b:'socket_sr',0x199031:'sub_140199031',0x19903d:'sub_14019903D',
                  0x198ff5:'htons_sr',0x198fe3:'ioctlsocket_sr',0x198fdd:'connect_sr',
                  0x199019:'select_sr',0x198fcb:'_WSAFDIsSet_sr',0x198fe9:'getsockopt_sr',
                  0x198fa1:'sub_140198FA1',0x19901f:'send_sr',0x19900d:'recv_sr',
                  0x198fd7:'closesocket_sr',0x198ffb:'inet_addr_sr',0x199001:'ntohl_sr'}
        slots={}
        for rva,fn in bindings.items():
            ins=next(d.disasm(pe.get_data(rva,6),rva))
            self.assertEqual(ins.bytes[:2],bytes.fromhex('ff25'))
            slot=ins.address+ins.size+ins.operands[0].mem.disp
            slots[slot]=fn;pages.add(slot&~4095)
        for index,span in ((280649181,1024),(289301094,8192),(289317486,8192)):
            at=0x404a6c+4*index;pages.update(range(at&~4095,(at+span+4095)&~4095,4096))
        c=r'''#include <winsock2.h>
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
#define nullptr ((void*)0)
static unsigned *dword_140404A6C;static unsigned mode,service,delay_send,delay_recv,send_calls,recv_calls;
static unsigned host_ip=0x01020304;static char *addresses[2];static struct hostent host;static struct servent svc;
static char trace[8192],response[512];static unsigned trace_size;
static void event(const char *s){trace_size+=sprintf(trace+trace_size,"%s;",s);}
static __int64 socket_sr(int af,int type,int proto){if(af!=2||type!=1||proto!=6)abort();event("socket");return mode==0?-1:123;}
static struct hostent *sub_140199031(const char *s){if(strcmp(s,"www.crypticsea.com"))abort();event("host");return mode==1?NULL:&host;}
static struct servent *sub_14019903D(const char *s,const char *p){if(strcmp(s,"http")||strcmp(p,"tcp"))abort();event("service");return service?&svc:NULL;}
static unsigned short htons_sr(unsigned short v){event("htons");if(v!=80)abort();return 0x5000;}
static int sub_140158AB0(void *out,const char *fmt){event("format");return sprintf(out,"%s",fmt);}
static int ioctlsocket_sr(__int64 s,unsigned cmd,const int *v){if(s!=123||cmd!=0x8004667e||*v!=1)abort();event("nonblock");return 0;}
static int connect_sr(__int64 s,const void *addr,int len){const unsigned char *p=addr;if(s!=123||len!=16||*(unsigned short*)p!=2||*(unsigned short*)(p+2)!=0x5000||*(unsigned*)(p+4)!=host_ip)abort();event("connect");return -1;}
static int select_sr(int n,fd_set *r,fd_set *w,fd_set *x,const struct timeval *t){
 if(n!=124||x||r->fd_count!=1||w->fd_count!=1||r->fd_array[0]!=123||w->fd_array[0]!=123||t->tv_sec!=3||t->tv_usec)abort();event("select");return 1;
}
static int _WSAFDIsSet_sr(__int64 s,void *p){if(s!=123||((fd_set*)p)->fd_count!=1||((fd_set*)p)->fd_array[0]!=123)abort();event("isset");return 1;}
static int getsockopt_sr(__int64 s,int level,int opt,void *out,int *len){if(s!=123||level!=65535||opt!=4103||*len!=4)abort();*(int*)out=0;event("sockopt");return 0;}
static void sub_140198FA1(unsigned ms){if(ms!=100)abort();event("sleep");}
static int send_sr(__int64 s,const void *p,int len,int flags){if(s!=123||flags||len!=(int)strlen(p)||strcmp(p,"GET /anewzero/serverinfo.php HTTP/1.1\r\nHost:www.crypticsea.com\r\n\r\n"))abort();event("send");send_calls++;return mode==2||send_calls<=delay_send?-1:len;}
static int recv_sr(__int64 s,void *p,int len,int flags){if(s!=123||len!=8192||flags)abort();event("recv");recv_calls++;if(mode==3||recv_calls<=delay_recv)return -1;memset(p,0,8192);strcpy(p,response);return strlen(response);}
static int closesocket_sr(__int64 s){if(s!=123)abort();event("close");return 0;}
static int sub_14015B070(uintptr_t p,const char *fmt,uintptr_t out){if(strcmp(fmt,"%d"))abort();event("scan");return sscanf((const char*)p,fmt,(int*)out);}
static unsigned inet_addr_sr(const char *p){event("inet");return inet_addr(p);}
static unsigned ntohl_sr(unsigned n){event("ntohl");return ntohl(n);}
static void sub_1401F8694(void){abort();}
'''.encode()+body+r'''
static void thunk(unsigned char *p,void *f){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&f,8);p[10]=0xff;p[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS),*working=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);
if(!image||!working)return 9;
'''.encode()
        for page in sorted(pages):
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))abort();\n'.encode()
            data=pe.get_data(page,4096)
            if data:c+=('{unsigned char b[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        for slot,fn in slots.items():c+=f'*(void**)(image+{slot})={fn};\n'.encode()
        c+=r'''
thunk(image+0x158ab0,sub_140158AB0);thunk(image+0x15b070,sub_14015B070);thunk(image+0x1f8694,sub_1401F8694);
image[0x1f8b20]=0xc3; /* native successful cookie check preserves EAX */
addresses[0]=(char*)&host_ip;addresses[1]=0;host.h_addr_list=addresses;svc.s_port=0x5000;
unsigned cases=0;
for(mode=0;mode<6;mode++)for(service=0;service<2;service++)for(delay_send=0;delay_send<3;delay_send+=2)for(delay_recv=0;delay_recv<3;delay_recv+=2)for(unsigned port=0;port<3;port++){
sprintf(response,"HTTP/1.1 200 OK\r\n\r\n\t38\t%s\t%u\tone\ttwo\tthree\tfour\tfive\tsix\tseven\teight\t",mode==5?"255.255.255.255":"1.2.3.4",port==0?0:port==1?65535:27500);
char saved[8192];unsigned saved_size=0;unsigned saved_result=0;
for(unsigned native=0;native<2;native++){
unsigned char *base=native?image:working;dword_140404A6C=(void*)(base+0x404a6c);
'''.encode()
        # Import IAT pages are below 0x400000; preserve their redirected pointers.
        data_pages=sorted(p for p in pages if p>=0x400000)
        for page in data_pages:c+=f'memset(base+{page},0xa5,4096);\n'.encode()
        c+=r'''
trace_size=send_calls=recv_calls=0;memset(trace,0,sizeof trace);
unsigned result=native?((unsigned(*)(void))(image+0xa3f30))():(unsigned)sr_ConnectMasterServer();
if(!native){saved_size=trace_size;saved_result=result;memcpy(saved,trace,sizeof trace);}
else if(result!=saved_result||trace_size!=saved_size||memcmp(saved,trace,sizeof trace)){
printf("mismatch mode=%u service=%u senddelay=%u recvdelay=%u port=%u result=%u/%u\nC %s\nN %s\n",mode,service,delay_send,delay_recv,port,saved_result,result,saved,trace);return 1;}
}
'''.encode()
        for page in data_pages:c+=f'if(memcmp(image+{page},working+{page},4096)){{printf("data mismatch page={page:x} mode=%u service=%u port=%u\\n",mode,service,port);return 2;}}\n'.encode()
        c+=r'''cases++;}
printf("%u complete native master HTTP/Winsock/retry/IP/port/server-list/return/guard comparisons pass; Winsock, sleep, formatter and scanner boundaries controlled; undefined pre-retry stack-counter paths excluded\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-master-connect-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        f=out/'master.c';f.write_bytes(c);exe=f.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe),'-lws2_32'],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=45)
        (out/'stdout.txt').write_text(r.stdout)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)


if __name__=='__main__':unittest.main()
