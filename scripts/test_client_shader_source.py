"""Compare startup shader creation/source/compile/attach with native code."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_shader_source import PROJECT, repair


class ShaderSource(unittest.TestCase):
    def test_native_startup_shader_prefix(self):
        source = read_client_source()
        if b'const char *const *)' not in source[source.index(b'void sub_140077710()\r\n{'):]:
            source, _ = repair(source)
        self.assertEqual(source.count(b'const char *const *)&v'), 5)
        start = source.index(b'void sub_140077710()\r\n{')
        end = source.index(b'  unk_1404042D0(', start)
        prefix = source[start:end]+b'}\n'
        pe = pefile.PE(str(PROJECT.parent / 'subrosa.exe'), fast_load=True)
        native = pe.get_data(0x77710, 0xb8)+bytes.fromhex('4883c4505bc3')
        shader_a = pe.get_data(0x2b21b0, 0x170)
        shader_b = pe.get_data(0x2b2320, 0x1000).split(b'\0')[0]+b'\0'
        text = r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#define nullptr NULL
typedef uint64_t uint64;
static unsigned int *dword_140404A6C;
static unsigned seed;
struct event {unsigned operation,first,second;uint64_t length;char source[1024];};
static struct event events[16];static unsigned used;
static struct event *event(unsigned op,unsigned a,unsigned b){struct event *e=&events[used++];e->operation=op;e->first=a;e->second=b;return e;}
static unsigned create_program(void){event(1,0,0);return seed;}
static unsigned create_shader(unsigned type){event(2,type,0);return seed^type;}
static void shader_source(unsigned shader,int count,const char *const *sources,const int *lengths){
 struct event *e=event(3,shader,count);e->length=(uintptr_t)lengths;
 if(lengths || count!=1 || (uintptr_t)sources<0x100000000ULL || (uintptr_t)*sources<0x100000000ULL)ExitProcess(21);
 if(strlen(*sources)>=sizeof e->source)ExitProcess(22);strcpy(e->source,*sources);
}
static void compile_shader(unsigned shader,...){event(4,shader,0);}
static void attach_shader(unsigned program,unsigned shader,...){event(5,program,shader);}
#define unk_140404208 create_program
#define unk_140404210 create_shader
#define unk_1404042D8 shader_source
#define unk_140404200 compile_shader
#define unk_1404041F0 attach_shader
'''.encode()
        for name, data in [('sr_mem_1402b21b0', shader_a), ('sr_mem_1402b2320', shader_b)]:
            text += ('static unsigned char '+name+'[]={'+','.join(map(str,data))+'};\n').encode()
        text += prefix+r'''
static void bytes(unsigned char *dest,const unsigned char *source,size_t size){memcpy(dest,source,size);}
int main(void){
 unsigned char *image=VirtualAlloc((void *)0x40000000000ULL,0x70000000,MEM_RESERVE,PAGE_NOACCESS);
 unsigned char *storage=VirtualAlloc((void *)0x50000000000ULL,0x70000000,MEM_RESERVE,PAGE_NOACCESS);
 if(!image || !storage)return 9;
 unsigned data_page=(0x404a6cULL+451221605ULL*4)&~4095ULL;
 unsigned pages[]={0x77000,0x404000,0x2b2000,data_page};
 for(unsigned j=0;j<4;j++)if(!VirtualAlloc(image+pages[j],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 8;
 unsigned storage_page=(0xa6cULL+451221605ULL*4)&~4095ULL;
 if(!VirtualAlloc(storage+storage_page,4096,MEM_COMMIT,PAGE_READWRITE))return 7;
 dword_140404A6C=(unsigned *)(storage+0xa6c);
'''.encode()
        text += ('{unsigned char b[]={'+','.join(map(str,native))+'};bytes(image+0x77710,b,sizeof b);}\n').encode()
        text += r'''
 bytes(image+0x2b21b0,sr_mem_1402b21b0,sizeof sr_mem_1402b21b0);
 bytes(image+0x2b2320,sr_mem_1402b2320,sizeof sr_mem_1402b2320);
 *(uintptr_t *)(image+0x404208)=(uintptr_t)create_program;
 *(uintptr_t *)(image+0x404210)=(uintptr_t)create_shader;
 *(uintptr_t *)(image+0x4042d8)=(uintptr_t)shader_source;
 *(uintptr_t *)(image+0x404200)=(uintptr_t)compile_shader;
 *(uintptr_t *)(image+0x4041f0)=(uintptr_t)attach_shader;
 FlushInstructionCache(GetCurrentProcess(),image+0x77000,4096);
 for(unsigned k=0;k<256;k++){
  seed=k*0x1020304u;struct event expected[16];unsigned values[3];
  memset(events,0,sizeof events);used=0;sub_140077710();
  if(used!=9)return 6;memcpy(expected,events,sizeof events);
  memcpy(values,&dword_140404A6C[451221605],sizeof values);
  memset(events,0,sizeof events);used=0;((void (*)(void))(image+0x77710))();
  if(used!=9 || memcmp(expected,events,sizeof events) ||
     memcmp(values,image+0x404a6cULL+451221605ULL*4,sizeof values)){
   printf("startup shader prefix mismatch seed %u\n",k);return 1;
  }
 }
 VirtualFree(storage,0,MEM_RELEASE);VirtualFree(image,0,MEM_RELEASE);
 puts("256 native startup shader create/source/compile/attach sequences pass; full-width pointers and null lengths verified");return 0;
}
'''.encode()
        directory = PROJECT / 'reports/client-shader-source-20261002'
        directory.mkdir(parents=True, exist_ok=True)
        fixture = directory / 'shader_fixture.c'
        fixture.write_bytes(text)
        exe = fixture.with_suffix('.exe')
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', str(fixture),
                                 '-O0','-std=gnu11','-fno-strict-aliasing','-o',str(exe)], capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result = subprocess.run([str(exe)],capture_output=True,text=True,timeout=20)
        (directory/'stdout.txt').write_text(result.stdout)
        (directory/'stderr.txt').write_text(result.stderr)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__ == '__main__':
    unittest.main()
