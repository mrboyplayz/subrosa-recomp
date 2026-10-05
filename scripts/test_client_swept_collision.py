"""Compare swept query bounds/results with original instructions and controlled geometry."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT, pinned_pe, region
import test_client_collision_query as collision_query


class SweptCollision(unittest.TestCase):
    native_setup=collision_query.CollisionQuery.native_setup

    def run_fixture(self,name,code):
        out=PROJECT/'reports/client-swept-collision-20261004';out.mkdir(parents=True,exist_ok=True)
        path=out/(name+'.c');path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-Wno-error=incompatible-pointer-types','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/(name+'-stdout.txt')).write_text(result.stdout)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)

    def test_native_combined_query(self):
        source=read_client_source();pe=pinned_pe()
        code=r'''#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static unsigned sample,calls;static uint32_t trace[8][16];
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static void sub_1400D05B0(int *lists,float *upper,float *lower){memcpy(trace[0],lower,12);memcpy(trace[0]+3,upper,12);lists[0]=11;lists[8193]=22;lists[16386]=33;}
static unsigned sub_1400337B0(float *out,int64_t lists,float *p,float *v,int radius){if(((int*)lists)[0]!=11||((int*)lists)[8193]!=22||((int*)lists)[16386]!=33)abort();memcpy(trace[1],p,12);memcpy(trace[1]+3,v,12);trace[1][6]=radius;for(unsigned i=0;i<8;i++)out[i]=.125f+i*.0625f;out[7]=(sample%5)*.5f;return sample&1;}
static int64_t sub_140031530(float *pos,float *normal,float *distance,int map,float *p,float *v,float radius){unsigned n=2+calls++;memcpy(trace[n],p,12);memcpy(trace[n]+3,v,12);memcpy(trace[n]+6,&radius,4);trace[n][7]=map;for(unsigned i=0;i<3;i++){pos[i]=.25f+map+i*.125f;normal[i]=-.5f+map+i*.25f;}*distance=(sample%7)*.125f+(3-map)*.125f;dword_140404A6C[73007003]=101+map;return (sample>>map)&1;}
'''.encode()+region(source,0x33fe0)[2]+b'\nint main(void){\n'+self.native_setup(pe,[(0x33fe0,0x38d)],(0xd0000,0x31000,0x33000))
        for rva,name in [(0xd05b0,'sub_1400D05B0'),(0x337b0,'sub_1400337B0'),(0x31530,'sub_140031530')]:code+=f'jump(image+{rva},{name});\n'.encode()
        code+=r'''
 unsigned checked=0,saved_result=0,saved_calls=0;uint32_t saved_state[36],saved_trace[8][16];float saved_inputs[2][5];
 for(sample=0;sample<256;sample++)for(unsigned active=0;active<16;active++){
  for(unsigned native=0;native<2;native++){
   dword_140404A6C=(void*)((native?image:working)+0x404a6c);memset(dword_140404A6C+73006981,0xa5,sizeof saved_state);
   for(unsigned map=0;map<4;map++)dword_140404A6C[111579637+263004*map]=(active>>map)&1;
   float inputs[2][5]={{123,.125f+sample*.01f,-.25f,.5f,456},{123,.25f,-.5f,.75f,456}};float radius=.125f+(sample%4)*.0625f;calls=0;memset(trace,0,sizeof trace);
   unsigned result=native?((unsigned(*)(float*,float*,float))(image+0x33fe0))(inputs[0]+1,inputs[1]+1,radius):sub_140033FE0(inputs[0]+1,inputs[1]+1,radius);
   if(!native){saved_result=result;saved_calls=calls;memcpy(saved_state,dword_140404A6C+73006981,sizeof saved_state);memcpy(saved_inputs,inputs,sizeof inputs);memcpy(saved_trace,trace,sizeof trace);}
   else if(result!=saved_result||calls!=saved_calls||memcmp(saved_state,dword_140404A6C+73006981,sizeof saved_state)||memcmp(saved_inputs,inputs,sizeof inputs)||memcmp(saved_trace,trace,sizeof trace)){printf("swept world mismatch sample %u active %u result %u/%u calls %u/%u\n",sample,active,saved_result,result,saved_calls,calls);return 1;}
  }checked++;
 }
 printf("%u native swept world query cases pass; bounds, 32-byte result, active maps, nearest contact, global state and guards compared; geometry and broadphase controlled\n",checked);return 0;
}
'''.encode()
        self.run_fixture('combined',code)


if __name__=='__main__':unittest.main()
