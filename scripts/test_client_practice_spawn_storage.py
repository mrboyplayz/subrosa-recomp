"""Compare Practice spawn arguments with the original instruction block/constructors."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT, pinned_pe, region
from repair_client_practice_spawn_storage import repair
import test_client_collision_query as collision


class PracticeSpawnStorage(unittest.TestCase):
    def source(self):
        source = read_client_source()
        if b'sr_reset_spawn_position' not in region(source, 0x127910)[2]:
            source, _ = repair(source)
        return source

    def run_fixture(self, name, code):
        out = PROJECT/'reports/client-practice-spawn-storage-20261004'
        out.mkdir(parents=True, exist_ok=True)
        path = out/(name+'.c'); path.write_bytes(code); exe = path.with_suffix('.exe')
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', '-O0', '-std=gnu11', '-fno-strict-aliasing', '-ffp-contract=off', '-Wno-error=incompatible-pointer-types', '-I', str(PROJECT/'src/client'), '-I', str(PROJECT/'src/rebuild'), str(path), '-o', str(exe)], capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)
        result = subprocess.run([str(exe)], capture_output=True, text=True, timeout=30)
        (out/(name+'-stdout.txt')).write_bytes(result.stdout.encode())
        self.assertEqual(result.returncode, 0, result.stdout+result.stderr)

    def test_native_reset_spawn_block(self):
        body = region(self.source(), 0x127910)[2]
        start = body.index(b'        (*(int64_t *)(void *)sr_reset_player_position) = ')
        end = body.index(b';', body.index(b'v156 = sub_140053840', start))+1
        block = body[start:end]
        code = r'''#include "export_compat.h"
static unsigned char *image,*working;static void *sr_native_spawn_entry;
static __int128 xmmword_140278D30;static unsigned trace[13];
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static int64_t sub_140053840(float *p,float *r,int actor){memcpy(trace,p,12);memcpy(trace+3,r,36);trace[12]=actor;return 7;}
static void recovered(float *p){
 _Alignas(8) unsigned sr_reset_spawn_position[4],sr_reset_player_position[3];
 _Alignas(16) unsigned sr_reset_spawn_rotation[12];
 int v140;memcpy(&v140,p+3,4);float v145=p[2],v146=p[0],v155;int64_t v156;
 memcpy(sr_reset_spawn_position,p,8);
'''.encode()+block+r'''
}
__attribute__((naked,noinline)) static void native(float *p){
 __asm__("push %rbp; push %r14; sub $0x628,%rsp;"
 "movaps %xmm6,0x500(%rsp); movaps %xmm7,0x510(%rsp); movaps %xmm8,0x520(%rsp); movaps %xmm9,0x530(%rsp);"
 "lea 0x100(%rsp),%rbp; mov 12(%rcx),%r14d; movss 0(%rcx),%xmm6; movss 8(%rcx),%xmm7;"
 "mov $0x42000000,%eax; movd %eax,%xmm9; mov 0(%rcx),%rax; mov %rax,0x50(%rsp);"
 "jmp *sr_native_spawn_entry(%rip); .global sr_native_spawn_end; sr_native_spawn_end:;"
 "movaps 0x500(%rsp),%xmm6; movaps 0x510(%rsp),%xmm7; movaps 0x520(%rsp),%xmm8; movaps 0x530(%rsp),%xmm9;"
 "add $0x628,%rsp; pop %r14; pop %rbp; ret;");
}
extern void sr_native_spawn_end(void);
int main(void){
'''.encode()+collision.CollisionQuery.native_setup(self, pinned_pe(), [(0x12a06f, 0x6b)], (0x53000,))
        code += r'''
 jump(image+0x53840,sub_140053840);jump(image+0x12a0da,sr_native_spawn_end);sr_native_spawn_entry=image+0x12a06f;
 memcpy(&xmmword_140278D30,image+0x278d30,16);unsigned saved[13];
 for(unsigned sample=0;sample<2048;sample++){
  float p[]={1088+(sample%17)*.125f,25.25f+(sample%7)*.25f,1120+(sample%23)*.5f,0};unsigned actor=sample%4;memcpy(p+3,&actor,4);
  recovered(p);memcpy(saved,trace,sizeof saved);native(p);
  if(memcmp(saved,trace,sizeof saved)){printf("reset spawn mismatch sample %u\n",sample);for(unsigned i=0;i<13;i++)printf("%u %x/%x\n",i,saved[i],trace[i]);return 1;}
 }
 printf("2048 native Practice spawn-block comparisons pass; position, actor and all nine rotation words compared; human creation controlled\n");return 0;
}
'''.encode()
        self.run_fixture('reset', code)

    def test_native_entity_constructors(self):
        code = r'''#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static unsigned trace[64][24],calls,body_count,random_seed;
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static unsigned *event(unsigned tag){if(calls>=64)abort();unsigned *e=trace[calls++];e[0]=tag;return e;}
static unsigned sub_14005CF80(unsigned kind,unsigned *p,unsigned *r,unsigned *v,unsigned mass,unsigned *inertia){
 unsigned *e=event(1);e[1]=kind;memcpy(e+2,p,12);memcpy(e+5,r,36);e[14]=(v!=0);if(v)memcpy(e+15,v,12);e[18]=mass;memcpy(e+19,inertia,12);return body_count++;
}
static void sub_14004E430(unsigned a,unsigned b,unsigned *p,unsigned *q){unsigned *e=event(2);e[1]=a;e[2]=b;memcpy(e+3,p,12);memcpy(e+6,q,12);}
static unsigned sub_14004E5B0(unsigned a,unsigned b){unsigned *e=event(3);e[1]=a;e[2]=b;return calls;}
static void *sub_1401FCD30(void *p,int value,size_t n){return memset(p,value,n);}
static void sub_1400AB7B0(int i){(void)i;}static void sub_1400AAAA0(int i){(void)i;}static void sub_140048110(int *p){(void)p;}
static int controlled_rand(void){random_seed=random_seed*214013u+2531011u;return (random_seed>>16)&32767;}
#define rand controlled_rand
'''.encode()+region(self.source(), 0x53840)[2]+region(self.source(), 0x5bca0)[2]+b'\nint main(void){\n'
        code += collision.CollisionQuery.native_setup(self, pinned_pe(), [(0x53840, 0x8f0), (0x5bca0, 0xf10)], (0x1fc000,0xab000,0xaa000,0x48000,0x230000,0x23b000,0x4e000))
        for rva, name in [(0x5cf80,'sub_14005CF80'), (0x4e430,'sub_14004E430'), (0x4e5b0,'sub_14004E5B0'), (0x1fcd30,'sub_1401FCD30'), (0xab7b0,'sub_1400AB7B0'), (0xaaaa0,'sub_1400AAAA0'), (0x48110,'sub_140048110'), (0x23b1b0,'controlled_rand')]:
            code += f'jump(image+{rva},{name});\n'.encode()
        # Whole occupied slots, profiles, templates, constructor output and body metadata.
        for index, size in [(280651293,0x22000), (282485789,0x3000), (71856200,0x12000), (456202453,0x1000), (129716709,0x18000), (346707719,0x1c0000), (438887509,0x2000), (18215709,0x5000)]:
            page = (0x404a6c+index*4)&~4095
            code += f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},{size},MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code += r'''
 unsigned saved[64][24],saved_calls,saved_result,human_cases=0,vehicle_cases=0;
 for(unsigned mode=0;mode<2;mode++)for(unsigned sample=0;sample<128;sample++){
  for(unsigned nat=0;nat<2;nat++){
   dword_140404A6C=(void*)((nat?image:working)+0x404a6c);memset(dword_140404A6C+280651293,0,0x20000);memset(dword_140404A6C+282485789,0,0x2000);memset(dword_140404A6C+71856200,0,0x11000);
   for(unsigned i=0;i<sample%4;i++)dword_140404A6C[280651303+7166*i]=1;
   for(unsigned bone=0;bone<16;bone++){float xyz[]={.03125f*bone,.125f*bone,-.0625f*bone};unsigned at=282486048+25*bone;memcpy(dword_140404A6C+at-2,xyz,12);for(unsigned i=0;i<3;i++){float inertia=.5f*(i+1);memcpy(dword_140404A6C+at+9+i,&inertia,4);}dword_140404A6C[at+8]=0x3f800000;}
   float p[]={1088+sample*.25f,25.25f,1072},r[]={1,0,0,0,1,0,0,0,1};if(sample&1){r[0]=0;r[2]=1;r[6]=-1;r[8]=0;}
   calls=body_count=0;random_seed=sample;memset(trace,0,sizeof trace);
   unsigned result=nat?((unsigned(*)(float*,float*,int))(image+0x53840))(p,r,mode?-1:0):(unsigned)sub_140053840(p,r,mode?-1:0);
   if(!nat){saved_calls=calls;saved_result=result;memcpy(saved,trace,sizeof saved);}
   else if(calls!=saved_calls||result!=saved_result||memcmp(saved,trace,sizeof saved)){printf("human constructor mismatch mode %u sample %u calls %u/%u\n",mode,sample,saved_calls,calls);return 1;}
  }human_cases++;
 }
 for(unsigned kind=0;kind<16;kind++)for(unsigned sample=0;sample<64;sample++){
  for(unsigned nat=0;nat<2;nat++){
   dword_140404A6C=(void*)((nat?image:working)+0x404a6c);memset(dword_140404A6C+129716709,0,0x17000);memset(dword_140404A6C+346707719,0,0x1b0000);memset(dword_140404A6C+18215709,0,0x4000);
   for(unsigned i=0;i<sample%3;i++)dword_140404A6C[129716709+5210*i]=1;
   unsigned offset=24944*kind;float center[]={.125f,-.5f,.25f},inertia[]={2,4,8};memcpy(dword_140404A6C+346732623+offset,center,12);memcpy(dword_140404A6C+346732629+offset,inertia,12);dword_140404A6C[346707731+offset]=0x42a00000;
   dword_140404A6C[346731811+offset]=sample%5;
   for(unsigned wheel=0;wheel<sample%5;wheel++){unsigned at=346731831+offset+20*wheel;float radius=.3125f+wheel*.03125f;memcpy(dword_140404A6C+at-13,&radius,4);float xyz[]={wheel*.25f,-.25f,wheel*.5f};memcpy(dword_140404A6C+at-2,xyz,12);dword_140404A6C[at-14]=0x3f800000;}
   float p[]={1098+sample*.125f,25.0f,1070},r[]={1,0,0,0,1,0,0,0,1},v[]={.125f,.25f,-.5f};if(sample&1){r[0]=0;r[2]=1;r[6]=-1;r[8]=0;}
   calls=body_count=0;memset(trace,0,sizeof trace);unsigned *velocity=(sample&2)?(unsigned*)v:0;
   unsigned result=nat?((unsigned(*)(int,float*,unsigned*,unsigned*,unsigned))(image+0x5bca0))(kind,p,velocity,(unsigned*)r,3):(unsigned)sr_CreateVehicle(kind,p,velocity,(unsigned*)r,3);
   if(!nat){saved_calls=calls;saved_result=result;memcpy(saved,trace,sizeof saved);}
   else if(calls!=saved_calls||result!=saved_result||memcmp(saved,trace,sizeof saved)){printf("vehicle constructor mismatch kind %u sample %u calls %u/%u\n",kind,sample,saved_calls,calls);for(unsigned c=0;c<calls;c++)for(unsigned i=0;i<24;i++)if(saved[c][i]!=trace[c][i])printf("trace %u/%u %x/%x\n",c,i,saved[c][i],trace[c][i]);return 2;}
  }vehicle_cases++;
 }
 printf("%u complete native human and %u complete native vehicle constructor argument comparisons pass; 16 limbs, 0-4 wheels, special vehicle joints, positions, rotations, velocities and inertia compared; dependent helpers controlled\n",human_cases,vehicle_cases);return 0;
}
'''.encode()
        self.run_fixture('constructors', code)

    def test_native_train_spawns(self):
        code = r'''#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static __int128 xmmword_140278D30;static unsigned calls,trace[16][20];
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
static void rotate(float *r,float *axis,float angle){unsigned *t=trace[calls++];t[0]=1;memcpy(t+1,r,36);memcpy(t+10,axis,12);memcpy(t+13,&angle,4);r[0]=angle;r[8]=-angle;}
static void sub_14007B2A0(int64_t r,float *axis,double bits){float angle;memcpy(&angle,&bits,4);rotate((float*)r,axis,angle);}
static unsigned sr_CreateVehicle(int type,float *p,unsigned *v,unsigned *r,unsigned color){unsigned *t=trace[calls++];t[0]=2;t[1]=type;t[2]=color;t[3]=(v!=0);memcpy(t+4,p,12);memcpy(t+7,r,36);return calls/2-1;}
'''.encode()+region(self.source(), 0x61950)[2]+b'\nint main(void){\n'
        code += collision.CollisionQuery.native_setup(self, pinned_pe(), [(0x61950,0x10e)], (0x7b000,0x5b000))
        for index, size in [(112631653,0x2000), (129721811,0x17000)]:
            page=(0x404a6c+index*4)&~4095
            code+=f'if(!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},{size},MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code += r'''
 memcpy(&xmmword_140278D30,image+0x278d30,16);jump(image+0x7b2a0,sub_14007B2A0);jump(image+0x5bca0,sr_CreateVehicle);
 unsigned saved[16][20],saved_calls,saved_ids[4];
 for(unsigned sample=0;sample<512;sample++)for(unsigned nat=0;nat<2;nat++){
  dword_140404A6C=(void*)((nat?image:working)+0x404a6c);memset(dword_140404A6C+112631653,0,128);memset(dword_140404A6C+129721811,0,0x15000);
  dword_140404A6C[112631653]=sample%5;
  for(unsigned i=0;i<sample%5;i++){float p[]={2930.75f+i,23.8125f,1536+i*.125f,(sample%11)*.25f};memcpy(dword_140404A6C+112631655+5*i,p,16);}
  calls=0;memset(trace,0,sizeof trace);if(nat)((void(*)(void))(image+0x61950))();else sub_140061950();
  if(!nat){saved_calls=calls;memcpy(saved,trace,sizeof saved);for(unsigned i=0;i<4;i++)saved_ids[i]=dword_140404A6C[129721811+5210*i];}
  else {if(calls!=saved_calls||memcmp(saved,trace,sizeof saved)){printf("train spawn mismatch sample %u\n",sample);return 1;}for(unsigned i=0;i<4;i++)if(saved_ids[i]!=dword_140404A6C[129721811+5210*i])return 2;}
 }
 printf("512 complete native train spawn comparisons pass; positions, nine rotation words, unit-Y axis, angle, vehicle arguments and IDs compared; rotation and vehicle creation controlled\n");return 0;
}
'''.encode()
        self.run_fixture('trains', code)


if __name__ == '__main__':
    unittest.main()
