"""Compare complete cell ray intersections with the original CPU implementation."""
import subprocess
import unittest
from client_sources import read_client_source
from repair_client_menu_actions import PROJECT, pinned_pe, region
import test_client_collision_query as collision_query


class CellRayGeometry(unittest.TestCase):
    def test_native_intersections(self):
        source = read_client_source()
        code = r'''
#include <math.h>
#include "export_compat.h"
static unsigned char *image,*working;
static unsigned *dword_140404A6C;
static int sr_geometry_tables[128];
#define dword_1402B34F0 (sr_geometry_tables)
#define dword_1402B3558 (sr_geometry_tables+26)
#define dword_1402B3668 (sr_geometry_tables+94)
'''.encode()
        for rva in (0x779f0, 0x77fa0, 0xdc650):
            code += region(source, rva)[2]
        code += b'\nint main(void){\n'
        code += collision_query.CollisionQuery.native_setup(self, pinned_pe(),
                [(0x779f0, 0x140), (0x77fa0, 0x28c), (0xdc650, 0x2f0)])
        code += r'''
memcpy(sr_geometry_tables,image+0x2b34f0,sizeof sr_geometry_tables);
unsigned page=(0x404a6c+73007008u*4)&~4095u;
if(!VirtualAlloc(working+page,4096,MEM_COMMIT,PAGE_READWRITE))return 9;
unsigned checked=0,hits=0;
for(unsigned sample=0;sample<17;sample++)for(unsigned axis=0;axis<3;axis++)
for(unsigned reverse=0;reverse<2;reverse++)for(unsigned scale=0;scale<3;scale++)
for(unsigned mask=0;mask<4;mask++){
 int cell[3]={sample&1?1024:0,sample&2?24:0,sample&4?-17:0};
 float size=scale==0?.25f:scale==1?1:4;
 float a[3],b[3];for(unsigned i=0;i<3;i++)a[i]=b[i]=(cell[i]+.5f)*size;
 a[(axis+1)%3]+=(sample%5-2.0f)*.125f*size;
 b[(axis+1)%3]=a[(axis+1)%3];
 a[axis]=(cell[axis]-(reverse?-.0f:1.0f)+(reverse?2.0f:0))*size;
 b[axis]=(cell[axis]+.5f)*size;
 if(sample==16)b[axis]=a[axis]+size*.125f;
 unsigned faces=mask==0?63:mask==1?3:mask==2?12:48;
 int material=(int)(faces|(faces<<6));
 float saved[11];unsigned saved_hit=0,saved_face=0;
 for(unsigned native=0;native<2;native++){
  dword_140404A6C=(void*)((native?image:working)+0x404a6c);
  dword_140404A6C[73007008]=123;
  float out[11]={111,2,3,4,222,5,6,7,333,1,444};
  unsigned hit=native?((unsigned(*)(float*,float*,float*,float*,float*,int*,int,float))(image+0xdc650))(out+1,out+5,out+9,a,b,cell,material,size):sub_1400DC650(out+1,(intptr_t)(out+5),out+9,a,b,cell,material,size);
  if(!native){memcpy(saved,out,sizeof out);saved_hit=hit;saved_face=dword_140404A6C[73007008];}
  else if(saved_hit!=hit||saved_face!=dword_140404A6C[73007008]||memcmp(saved,out,sizeof out)){
   printf("cell ray mismatch sample=%u axis=%u reverse=%u scale=%u mask=%u hit=%u/%u face=%u/%u\n",sample,axis,reverse,scale,mask,saved_hit,hit,saved_face,dword_140404A6C[73007008]);
   for(unsigned i=0;i<11;i++)if(memcmp(saved+i,out+i,4))printf("word %u C=%a native=%a\n",i,saved[i],out[i]);return 1;
  }if(native)hits+=hit;
 }checked++;
}
if(!hits)return 2;
printf("%u native cell rays pass (%u hits): all axes, masks, scales, translated cells, exact hit/normal/distance/face and output guards; original triangle and plane code included\n",checked,hits);return 0;
}
'''.encode()
        out = PROJECT / 'reports/player-hud-recovery-20261006/cell-ray'
        out.mkdir(parents=True, exist_ok=True)
        path = out / 'geometry.c'
        path.write_bytes(code)
        exe = path.with_suffix('.exe')
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', '-O0',
            '-std=gnu11', '-fno-strict-aliasing', '-ffp-contract=off',
            '-Wno-error=incompatible-pointer-types', '-I', str(PROJECT/'src/client'),
            '-I', str(PROJECT/'src/rebuild'), str(path), '-o', str(exe)],
            capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)
        result = subprocess.run([str(exe)], capture_output=True, text=True, timeout=30)
        (out/'stdout.txt').write_text(result.stdout+result.stderr)
        self.assertEqual(result.returncode, 0, result.stdout+result.stderr)


if __name__ == '__main__':
    unittest.main()
