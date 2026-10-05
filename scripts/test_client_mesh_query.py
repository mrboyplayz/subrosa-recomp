"""Compare transformed mesh query with controlled triangle intersections."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT,pinned_pe,region
from repair_client_mesh_query import repair
import test_client_collision_query as query_fixtures


class MeshQuery(unittest.TestCase):
    def test_native_transforms_triangles_and_state(self):
        source=read_client_source()
        if b'sr_mesh_vertices[3072]' not in region(source,0xe21f0)[2]:source,_=repair(source)
        pe=pinned_pe()
        code=r'''#include <math.h>
#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static unsigned sample,calls;static uint32_t trace[8][24];
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static int64_t sub_140077FA0(float *hit,float *normal,float *distance,float *start,float *end,float *a,float *b,float *c){
 unsigned n=calls++;if(n>=8)abort();memcpy(trace[n],normal,12);memcpy(trace[n]+3,start,12);memcpy(trace[n]+6,end,12);memcpy(trace[n]+9,a,12);memcpy(trace[n]+12,b,12);memcpy(trace[n]+15,c,12);
 for(unsigned i=0;i<3;i++)hit[i]=.125f+i*.0625f+n*.03125f;*distance=.75f-n*.0625f;return sample&1;
}
'''.encode()+region(source,0xe21f0)[2]+b'\nint main(void){\n'
        code+=query_fixtures.CollisionQuery().native_setup(pe,[(0xe21f0,0xb4a)],(0x77000,))
        code+=b'jump(image+0x77fa0,sub_140077FA0);\n'
        for index,size in [(129716710,0x16000),(335161466,0x60000)]:
            page=(0x404a6c+index*4)&~4095
            code+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},{size},MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
 unsigned sizes[]={0,1,2,3,4,5,7,8,9,63,255,256},cases=0,saved_result=0,saved_calls=0,saved_flags=0;uint32_t saved_trace[8][24],saved_state[36];float saved_inputs[2][5];
 for(unsigned mode=0;mode<4;mode++)for(unsigned actor=0;actor<4;actor++)for(unsigned mesh=0;mesh<2;mesh++)for(unsigned shape=0;shape<4;shape++)for(unsigned sz=0;sz<12;sz++)for(sample=0;sample<4;sample++){
  unsigned vertices=sizes[sz];
  for(unsigned native=0;native<2;native++){
   dword_140404A6C=(void*)((native?image:working)+0x404a6c);unsigned at=129716710+5210*actor;memset(dword_140404A6C+at,0,240);memset(dword_140404A6C+73006981,0xa5,sizeof saved_state);dword_140404A6C[at]=mesh;
   for(unsigned i=0;i<3;i++){float lo=-4,hi=4,offset=.125f+i*.0625f;memcpy(dword_140404A6C+at+43+i,&lo,4);memcpy(dword_140404A6C+at+46+i,&hi,4);memcpy(dword_140404A6C+at+10+i,&offset,4);}
   for(unsigned i=0;i<9;i++){float v=shape==0?0:shape==1?(i%4==0?1:0):shape==2?(i%4==0?-.75f:.0625f):(i%4==0?.999f:.015f);memcpy(dword_140404A6C+at+16+i,&v,4);}
   dword_140404A6C[335161466+45072*mesh]=vertices;float *positions=(float*)(dword_140404A6C+335161467+45072*mesh);
   for(unsigned v=0;v<vertices;v++)for(unsigned i=0;i<3;i++)positions[3*v+i]=((int)((v*(i+2)+i*7)%31)-15)*.03125f;
   unsigned faces=vertices?3:0;int *face=(int*)(dword_140404A6C+335164540+45072*mesh);dword_140404A6C[335164539+45072*mesh]=faces;
   for(unsigned f=0;f<faces;f++){face[6*f]=f%2?4:3;face[6*f+1]=0;face[6*f+2]=vertices>1?1:0;face[6*f+3]=vertices-1;face[6*f+4]=vertices>2?2:0;face[6*f+5]=0;}
   float inputs[2][5]={{123,-.25f,.125f,.5f,456},{123,.25f,-.125f,.75f,456}};if(sample==2)inputs[0][1]=inputs[1][1]=-8;if(sample==3)inputs[0][2]=inputs[1][2]=8;
   calls=0;memset(trace,0,sizeof trace);_mm_setcsr(0x1f80|(mode<<13));
   unsigned result=native?((unsigned(*)(int,float*,float*))(image+0xe21f0))(actor,inputs[0]+1,inputs[1]+1):sub_1400E21F0(actor,inputs[0]+1,inputs[1]+1);unsigned flags=_mm_getcsr();
   if(!native){saved_result=result;saved_calls=calls;saved_flags=flags;memcpy(saved_trace,trace,sizeof trace);memcpy(saved_state,dword_140404A6C+73006981,sizeof saved_state);memcpy(saved_inputs,inputs,sizeof inputs);}
   else if(result!=saved_result||calls!=saved_calls||flags!=saved_flags||memcmp(saved_trace,trace,sizeof trace)||memcmp(saved_state,dword_140404A6C+73006981,sizeof saved_state)||memcmp(saved_inputs,inputs,sizeof inputs)){
    printf("mesh query mismatch mode %u actor %u mesh %u shape %u vertices %u sample %u result %u/%u calls %u/%u flags %x/%x\n",mode,actor,mesh,shape,vertices,sample,saved_result,result,saved_calls,calls,saved_flags,flags);
    for(unsigned n=0;n<calls;n++)for(unsigned i=0;i<24;i++)if(saved_trace[n][i]!=trace[n][i])printf("trace %u/%u C=%a N=%a\n",n,i,*(float*)&saved_trace[n][i],*(float*)&trace[n][i]);
    for(unsigned i=0;i<36;i++)if(saved_state[i]!=dword_140404A6C[73006981+i])printf("state %u %x/%x\n",i,saved_state[i],dword_140404A6C[73006981+i]);return 1;
   }
  }cases++;
 }
 printf("%u complete native mesh query cases pass; 0..256 vertex counts, affine transforms, triangle/quad points and normals, ray inputs, selected globals, result and four MXCSR modes; intersections controlled\n",cases);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-mesh-query-20261004';out.mkdir(parents=True,exist_ok=True)
        path=out/'mesh.c';path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-Wno-error=incompatible-pointer-types','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout,encoding='utf-8')
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
