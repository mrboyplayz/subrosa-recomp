"""Complete native coefficient wrapper/biquad samples, state, interleaving and guards."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_audio_filter import PROJECT,MARKER,repair


class AudioFilter(unittest.TestCase):
    def test_native_filter_pair(self):
        source=read_client_source();a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER))
        if b'return sub_1401F8B20' in source[a:b]:source,_=repair(source)
        a=source.index(MARKER);marker=b'//----- (00000001401F43C0)';b=source.index(marker,a);body=source[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
'''.encode()+body+r'''
int main(void){unsigned char *image=VirtualAlloc(0,0x400000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''.encode()
        for page in (0x1f3000,0x1f4000,0x1f8000,0x283000,0x279000,0x302000):
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
            data=pe.get_data(page,4096)
            c+=('{unsigned char data[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},data,sizeof data);}}\n').encode()
        c+=r'''
image[0x1f8b20]=0xc3;
int rates[]={16000,24000,48000},counts[]={0,1,16,240};short frequencies[]={0,20,200,1000,-10,32767};unsigned cases=0;
float input[512],saved_input[512],output[512],saved_output[512],state[8],saved_state[8];
for(unsigned rate=0;rate<3;rate++)for(unsigned count=0;count<4;count++)for(unsigned frequency=0;frequency<6;frequency++)for(unsigned channels=1;channels<=2;channels++)for(unsigned in_place=0;in_place<2;in_place++)for(unsigned pattern=0;pattern<3;pattern++){
 for(unsigned native=0;native<2;native++){
  for(unsigned i=0;i<512;i++)input[i]=(float)(short)(i*73+pattern*997)*0x1p-15f;
  memset(output,0xa5,sizeof output);for(unsigned i=0;i<8;i++)state[i]=(float)((int)i-2)*0.015625f;
  float *destination=in_place?input+8:output+8;
  if(native)((void(*)(__int64,short,__int64,float*,int,int,int))(image+0x1f41e0))((__int64)(input+8),frequencies[frequency],(__int64)destination,state+2,counts[count],channels,rates[rate]);
  else sub_1401F41E0((__int64)(input+8),frequencies[frequency],(__int64)destination,state+2,counts[count],channels,rates[rate]);
  if(!native){memcpy(saved_input,input,sizeof input);memcpy(saved_output,output,sizeof output);memcpy(saved_state,state,sizeof state);}
  else if(memcmp(saved_input,input,sizeof input)||memcmp(saved_output,output,sizeof output)||memcmp(saved_state,state,sizeof state)){
   printf("filter mismatch rate=%d count=%d frequency=%d channels=%u in_place=%u pattern=%u\n",rates[rate],counts[count],frequencies[frequency],channels,in_place,pattern);return 1;
  }
 }
 cases++;
}
printf("%u native complete biquad/coefficient wrapper comparisons pass: mono/stereo, in-place/separate output, state and input/output guards, edge frequencies and sample patterns\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-audio-filter-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        path=out/'filter.c';path.write_bytes(c);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=60)
        (out/'stdout.txt').write_text(result.stdout)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
