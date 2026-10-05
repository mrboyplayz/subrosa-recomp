"""Compare the preview's viewport/projection with the pinned native routine."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT, pinned_pe, region
from repair_client_character_preview import repair
import test_client_collision_query as collision


class CharacterPreview(unittest.TestCase):
    def run_fixture(self, name, code):
        out = PROJECT/'reports/client-character-preview-20261004'
        out.mkdir(parents=True, exist_ok=True)
        path = out/(name+'.c'); path.write_bytes(code); exe = path.with_suffix('.exe')
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', '-O0', '-std=gnu11', '-fno-strict-aliasing', '-ffp-contract=off', '-Wno-error=incompatible-pointer-types', '-I', str(PROJECT/'src/client'), '-I', str(PROJECT/'src/rebuild'), str(path), '-o', str(exe)], capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)
        result = subprocess.run([str(exe)], capture_output=True, text=True, timeout=30)
        (out/(name+'-stdout.txt')).write_text(result.stdout)
        self.assertEqual(result.returncode, 0, result.stdout+result.stderr)

    def test_native_projection(self):
        source = read_client_source()
        if b'sr_character_rotation' not in region(source, 0xfba50)[2]:
            source, _ = repair(source)
        pe = pinned_pe()
        code = b'''#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static int viewport[4];
static int64_t record_viewport(uint64_t x,uint64_t y,uint64_t w,uint64_t h){
 viewport[0]=(int)x;viewport[1]=(int)y;viewport[2]=(int)w;viewport[3]=(int)h;return 0;
}
static int64_t (*qword_140302FE8)(uint64_t,uint64_t,uint64_t,uint64_t)=record_viewport;
'''
        constants = (0x278d30, 0x278d80, 0x278d90, 0x278e20, 0x279490)
        for rva in constants:
            code += f'static __int128 xmmword_140{rva:06X};\n'.encode()
        code += region(source, 0x7a0e0)[2] + region(source, 0x7a570)[2]
        code += b'\nint main(void){\n' + collision.CollisionQuery.native_setup(self, pe, [(0x7a570, 0x349), (0x7a0e0, 0xe6)])
        for index in (137297755, 438291414, 431564485):
            page = (0x404a6c+index*4)&~4095
            code += f'if(!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        for rva in constants:
            code += f'memcpy(&xmmword_140{rva:06X},image+{rva},16);\n'.encode()
        code += b'*(void **)(image+0x302fe8)=record_viewport;\n'
        code += r'''
 unsigned saved[96];int saved_viewport[4];unsigned cases=0;
 const int dimensions[][4]={{1920,1080,1280,720},{1280,720,1280,720},{2560,1440,1920,1080},{800,600,640,480}};
 for(unsigned sample=0;sample<512;sample++)for(unsigned mode=0;mode<2;mode++){
  for(unsigned native=0;native<2;native++){
   dword_140404A6C=(void*)((native?image:working)+0x404a6c);
   const int *dim=dimensions[sample%4];
   for(unsigned j=0;j<96;j++)dword_140404A6C[431564485+j]=0x3e000000u+j*123u;
   dword_140404A6C[137297755]=dim[0];dword_140404A6C[137297756]=dim[1];
   dword_140404A6C[137297761]=dim[2];dword_140404A6C[137297762]=dim[3];
   dword_140404A6C[137297765]=mode;
   float logical[2]={1024,576};memcpy(dword_140404A6C+438291414,logical,sizeof logical);
   int x=sample<4?0:(int)(sample*7919u)-9000,y=sample<4?0:(int)(sample%103)-32;
   int w=sample<4?1024:200+(sample%991),h=sample<4?640:200+(sample%797);
   float clip_near=.125f,clip_far=1024,zoom=1+(sample%8)*.125f;
   if(native)((void(*)(int,int,int,int,float,float,float))(image+0x7a570))(x,y,w,h,clip_near,clip_far,zoom);
   else sub_14007A570(x,y,w,h,clip_near,clip_far,zoom);
   if(!native){memcpy(saved,dword_140404A6C+431564485,sizeof saved);memcpy(saved_viewport,viewport,sizeof viewport);}
   else if(memcmp(saved,dword_140404A6C+431564485,sizeof saved)||memcmp(saved_viewport,viewport,sizeof viewport)){
    printf("projection mismatch sample %u mode %u viewport %d,%d,%d,%d / %d,%d,%d,%d\n",sample,mode,
     saved_viewport[0],saved_viewport[1],saved_viewport[2],saved_viewport[3],viewport[0],viewport[1],viewport[2],viewport[3]);return 1;
   }
  }cases++;
 }
 printf("%u native projection cases pass: signed viewport, both presentation modes, wrapped coordinates and all six matrices\n",cases);return 0;
}
'''.encode()
        self.run_fixture('projection', code)

    def test_native_preview_draws(self):
        source = read_client_source()
        pe = pinned_pe()
        body = region(source, 0xfba50)[2]
        self.assertIn(b'sr_character_axis[3]', body, 'Regenerate the client after recovering the preview axis')
        code = r'''#include <math.h>
#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static uint32_t trace[128][24];static unsigned calls;
static uint32_t *event(unsigned tag){if(calls>=128)abort();uint32_t *p=trace[calls++];p[0]=tag;return p;}
static void one(unsigned tag,unsigned a){event(tag)[1]=a;}
static void two(unsigned tag,unsigned a,unsigned b){uint32_t *p=event(tag);p[1]=a;p[2]=b;}
static void enable(unsigned a){one(1,a);}static void disable(unsigned a){one(2,a);}
static void depth(unsigned a){one(3,a);}static void mask(unsigned char a){one(4,a);}
static void clear_color(float a,float b,float c,float d){float v[4]={a,b,c,d};memcpy(event(5)+1,v,sizeof v);}
static void clear(unsigned a){one(6,a);}static void program(unsigned a){one(7,a);}
static void active(unsigned a){one(8,a);}static void texture(unsigned a,unsigned b){two(9,a,b);}
static void uniform3(unsigned a,int n,const void *v){uint32_t *p=event(10);p[1]=a;p[2]=n;memcpy(p+3,v,12);}
static void matrix3(unsigned a,int n,unsigned char t,const void *v){uint32_t *p=event(11);p[1]=a;p[2]=n;p[3]=t;memcpy(p+4,v,36);}
static void matrix4(unsigned a,int n,unsigned char t,const void *v){uint32_t *p=event(12);p[1]=a;p[2]=n;p[3]=t;memcpy(p+4,v,64);}
static void attribute_on(unsigned a){one(13,a);}static void attribute_off(unsigned a){one(14,a);}
static void buffer(unsigned a,unsigned b){two(15,a,b);}static void c_buffer(unsigned a,unsigned b,int64_t unused){buffer(a,b);}
static void attribute(unsigned a,int n,unsigned t,unsigned char norm,int stride,const void *offset){uint32_t *p=event(16);p[1]=a;p[2]=n;p[3]=t;p[4]=norm;p[5]=stride;p[6]=(uint32_t)(uintptr_t)offset;}
static void color(unsigned a,const void *v){uint32_t *p=event(17);p[1]=a;memcpy(p+2,v,16);}
static void draw(unsigned a,int first,int n){uint32_t *p=event(18);p[1]=a;p[2]=first;p[3]=n;}
static void framebuffer(unsigned a,unsigned b){two(19,a,b);}
static void attachment(unsigned a,unsigned b,unsigned c,unsigned d,int level){uint32_t *p=event(20);p[1]=a;p[2]=b;p[3]=c;p[4]=d;p[5]=level;}
static void sub_14007A570(int x,int y,int w,int h,float n,float f,float z){
 uint32_t *p=event(21);p[1]=x;p[2]=y;p[3]=w;p[4]=h;float v[]={n,f,z};memcpy(p+5,v,sizeof v);
 for(unsigned j=0;j<96;j++){float value=j%17==0?1.0f:0.0f;memcpy(dword_140404A6C+431564485+j,&value,4);}
}
static void sub_14007BE20(float *p,unsigned *r){memcpy(event(22)+1,p,12);memcpy(trace[calls-1]+4,r,36);}
static void sub_14007BB00(void){event(23);}
static __m128 shared_trig(float angle){return _mm_set_ps(0,0,cosf(angle),sinf(angle));}
static __m128 sub_1401F8AC0(double bits,int64_t unused,double other){float a;memcpy(&a,&bits,4);return shared_trig(a);}
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
#define unk_140404718 attachment
#define qword_140302F58 depth
#define qword_1404042E0 program
#define unk_140404098 active
#define qword_140404050 texture
#define qword_140404338 uniform3
#define unk_140404370 matrix3
#define qword_140404378 matrix4
#define qword_140404238 attribute_on
#define qword_140404230 attribute_off
#define qword_140404170 c_buffer
#define qword_1404044A8 attribute
#define unk_140404470 color
#define qword_140302FF8 draw
#define unk_1404046F0 framebuffer
'''.encode()
        constants = (0x278d30, 0x278d80, 0x278e20, 0x279490, 0x2796c0)
        for rva in constants:
            code += f'static __int128 xmmword_140{rva:06X};\n'.encode()
        code += region(source, 0x7a0e0)[2] + region(source, 0x7b2a0)[2] + body
        code += b'\nint main(void){\n' + collision.CollisionQuery.native_setup(self, pe, [(0xfba50, 0xa24), (0x7b2a0, 0x22c), (0x7a0e0, 0xe6)], (0x7a000, 0x7b000))
        # Working globals and the dynamically indexed resource tables; GPU
        # calls and camera setup are controlled identically on both sides.
        for index, size in [(18215087,4096), (71737865,4096), (73991647,4096),
                            (283827702,4096), (283829862,8192), (284024502,8192),
                            (284545205,4096), (431564485,4096), (436582486,8192),
                            (283790134,0x5000), (178527462,0x40000)]:
            page = (0x404a6c+index*4)&~4095
            code += f'if(!VirtualAlloc(working+{page},{size},MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(image+{page},{size},MEM_COMMIT,PAGE_READWRITE))return 9;\n'.encode()
        for rva in constants:
            code += f'memcpy(&xmmword_140{rva:06X},image+{rva},16);\n'.encode()
        for rva, fn in [(0x7a570,'sub_14007A570'), (0x7be20,'sub_14007BE20'), (0x7bb00,'sub_14007BB00'), (0x1f8ac0,'shared_trig')]:
            code += f'jump(image+{rva},{fn});\n'.encode()
        for rva, fn in [(0x404718,'attachment'), (0x302f58,'depth'), (0x4042e0,'program'), (0x404098,'active'), (0x404050,'texture'), (0x404338,'uniform3'), (0x404370,'matrix3'), (0x404378,'matrix4'), (0x404238,'attribute_on'), (0x404230,'attribute_off'), (0x404170,'buffer'), (0x4044a8,'attribute'), (0x404470,'color'), (0x302ff8,'draw'), (0x4046f0,'framebuffer')]:
            code += f'*(void **)(image+{rva})={fn};\n'.encode()
        code += r'''
 unsigned saved_calls;uint32_t saved_trace[128][24];unsigned checked=0;
 for(unsigned sample=0;sample<256;sample++)for(unsigned gender=0;gender<2;gender++){
  for(unsigned native=0;native<2;native++){
   dword_140404A6C=(void*)((native?image:working)+0x404a6c);
   *(void **)(dword_140404A6C+18215103)=enable;*(void **)(dword_140404A6C+18215101)=disable;
   *(void **)(dword_140404A6C+18215099)=mask;*(void **)(dword_140404A6C+18215089)=clear_color;*(void **)(dword_140404A6C+18215087)=clear;
   for(unsigned j=0;j<500;j++)dword_140404A6C[71737865+j]=j+100;
   dword_140404A6C[73991647]=gender;dword_140404A6C[73991648]=sample%4;
   dword_140404A6C[73991649]=sample%6;dword_140404A6C[73991650]=sample%10;
   dword_140404A6C[73991651]=sample%9;dword_140404A6C[73991652]=sample%8;
   for(unsigned j=0;j<64;j++){
    dword_140404A6C[283827702+j]=j;
    dword_140404A6C[283790166+j]=j;
    dword_140404A6C[283793813+2*j]=1000+j;
    dword_140404A6C[178527462+908*j]=8;
    dword_140404A6C[178527465+908*j]=7+j;
   }
   unsigned texture_ids[]={283829862,283830721,283830724,283829872,283829873};
   for(unsigned j=0;j<5;j++){dword_140404A6C[texture_ids[j]]=j;dword_140404A6C[284024944+44*j]=2000+j;dword_140404A6C[436582486+42*j]=3000+j;}
   dword_140404A6C[283790134]=0;dword_140404A6C[283791765]=11;
   calls=0;memset(trace,0,sizeof trace);
   if(native)((void(*)(void))(image+0xfba50))();else sub_1400FBA50();
   if(!native){saved_calls=calls;memcpy(saved_trace,trace,sizeof trace);}
   else if(saved_calls!=calls||memcmp(saved_trace,trace,sizeof trace)){
    printf("preview mismatch sample %u gender %u calls %u/%u\n",sample,gender,saved_calls,calls);
    for(unsigned c=0;c<calls;c++)for(unsigned j=0;j<24;j++)if(saved_trace[c][j]!=trace[c][j])printf("event %u tag %u word %u C=%08x N=%08x\n",c,trace[c][0],j,saved_trace[c][j],trace[c][j]);return 1;
   }
  }checked++;
 }
 printf("%u complete native preview traces pass: head/hair resources, matrices, lights, colors, draw counts and GL state; camera and trig boundaries shared, GPU calls controlled\n",checked);return 0;
}
'''.encode()
        self.run_fixture('preview', code)


if __name__ == '__main__':
    unittest.main()
