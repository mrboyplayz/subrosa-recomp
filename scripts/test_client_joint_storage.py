"""Compare the joint consumer with native instructions and bounded helper outputs."""
import subprocess
from client_sources import read_client_source
import unittest
import re
from repair_client_menu_actions import PROJECT,pinned_pe,region
import test_client_collision_query as collision_query


class JointStorage(unittest.TestCase):
    def test_native_arm_argument_storage(self):
        """Compare actual caller stores, including the formerly split Z word."""
        import re
        import capstone
        source=read_client_source();pe=pinned_pe();body=region(source,0xad2b0)[2]
        declarations=[]
        for name in ('sr_limb_drive_velocity','sr_limb_angular_limit'):
            declarations.append(re.search(rb'^  _Alignas\(8\) [^\n]*\b'+name.encode()+rb'\[3\];',body,re.M)[0])
        zero_velocity=re.search(rb'^    \(\*\(int64_t \*\)\(void \*\)sr_limb_drive_velocity\) = 0;',body,re.M)[0]
        zero_z=re.search(rb'^    sr_limb_drive_velocity\[2\] = 0\.0;',body,re.M)[0]
        full_limits=re.findall(rb'^\s*[^\n;]+ = (?:0x3D8000003D800000LL|1031798784);',body,re.M)
        full_limits=[line for line in full_limits if b'sr_limb_angular_limit' in line][:2]
        zero_limits=re.search(rb'^    \(\*\(int64_t \*\)\(void \*\)sr_limb_angular_limit\) = 0;',body,re.M)[0]
        zero_limit_z=re.search(rb'^    sr_limb_angular_limit\[2\] = 0;',body,re.M)[0]
        partial_limits=re.search(rb'      \*\(float \*\)&\(\*\(int64_t \*\)\(void \*\)sr_limb_angular_limit\) =[^\n]+\n      \*\(\(float \*\)&\(\*\(int64_t \*\)\(void \*\)sr_limb_angular_limit\) \+ 1\) =[^\n]+;',body)[0]
        decoder=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64)
        def native_stores(addresses):
            instructions=[]
            for rva in addresses:
                instruction=next(decoder.disasm(pe.get_data(rva,15),0x140000000+rva))
                if instruction.mnemonic not in ('mov','movss'):raise ValueError('Unexpected native argument store')
                instructions.append(bytes(instruction.bytes))
            return b'\x55\x48\x89\xcd'+b''.join(instructions)+b'\x5d\xc3'
        functions=[native_stores([0xb06fe,0xb070c]),
                   native_stores([0xb0815,0xb081c,0xb0823]),
                   native_stores([0xb08b1,0xb08b9,0xb08d2,0xb08d7])]
        code=b'#include <stdint.h>\n#include <stdio.h>\n#include <string.h>\n#include <windows.h>\nstatic unsigned char *native_code;\n'
        code+=b'static void restored(unsigned char *frame,unsigned variant,float v382){\n'+b'\n'.join(declarations)
        code+=b'\nmemset(sr_limb_drive_velocity,0xff,12);memset(sr_limb_angular_limit,0xff,12);\n'
        code+=b'if(variant==0){\n'+zero_velocity+b'\n'+zero_z+b'\nmemcpy(frame+0xa8,sr_limb_drive_velocity,12);\n}\n'
        code+=b'else if(variant==1){\n'+b'\n'.join(full_limits)+b'\nmemcpy(frame-0x30,sr_limb_angular_limit,12);\n}\n'
        code+=b'else {\n'+zero_limits+b'\n'+zero_limit_z+b'\n'+partial_limits+b'\nmemcpy(frame-0x30,sr_limb_angular_limit,12);\n}\n}\n'
        code+=b'int main(void){native_code=VirtualAlloc(0,4096,MEM_COMMIT|MEM_RESERVE,PAGE_EXECUTE_READWRITE);if(!native_code)return 9;\n'
        for i,data in enumerate(functions):
            code+=('{unsigned char data[]={'+','.join(map(str,data))+'};memcpy(native_code+'+str(i*64)+',data,sizeof data);}\n').encode()
        code+=r'''
 unsigned checked=0;unsigned char actual[1024],expected[1024];
 for(unsigned variant=0;variant<3;variant++)for(unsigned sample=0;sample<512;sample++){
  float weight=((int)sample-256)*.00390625f;
  memset(actual,sample&255,sizeof actual);memcpy(expected,actual,sizeof actual);
  restored(actual+256,variant,weight);
  float cap=(float)((float)(weight*.015625)+.00390625);
  ((void(*)(unsigned char*,float))(native_code+variant*64))(expected+256,cap);
  if(memcmp(actual,expected,sizeof actual)){
   printf("arm argument mismatch variant=%u sample=%u\n",variant,sample);return 1;
  }checked++;
 }
 printf("%u native arm argument cases pass: full 12-byte drive/limit arguments and surrounding guards match\n",checked);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-limb-inputs-20261005';out.mkdir(parents=True,exist_ok=True)
        path=out/'arguments.c';path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11',
            '-fno-strict-aliasing','-ffp-contract=off','-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'arguments-stdout.txt').write_text(result.stdout)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)

    def test_native_joint_consumer(self):
        self.compare_joint_consumer(False)

    def test_native_joint_consumer_with_rotation_math(self):
        self.compare_joint_consumer(True)

    def compare_joint_consumer(self, actual_math):
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
        helpers=[(0x7ae70,0x400),(0x10e370,0x2a0),(0x7a240,0xe0),
                 (0x7b2a0,0x470),(0x105930,0x180)]
        if actual_math:
            start=code.index(b'static void sub_14007AE70')
            end=code.index(b'static void sub_1400B2BF0')
            code=code[:start]+r'''
