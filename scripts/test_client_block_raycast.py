"""Native block raycast rejection and empty grid paths; intersections excluded."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import capstone
from repair_client_menu_actions import PROJECT,pinned_pe,region


class BlockRaycast(unittest.TestCase):
    def test_native_empty_and_rejected_rays(self):
        source=read_client_source()
        _,_,body=region(source,0xd6b60);pe=pinned_pe()
        md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);md.detail=True
        pages=set(range(0xd6000,0xd9000,4096))|{0x1f8000}
        for ins in md.disasm(pe.get_data(0xd6b60,0x1c27),0x1400d6b60):
            for operand in ins.operands:
                if operand.type==capstone.CS_OP_MEM and operand.mem.base==capstone.x86.X86_REG_RIP:
                    address=ins.address+ins.size+operand.mem.disp-0x140000000
                    pages.add(address&~4095)
        code=r'''#include <math.h>
#include "export_compat.h"
typedef uint64_t uint64;
static unsigned *dword_140404A6C;
static __int128 xmmword_140278D30,xmmword_140279870;
static unsigned dword_1402F6188;
'''.encode()
        calls=set(re.findall(rb'\b(sub_\w+)\(',body))-{b'sub_1400D6B60'}
        for name in sorted(calls):
            declaration=re.search(rb'(?m)^[^\r\n;{}]+\b'+name+rb'\([^;{}]*\);',source[:source.index(b'//----- (')])
            self.assertIsNotNone(declaration,name)
            code+=b'static '+declaration[0][:-1]+b'{ abort(); }\n'
        code+=body+r'''
int main(void){
 unsigned char *image=VirtualAlloc(0,0x74800000,MEM_RESERVE,PAGE_NOACCESS);
 unsigned char *working=VirtualAlloc(0,0x74800000,MEM_RESERVE,PAGE_NOACCESS);
 if(!image||!working)return 8;
'''.encode()
        for page in sorted(pages):
            code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;\n'.encode()
            data=pe.get_data(page,4096)
            if data:code+=('{unsigned char b[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        for rva,name,size in [(0x278d30,'xmmword_140278D30',16),(0x279870,'xmmword_140279870',16),(0x2f6188,'dword_1402F6188',4)]:
            code+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(rva,size)))+'};memcpy(&'+name+',b,sizeof b);}\n').encode()
        for index in range(4):
            base=0x404a6c+111579637*4+1052016*index
            lo=base&~4095
            code+=f'if(!VirtualAlloc(image+{lo},8192,MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{lo},8192,MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
 image[0x1f8b20]=0xc3;unsigned cases=0;
 unsigned char *bases[]={working,image};
 for(unsigned map=0;map<4;map++)for(unsigned sample=0;sample<256;sample++){
  unsigned saved_result=0;float saved_output[7];
  float start[3],end[3];
  for(unsigned axis=0;axis<3;axis++){start[axis]=0.125f*(float)((sample>>(2*axis))&15);end[axis]=0.125f*(float)((sample>>(axis+1))&15);}
  if(sample<192){unsigned axis=sample%3;start[axis]=end[axis]=(sample&1)?-8.0f:8.0f;}
  for(unsigned native=0;native<2;native++){
   unsigned char *base=bases[native];dword_140404A6C=(void *)(base+0x404a6c);
   unsigned at=111579637+263004*map;memset(dword_140404A6C+at,0,160);
   for(unsigned axis=0;axis<3;axis++){
    float one=1.0f,lower=0.0f,upper=4.0f;
    memcpy(dword_140404A6C+at+4+4*axis,&one,4);
    memcpy(dword_140404A6C+at+20+axis,&lower,4);memcpy(dword_140404A6C+at+23+axis,&upper,4);
   }
   float scale=1.0f;memcpy(dword_140404A6C+at+17,&scale,4);
   float out[7]={-2,-3,-4,-5,-6,-7,0.125f};
   unsigned result=native?((unsigned(*)(float*,float*,float*,uint64_t,float*,float*))(image+0xd6b60))(out,out+3,out+6,map,start,end):sub_1400D6B60(out,out+3,out+6,map,start,end);
   if(!native){saved_result=result;memcpy(saved_output,out,sizeof out);}
   else if(result!=saved_result||memcmp(saved_output,out,sizeof out)){printf("map %u ray %u mismatch C=%u N=%u\n",map,sample,saved_result,result);return 1;}
  }cases++;
 }
 printf("%u complete native block raycast rejection/empty-grid cases pass; results and seven output floats compared; intersections excluded\n",cases);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-block-raycast-fixture-20261004';out.mkdir(parents=True,exist_ok=True)
        fixture=out/'block.c';fixture.write_bytes(code);exe=fixture.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-Wno-error=incompatible-pointer-types','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout,encoding='utf-8')
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
