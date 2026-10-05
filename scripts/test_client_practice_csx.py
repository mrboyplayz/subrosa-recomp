"""Compare the complete CSX opener on the four installed map archives."""
import subprocess
from client_sources import read_client_source
import unittest
import capstone
import pefile
from repair_client_startup_arguments import PROJECT


class PracticeCSX(unittest.TestCase):
    def test_installed_archives(self):
        source=read_client_source()
        marker=b'//----- (00000001401979D0)';a=source.index(marker);b=source.index(b'//----- (',a+10)
        body=source[a:b]
        self.assertNotIn(b'return sub_1401F8B20',body)
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);md.detail=True
        pages={0x197000,0x20b000,0x20c000,0x1fc000,0x1f8000,0x2b2000}
        for ins in md.disasm(pe.get_data(0x1979d0,0x1f4),0x1979d0):
            for op in ins.operands:
                if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:
                    pages.add((ins.address+ins.size+op.mem.disp)&~4095)
        state=0x404a6c+293512629*4;size=0x103030
        pages={p for p in pages if not (state&~4095)<=p<((state+size+4095)&~4095)}
        magic=int.from_bytes(pe.get_data(0x2b2314,4),'little')
        code=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
static unsigned *dword_140404A6C;
static unsigned dword_1402B2314;
static const char *fixture_path;
static unsigned opens,seeks,reads,clears;
static FILE *fixture_open(const char *name,const char *mode){if(strcmp(name,"test.csx")||strcmp(mode,"rb"))abort();opens++;return fopen(fixture_path,mode);}
static __int64 sub_14020B8D8(char *name,char *mode){return (intptr_t)fixture_open(name,mode);}
static size_t fixture_read(void *data,size_t size,size_t count,FILE *file){reads++;return fread(data,size,count,file);}
static size_t fread_sr(void *data,size_t size,size_t count,FILE *file){return fixture_read(data,size,count,file);}
static int fixture_seek(FILE *file,long offset,int origin){seeks++;return fseek(file,offset,origin);}
static int sub_14020C4A8(__int64 file,long offset,int origin){return fixture_seek((FILE *)(intptr_t)file,offset,origin);}
static size_t sub_14020CE0C(__int64 data,size_t size,size_t count,__int64 file){abort();return 0;}
static void *fixture_clear(void *data,int value,size_t size){clears++;return memset(data,value,size);}
static void *sub_1401FCD30(void *data,int value,size_t size){return fixture_clear(data,value,size);}
static void sub_1401977E0(int slot){FILE *file=*(FILE **)&dword_140404A6C[265228LL*slot+293512629];if(file)fclose(file);*(FILE **)&dword_140404A6C[265228LL*slot+293512629]=0;}
'''.encode()+body+r'''
static void thunk(unsigned char *p,void *f){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&f,8);p[10]=0xff;p[11]=0xe0;}
int main(int argc,char **argv){if(argc!=2)return 10;fixture_path=argv[1];unsigned char *image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS),*working=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image||!working)return 9;
'''.encode()
        for page in sorted(pages):
            code+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 8;\n'.encode()
            data=pe.get_data(page,4096)
            if data:code+=('{unsigned char b[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        lo=state&~4095;commit=((state+size+4095)&~4095)-lo
        code+=f'if(!VirtualAlloc(image+{lo},{commit},MEM_COMMIT,PAGE_READWRITE)||!VirtualAlloc(working+{lo},{commit},MEM_COMMIT,PAGE_READWRITE))return 8;\n'.encode()
        code+=f'dword_1402B2314={magic}u;\n'.encode()
        code+=r'''
thunk(image+0x20b8d8,fixture_open);thunk(image+0x20c0c8,fixture_read);thunk(image+0x20c4a8,fixture_seek);thunk(image+0x1977e0,sub_1401977E0);thunk(image+0x1fcd30,fixture_clear);image[0x1f8b20]=0xc3;
unsigned traces[2][4];unsigned archive_records=0,material_records=0;
for(unsigned native=0;native<2;native++){
 unsigned char *base=native?image:working;
 dword_140404A6C=(void *)(base+0x404a6c);
 memset(base+0x463ae140,0xa5,0x103030);
 opens=seeks=reads=clears=0;
 if(native)((void (*)(int,int))(image+0x1979d0))(0,0);else sub_1401979D0(0,0);
 FILE *file=*(FILE **)&dword_140404A6C[293512629];if(!file)return 4;fclose(file);*(FILE **)&dword_140404A6C[293512629]=0;
 traces[native][0]=opens;traces[native][1]=seeks;traces[native][2]=reads;traces[native][3]=clears;
 archive_records=dword_140404A6C[293512634];material_records=dword_140404A6C[293775804];
}
if(memcmp(image+0x463ae140,working+0x463ae140,0x103030)||memcmp(traces[0],traces[1],sizeof traces[0])){puts("CSX state or file-call trace mismatch");return 1;}
printf("complete native CSX opener: %u records, %u material indices; full 1,060,912-byte state and file-call trace match\n",archive_records,material_records);return 0;}
'''.encode()
        # Keep the actual compiled layout aligned with the derived global offset.
        self.assertEqual(state,0x463ae140)
        out=PROJECT/'reports/client-practice-csx-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        path=out/'csx.c';path.write_bytes(code);exe=path.with_suffix('.exe')
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing','-I',str(PROJECT/'src/client'),str(path),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        outputs=[]
        for archive in sorted((PROJECT.parent/'data').glob('*/test.csx')):
            result=subprocess.run([str(exe),str(archive)],capture_output=True,text=True,timeout=30)
            outputs.append(archive.parent.name+': '+result.stdout)
            self.assertEqual(result.returncode,0,result.stdout+result.stderr)
        self.assertEqual(len(outputs),4)
        (out/'stdout.txt').write_text(''.join(outputs))


if __name__=='__main__':unittest.main()
