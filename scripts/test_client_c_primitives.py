"""Compare five C ports with original instructions, guarded memory and ownership."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT, pinned_pe, region
import test_client_collision_query as collision_query


class CPrimitives(unittest.TestCase):
    def test_native_primitives(self):
        source=read_client_source();pe=pinned_pe()
        code=r'''#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static unsigned fail_alloc,allocations,releases,assertions;static size_t last_size;
static __thread unsigned char fixture_tls[64];extern unsigned long _tls_index;
static int64_t j__malloc_base(uint64_t bytes){allocations++;last_size=bytes;return fail_alloc?0:(intptr_t)malloc(bytes);}
static void *sr_path_malloc(size_t bytes){return (void *)(intptr_t)j__malloc_base(bytes);}
static void release(void *p){releases++;free(p);}
static void sub_14023E640(char *a,char *b,unsigned line){(void)a;(void)b;(void)line;assertions++;}
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
#define free release
'''.encode()
        for rva in (0x15d7e0,0x243770,0x243f84,0x254ccc,0x254f48):code+=region(source,rva)[2]
        code+=b'\n#undef free\nint main(void){\n'
        code+=collision_query.CollisionQuery.native_setup(self,pe,[(0x15d7e0,0x51c),(0x243770,0x67),(0x243f84,8),(0x254ccc,0x150),(0x254f48,0x1d6)],(0x23a000,0x23e000))
        code+=r'''
 jump(image+0x23acf8,j__malloc_base);jump(image+0x23ace4,release);jump(image+0x23e640,sub_14023E640);
 dword_140404A6C=(void*)(image+0x404a6c);
 fixture_tls[0]=0;void **thread_state=((void ***)__readgsqword(0x58))[_tls_index];
 dword_140404A6C[19064470]=_tls_index;
 unsigned checked=0,seed=123;unsigned char *guard=VirtualAlloc(0,8192,MEM_RESERVE,PAGE_NOACCESS);
 if(!VirtualAlloc(guard,4096,MEM_COMMIT,PAGE_READWRITE))return 9;
 for(unsigned feature=0;feature<=5;feature++){
  *(unsigned*)(image+0x302080)=feature;
  for(unsigned align=0;align<32;align++)for(unsigned limit=0;limit<129;limit++){
   unsigned char *p=guard+4096-limit*2-align;memset(p,0x61,limit*2+align);
   for(unsigned terminator=0;terminator<3;terminator++){
    memset(p,0x61,limit*2+align);if(limit && terminator<2){unsigned at=terminator?limit-1:limit/2;p[at]=0;}
    uintptr_t a=(uintptr_t)strnlen_sr((__m128i*)p,limit),b=((uintptr_t(*)(void*,uint64_t))(image+0x254ccc))(p,limit);
    if(a!=b){printf("strnlen mismatch\n");return 1;}checked++;
    memset(p,0x61,limit*2+align);if(limit && terminator<2){unsigned at=terminator?limit-1:limit/2;p[2*at]=p[2*at+1]=0;}
    a=sub_140254F48((__m128i*)p,limit);b=((uintptr_t(*)(void*,uint64_t))(image+0x254f48))(p,limit);
    if(a!=b){printf("wcsnlen mismatch\n");return 1;}checked++;
   }
  }
 }
 for(unsigned sample=0;sample<8192;sample++){
  seed=seed*1664525u+1013904223u;int value=(int)seed;if(sample==0)value=INT32_MIN;
  volatile int input=value;int a=abs(input),b=((int(*)(int))(image+0x243f84))(value);
  if(a!=b)return 2;checked++;
  char strings[2][65];for(unsigned j=0;j<64;j++){seed=seed*1664525u+1013904223u;strings[0][j]=(char)(1+seed%255);}
  strings[0][64]=0;memcpy(strings[1],strings[0],65);if(sample&1)strings[1][sample%64]^=123;
  a=strcmp_sr(strings[0],strings[1]);b=((int(*)(char*,char*))(image+0x243770))(strings[0],strings[1]);
  if(a!=b)return 3;checked++;
 }
 for(int input=1;input<=4;input++)for(int output=1;output<=4;output++)for(int w=0;w<17;w++)for(int h=0;h<5;h++){
  size_t bytes=(size_t)w*h*input,expected_bytes=(size_t)w*h*output;unsigned char saved[17*5*4];unsigned saved_alloc,saved_release,saved_assert;size_t saved_size;
  for(unsigned native=0;native<2;native++){
   unsigned char *block=malloc(bytes?bytes:1);for(size_t j=0;j<bytes;j++)block[j]=(unsigned char)(j*19+input*71+w*11+h);
   allocations=releases=assertions=0;last_size=0;fail_alloc=0;
   unsigned char *out=native?((void*(*)(void*,int,int,int,int))(image+0x15d7e0))(block,input,output,w,h):(void*)sub_14015D7E0((char*)block,input,output,w,h);
   if(!out)return 4;if((input==output)!=(out==block))return 5;
   if(!native){memcpy(saved,out,expected_bytes);saved_alloc=allocations;saved_release=releases;saved_assert=assertions;saved_size=last_size;}
   else if(memcmp(saved,out,expected_bytes)||saved_alloc!=allocations||saved_release!=releases||saved_assert!=assertions||saved_size!=last_size)return 6;
   free(out);
  }checked++;
 }
 for(unsigned sample=0;sample<4;sample++)for(unsigned native=0;native<2;native++){
  int width=sample==0?-1:sample==1?INT32_MAX:2,height=sample==2?-1:2;
  void *block=malloc(4);allocations=releases=assertions=0;fail_alloc=sample==3;thread_state[2]=0;
  void *out=native?((void*(*)(void*,int,int,int,int))(image+0x15d7e0))(block,1,4,width,height):sub_14015D7E0(block,1,4,width,height);
  if(out||releases!=1||!thread_state[2]||strcmp(thread_state[2],"outofmem")){printf("failure sample %u native %u releases %u error %s\n",sample,native,releases,thread_state[2]?(char*)thread_state[2]:"NULL");return 7;}
  checked++;
 }
 printf("%u native C primitive cases pass: bounded lengths, alignment, CPU modes, signed limits, comparisons, image pixels, ownership and allocation errors\n",checked);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-c-primitives-20261004';out.mkdir(parents=True,exist_ok=True)
        path=out/'primitives.c';path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-fno-builtin','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
