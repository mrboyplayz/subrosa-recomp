"""Compare all cubemap filtering vertices and GL calls with the native pass."""
import re
import subprocess
import unittest
from client_sources import read_client_source
from repair_client_menu_actions import PROJECT, pinned_pe, region
import test_client_collision_query as collision_query


class FrameStorage(unittest.TestCase):
    def test_native_immediate_vertex_writer(self):
        pe=pinned_pe();body=region(read_client_source(),0x7d420)[2]
        code=r'''#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;static unsigned flushes;
static uint64_t sub_14006E0D0(int64_t a,int64_t b,int64_t c){flushes++;return 0;}
'''.encode()+body+b'\nint main(void){\n'
        code+=collision_query.CollisionQuery.native_setup(self,pe,[(0x7d420,0x100)],(0x6e000,))
        for start,size in [(456217205,12*65537),(456807033,6)]:
            first=(0x404a6c+start*4)&~4095;last=(0x404a6c+(start+size)*4+4095)&~4095
            code+=f'if(!VirtualAlloc(image+{first},{last-first},MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        code+=r'''
 unsigned char *stub=image+0x6e0d0;stub[0]=0xff;stub[1]=0x25;memset(stub+2,0,4);void *fn=sub_14006E0D0;memcpy(stub+6,&fn,8);
 dword_140404A6C=(void *)(image+0x404a6c);uint32_t seed=0xa847319,expected[9];unsigned saved_flushes,checked=0;
 for(unsigned sample=0;sample<1024;sample++){
  float xyz[3];for(unsigned j=0;j<3;j++){seed=1664525*seed+1013904223;float f=((int)(seed%32769)-16384)*.125f;xyz[j]=f;}
  for(unsigned j=0;j<6;j++){seed=1664525*seed+1013904223;dword_140404A6C[456807033+j]=seed;}
  unsigned n=sample%4==0?65536:sample%4==1?65535:sample%31,stride=sample%3+9;
  for(unsigned native=0;native<2;native++){
   unsigned *p=dword_140404A6C+456217209+(n==65536?0:n*stride);memset(p,0xa5,36);flushes=0;
   dword_140404A6C[456217207]=n;dword_140404A6C[456217208]=stride;
   if(native)((void(*)(float,float,float))(image+0x7d420))(xyz[0],xyz[1],xyz[2]);else sub_14007D420(xyz[0],xyz[1],xyz[2]);
   if(!native){memcpy(expected,p,36);saved_flushes=flushes;}
   else if(memcmp(expected,p,36)||flushes!=saved_flushes||dword_140404A6C[456217207]!=(n==65536?1:n+1)||dword_140404A6C[456217208]!=(n==65536?9:stride)){printf("Vertex mismatch sample=%u\n",sample);return 1;}
  }checked++;
 }
 printf("%u native immediate vertices match all nine position/UV/color words and capacity flush behavior\n",checked);return 0;}
'''.encode()
        self.run_fixture('vertex',code)

    def test_native_stencil_pass_matrices(self):
        import capstone
        pe=pinned_pe();body=region(read_client_source(),0x123190)[2]
        code=r'''#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static unsigned count;static uint32_t trace[128][17];
