"""Compare full audio startup ABI/specs/device state with native at controlled SDL boundaries."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_audio_startup import PROJECT,MARKER,BODY,repair

class AudioStartup(unittest.TestCase):
    def test_native_initialization(self):
        source=read_client_source()
        if b'sr_startup_audio_spec desired,obtained;' not in source:source,_=repair(source)
        a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        text=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "defs.h"
typedef uint64_t uint64;
typedef __m128i _OWORD;
'''.encode()+BODY.split(b'extern ')[0]+r'''
static unsigned char *state,*image;static unsigned mode,native,calls,trace[256];static int bad;
#define dword_140404A6C ((unsigned *)(state+0x404a6c))
static __m128i xmmword_140278D30;
static void sub_140069A00(void){}
static void sub_14006BB10(void){}
static void sub_14023D25C(void){}
static void sub_14023D33C(void){}
static void sub_140069400(void *a,unsigned char *b,int c){}
static void sub_14006A380(void *a,unsigned char *b,int c){}
static void record(unsigned op,unsigned arg){trace[calls++]=op;trace[calls++]=arg;}
static int sr_audio_count(int capture){record(0,capture);return (int)(mode%4)-1;}
static const char *sr_audio_name(int index,int capture){record(1,index+capture*100);return capture?"Capture fixture":"Playback fixture";}
static void *sr_audio_semaphore(unsigned value){record(2,value);return (void *)0x123456789abcULL;}
static void *sr_audio_thread(void *fn,const char *name,void *data,void *begin,void *end){record(3,0);
if(fn!=(native?image+0x6bb10:(void *)sub_14006BB10)||begin!=(native?image+0x23d25c:(void *)sub_14023D25C)||end!=(native?image+0x23d33c:(void *)sub_14023D33C)||strcmp(name,"cs_audio_updatethread")||data)bad=1;
return (void *)0x23456789abcdULL;}
static void *sr_audio_memset(void *p,int v,size_t n){return memset(p,v,n);}
static unsigned sr_audio_open(const char *name,int capture,const sr_startup_audio_spec *desired,sr_startup_audio_spec *obtained,int flags){
record(4,capture);unsigned char zero[32]={0};sr_startup_audio_spec expected;memcpy(&expected,zero,32);
expected.freq=48000;expected.format=capture?0x8010:0x8120;expected.channels=capture?1:2;expected.samples=1024;
expected.callback=native?(void (*)(void *,unsigned char *,int))(image+(capture?0x6a380:0x69400)):(capture?sub_14006A380:sub_140069400);
if(memcmp(desired,&expected,32)||flags||(capture?(!name||strcmp(name,"Capture fixture")):name!=NULL))bad=1;
memset(obtained,0,32);obtained->samples=mode&4?512:1024;obtained->channels=mode&8?1:2;
return mode&16?0:(capture?0xf2345678u:0xe1234567u);}
static void sr_audio_pause(unsigned device,int pause){record(5,device);record(6,pause);}
'''.encode()+body+r'''
int main(void){image=VirtualAlloc(0,0x49b0000,MEM_RESERVE,PAGE_NOACCESS);unsigned char *recovered=VirtualAlloc(0,0x49b0000,MEM_RESERVE,PAGE_NOACCESS);
unsigned pages[]={0x69000,0x198000,0x26e000,0x273000,0x278000,0x404000,0x405000,0x4c4000,0x4970000,0x4971000,0x4972000,0x4973000,0x4974000,0x4975000,0x4976000,0x4977000,0x4978000,0x4979000};
for(unsigned i=0;i<18;i++){if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;if(i>=5&&!VirtualAlloc(recovered+pages[i],4096,MEM_COMMIT,PAGE_READWRITE))return 9;}
'''.encode()
        for rva,n in [(0x69630,0x2b9),(0x278000,4096)]:
            data=pe.get_data(rva,n);text+=('{unsigned char b[]={'+','.join(map(str,data))+'};memcpy(image+'+hex(rva)+',b,sizeof b);}\n').encode()
        text+=b'memcpy(&xmmword_140278D30,image+0x278d30,16);memcpy(image+0x273830,"cs_audio_updatethread",21);\n'
        # Substitute only the file-based HRTF helper boundary.
        text+=b'{unsigned char *a=image+0x69a00;void *p=sub_140069A00;a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}\n'
        for r,alias in [(0x198e7b,'sr_audio_count'),(0x198e81,'sr_audio_name'),(0x198e5d,'sr_audio_semaphore'),(0x198e6f,'sr_audio_thread'),(0x198e57,'sr_audio_memset'),(0x198e87,'sr_audio_open'),(0x198e8d,'sr_audio_pause')]:
            code=pe.get_data(r,6);target=r+6+int.from_bytes(code[2:],'little',signed=True)
            text+=('{unsigned char b[]={'+','.join(map(str,code))+'};memcpy(image+'+hex(r)+',b,6);void *p='+alias+';memcpy(image+'+hex(target)+',&p,8);}\n').encode()
        text+=r'''
for(mode=0;mode<32;mode++){
unsigned saved_trace[256],saved_calls=0;uint64_t result[2];
for(native=0;native<2;native++){
state=native?image:recovered;memset(state+0x404000,0xa5,8192);memset(state+0x4c4000,0xa5,4096);memset(state+0x4970000,0xa5,0xa000);calls=0;bad=0;
result[native]=native?((uint64_t (*)(void))(image+0x69630))():sub_140069630();if(bad){printf("audio spec/ABI mismatch mode %u native %u\n",mode,native);return 1;}
if(!native){saved_calls=calls;memcpy(saved_trace,trace,sizeof trace);}
else if(result[0]!=result[1]||saved_calls!=calls||memcmp(trace,saved_trace,calls*4)||memcmp(image+0x404000,recovered+0x404000,8192)||memcmp(image+0x4c4000,recovered+0x4c4000,4096)||memcmp(image+0x4970000,recovered+0x4970000,0xa000)){printf("audio state mismatch mode %u returns %llu/%llu\n",mode,result[0],result[1]);return 2;}}
}printf("32 native audio startup/spec/handle/device/failure cases pass; HRTF, SDL and callbacks controlled\n");return 0;}
'''.encode()
        out=PROJECT/'reports/client-audio-startup-20261002';out.mkdir(exist_ok=True,parents=True)
        fixture=out/'audio_fixture.c';fixture.write_bytes(text);exe=fixture.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout);self.assertEqual(r.returncode,0,r.stdout+r.stderr)

if __name__=='__main__':unittest.main()
