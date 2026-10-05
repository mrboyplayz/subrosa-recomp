"""Compare the complete native health HUD with recovered C and captured drawing."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT, pinned_pe, region
from repair_client_health_pose import repair
import test_client_collision_query as collision


class HealthPose(unittest.TestCase):
    def test_native_health_hud(self):
        source = read_client_source()
        if b'sr_health_positions' not in region(source, 0xa7c70)[2]:
            source, _ = repair(source)
        code = r'''#include <math.h>
#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static __int128 xmmword_140278D30;
static unsigned trace[32768][8],trace_count;
static void jump(unsigned char *p,void *f){p[0]=0xff;p[1]=0x25;memset(p+2,0,4);memcpy(p+6,&f,8);}
static void sr_gl_bind(unsigned target,unsigned texture){unsigned *t=trace[trace_count++];memset(t,0,32);t[0]=1;t[1]=target;t[2]=texture;}
static void (*qword_140404050)(unsigned,unsigned)=sr_gl_bind;
static int64_t sub_14007D520(unsigned *point,int64_t ignored,int64_t unused){
 unsigned *t=trace[trace_count++];memset(t,0,32);t[0]=2;memcpy(t+1,point,12);memcpy(t+4,dword_140404A6C+456807033,16);return 0;
}
static void sub_14006E0D0(int64_t a,int64_t b,int64_t c){
 unsigned *t=trace[trace_count++];memset(t,0,32);t[0]=3;memcpy(t+1,dword_140404A6C+456217205,16);
}
static __m128 sub_1401F8AC0(double bits,int64_t ignored,double unused){float x;memcpy(&x,&bits,4);return _mm_setr_ps(sinf(x),cosf(x),0,0);}
'''.encode()
        for rva in (0x7a010,0x7ae70,0x7b2a0,0xa77c0,0xa7c70):
            code += region(source, rva)[2]
        code += b'\nint main(void){\n' + collision.CollisionQuery.native_setup(
            self, pinned_pe(), [(0x7a010,0xd4),(0x7ae70,0x110),(0x7b2a0,0x230),
                               (0xa77c0,0x280),(0xa7c70,0x740)], (0x6e000,0x7d000))
        code += r'''
 jump(image+0x7d520,sub_14007D520);jump(image+0x6e0d0,sub_14006E0D0);jump(image+0x1f8ac0,sub_1401F8AC0);
 memcpy(image+0x404050,&qword_140404050,8);memcpy(&xmmword_140278D30,image+0x278d30,16);
'''.encode()
        for index,size in [(280651293,0x42000),(282486045,0x3000),(284956347,0x6000),
                           (346696314,0x2000),(451221642,0x2000),(456807033,0x2000),(456217205,0x2000)]:
            page=(0x404a6c+index*4)&~4095
            code+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},{size},MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code += r'''
 unsigned (*saved)[8]=malloc(sizeof trace),saved_count,cases=0;
 if(!saved)return 8;
 for(unsigned sample=0;sample<128;sample++)for(unsigned nat=0;nat<2;nat++){
  unsigned actor=sample%8;dword_140404A6C=(void*)((nat?image:working)+0x404a6c);
  trace_count=0;memset(trace,0,sizeof trace);
  for(unsigned i=0;i<9;i++){float v=i%4==0?1.f:0.f;memcpy(dword_140404A6C+284956347+344*actor+i,&v,4);}
  for(unsigned i=9;i<344;i++){float v=((int)((i+sample)%17)-8)*.015625f;memcpy(dword_140404A6C+284956347+344*actor+i,&v,4);}
  for(unsigned bone=0;bone<16;bone++){
   unsigned *t=dword_140404A6C+282486045+25*bone;memset(t,0,100);t[0]=bone?((bone+sample)%(bone)):0;t[22]=sample%3;
   for(unsigned i=4;i<7;i++){float v=((int)((bone+i+sample)%23)-11)*.03125f;memcpy(t+i,&v,4);}
   float len=.25f+(bone%5)*.03125f,wide=.125f;memcpy(t+23,&len,4);memcpy(t+24,&wide,4);
  }
  for(unsigned i=0;i<128;i++){float v=(float)((int)i-64)*.015625f;memcpy(dword_140404A6C+346696314+i,&v,4);}
  for(unsigned i=0;i<12;i++)dword_140404A6C[7166*actor+280658301+i]=sample%101;
  float angle=((int)(sample%17)-8)*.125f;memcpy(dword_140404A6C+7166*actor+280651341,&angle,4);
  dword_140404A6C[451221642]=0x87654321;
  memset(dword_140404A6C+456217205,0,16);memset(dword_140404A6C+456807033,0,16);
  float x=512.f+(sample%7)*.25f,y=444.f-(sample%13)*.5f;
  _mm_setcsr(0x1f80);
  if(nat)((void(*)(int,float,float))(image+0xa7c70))(actor,x,y);else sub_1400A7C70(actor,x,y);
  if(!nat){saved_count=trace_count;memcpy(saved,trace,trace_count*32);}
  else if(saved_count!=trace_count||memcmp(saved,trace,trace_count*32)){
   printf("HUD mismatch sample %u counts %u/%u\n",sample,saved_count,trace_count);
   for(unsigned i=0;i<trace_count&&i<saved_count;i++)for(unsigned j=0;j<8;j++)if(saved[i][j]!=trace[i][j]){printf("event %u word %u C/native %x/%x\n",i,j,saved[i][j],trace[i][j]);return 1;}
   return 2;
  }else cases++;
 }
 printf("%u complete native 16-bone health HUD comparisons pass; actual matrix math, varied hierarchy/health/angles, XYZ vertices, colors, bindings and flush state; trig and GPU submission controlled\n",cases);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-health-pose-20261005';out.mkdir(exist_ok=True)
        path=out/'health.c';path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11',
            '-fno-strict-aliasing','-ffp-contract=off','-I',str(PROJECT/'src/client'),
            '-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        (out/'compile.txt').write_text(result.stderr,encoding='utf-8')
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout,encoding='utf-8')
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)
        print(result.stdout.strip())


if __name__=='__main__':unittest.main()
