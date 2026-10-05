"""Native PCM wrapper: complete sample conversion, dispatch ABI and returns."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_audio_buffer import PROJECT, MARKER, repair


class AudioBuffer(unittest.TestCase):
    def test_native_pcm_wrapper(self):
        source=read_client_source()
        a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER))
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
static int frames,result_value,dispatch_count,frame_calls;
static unsigned captured[65536];static int metadata[160];static short input[65536+8];
static unsigned char *native_image;
static __int64 sub_1401E52C0(int requested,int state,int format){if(requested!=48000||state!=37||format!=19)abort();frame_calls++;return frames;}
static void sub_1401E5010(__int64 a,int*b,_QWORD c,_QWORD d,int e,int f,int g){abort();}
static __int64 sub_1401E5400(int *context,__int64 samples,int count,__m128i *output,int capacity,int bits,__int64 original,int rate,int zero,int sentinel,int channels,
 void(*callback)(__int64,int*,_QWORD,_QWORD,int,int,int),int tail){
 if(context!=metadata||count!=frames||capacity!=111||bits!=16||original!=(__int64)input||rate!=48000||zero||sentinel!=-2||channels!=metadata[28]||tail)abort();
 if(callback!=sub_1401E5010&&(void*)callback!=(void*)(native_image+0x1e5010))abort();
 unsigned n=count*channels;if(n>65536)abort();memcpy(captured,(void*)samples,n*4);dispatch_count++;
 memset(output,0x75,64);return result_value;
}
__attribute__((naked)) static void probe_stack(void){__asm__("jmp ___chkstk_ms");}
'''.encode()+body+r'''
static void thunk(unsigned char *at,void *target){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&target,8);}
int main(void){native_image=VirtualAlloc(0,0x400000,MEM_RESERVE,PAGE_NOACCESS);if(!native_image)return 9;
'''.encode()
        for page in (0x1e0000,0x1e5000,0x1f8000,0x278000,0x302000):
            c+=f'if(!VirtualAlloc(native_image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
            data=pe.get_data(page,4096)
            c+=('{unsigned char data[]={'+','.join(map(str,data))+f'}};memcpy(native_image+{page},data,sizeof data);}}\n').encode()
        c+=r'''
thunk(native_image+0x1e52c0,sub_1401E52C0);thunk(native_image+0x1e5400,sub_1401E5400);thunk(native_image+0x1f89d0,probe_stack);native_image[0x1f8b20]=0xc3;
int frame_values[]={-1,0,1,3,257,4096,32768},channel_values[]={0,1,2,4,8},result_values[]={-1,0,111};unsigned cases=0;
static unsigned saved[65536];unsigned char output[96],saved_output[96];int saved_return,saved_count,saved_calls;
for(unsigned f=0;f<7;f++)for(unsigned ch=0;ch<5;ch++)for(unsigned pattern=0;pattern<3;pattern++)for(unsigned ret=0;ret<3;ret++){
 frames=frame_values[f];int channels=channel_values[ch];if(frames>0&&frames*channels>65536)continue;result_value=result_values[ret];
 for(unsigned i=0;i<65544;i++)input[i]=(short)(pattern==0?i:pattern==1?i*73+32768:(i%4==0?32767:i%4==1?-32768:i%4==2?-1:0));
 memset(metadata,0,sizeof metadata);metadata[28]=channels;metadata[39]=37;metadata[36]=19;
 for(unsigned native=0;native<2;native++){
  memset(output,0xa5,sizeof output);memset(captured,0xcc,sizeof captured);dispatch_count=frame_calls=0;
  int value=native?((int(*)(int*,__int64,int,__m128i*,int))(native_image+0x1e0cc0))(metadata,(__int64)input,48000,(__m128i*)(output+16),111):sub_1401E0CC0(metadata,(__int64)input,48000,(__m128i*)(output+16),111);
  if(!native){saved_return=value;saved_count=dispatch_count;saved_calls=frame_calls;memcpy(saved,captured,sizeof saved);memcpy(saved_output,output,sizeof output);}
  else if(value!=saved_return||dispatch_count!=saved_count||frame_calls!=saved_calls||memcmp(saved,captured,sizeof saved)||memcmp(saved_output,output,sizeof output)){
   printf("PCM mismatch frames=%d channels=%d pattern=%u result=%d C=%d/%d/%d N=%d/%d/%d\n",frames,channels,pattern,result_value,saved_return,saved_count,saved_calls,value,dispatch_count,frame_calls);return 1;
  }
  if(frame_calls!=1||dispatch_count!=(frames>0)||value!=(frames>0?result_value:-1))return 2;
  if(frames>0)for(unsigned i=0;i<(unsigned)(frames*channels);i++){float expected=(float)input[i]*0x1p-15f;unsigned bits;memcpy(&bits,&expected,4);if(captured[i]!=bits)return 3;}
 }
 cases++;
}
printf("%u native PCM wrapper cases pass; all 65536 signed PCM16 values, channel/frame extents, dispatch arguments, failure/success results and output guards compared; downstream encoder controlled\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-audio-buffer-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        path=out/'pcm.c';path.write_bytes(c);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60)
        (out/'stdout.txt').write_text(result.stdout)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