static uint64_t ignore(){return 0;}
static void matrix(unsigned loc,unsigned n,unsigned char transpose,const void *p){if(count>=128||n!=1)abort();trace[count][0]=loc;memcpy(trace[count++]+1,p,64);}
static uint64_t vertex(float x,float y,float z){if(count>=128)abort();trace[count][0]=0x7d420;memcpy(trace[count]+1,&x,4);memcpy(trace[count]+2,&y,4);memcpy(trace[count++]+3,&z,4);return 0;}
static void multiply(unsigned *out,int64_t a,int64_t b){((void(*)(unsigned*,int64_t,int64_t))(image+0x7a0e0))(out,a,b);}
static void jump(unsigned char *p,void *fn){p[0]=0xff;p[1]=0x25;memset(p+2,0,4);memcpy(p+6,&fn,8);}
'''.encode()
        names=sorted(set(re.findall(rb'\b((?:sub|qword|unk)_140[0-9A-Fa-f]+)\b',body))-{b'sub_140123190'})
        constants=sorted(set(re.findall(rb'\bxmmword_140[0-9A-Fa-f]+\b',body)))
        for name in constants:code+=b'static __int128 '+name+b';\n'
        for name in names:code+=b'static uint64_t (*'+name+(b')(float,float,float);\n' if name==b'sub_14007D420' else b')();\n')
        decoder=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);decoder.detail=True
        direct=set()
        for ins in decoder.disasm(pe.get_data(0x123190,0x13ef),0x140123190):
            if ins.mnemonic=='call' and ins.operands[0].type==capstone.CS_OP_IMM:direct.add(ins.operands[0].imm-0x140000000)
        indices=[315570516,318816604,40714349,70074733,431564581,431564485,431564580,73991626,283791463,283791465,283793813,283829863,283829866,283830718,284024944,71737985,71738025,284545191,284545192]
        pages={(0x404a6c+i*4)&~4095 for i in indices}|{r&~4095 for r in direct}|{0x404000,0x302000}
        code+=body+b'\nint main(void){\n'+collision_query.CollisionQuery.native_setup(self,pe,[(0x123190,0x13ef),(0x7a0e0,0x470)],tuple(pages))
        for name in names:
            rva=int(name.decode().split('_')[1],16)-0x140000000
            callback='matrix' if rva==0x404378 else 'multiply' if rva==0x7a0e0 else 'vertex' if rva==0x7d420 else 'ignore'
            code+=name+f'=(void *){callback};\n'.encode()
            if name.startswith(b'sub_'):
                if rva!=0x7a0e0:code+=f'jump(image+{rva},{callback});\n'.encode()
            else:code+=f'*(void **)(image+{rva})=(void *){callback};\n'.encode()
        # Legacy GL function pointers live in the large dword arena.
        slots=set()
        for ins in decoder.disasm(pe.get_data(0x123190,0x13ef),0x140123190):
            if ins.mnemonic=='call' and ins.operands[0].type==capstone.CS_OP_MEM and ins.operands[0].mem.base==capstone.x86.X86_REG_RIP:
                slots.add(ins.address+ins.size+ins.operands[0].mem.disp-0x140000000)
        for slot in slots:code+=f'*(void **)(image+{slot})=(void *){"matrix" if slot==0x404378 else "ignore"};\n'.encode()
        for name in constants:
            rva=int(name.decode().split('_')[1],16)-0x140000000
            code+=b'memcpy(&'+name+f',image+{rva},16);\n'.encode()
        code+=r'''
 dword_140404A6C=(void *)(image+0x404a6c);dword_140404A6C[315570516]=1;dword_140404A6C[318816604]=0;dword_140404A6C[70074733]=dword_140404A6C[431564581]=0;
 for(unsigned i=0;i<4;i++)dword_140404A6C[283791462+i]=0;dword_140404A6C[283829863]=dword_140404A6C[283829866]=dword_140404A6C[283830718]=0;
 uint32_t initial[96],saved_matrices[96],saved_trace[128][17],seed=0x7612359;unsigned saved_count,checked=0;
 for(unsigned sample=0;sample<128;sample++){
  for(unsigned i=0;i<96;i++){seed=1664525u*seed+1013904223u;float f=((int)(seed%4097)-2048)*.00390625f;memcpy(initial+i,&f,4);}
  for(unsigned native=0;native<2;native++){
   memcpy(dword_140404A6C+431564485,initial,384);memset(trace,0,sizeof trace);count=0;
   if(native)((void(*)(void))(image+0x123190))();else sub_140123190();
   if(!native){saved_count=count;memcpy(saved_trace,trace,sizeof trace);memcpy(saved_matrices,dword_140404A6C+431564485,384);}
   else if(count!=saved_count||memcmp(saved_trace,trace,sizeof trace)||memcmp(saved_matrices,dword_140404A6C+431564485,384)){printf("Stencil matrix mismatch sample=%u calls=%u/%u\n",sample,saved_count,count);return 1;}
  }checked++;
 }
 printf("%u native stencil matrix passes match all 16-float uploads and global matrices; empty geometry and other pass helpers controlled\n",checked);return 0;}
'''.encode()
        self.run_fixture('stencil',code)

    def test_native_screen_sample_pass(self):
        pe=pinned_pe();body=region(read_client_source(),0x1945f0)[2]
        code=r'''#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;static __int128 xmmword_140278E20;
