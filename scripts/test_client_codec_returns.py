"""Native encoder early guards and final packet-padding result comparisons."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_codec_returns import PROJECT, MARKER, repair, repair_celt_returns


class CodecReturns(unittest.TestCase):
    def test_native_celt_guards_and_results(self):
        source=read_client_source()
        marker=b'//----- (000000014019B2E0)'
        a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
        if b'return sub_1401F8B20' in source[a:b]:source,_=repair_celt_returns(source)
        a=source.index(marker);b=source.index(b'//----- (',a+len(marker));body=source[a:b]
        start=body.index(b'{');end=body.index(b'    if ( i <= *(_DWORD *)(v60 + 40) )')
        guard=body[start:end]+b'  }\n  return 12345;\n}\n'
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <emmintrin.h>
#define _DWORD unsigned int
#define _QWORD unsigned long long
#define _BYTE unsigned char
#define __int32 int
#define __int16 short
#define BOOL int
static int recovered_guard(long long a1,long long a2,int a3,long long a4,int a5,unsigned *a6)
'''.encode()+guard+r'''
__attribute__((naked)) static int native_final(unsigned char *frame,void *code,int error){__asm__("push %rbp;mov %rcx,%rbp;sub $40,%rsp;mov %r8d,%eax;call *%rdx;add $40,%rsp;pop %rbp;ret");}
int main(void){unsigned char *image=VirtualAlloc(0,0x400000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''.encode()
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        for page in (0x19b000,0x19f000,0x1f8000,0x302000):
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
            c+=('{unsigned char bytes[]={'+','.join(map(str,pe.get_data(page,4096)))+f'}};memcpy(image+{page},bytes,sizeof bytes);}}\n').encode()
        c+=r'''
image[0x1f8b20]=0xc3;
unsigned mode[32],state[8192];int sizes[]={0,1,120,241,480,960,2000},capacities[]={-1,0,1,2,1275};unsigned cases=0;
for(unsigned n=0;n<7;n++)for(unsigned cap=0;cap<5;cap++)for(int input=0;input<2;input++){
 memset(state,0,sizeof state);memset(mode,0,sizeof mode);mode[1]=120;mode[2]=21;mode[10]=3;mode[12]=120;state[8]=1;state[2]=1;state[3]=1;void *config=mode;memcpy(state,&config,8);
 int want=recovered_guard((long long)state,input?1:0,sizes[n],0,capacities[cap],0);if(want==12345)continue;
 int actual=((int(*)(long long,long long,int,long long,int,unsigned*))(image+0x19b2e0))((long long)state,input?1:0,sizes[n],0,capacities[cap],0);
 if(actual!=want){printf("CELT guard mismatch %d/%d/%d: %d/%d\n",sizes[n],capacities[cap],input,actual,want);return 1;}cases++;
}
image[0x19f0cf]=0xc3;
for(int error=-1;error<=2;error++)for(int count=0;count<=1275;count+=85){
 unsigned char frame[0x500]={0};memcpy(frame+0x420,&count,4);
 int actual=native_final(frame,image+0x19f0ad,error),want=error?-3:count;
 if(actual!=want){printf("CELT final mismatch error=%d count=%d: %d/%d\n",error,count,actual,want);return 1;}cases++;
}
printf("%u native CELT early guard and final error/byte-count comparisons pass; full encoding excluded\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-celt-returns-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        path=out/'returns.c';path.write_bytes(c);exe=path.with_suffix('.exe')
        build=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing',str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(build.returncode,0,build.stderr)
        run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60)
        (out/'stdout.txt').write_text(run.stdout+run.stderr);self.assertEqual(run.returncode,0,run.stdout+run.stderr)

    def test_native_result_paths(self):
        source = read_client_source()
        a = source.index(MARKER)
        b = source.index(b'//----- (', a + len(MARKER))
        if b'return sub_1401F8B20((unsigned __int64)&v39 ^ v174);' in source[a:b]:
            source, _ = repair(source)
        a = source.index(MARKER)
        b = source.index(b'//----- (', a + len(MARKER))
        body = source[a:b]
        guard = body[body.index(b'  if ( a5 <= 1276 )'):body.index(b'  v132 =')]
        final = body[body.index(b'  SR_VEC_LANES(128, v39, i32)[0] +='):body.rindex(b'\n}')]
        c = r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <emmintrin.h>
#define SR_VEC_LANES(bits,value,type) (((int *)&(value)))
static int pack_result,pack_calls;
static unsigned int sub_1401E3980(void *out,int used,int capacity){(void)out;(void)used;(void)capacity;pack_calls++;return pack_result;}
static int recovered_guard(int *a1,int a3,int a5){__m128i v39;int v131;
'''.encode() + guard + r'''
 return 12345;
}
static int recovered_final(int *a1,int used,int capacity,int extra){__m128i v39;void *v180=0;
 ((int *)&v39)[0]=used;((int *)&v39)[1]=capacity;((int *)&v39)[3]=extra;
'''.encode() + final + r'''
}
typedef int (*encoder_fn)(int*,void*,int,void*,int,int,void*,int,int,int,int,void*,int);
__attribute__((naked)) static int native_final(unsigned char *frame,void *code){__asm__("push %rbp;mov %rcx,%rbp;sub $40,%rsp;call *%rdx;add $40,%rsp;pop %rbp;ret");}
static void thunk(unsigned char *at,void *target){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&target,8);}
int main(void){unsigned char *image=VirtualAlloc(0,0x400000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''.encode()
        pe = pefile.PE(str(PROJECT.parent / 'subrosa.exe'), fast_load=True)
        for page in (0x1e5000, 0x1e9000, 0x1e3000, 0x1f8000, 0x302000):
            c += f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
            data = pe.get_data(page, 4096)
            c += ('{unsigned char bytes[]={' + ','.join(map(str, data)) + f'}};memcpy(image+{page},bytes,sizeof bytes);}}\n').encode()
        c += r'''
image[0x1f8b20]=0xc3;thunk(image+0x1e3980,sub_1401E3980);
/* Final-path fragment has its own shadow space and returns before the original frame teardown. */
int context[8192],frames[]={-100,-1,0,1,480,960},capacities[]={-1,0,1,1276,2000};unsigned cases=0;
for(unsigned f=0;f<6;f++)for(unsigned cap=0;cap<5;cap++)for(unsigned rate=0;rate<2;rate++){
 memset(context,0,sizeof context);context[36]=rate?48000:frames[f]*10;context[4535]=0x12345678;
 int want=recovered_guard(context,frames[f],capacities[cap]);if(want==12345)continue;
 if(context[4535]!=0)return 2;context[4535]=0x12345678;
 int actual=((encoder_fn)(image+0x1e5400))(context,0,frames[f],0,capacities[cap],0,0,0,0,0,0,0,0);
 if(actual!=want||context[4535]!=0){printf("guard mismatch %d/%d/%u: %d != %d\n",frames[f],capacities[cap],rate,actual,want);return 1;}cases++;
}
memcpy(image+0x1e92f3,"\x48\x83\xec\x20",4);memcpy(image+0x1e933b,"\x48\x83\xc4\x20\xc3",5);
for(int enabled=0;enabled<2;enabled++)for(int failure=0;failure<3;failure++)for(int used=0;used<4;used++){
 unsigned char frame[0x500];memset(context,0,sizeof context);memset(frame,0,sizeof frame);context[37]=enabled;
 pack_result=failure==2?-1:failure;pack_calls=0;int want=recovered_final(context,used,100,3),calls=pack_calls;
 void *state=context;memcpy(frame+0x3a0,&state,8);memcpy(frame,&used,4);*(int *)(frame+4)=100;*(int *)(frame+0xc)=3;
 pack_calls=0;int actual=native_final(frame,image+0x1e92f3);
 if(actual!=want||pack_calls!=calls){printf("padding mismatch enabled=%d result=%d used=%d: %d != %d\n",enabled,pack_result,used,actual,want);return 1;}cases++;
}
printf("%u native encoder guard/final-padding result comparisons pass; other encoder paths remain partial\n",cases);return 0;}
'''.encode()
        out = PROJECT / 'reports/client-codec-returns-fixture-20261003'
        out.mkdir(parents=True, exist_ok=True)
        path = out / 'returns.c'
        path.write_bytes(c)
        exe = path.with_suffix('.exe')
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', '-O0', '-std=gnu11', '-fno-strict-aliasing', str(path), '-o', str(exe)], capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)
        result = subprocess.run([str(exe)], capture_output=True, text=True, timeout=60)
        (out / 'stdout.txt').write_text(result.stdout)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)


if __name__ == '__main__':
    unittest.main()
