"""Compare item shadow uniform bits/flags with the original arithmetic block."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT,pinned_pe,region
from repair_client_shadow_uniform import repair
import test_client_collision_query as query_fixtures


class ShadowUniform(unittest.TestCase):
    def test_native_argument_and_flags(self):
        source=read_client_source()
        if b'sr_item_shadow_uniform:' not in region(source,0x11c950)[2]:source,_=repair(source)
        body=region(source,0x11c950)[2];a=body.index(b'/* sr_item_shadow_uniform:');b=body.index(b'/* sr_item_shadow_uniform_end */')
        pe=pinned_pe()
        code=r'''#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static uint32_t captured[2];static unsigned calls;
static void uniform(int location,float value){captured[0]=(unsigned)location;memcpy(captured+1,&value,4);calls++;}
static void (*unk_1404042E8)(int,float)=uniform;
static void recovered(unsigned *v2){
'''.encode()+body[a:b]+b'\n}\n'
        code+=r'''
extern void uniform_block(void *image,void *code,unsigned *actor);
extern void uniform_return(void);
__asm__(".text\n.global uniform_block\nuniform_block:\npush %rsi\npush %rdi\nsub $0x48,%rsp\nmovaps %xmm6,0x20(%rsp)\nmovaps %xmm7,0x30(%rsp)\nmov %rcx,%rsi\nmov %r8,%rdi\nmov %rdx,%r11\nmovss 0x4417de7c(%rsi),%xmm6\nmaxss 0x278224(%rsi),%xmm6\nmovss 0x278728(%rsi),%xmm7\njmp *%r11\n.global uniform_return\nuniform_return:\nmovaps 0x20(%rsp),%xmm6\nmovaps 0x30(%rsp),%xmm7\nadd $0x48,%rsp\npop %rdi\npop %rsi\nret\n");
int main(void){
'''.encode()+query_fixtures.CollisionQuery().native_setup(pe,[(0x11caeb,0x39)],(0x278000,))
        for index in (284550404,71738233,*[111579653+263004*t for t in (-1,0,1,2)]):
            page=(0x404a6c+4*index)&~4095
            code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
 image[0x11cb24]=0xff;image[0x11cb25]=0x25;memset(image+0x11cb26,0,4);*(void **)(image+0x11cb2a)=uniform_return;
 *(void **)(image+0x4042e8)=uniform;dword_140404A6C=(void*)(image+0x404a6c);
 unsigned *actor=VirtualAlloc(0,0x8000,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);if(!actor)return 9;
 uint32_t ages[]={0,1,127,0x7ffffffe,0x7fffffff,0x80000000,0xfffffffe,0xffffffff};
 uint32_t denominators[]={0,0x3d800000,0x3e000000,0x3e000001,0x40000000,0xbf800000,0x7fc12345,0x7f800001};
 uint32_t weights[]={0,0x3d800000,0x3e99999a,0xbf400000,0x417fffff,0x00800001,0x7fc15432,0x7f800001};
 unsigned cases=0,saved_flags,saved[2];
 for(unsigned mode=0;mode<4;mode++)for(int type=-1;type<3;type++)for(unsigned age=0;age<8;age++)for(unsigned denom=0;denom<8;denom++)for(unsigned weight=0;weight<8;weight++){
  actor[0]=(unsigned)type;actor[6150]=ages[age];dword_140404A6C[284550404]=denominators[denom];dword_140404A6C[111579653+263004*type]=weights[weight];dword_140404A6C[71738233]=0x80000000+age;
  for(unsigned native=0;native<2;native++){
   calls=0;memset(captured,0,sizeof captured);_mm_setcsr(0x1f80|(mode<<13));
   if(native)uniform_block(image,image+0x11caeb,actor);else recovered(actor);
   unsigned flags=_mm_getcsr();if(calls!=1)return 2;
   if(!native){memcpy(saved,captured,8);saved_flags=flags;}
   else if(memcmp(saved,captured,8)||flags!=saved_flags){printf("shadow uniform mismatch mode %u type %d age %u denom %u weight %u C=%x N=%x flags=%x/%x\n",mode,type,age,denom,weight,saved[1],captured[1],saved_flags,flags);return 1;}
  }cases++;
 }
 printf("%u native item shadow uniform blocks pass: location/value bits, integer wrapping, signed types, finite/NaN input words and four MXCSR modes; draw and shader execution unverified\n",cases);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-shadow-uniform-20261004';out.mkdir(parents=True,exist_ok=True)
        path=out/'uniform.c';path.write_bytes(code);exe=path.with_suffix('.exe')
        run=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(run.returncode,0,run.stderr)
        run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_text(run.stdout,encoding='utf-8')
        self.assertEqual(run.returncode,0,run.stdout+run.stderr)


if __name__=='__main__':unittest.main()
