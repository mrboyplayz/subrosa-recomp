"""Compare the joint consumer with native instructions and bounded helper outputs."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT,pinned_pe,region
import test_client_collision_query as collision_query


class JointStorage(unittest.TestCase):
    def test_native_joint_consumer(self):
        source=read_client_source();pe=pinned_pe()
        code=r'''#include <math.h>
#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static void sub_14007AE70(float *out,const float *a,const float *b){(void)a;(void)b;for(unsigned i=0;i<9;i++)out[i]=(i%4)==0;}
static void sub_14010E370(float *out,const float *matrix){(void)matrix;out[0]=out[1]=out[2]=0;out[3]=1;}
static void sub_14007A240(int64_t out,const float *in){float values[3];memcpy(values,in,12);float length=sqrtf(values[0]*values[0]+values[1]*values[1]+values[2]*values[2]);for(unsigned i=0;i<3;i++)((float*)out)[i]=length?values[i]/length:0;}
static void sub_14007B2A0(int64_t matrix,float *axis,double angle){(void)axis;(void)angle;float *out=(float*)matrix;for(unsigned i=0;i<9;i++)out[i]=(i%4)==0;}
static void sub_1400B2BF0(int a,int b,int c,float *d,float e,float f){(void)a;(void)b;(void)c;(void)d;(void)e;(void)f;}
static void sub_1400A9940(int64_t a,int b,int64_t c,float *d){(void)a;(void)b;(void)c;(void)d;}
static __m128 sub_1401F8AC0(double a,int64_t b,double c){(void)a;(void)b;(void)c;return _mm_setr_ps(0,0,0,1);}
static void sub_140105930(float *out,float *a,float *b){(void)a;(void)b;out[0]=out[1]=out[2]=0;out[3]=1;}
'''.encode()
        constants=(0x2f6178,0x2f617c,0x2f6180,0x2f6188)
        wide=(0x278d30,0x279490,0x279870)
        for rva in constants:code+=f'static uint32_t dword_140{rva:06X};\n'.encode()
        for rva in wide:code+=f'static __int128 xmmword_140{rva:06X};\n'.encode()
        code+=region(source,0xb1450)[2]+b'\nint main(void){\n'
        code+=collision_query.CollisionQuery.native_setup(self,pe,[(0xb1450,0xff0)],(0x7a000,0x7b000,0xa9000,0xb2000,0x10e000,0x105000,0x23e000))
        for rva,name in [(0x7ae70,'sub_14007AE70'),(0x10e370,'sub_14010E370'),(0x7a240,'sub_14007A240'),(0x7b2a0,'sub_14007B2A0'),(0xb2bf0,'sub_1400B2BF0'),(0xa9940,'sub_1400A9940'),(0x1f8ac0,'sub_1401F8AC0'),(0x105930,'sub_140105930'),(0x23e7d4,'acos')]:code+=f'jump(image+{rva},{name});\n'.encode()
        for rva in constants:code+=f'memcpy(&dword_140{rva:06X},image+{rva},4);\n'.encode()
        for rva in wide:code+=f'memcpy(&xmmword_140{rva:06X},image+{rva},16);\n'.encode()
        for index in (280651452,485543000,486149280):
            page=(0x404a6c+index*4)&~4095
            code+=f'if(!VirtualAlloc(image+{page},32768,MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},32768,MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
 uint32_t saved_motion[32*36],saved_joints[32*61];unsigned checked=0;
 for(unsigned sample=0;sample<128;sample++)for(unsigned joint=0;joint<8;joint++){
  for(unsigned native=0;native<2;native++){
   dword_140404A6C=(void*)((native?image:working)+0x404a6c);
   memset(dword_140404A6C+485543000,0,16384);memset(dword_140404A6C+486149280,0,16384);memset(dword_140404A6C+280651452,0,16384);
   for(unsigned bone=0;bone<16;bone++){float *rotation=(float*)(dword_140404A6C+280651452+78*bone);for(unsigned j=0;j<9;j++)rotation[j]=(j%4)==0;dword_140404A6C[280651511+78*bone]=bone;}
   float target[3]={.125f,-.25f,.125f},rotation[9]={1,0,0,0,1,0,0,0,1},velocity[3]={.125f,.25f,-.5f},limit[3]={.1f,.2f,.3f};
   __m128 quaternion=_mm_setr_ps(0,0,0,1);unsigned bounds[3]={0x3e800000,0x3e000000,0x3d800000};
   if(native)((void(*)(int,int,int,float*,float*,float*,float,int,__m128*,float*,unsigned*,unsigned*,float,char))(image+0xb1450))(0,0,joint,target,rotation,velocity,.65625f,0,&quaternion,limit,bounds,bounds,.19634955f,(sample&1)?4:12);
   else sub_1400B1450(0,0,joint,target,rotation,velocity,.65625f,0,&quaternion,limit,bounds,bounds,.19634955f,(sample&1)?4:12);
   if(!native){memcpy(saved_motion,dword_140404A6C+485543000,sizeof saved_motion);memcpy(saved_joints,dword_140404A6C+486149280,sizeof saved_joints);}
   else if(memcmp(saved_motion,dword_140404A6C+485543000,sizeof saved_motion)||memcmp(saved_joints,dword_140404A6C+486149280,sizeof saved_joints)){printf("joint mismatch sample %u joint %u\n",sample,joint);return 1;}
  }checked++;
 }
 printf("%u joint consumer cases pass with controlled 36-byte rotation matrices and quaternion helpers; native global output and joint indices compared\n",checked);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-joint-storage-20261004';out.mkdir(parents=True,exist_ok=True)
        path=out/'joint.c';path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
