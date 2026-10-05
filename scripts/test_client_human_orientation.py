"""Compare complete human averages and quaternion update against native code."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT,pinned_pe,region
from repair_client_human_orientation import repair
import test_client_collision_query as query_fixtures


class HumanOrientation(unittest.TestCase):
    def test_native_whole_state(self):
        source=read_client_source()
        if b'sr_zero_or_unordered' not in region(source,0xabb10)[2]:source,_=repair(source)
        pe=pinned_pe()
        code=b'#include <math.h>\n#include "export_compat.h"\nstatic unsigned char *image,*working;static unsigned *dword_140404A6C;\n'
        for name in ('xmmword_140279870','xmmword_140279490'):
            code+=f'static _Alignas(16) __int128 {name};\n'.encode()
        for rva in (0x10e370,0x11c340,0xabb10):code+=region(source,rva)[2]
        code+=r'''
static void matrix(float *m,const double *q){double x=q[0],y=q[1],z=q[2],w=q[3];m[0]=1-2*(y*y+z*z);m[1]=2*(x*y-z*w);m[2]=2*(x*z+y*w);m[3]=2*(x*y+z*w);m[4]=1-2*(x*x+z*z);m[5]=2*(y*z-x*w);m[6]=2*(x*z-y*w);m[7]=2*(y*z+x*w);m[8]=1-2*(x*x+y*y);}
int main(void){
'''.encode()+query_fixtures.CollisionQuery().native_setup(pe,[(0xabb10,0xa18),(0x10e370,0x400),(0x11c340,0x280)])
        page=(0x404a6c+280651414*4)&~4095
        code+=f'if(!VirtualAlloc(image+{page},0x3a000,MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},0x3a000,MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        for rva in (0x279870,0x279490):code+=f'memcpy(&xmmword_{0x140000000+rva:X},image+{rva},16);\n'.encode()
        code+=r'''
 double quats[6][4]={{0,0,0,1},{1,0,0,0},{0,1,0,0},{0,0,1,0},{1,2,3,4},{-1,0,0,.087488663525924}};
 for(unsigned q=0;q<6;q++){double n=0;for(unsigned i=0;i<4;i++)n+=quats[q][i]*quats[q][i];n=sqrt(n);for(unsigned i=0;i<4;i++)quats[q][i]/=n;}
 unsigned seed=0x5239127,cases=0,saved_flags=0;float initial[7166],saved[7166];
 for(unsigned mode=0;mode<4;mode++)for(unsigned actor=0;actor<8;actor++)for(unsigned current=0;current<6;current++)for(unsigned old=0;old<6;old++)for(unsigned shape=0;shape<4;shape++){
  for(unsigned i=0;i<7166;i++){seed=seed*1664525u+1013904223u;initial[i]=shape==0?0.0f:shape==1?.125f:((seed%1024)+1)*.0009765625f;}
  matrix(initial+(280651452-280651414),quats[current]);for(unsigned i=0;i<4;i++)initial[280657926-280651414+i]=(float)quats[old][i]*(shape==3?-1.0f:1.0f);
  for(unsigned native=0;native<2;native++){
   dword_140404A6C=(void*)((native?image:working)+0x404a6c);float *state=(float*)(dword_140404A6C+280651414+7166*actor);memcpy(state,initial,sizeof initial);_mm_setcsr(0x1f80|(mode<<13));
   if(native)((void(*)(int))(image+0xabb10))(actor);else sub_1400ABB10(actor);unsigned flags=_mm_getcsr();
   if(!native){memcpy(saved,state,sizeof saved);saved_flags=flags;}
   else if(saved_flags!=flags||memcmp(saved,state,sizeof saved)){
    printf("human average mismatch mode %u actor %u current %u old %u shape %u flags %x/%x\n",mode,actor,current,old,shape,saved_flags,flags);
    for(unsigned i=0;i<7166;i++)if(memcmp(saved+i,state+i,4))printf("word %u C=%a N=%a\n",i,saved[i],state[i]);return 1;
   }
  }cases++;
 }
 printf("%u complete human averaging/orientation cases pass; all 28664 state bytes, conversion leaves, quaternion/matrix bits and four MXCSR modes; finite rotations and varied zero/positive weights\n",cases);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-human-orientation-20261004';out.mkdir(parents=True,exist_ok=True)
        path=out/'human.c';path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout,encoding='utf-8')
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
