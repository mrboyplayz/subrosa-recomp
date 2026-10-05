"""Compare the full native SBB loader with controlled file and finalize boundaries."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import capstone
import pefile
from repair_client_building_return import PROJECT, MARKER, repair


class BuildingReturn(unittest.TestCase):
    def test_native_loader(self):
        source = read_client_source()
        a = source.index(MARKER); b = source.index(b'//----- (', a+len(MARKER))
        if b'return sub_1401F8B20' in source[a:b]:
            source, _ = repair(source)
        a = source.index(MARKER); b = source.index(b'//----- (', a+len(MARKER))
        pe = pefile.PE(str(PROJECT.parent/'subrosa.exe'), fast_load=True)
        pages = {0x26000,0x27000,0x158000,0x20b000,0x20c000,0x1f8000}
        d = capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64); d.detail=True
        for ins in d.disasm(pe.get_data(0x26830,0x640),0x26830):
            for op in ins.operands:
                if op.type == capstone.CS_OP_MEM and op.mem.base == capstone.x86.X86_REG_RIP:
                    pages.add((ins.address+ins.size+op.mem.disp)&~4095)
        c = r'''#include <windows.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
static unsigned char file_data[65536];static size_t file_size,cursor;
static unsigned reads,closes,finalizes,missing;
static char seen_path[512],seen_mode[8];
static __int64 sub_140158AB0(char *out,const char *fmt,char *name){return sprintf(out,fmt,name);}
static __int64 sub_14020B8D8(const char *path,const char *mode){strcpy(seen_path,path);strcpy(seen_mode,mode);return missing?0:1;}
static size_t fread_sr(void *out,size_t size,size_t count,FILE *stream){
 if((uintptr_t)stream!=1)abort();reads++;size_t n=size*count;
 if(n>file_size-cursor)n=file_size-cursor;
 memcpy(out,file_data+cursor,n);cursor+=n;return size?n/size:0;
}
static int sub_14020B9E8(__int64 stream){if(stream!=1)abort();closes++;return 0;}
static void sub_140027690(void){finalizes++;}
static void cookie(uintptr_t v){(void)v;}
'''.encode()+source[a:b]+r'''
static void thunk(unsigned char *p,void *f){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&f,8);p[10]=0xff;p[11]=0xe0;}
static void word(unsigned v){memcpy(file_data+file_size,&v,4);file_size+=4;}
static void name(unsigned seed){for(unsigned i=0;i<64;i++)file_data[file_size++]=(unsigned char)(seed+i);}
static void make_file(unsigned version,unsigned w,unsigned h,unsigned flag){
 file_size=0;word(version);name(33);word(w);word(w);word(h);
 if(version>=13){word(7);word(9);word(11);}
 for(unsigned t=0;t<4;t++){word(t);for(unsigned i=0;i<t;i++)name(10+t+i);}
 for(unsigned i=0;i<h*(w+1)*(w+1);i++){
  for(unsigned j=0;j<6;j++)word(1000+i*100+j);
  for(unsigned j=0;j<16;j++){unsigned short v=200+i*20+j;memcpy(file_data+file_size,&v,2);file_size+=2;}
  word(77+i);
 }
 if(version>=14){word(flag);if(flag==1){word(2);for(unsigned i=0;i<2;i++){word(i+1);for(unsigned j=0;j<=i;j++){word(0x3f800000+j);word(0x40000000+j);word(0x40400000+j);word(0);}}}}
}
int main(void){unsigned char *image=VirtualAlloc(0,0x400000,MEM_RESERVE,PAGE_NOACCESS);
 if(!image)return 9;
'''.encode()
        for page in sorted(pages):
            c += f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))abort();\n'.encode()
            data=pe.get_data(page,4096)
            if data:c+=('{unsigned char b[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        c+=r'''
thunk(image+0x158ab0,sub_140158AB0);thunk(image+0x20b8d8,sub_14020B8D8);
thunk(image+0x20c0c8,fread_sr);thunk(image+0x20b9e8,sub_14020B9E8);
thunk(image+0x27690,sub_140027690);thunk(image+0x1f8b20,cookie);
const size_t bytes=47360000;unsigned char *one=malloc(bytes),*two=malloc(bytes);if(!one||!two)abort();
unsigned cases=0;
for(unsigned v=11;v<=15;v++)for(unsigned header=0;header<2;header++)
for(unsigned w=0;w<3;w++)for(unsigned h=0;h<3;h++)for(unsigned flag=0;flag<2;flag++)for(missing=0;missing<2;missing++){
 make_file(v,w,h,flag);unsigned saved_reads=0,saved_closes=0,saved_finalizes=0;size_t saved_cursor=0;
 for(unsigned native=0;native<2;native++){
  unsigned char *buffer=native?two:one;memset(buffer,0xa5,bytes);
  reads=closes=finalizes=0;cursor=0;memset(seen_path,0,sizeof seen_path);memset(seen_mode,0,sizeof seen_mode);
  if(native)((void(*)(char*,char*,int))(image+0x26830))((char*)buffer,"test-building",header);
  else asset_load_building_sbb_candidate((char*)buffer,"test-building",header);
  if(strcmp(seen_path,"building/test-building.sbb")||strcmp(seen_mode,"rb"))return 2;
  if(!native){saved_reads=reads;saved_closes=closes;saved_finalizes=finalizes;saved_cursor=cursor;}
  else if(reads!=saved_reads||closes!=saved_closes||finalizes!=saved_finalizes||cursor!=saved_cursor||memcmp(one,two,bytes)){
   printf("mismatch version=%u header=%u width=%u height=%u flag=%u missing=%u reads=%u/%u cursor=%llu/%llu\n",v,header,w,h,flag,missing,saved_reads,reads,(unsigned long long)saved_cursor,(unsigned long long)cursor);
   for(size_t i=0;i<bytes;i++)if(one[i]!=two[i]){printf("first byte %llu: %u/%u\n",(unsigned long long)i,one[i],two[i]);break;}
   return 1;
  }
 }cases++;
}
printf("%u complete native SBB header/name/tile/waypoint/file/finalize/guard comparisons pass; file and finalize boundaries controlled\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-building-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        f=out/'building.c';f.write_bytes(c);exe=f.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=90)
        (out/'stdout.txt').write_text(r.stdout)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)


if __name__=='__main__':unittest.main()
