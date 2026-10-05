"""Compare recovered view matrix storage with the pinned native implementation."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT, pinned_pe, region
import test_client_collision_query as collision_query


class ViewStorage(unittest.TestCase):
    def test_native_view(self):
        source=read_client_source();pe=pinned_pe()
        code=b'#include "export_compat.h"\nstatic unsigned char *image,*working;static unsigned *dword_140404A6C;\n'
        constants=(0x278d30,0x278d80,0x278e20,0x279490)
        for rva in constants:code+=f'static __int128 xmmword_140{rva:06X};\n'.encode()
        code+=region(source,0x7a0e0)[2]+region(source,0x7be20)[2]+b'\nint main(void){\n'
        code+=collision_query.CollisionQuery.native_setup(self,pe,[(0x7be20,0x1dc),(0x7a0e0,0xe6)])
        page=(0x404a6c+431564485*4)&~4095
        code+=f'if(!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        for rva in constants:code+=f'memcpy(&xmmword_140{rva:06X},image+{rva},16);\n'.encode()
        code+=r'''
 uint32_t seed=42,saved[96];unsigned checked=0;
 for(unsigned sample=0;sample<1024;sample++)for(unsigned presence=0;presence<4;presence++){
  float inputs[12];for(unsigned j=0;j<12;j++){seed=seed*1664525u+1013904223u;inputs[j]=((int)(seed%16384)-8192)*.03125f;}
  for(unsigned native=0;native<2;native++){
   dword_140404A6C=(void*)((native?image:working)+0x404a6c);
   for(unsigned j=0;j<96;j++){float value=(j%7-3)*.125f;memcpy(dword_140404A6C+431564485+j,&value,4);}
   if(native)((void(*)(float*,unsigned*))(image+0x7be20))((presence&1)?inputs:0,(presence&2)?(unsigned*)(inputs+3):0);
   else sub_14007BE20((presence&1)?inputs:0,(presence&2)?(unsigned*)(inputs+3):0);
   if(!native)memcpy(saved,dword_140404A6C+431564485,sizeof saved);
   else if(memcmp(saved,dword_140404A6C+431564485,sizeof saved)){printf("view mismatch sample %u presence %u\n",sample,presence);return 1;}
  }checked++;
 }
 printf("%u native view matrix cases pass, including optional position/orientation and all six global matrices\n",checked);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-view-storage-20261004';out.mkdir(parents=True,exist_ok=True)
        path=out/'view.c';path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-Wno-error=incompatible-pointer-types','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
