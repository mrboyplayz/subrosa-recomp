"""Compare original emission and output-adapter instructions against recovered C."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_format_emission import PROJECT, repair


class FormatEmission(unittest.TestCase):
    def test_native_emission_and_output_adapter(self):
        source=read_client_source()
        if b'unsigned char unknown_libname_586' not in source:source,_=repair(source)
        def body(address):
            marker=('//----- (%016X)'%address).encode()
            a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
            return source[a:b].decode()
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'))
        natives={}
        for rva in [0x224060,0x22475c]:
            end=next(e.struct.EndAddress for e in pe.DIRECTORY_ENTRY_EXCEPTION if e.struct.BeginAddress==rva)
            natives[rva]=pe.get_data(rva,end-rva)
        text=r'''#include "export_compat.h"
#include <windows.h>
#include <stdio.h>
typedef void CDialog;struct DLGTEMPLATE;struct CWnd;
static int cfg_fail,cfg_empty,conversion_count,copy_count;
static unsigned short seen[32];
static __int64 CDialog__CreateIndirect(CDialog *n,struct DLGTEMPLATE *out,struct CWnd *size,void *ch) {
 int call=conversion_count++;seen[call]=(uintptr_t)ch;
 if((uintptr_t)size!=6) abort();
 if(call==cfg_fail)return (1ULL<<40)|42;
 if(call==cfg_empty){*(int *)n=0;return 1ULL<<40;}
 int bytes=1+((uintptr_t)ch%3);*(int *)n=bytes;
 for(int i=0;i<bytes;++i)((unsigned char *)out)[i]=(unsigned char)((uintptr_t)ch+i);
 /* The native caller tests EAX; upper return-register bits are incidental. */
 return 1ULL<<40;
}
static void *sub_1401FC920(void *out,const void *in,size_t n) {copy_count++;return memcpy(out,in,n);}
void unknown_libname_593(__int64,__m128i *,int,_DWORD *);
'''+body(0x140224060)+body(0x14022475c)+r'''
static void jump(unsigned char *image,unsigned rva,void *target) {
 unsigned char head[]={0xff,0x25,0,0,0,0};memcpy(image+rva,head,6);memcpy(image+rva+6,&target,8);
}
int main(void) {
 unsigned char *image=VirtualAlloc(0,0x310000,MEM_RESERVE,PAGE_READWRITE);
 if(!image)return 1;
 unsigned pages[]={0x1f8000,0x1fc000,0x224000,0x254000,0x302000};
 for(int i=0;i<5;++i)if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 2;
'''
        for rva,data in natives.items():
            text+=' {unsigned char data[]={'+','.join(map(str,data))+'};memcpy(image+'+hex(rva)+',data,sizeof data);}\n'
        text+=r'''
 jump(image,0x2543a8,(void *)CDialog__CreateIndirect);
 jump(image,0x1fc920,(void *)sub_1401FC920);
 *(uint64_t *)(image+0x3020a0)=0x2b992ddfa232ULL;
 unsigned char cookie[]={0x48,0x3b,0x0d,0,0,0,0,0x75,0x01,0xc3,0x0f,0x0b};
 int32_t displacement=0x3020a0-(0x1f8b20+7);memcpy(cookie+3,&displacement,4);
 memcpy(image+0x1f8b20,cookie,sizeof cookie);
 FlushInstructionCache(GetCurrentProcess(),image,0x310000);
 unsigned short wide[32];unsigned char narrow[64];
 for(int i=0;i<32;++i)wide[i]=i*23+0x80;
 for(int i=0;i<64;++i)narrow[i]=i+0x20;
 int cases=0;int initial[]={0,5,-1,INT_MAX-8};
 for(int w=0;w<2;++w)for(int count=0;count<9;++count)
 for(int capacity=0;capacity<17;++capacity)for(int used=0;used<2;++used)
 for(int only=0;only<2;++only)for(int result=0;result<4;++result)
 for(int error=0;error<5;++error) {
  struct record {unsigned char result;int total,conversions,copies;uint64_t used,delta;unsigned char buffer[96];unsigned short seen[32];} records[2];
  for(int native=0;native<2;++native) {
   unsigned char processor[1160],buffer[96];uint64_t output[4];
   memset(processor,0x5a,sizeof processor);memset(buffer,0x5a,sizeof buffer);
   output[0]=(uintptr_t)(buffer+16+(used?capacity:0));output[1]=capacity;output[2]=used?capacity:0;output[3]=only;
   *(int *)(processor+40)=initial[result];*(void **)(processor+72)=w?(void *)wide:(void *)narrow;
   *(int *)(processor+80)=count;processor[84]=w;*(void **)(processor+1128)=output;
   conversion_count=copy_count=0;memset(seen,0,sizeof seen);
   cfg_fail=error==1?0:error==2?3:-1;cfg_empty=error==3?0:error==4?3:-1;
   memset(&records[native],0,sizeof records[native]);
   records[native].result=native?((unsigned char (*)(__int64))(image+0x224060))((intptr_t)processor):unknown_libname_586((intptr_t)processor);
   records[native].total=*(int *)(processor+40);records[native].conversions=conversion_count;records[native].copies=copy_count;
   records[native].used=output[2];records[native].delta=output[0]-(uintptr_t)(buffer+16);
   memcpy(records[native].buffer,buffer,sizeof buffer);memcpy(records[native].seen,seen,sizeof seen);
   for(int i=1144;i<1160;++i)if(processor[i]!=0x5a)return 4;
   for(int i=0;i<16;++i)if(buffer[i]!=0x5a||buffer[80+i]!=0x5a)return 5;
  }
  if(memcmp(&records[0],&records[1],sizeof records[0])) {printf("mismatch %d %d %d %d %d %d %d\n",w,count,capacity,used,only,result,error);return 3;}
  cases++;
 }
 printf("%d original emission/output-adapter comparisons pass\n",cases);
 VirtualFree(image,0,MEM_RELEASE);return 0;
}
'''
        directory=PROJECT/'reports/client-format-emission-20261002';directory.mkdir(parents=True,exist_ok=True)
        fixture=directory/'fixture.c';fixture.write_text(text)
        exe=directory/'fixture.exe'
        run=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe',str(fixture),'-std=gnu11','-O0','-fwrapv','-fno-strict-aliasing','-fstack-protector-all','-I',str(PROJECT/'src/rebuild'),'-I',str(PROJECT/'exports/client'),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(run.returncode,0,run.stderr)
        run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (directory/'stdout.txt').write_text(run.stdout);(directory/'stderr.txt').write_text(run.stderr)
        self.assertEqual(run.returncode,0,run.stdout+run.stderr)
        print(run.stdout.strip())


if __name__=='__main__':unittest.main()
