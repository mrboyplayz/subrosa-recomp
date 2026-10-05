"""Compare complete native swept cell handlers and all leaf-query arguments."""
import subprocess
import unittest
from client_sources import read_client_source
from repair_client_menu_actions import PROJECT, pinned_pe, region
import test_client_collision_query as collision_query


class SweptCells(unittest.TestCase):
    def test_native_cell_handlers(self):
        pe=pinned_pe();source=read_client_source()
        code=r'''#include <math.h>
#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static int *dword_1402B34F0,*dword_1402B3558,*dword_1402B3664;
static unsigned sample,calls;static float trace[64][19];
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static unsigned sub_140035690(float *point,float *normal,float *distance,float *a,float *b,int64_t radius,float *va,float *vb,float *vc){
 unsigned n=calls++;if(n>=64)abort();float *t=trace[n];
 memcpy(t,normal,12);memcpy(t+3,a,12);memcpy(t+6,b,12);memcpy(t+9,&radius,4);memcpy(t+10,va,12);memcpy(t+13,vb,12);memcpy(t+16,vc,12);
 // Exercise three separate output vectors using arena-sized coordinates.
 point[0]=1024.125f+n*.03125f;point[1]=24;point[2]=1024.5f;
 normal[0]=0;normal[1]=1;normal[2]=0;*distance=(32-n)*.0009765625f;
 return (sample>>((n%4)+1))&1;
}
'''.encode()
        for rva in (0x34370,0x34ae0):code+=region(source,rva)[2]
        code+=b'\nint main(void){\n'+collision_query.CollisionQuery.native_setup(self,pe,[(0x34370,0x380),(0x34ae0,0xbb0)],(0x35000,0x2b3000))
        code+=b'jump(image+0x35690,sub_140035690);dword_140404A6C=(void *)(image+0x404a6c);\n'
        for rva in (0x2b34f0,0x2b3558,0x2b3664):code+=f'dword_140{rva:06X}=(void *)(image+{rva});\n'.encode()
        page=(0x404a6c+20074613*4)&~4095
        code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
 float vertices[12]={0,0,0,0,0,1,1,0,1,1,0,0};unsigned faces[8]={0,1,2,3,3,2,1,0};
 unsigned *shape=dword_140404A6C+20074613;memset(shape,0,58*4);void *p=vertices;memcpy(shape+2,&p,8);p=faces;memcpy(shape+18,&p,8);p=vertices;memcpy(shape+40,&p,8);
 unsigned cases=0;float saved_trace[64][19],saved[9];unsigned saved_calls,saved_result,saved_face;
 for(unsigned kind=0;kind<2;kind++)for(sample=0;sample<32;sample++)for(unsigned mask=0;mask<64;mask++){
  shape[10]=sample%3;shape[38]=(sample/3)%2;
  for(unsigned native=0;native<2;native++){
   float out[9]={17,-3,-4,-5,19,-6,-7,-8,29},distance=-1;int cell[3]={1024,23,1024};float a[3]={1024.25f,24.125f,1024.5f},b[3]={1024.5f,23.875f,1024.75f};
   float scale=(sample%3+1)*.5f,radius=.09375f;int64_t s=0;memcpy(&s,&scale,4);int r;memcpy(&r,&radius,4);calls=0;memset(trace,0,sizeof trace);dword_140404A6C[73007010]=0xa5a5a5a5;
   unsigned result;
   if(!kind)result=native?((uint64_t(*)(unsigned*,unsigned*,float*,float*,float*,int64_t,int*,int64_t,int64_t))(image+0x34370))((unsigned*)(out+1),(unsigned*)(out+5),&distance,a,b,r,cell,mask|(mask<<6),s):sub_140034370((unsigned*)(out+1),(unsigned*)(out+5),&distance,a,b,r,cell,mask|(mask<<6),s);
   else result=native?((uint64_t(*)(unsigned*,int64_t,float*,float*,float*,int,int64_t,unsigned,float))(image+0x34ae0))((unsigned*)(out+1),(int64_t)(out+5),&distance,a,b,r,(int64_t)cell,mask<<16,scale):sub_140034AE0((unsigned*)(out+1),(int64_t)(out+5),&distance,a,b,r,(int64_t)cell,mask<<16,scale);
   out[8]=distance;
   if(!native){memcpy(saved,out,sizeof saved);memcpy(saved_trace,trace,sizeof trace);saved_calls=calls;saved_result=result;saved_face=dword_140404A6C[73007010];}
   else{
    if(calls!=saved_calls||result!=saved_result||memcmp(saved,out,sizeof saved)||saved_face!=dword_140404A6C[73007010]){printf("Cell output mismatch kind=%u sample=%u mask=%u calls=%u/%u\n",kind,sample,mask,saved_calls,calls);return 1;}
    for(unsigned i=0;i<calls;i++)for(unsigned j=0;j<19;j++)if(fabsf(trace[i][j]-saved_trace[i][j])>1e-6f){printf("Cell input mismatch kind=%u sample=%u mask=%u call=%u word=%u C=%a N=%a\n",kind,sample,mask,i,j,saved_trace[i][j],trace[i][j]);return 2;}
   }
  }cases++;
 }
 printf("%u complete native swept cell cases match all face vertices, nearest-hit point/normal/distance and guards; triangle query controlled\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-swept-cell-storage-20261005';out.mkdir(parents=True,exist_ok=True)
        path=out/'cell.c';path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-Wno-error=incompatible-pointer-types','-fno-strict-aliasing','-ffp-contract=off','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
