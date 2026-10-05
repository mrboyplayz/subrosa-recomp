"""Compare recovered tick scheduling with the original main-loop instructions."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT,pinned_pe,region
from repair_client_tick_calls import repair
import test_client_collision_query as collision


class TickCalls(unittest.TestCase):
    def test_native_schedule(self):
        source=read_client_source()
        if b'v169 = sub_14003B920(1);' not in source:source,_=repair(source)
        body=region(source,0x96440)[2]
        start=body.index(b'        v168 = 0;')
        end=body.index(b'      unk_1404046F0(36160, 0);',start)
        block=body[start:end].rstrip()
        # Last brace belongs to the outer main-loop world-active condition.
        block=block[:block.rfind(b'}')]
        code=r'''#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static unsigned trace[256],trace_count,tick_count,reject_count,finish_tick;
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static int sub_14003B920(int input){if(input!=1)abort();trace[trace_count++]=0x100u+input;tick_count++;if(finish_tick&&tick_count>=finish_tick)dword_140404A6C[421831846]=1;return tick_count>reject_count;}
static void sub_140198FA1(unsigned ms){if(ms!=1)abort();trace[trace_count++]=ms;}
static void recovered(void){int v168,v169,v170,v171,v172,v173,v174,v175,v176,v177,v179,v180,v181,k;
'''.encode()+block+b'\n}\nint main(void){\n'
        pe=pinned_pe()
        code+=collision.CollisionQuery.native_setup(self,pe,[(0x98d19,0x18b)],(0x198000,0x3b000))
        code+=b'jump(image+0x3b920,sub_14003B920);jump(image+0x198fa1,sub_140198FA1);\n'
        # An ordinary Win64 caller preserves the nonvolatile loop registers
        # and seeds R12D=0, as the original main-loop prologue does.
        code+=r'''
 unsigned char wrapper[]={0x53,0x41,0x54,0x48,0x83,0xec,0x28,0x45,0x31,0xe4,0xb9,1,0,0,0,0x48,0xb8,0,0,0,0,0,0,0,0,0xff,0xe0,0x48,0x83,0xc4,0x28,0x41,0x5c,0x5b,0xc3};
 void *entry=image+0x98d19;memcpy(wrapper+17,&entry,8);memcpy(image+0x310000,wrapper,sizeof wrapper);
 jump(image+0x98ea4,image+0x310000+27);
 unsigned indices[]={456202453,19065870,73991654,284024767,421831846};
'''.encode()
        for index in (456202453,19065870,73991654,284024767,421831846):
            page=(0x404a6c+index*4)&~4095
            code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
 unsigned checked=0,saved_trace[256],saved_count=0,saved_ticks=0,saved_ready=0;
 for(unsigned branch=0;branch<4;branch++)for(unsigned rejected=0;rejected<24;rejected++)for(unsigned keys=0;keys<4;keys++)for(unsigned finish=0;finish<2;finish++){
  for(unsigned native=0;native<2;native++){
   dword_140404A6C=(void*)((native?image:working)+0x404a6c);
   for(unsigned i=0;i<5;i++)dword_140404A6C[indices[i]]=0;
   if(branch<3)dword_140404A6C[indices[branch]]=1;
   dword_140404A6C[284024767]=((keys&1)?0x100:0)|((keys&2)?0x10000:0);
   trace_count=tick_count=0;reject_count=rejected;finish_tick=finish?24:0;memset(trace,0,sizeof trace);
   if(native)((void(*)(void))(image+0x310000))();else recovered();
   if(!native){saved_count=trace_count;saved_ticks=tick_count;saved_ready=dword_140404A6C[421831846];memcpy(saved_trace,trace,sizeof trace);}
   else if(saved_count!=trace_count||saved_ticks!=tick_count||saved_ready!=dword_140404A6C[421831846]||memcmp(saved_trace,trace,sizeof trace)){printf("tick schedule mismatch branch %u rejected %u keys %u finish %u calls %u/%u ticks %u/%u\n",branch,rejected,keys,finish,saved_count,trace_count,saved_ticks,tick_count);return 1;}
  }checked++;
 }
 printf("%u tick schedule comparisons pass: native input arguments, return-controlled retries, sleeps, four branches, speed keys and bounded readiness waits\n",checked);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-tick-calls-20261004';out.mkdir(parents=True,exist_ok=True)
        path=out/'schedule.c';path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
