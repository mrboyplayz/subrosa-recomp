"""Compare camera snapshots and the native double-to-float angle clamp."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT,pinned_pe,region
from repair_client_snapshot_storage import repair
import test_client_collision_query as collision


class SnapshotStorage(unittest.TestCase):
    def source(self):
        source=read_client_source()
        if b'sr_snapshot_rotation' not in region(source,0x30590)[2]:source,_=repair(source)
        return source

    def run_fixture(self,name,code):
        out=PROJECT/'reports/client-snapshot-storage-20261004';out.mkdir(exist_ok=True);path=out/(name+'.c');path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-Wno-error=incompatible-pointer-types','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/(name+'-stdout.txt')).write_bytes(result.stdout.encode());self.assertEqual(result.returncode,0,result.stdout+result.stderr)

    def test_native_angle_clamp(self):
        body=region(self.source(),0x30590)[2]
        a=body.index(b'sr_export_float_lane_container(COERCE_UNSIGNED_INT(_mm_cvtss_f32(')
        b=body.index(b';',a)
        expression=body[a:b].rsplit(b')',1)[0]
        code=r'''#include "export_compat.h"
static unsigned char *image,*working;static void *sr_native_angle_entry;static unsigned trace;
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static void sub_14007B2A0(int64_t r,float *p,double angle){memcpy(&trace,&angle,4);}
static void recovered(float *p){double v88=p[0];float v114=p[1];sub_14007B2A0(0,0,
'''.encode()+expression+r''');}
__attribute__((naked,noinline)) static void native(float *p){
 __asm__("sub $0xa8,%rsp; movaps %xmm6,0x70(%rsp); movaps %xmm8,0x80(%rsp);"
 "pxor %xmm1,%xmm1; cvtss2sd 0(%rcx),%xmm1; pxor %xmm6,%xmm6; movss 4(%rcx),%xmm6; xor %ecx,%ecx; xor %edx,%edx;"
 "jmp *sr_native_angle_entry(%rip); .global sr_native_angle_end; sr_native_angle_end:;"
 "movaps 0x70(%rsp),%xmm6; movaps 0x80(%rsp),%xmm8; add $0xa8,%rsp; ret;");
}
extern void sr_native_angle_end(void);
int main(void){
'''.encode()+collision.CollisionQuery.native_setup(self,pinned_pe(),[(0x31468,0x33)],(0x7b000,))
        code+=r'''
 jump(image+0x7b2a0,sub_14007B2A0);jump(image+0x3149b,sr_native_angle_end);sr_native_angle_entry=image+0x31468;
 for(unsigned sample=0;sample<4096;sample++){float p[]={((int)(sample%67)-33)*.25f,((int)(sample%131)-65)*.0625f};
  if(sample%19==0){unsigned words[]={0,0x80000000,0x7f800000,0xff800000,0x7fc01234};memcpy(p+1,words+(sample/19)%5,4);}
  recovered(p);unsigned saved=trace;native(p);if(trace!=saved){printf("snapshot clamp mismatch sample %u %x/%x\n",sample,saved,trace);return 1;}
 }
 printf("4096 native snapshot angle-clamp/float-ABI cases pass; bounds, signed zero, infinities and NaN compared\n");return 0;
}
'''.encode()
        self.run_fixture('angle',code)

    def test_native_snapshot(self):
        code=r'''#include <math.h>
#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;static __int128 xmmword_140278D30,xmmword_140279870;
static unsigned trace[64][28],calls;
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static unsigned *event(unsigned tag){if(calls>=64)abort();unsigned *t=trace[calls++];t[0]=tag;return t;}
static int64_t sub_14007A010(int64_t o,int64_t a,int64_t b){unsigned *t=event(1);memcpy(t+1,(void*)a,36);memcpy(t+10,(void*)b,36);memcpy((void*)o,(void*)a,36);return 0;}
static void sub_14007B2A0(int64_t r,float *axis,double angle){unsigned *t=event(2);memcpy(t+1,(void*)r,36);memcpy(t+10,axis,12);memcpy(t+13,&angle,4);}
static void sub_14010E370(float *out,float *r){memcpy(event(3)+1,r,36);float q[]={0,0,0,1};memcpy(out,q,16);}
static double controlled_acos(double value){(void)value;return 0;}
#define acos controlled_acos
'''.encode()+region(self.source(),0x30590)[2]+b'\nint main(void){\n'
        code+=collision.CollisionQuery.native_setup(self,pinned_pe(),[(0x30590,0xfa0)],(0x7a000,0x7b000,0x10e000,0x23e000))
        for rva,name in [(0x7a010,'sub_14007A010'),(0x7b2a0,'sub_14007B2A0'),(0x10e370,'sub_14010E370'),(0x23e7d4,'controlled_acos')]:code+=f'jump(image+{rva},{name});\n'.encode()
        for index,size in [(421846180,0x240000),(284024501,0x2000),(71856292,0x5000),(282486050,0x3000),(280651300,0x9000)]:
            page=(0x404a6c+index*4)&~4095
            code+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},{size},MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
 memcpy(&xmmword_140278D30,image+0x278d30,16);memcpy(&xmmword_140279870,image+0x279870,16);
 unsigned saved_trace[64][28],saved_calls,saved[140832],cases=0;
 for(unsigned sample=0;sample<128;sample++)for(unsigned nat=0;nat<2;nat++){
  dword_140404A6C=(void*)((nat?image:working)+0x404a6c);memset(dword_140404A6C+421846180,0,0x230000);memset(dword_140404A6C+71856292,0,0x4000);memset(dword_140404A6C+282486050,0,0x2000);memset(dword_140404A6C+280651300,0,0x8000);
  dword_140404A6C[284024501]=(sample<4)?-1:0;dword_140404A6C[284024519]=0;dword_140404A6C[71856292]=0;dword_140404A6C[280651313]=-1;
  unsigned at=421846180+140832;for(unsigned i=0;i<344;i++){float value=((i+sample)%11)*.03125f;memcpy(dword_140404A6C+at+i,&value,4);}float identity[]={1,0,0,0,1,0,0,0,1};memcpy(dword_140404A6C+421846269+140832,identity,36);
  calls=0;memset(trace,0,sizeof trace);if(nat)((void(*)(int))(image+0x30590))(1);else sub_140030590(1);
  if(!nat){saved_calls=calls;memcpy(saved_trace,trace,sizeof trace);memcpy(saved,dword_140404A6C+at,sizeof saved);}
  else {if(calls!=saved_calls||memcmp(saved_trace,trace,sizeof trace)||memcmp(saved,dword_140404A6C+at,sizeof saved)){printf("snapshot mismatch sample %u calls %u/%u\n",sample,saved_calls,calls);for(unsigned c=0;c<calls;c++)for(unsigned i=0;i<28;i++)if(saved_trace[c][i]!=trace[c][i])printf("trace %u/%u %x/%x\n",c,i,saved_trace[c][i],trace[c][i]);return 1;}cases++;}
 }
 printf("%u complete native camera snapshot comparisons pass; absent/present player, helper arguments and full snapshot buffer compared; matrix, rotation, quaternion and acos helpers controlled\n",cases);return 0;
}
'''.encode()
        self.run_fixture('snapshot',code)


if __name__=='__main__':unittest.main()
