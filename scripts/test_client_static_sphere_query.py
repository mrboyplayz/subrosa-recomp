"""Compare the complete static sphere query with controlled narrowphase helpers."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT, pinned_pe, region
from repair_client_static_sphere_query import repair
import test_client_collision_query as collision


class StaticSphereQuery(unittest.TestCase):
    def test_native_query(self):
        source=read_client_source()
        if b'sr_static_sphere_point' not in region(source,0x151190)[2]:source,_=repair(source)
        code=r'''#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;static __int128 xmmword_140278D30;
static unsigned trace[32][32],calls,hit;static float distance;
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static unsigned *event(unsigned tag){if(calls>=32)abort();unsigned *t=trace[calls++];t[0]=tag;return t;}
static void rotate(float *p,float *axis,double bits,unsigned tag){unsigned *t=event(tag);memcpy(t+1,p,tag==1?12:36);memcpy(t+11,axis,12);memcpy(t+14,&bits,4);}
static void sub_14007B4D0(float *p,float *axis,double bits){rotate(p,axis,bits,1);}
static void sub_14007B2A0(int64_t p,float *axis,double bits){rotate((float*)p,axis,bits,2);}
static uint64_t geom(float *out,float *normal,float *d,float *p,float radius,int *cell,unsigned material,float scale,unsigned tag){
 unsigned *t=event(tag);memcpy(t+1,p,12);memcpy(t+4,&radius,4);memcpy(t+5,cell,12);t[8]=material;memcpy(t+9,&scale,4);
 for(unsigned i=0;i<3;i++){out[i]=.125f+i*.25f;normal[i]=-.5f+i*.125f;}*d=distance;return hit;
}
static uint64_t sub_1401543C0(float *o,float *n,float *d,float *p,float radius,int *cell,unsigned material,float scale){return geom(o,n,d,p,radius,cell,material,scale,3);}
static uint64_t sub_1401564A0(float *o,float *n,float *d,float *p,float radius,int64_t cell,float material,float scale){unsigned bits;memcpy(&bits,&material,4);return geom(o,n,d,p,radius,(int*)cell,bits,scale,4);}
static uint64_t brush(float *o,float *n,float *d,int shape,float *origin,float *r,float *p,float radius,unsigned tag){
 unsigned *t=event(tag);t[1]=shape;memcpy(t+2,origin,12);memcpy(t+5,r,36);memcpy(t+14,p,12);memcpy(t+17,&radius,4);
 for(unsigned i=0;i<3;i++){o[i]=.25f+i*.125f;n[i]=.5f-i*.125f;}*d=distance;return hit;
}
static uint64_t sub_140152750(float *o,float *n,float *d,int shape,float *origin,float *r,float *p,float radius){return brush(o,n,d,shape,origin,r,p,radius,5);}
static uint64_t sub_140153850(float *o,float *n,float *d,int shape,float *origin,float *r,float *p,float radius){return brush(o,n,d,shape,origin,r,p,radius,6);}
static unsigned sub_1400129D0(unsigned map,unsigned x,unsigned y,unsigned z){unsigned *t=event(7);t[1]=map;t[2]=x;t[3]=y;t[4]=z;return 0x80001000u+map*128+x*32+y*8+z;}
static unsigned sub_140016450(unsigned map,unsigned x,unsigned y,unsigned z){return sub_1400129D0(map,x,y,z)+64;}
'''.encode()+region(source,0x7b0f0)[2]+region(source,0x151190)[2]+b'\nint main(void){\n'
        code+=collision.CollisionQuery.native_setup(self,pinned_pe(),[(0x151190,0x15b3),(0x7b0f0,0x132)],(0x153000,0x154000,0x156000,0x12000,0x16000))
        for rva,name in [(0x7b4d0,'sub_14007B4D0'),(0x7b2a0,'sub_14007B2A0'),(0x152750,'sub_140152750'),(0x153850,'sub_140153850'),(0x1543c0,'sub_1401543C0'),(0x1564a0,'sub_1401564A0'),(0x129d0,'sub_1400129D0'),(0x16450,'sub_140016450')]:code+=f'jump(image+{rva},{name});\n'.encode()
        for index,size in [(83194359,0x6000),(272299416,0x5000),(432533576,0x5000)]:
            page=(0x404a6c+index*4)&~4095
            code+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},{size},MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
 memcpy(&xmmword_140278D30,image+0x278d30,16);unsigned saved[32][32],saved_calls,saved_result,saved_state[36];float saved_out[7];unsigned cases=0;
 unsigned kinds[]={0,0x40000000,0x80000000,0xa0000000,0xc0000000};float distances[]={.125f,1,65536};
 for(unsigned map=0;map<4;map++)for(unsigned sample=0;sample<16;sample++)for(unsigned kind=0;kind<5;kind++)for(unsigned brush_kind=0;brush_kind<3;brush_kind++)for(hit=0;hit<2;hit++)for(unsigned di=0;di<3;di++){
  distance=distances[di];for(unsigned nat=0;nat<2;nat++){
   dword_140404A6C=(void*)((nat?image:working)+0x404a6c);unsigned at=111579637+263004*map;
   memset(dword_140404A6C+at,0,160);memset(dword_140404A6C+73006981,0xa5,sizeof saved_state);memset(dword_140404A6C+83194359,0,0x5200);memset(dword_140404A6C+272299416,0,0x4000);memset(dword_140404A6C+432533576,0,0x4000);
   for(unsigned axis=0;axis<3;axis++){float one=1,lower=0,upper=4;memcpy(dword_140404A6C+at+4+4*axis,&one,4);memcpy(dword_140404A6C+at+20+axis,&lower,4);memcpy(dword_140404A6C+at+23+axis,&upper,4);dword_140404A6C[at+13+axis]=1;}
   float one=1;memcpy(dword_140404A6C+at+16,&one,4);memcpy(dword_140404A6C+at+17,&one,4);int occupancy=0;int *pointer=&occupancy;memcpy(dword_140404A6C+at+18,&pointer,8);dword_140404A6C[at+348]=0;
   dword_140404A6C[83194359]=kinds[kind];dword_140404A6C[83197431]=(sample&8)?0x80000000:0;
   if(brush_kind==1){dword_140404A6C[83198967]=1|((sample%4)<<10);float origin[]={.125f,.25f,.375f};memcpy(dword_140404A6C+432533576+2310,origin,12);}
   if(brush_kind==2){dword_140404A6C[83199479]=1;dword_140404A6C[272299416+948]=1;}
   float p[]={.5f,.5f,.5f};if(sample<6)p[sample/2]=(sample&1)?8:-8;float out[7]={17,-2,-3,19,-5,-6,23};uint64_t radius=0;float rad=.125f;memcpy(&radius,&rad,4);calls=0;memset(trace,0,sizeof trace);
   unsigned result=nat?((unsigned(*)(float*,float*,float*,int,float*,uint64_t))(image+0x151190))(out,out+3,out+6,map,p,radius):(unsigned)sub_140151190(out,out+3,out+6,map,p,radius);
   if(!nat){saved_result=result;saved_calls=calls;memcpy(saved,trace,sizeof saved);memcpy(saved_out,out,sizeof out);memcpy(saved_state,dword_140404A6C+73006981,sizeof saved_state);}
   else if(result!=saved_result||calls!=saved_calls||memcmp(saved,trace,sizeof saved)||memcmp(saved_out,out,sizeof out)||memcmp(saved_state,dword_140404A6C+73006981,sizeof saved_state)){
    printf("sphere mismatch map %u sample %u kind %u brush %u hit %u distance %u result %u/%u calls %u/%u\n",map,sample,kind,brush_kind,hit,di,saved_result,result,saved_calls,calls);
    for(unsigned c=0;c<calls;c++)for(unsigned i=0;i<32;i++)if(saved[c][i]!=trace[c][i])printf("trace %u/%u %x/%x\n",c,i,saved[c][i],trace[c][i]);for(unsigned i=0;i<7;i++)if(memcmp(saved_out+i,out+i,4))printf("out %u %.9g/%.9g\n",i,saved_out[i],out[i]);return 1;
   }
  }cases++;
 }
 printf("%u complete native static sphere query comparisons pass; rejection, both material layers, brush/prop arguments, vectors, rotations, outputs, state and Boolean returns compared; narrowphase, rotation and identifier helpers controlled\n",cases);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-static-sphere-query-20261004';out.mkdir(exist_ok=True);path=out/'sphere.c';path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-Wno-error=incompatible-pointer-types','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_bytes(result.stdout.encode());self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
