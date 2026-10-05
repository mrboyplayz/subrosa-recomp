"""Check native UI failure returns and file-callback CRT routing."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_ui_return import PROJECT, repair


class UIReturn(unittest.TestCase):
    def build_run(self,text,name):
        out=PROJECT/'reports/client-ui-return-20261002';out.mkdir(parents=True,exist_ok=True)
        fixture=out/(name+'.c');fixture.write_bytes(text);exe=fixture.with_suffix('.exe')
        r=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe','-O0','-std=gnu11',str(fixture),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(r.returncode,0,r.stderr)
        r=subprocess.run([str(exe)],capture_output=True,text=True,timeout=20)
        (out/(name+'-stdout.txt')).write_text(r.stdout);(out/(name+'-stderr.txt')).write_text(r.stderr)
        self.assertEqual(r.returncode,0,r.stdout+r.stderr)

    def test_native_file_callback(self):
        source=(PROJECT/'src/rebuild/client_leaf_adapter.inc').read_bytes()
        start=source.index(b'size_t sub_1400012A0(');end=source.index(b'\n}',start)+2
        body=source[start:end]
        self.assertIn(b'return fread_sr(',body)
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        data=pe.get_data(0x12a0,22)
        text=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
struct trace {uint64_t destination,size,count,stream;} seen;
static uint64_t fread_sr(void *dest,uint64_t size,uint64_t count,FILE *stream){
 seen=(struct trace){(uintptr_t)dest,size,count,(uintptr_t)stream};return 0x12345678abcdef00ULL^count;
}
'''.encode()+body+r'''
int main(void){
 unsigned char *image=VirtualAlloc(0,0x20d000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
 if(!VirtualAlloc(image+0x1000,4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE)||!VirtualAlloc(image+0x20c000,4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 8;
'''.encode()
        text+=('{unsigned char b[]={'+','.join(map(str,data))+'};memcpy(image+0x12a0,b,sizeof b);}\n').encode()
        text+=r'''
 uintptr_t function=(uintptr_t)fread_sr;image[0x20c0c8]=0x48;image[0x20c0c9]=0xb8;memcpy(image+0x20c0ca,&function,8);image[0x20c0d2]=0xff;image[0x20c0d3]=0xe0;
 FlushInstructionCache(GetCurrentProcess(),image,0x20d000);
 uint64_t state=0x123456789abcdefULL;
 for(unsigned k=0;k<4096;k++){
  state^=state<<13;state^=state>>7;state^=state<<17;
  void *destination=(void *)(uintptr_t)state;FILE *stream=(FILE *)(uintptr_t)(state^0x5678901234ULL);int count=(int)state;
  uint64_t a=sub_1400012A0(stream,destination,count);struct trace expected=seen;
  uint64_t b=((uint64_t (*)(FILE *,void *,int))(image+0x12a0))(stream,destination,count);
  if(a!=b||memcmp(&expected,&seen,sizeof seen)||seen.size!=1||seen.count!=(uint64_t)(int64_t)count)return 1;
 }
 VirtualFree(image,0,MEM_RELEASE);puts("4096 native image fread callback argument/return cases pass; recovered CRT routing checked");return 0;
}
'''.encode()
        self.build_run(text,'callback')

    def test_native_ui_failure_returns(self):
        source=read_client_source()
        marker=b'//----- (0000000140078610)';start=source.index(marker);end=source.index(b'//----- (',start+len(marker))
        if b'return sr_loaded;' not in source[start:end]:source,_=repair(source)
        start=source.index(marker);end=source.index(b'//----- (',start+len(marker));body=source[start:end]
        self.assertNotIn(b'return sub_1401F8B20',body)
        self.assertEqual(body.count(b'sr_loaded = 1;'),1)
        self.assertIn(b'+ v27) = 1;\n      sr_loaded = 1;',body)
        # Actual generated prologue/branch expressions, stopping at the mocked
        # asset-success boundary. Only native failure paths are exercised here.
        prefix=body[:body.index(b'    {',body.index(b'if ( (unsigned int)sub_140079840'))]
        prefix+=b'      ExitProcess(29);\n  }\n  return sr_loaded;\n}\n'
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'),fast_load=True)
        native=pe.get_data(0x78610,0xb2a)
        text=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
typedef unsigned char _BYTE;typedef unsigned _DWORD;
static unsigned formatted,loaded;static char name[512];
static uint64_t sub_140158AB0(void *output,const char *format,char *input){formatted++;sprintf(output,format,input);strcpy(name,output);return 0;}
static unsigned sub_140079840(char *filename){loaded++;if(strcmp(filename,name))ExitProcess(28);return 0;}
'''.encode()+prefix+r'''
static void thunk(unsigned char *a,void *p){a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void){
 unsigned char *image=VirtualAlloc(0,0x303000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
 unsigned pages[]={0x78000,0x79000,0x158000,0x1f8000,0x302000,0x270000};
 for(unsigned i=0;i<6;i++)if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 8;
'''.encode()
        text+=('{unsigned char b[]={'+','.join(map(str,native))+'};memcpy(image+0x78610,b,sizeof b);}\n').encode()
        # Native format string LEA at 78650 targets 273560.
        import capstone
        decoder=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);decoder.detail=True
        ins=next(decoder.disasm(pe.get_data(0x78650,7),0x140078650))
        rva=ins.address+ins.size+ins.operands[1].mem.disp-0x140000000
        text+=('if(!VirtualAlloc(image+0x%x,4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 7;memcpy(image+0x%x,"font/%%s.png",12);\n'%(rva&~4095,rva)).encode()
        text+=r'''
 thunk(image+0x158ab0,sub_140158AB0);thunk(image+0x79840,sub_140079840);
 image[0x1f8b20]=0xc3;FlushInstructionCache(GetCurrentProcess(),image,0x303000);
 unsigned indices[]={0,1,63,64,65,0x7fffffff,0x80000000,0xffffffff};
 for(unsigned k=0;k<1024;k++){
  formatted=loaded=0;name[0]=0;uint64_t a=ui_load_base_assets_candidate(indices[k%8],"vcr",k);unsigned first=formatted,second=loaded;
  formatted=loaded=0;name[0]=0;uint64_t b=((uint64_t (*)(unsigned,char *,int))(image+0x78610))(indices[k%8],"vcr",k);
  if(a||b||first!=formatted||second!=loaded)return 1;
 }
 VirtualFree(image,0,MEM_RELEASE);puts("1024 native UI asset index/load-failure return cases pass; success EAX pinned to original");return 0;
}
'''.encode()
        self.build_run(text,'ui')

if __name__=='__main__':unittest.main()
