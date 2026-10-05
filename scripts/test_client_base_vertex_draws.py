"""Compare terrain/building draw arguments against the original instructions."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT, pinned_pe, region
from repair_client_base_vertex_draws import repair
import test_client_collision_query as collision


class BaseVertexDraws(unittest.TestCase):
    def test_native_draw_handlers(self):
        source = read_client_source()
        if b'sr_building_vertex_bytes' not in region(source, 0x11ddb0)[2]:
            source, _ = repair(source)
        pe = pinned_pe()
        code = r'''#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static uint64_t trace[8192][9];static unsigned calls;
static uint64_t *event(unsigned tag){if(calls>=8192)abort();uint64_t *p=trace[calls++];p[0]=tag;return p;}
static void attribute(unsigned a,int n,unsigned type,unsigned char norm,int stride,const void *offset){uint64_t *p=event(1);p[1]=a;p[2]=n;p[3]=type;p[4]=norm;p[5]=stride;p[6]=(uintptr_t)offset;}
static void buffer(unsigned a,unsigned b){uint64_t *p=event(2);p[1]=a;p[2]=b;}
static void c_buffer(unsigned a,unsigned b,int64_t unused){buffer(a,b);}
static void base(unsigned mode,int n,unsigned type,const void *offset,int vertex){uint64_t *p=event(3);p[1]=mode;p[2]=(uint32_t)n;p[3]=type;p[4]=(uintptr_t)offset;p[5]=(uint32_t)vertex;}
static void texture(unsigned a,unsigned b){uint64_t *p=event(4);p[1]=a;p[2]=b;}
static void active(unsigned a){event(5)[1]=a;}
static int64_t sub_1400D2B90(int a){event(6)[1]=a;return 0;}
static int64_t program(unsigned a){event(7)[1]=a;return 0;}
static void uniform3(unsigned a,int n,const void *v){event(8)[1]=a;}
static void matrix4(unsigned a,int n,unsigned char t,const void *v){event(9)[1]=a;}
static void uniform1(unsigned a,int v){event(10)[1]=a;}
static int64_t on(unsigned a){event(11)[1]=a;return 0;}
static double off(unsigned a){event(12)[1]=a;return 0;}
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
#define qword_1404044A8 attribute
#define qword_140404170 c_buffer
#define unk_1404047F0 base
#define qword_140404050 texture
#define unk_140404098 active
#define qword_1404042E0 program
#define qword_140404338 uniform3
#define qword_140404378 matrix4
#define qword_140404308 uniform1
#define qword_140404238 on
#define qword_140404230 off
'''.encode()
        for rva in (0xd2c90, 0xd22e0, 0x11ddb0):
            code += region(source, rva)[2]
        code += b'\nint main(void){\n' + collision.CollisionQuery.native_setup(self, pe, [(0xd2c90,0x11a),(0xd22e0,0x33a),(0x11ddb0,0x2e2)], (0xd2000,0x404000))
        for index, size in [(271838021,0x70000),(283791480,0x4000),
                            (271166189,0x12000),(272034690,0xd2000),
                            (83200503,4096),(73994484,0x1c000),
                            (312226123,4096),(321964387,4096),
                            (309078344,0xa000),(318816608,0xa000),
                            (421784738,4096),(283827814,0x5000),
                            (284024944,4096),(312324428,4096),(322062692,4096)]:
            page = (0x404a6c+index*4)&~4095
            code += f'if(!VirtualAlloc(image+{page},{size+4096},MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{page},{size+4096},MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        for rva, fn in [(0x4044a8,'attribute'),(0x404170,'buffer'),(0x4047f0,'base'),(0x404050,'texture'),(0x404098,'active'),(0x4042e0,'program'),(0x404338,'uniform3'),(0x404378,'matrix4'),(0x404308,'uniform1'),(0x404238,'on'),(0x404230,'off')]:
            code += f'*(void **)(image+{rva})={fn};\n'.encode()
        code += b'jump(image+0xd2b90,sub_1400D2B90);\n'
        code += r'''
 unsigned saved_calls;uint64_t saved_trace[8192][9];unsigned seed=42,checked=0;
 uint32_t saved_state[16];
 for(unsigned sample=0;sample<512;sample++)for(unsigned handler=0;handler<3;handler++){
  for(unsigned native=0;native<2;native++){
   dword_140404A6C=(void*)((native?image:working)+0x404a6c);
   dword_140404A6C[312324428]=0;dword_140404A6C[322062692]=0;
   // Distinct vertex and element block IDs/offsets expose table mixups.
   dword_140404A6C[309078344]=0x8001;dword_140404A6C[318816608]=0x1237;
   for(unsigned j=0;j<4;j++){
    dword_140404A6C[312226123+6*j]=j;
    dword_140404A6C[312226124+6*j]=(j+sample)%4;
    dword_140404A6C[321964387+6*j]=3-j;
    dword_140404A6C[321964388+6*j]=(j+2*sample)%4;
    for(unsigned k=0;k<4;k++){
     dword_140404A6C[309078348+3074*j+3*k]=0x80000103u+(sample*0x1234567u)+k*73+j*43;
     dword_140404A6C[318816612+3074*j+3*k]=0xffffffe3u+sample*0x102345u+k*81+j*29;
    }
    dword_140404A6C[83200503+j]=j;dword_140404A6C[83200503+780+j]=1;
    dword_140404A6C[73994484+8969*j]=3;
    for(unsigned k=0;k<3;k++){
     dword_140404A6C[73994485+8969*j+3*k]=k;
     dword_140404A6C[73994486+8969*j+3*k]=sample*0x7654321u+17+k;
     dword_140404A6C[73994487+8969*j+3*k]=sample*0x2468aceu+k*11;
    }
    dword_140404A6C[421784738+46*j]=(sample>>(j+2))&1;
    dword_140404A6C[283827814+4*j]=j;
    dword_140404A6C[283827815+4*j]=j+1;
    dword_140404A6C[283791480+j]=j;
    dword_140404A6C[283791752+j]=j;
    dword_140404A6C[283793813+2*j]=900+j;dword_140404A6C[283793814+2*j]=1000+j;
    dword_140404A6C[271838021+24582*j]=6;
    dword_140404A6C[271838022+24582*j]=sample*0x10234567u+j;
    dword_140404A6C[271838024+24582*j]=sample*0x87654321u+j*3;
   }
   dword_140404A6C[283827820]=2;dword_140404A6C[283827821]=3;
   dword_140404A6C[283830718]=4;
   for(unsigned j=0;j<5;j++)dword_140404A6C[284024944+44*j]=200+j;
   for(unsigned j=0;j<64;j++)dword_140404A6C[271166189+257*j]=0;
   dword_140404A6C[271166189]=1;
   for(unsigned j=0;j<256;j++){dword_140404A6C[271166190+j]=j%4;dword_140404A6C[272034690+13*j+j%4]=j<4?j:~0u;}
   calls=0;memset(trace,0,sizeof trace);
   if(handler==0){if(native)((void(*)(int,int,int64_t))(image+0xd2c90))(sample%8,sample%4,0);else sub_1400D2C90(sample%8,sample%4,0);}
   if(handler==1){if(native)((void(*)(int))(image+0xd22e0))(1);else sub_1400D22E0(1);}
   if(handler==2){if(native)((void(*)(int,int))(image+0x11ddb0))(0,sample&1);else sub_14011DDB0(0,sample&1);}
   if(!native){saved_calls=calls;memcpy(saved_trace,trace,sizeof trace);}
   else if(saved_calls!=calls||memcmp(saved_trace,trace,sizeof trace)){
    printf("base draw mismatch sample %u handler %u calls %u/%u\n",sample,handler,saved_calls,calls);
    for(unsigned c=0;c<calls;c++)for(unsigned j=0;j<9;j++)if(saved_trace[c][j]!=trace[c][j])printf("event %u tag %llu word %u C=%llx N=%llx\n",c,(unsigned long long)trace[c][0],j,(unsigned long long)saved_trace[c][j],(unsigned long long)trace[c][j]);return 1;
   }
  }checked++;
 }
 printf("%u complete native terrain/building draw traces pass: all five draw arguments, separate VBO/EBO tables, signed truncation and 32-bit wrap; GPU calls controlled\n",checked);return 0;
}
'''.encode()
        out = PROJECT/'reports/client-base-vertex-20261004';out.mkdir(parents=True,exist_ok=True)
        path=out/'draws.c';path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-Wno-error=incompatible-pointer-types','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
