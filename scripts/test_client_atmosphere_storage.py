"""Check renderer data and terrain lighting against the pinned native client."""
import re
import subprocess
import unittest

from client_sources import read_client_source
from repair_client_menu_actions import PROJECT, pinned_pe, region
import test_client_collision_query as collision_query


class RendererStorage(unittest.TestCase):
    def run_fixture(self, name, code):
        out = PROJECT / 'reports/renderer-recovery-20261005/tests'
        out.mkdir(parents=True, exist_ok=True)
        path = out / (name + '.c')
        path.write_bytes(code)
        exe = path.with_suffix('.exe')
        result = subprocess.run([
            'C:/Users/junin/mingw64/bin/gcc.exe', '-O0', '-std=gnu11',
            '-fno-strict-aliasing', '-ffp-contract=off',
            '-I', str(PROJECT / 'src/client'), '-I', str(PROJECT / 'src/rebuild'),
            str(path), '-o', str(exe)
        ], capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)
        result = subprocess.run([str(exe)], capture_output=True, text=True, timeout=30)
        (out / (name + '-stdout.txt')).write_text(result.stdout, encoding='utf-8')
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)

    def test_native_atmosphere_block_and_aliases(self):
        pe = pinned_pe()
        data = (PROJECT / 'src/client/client_data.c').read_bytes()
        start = data.index(b'_Alignas(16) const uint32_t sr_atmosphere_parameters')
        end = data.index(b'\n);', start) + len(b'\n);')
        code = b'#include "export_compat.h"\n' + data[start:end]
        code += b'\nextern unsigned char unk_1402F61B8,unk_1402F61C8;\n'
        code += b'extern uint32_t dword_1402F61BC,dword_1402F61C4;\n'
        original = pe.get_data(0x2f61b8, 32)
        code += (b'int main(void){unsigned char native[]={' +
                 ','.join(map(str, original)).encode() + b'};\n')
        code += b'''
 if(memcmp(&unk_1402F61B8,native,16)||memcmp(&unk_1402F61C8,native+16,12))return 1;
 if((char *)&dword_1402F61BC-(char *)&unk_1402F61B8!=4)return 2;
 if((char *)&dword_1402F61C4-(char *)&unk_1402F61B8!=12)return 3;
 if((char *)&unk_1402F61C8-(char *)&unk_1402F61B8!=16)return 4;
 if(memcmp(&dword_1402F61BC,native+4,4)||memcmp(&dword_1402F61C4,native+12,4))return 5;
 puts("Native atmosphere vec4, wavelength vec3, and both scalar aliases match original bytes");return 0;}
'''
        self.run_fixture('atmosphere', code)

    def test_native_terrain_lighting_uploads(self):
        pe = pinned_pe()
        body = region(read_client_source(), 0x123f80)[2]
        code = b'''#include "export_compat.h"
static unsigned char *image,*working;static unsigned *dword_140404A6C;
static uint32_t captured[3][4];static unsigned calls,draws;
static uint64_t ignore(){return 0;}
static void uniform(unsigned loc,unsigned n,const void *p){if(calls>=3||n!=1)abort();captured[calls][0]=loc;memcpy(captured[calls++]+1,p,12);}
static uint64_t terrain(int i){if(i!=(int)draws++)abort();return 0;}
static void jump(unsigned char *p,void *fn){p[0]=0xff;p[1]=0x25;memset(p+2,0,4);memcpy(p+6,&fn,8);}
'''
        names = sorted(set(re.findall(rb'\b((?:sub|qword|unk)_140[0-9A-Fa-f]+)\(', body)) - {b'sub_140123F80'})
        for name in names:
            code += b'static uint64_t (*' + name + b')();\n'
        code += body + b'\nint main(void){\n'
        indices = [71738165,71738174,284550403,284545205,284545211,
                   431564565,283830715,283830718,284024944,451221642]
        pages = {(0x404a6c + i * 4) & ~4095 for i in indices} | {0xd2000,0x404000}
        code += collision_query.CollisionQuery.native_setup(self, pe, [(0x123f80, 0x22e)], tuple(pages))
        for name in names:
            rva = int(name.decode().split('_')[1], 16) - 0x140000000
            cb = 'uniform' if rva == 0x404338 else 'terrain' if rva == 0xd2b90 else 'ignore'
            code += name + f'=(void *){cb};\n'.encode()
            if name.startswith(b'sub_'):
                code += f'jump(image+{rva},{cb});\n'.encode()
            else:
                code += f'*(void **)(image+{rva})=(void *){cb};\n'.encode()
        code += b'*(void **)(image+0x4980d60)=(void *)ignore;\n'
        code += b'''
 dword_140404A6C=(void *)(image+0x404a6c);
 for(unsigned i=0;i<4;i++)dword_140404A6C[283830715+i]=0;
 dword_140404A6C[71738170]=7;dword_140404A6C[71738171]=11;dword_140404A6C[71738172]=19;
 uint32_t seed=0x921ed413,saved[3][4];unsigned cases=0;
 for(unsigned sample=0;sample<1024;sample++)for(unsigned mode=0;mode<2;mode++){
  for(unsigned i=0;i<3;i++){
   seed=seed*1664525u+1013904223u;float x=((int)(seed%8193)-4096)*.000244140625f;
   memcpy(dword_140404A6C+284545205+i,&x,4);
   seed=seed*1664525u+1013904223u;x=((int)(seed%8193)-4096)*.000244140625f;
   memcpy(dword_140404A6C+284545209+i,&x,4);
   memcpy(dword_140404A6C+284550403+i,&x,4);
  }
  for(unsigned native=0;native<2;native++){
   calls=draws=0;memset(captured,0,sizeof captured);
   if(native)((void(*)(int))(image+0x123f80))(mode);else sub_140123F80(mode);
   if(draws!=64||calls!=(mode?0:3))return 2;
   if(!native)memcpy(saved,captured,sizeof saved);
   else if(memcmp(saved,captured,sizeof saved)){printf("Terrain lighting mismatch %u mode %u\\n",sample,mode);return 1;}
  }cases++;
 }
 printf("%u native terrain pass cases match all RGB lighting uploads; GL and tile draw callbacks controlled\\n",cases);return 0;}
'''
        self.run_fixture('terrain-light', code)


if __name__ == '__main__':
    unittest.main()
