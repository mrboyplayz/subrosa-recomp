"""Check assembled bytes and compare regular math paths to the original image."""
import hashlib
from client_sources import read_client_source
import json
from pathlib import Path
import shutil
import subprocess
import unittest
import pefile
from capstone.x86 import X86_OP_MEM, X86_OP_IMM, X86_REG_RIP
from capstone import Cs, CS_ARCH_X86, CS_MODE_64, CS_GRP_CALL, CS_GRP_JUMP
from recover_client_native_gaps import assembly, BOUNDARIES, BASE, BSS, PIN

PROJECT=Path(__file__).resolve().parent.parent


class NativeGapTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'))
        cls.out=PROJECT/'reports/client-native-tests-20261001'
        cls.out.mkdir(exist_ok=True)
        text,cls.record=assembly(cls.pe)
        cls.src=cls.out/'native.s'; cls.obj=cls.out/'native.obj'
        cls.src.write_text(text)
        result=subprocess.run(['gcc','-c',str(cls.src),'-o',str(cls.obj)],capture_output=True,text=True)
        if result.returncode:
            raise RuntimeError(result.stderr)

    def test_original_encoding_except_explicit_relocations(self):
        target=self.out/'native_text.bin'
        result=subprocess.run(['objcopy','--dump-section','.text$sr_native='+str(target),str(self.obj)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        actual=target.read_bytes()
        groups=json.loads(BOUNDARIES.read_text()); start=groups[0]['start']
        c=Cs(CS_ARCH_X86,CS_MODE_64); c.detail=True
        count=0
        for g in groups:
            expected=bytearray(self.pe.get_data(g['start']-BASE,g['end']-g['start']))
            restored=bytearray(actual[g['start']-start:g['end']-start])
            for item in g['instructions']:
                at=item['address']; i=next(c.disasm(self.pe.get_data(at-BASE,item['size']),at))
                for op in i.operands:
                    pos=None
                    if op.type==X86_OP_MEM and op.mem.base==X86_REG_RIP:
                        pos=i.disp_offset
                    elif op.type==X86_OP_IMM and (i.group(CS_GRP_CALL) or i.group(CS_GRP_JUMP)):
                        if not any(x['start']<=op.imm<x['end'] for x in groups):
                            pos=i.imm_offset
                    if pos is not None:
                        offset=at-g['start']+pos
                        expected[offset:offset+4]=restored[offset:offset+4]=b'\0'*4
                count+=1
            self.assertEqual(restored,expected,hex(g['start']))
        self.assertEqual(count,7913)
        relocs=subprocess.check_output(['objdump','-r',str(self.obj)],text=True)
        self.assertIn('IMAGE_REL_AMD64_ADDR32NB',relocs)
        self.assertNotIn('_XMM',relocs)
        self.assertNotIn('JUMPOUT',relocs)

    def test_regular_math_bits_and_mxcsr_against_native(self):
        self.assertEqual(hashlib.sha256((PROJECT.parent/'subrosa.exe').read_bytes()).hexdigest(),PIN)
        segments=[(0x23fc70,0x245018),(0x254ccc,0x254e1c),(0x254f48,0x25511e),
                  (0x25c4f0,0x25d286),(0x26e000,0x2b1400)]
        loaders=[]
        for i,(a,b) in enumerate(segments):
            filename='reference_%d.bin'%i
            (self.out/filename).write_bytes(self.pe.get_data(a,b-a))
            loaders.append('load(image+0x%x,"%s",0x%x);'%(a,filename,b-a))
        undefined=subprocess.check_output(['nm','--undefined-only',str(self.obj)],text=True)
        names=[line.split()[-1] for line in undefined.splitlines() if line.split()]
        # Test-only guards abort if a path escapes the copied math closure.
        # They do not enter the client link or substitute any client behavior.
        stubs=['.text']
        for name in names:
            if name in ('dword_140404A6C','_security_cookie','dword_140302080','strnlen_sr','sub_140254F48'):
                continue
            stubs+=['.globl '+name,name+':','jmp sr_native_unexpected']
        stub=self.out/'fixture_guards.s';stub.write_text('\n'.join(stubs)+'\n')
        body=r'''
#include <windows.h>
#include <immintrin.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
uint32_t dword_140404A6C[20000000];
uint64_t _security_cookie=0x2b992ddfa232ULL;
uint32_t dword_140302080;
void sr_native_unexpected(void) {fputs("Unexpected exceptional or external path\n",stderr);exit(97);}
static void load(void *p,const char *name,size_t n) {FILE *f=fopen(name,"rb");if(!f||fread(p,1,n,f)!=n)exit(2);fclose(f);}
double cos(double),sin(double),tan(double),exp(double),log(double),log10(double),pow(double,double);
float cosf(float),expf(float),powf(float,float);
LENGTH_C_PORTS
static uint64_t bits(double x){uint64_t r;memcpy(&r,&x,8);return r;}
static uint32_t fbits(float x){uint32_t r;memcpy(&r,&x,4);return r;}
int main(void) {
    unsigned char *image=VirtualAlloc(NULL,0x4cc0000,MEM_RESERVE|MEM_COMMIT,PAGE_EXECUTE_READWRITE);
    if(!image)return 2;
    LOADERS
    FlushInstructionCache(GetCurrentProcess(),image,0x4cc0000);
    struct {double (*fn)(double);unsigned rva;const char *name;} unary[]={
        {cos,0x23fc70,"cos"},{sin,0x2431f0,"sin"},{tan,0x2437e0,"tan"},
        {exp,0x243f90,"exp"},{log,0x2443a0,"log"},{log10,0x2448d0,"log10"}};
    uint64_t comparisons=0;uint32_t state=0x9e3779b9;
    unsigned max_feature=__builtin_cpu_supports("avx")&&__builtin_cpu_supports("fma")?2:0;
    for(unsigned feature=0;feature<=max_feature;++feature) {
        dword_140404A6C[(0x144cbf9ecULL-0x140404a6cULL)/4]=feature;
        *(uint32_t *)(image+0x4cbf9ec)=feature;
        for(unsigned mode=0;mode<16;++mode) for(unsigned n=0;n<512;++n) {
            state^=state<<13;state^=state>>17;state^=state<<5;
            double unit=(double)(state&0xffffff)/16777216.0;
            unsigned control=0x1f80|((mode&3)<<13)|((mode&4)?0x8000:0)|((mode&8)?0x40:0);
            for(unsigned k=0;k<6;++k) {
                double x=k<3?(unit-.5)*200:k==3?(unit-.5)*100:.1+unit*100;
                _mm_setcsr(control);double a=unary[k].fn(x);unsigned ac=_mm_getcsr();
                double (*original)(double)=(void *)(image+unary[k].rva);
                _mm_setcsr(control);double b=original(x);unsigned bc=_mm_getcsr();
                if(bits(a)!=bits(b)||ac!=bc){fprintf(stderr,"%s feature %u mode %u n %u: %llx/%llx csr %x/%x\n",unary[k].name,feature,mode,n,(unsigned long long)bits(a),(unsigned long long)bits(b),ac,bc);return 1;}
                ++comparisons;
            }
            for(unsigned k=0;k<2;++k) {
                float x=(float)((unit-.5)*100);
                float (*fn)(float)=k?expf:cosf;
                float (*original)(float)=(void *)(image+(k?0x2406f0:0x2401f0));
                _mm_setcsr(control);float a=fn(x);unsigned ac=_mm_getcsr();
                _mm_setcsr(control);float b=original(x);unsigned bc=_mm_getcsr();
                if(fbits(a)!=fbits(b)||ac!=bc){fprintf(stderr,"float math %u feature %u mode %u n %u\n",k,feature,mode,n);return 1;}
                ++comparisons;
            }
            double x=.2+unit*3.8,y=(unit-.5)*6;
            double (*original_pow)(double,double)=(void *)(image+0x240c80);
            _mm_setcsr(control);double a=pow(x,y);unsigned ac=_mm_getcsr();
            _mm_setcsr(control);double b=original_pow(x,y);unsigned bc=_mm_getcsr();
            if(bits(a)!=bits(b)||ac!=bc){fprintf(stderr,"pow feature %u mode %u n %u\n",feature,mode,n);return 1;}++comparisons;
            float xf=(float)x,yf=(float)y;float (*original_powf)(float,float)=(void *)(image+0x242320);
            _mm_setcsr(control);float af=powf(xf,yf);ac=_mm_getcsr();
            _mm_setcsr(control);float bf=original_powf(xf,yf);bc=_mm_getcsr();
            if(fbits(af)!=fbits(bf)||ac!=bc){fprintf(stderr,"powf feature %u mode %u n %u\n",feature,mode,n);return 1;}++comparisons;
        }
    }
    _mm_setcsr(0x1f80);printf("%llu math comparisons; %u CPU dispatch values; 16 MXCSR modes\n",(unsigned long long)comparisons,max_feature+1);
    unsigned string_comparisons=0;
    unsigned string_modes[]={0,2,5};
    for(unsigned mode=0;mode<3;++mode) {
        if(string_modes[mode]==5&&!__builtin_cpu_supports("avx2"))continue;
        if(string_modes[mode]==2&&!__builtin_cpu_supports("sse4.2"))continue;
        dword_140302080=string_modes[mode];*(uint32_t *)(image+0x302080)=string_modes[mode];
        for(unsigned n=0;n<8192;++n) {
            unsigned char bytes[2048];memset(bytes,0xa5,sizeof(bytes));
            unsigned offset=n&31,length=(n>>5)%257,limit=(n*131)%300;
            bytes[offset+length]=0;
            size_t (*original_narrow)(const char *,size_t)=(void *)(image+0x254ccc);
            size_t expected=length<limit?length:limit;
            if((uintptr_t)strnlen_sr((__m128i *)(bytes+offset),limit)!=expected || original_narrow((char *)bytes+offset,limit)!=expected)return 1;
            ++string_comparisons;
            memset(bytes,0xa5,sizeof(bytes));uint16_t zero=0;memcpy(bytes+offset+2*length,&zero,2);
            size_t (*original_wide)(const void *,size_t)=(void *)(image+0x254f48);
            if(sub_140254F48((__m128i *)(bytes+offset),limit)!=expected || original_wide(bytes+offset,limit)!=expected)return 1;
            ++string_comparisons;
        }
    }
    printf("%u narrow/wide length comparisons across alignment and dispatch paths\n",string_comparisons);
    VirtualFree(image,0,MEM_RELEASE);return 0;
}'''.replace('LOADERS','\n'.join(loaders))
        from repair_client_menu_actions import region
        prepared=read_client_source()
        lengths=b'\n'.join(region(prepared,rva)[2] for rva in (0x254ccc,0x254f48)).decode()
        body=body.replace('LENGTH_C_PORTS',lengths)
        source=self.out/'math_fixture.c';exe=self.out/'math_fixture.exe';source.write_text(body)
        compiled=subprocess.run(['gcc','-O2','-fno-builtin',str(source),str(self.obj),str(stub),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(compiled.returncode,0,compiled.stderr)
        result=subprocess.run([str(exe)],cwd=self.out,capture_output=True,text=True,timeout=60)
        (self.out/'math_fixture.stdout.txt').write_text(result.stdout)
        (self.out/'math_fixture.stderr.txt').write_text(result.stderr)
        self.assertEqual(result.returncode,0,result.stderr)
        print(result.stdout.strip())


if __name__=='__main__':
    unittest.main()
