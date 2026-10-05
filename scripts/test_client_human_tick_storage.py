"""Compare the original limb query block and complete item contact consumer."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT, pinned_pe, region
from repair_client_human_tick_storage import repair
import test_client_collision_query as collision


class HumanTickStorage(unittest.TestCase):
    def source(self):
        source=read_client_source()
        if b'sr_human_tick_endpoint' not in region(source,0xbe010)[2]:source,_=repair(source)
        return source

    def run_fixture(self,name,code):
        out=PROJECT/'reports/client-human-tick-storage-20261004';out.mkdir(parents=True,exist_ok=True)
        path=out/(name+'.c');path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-Wno-error=incompatible-pointer-types','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/(name+'-stdout.txt')).write_bytes(result.stdout.encode())
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)

    def test_native_limb_query_arguments(self):
        body=region(self.source(),0xbe010)[2]
        start=body.index(b'          v113 = v105 * v99;')
        end=body.index(b'\n          {',start)
        block=body[start:end].replace(b'if ( (unsigned int)sub_140033FE0',b'(void)sub_140033FE0').replace(b'v115) )',b'v115);')
        code=r'''#include "export_compat.h"
static unsigned char *image,*working;static void *sr_native_limb_entry;
static unsigned trace[7];
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static unsigned sub_140033FE0(float *a,float *b,float radius){memcpy(trace,a,12);memcpy(trace+3,b,12);memcpy(trace+6,&radius,4);return 0;}
static void recovered(float *p){float sr_human_tick_point[3],sr_human_tick_endpoint[3],v113,v114,v115;
 float v105=p[0],v110=p[1],v106=p[2],v111=p[3],v107=p[4],v112=p[5],v108=p[6],v99=p[7];
 unsigned *v103=(void*)(p+6);int64_t v78;memcpy(sr_human_tick_point,p+9,12);
'''.encode()+block+r'''
}
__attribute__((naked,noinline)) static void native(float *p){
 __asm__("push %rbp; push %rsi; sub $0x228,%rsp;"
  "movaps %xmm6,0x1a0(%rsp); movaps %xmm7,0x1b0(%rsp); movaps %xmm8,0x1c0(%rsp); movaps %xmm9,0x1d0(%rsp); movaps %xmm13,0x1e0(%rsp);"
  "lea 0x100(%rsp),%rbp; lea 24(%rcx),%rsi;"
  "movss 0(%rcx),%xmm3; movss 4(%rcx),%xmm4; movss 8(%rcx),%xmm5; movss 12(%rcx),%xmm6; movss 16(%rcx),%xmm7; movss 20(%rcx),%xmm8; movss 24(%rcx),%xmm9; movss 28(%rcx),%xmm13;"
  "mov 36(%rcx),%eax; mov %eax,0x180(%rsp); mov 40(%rcx),%eax; mov %eax,0x184(%rsp); mov 44(%rcx),%eax; mov %eax,0x188(%rsp);"
  "jmp *sr_native_limb_entry(%rip); .global sr_native_limb_end; sr_native_limb_end:;"
  "movaps 0x1a0(%rsp),%xmm6; movaps 0x1b0(%rsp),%xmm7; movaps 0x1c0(%rsp),%xmm8; movaps 0x1d0(%rsp),%xmm9; movaps 0x1e0(%rsp),%xmm13; add $0x228,%rsp; pop %rsi; pop %rbp; ret;");
}
extern void sr_native_limb_end(void);
int main(void){
'''.encode()+collision.CollisionQuery.native_setup(self,pinned_pe(),[(0xbf308,0x55)],(0x33000,))
        code+=r'''
 jump(image+0x33fe0,sub_140033FE0);jump(image+0xbf35d,sr_native_limb_end);sr_native_limb_entry=image+0xbf308;
 unsigned saved[7];for(unsigned sample=0;sample<4096;sample++){
  float p[12];for(unsigned i=0;i<12;i++)p[i]=((int)((sample*17+i*11)%127)-63)*.03125f;p[7]=.5f;p[8]=.125f;
  recovered(p);memcpy(saved,trace,sizeof saved);native(p);
  if(memcmp(saved,trace,sizeof saved)){printf("limb argument mismatch sample %u\n",sample);for(unsigned i=0;i<7;i++)printf("%u %x/%x\n",i,saved[i],trace[i]);return 1;}
 }
 printf("4096 native limb swept-query argument comparisons pass; three-component endpoints, all seven float bits and radius compared; query controlled\n");return 0;
}
'''.encode()
        self.run_fixture('limb-query',code)

    def test_native_item_contact_consumer(self):
        code=r'''#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;static unsigned sample,candidate_count,calls;
static unsigned trace[256][8];
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static void sub_140038230(int *out,int *lower,int *upper){out[0]=candidate_count;for(unsigned i=0;i<candidate_count;i++){out[2*i+1]=0;out[2*i+2]=i%16;}if(lower[0]!=1||upper[2]!=7)abort();}
static unsigned sub_14004A7A0(int a,int b,int *sa,int *sb,float *pa,float *ra,float *pb,float *rb){
 if(calls>=256)abort();unsigned *t=trace[calls++];t[0]=a;t[1]=b;t[2]=sa[0];t[3]=sb[0];memcpy(t+4,pa,4);memcpy(t+5,pb,4);memcpy(t+6,ra,4);memcpy(t+7,rb,4);return sample&1;
}
'''.encode()+region(self.source(),0xca1c0)[2]+b'\nint main(void){\n'
        code+=collision.CollisionQuery.native_setup(self,pinned_pe(),[(0xca1c0,0x278)],(0x38000,0x4a000))
        code+=b'jump(image+0x38230,sub_140038230);jump(image+0x4a7a0,sub_14004A7A0);\n'
        for index,size in [(278845880,0x1c000),(278521288,0x7000)]:
            page=(0x404a6c+index*4)&~4095
            code+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},{size},MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
 unsigned saved_trace[256][8],saved_calls,saved_active[16],checked=0;
 unsigned counts[]={0,1,3,16,64,256};
 for(sample=0;sample<16;sample++)for(unsigned actor=0;actor<16;actor++)for(unsigned ci=0;ci<6;ci++){
  candidate_count=counts[ci];for(unsigned nat=0;nat<2;nat++){
   dword_140404A6C=(void*)((nat?image:working)+0x404a6c);memset(dword_140404A6C+278845880,0,0x1b900);memset(dword_140404A6C+278521288,0,0x6000);
   for(unsigned type=0;type<4;type++){dword_140404A6C[278521288+1268*type]=((sample&2)&&type==1)?0:1;dword_140404A6C[278522247+1268*type]=type;}
   for(unsigned item=0;item<16;item++){
    unsigned base=1760*item;dword_140404A6C[base+278845895]=1;dword_140404A6C[base+278845896]=(sample&4)?64:0;dword_140404A6C[base+278845898]=item%4;dword_140404A6C[base+278845915]=item;
    for(unsigned i=0;i<3;i++){float lower=0,upper=1;if((sample&8)&&item%3==0)lower=2;memcpy(dword_140404A6C+base+278845958+i,&lower,4);memcpy(dword_140404A6C+base+278845961+i,&upper,4);dword_140404A6C[base+278845964+i]=i+1;dword_140404A6C[base+278845967+i]=i+5;}
   }
   calls=0;memset(trace,0,sizeof trace);if(nat)((void(*)(int))(image+0xca1c0))(actor);else sub_1400CA1C0(actor);
   if(!nat){saved_calls=calls;memcpy(saved_trace,trace,sizeof trace);for(unsigned i=0;i<16;i++)saved_active[i]=dword_140404A6C[1760*i+278845895];}
   else {if(calls!=saved_calls||memcmp(saved_trace,trace,sizeof trace)){printf("item calls mismatch sample %u actor %u count %u\n",sample,actor,candidate_count);return 1;}for(unsigned i=0;i<16;i++)if(saved_active[i]!=dword_140404A6C[1760*i+278845895])return 2;}
  }checked++;
 }
 printf("%u complete native item contact consumer comparisons pass; up to 256 candidates, type gating, overlap rejection and activation updates compared; candidate gathering and narrowphase controlled\n",checked);return 0;
}
'''.encode()
        self.run_fixture('items',code)


if __name__=='__main__':unittest.main()
