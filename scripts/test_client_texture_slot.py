"""Compare native texture packing returns, records, pixels and GL uploads."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_startup_arguments import PROJECT
from repair_client_texture_slot import repair


class TextureSlot(unittest.TestCase):
    def test_native_packing(self):
        source = read_client_source()
        marker = b'//----- (0000000140068FC0)'
        a = source.index(marker); b = source.index(b'//----- (', a + len(marker))
        if b'return (unsigned int)v45;' not in source[a:b]:
            source, _ = repair(source)
            a = source.index(marker); b = source.index(b'//----- (', a + len(marker))
        pe = pefile.PE(str(PROJECT.parent / 'subrosa.exe'), fast_load=True)
        c = r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
#include "client_resource_layout.h"
static unsigned char *image; static unsigned *dword_140404A6C;
static uint32_t pixels[4096], snapshot[4096], records[4096*12+16];
static unsigned load_ok, iw, ih, calls; static uint64_t trace[32], saved[32];
static __int64 sub_140079840(char *path){
 if(strcmp(path,"fixture.png"))abort();trace[calls++]=1;
 dword_140404A6C[468765293]=iw;dword_140404A6C[468765294]=ih;
 for(unsigned j=0;j<iw*ih;j++)dword_140404A6C[468765295+j]=j*65537u+0xFF003377u;
 return load_ok;
}
static void sub_1401FCD30(void *p,unsigned v,size_t n){memset(p,v,n);}
static void bind_texture(unsigned target,unsigned id){trace[calls++]=target;trace[calls++]=id;}
static void upload(unsigned target,int level,int x,int y,int w,int h,unsigned fmt,unsigned type,const void *p){
 trace[calls++]=target;trace[calls++]=level;trace[calls++]=x;trace[calls++]=y;
 trace[calls++]=w;trace[calls++]=h;trace[calls++]=fmt;trace[calls++]=type;
 if(p!=pixels)abort();trace[calls++]=0xabcdef;
}
static void (*qword_140404050)(unsigned,unsigned)=bind_texture;
static float *flt_140384000;
'''.encode() + source[a:b] + r'''
static void thunk(unsigned char *p,void *f){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&f,8);p[10]=0xff;p[11]=0xe0;}
int main(void){
 image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
 dword_140404A6C=(void*)(image+0x404a6c);flt_140384000=(void*)(image+0x384000);
'''.encode()
        pages = {0x68000, 0x69000, 0x79000, 0x1f8000, 0x1fc000, 0x302000, 0x404000,
                 0x70037000, 0x70038000}
        atlas = 0x404a6c + 4*433435853
        pages.update(range(atlas & ~4095, (atlas + 3*0x30038 + 4095) & ~4095, 4096))
        for page in sorted(pages):
            c += f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
            data = pe.get_data(page, 4096)
            if data:
                c += ('{unsigned char b[]={' + ','.join(map(str, data)) + f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        c += r'''
 thunk(image+0x79840,sub_140079840);thunk(image+0x1fcd30,sub_1401FCD30);
 image[0x1f8b20]=0xc3; /* original caller's compiler-cookie boundary, preserve RAX */
 *(void **)(image+0x404050)=bind_texture;*(void **)(image+0x404048)=upload;
 unsigned count=0;
 for(unsigned bank=0;bank<3;bank++)for(unsigned mode=0;mode<6;mode++)
 for(iw=1;iw<=9;iw+=2)for(ih=1;ih<=9;ih+=2){
  /* Native scratch beyond atlas width is uninitialized: exclude wider images. */
  if(mode==2 && iw+2>4)continue;
  unsigned off=49166*bank; uint64_t result=0;unsigned saved_calls=0;
  for(unsigned original=0;original<2;original++){
   unsigned *r=&dword_140404A6C[433435853+off];memset(r,0,(4096*12+16)*4);
   for(unsigned j=0;j<4096;j++)pixels[j]=0xa5a50000u+j;
   calls=0;memset(trace,0,sizeof trace);load_ok=mode!=1;r[0]=mode==2?4:32;r[1]=mode==3?4:32;
   r[8]=73+bank;*(void **)&r[10]=pixels;r[12]=mode==0?0:(mode==4?4096:2);
   if(r[12]==2){r[13]=0;r[14]=0;r[15]=mode==5?32:7;r[16]=mode==5?32:8;
    r[25]=7;r[26]=0;r[27]=mode==5?0:9;r[28]=mode==5?0:4;}
   uint64_t got=original?((uint64_t(*)(int,char*))(image+0x68fc0))(bank,"fixture.png"):
                        sub_140068FC0(bank,"fixture.png");
   if(!original){result=got;saved_calls=calls;memcpy(saved,trace,sizeof trace);
    memcpy(snapshot,pixels,sizeof pixels);memcpy(records,r,sizeof records);}
   else if(got!=result||calls!=saved_calls||memcmp(saved,trace,sizeof trace)||
           memcmp(snapshot,pixels,sizeof pixels)||memcmp(records,r,sizeof records)){
    printf("mismatch bank=%u mode=%u w=%u h=%u C=%llu native=%llu\n",bank,mode,iw,ih,result,got);return 1;}
  }count++;
 }
 printf("%u native texture-slot/packing/record/pixel/upload comparisons pass; image decoder, GL and compiler-cookie boundaries controlled\n",count);return 0;
}
'''.encode()
        out = PROJECT / 'reports/client-texture-slot-fixture-20261003'
        out.mkdir(parents=True, exist_ok=True)
        fixture = out / 'slot.c'; fixture.write_bytes(c); exe = fixture.with_suffix('.exe')
        r = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', '-O0', '-std=gnu11',
                            '-fno-strict-aliasing', '-I', str(PROJECT/'src/client'),
                            '-I', str(PROJECT/'src/recovered'),
                            str(fixture), '-o', str(exe)], capture_output=True, text=True)
        self.assertEqual(r.returncode, 0, r.stderr)
        r = subprocess.run([str(exe)], capture_output=True, text=True, timeout=30)
        (out / 'stdout.txt').write_text(r.stdout)
        self.assertEqual(r.returncode, 0, r.stdout + r.stderr)


if __name__ == '__main__':
    unittest.main()
