"""Compare the recovered complete file image wrapper to original instructions."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_image_reader import PROJECT, PREFIX, BODY, repair


class ImageReader(unittest.TestCase):
    def test_native_wrapper(self):
        source=read_client_source()
        if PREFIX not in source: source,_=repair(source)
        start=source.index(PREFIX)
        end=source.index(b'//----- (',source.index(b'//----- (0000000140170C30)',start)+10)
        body=source[start:end]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        text=r'''#include <windows.h>
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
typedef uint64_t _QWORD;typedef uint64_t uint64;
static unsigned dword_140404A6C[19064471];
static unsigned char tls[32],slots[8];
static uint64_t gs(unsigned ignored){uint64_t p=(uintptr_t)tls;memcpy(slots,&p,8);return (uintptr_t)slots;}
#define __readgsqword gs
/* Controlled native TLS boundary; template/isolation tested separately. */
static uint64_t sr_client_static_tls(void){return *(uint64_t *)(uintptr_t)__readgsqword(0x58);}
static int count,success;static uint64_t decoded=0x12345678abcdef00ULL;
struct trace {unsigned reads,seeks,closes,decode;int active,capacity,consumed,end;unsigned seek;uint64_t result,user;char bytes[128];};
static struct trace trace;
static int sub_14020B8E4(__int64 *out,char *name,const char *mode){if(strcmp(name,"fixture.png")||strcmp(mode,"rb"))ExitProcess(20);*out=0x23456789abcdef00ULL;return 0;}
static size_t sub_1400012A0(void *file,void *buffer,int capacity){if((uintptr_t)file!=0x23456789abcdef00ULL||capacity!=128)ExitProcess(21);trace.reads++;for(int i=0;i<count;i++)((char *)buffer)[i]=(char)(i^0xa5);return count;}
static int sub_1400012C0(void *file,int amount){return 0;}
static int sub_140001300(void *file){return 0;}
static int sub_14020C4A8(__int64 file,unsigned offset,unsigned origin){if(file!=0x23456789abcdef00ULL||origin!=1)ExitProcess(22);trace.seeks++;trace.seek=offset;return 0;}
static int sub_14020B9E8(__int64 file){if(file!=0x23456789abcdef00ULL)ExitProcess(23);trace.closes++;return -1;}
static void *sub_140166160(__int64 context,int *x,int *y,unsigned *channels,unsigned requested){
 unsigned char *p=(void *)(uintptr_t)context;uintptr_t user,cur,end,original,original_end,read,skip,eof;
 memcpy(&read,p+16,8);memcpy(&skip,p+24,8);memcpy(&eof,p+32,8);memcpy(&user,p+40,8);
 if(read!=(uintptr_t)sub_1400012A0||skip!=(uintptr_t)sub_1400012C0||eof!=(uintptr_t)sub_140001300)ExitProcess(24);
 memcpy(&cur,p+192,8);memcpy(&end,p+200,8);memcpy(&original,p+208,8);memcpy(&original_end,p+216,8);
 if(cur!=(uintptr_t)p+56||original!=cur||original_end!=end||requested!=4)ExitProcess(25);
 trace.decode++;trace.user=user;memcpy(&trace.active,p+48,4);memcpy(&trace.capacity,p+52,4);memcpy(&trace.consumed,p+184,4);
 trace.end=(int)(end-cur);memcpy(trace.bytes,p+56,count?count:1);
 cur+=trace.end/2;memcpy(p+192,&cur,8);*x=13;*y=17;*channels=3;
 return success?(void *)(uintptr_t)decoded:NULL;
}
'''.encode()+body+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){
 unsigned char *image=VirtualAlloc(0,0x303000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
 unsigned pages[]={0x170000,0x20b000,0x20c000,0x166000,0x301000,0x1f8000,0x302000};
 for(unsigned i=0;i<7;i++)if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 8;
'''.encode()
        data=pe.get_data(0x170c30,0x181)
        text+=('{unsigned char b[]={'+','.join(map(str,data))+'};memcpy(image+0x170c30,b,sizeof b);}\n').encode()
        text+=r'''
 thunk(image+0x20b8e4,sub_14020B8E4);thunk(image+0x20c4a8,sub_14020C4A8);thunk(image+0x20b9e8,sub_14020B9E8);thunk(image+0x166160,sub_140166160);
 *(uintptr_t *)(image+0x301820)=(uintptr_t)sub_1400012A0;
 *(uintptr_t *)(image+0x301828)=(uintptr_t)sub_1400012C0;
 *(uintptr_t *)(image+0x301830)=(uintptr_t)sub_140001300;
 image[0x1f8b20]=0xc3;memcpy(image+0x2724dc,"rb",3);
 FlushInstructionCache(GetCurrentProcess(),image,0x302000);
 unsigned cases=0;
 for(count=0;count<=128;count++)for(success=0;success<2;success++){
  struct trace expected;int x,y;unsigned channels;
  memset(&trace,0,sizeof trace);trace.result=sub_140170C30("fixture.png",&x,&y,&channels,4);expected=trace;
  memset(&trace,0,sizeof trace);trace.result=((uint64_t (*)(char *,int *,int *,unsigned *,unsigned))(image+0x170c30))("fixture.png",&x,&y,&channels,4);
  if(memcmp(&trace,&expected,sizeof trace)){printf("image wrapper mismatch count %d success %d\n",count,success);return 1;}cases++;
 }
 VirtualFree(image,0,MEM_RELEASE);printf("%u native image-reader layout/callback/refill/seek/close/full-width-return cases pass\n",cases);return 0;
}
'''.encode()
        # Native open mode LEA points at RVA 2724dc? Resolve from original bytes.
        import capstone
        decoder=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);decoder.detail=True
        ins=next(decoder.disasm(pe.get_data(0x170c6d,7),0x140170c6d))
        mode=ins.address+ins.size+ins.operands[1].mem.disp-0x140000000
        text=text.replace(b'0x2724dc',hex(mode).encode())
        text=text.replace(b'unsigned pages[]={',b'unsigned pages[]={'+hex(mode&~4095).encode()+b',')
        text=text.replace(b'i<7',b'i<8')
        directory=PROJECT/'reports/client-image-reader-20261002';directory.mkdir(parents=True,exist_ok=True)
        fixture=directory/'image_fixture.c';fixture.write_bytes(text);exe=fixture.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe',str(fixture),'-O0','-std=gnu11','-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=20)
        (directory/'stdout.txt').write_text(result.stdout);(directory/'stderr.txt').write_text(result.stderr)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)

if __name__=='__main__':unittest.main()
