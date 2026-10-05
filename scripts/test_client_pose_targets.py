"""Compare complete pose targets and quaternion multiplication with native code."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT, pinned_pe, region
from repair_client_pose_targets import repair, repair_skeleton
import test_client_collision_query as collision


class PoseTargets(unittest.TestCase):
    def test_native_skeleton_construction(self):
        source = read_client_source()
        if b'sr_skeleton_anchor' not in region(source, 0xab7b0)[2]:
            source = repair_skeleton(source)
        code = r'''#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static void sub_1401FCD30(void *p,int c,uint64_t n){memset(p,c,n);}
'''.encode() + region(source, 0x55fa0)[2] + region(source, 0xab7b0)[2]
        code += b'\nint main(void){\n' + collision.CollisionQuery.native_setup(
            self, pinned_pe(), [(0x55fa0, 0x220), (0xab7b0, 0x360)], (0x1fc000,))
        for index, size in [(280651293, 0x42000), (282486040, 0x3000),
                            (485543019, 0x241000), (486149253, 0x3d1000)]:
            page = (0x404a6c + index*4) & ~4095
            code += f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},{size},MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code += r'''
 jump(image+0x1fcd30,sub_1401FCD30);
 unsigned *saved_joints=malloc(16384*244),*saved_work=malloc(16384*144+256),saved_human[7166];
 if(!saved_joints||!saved_work)return 8;unsigned cases=0;
 for(unsigned sample=0;sample<128;sample++)for(unsigned nat=0;nat<2;nat++){
  unsigned actor=sample%8;dword_140404A6C=(void*)((nat?image:working)+0x404a6c);
  memset(dword_140404A6C+485543019,0xa5,16384*144+256);memset(dword_140404A6C+486149253,0x5a,16384*244);
  for(unsigned i=0;i<16384;i++)dword_140404A6C[486149253+61*i]=1;
  for(unsigned i=0;i<sample%17;i++)dword_140404A6C[486149253+61*(sample+i*101)]=0;
  unsigned *human=dword_140404A6C+280651293+7166*actor;memset(human,0x3c,sizeof saved_human);human[280654224-280651293]=sample%18;
  for(unsigned bone=0;bone<16;bone++){
   human[280651439-280651293+78*bone]=(sample*43+bone*7)%8192;
   for(unsigned i=0;i<25;i++){float value=((int)((i+bone+sample)%33)-16)*.03125f;memcpy(dword_140404A6C+282486046+25*bone+i,&value,4);}
  }
  if(nat)((void(*)(int))(image+0xab7b0))(actor);else sub_1400AB7B0(actor);
  if(!nat){memcpy(saved_joints,dword_140404A6C+486149253,16384*244);memcpy(saved_work,dword_140404A6C+485543019,16384*144+256);memcpy(saved_human,human,sizeof saved_human);}
  else if(memcmp(saved_joints,dword_140404A6C+486149253,16384*244)||memcmp(saved_work,dword_140404A6C+485543019,16384*144+256)||memcmp(saved_human,human,sizeof saved_human)){
   printf("skeleton mismatch sample %u\n",sample);return 1;
  }else cases++;
 }
 printf("%u complete native skeleton constructions pass; all 16384 joint/work entries, guards and full Human state compared; actual constructor, varied body IDs, partial/full pool exhaustion; memset shared\n",cases);return 0;
}
'''.encode()
        out = PROJECT/'reports/client-pose-targets-20261005'; out.mkdir(exist_ok=True)
        path = out/'skeleton.c'; path.write_bytes(code); exe = path.with_suffix('.exe')
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', '-O0', '-std=gnu11',
            '-fno-strict-aliasing', '-ffp-contract=off', '-I', str(PROJECT/'src/client'),
            '-I', str(PROJECT/'src/rebuild'), str(path), '-o', str(exe)], capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)
        result = subprocess.run([str(exe)], capture_output=True, text=True, timeout=30)
        (out/'skeleton-stdout.txt').write_bytes(result.stdout.encode())
        self.assertEqual(result.returncode, 0, result.stdout+result.stderr)

    def test_native_pose_targets(self):
        source = read_client_source()
        if b'sr_pose_quaternion' not in region(source, 0xad030)[2]:
            source, _ = repair(source)
        code = r'''#include <math.h>
#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static unsigned trace[6],calls;
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static __m128 sub_1401F8AC0(double bits,int64_t unused,double other){
 float a;memcpy(&a,&bits,4);if(calls>=6)abort();memcpy(trace+calls++,&a,4);
 return _mm_setr_ps(sinf(a),cosf(a),0,0);
}
'''.encode()
        code += region(source, 0x105930)[2] + region(source, 0xad030)[2]
        code += b'\nint main(void){\n' + collision.CollisionQuery.native_setup(
            self, pinned_pe(), [(0xad030, 0x280), (0x105930, 0x180)], (0x1f8000,))
        page = (0x404a6c + 280651293*4) & ~4095
        code += f'if(!VirtualAlloc(image+{page},0x42000,MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},0x42000,MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code += r'''
 jump(image+0x1f8ac0,sub_1401F8AC0);
 unsigned saved[7166],initial[7166],saved_trace[6],saved_flags,cases=0;
 for(unsigned mode=0;mode<4;mode++)for(unsigned sample=0;sample<512;sample++){
  for(unsigned i=0;i<7166;i++)initial[i]=0x3e000000;
  float inputs[]={((int)(sample%67)-33)*.125f,((int)(sample%41)-20)*.0625f,((int)(sample%47)-23)*.25f,((int)(sample%59)-29)*.03125f};
  unsigned offsets[]={280651342,280651365,280651383,280651384};
  for(unsigned i=0;i<4;i++)memcpy(initial+offsets[i]-280651293,inputs+i,4);
  float angle=((int)(sample%73)-36)*.03125f;unsigned actor=sample%8;
  for(unsigned nat=0;nat<2;nat++){
   dword_140404A6C=(void*)((nat?image:working)+0x404a6c);unsigned *state=dword_140404A6C+280651293+7166*actor;
   memcpy(state,initial,sizeof initial);calls=0;memset(trace,0,sizeof trace);_mm_setcsr(0x1f80|(mode<<13));
   if(nat)((void(*)(int,float))(image+0xad030))(actor,angle);else sub_1400AD030(actor,angle);
   unsigned flags=_mm_getcsr();
   if(!nat){memcpy(saved,state,sizeof saved);memcpy(saved_trace,trace,sizeof trace);saved_flags=flags;}
   else if(calls!=6||flags!=saved_flags||memcmp(saved_trace,trace,sizeof trace)||memcmp(saved,state,sizeof saved)){
    printf("pose mismatch mode %u sample %u calls %u flags %x/%x\n",mode,sample,calls,flags,saved_flags);
    for(unsigned i=0;i<6;i++)printf("angle %u %x/%x\n",i,saved_trace[i],trace[i]);
    for(unsigned i=0;i<7166;i++)if(saved[i]!=state[i])printf("word %u %x/%x\n",i,saved[i],state[i]);return 1;
   }
  }cases++;
 }
 printf("%u complete native pose-target cases pass; full Human state, six trig arguments, quaternion aliasing and four MXCSR modes compared; trig shared/controlled\n",cases);return 0;
}
'''.encode()
        out = PROJECT/'reports/client-pose-targets-20261005'
        out.mkdir(exist_ok=True)
        path = out/'pose.c'; path.write_bytes(code); exe = path.with_suffix('.exe')
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', '-O0', '-std=gnu11',
            '-fno-strict-aliasing', '-ffp-contract=off', '-I', str(PROJECT/'src/client'),
            '-I', str(PROJECT/'src/rebuild'), str(path), '-o', str(exe)], capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)
        result = subprocess.run([str(exe)], capture_output=True, text=True, timeout=30)
        (out/'stdout.txt').write_bytes(result.stdout.encode())
        self.assertEqual(result.returncode, 0, result.stdout+result.stderr)


if __name__ == '__main__':
    unittest.main()
