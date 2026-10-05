"""Native resampling wrapper's callback, buffers, scaling, rate paths and float result."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_audio_resample import PROJECT, MARKER, repair


class AudioResample(unittest.TestCase):
    def test_native_resample_wrapper(self):
        source=read_client_source();a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER))
        if b'return sub_1401F8B20' in source[a:b]:source,_=repair(source)
        a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <emmintrin.h>
#include <malloc.h>
#include "defs.h"
static unsigned trace[16384],trace_at;
static void word(unsigned value){if(trace_at>=16384)abort();trace[trace_at++]=value;}
static void pcm(__int64 source,int *out,_QWORD count,_QWORD position,int stride,int mode,int channels){
 word(1);word(source);word(count);word(position);word(stride);word(mode);word(channels);
 for(unsigned i=0;i<count;i++){float value=(float)(short)(i*73+1234);memcpy(out+i,&value,4);}
}
static float sub_1401ECD80(float *state,__int64 destination,__int64 source,int count){
 word(2);word(count);float *input=(float*)source,*output=(float*)destination;
 for(int i=0;i<count;i++){unsigned value;memcpy(&value,input+i,4);word(value);}
 for(int i=0;i<count/2;i++)output[i]=(input[2*i]+input[2*i+1])*0.5f;
 *state+=0.125f;return 0.375f;
}
static void *sub_1401FC920(__m128i *out,__m128i *in,size_t size){word(3);word(size);return memcpy(out,in,size);}
__attribute__((naked)) static void probe_stack(void){__asm__("jmp ___chkstk_ms");}
'''.encode()+body+r'''
static void thunk(unsigned char *at,void *target){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&target,8);}
int main(void){unsigned char *image=VirtualAlloc(0,0x400000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''.encode()
        for page in (0x1ed000,0x1ec000,0x1fc000,0x1f8000,0x278000,0x302000):
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
            data=pe.get_data(page,4096)
            c+=('{unsigned char bytes[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},bytes,sizeof bytes);}}\n').encode()
        c+=r'''
thunk(image+0x1ecd80,sub_1401ECD80);thunk(image+0x1fc920,sub_1401FC920);thunk(image+0x1f89d0,probe_stack);image[0x1f8b20]=0xc3;
unsigned rates[]={16000,24000,48000,8000},counts[]={0,1,3,120,960},channels[]={1,2,3,6};int modes[]={-2,-1,0,1};unsigned cases=0;
unsigned char output[8192],saved_output[8192];unsigned saved_trace[16384],saved_at,saved_result,saved_state;
for(unsigned rate=0;rate<4;rate++)for(unsigned size=0;size<5;size++)for(unsigned ch=0;ch<4;ch++)for(unsigned mode=0;mode<4;mode++){
 for(unsigned native=0;native<2;native++){
  memset(output,0xa5,sizeof output);memset(trace,0,sizeof trace);trace_at=0;float state=0.5f;
  float value=native?((float(*)(void*,__int64,__m128i*,float*,int,unsigned,int,int,int,int))(image+0x1ed000))(pcm,123,(__m128i*)(output+16),&state,counts[size],7,3,modes[mode],channels[ch],rates[rate]):sub_1401ED000(pcm,123,(__m128i*)(output+16),&state,counts[size],7,3,modes[mode],channels[ch],rates[rate]);
  unsigned bits,state_bits;memcpy(&bits,&value,4);memcpy(&state_bits,&state,4);
  if(!native){saved_result=bits;saved_state=state_bits;saved_at=trace_at;memcpy(saved_trace,trace,sizeof trace);memcpy(saved_output,output,sizeof output);}
  else if(bits!=saved_result||state_bits!=saved_state||trace_at!=saved_at||memcmp(saved_trace,trace,sizeof trace)||memcmp(saved_output,output,sizeof output)){
   printf("resample mismatch rate=%u count=%u channels=%u mode=%d C=%08x/%u N=%08x/%u\n",rates[rate],counts[size],channels[ch],modes[mode],saved_result,saved_at,bits,trace_at);return 1;
  }
 }
 cases++;
}
printf("%u native resampling wrapper callback/scaling, 16/24/48kHz and unsupported-rate dispatch, scratch extents, float results and output guards pass; filter controlled\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-audio-resample-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        path=out/'resample.c';path.write_bytes(c);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60)
        (out/'stdout.txt').write_text(result.stdout)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