static unsigned count;static uint32_t trace[32][20];
static uint64_t ignore(){return 0;}
static void matrix(unsigned loc,unsigned n,unsigned char transpose,const void *p){if(count>=32||n!=1)abort();trace[count][0]=loc;memcpy(trace[count++]+1,p,64);}
static void buffer(unsigned target,intptr_t offset,intptr_t n,const void *p){if(count>=32||n!=48)abort();trace[count][0]=n;memcpy(trace[count++]+1,p,n);}
'''.encode()
        names=sorted(set(re.findall(rb'\b((?:qword|unk)_140[0-9A-Fa-f]+)\b',body)))
        for name in names:code+=b'static uint64_t (*'+name+b')();\n'
        code+=body+b'\nint main(void){\n'+collision_query.CollisionQuery.native_setup(self,pe,[(0x1945f0,0x2f0)],(0x404000,))
        indices=[431564565,431564580,283829871,284024944,283791478,283793813,188872557,188872559,284205197,284024767,71738405,71738464]
        for page in sorted({(0x404a6c+i*4)&~4095 for i in indices}):code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        for name in names:
            rva=int(name.decode().split('_')[1],16)-0x140000000
            callback='matrix' if rva==0x404378 else 'buffer' if rva==0x404198 else 'ignore'
            code+=name+f'=(void *){callback};*(void **)(image+{rva})=(void *){callback};\n'.encode()
        code+=r'''
 memcpy(&xmmword_140278E20,image+0x278e20,16);dword_140404A6C=(void *)(image+0x404a6c);
 dword_140404A6C[283829871]=dword_140404A6C[283791478]=0;dword_140404A6C[71738442]=29;dword_140404A6C[71738463]=31;
 unsigned checked=0;uint32_t saved[32][20],seed=0x86182547;unsigned saved_count;
 for(unsigned sample=0;sample<512;sample++){
  for(unsigned i=0;i<16;i++){seed=1664525u*seed+1013904223u;float f=((int)(seed%4097)-2048)*.0078125f;memcpy(dword_140404A6C+431564565+i,&f,4);}
  float w=(sample%7+1)*320.0f,h=(sample%5+1)*180.0f;memcpy(dword_140404A6C+188872557,&w,4);memcpy(dword_140404A6C+188872559,&h,4);
  for(unsigned native=0;native<2;native++){
   count=0;memset(trace,0,sizeof trace);if(native)((void(*)(void))(image+0x1945f0))();else sub_1401945F0();
   if(!native){memcpy(saved,trace,sizeof trace);saved_count=count;}
   else if(count!=saved_count||memcmp(saved,trace,sizeof trace)){printf("Screen sample matrix/vertices mismatch sample=%u count=%u/%u\n",sample,saved_count,count);return 1;}
  }checked++;
 }
 printf("%u complete native screen sample passes match both 16-float uploads and all four vertices; GL callbacks controlled\n",checked);return 0;}
'''.encode()
        self.run_fixture('screen',code)

    def run_fixture(self,name,code):
        code=code.replace(b'int main(void){',b'int main(void){SetErrorMode(SEM_NOGPFAULTERRORBOX|SEM_FAILCRITICALERRORS);')
        out=PROJECT/'reports/client-frame-storage-20261005';out.mkdir(parents=True,exist_ok=True)
        path=out/(name+'.c');path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/(name+'-stdout.txt')).write_text(result.stdout)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)

    def test_native_cube_filter(self):
        pe=pinned_pe();body=region(read_client_source(),0x1b6a0)[2]
        code=r'''#include <math.h>
