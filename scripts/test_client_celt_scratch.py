"""Compare native CELT scratch clearing with the recovered allocated buffer."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_celt_scratch import PROJECT, MARKER, repair, repair_prefilter


class CeltScratch(unittest.TestCase):
    def test_native_prefilter_history(self):
        source = read_client_source()
        marker = b'//----- (00000001401B2750)'
        a = source.index(marker); b = source.index(b'//----- (', a + len(marker))
        if b'v40 = &v24;' in source[a:b]:
            source = repair_prefilter(source)
        a = source.index(marker); b = source.index(b'//----- (', a + len(marker))
        body = source[a:b]
        c = r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <emmintrin.h>
#include <malloc.h>
typedef uint64_t uint64;
typedef uint64_t _QWORD;
typedef unsigned int _DWORD;
static uint64_t zero[2];
#define SR_VEC_READ_LANES(bits,value,type) (zero)
static void *sub_1401FC920(__m128i *out,__m128i *in,size_t bytes){return memmove(out,in,bytes);}
static void sub_1401A0C20(void *out,void *in,int old_period,int new_period,int count,float old_gain,float gain,int old_taps,int taps,long long window,int overlap){memmove(out,in,4*count);}
static void sub_1401A8190(void *a,void *b,int c,int d,int e){abort();}
static void sub_1401A8740(long long a,long long b,int c,int d,int *e){abort();}
static float sub_1401A8B30(long long a,int b,int c,int d,int *e,int f,float g){abort();}
static long long sub_1401F8B20(unsigned long long ignored){return 0;}
'''.encode() + body.replace(b'sub_1401B2750(', b'recovered_prefilter(') + r'''
typedef long long (*fn)(long long*,long long,long long,int,int,int,unsigned int*,float*,int*,int,int,long long);
__attribute__((naked)) static void probe(void){__asm__("jmp ___chkstk_ms");}
static void thunk(unsigned char *at,void *target){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&target,8);}
int main(void){unsigned char *image=VirtualAlloc(0,0x400000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''.encode()
        pe = pefile.PE(str(PROJECT.parent / 'subrosa.exe'), fast_load=True)
        for page in (0x1b2000, 0x1b3000, 0x1fc000, 0x1a0000, 0x1f8000, 0x243000, 0x278000, 0x279000, 0x282000, 0x283000, 0x302000):
            c += f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
            data = pe.get_data(page, 4096)
            c += ('{unsigned char bytes[]={' + ','.join(map(str, data)) + f'}};memcpy(image+{page},bytes,sizeof bytes);}}\n').encode()
        c += r'''
thunk(image+0x1fc920,sub_1401FC920);thunk(image+0x1a0c20,sub_1401A0C20);thunk(image+0x1f89d0,probe);thunk(image+0x243f84,abs);image[0x1f8b20]=0xc3;
unsigned int mode[32],state[8192],expected_state[8192],analysis[16],period[2];float gains[2];int taps[2],sizes[]={120,480,1200};
float samples[4096],expected_samples[4096],history[4096],expected_history[4096];unsigned cases=0;
for(unsigned n=0;n<3;n++)for(int channels=1;channels<=2;channels++)for(int overlap=16;overlap<=64;overlap*=4){
 memset(mode,0,sizeof mode);mode[1]=overlap;mode[12]=120;memset(state,0,sizeof state);memset(analysis,0,sizeof analysis);
 for(unsigned i=0;i<4096;i++){samples[i]=(int)(i%107)-53;history[i]=(int)(i%71)-35;}
 for(unsigned i=63;i<63+128;i++)state[i]=i*997;void *config=mode;memcpy(state,&config,8);
 memcpy(expected_state,state,sizeof state);memcpy(expected_samples,samples,sizeof samples);memcpy(expected_history,history,sizeof history);
 long long rr=recovered_prefilter((long long*)expected_state,(long long)expected_samples,(long long)expected_history,channels,sizes[n],0,period,gains,taps,0,100,(long long)analysis);
 long long rn=((fn)(image+0x1b2750))((long long*)state,(long long)samples,(long long)history,channels,sizes[n],0,period+1,gains+1,taps+1,0,100,(long long)analysis);
 if(rn!=rr||memcmp(state,expected_state,sizeof state)||memcmp(samples,expected_samples,sizeof samples)||memcmp(history,expected_history,sizeof history)||period[0]!=period[1]||memcmp(gains,gains+1,4)||taps[0]!=taps[1]){printf("prefilter history mismatch count=%d channels=%d overlap=%d\n",sizes[n],channels,overlap);return 1;}cases++;
}
printf("%u native prefilter comparisons pass with pitch analysis disabled and a controlled filter leaf; complete prefilter remains partial\n",cases);return 0;}
'''.encode()
        out = PROJECT / 'reports/client-celt-prefilter-fixture-20261003'
        out.mkdir(parents=True, exist_ok=True); path = out / 'prefilter.c'; path.write_bytes(c); exe = path.with_suffix('.exe')
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', '-O0', '-std=gnu11', '-fno-strict-aliasing', str(path), '-o', str(exe), '-lm'], capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)
        result = subprocess.run([str(exe)], capture_output=True, text=True, timeout=60)
        (out / 'stdout.txt').write_text(result.stdout)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)

    def test_native_scratch_clear(self):
        source = read_client_source()
        a = source.index(MARKER)
        b = source.index(b'//----- (', a + len(MARKER))
        if b'v127 = &j;' in source[a:b]:
            source, _ = repair(source)
        a = source.index(MARKER)
        b = source.index(b'//----- (', a + len(MARKER))
        body = source[a:b]
        start = body.index(b'      v22 = alloca(')
        end = body.index(b'      if ( !v70', start)
        kernel = body[start:end]
        pe = pefile.PE(str(PROJECT.parent / 'subrosa.exe'), fast_load=True)
        c = r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
static void *sub_1401FCD30(void *p,int value,size_t count){return memset(p,value,count);}
static void recovered(int v54,int v53,int v57,unsigned char *out){
 unsigned long long v21=4ULL*v54*v53+15;void *v22;int *p_j;
'''.encode() + kernel + r'''
 memcpy(out,p_j,4*v57);
}
__attribute__((naked)) static void native(unsigned char *frame,void *code){__asm__("push %rbp;mov %rcx,%rbp;sub $40,%rsp;call *%rdx;add $40,%rsp;pop %rbp;ret");}
static void thunk(unsigned char *at,void *target){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&target,8);}
int main(void){unsigned char *image=VirtualAlloc(0,0x400000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''.encode()
        for page in (0x19c000, 0x1fc000):
            c += f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
            data = pe.get_data(page, 4096)
            c += ('{unsigned char bytes[]={' + ','.join(map(str, data)) + f'}};memcpy(image+{page},bytes,sizeof bytes);}}\n').encode()
        c += r'''
memcpy(image+0x19c6d9,"\x48\x83\xec\x20",4);memcpy(image+0x19c6f6,"\x48\x83\xc4\x20\xc3",5);thunk(image+0x1fcd30,sub_1401FCD30);
unsigned char frame[0x500],out[8192],expected[8192];int sizes[]={0,1,16,21,120,240,960};unsigned cases=0;
for(unsigned size=0;size<7;size++)for(int channels=1;channels<=4;channels++)for(unsigned alignment=0;alignment<4;alignment++){
 memset(frame,0,sizeof frame);memset(out,0xa5,sizeof out);memset(expected,0xa5,sizeof expected);
 recovered(960,channels,sizes[size],expected+16+alignment*4);
 void *buffer=out+16+alignment*4;memcpy(frame+0x150,&buffer,8);memcpy(frame+0x14,sizes+size,4);
 native(frame,image+0x19c6d9);
 if(memcmp(out,expected,sizeof out)){printf("scratch clear mismatch size=%d channels=%d alignment=%u\n",sizes[size],channels,alignment);return 1;}cases++;
}
printf("%u native CELT scratch-clear extent/alignment/output-guard comparisons pass; full encoder remains partial\n",cases);return 0;}
'''.encode()
        out = PROJECT / 'reports/client-celt-scratch-fixture-20261003'
        out.mkdir(parents=True, exist_ok=True)
        path = out / 'scratch.c'
        path.write_bytes(c)
        exe = path.with_suffix('.exe')
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', '-O0', '-std=gnu11', '-fno-strict-aliasing', str(path), '-o', str(exe)], capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)
        result = subprocess.run([str(exe)], capture_output=True, text=True, timeout=60)
        (out / 'stdout.txt').write_text(result.stdout)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)


if __name__ == '__main__':
    unittest.main()