static void sub_14007AE70(float *out,const float *a,const float *b){((void(*)(float*,const float*,const float*))(image+0x7ae70))(out,a,b);}
static void sub_14010E370(float *out,const float *matrix){((void(*)(float*,const float*))(image+0x10e370))(out,matrix);}
static void sub_14007A240(int64_t out,const float *in){((void(*)(int64_t,const float*))(image+0x7a240))(out,in);}
static void sub_14007B2A0(int64_t matrix,float *axis,double angle){((void(*)(int64_t,float*,double))(image+0x7b2a0))(matrix,axis,angle);}
'''.encode()+code[end:]
            start=code.index(b'static __m128 sub_1401F8AC0')
            code=code[:start]+r'''
/* Shared sin/cos boundary; real native vector/matrix/quaternion helpers run
   on both sides. The low word is a float lane, despite the exported double. */
static __m128 sub_1401F8AC0(double a,int64_t b,double c){float angle;memcpy(&angle,&a,4);(void)b;(void)c;return _mm_setr_ps(sinf(angle),cosf(angle),0,0);}
static void sub_140105930(float *out,float *a,float *b){((void(*)(float*,float*,float*))(image+0x105930))(out,a,b);}
'''.encode()
        constants=(0x2f6178,0x2f617c,0x2f6180,0x2f6188)
        wide=(0x278d30,0x279490,0x279870)
        code+=re.search(rb'_Alignas\(8\) int sr_math_axes\[12\].*?\n\);',source,re.S)[0]+b'\n'
        for rva in constants:code+=f'extern int dword_140{rva:06X};\n'.encode()
        for rva in wide:code+=f'static __int128 xmmword_140{rva:06X};\n'.encode()
        code+=region(source,0xb1450)[2]+b'\nint main(void){\n'
        code+=collision_query.CollisionQuery.native_setup(self,pe,[(0xb1450,0xff0)]+(helpers if actual_math else []),(0x7a000,0x7b000,0xa9000,0xb2000,0x10e000,0x105000,0x23e000))
        calls=[(0xb2bf0,'sub_1400B2BF0'),(0xa9940,'sub_1400A9940'),(0x1f8ac0,'sub_1401F8AC0'),(0x23e7d4,'acos')]
        if not actual_math:calls += [(0x7ae70,'sub_14007AE70'),(0x10e370,'sub_14010E370'),(0x7a240,'sub_14007A240'),(0x7b2a0,'sub_14007B2A0'),(0x105930,'sub_140105930')]
        for rva,name in calls:code+=f'jump(image+{rva},{name});\n'.encode()
        code+=b'if(memcmp(sr_math_axes,image+0x2f6178,sizeof sr_math_axes)){puts("unit axis bytes differ");return 7;}\n'
        for rva in constants:code+=f'{{volatile uintptr_t address=(uintptr_t)&dword_140{rva:06X};if(address!=(uintptr_t)sr_math_axes+{rva-0x2f6178}){{puts("unit axis alias differs");return 7;}}}}\n'.encode()
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
   for(unsigned bone=0;bone<16;bone++){float *rotation=(float*)(dword_140404A6C+280651452+78*bone);float a=((int)((sample+bone)%17)-8)*.03125f;for(unsigned j=0;j<9;j++)rotation[j]=0;rotation[0]=1;rotation[4]=rotation[8]=cosf(a);rotation[5]=sinf(a);rotation[7]=-sinf(a);dword_140404A6C[280651511+78*bone]=bone;}
   float target[3]={.125f,-.25f,.125f},rotation[9]={1,0,0,0,1,0,0,0,1},velocity[3]={.125f,.25f,-.5f},limit[3]={.1f,.2f,.3f};
   __m128 quaternion=_mm_setr_ps(0,0,0,1);unsigned bounds[3]={0x3e800000,0x3e000000,0x3d800000};
   unsigned flags=sample%32;if(native)((void(*)(int,int,int,float*,float*,float*,float,int,__m128*,float*,unsigned*,unsigned*,float,char))(image+0xb1450))(0,0,joint,target,rotation,velocity,.65625f,0,&quaternion,limit,bounds,bounds,.19634955f,flags);
   else sub_1400B1450(0,0,joint,target,rotation,velocity,.65625f,0,&quaternion,limit,bounds,bounds,.19634955f,flags);
   if(!native){memcpy(saved_motion,dword_140404A6C+485543000,sizeof saved_motion);memcpy(saved_joints,dword_140404A6C+486149280,sizeof saved_joints);}
   else if(memcmp(saved_motion,dword_140404A6C+485543000,sizeof saved_motion)||memcmp(saved_joints,dword_140404A6C+486149280,sizeof saved_joints)){
    printf("joint mismatch sample %u joint %u\n",sample,joint);
    for(unsigned i=0;i<32*36;i++)if(saved_motion[i]!=dword_140404A6C[485543000+i]){float a,b;memcpy(&a,saved_motion+i,4);memcpy(&b,dword_140404A6C+485543000+i,4);printf("work word %u C=%08x %a native=%08x %a\n",i,saved_motion[i],(double)a,dword_140404A6C[485543000+i],(double)b);}
    for(unsigned i=0;i<32*61;i++)if(saved_joints[i]!=dword_140404A6C[486149280+i])printf("joint word %u C=%08x native=%08x\n",i,saved_joints[i],dword_140404A6C[486149280+i]);return 1;
   }
  }checked++;
 }
 printf("%u joint consumer cases pass; native global output and joint indices compared\n",checked);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-joint-storage-20261004';out.mkdir(parents=True,exist_ok=True)
        path=out/('joint-rotation-math.c' if actual_math else 'joint.c');path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/('rotation-math-stdout.txt' if actual_math else 'stdout.txt')).write_text(result.stdout)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