#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static uint32_t trace[2048][33];static unsigned count;
static uint32_t *record(unsigned kind){if(count>=2048)abort();trace[count][0]=kind;return trace[count++]+1;}
static uint64_t one(unsigned a){record(1)[0]=a;return 0;}
static uint64_t depth_mask(unsigned char a){record(1)[0]=a;return 0;}
static uint64_t two(unsigned a,unsigned b){uint32_t *t=record(2);t[0]=a;t[1]=b;return 0;}
static uint64_t four(unsigned a,unsigned b,unsigned c,unsigned d){uint32_t *t=record(4);t[0]=a;t[1]=b;t[2]=c;t[3]=d;return 0;}
static uint64_t five(unsigned a,unsigned b,unsigned c,unsigned d,unsigned e){uint32_t *t=record(5);t[0]=a;t[1]=b;t[2]=c;t[3]=d;t[4]=e;return 0;}
static uint64_t three(unsigned a,unsigned b,unsigned c){uint32_t *t=record(3);t[0]=a;t[1]=b;t[2]=c;return 0;}
static void attr(unsigned a,int b,unsigned c,unsigned char d,int e,const void *p){uint32_t *t=record(6);t[0]=a;t[1]=b;t[2]=c;t[3]=d;t[4]=e;t[5]=(uintptr_t)p;}
static void level(unsigned a,float b){uint32_t *t=record(7);t[0]=a;memcpy(t+1,&b,4);}
static void matrix(unsigned a,unsigned b,unsigned char c,const void *p){uint32_t *t=record(8);t[0]=a;t[1]=b;t[2]=c;memcpy(t+3,p,64);}
static void buffer(unsigned a,intptr_t b,intptr_t c,const void *p){uint32_t *t=record(9);t[0]=a;t[1]=b;t[2]=c;if(c!=96)abort();memcpy(t+3,p,96);}
static __m128 trig(double a,int64_t b,double c){float f;memcpy(&f,&a,4);return _mm_setr_ps(sinf(f),cosf(f),0,0);}
static void jump(unsigned char *p,void *f){p[0]=0xff;p[1]=0x25;memset(p+2,0,4);memcpy(p+6,&f,8);}
static void sub_14007A0E0(unsigned *out,int64_t a,int64_t b){((void(*)(unsigned*,int64_t,int64_t))(image+0x7a0e0))(out,a,b);}
static void sub_14007B2A0(int64_t out,float *axis,double angle){((void(*)(int64_t,float*,double))(image+0x7b2a0))(out,axis,angle);}
'''.encode()
        constants=sorted(set(re.findall(rb'\bxmmword_140[0-9A-Fa-f]+\b',body)))
        names=sorted(set(re.findall(rb'\b((?:qword|unk)_140[0-9A-Fa-f]+)\b',body)))
        for name in constants:code+=b'static __int128 '+name+b';\n'
        for name in names:code+=b'static uint64_t (*'+name+b')();\n'
        code+=body+b'\nint main(void){\n'+collision_query.CollisionQuery.native_setup(self,pe,[(0x1b6a0,0x5a0),(0x7a0e0,0x470),(0x7b2a0,0x470)],(0x404000,))
        indices=[431564485,431564580,283790138,283791765,283829872,284024944,71738285,71738294,71738298,283791478,283793813,18215099,18215103]
        for page in sorted({(0x404a6c+i*4)&~4095 for i in indices}):code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;\n'.encode()
        callbacks={0x404050:'two',0x404170:'two',0x404198:'buffer',0x404238:'one',0x404230:'one',0x4042e0:'one',0x404378:'matrix',0x4046f0:'two',0x404718:'five',0x302fe8:'four',0x302ff8:'three',0x4042e8:'level',0x4044a8:'attr',0x4980d58:'one',0x4980d60:'one',0x4980d68:'one'}
        for name in names:
            rva=int(name.decode().split('_')[1],16)-0x140000000
            callback=callbacks[rva]
            code+=name+f'=(void *){callback};*(void **)(image+{rva})=(void *){callback};\n'.encode()
        for rva in (0x4980d58,0x4980d60,0x4980d68):code+=f'*(void **)(image+{rva})=(void *){"depth_mask" if rva==0x4980d58 else "one"};\n'.encode()
        code+=b'jump(image+0x1f8ac0,trig);dword_140404A6C=(void *)(image+0x404a6c);\n'
        for name in constants:
            rva=int(name.decode().split('_')[1],16)-0x140000000
            code+=b'memcpy(&'+name+f',image+{rva},16);\n'.encode()
        code+=r'''
 dword_140404A6C[283829872]=dword_140404A6C[283791478]=0;dword_140404A6C[284024944]=47;dword_140404A6C[283793813]=91;
 for(unsigned i=0;i<9;i++)dword_140404A6C[283790138+i]=0;dword_140404A6C[283791765]=53;
 dword_140404A6C[71738285]=61;dword_140404A6C[71738294]=67;dword_140404A6C[71738298]=73;
 static uint32_t saved[2048][33];uint32_t saved_matrices[96];unsigned saved_count;
 for(unsigned native=0;native<2;native++){
  memset(trace,0,sizeof trace);count=0;memset(dword_140404A6C+431564485,0xa5,384);
  if(native)((void(*)(void))(image+0x1b6a0))();else sub_14001B6A0();
  if(!native){memcpy(saved,trace,sizeof saved);saved_count=count;memcpy(saved_matrices,dword_140404A6C+431564485,384);}
  else if(count!=saved_count||memcmp(saved,trace,sizeof saved)||memcmp(saved_matrices,dword_140404A6C+431564485,384)){
   printf("Cube filter mismatch calls C=%u N=%u\n",saved_count,count);
   for(unsigned i=0;i<count;i++)for(unsigned j=0;j<33;j++)if(saved[i][j]!=trace[i][j]){printf("call=%u kind=%u word=%u C=%08x N=%08x\n",i,trace[i][0],j,saved[i][j],trace[i][j]);return 1;}return 2;
  }
 }
 unsigned uploads=0;for(unsigned i=0;i<count;i++)uploads+=trace[i][0]==9;if(uploads!=54)return 3;
 printf("All 54 native cubemap face/mip uploads match 24 floats, matrices and %u GL calls; real native rotation/matrix math, controlled trig/GL boundaries\n",count);return 0;}
'''.encode()
        out=PROJECT/'reports/client-frame-storage-20261005';out.mkdir(parents=True,exist_ok=True)
        path=out/'cube.c';path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
