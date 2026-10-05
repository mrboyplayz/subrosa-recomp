"""Compare complete native building catalog enumeration and metadata storage."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import capstone
import pefile
from repair_client_building_catalog import PROJECT,MARKER,repair


class BuildingCatalog(unittest.TestCase):
    def test_native_catalog(self):
        s=read_client_source()
        a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER))
        if b'_BYTE v34[36]' in s[a:b]:s,_=repair(s)
        a=s.index(MARKER);b=s.index(b'//----- (',a+len(MARKER));body=s[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        pages={0x130000,0x13c000,0x13d000,0x158000,0x23a000,0x239000,0x24c000,0x26000,0x1f8000}
        d=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);d.detail=True
        for ins in d.disasm(pe.get_data(0x13cdf0,0x3c0),0x13cdf0):
            for op in ins.operands:
                if op.type==capstone.CS_OP_MEM and op.mem.base==capstone.x86.X86_REG_RIP:
                    target=ins.address+ins.size+op.mem.disp
                    if target>=0:pages.add(target&~4095)
        for number in re.findall(rb'\b\d{8,9}\b',body):
            addr=0x404a6c+4*int(number)
            if addr<0x74794000:pages.update((addr&~4095,(addr&~4095)+4096))
        for index,span in ((293119325,65544),(225368653,88*16),(225171849,96*16),(456856205,4096),(283831313,64)):
            start=0x404a6c+4*index
            pages.update(range(start&~4095,(start+span+4095)&~4095,4096))
        c=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
static unsigned *dword_140404A6C;
static unsigned entries,entry_at,dir_mask,chdir_mask,chdir_at;
static char names[8][64],trace[8192];static size_t trace_size;
static void event(const char *kind,const char *value){trace_size+=sprintf(trace+trace_size,"%s:%s;",kind,value);}
static __int64 sub_140158AB0(void *out,const char *fmt,const char *name){event("format",name);return sprintf(out,fmt,name);}
static void find_data(void *out){memset(out,0,296);*(unsigned*)out=(dir_mask&(1u<<entry_at))?16:0;strcpy((char*)out+36,names[entry_at]);}
static __int64 sub_14023A198(void *pattern,__int64 out){event("first",pattern);entry_at=0;if(!entries)return -1;find_data((void*)(uintptr_t)out);return 0x123400;}
static int sub_14023A5C4(__int64 handle,__int64 out){if(handle!=0x123400)abort();event("next","");if(++entry_at>=entries)return -1;find_data((void*)(uintptr_t)out);return 0;}
static int sub_140239CCC(__int64 h){event("close",h==-1?"missing":"handle");return 0;}
static int sub_14004C4C0(unsigned __int64 a,_BYTE *b){return strcmp((const char*)(uintptr_t)a,(const char*)b);}
static int cmp(const void *a,const void *b){return strcmp(a,b);}
static void sub_14023AE00(unsigned __int64 p,int n,unsigned stride,int(*fn)(unsigned __int64,_BYTE*)){
 (void)fn;if(stride!=64)abort();event("sort","");qsort((void*)(uintptr_t)p,n,stride,cmp);
}
static int sub_14024C22C(const void *p){event("chdir",p);unsigned n=chdir_at++;return chdir_mask&(1u<<n)?-1:0;}
static void asset_load_building_sbb_candidate(char *out,char *name,int header){
 if(header!=1)abort();event("load",name);unsigned v=0;for(unsigned i=0;name[i];i++)v=v*33+(unsigned char)name[i];
 strcpy(out,name);for(unsigned i=16;i<22;i++)((unsigned*)out)[i]=v+i;
}
static void cookie(uintptr_t v){(void)v;}
'''.encode()+body+r'''
static void thunk(unsigned char *p,void *f){p[0]=0x48;p[1]=0xb8;memcpy(p+2,&f,8);p[10]=0xff;p[11]=0xe0;}
int main(void){unsigned char *image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS),*working=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);
 if(!image||!working)return 9;
'''.encode()
        for page in sorted(pages):
            c+=f'if(!VirtualAlloc(image+{page},4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE)||!VirtualAlloc(working+{page},4096,MEM_COMMIT,PAGE_READWRITE))abort();\n'.encode()
            data=pe.get_data(page,4096)
            if data:c+=('{unsigned char b[]={'+','.join(map(str,data))+f'}};memcpy(image+{page},b,sizeof b);}}\n').encode()
        c+=r'''
thunk(image+0x158ab0,sub_140158AB0);thunk(image+0x23a198,sub_14023A198);thunk(image+0x23a5c4,sub_14023A5C4);
thunk(image+0x239ccc,sub_140239CCC);thunk(image+0x23ae00,sub_14023AE00);thunk(image+0x24c22c,sub_14024C22C);
thunk(image+0x26830,asset_load_building_sbb_candidate);thunk(image+0x1f8b20,cookie);
unsigned counts[]={0,1,2,8};unsigned cases=0;
for(unsigned n=0;n<4;n++)for(dir_mask=0;dir_mask<4;dir_mask++)for(chdir_mask=0;chdir_mask<4;chdir_mask++)for(unsigned longname=0;longname<2;longname++){
 entries=counts[n];for(unsigned i=0;i<8;i++){
  memset(names[i],0,64);sprintf(names[i],"%c-house%s.sbb",'z'-i,longname?"-with-a-long-name-to-test-the-contiguous-find-buffer":"");
 }
 char saved_trace[8192];size_t saved_trace_size=0;
 for(unsigned native=0;native<2;native++){
  unsigned char *base=native?image:working;dword_140404A6C=(void*)(base+0x404a6c);
'''.encode()
        # Only reset data pages; executable pages and embedded constants stay intact.
        data_pages=sorted(p for p in pages if p>=0x400000)
        for p in data_pages:c+=f'memset(base+{p},0xa5,4096);\n'.encode()
        c+=r'''
  strcpy((char*)&dword_140404A6C[283831313],"vanilla");
  dword_140404A6C[225171849]=4;
  for(unsigned i=0;i<4;i++){
   unsigned char *t=(void*)&dword_140404A6C[225171850+24*i];*(unsigned*)t=0xffffffff;
   strcpy((char*)t+4,i==3?"missing":"");
   if(i<3){strcpy((char*)t+4,names[i]);char *dot=strchr((char*)t+4,'.');if(dot)*dot=0;}
  }
  trace_size=0;memset(trace,0,sizeof trace);chdir_at=0;
  if(native)((void(*)(void))(image+0x13cdf0))();else sub_14013CDF0();
  if(!native){memcpy(saved_trace,trace,sizeof trace);saved_trace_size=trace_size;}
  else if(trace_size!=saved_trace_size||memcmp(saved_trace,trace,sizeof trace)){
   printf("trace mismatch count=%u dirs=%u chdir=%u long=%u\nC %s\nN %s\n",entries,dir_mask,chdir_mask,longname,saved_trace,trace);return 1;
  }
 }
'''.encode()
        for p in data_pages:
            c+=f'if(memcmp(image+{p},working+{p},4096)){{printf("data mismatch page={p:x} count=%u dirs=%u chdir=%u long=%u\\n",entries,dir_mask,chdir_mask,longname);for(unsigned j=0;j<4096;j++)if(image[{p}+j]!=working[{p}+j]){{printf("first offset %u C=%u N=%u\\n",j,working[{p}+j],image[{p}+j]);break;}}return 2;}}\n'.encode()
        c+=r'''cases++;}
printf("%u complete native building catalog/filter/sort/name/header/metadata/template/chdir/guard comparisons pass; enumeration, sorting, file and directory boundaries controlled\n",cases);return 0;}
'''.encode()
        out=PROJECT/'reports/client-building-catalog-fixture-20261003';out.mkdir(parents=True,exist_ok=True)
        f=out/'catalog.c';f.write_bytes(c);exe=f.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11','-I',str(PROJECT/'src/client'),str(f),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=45)
        (out/'stdout.txt').write_text(r.stdout)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)


if __name__=='__main__':unittest.main()
