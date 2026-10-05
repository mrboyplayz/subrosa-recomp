"""Compare codec option state/getter pointers and statuses with native dispatcher."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_codec_options import PROJECT,MARKER,repair

class CodecOptions(unittest.TestCase):
    def test_native_dispatcher(self):
        source=read_client_source()
        if b'uint64 sr_option_argument;' not in source:source,_=repair(source)
        a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        text=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "defs.h"
typedef uint64_t uint64;
#define nullptr NULL
#define SR_VEC_LANES(w,v,t) ((int *)&(v))
static unsigned calls,seen_option;static uintptr_t seen_context,seen_argument;
static unsigned char *current,*output;
static int sub_140199190(void *context,int option,void *argument){calls++;seen_option=option;seen_context=(uintptr_t)context-(uintptr_t)current;
seen_argument=(uintptr_t)argument==(uintptr_t)output?1:(uintptr_t)argument;return option==10015?-31:7;}
static void sub_1401CAAD0(uint64_t state,int mode,void *out){memset(out,0,112);}
static void sub_1401FCD30(void *p,int v,size_t n){memset(p,v,n);}
static int sub_1401F4B00(int *context,int bitrate,int size){return bitrate;}
static void sub_1401EBF00(uint64_t context){memset((void *)(uintptr_t)context,0,128);}
static unsigned sub_1401BC2A0(unsigned bound){return 7;}
'''.encode()+body+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x303000,MEM_RESERVE,PAGE_NOACCESS);
unsigned pages[]={0x1e0000,0x1e1000,0x1e2000,0x199000,0x1ca000,0x1fc000,0x1f8000,0x302000,0x1f4000,0x1eb000,0x1bc000};for(unsigned i=0;i<11;i++)if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;
'''.encode()
        data=pe.get_data(0x1e0f40,0x1340)
        text+=('{unsigned char b[]={'+','.join(map(str,data))+'};memcpy(image+0x1e0f40,b,sizeof b);}\n').encode()
        text+=r'''
thunk(image+0x199190,sub_140199190);thunk(image+0x1caad0,sub_1401CAAD0);thunk(image+0x1fcd30,sub_1401FCD30);
thunk(image+0x1f4b00,sub_1401F4B00);thunk(image+0x1ebf00,sub_1401EBF00);thunk(image+0x1bc2a0,sub_1401BC2A0);
const uint64_t cookie=0x123456789abcdefULL;memcpy(image+0x3020a0,&cookie,8);
unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
int values[]={0,1,-1,-1000,2048,2049,2051,48000,100,1024,64000,16000,-5};
int getters[]={4001,4003,4005,4007,4009,4011,4013,4015,4017,4021,4023,4025,4027,4029,4031,4037,4041,4043,4047,4049,11019,10015,10026};
unsigned checked=0;int extra[]={10015,10024,10026,11002,11018,11019,999,11099};
for(unsigned op=0;op<59;op++)for(unsigned value=0;value<13;value++)for(unsigned enabled=0;enabled<2;enabled++){
int option=op<51?4000+op:extra[op-51];if(option==4028)continue;
int is_pointer=0;for(unsigned j=0;j<sizeof getters/sizeof *getters;j++)if(option==getters[j])is_pointer=1;
unsigned char contexts[2][65536],outputs[2][128];uint64_t result[2],records[2][4];memset(contexts,0,sizeof contexts);memset(outputs,0xa5,sizeof outputs);
for(unsigned native=0;native<2;native++){
int *a=(int *)contexts[native];a[0]=20000;a[1]=24000;a[2]=2;a[3]=48000;a[27]=2048;a[3563]=enabled;a[28]=20;a[35]=25;a[45]=1;a[46]=enabled;a[4532]=12;
current=contexts[native];output=outputs[native];calls=0;seen_option=0;seen_context=seen_argument=0;
uintptr_t arg=is_pointer?(value?(uintptr_t)output:0):(uint32_t)values[value];
result[native]=native?((uint64_t (*)(int *,int,...))(image+0x1e0f40))(a,option,arg):sub_1401E0F40(a,option,arg);
records[native][0]=calls;records[native][1]=seen_option;records[native][2]=seen_context;records[native][3]=seen_argument;
/* Pointer options intentionally store the supplied pointer; normalize only that field. */
if(option==10026){uint64_t p;memcpy(&p,current+14256,8);if(p==(uintptr_t)output){p=1;memcpy(current+14256,&p,8);}}
}
if(result[0]!=result[1]||memcmp(contexts[0],contexts[1],65536)||memcmp(outputs[0],outputs[1],128)||memcmp(records[0],records[1],sizeof records[0])){printf("codec mismatch option %d value %d enabled %u status %llx/%llx\n",option,values[value],enabled,result[0],result[1]);return 1;}
checked++;}printf("%u native codec option state/getter/pointer/status cases pass; delegate/reset helpers controlled\n",checked);return 0;}
'''.encode()
        out=PROJECT/'reports/client-codec-options-20261002';out.mkdir(exist_ok=True,parents=True)
        fixture=out/'codec_fixture.c';fixture.write_bytes(text);exe=fixture.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)

if __name__=='__main__':unittest.main()
