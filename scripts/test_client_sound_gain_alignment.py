"""Compare complete native procedural sound generation and its gain stores."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import capstone
import pefile
from repair_client_sound_gain_alignment import PROJECT,MARKER,repair


class SoundGainAlignment(unittest.TestCase):
    def test_native_procedural_sound(self):
        source=read_client_source()
        a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER))
        if b'_mm_storeu_si128(v114 - 1' not in source[a:b] or b' * 0.025f' not in source[a:b]:
            source,_=repair(source)
        a=source.index(MARKER);b=source.index(b'//----- (',a+len(MARKER));body=source[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        native=pe.get_data(0x65ae0,0x1400)
        pages={0x65000,0x66000,0x69000,0x243000}
        dis=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);dis.detail=True
        for ins in dis.disasm(native,0x65ae0):
            for op in ins.operands:
                if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:
                    pages.add((ins.address+ins.size+op.mem.disp)&~4095)
        for number in re.findall(rb'\b\d{8,9}\b',body):
            at=0x404a6c+4*int(number)
            if at<0x74793000:pages.update((at&~4095,(at&~4095)+4096))
        buffer=0x404a6c+4*70357813
        pages.update(range(buffer&~4095,(buffer+0x20040+4095)&~4095,4096))
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "defs.h"
typedef double f64TYPE;
#define SR_VEC_LANES(w,v,t) ((t##TYPE *)&(v))
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static unsigned calls,last_id,last_size;static float last_distance;
static unsigned char pcm[0x20040],saved_pcm[0x20040];
static unsigned char snapshot[0x20040];
static int sr_bit(const int *p,unsigned n){return ((unsigned)*p>>(n&31))&1;}
#define _bittest sr_bit
static void sub_140069930(unsigned id,int size,short *samples,float distance){
 calls++;last_id=id;last_size=size;last_distance=distance;
 if(size<0||size>0x20000)abort();memcpy(pcm,samples,size);
}
'''.encode()+body+r'''
static void thunk(unsigned char *p,void *f){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&f,8);p[10]=0xff;p[11]=0xe0;}
int main(void){image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);working=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);
if(!image||!working)return 9;
'''.encode()
        for page in sorted(pages):
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))abort();\n'.encode()
            data=pe.get_data(page,4096)
            if data:c+=('{unsigned char b[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        c+=r'''
thunk(image+0x69930,sub_140069930);
thunk(image+0x2431f0,sin);
unsigned ids[]={100,101,102,103,104,105,106,107,108,109,110,200,201,202,203,0,99,111,204};unsigned count=0;
for(unsigned bias=0;bias<16;bias+=4)for(unsigned id=0;id<19;id++)for(unsigned volume=0;volume<2;volume++){
unsigned saved_calls=0,saved_id=0,saved_size=0;float saved_distance=0;
for(unsigned original=0;original<2;original++){
 dword_140404A6C=(void*)((original?image:working)+0x404a6c+(original?0:bias));
 for(unsigned j=0;j<11;j++)dword_140404A6C[283785984+j]=100+j;
 for(unsigned j=0;j<4;j++)dword_140404A6C[283786011+j]=200+j;
 memset(&dword_140404A6C[70357813],0xa5,sizeof snapshot);memset(pcm,0x5a,sizeof pcm);
 calls=last_id=last_size=0;last_distance=0;
 float distance=volume?10.0f:0.25f;
 if(original)((void(*)(int,float))(image+0x65ae0))(ids[id],distance);else sub_140065AE0(ids[id],distance);
 if(!original){saved_calls=calls;saved_id=last_id;saved_size=last_size;saved_distance=last_distance;
  memcpy(saved_pcm,pcm,sizeof pcm);memcpy(snapshot,&dword_140404A6C[70357813],sizeof snapshot);}
 else if(calls!=saved_calls||last_id!=saved_id||last_size!=saved_size||memcmp(&saved_distance,&last_distance,4)||
  memcmp(saved_pcm,pcm,sizeof pcm)||memcmp(snapshot,&dword_140404A6C[70357813],sizeof snapshot)){
  printf("mismatch id=%u bias=%u volume=%u size=%u/%u calls=%u/%u\n",ids[id],bias,volume,saved_size,last_size,saved_calls,calls);
  for(unsigned j=0;j<0x10020;j++)if(((short*)snapshot)[j]!=((short*)&dword_140404A6C[70357813])[j]){
   printf("first short %u C=%d native=%d\n",j,((short*)snapshot)[j],((short*)&dword_140404A6C[70357813])[j]);break;}
  return 1;}
}count++;}
printf("%u complete native procedural dial/ring/sample/gain/alignment/guard/PCM-registration comparisons pass; sine and registration boundaries controlled\n",count);return 0;}
'''.encode()
        out=PROJECT/'reports/client-sound-gain-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        f=out/'gain.c';f.write_bytes(c);exe=f.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-msse4.2','-fno-strict-aliasing',
                          '-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=45)
        (out/'stdout.txt').write_text(r.stdout)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)


if __name__=='__main__':unittest.main()
