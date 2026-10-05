"""Compare complete paired shape contact handler with controlled narrowphase."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT, pinned_pe, region
from repair_client_shape_contacts import repair
import test_client_collision_query as collision_query


class ShapeContacts(unittest.TestCase):
    def run_fixture(self, name, code):
        out=PROJECT/'reports/client-shape-contacts-20261004';out.mkdir(parents=True,exist_ok=True)
        path=out/(name+'.c');path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-Wno-error=incompatible-pointer-types','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/(name+'-stdout.txt')).write_bytes(result.stdout.encode())
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)

    def test_native_triangles(self):
        source=read_client_source()
        if b'sr_shape_triangle_point' not in region(source,0xdad20)[2]:source,_=repair(source)
        pe=pinned_pe()
        code=b'#include "export_compat.h"\nstatic unsigned char *image,*working;\n'
        for rva in (0x779f0,0x77fa0,0xdad20):code+=region(source,rva)[2]
        code+=b'\nint main(void){\n'+collision_query.CollisionQuery.native_setup(self,pe,[(0x779f0,0x140),(0x77fa0,0x28c),(0xdad20,0x326)])
        code+=r'''
 unsigned checked=0,hits=0;float saved[9];
 for(unsigned sample=0;sample<256;sample++)for(unsigned groups=0;groups<4;groups++)for(unsigned count=0;count<4;count++)for(unsigned kind=3;kind<=4;kind++){
  unsigned shape[64]={0},faces[3][3][9]={0};float vertices[12]={-1,0,-1,-1,0,1,1,0,1,1,0,-1};
  shape[4]=groups;for(unsigned group=0;group<groups;group++){
   shape[12+14*group]=count;void *pointer=faces[group];memcpy(shape+14+14*group,&pointer,8);
   for(unsigned face=0;face<count;face++){
    faces[group][face][1]=kind;for(unsigned i=0;i<4;i++)faces[group][face][2+i]=i;
    float normal[3]={0,(sample&1)?-1:1,0};memcpy(faces[group][face]+6,normal,12);
   }
  }
  float position[3]={0},rotation[9]={1,0,0,0,1,0,0,0,1};
  float center[3]={(int)(sample%11)*.25f-1.25f,(sample&2)?-1:1,(int)((sample/11)%11)*.25f-1.25f};
  float point[3]={center[0]+(sample%3)*.0625f,-center[1],center[2]+(sample%5)*.03125f};
  for(unsigned native=0;native<2;native++){
   float output[9];for(unsigned i=0;i<9;i++)output[i]=17+i;
   unsigned result=native?((unsigned(*)(float*,unsigned*,float*,float*,float*,float*,float*))(image+0xdad20))(output+1,shape,vertices,position,rotation,center,point):sub_1400DAD20((int64_t)(output+1),(int64_t)shape,(int64_t)vertices,(int64_t)position,rotation,center,point);
   if(!native){memcpy(saved,output,sizeof saved);saved[0]=result;hits+=result;}
   else if(result!=(unsigned)saved[0]||memcmp(saved+1,output+1,8*sizeof(float))){printf("triangle mismatch sample %u groups %u count %u kind %u result %u/%u\n",sample,groups,count,kind,(unsigned)saved[0],result);return 1;}
  }checked++;
 }
 if(!hits){printf("fixture has no triangle hits\n");return 2;}
 printf("%u native shape triangle/quad cases pass (%u hits); original segment-plane and triangle helpers included, full 28-byte result and nearest-hit selection compared\n",checked,hits);return 0;
}
'''.encode()
        self.run_fixture('triangles',code)

    def test_native_handler(self):
        source = read_client_source()
        if b'sr_shape_vertices_a' not in region(source, 0x4a7a0)[2]:
            source, _ = repair(source)
        pe = pinned_pe()
        code = r'''#include "export_compat.h"
static unsigned char *image,*working;
static unsigned sample,phase,calls,contacts,lines,planes;
static uint32_t trace[1024][40];
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static uint32_t *record(unsigned kind){if(calls>=1024)abort();uint32_t *t=trace[calls++];t[0]=kind;return t;}
static unsigned sub_1400DAD20(int64_t output,int64_t shape,int64_t vertices,int64_t origin,float *rotation,float *center,float *point){
 unsigned *s=(void*)shape;uint32_t *t=record(1);memcpy(t+1,(void*)origin,12);memcpy(t+4,rotation,36);memcpy(t+13,center,12);memcpy(t+16,point,12);
 // Check every transformed point, including both native buffer capacities.
 uint32_t hash=2166136261u;for(unsigned i=0;i<3*s[0];i++)hash=(hash^((unsigned*)vertices)[i])*16777619u;t[19]=hash;t[20]=s[0];
 float *out=(void*)output;for(unsigned i=0;i<7;i++)out[i]=.125f*(i+1)+(sample%4)*.0625f;
 return (sample>>phase++)&1;
}
static int64_t sub_1400052C0(int a,int b,unsigned *pa,unsigned *pb,unsigned *normal,float depth,unsigned friction,float scale,unsigned bounce){
 uint32_t *t=record(2);t[1]=a;t[2]=b;memcpy(t+3,pa,12);memcpy(t+6,pb,12);memcpy(t+9,normal,12);memcpy(t+12,&depth,4);t[13]=friction;memcpy(t+14,&scale,4);t[15]=bounce;contacts++;return 0;
}
static unsigned sub_14008CEB0(float *a,float *b,float *depth,float *pa,float *pb,float *pc,float *pd){
 uint32_t *t=record(3);memcpy(t+1,pa,12);memcpy(t+4,pb,12);memcpy(t+7,pc,12);memcpy(t+10,pd,12);
 for(unsigned i=0;i<3;i++){a[i]=.25f*(i+1);b[i]=a[i]+((sample&16)?0:.125f*(i+1));}*depth=.0625f;
 lines++;return (sample&4)!=0;
}
static unsigned sub_140187410(float *a,float *b,float *c,float *d,float *e){uint32_t *t=record(4);memcpy(t+1,a,12);memcpy(t+4,b,12);memcpy(t+7,c,12);memcpy(t+10,d,12);memcpy(t+13,e,12);planes++;return (sample&8)!=0;}
'''.encode()+region(source, 0x4a7a0)[2]+b'\nint main(void){\n'
        code += collision_query.CollisionQuery.native_setup(self, pe, [(0x4a7a0, 0x1819)], (0x5000, 0xda000, 0x8c000, 0x187000))
        for rva, name in [(0xdad20,'sub_1400DAD20'),(0x52c0,'sub_1400052C0'),(0x8ceb0,'sub_14008CEB0'),(0x187410,'sub_140187410')]:
            code += f'jump(image+{rva},{name});\n'.encode()
        code += r'''
 unsigned checked=0,saved_result=0,saved_calls=0,saved_contacts=0;uint32_t saved_trace[1024][40];
 unsigned vertices[2][2048],shape[2][34],edge[2][64][3],points[2][4];float input[2][5],rotation[2][11];
 for(sample=0;sample<32;sample++)for(unsigned size=0;size<6;size++)for(unsigned groups=0;groups<4;groups++)for(unsigned edges=0;edges<5;edges++){
  unsigned counts[]={0,1,7,64,512,682};unsigned edgecounts[]={0,1,3,4,7};
  memset(shape,0,sizeof shape);memset(edge,0,sizeof edge);memset(points,0,sizeof points);
  for(unsigned side=0;side<2;side++){
   unsigned count=counts[size];if(!side&&count>512)count=512;shape[side][0]=count;void *p=vertices[side];memcpy(shape[side]+2,&p,8);shape[side][4]=(groups>>side)&1;
   float center[]={.125f,-.0625f,.03125f};memcpy(shape[side]+6,center,12);shape[side][9]=count?1:0;p=points[side];memcpy(shape[side]+10,&p,8);points[side][0]=count?count-1:0;
   shape[side][16]=count?edgecounts[edges]:0;p=edge[side];memcpy(shape[side]+18,&p,8);
   for(unsigned i=0;i<count*3;i++){float x=(int)(i%13)*.03125f-.125f;memcpy(vertices[side]+i,&x,4);}
   for(unsigned i=0;i<edgecounts[edges];i++){edge[side][i][0]=count?(i*2)%count:0;edge[side][i][1]=count?(i*2+1)%count:0;}
   input[side][0]=123;input[side][4]=456;input[side][1]=.0625f;input[side][2]=.125f;input[side][3]=.25f;
   if(side){input[side][1]+=((sample&16)?-.5f:.5f);input[side][2]-=.25f;input[side][3]+=.125f;}
   rotation[side][0]=123;rotation[side][10]=456;for(unsigned i=0;i<9;i++)rotation[side][i+1]=(i%4==0?1.0f:0)+(sample%4)*.03125f;
  }
  for(unsigned native=0;native<2;native++){
   calls=contacts=lines=planes=phase=0;memset(trace,0,sizeof trace);
   unsigned result=native?((unsigned(*)(int,int,int*,int*,float*,float*,float*,float*))(image+0x4a7a0))(44,3,(int*)shape[0],(int*)shape[1],input[0]+1,rotation[0]+1,input[1]+1,rotation[1]+1):sub_14004A7A0(44,3,(int*)shape[0],(int*)shape[1],input[0]+1,rotation[0]+1,input[1]+1,rotation[1]+1);
   if(!native){saved_result=result;saved_calls=calls;saved_contacts=contacts;memcpy(saved_trace,trace,sizeof trace);}
   else if(result!=saved_result||calls!=saved_calls||contacts!=saved_contacts||memcmp(saved_trace,trace,sizeof trace)){
    printf("shape mismatch sample %u size %u groups %u edges %u return %u/%u calls %u/%u contacts %u/%u\n",sample,size,groups,edges,saved_result,result,saved_calls,calls,saved_contacts,contacts);
    for(unsigned t=0;t<calls;t++)for(unsigned i=0;i<40;i++)if(trace[t][i]!=saved_trace[t][i])printf("trace %u/%u %x/%x\n",t,i,saved_trace[t][i],trace[t][i]);return 1;
   }
  }checked++;
 }
 printf("%u complete native paired shape cases pass; both point and edge contact paths, return Boolean, transformed vertex buffers up to 512/682 points, contact vectors and coefficients compared; narrowphase and contact creation controlled\n",checked);return 0;
}
'''.encode()
        self.run_fixture('shape',code)


if __name__=='__main__':unittest.main()
