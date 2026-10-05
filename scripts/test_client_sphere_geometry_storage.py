"""Compare sphere narrowphase geometry with actual native triangle helpers."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT, pinned_pe, region
from repair_client_sphere_geometry_storage import repair
import test_client_collision_query as collision


class SphereGeometry(unittest.TestCase):
    def test_native_geometry(self):
        source=read_client_source()
        if b'sr_static_voxel_vertices' not in region(source,0x1543c0)[2]:source,_=repair(source)
        rvas=[0x779f0,0x77fa0,0x154200,0x152750,0x153850,0x1543c0,0x1564a0]
        code=b'#include <math.h>\n#include "export_compat.h"\nstatic unsigned char *image,*working;static unsigned *dword_140404A6C;static __int128 xmmword_140279870;\n'
        functions=[]
        for rva in rvas:
            a,b,body=region(source,rva);code+=body
            end=int(source[b:b+32].split(b'(')[1].split(b')')[0],16)-0x140000000
            functions.append((rva,end-rva))
        code+=b'\nint main(void){\n'+collision.CollisionQuery.native_setup(self,pinned_pe(),functions)
        for index,size in [(278521288,0x7000),(432531269,0x10000),(20074615,0x5000)]:
            page=(0x404a6c+index*4)&~4095
            code+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},{size},MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
 memcpy(&xmmword_140279870,image+0x279870,16);unsigned cases=0,hits[4]={0};float saved[7];unsigned saved_result;
 float vertices[]={-1,0,-1,-1,0,1,1,0,1,1,0,-1};unsigned faces[]={0,1,2,3};
 for(unsigned kind=0;kind<4;kind++)for(unsigned sample=0;sample<4096;sample++)for(unsigned nat=0;nat<2;nat++){
  dword_140404A6C=(void*)((nat?image:working)+0x404a6c);memset(dword_140404A6C+278521288,0,0x6000);memset(dword_140404A6C+432531269,0,0xf000);memset(dword_140404A6C+20074615,0,0x4000);
  float bound=8;memcpy(dword_140404A6C+432531269,&bound,4);dword_140404A6C[432532039]=1;memcpy(dword_140404A6C+432531271,vertices,sizeof vertices);memcpy(dword_140404A6C+432532041,faces,sizeof faces);
  dword_140404A6C[278521861]=1;memcpy(dword_140404A6C+278521669,vertices,sizeof vertices);memcpy(dword_140404A6C+278521864,faces,sizeof faces);
  void *vp=vertices,*fp=faces;memcpy(dword_140404A6C+20074615,&vp,8);memcpy(dword_140404A6C+20074631,&fp,8);dword_140404A6C[20074623]=1;
  float p[]={((int)(sample%17)-8)*.1875f,((int)((sample/17)%13)-6)*.0625f,((int)((sample/221)%17)-8)*.1875f};
  float out[7]={17,-2,-3,19,-5,-6,23},origin[]={0,0,0},r[]={1,0,0,0,1,0,0,0,1};int cell[]={0,0,0};float radius=.375f,scale=1;unsigned result;
  if(kind==0)result=nat?((unsigned(*)(float*,float*,float*,float*,float,int*,int,float))(image+0x1543c0))(out,out+3,out+6,p,radius,cell,0x40000fff,scale):(unsigned)sub_1401543C0(out,out+3,out+6,p,radius,cell,0x40000fff,scale);
  else if(kind==1)result=nat?((unsigned(*)(float*,float*,float*,float*,float,int64_t,float,float))(image+0x1564a0))(out,out+3,out+6,p,radius,(int64_t)cell,0,scale):(unsigned)sub_1401564A0(out,out+3,out+6,p,radius,(int64_t)cell,0,scale);
  else if(kind==2)result=nat?((unsigned(*)(float*,float*,float*,int,float*,float*,float*,float))(image+0x152750))(out,out+3,out+6,0,origin,r,p,radius):(unsigned)sub_140152750(out,out+3,out+6,0,origin,r,p,radius);
  else result=nat?((unsigned(*)(float*,float*,float*,int,float*,float*,float*,float))(image+0x153850))(out,out+3,out+6,0,origin,r,p,radius):(unsigned)sub_140153850(out,out+3,out+6,0,origin,r,p,radius);
  if(!nat){saved_result=result;memcpy(saved,out,sizeof saved);hits[kind]+=result;}
  else {if(result!=saved_result||memcmp(saved,out,sizeof saved)){printf("sphere geometry mismatch kind %u sample %u result %u/%u\n",kind,sample,saved_result,result);for(unsigned i=0;i<7;i++)printf("%u %.9g/%.9g\n",i,saved[i],out[i]);return 1;}cases++;}
 }
 for(unsigned i=0;i<4;i++)if(!hits[i]){printf("no hits for geometry kind %u\n",i);return 2;}
 printf("%u complete native sphere narrowphase cases pass; cube %u mesh %u brush %u prop %u hits; actual triangle and segment helpers included, all output words and nearest-hit results compared\n",cases,hits[0],hits[1],hits[2],hits[3]);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-sphere-geometry-storage-20261004';out.mkdir(exist_ok=True);path=out/'geometry.c';path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-Wno-error=incompatible-pointer-types','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_bytes(result.stdout.encode());self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
