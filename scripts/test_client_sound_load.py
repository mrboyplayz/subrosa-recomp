"""Compare complete sound loader conversion, ownership and record writes."""
import subprocess
from client_sources import read_client_source
import unittest
import capstone
import pefile
from repair_client_startup_arguments import PROJECT
from repair_client_sound_load import repair, DECLARATIONS


class SoundLoad(unittest.TestCase):
    def test_native_loader(self):
        source = read_client_source()
        if b'sr_wave_spec sr_spec;' not in source:
            source, _ = repair(source)
        marker = b'//----- (00000001400EE400)'
        a = source.index(marker); b = source.index(b'//----- (', a+len(marker))
        pe = pefile.PE(str(PROJECT.parent/'subrosa.exe'), fast_load=True)
        native = pe.get_data(0xee400, 0x1e8)
        pages = {0xee000, 0x198000, 0x24c000, 0x23a000, 0x26e000}
        dis = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_64); dis.detail = True
        for ins in dis.disasm(native, 0xee400):
            for op in ins.operands:
                if op.type == capstone.CS_OP_MEM and op.mem.base == capstone.x86.X86_REG_RIP:
                    pages.add((ins.address+ins.size+op.mem.disp) & ~4095)
        record_at = 0x404a6c + 4*18165777
        pages.update(range(record_at & ~4095, (record_at+4096*32+4095) & ~4095, 4096))
        c = r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "defs.h"
#include "client_resource_layout.h"
'''.encode() + DECLARATIONS + r'''
_Static_assert(sizeof(sr_wave_spec)==32,"native AudioSpec size");
_Static_assert(offsetof(sr_wave_spec,channels)==6,"native channel offset");
static unsigned char *image;static unsigned *dword_140404A6C;
static unsigned char arena[16384],backup[16384],saved_records[4096*32];
static short pcm[64];static unsigned nbytes,channels,load_ok,chdir_ok,used,calls;
static int frequency;static uint64_t trace[64],saved_trace[64];
static __int64 sub_14024C22C(const char *p){
 trace[calls++]=strcmp(p,"sound")==0?1:(strcmp(p,"..")==0?2:99);
 return chdir_ok?0:-1;
}
void *sr_wave_file(const char *p,const char *mode){
 if(strcmp(p,"fixture.wav")||strcmp(mode,"rb"))abort();trace[calls++]=3;return (void*)0x123456abcdefull;
}
void *sr_wave_load(void *stream,int close,sr_wave_spec *spec,unsigned char **buf,unsigned *len){
 if(stream!=(void*)0x123456abcdefull||close!=1)abort();trace[calls++]=4;
 if(!load_ok)return NULL;memset(spec,0x31,sizeof *spec);spec->freq=frequency;spec->channels=channels;
 *buf=(unsigned char*)pcm;*len=nbytes;return spec;
}
void sr_wave_free(unsigned char *p){if(p!=(unsigned char*)pcm)abort();trace[calls++]=5;}
static void fake_free(void *p){trace[calls++]=6;trace[calls++]=(uintptr_t)p-(uintptr_t)arena;}
static __int64 sr_path_malloc(size_t n){trace[calls++]=7;trace[calls++]=n;used=n;if(n>sizeof arena)abort();return (__int64)(uintptr_t)arena;}
#define free fake_free
'''.encode() + source[a:b] + r'''
static void thunk(unsigned char *p,void *f){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&f,8);p[10]=0xff;p[11]=0xe0;}
int main(void){image=VirtualAlloc(0,0x5000000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;dword_140404A6C=(void*)(image+0x404a6c);
'''.encode()
        for page in sorted(pages):
            c += f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
            data = pe.get_data(page, 4096)
            if data:
                c += ('{unsigned char b[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        for rva, name in ((0x24c22c,'sub_14024C22C'), (0x198e75,'sr_wave_file'),
                          (0x198e93,'sr_wave_load'), (0x198e99,'sr_wave_free'),
                          (0x23ace4,'fake_free'), (0x23acf8,'sr_path_malloc')):
            if 0x198000 <= rva < 0x199000:
                slot = rva + 6 + int.from_bytes(pe.get_data(rva+2,4),'little',signed=True)
                c += f'*(void **)(image+{slot})={name};\n'.encode()
            else:
                c += f'thunk(image+{rva},{name});\n'.encode()
        c += r'''
int indexes[]={0,1,4095,4096,-1};int rates[]={0,22050,24000,44100,48000};unsigned count=0;
for(unsigned idx=0;idx<5;idx++)for(unsigned rate=0;rate<5;rate++)for(unsigned mode=0;mode<4;mode++)
for(nbytes=2;nbytes<=18;nbytes++){frequency=rates[rate];channels=mode==1?2:1;load_ok=mode!=2;chdir_ok=mode!=3;
 unsigned old_calls=0,old_used=0;for(unsigned original=0;original<2;original++){
  memset(&dword_140404A6C[18165777],0,4096*32);memset(arena,0xa5,sizeof arena);
  for(unsigned j=0;j<64;j++)pcm[j]=(short)(j*997-16384);
  if(indexes[idx]>=0&&indexes[idx]<=4095){unsigned *r=&dword_140404A6C[18165777+8*indexes[idx]];r[0]=91;*(void **)&r[2]=arena+512;}
  calls=used=0;memset(trace,0,sizeof trace);
  if(original)((void(*)(int,int64_t,float))(image+0xee400))(indexes[idx],(intptr_t)"fixture.wav",10.0f);
  else sub_1400EE400(indexes[idx],(intptr_t)"fixture.wav",10.0f);
  if(!original){old_calls=calls;old_used=used;memcpy(saved_trace,trace,sizeof trace);memcpy(backup,arena,sizeof arena);
   memcpy(saved_records,&dword_140404A6C[18165777],sizeof saved_records);}
  else if(calls!=old_calls||used!=old_used||memcmp(saved_trace,trace,sizeof trace)||memcmp(backup,arena,sizeof arena)||
    memcmp(saved_records,&dword_140404A6C[18165777],sizeof saved_records)){
    printf("mismatch index=%d freq=%d mode=%u bytes=%u\n",indexes[idx],frequency,mode,nbytes);return 1;}
 }count++;
}printf("%u complete native WAV conversion/record/allocator/stream-ownership comparisons pass; SDL and directory boundaries controlled, unused RAX excluded\n",count);return 0;}
'''.encode()
        out = PROJECT/'reports/client-sound-load-fixture-20261003'; out.mkdir(parents=True,exist_ok=True)
        fixture=out/'sound.c';fixture.write_bytes(c);exe=fixture.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-fno-strict-aliasing',
                          '-I',str(PROJECT/'src/client'),'-I',str(PROJECT/'src/recovered'),
                          str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(r.stdout)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)


if __name__=='__main__':unittest.main()
