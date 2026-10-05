"""Compare native rotation integration and matrix rotation at a shared trig boundary."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT, pinned_pe, region
from repair_client_rotation_step import repair


class RotationStep(unittest.TestCase):
    def test_native_state_and_calls(self):
        source = read_client_source()
        if b'float sr_rotation_axis[3];' not in region(source, 0x12b2d0)[2]:
            source, _ = repair(source)
        pe = pinned_pe()
        code = r'''#include <math.h>
#include "export_compat.h"
static unsigned char *image;
static __m128 shared_trig(float angle){return _mm_set_ps(0,0,cosf(angle),sinf(angle));}
static __m128 sub_1401F8AC0(double angle,int64_t unused,double other){float a;memcpy(&a,&angle,4);return shared_trig(a);}
'''.encode()
        code += region(source, 0x7b2a0)[2]
        code += r'''
struct rotation_call {float before[9],axis[3],angle,after[9];};
static struct rotation_call trace[8];static unsigned calls,native_leaf;
static void recorded(float *matrix,float *axis,float angle){
 if(calls>=8)abort();struct rotation_call *t=trace+calls++;
 memcpy(t->before,matrix,36);memcpy(t->axis,axis,12);t->angle=angle;
 if(native_leaf)((void(*)(float*,float*,float))(image+0x7b2a0))(matrix,axis,angle);
 else {double bits=0;memcpy(&bits,&angle,4);sub_14007B2A0((intptr_t)matrix,axis,bits);}
 memcpy(t->after,matrix,36);
}
static void c_recorded(int64_t matrix,float *axis,double angle){float a;memcpy(&a,&angle,4);recorded((float*)matrix,axis,a);}
static void jump(unsigned char *at,void *fn){at[0]=0xff;at[1]=0x25;memset(at+2,0,4);memcpy(at+6,&fn,8);}
'''.encode()
        code += region(source, 0x12b2d0)[2].replace(b'sub_14007B2A0(', b'c_recorded(')
        code += r'''
int main(void){
 image=VirtualAlloc(0,0x400000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 8;
'''.encode()
        # Original function, transform and constants; cookie checker replaced
        # by RET solely in the native fixture, since the C frame is different.
        for page in (0x7b000, 0x12b000, 0x1f8000, 0x278000, 0x279000, 0x300000, 0x301000, 0x302000, 0x310000):
            code += f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;\n'.encode()
            code += ('{unsigned char b[]={'+','.join(map(str, pe.get_data(page, 4096)))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        for site in (0x12b59d, 0x12b847, 0x12baa4, 0x12bcc6):
            code += f'{{int32_t offset=0x310000-{site+5};memcpy(image+{site+1},&offset,4);}}\n'.encode()
        code += r'''
 jump(image+0x310000,recorded);jump(image+0x1f8ac0,shared_trig);image[0x1f8b20]=0xc3;
 unsigned seed=0x8462791,cases=0;float scales[]={0,0x1p-18f,0x1p-16f,0x1p-14f,.001f,.01f,.1f,1.0f};
 float initial[4][16],saved[4][16],arrays[4][16];struct rotation_call saved_trace[8];unsigned saved_calls=0,saved_flags=0;
 for(unsigned mode=0;mode<4;mode++)for(unsigned shape=0;shape<4;shape++)for(unsigned scale=0;scale<8;scale++)for(unsigned n=0;n<32;n++)for(unsigned alias=0;alias<3;alias++){
  for(unsigned side=0;side<4;side++)for(unsigned i=0;i<16;i++)initial[side][i]=12345.25f;
  for(unsigned i=0;i<9;i++)initial[0][i+1]=shape==0?(i%4==0?1:0):shape==1?(i%4==0?-1:0):shape==2?(float)(int)(i%3-1)*.5f:(i%4==0?.999f:.015f);
  for(unsigned i=0;i<3;i++){seed=seed*1664525u+1013904223u;initial[1][i+1]=((int)(seed%2049)-1024)*scales[scale]*.03125f;initial[2][i+1]=-.75f;initial[3][i+1]=n%4==0?0:n%4==1?1:.2f+i*.15f;}
  for(unsigned native=0;native<2;native++){
   memcpy(arrays,initial,sizeof arrays);calls=0;native_leaf=native;memset(trace,0,sizeof trace);_mm_setcsr(0x1f80|(mode<<13));
   float *out=alias==1?arrays[1]+1:alias==2?arrays[3]+1:arrays[2]+1;
   if(native)((void(*)(unsigned*,float*,float*,float*))(image+0x12b2d0))((unsigned*)(arrays[0]+1),arrays[1]+1,out,arrays[3]+1);
   else sub_14012B2D0((unsigned*)(arrays[0]+1),arrays[1]+1,out,arrays[3]+1);
   unsigned flags=_mm_getcsr();
   if(!native){memcpy(saved,arrays,sizeof arrays);memcpy(saved_trace,trace,sizeof trace);saved_calls=calls;saved_flags=flags;}
   else if(memcmp(saved,arrays,sizeof arrays)||saved_calls!=calls||memcmp(saved_trace,trace,sizeof trace)||saved_flags!=flags){
    printf("rotation mismatch mode %u shape %u scale %u n %u alias %u calls %u/%u flags %x/%x\n",mode,shape,scale,n,alias,saved_calls,calls,saved_flags,flags);
    for(unsigned side=0;side<4;side++)for(unsigned i=0;i<16;i++)if(memcmp(&saved[side][i],&arrays[side][i],4))printf("state %u/%u C=%a N=%a\n",side,i,saved[side][i],arrays[side][i]);
    for(unsigned c=0;c<calls;c++){float *l=(float*)&saved_trace[c],*r=(float*)&trace[c];for(unsigned i=0;i<22;i++)if(memcmp(l+i,r+i,4))printf("call %u/%u C=%a N=%a\n",c,i,l[i],r[i]);}return 1;
   }
  }cases++;
 }
 printf("%u native rotation integration cases pass; matrix/output bits, axis/angle/call order, input guards, aliases and four MXCSR modes; shared sine/cosine boundary\n",cases);return 0;
}
'''.encode()
        out = PROJECT/'reports/client-rotation-step-20261004'
        out.mkdir(parents=True, exist_ok=True)
        fixture = out/'rotation.c'
        fixture.write_bytes(code)
        exe = fixture.with_suffix('.exe')
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-ffp-contract=off','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result = subprocess.run([str(exe)],capture_output=True,text=True,timeout=60)
        (out/'stdout.txt').write_text(result.stdout,encoding='utf-8')
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
