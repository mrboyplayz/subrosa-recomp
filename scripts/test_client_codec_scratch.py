"""Native history-copy block versus encoder's recovered allocated destination."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_codec_scratch import PROJECT,MARKER,repair


class CodecScratch(unittest.TestCase):
    def test_native_history_copy(self):
        source=read_client_source();a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER))
        if b'v50 = &v39;' in source[a:b]:source,_=repair(source)
        a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b].replace(b'\r',b'')
        start=body.index(b'  v16 = alloca(');end=body.index(b'  if ( a1[3556]',start);kernel=body[start:end]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <emmintrin.h>
#include <malloc.h>
typedef unsigned long long _QWORD;
static void *sub_1401FC920(__m128i *out,__m128i *in,size_t size){return memcpy(out,in,size);}
static void recovered(int *a1,int v41,int extra,unsigned char *output){
 unsigned long long v15=4ULL*a1[28]*(v41+extra)+15;void *v16;__m128i *v50;
'''.encode()+kernel+r'''
 memcpy(output,v50,4*a1[28]*v41);
}
__attribute__((naked)) static void native(unsigned char *frame,void *code){__asm__("push %rbp;mov %rcx,%rbp;sub $40,%rsp;call *%rdx;add $40,%rsp;pop %rbp;ret");}
static void thunk(unsigned char *at,void *target){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&target,8);}
int main(void){unsigned char *image=VirtualAlloc(0,0x400000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''.encode()
        for page in (0x1e6000,0x1fc000):
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
            data=pe.get_data(page,4096)
            c+=('{unsigned char bytes[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},bytes,sizeof bytes);}}\n').encode()
        c+=r'''
memcpy(image+0x1e6f50,"\x48\x83\xec\x20",4);memcpy(image+0x1e6fe9,"\x48\x83\xc4\x20\xc3",5);thunk(image+0x1fc920,sub_1401FC920);
int context[8192],channel_values[]={1,2,3,8},history_values[]={0,1,16,240};unsigned char frame[0x500],output[16384],expected[16384];unsigned cases=0;
for(unsigned ch=0;ch<4;ch++)for(unsigned history=0;history<4;history++)for(unsigned extra=0;extra<2;extra++)for(unsigned alignment=0;alignment<4;alignment++){
 for(unsigned i=0;i<8192;i++)context[i]=i*73+history*997;context[28]=channel_values[ch];context[43]=history_values[history]+32;
 memset(output,0xa5,sizeof output);memset(expected,0xa5,sizeof expected);memset(frame,0,sizeof frame);
 recovered(context,history_values[history],extra?960:120,expected+16+4*alignment);
 void *state=context,*out=output+16+4*alignment;memcpy(frame+0x3a0,&state,8);memcpy(frame+0x40,&out,8);memcpy(frame+0x14,history_values+history,4);
 native(frame,image+0x1e6f50);
 if(memcmp(output,expected,sizeof output)){printf("history mismatch channels=%d history=%d extra=%u alignment=%u\n",channel_values[ch],history_values[history],extra,alignment);return 1;}
 cases++;
}
printf("%u native encoder history-copy/scratch extent/alignment/output-guard comparisons pass; full encoder remains partial\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-codec-scratch-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        path=out/'scratch.c';path.write_bytes(c);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing',str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60)
        (out/'stdout.txt').write_text(result.stdout)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
