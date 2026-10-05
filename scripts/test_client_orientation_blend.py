"""Compare recovered complete orientation blending and its conversion leaves."""
import subprocess
from client_sources import read_client_source
import unittest
from repair_client_menu_actions import PROJECT,pinned_pe,region


class OrientationBlend(unittest.TestCase):
    def test_native_matrix_bits_and_flags(self):
        source=read_client_source();pe=pinned_pe()
        code=b'#include <math.h>\n#include "export_compat.h"\ntypedef uint64_t uint64;\n'
        for name in ('xmmword_140279870','xmmword_140279700','xmmword_140279490'):
            code+=('static __int128 '+name+' __attribute__((aligned(16)));\n').encode()
        for rva in (0x10e370,0x11c340,0xc2f90):code+=region(source,rva)[2]
        code+=r'''
static double container(float x){double bits=0;memcpy(&bits,&x,4);return bits;}
static void matrix(float *m,const double *q){
 double x=q[0],y=q[1],z=q[2],w=q[3];
 m[0]=1-2*(y*y+z*z);m[1]=2*(x*y-z*w);m[2]=2*(x*z+y*w);
 m[3]=2*(x*y+z*w);m[4]=1-2*(x*x+z*z);m[5]=2*(y*z-x*w);
 m[6]=2*(x*z-y*w);m[7]=2*(y*z+x*w);m[8]=1-2*(x*x+y*y);
}
int main(void){
 unsigned char *image=VirtualAlloc(0,0x400000,MEM_RESERVE,PAGE_NOACCESS);
 if(!image)return 8;
'''.encode()
        for page in (0xc2000,0xc3000,0x10e000,0x11c000,0x278000,0x279000):
            code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 9;\n'.encode()
            code+=('{unsigned char b[]={'+','.join(map(str,pe.get_data(page,4096)))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        for rva in (0x279870,0x279700,0x279490):code+=f'memcpy(&xmmword_{0x140000000+rva:X},image+{rva},16);\n'.encode()
        code+=r'''
 double quats[10][4]={{0,0,0,1},{1,0,0,0},{0,1,0,0},{0,0,1,0},
 {1,0,0,1},{0,1,0,1},{0,0,1,1},{1,2,3,4},{1,0,0,.087488663525924},{-1,0,0,.087488663525924}};
 float times[]={0,.25f,.5f,.75f,1,-.25f,1.25f};
 for(unsigned i=0;i<10;i++){double n=0;for(unsigned j=0;j<4;j++)n+=quats[i][j]*quats[i][j];n=sqrt(n);for(unsigned j=0;j<4;j++)quats[i][j]/=n;}
 unsigned cases=0,saved_flags=0;float saved[3][11];
 for(unsigned a=0;a<10;a++)for(unsigned b=0;b<10;b++)for(unsigned ti=0;ti<7;ti++)for(unsigned alias=0;alias<3;alias++){
  for(unsigned native=0;native<2;native++){
   float arrays[3][11];for(unsigned side=0;side<3;side++)for(unsigned i=0;i<11;i++)arrays[side][i]=12345.25f;
   matrix(arrays[0]+1,quats[a]);matrix(arrays[1]+1,quats[b]);
   float *out=arrays[alias==1?0:alias==2?1:2]+1;
   _mm_setcsr(0x1f80);
   if(native)((void(*)(float*,float*,float*,float))(image+0xc2f90))(out,arrays[0]+1,arrays[1]+1,times[ti]);
   else sub_1400C2F90(out,arrays[0]+1,arrays[1]+1,container(times[ti]));
   unsigned flags=_mm_getcsr();
   if(!native){saved_flags=flags;memcpy(saved,arrays,sizeof saved);}
   else if(saved_flags!=flags||memcmp(saved,arrays,sizeof saved)){
    printf("blend %u/%u time %u alias %u flags C=%x N=%x\n",a,b,ti,alias,saved_flags,flags);
    for(unsigned side=0;side<3;side++)for(unsigned i=0;i<11;i++)if(memcmp(&saved[side][i],&arrays[side][i],4))printf("side %u word %u C=%a N=%a\n",side,i,saved[side][i],arrays[side][i]);return 1;
   }
  }cases++;
 }
 printf("%u complete native orientation blend cases pass; both conversion leaves, matrix bits, MXCSR, guards and three aliases compared; finite rotations\n",cases);return 0;
}
'''.encode()
        out=PROJECT/'reports/client-orientation-blend-20261004';out.mkdir(parents=True,exist_ok=True)
        fixture=out/'blend.c';fixture.write_bytes(code);exe=fixture.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/rebuild'),str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout,encoding='utf-8')
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)


if __name__=='__main__':unittest.main()
