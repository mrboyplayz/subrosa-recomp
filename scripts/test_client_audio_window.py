"""Compare the native 480-point FFT window packing with recovered allocated scratch."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_audio_window import PROJECT,MARKER,repair


class AudioWindow(unittest.TestCase):
    def test_native_window_kernel(self):
        source=read_client_source();a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER))
        if b'v135 = &v35;' in source[a:b]:source,_=repair(source)
        a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b].replace(b'\r',b'')
        start=body.index(b'    v12 = alloca(3840);');end=body.index(b'    v153 = a1 + 2892;',start);kernel=body[start:end]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
typedef void CGlobalUtils;
static float flt_140282D70[240];
static void recovered(unsigned char *input,unsigned char *output){
 intptr_t a1=(intptr_t)input;int i,v66=240,v38=480;float v76,v11;
 void *v12,*v13,*v14,*v15;char *v135,*v136,*v82;CGlobalUtils *v39;
'''.encode()+kernel+r'''
 memcpy(output,v135,3840);
}
__attribute__((naked)) static void native(unsigned char *frame,void *code){__asm__("push %rbp;mov %rcx,%rbp;sub $32,%rsp;call *%rdx;add $32,%rsp;pop %rbp;ret");}
int main(void){unsigned char *image=VirtualAlloc(0,0x400000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''.encode()
        for page in (0x1ed000,0x282000,0x283000):
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
            data=pe.get_data(page,4096)
            c+=('{unsigned char data[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},data,sizeof data);}}\n').encode()
        c+=r'''
image[0x1ed8ae]=0xc3;memcpy(flt_140282D70,image+0x282d70,sizeof flt_140282D70);
unsigned char input[8192],frame[0xa00],output[4096],expected[4096];unsigned cases=0;
for(unsigned pattern=0;pattern<128;pattern++)for(unsigned alignment=0;alignment<4;alignment++){
 memset(input,0xa5,sizeof input);memset(frame,0,sizeof frame);memset(output,0xa5,sizeof output);memset(expected,0xa5,sizeof expected);
 for(unsigned i=0;i<720;i++){float value=(float)(int)((i*73+pattern*997)%65536-32768)*0x1p-15f;memcpy(input+2892+4*i,&value,4);}
 recovered(input,expected+16+4*alignment);
 unsigned count=240,size=480;memcpy(frame+8,&size,4);memcpy(frame+0x88,&count,4);void *in=input,*out=output+16+4*alignment;
 memcpy(frame+0x910,&in,8);memcpy(frame+0x1a0,&out,8);native(frame,image+0x1ed786);
 if(memcmp(output,expected,sizeof output)){printf("FFT window mismatch pattern=%u alignment=%u\n",pattern,alignment);return 1;}
 cases++;
}
printf("%u native 480-point FFT window packing/3840-byte scratch and alignment/output-guard comparisons pass; later spectral analysis not covered\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-audio-window-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        path=out/'window.c';path.write_bytes(c);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing',str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60)
        (out/'stdout.txt').write_text(result.stdout)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
