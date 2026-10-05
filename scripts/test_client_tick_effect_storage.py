"""Validate ignored tick results and compare effect/particle updates to native."""
import json
from client_sources import read_client_source
import re
import subprocess
import unittest
from repair_client_menu_actions import PROJECT, pinned_pe, region
from repair_client_tick_effect_storage import repair
import test_client_collision_query as collision


class TickEffects(unittest.TestCase):
    def test_native_tick_call_contracts(self):
        pe=pinned_pe();source=read_client_source()
        rows=json.loads((PROJECT/'src/rebuild/client_ignored_cookie_exits.json').read_bytes())['functions']
        for row in rows:
            if not row.get('native_ignored_callers'):continue
            self.assertEqual(row['ignored_calls'],0)
            self.assertEqual(len(re.findall(rb'\b'+row['name'].encode()+rb'\(',source)),2)
            for site in row['native_cookie_calls']+row['native_ignored_callers']:
                data=bytes.fromhex(site['bytes']);self.assertEqual(pe.get_data(int(site['rva'],16),len(data)),data)
            for caller in row['native_ignored_callers']:
                data=bytes.fromhex(caller['bytes']);self.assertEqual(data[0],0xe8)
                target=int(caller['rva'],16)+5+int.from_bytes(data[1:5],'little',signed=True)
                self.assertEqual(target,int(row['function'],16)-0x140000000)

    def test_native_effect_and_particle_updates(self):
        source=read_client_source()
        if b'sr_effect_previous_position' not in region(source,0x1597f0)[2]:source,_=repair(source)
        bodies=[region(source,r)[2] for r in [0x1597f0,0x158cd0]]
        bodies=[re.sub(rb'return sub_1401F8B20\([^;]+;',b'return 0;',b) for b in bodies]
        code=r'''#include <math.h>
#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;static __int128 xmmword_140279870;
static int dword_1402F6178,dword_1402F617C,dword_1402F6180,dword_1402F6188,dword_1402F618C,dword_1402F6190;
static unsigned trace[32][16],calls;
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static unsigned *event(unsigned tag){if(calls>=32)abort();unsigned *p=trace[calls++];p[0]=tag;return p;}
static int sub_1400DC050(float *start,float *end,int flag){unsigned *p=event(1);memcpy(p+1,start,12);memcpy(p+4,end,12);p[7]=flag;return 0;}
static void sub_14007B2A0(int64_t r,float *axis,double angle){unsigned *p=event(2);memcpy(p+1,(void*)r,36);memcpy(p+10,axis,12);memcpy(p+13,&angle,4);}
static void sub_14012BD30(int64_t r,float *axis,double angle){(void)r;(void)axis;(void)angle;abort();}
static int64_t sub_14005ED40(int type,float *pos,int64_t unused,float a,float b){abort();return 0;}
static int64_t sub_14007A240(int64_t matrix,float *other){abort();return 0;}
'''.encode()+b''.join(bodies)+b'\nint main(void){\n'
        code+=collision.CollisionQuery.native_setup(self,pinned_pe(),[(0x1597f0,0x1620),(0x158cd0,0xb20)],(0xdc000,0x7b000,0x120000,0x12b000,0x5e000,0x7a000,0x23b000))
        for rva,name in [(0xdc050,'sub_1400DC050'),(0x7b2a0,'sub_14007B2A0'),(0x12bd30,'sub_14012BD30'),(0x5ed40,'sub_14005ED40'),(0x7a240,'sub_14007A240')]:code+=f'jump(image+{rva},{name});\n'.encode()
        for index in [433435845,432826949,431564581,431138503]:
            page=(0x404a6c+index*4)&~4095
            code+=f'if(!VirtualAlloc(image+{page},8192,MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},8192,MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
 memcpy(&xmmword_140279870,image+0x279870,16);unsigned saved_trace[32][16],saved_state[37],saved_calls,checked=0;
 for(unsigned kind=0;kind<2;kind++)for(unsigned sample=0;sample<256;sample++)for(unsigned nat=0;nat<2;nat++){
  dword_140404A6C=(void*)((nat?image:working)+0x404a6c);unsigned at=kind?431138503:432826949,count_at=kind?431564581:433435845;
  memset(dword_140404A6C+at,0,37*4);dword_140404A6C[count_at]=(sample<4)?0:1;
  dword_140404A6C[at]=kind?1:2;dword_140404A6C[at+1]=120;
  float p[]={1088+(sample%7)*.25f,25.25f,1072},v[]={.125f,0,0};memcpy(dword_140404A6C+at+3,p,12);
  unsigned vel=kind?16:6;memcpy(dword_140404A6C+at+vel,v,12);
  float gravity=.03125f,damping=.5f;memcpy(dword_140404A6C+at+(kind?20:2),&gravity,4);memcpy(dword_140404A6C+at+(kind?21:34),&damping,4);
  if(kind){float r[]={1,0,0,0,1,0,0,0,1};memcpy(dword_140404A6C+at+7,r,36);}
  calls=0;memset(trace,0,sizeof trace);if(nat)((void(*)(void))(image+(kind?0x158cd0:0x1597f0)))();else if(kind)sub_140158CD0();else sub_1401597F0();
  if(!nat){saved_calls=calls;memcpy(saved_trace,trace,sizeof trace);memcpy(saved_state,dword_140404A6C+at,sizeof saved_state);}
  else {if(calls!=saved_calls||memcmp(saved_trace,trace,sizeof trace)||memcmp(saved_state,dword_140404A6C+at,sizeof saved_state)){printf("effect mismatch kind %u sample %u calls %u/%u\n",kind,sample,saved_calls,calls);for(unsigned i=0;i<37;i++)if(saved_state[i]!=dword_140404A6C[at+i])printf("state %u %x/%x\n",i,saved_state[i],dword_140404A6C[at+i]);return 1;}checked++;}
 }
 printf("%u complete native effect/particle update cases pass; empty updates and one moving effect/particle, position/direction/rotation arguments and full record state compared; raycasts and rotation controlled\n",checked);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-tick-effect-storage-20261004';out.mkdir(exist_ok=True);path=out/'effects.c';path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-Wno-error=incompatible-pointer-types','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True);self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_bytes(result.stdout.encode());self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
