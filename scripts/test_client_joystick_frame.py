"""Compare hotplug, axes, buttons and hats against the native frame polling block."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT,pinned_pe,region
from repair_client_joystick_startup import IMPORTS,FRAME_IMPORTS
import test_client_collision_query as collision


class JoystickFrame(unittest.TestCase):
    def test_native_polling(self):
        source=read_client_source();body=region(source,0x3a0f0)[2].replace(b'\r',b'')
        a=body.index(b'    sr_pad_update();');b=body.index(b'\n  }\n}',a)
        body=body[a:b]
        pe=pinned_pe()
        code=r'''#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static unsigned devices,mode,calls,bad,trace[8192];
static uintptr_t handle(unsigned i){return UINT64_C(0x123400000010)+i*64;}
static unsigned device(void *p){unsigned i=(unsigned)(((uintptr_t)p-UINT64_C(0x123400000010))/64);if(i>=32)bad=1;return i;}
static void record(unsigned op,unsigned i,unsigned index){if(calls+3>=8192)abort();trace[calls++]=op;trace[calls++]=i;trace[calls++]=index;}
static void sr_pad_update(void){record(0,0,0);}
static int sr_pad_count(void){record(1,devices,0);return devices;}
static int sr_pad_attached(void *p){if(!p){record(2,99,0);return 0;}unsigned i=device(p);record(2,i,0);return mode>=3;}
static int sr_pad_instance(void *p){unsigned i=device(p);record(3,i,0);return (int)i;}
static int sr_pad_controller_attached(void *p){if(!p){record(4,99,0);return 0;}unsigned i=device(p);record(4,i,0);return mode==4;}
static int16_t sr_pad_controller_axis(void *p,int index){unsigned i=device(p);record(5,i,index);return (int16_t)(i*2000+index*11111-30000);}
static unsigned char sr_pad_controller_button(void *p,int index){unsigned i=device(p);record(6,i,index);return (i+index)&1;}
static int16_t sr_pad_axis(void *p,int index){unsigned i=device(p);record(7,i,index);return (int16_t)(i*2000+index*11111-30000);}
static unsigned char sr_pad_button(void *p,int index){unsigned i=device(p);record(8,i,index);return (i+index)&1;}
static unsigned char sr_pad_hat(void *p,int index){unsigned i=device(p);record(9,i,index);return (i+index)%16;}
static int sr_pad_is_controller(int i){record(10,i,0);return mode==1;}
static void *sr_pad_controller_open(int i){record(11,i,0);return (void *)handle(i);}
static void *sr_pad_controller_joystick(void *p){unsigned i=device(p);record(12,i,0);return (void *)(handle(i)+8);}
static const char *sr_pad_name(int i){record(13,i,0);return "Fixture pad";}
static void *sr_pad_open(int i){record(14,i,0);return mode==2?NULL:(void *)(handle(i)+8);}
static int sr_pad_axes(void *p){unsigned i=device(p);record(15,i,0);return i%7;}
static int sr_pad_buttons(void *p){unsigned i=device(p);record(16,i,0);return i%18;}
static int sr_pad_hats(void *p){unsigned i=device(p);record(17,i,0);return i%4;}
static void recovered(void){int v544,v547,v548,v549,v551,v553,v556,v558,v561,v563,v567,v569;int64_t v545,v550,v562,v565,v568,v571;unsigned *v546,*v552,*v554,*v555,*v557,*v559,*v560;char *v564,*v566,*v570,*v572,v573;
'''.encode()+body+b'\n}\n'
        code+=r'''
extern void polling_block(void *image,void *entry);
__asm__(".text\n.global polling_block\npolling_block:\nsub $0x58,%rsp\nmov %r12,0x48(%rsp)\nmov %r14,0x38(%rsp)\nlea 0x44397b40(%rcx),%r14\njmp *%rdx\n");
int main(void){
'''.encode()+collision.CollisionQuery.native_setup(self,pe,[(0x3b519,0x3ff)],(0x198000,))
        # Keep the six-byte SDL thunks intact; bind each original IAT slot.
        mapping={**IMPORTS,**FRAME_IMPORTS}
        for rva,(alias,name,result,args) in mapping.items():
            if alias in ('sr_pad_file','sr_pad_mappings'):continue
            raw=pe.get_data(rva,6);target=rva+6+int.from_bytes(raw[2:],'little',signed=True);page=target&~4095
            code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_READWRITE))return 9;*(void **)(image+{target})={alias};\n'.encode()
        code+=r'''
 if(!VirtualAlloc(image+0x44397000,0x7000,MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+0x44397000,0x7000,MEM_COMMIT,PAGE_READWRITE))return 9;
 unsigned counts[]={0,1,3,31,32,33,40},checked=0,saved_calls,saved_trace[8192];unsigned char saved_state[0x7000];
 for(unsigned count=0;count<7;count++)for(unsigned test_mode=0;test_mode<5;test_mode++){
  devices=counts[count];mode=test_mode;
  for(unsigned native=0;native<2;native++){
   unsigned char *state=native?image:working;dword_140404A6C=(void*)(state+0x404a6c);memset(state+0x44397000,0,0x7000);
   for(unsigned i=0;i<32;i++){
    if(mode>=3){*(uint64_t *)(dword_140404A6C+285105149+2*i)=handle(i)+8;if(mode==4)*(uint64_t *)(dword_140404A6C+285105085+2*i)=handle(i);}
    dword_140404A6C[285101115+124*i]=mode==4?6:i%7;dword_140404A6C[285101132+124*i]=mode==4?16:i%18;dword_140404A6C[285101165+124*i]=i%4;
   }
   calls=bad=0;memset(trace,0,sizeof trace);
   if(native)polling_block(image,image+0x3b519);else recovered();
   if(bad){printf("bad device argument mode %u count %u\n",mode,devices);return 1;}
   if(!native){saved_calls=calls;memcpy(saved_trace,trace,sizeof trace);memcpy(saved_state,state+0x44397000,sizeof saved_state);}
   else if(calls!=saved_calls||memcmp(saved_trace,trace,sizeof trace)||memcmp(saved_state,state+0x44397000,sizeof saved_state)){printf("polling mismatch mode %u count %u calls %u/%u\n",mode,devices,saved_calls,calls);for(unsigned i=0;i<calls;i++)if(trace[i]!=saved_trace[i])printf("trace %u %u/%u\n",i,saved_trace[i],trace[i]);for(unsigned i=0;i<sizeof saved_state;i++)if(saved_state[i]!=state[0x44397000+i]){printf("state byte %u %x/%x\n",i,saved_state[i],state[0x44397000+i]);break;}return 2;}
  }checked++;
 }
 printf("%u native per-frame joystick polling comparisons pass: controller/joystick hotplug, open failures, attached handles, axis/button/hat arguments, full state and 32-device cap\n",checked);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-joystick-frame-20261004';out.mkdir(parents=True,exist_ok=True);path=out/'polling.c';path.write_bytes(code);exe=path.with_suffix('.exe')
        run=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(run.returncode,0,run.stderr)
        run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30);(out/'stdout.txt').write_text(run.stdout)
        self.assertEqual(run.returncode,0,run.stdout+run.stderr)


if __name__=='__main__':unittest.main()
