"""Compare recovered view matrix storage with the pinned native implementation."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT, pinned_pe, region
import test_client_collision_query as collision_query


class ViewStorage(unittest.TestCase):
    def test_native_scene_draw_queue(self):
        source=read_client_source();pe=pinned_pe()
        code=r'''#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static __int128 xmmword_140278D30;static int dword_1402F6188;
static unsigned calls,trace[128][20];
static unsigned *event(unsigned kind){if(calls>=128)abort();unsigned *p=trace[calls++];p[0]=kind;return p;}
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static void sub_140022DF0(int id,int mode){event(1)[1]=id;}
static void sub_140092140(unsigned mesh,unsigned *textures,unsigned mode,unsigned *p,unsigned *r){
 unsigned *e=event(2);e[1]=mesh;e[2]=mode;memcpy(e+3,textures,8);memcpy(e+5,p,12);memcpy(e+8,r,36);dword_140404A6C[284550610]++;
}
static void rotation(__int64 r,float *axis,double angle){unsigned *e=event(3);memcpy(e+1,(void*)r,36);memcpy(e+10,axis,12);memcpy(e+13,&angle,4);float *p=(void*)r;for(unsigned i=0;i<9;i++)p[i]=.125f*(i+1);}
static void sub_14007B2A0(__int64 r,float *axis,double angle){rotation(r,axis,angle);}
static void sub_14012BD30(__int64 r,float *axis,double angle){rotation(r,axis,angle);}
static void sub_14007A240(__int64 a,float*b){abort();}
static void sub_14007D710(void){dword_140404A6C[284550610]=0;}
'''.encode()+region(source,0x212e0)[2]+b'\nint main(void){\n'
        code+=collision_query.CollisionQuery.native_setup(self,pe,[(0x212e0,0x1b03)],
                                                         (0x22000,0x92000,0x7b000,0x12b000,0x7a000,0x7d000))
        for rva,name in ((0x22df0,'sub_140022DF0'),(0x92140,'sub_140092140'),
                         (0x7b2a0,'sub_14007B2A0'),(0x12bd30,'sub_14012BD30'),
                         (0x7a240,'sub_14007A240'),(0x7d710,'sub_14007D710')):
            code+=f'jump(image+{rva},{name});\n'.encode()
        for index,size in ((283826000,0x530000),(280651293,0x701000),
                           (129716709,0xa31000),(278845893,0x6e1000),
                           (132792829,0x1000),(70074733,0x1000),
                           (436668493,0x250000),(346731800,0x3000),
                           (285044400,0x15000),(178527484,0x3000),
                           (438881242,0x1000)):
            page=(0x404a6c+index*4)&~4095
            code+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},{size},MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        import re
        for index in sorted({int(n) for n in re.findall(rb'\b\d{8,9}\b',region(source,0x212e0)[2]) if int(n)<487416165}):
            page=(0x404a6c+index*4)&~4095
            code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
 memcpy(&xmmword_140278D30,image+0x278d30,16);unsigned saved[128][20],saved_calls;
 for(unsigned sample=0;sample<64;sample++)for(unsigned nat=0;nat<2;nat++){
  dword_140404A6C=(void*)((nat?image:working)+0x404a6c);calls=0;memset(trace,0,sizeof trace);
  memset(dword_140404A6C+280651293,0,0x700000);memset(dword_140404A6C+129716709,0,0xa30000);memset(dword_140404A6C+278845893,0,0x6e0000);
  memset(dword_140404A6C+283826000,0,0x52f000);memset(dword_140404A6C+285044400,0,0x14000);
  dword_140404A6C[132792829]=0;dword_140404A6C[70074733]=0;dword_140404A6C[284024501]=~0u;
  dword_140404A6C[280651303]=1;
  unsigned identity[9]={0x3f800000,0,0,0,0x3f800000,0,0,0,0x3f800000};float pos[]={1088+sample*.25f,25.25f,1072};
  memcpy(dword_140404A6C+284956407,pos,12);memcpy(dword_140404A6C+284956410,identity,36);memcpy(dword_140404A6C+280651746,pos,12);
  if(sample&1){dword_140404A6C[129716709]=1;dword_140404A6C[285044400]=1;memcpy(dword_140404A6C+285044401,pos,12);memcpy(dword_140404A6C+285044404,identity,36);dword_140404A6C[346731811]=1;}
  else dword_140404A6C[346731811]=0;
  if(nat)((void(*)(void))(image+0x212e0))();else sub_1400212E0();
  if(!nat){saved_calls=calls;memcpy(saved,trace,sizeof trace);}
  else if(calls!=saved_calls||memcmp(saved,trace,sizeof trace)){
   printf("scene draw mismatch sample=%u calls=%u/%u\n",sample,saved_calls,calls);
   for(unsigned c=0;c<calls;c++)for(unsigned j=0;j<20;j++)if(saved[c][j]!=trace[c][j])printf("trace %u word %u %08x/%08x\n",c,j,saved[c][j],trace[c][j]);return 1;
  }
 }
 printf("64 complete native scene draw queue comparisons pass: human and vehicle positions, both defined texture slots, nine rotation words and rotating wheel output; pose, rotation and queue leaves controlled\n");return 0;
}
'''.encode()
        collision_query.CollisionQuery.run_fixture(self,'scene-draw-storage',code)

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
