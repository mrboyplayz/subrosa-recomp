"""Exercise recovered file startup against original instructions at API boundaries."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_stdio import PROJECT, repair


class StdioRecovery(unittest.TestCase):
    def test_native_startup_order_and_failure_routes(self):
        from test_client_thread_startup import ThreadStartup, ENTRY
        ThreadStartup().test_entry_order_and_native_rollback()
        text=(PROJECT/'reports/client-thread-startup-20261002/entry_fixture.c').read_text()
        source=read_client_source()
        if b'sr_standard_streams' not in source:source,_=repair(source)
        marker=b'//----- (00000001400011D0)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
        entry=source[a:b].decode()
        extra=r'''static char sub_140250554(void) {events[event_count++]='F';return fail_stage!=4;}
static char _acrt_uninitialize_ptd_0(void) {events[event_count++]='p';pt_ready=0;return 1;}
static void ptd_undo(unsigned ignored) {_acrt_uninitialize_ptd_0();}
static __int64 sub_14020B408(void) {events[event_count++]='S';return fail_stage==5?0xffffffffULL:0;}
static unsigned sub_1402370D4(void) {events[event_count++]='T';return fail_stage==6?0xffffffffu:0;}
static char initialize_global_variables(void) {events[event_count++]='G';return 1;}
'''
        text=text.replace(ENTRY.decode(),extra+entry)
        text=text.replace('table+8','table+12').replace('fail_stage<4','fail_stage<7')
        text=text.replace('uintptr_t table[]={(uintptr_t)sub_14024FAF0,0,',
                          'uintptr_t table[]={(uintptr_t)initialize_global_variables,0,(uintptr_t)sub_14024FAF0,0,')
        text=text.replace('(uintptr_t)sub_140255CB8,0}', '(uintptr_t)sub_140255CB8,(uintptr_t)ptd_undo,(uintptr_t)sub_140250554,0}')
        text=text.replace('results[native].result=WinMain_0();',
            'uintptr_t c_table[]={(uintptr_t)sub_14020B408,(uintptr_t)sub_1402370D4};\n'
            '     if(((unsigned (*)(uintptr_t *,uintptr_t *))(image+0x247a64))(c_table,c_table+2)) results[native].result=255;\n'
            '     else results[native].result=WinMain_0();')
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'))
        end=next(e.struct.EndAddress for e in pe.DIRECTORY_ENTRY_EXCEPTION if e.struct.BeginAddress==0x247a64)
        insert='if(!VirtualAlloc(image+0x247000,4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 3;\n'
        insert+=' {unsigned char code[]={'+','.join(map(str,pe.get_data(0x247a64,end-0x247a64)))+'};memcpy(image+0x247a64,code,sizeof code);}\n'
        text=text.replace('unsigned char dispatch[]',insert+'unsigned char dispatch[]')
        text=text.replace('4 startup order/failure/rollback comparisons with native dispatcher pass',
                          '7 file/timezone startup order/rollback/C-initializer failure comparisons with native dispatchers pass')
        directory=PROJECT/'reports/client-stdio-20261002';directory.mkdir(parents=True,exist_ok=True)
        fixture=directory/'entry_fixture.c';fixture.write_text(text);exe=directory/'entry_fixture.exe'
        run=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe',str(fixture),'-O0','-std=gnu11','-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(run.returncode,0,run.stderr)
        run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=15)
        (directory/'entry-stdout.txt').write_text(run.stdout)
        self.assertEqual(run.returncode,0,run.stdout+run.stderr)
        print(run.stdout.strip())

    def test_native_file_initialization_and_stream_allocation(self):
        source=read_client_source()
        if b'sr_standard_streams' not in source:source,_=repair(source)
        addresses=[0x260ec8,0x260fc0,0x250358,0x250448,0x250554,0x20b408,0x25068c]
        def body(rva):
            m=('//----- (%016X)'%(0x140000000+rva)).encode();a=source.index(m);b=source.index(b'//----- (',a+len(m));return source[a:b].decode()
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'))
        a=source.index(b'unsigned char sr_standard_streams[264]');b=source.index(b');',a)+2
        storage=source[a:b].decode()
        text=r'''#include "export_compat.h"
#include <stdio.h>
static unsigned dword_140404A6C[19065850];
static unsigned char *image;
static unsigned char pool[8][8192] __attribute__((aligned(16)));
static int fail_mask,inherit_count,handle_mode,pool_count;
static unsigned char inherited[64];
struct trace {uint64_t counts[8],widths[8];int allocs,frees,inits,enters,leaves,startup_calls,types,std_calls;};
static struct trace trace;
static __int64 sr_directory_calloc(uint64_t n,uint64_t size) {
 int i=trace.allocs++;trace.counts[i]=n;trace.widths[i]=size;
 if((fail_mask&(1<<i)) || !size || n>8192/size)return 0;
 void *p=pool[pool_count++];memset(p,0,n*size);return (intptr_t)p;
}
static void free_base(void *p) {if(p)abort();trace.frees++;}
static __int64 _acrt_InitializeCriticalSectionEx(__int64 p,unsigned spin,unsigned flags) {
 if(spin!=4000||flags)abort();trace.inits++;memset((void *)p,0x42,40);return 1;
}
static __int64 sub_140258B64(unsigned n) {trace.enters++;return 0;}
static __int64 sub_140258BB8(unsigned n) {trace.leaves++;return 0;}
static __int64 sub_14020B5E0(__int64 p) {trace.enters++;return 0;}
static __int64 sub_14020B5EC(__int64 p) {trace.leaves++;return 0;}
static int error_value;
static int *errno_sr(void) {return &error_value;}
static void sub_14024CF6C(void) {abort();}
static void WINAPI startup(LPSTARTUPINFOW out) {
 trace.startup_calls++;memset(out,0,sizeof *out);out->cb=sizeof *out;
 if(inherit_count) {out->cbReserved2=4+inherit_count*9;out->lpReserved2=inherited;}
}
static HANDLE WINAPI standard(DWORD which) {
 trace.std_calls++;if(handle_mode==0)return (HANDLE)(intptr_t)-1;
 if(handle_mode==1)return 0;
 return (HANDLE)(intptr_t)(which==STD_INPUT_HANDLE?102:which==STD_OUTPUT_HANDLE?103:104);
}
static DWORD WINAPI file_type(HANDLE h) {trace.types++;return (uintptr_t)h%4;}
#undef GetStartupInfoW
#undef GetStdHandle
#undef GetFileType
#define GetStartupInfoW startup
#define GetStdHandle standard
#define GetFileType file_type
'''+storage+r'''
__int64 sub_140260EC8(void);
__int64 sub_140260FC0(unsigned);
char initialize_inherited_file_handles_nolock(void);
__int64 initialize_stdio_handles_nolock(void);
char sub_140250554(void);
__int64 sub_14020B408(void);
__int64 *find_or_allocate_unused_stream_nolock(__int64 *);
'''+''.join(body(rva) for rva in addresses)+r'''
static void jump(unsigned rva,void *target) {
 unsigned char head[]={0x48,0xb8};memcpy(image+rva,head,2);memcpy(image+rva+2,&target,8);
 image[rva+10]=0xff;image[rva+11]=0xe0;
}
static unsigned char initial_standard[]={'''+','.join(map(str,pe.get_data(0x3020e0,264)))+r'''};
struct record {
 struct trace trace;unsigned low_result,stdio_result;int total_handles,stream_count,allocated,table_slot;
 unsigned char standards[264],blocks[8][8192];
};
static struct record records[2];
int main(void) {
 image=VirtualAlloc(0,0x4d00000,MEM_RESERVE,PAGE_READWRITE);if(!image)return 1;
 unsigned pages[]={0x20b000,0x24d000,0x24e000,0x24f000,0x250000,0x258000,0x260000,0x261000,0x26e000,0x302000,0x4cbe000,0x4cbf000};
 for(int i=0;i<12;++i)if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 2;
'''
        for rva in addresses:
            end=next(e.struct.EndAddress for e in pe.DIRECTORY_ENTRY_EXCEPTION if e.struct.BeginAddress==rva)
            text+=' {unsigned char code[]={'+','.join(map(str,pe.get_data(rva,end-rva)))+'};memcpy(image+'+hex(rva)+',code,sizeof code);}\n'
        for rva,name in [(0x24df98,'sr_directory_calloc'),(0x24e018,'free_base'),(0x24f3a4,'_acrt_InitializeCriticalSectionEx'),(0x258b64,'sub_140258B64'),(0x258bb8,'sub_140258BB8'),(0x20b5e0,'sub_14020B5E0'),(0x20b5ec,'sub_14020B5EC')]:
            text+=f' jump({hex(rva)},(void *){name});\n'
        text+=r'''
 *(void **)(image+0x26e180)=(void *)file_type;*(void **)(image+0x26e188)=(void *)standard;
 *(void **)(image+0x26e2a0)=(void *)startup;
 FlushInstructionCache(GetCurrentProcess(),image,0x4d00000);
 int counts[]={-1,0,1,2,3,4,8,512};int cases=0;
 for(int c=0;c<8;++c)for(fail_mask=0;fail_mask<8;++fail_mask)
 for(inherit_count=0;inherit_count<5;++inherit_count)for(handle_mode=0;handle_mode<3;++handle_mode) {
  for(int native=0;native<2;++native) {
   memset(&trace,0,sizeof trace);memset(pool,0x5a,sizeof pool);pool_count=0;
   memset(dword_140404A6C+19064580,0,(19065850-19064580)*4);
   memset(image+0x4cbe000,0,8192);memcpy(sr_standard_streams,initial_standard,264);
   memcpy(image+0x3020e0,initial_standard,264);
   dword_140404A6C[19064591]=counts[c];*(int *)(image+0x4cbe6a8)=counts[c];
   memset(inherited,0,sizeof inherited);memcpy(inherited,&inherit_count,4);
   for(int k=0;k<inherit_count;++k) {inherited[4+k]=k&1?9:1;uint64_t h=k==0?-1:k==1?-2:104+k;memcpy(inherited+4+inherit_count+k*8,&h,8);}
   struct record *r=&records[native];memset(r,0,sizeof *r);r->stdio_result=0xaaaaaaaa;r->table_slot=-1;
   r->low_result=native?((unsigned char (*)(void))(image+0x250554))():sub_140250554();
   if(r->low_result) {
    r->stdio_result=native?((unsigned (*)(void))(image+0x20b408))():(unsigned)sub_14020B408();
    if(!r->stdio_result) {
     __int64 found=0;__int64 *result=native?((__int64 *(*)(__int64 *))(image+0x25068c))(&found):find_or_allocate_unused_stream_nolock(&found);
     if(result!=&found)return 4;
     uint64_t *table=native?*(uint64_t **)(image+0x4cbe6b0):*(uint64_t **)&dword_140404A6C[19064593];
     int size=native?*(int *)(image+0x4cbe6a8):(int)dword_140404A6C[19064591];
     for(int k=3;k<size;++k)if(table[k]==(uint64_t)found&&found)r->table_slot=k;
    }
   }
   r->trace=trace;r->allocated=pool_count;
   r->stream_count=native?*(int *)(image+0x4cbe6a8):(int)dword_140404A6C[19064591];
   r->total_handles=native?*(int *)(image+0x4cbf750):dword_140404A6C[19065657];
   memcpy(r->standards,native?image+0x3020e0:sr_standard_streams,264);
   /* Native and C standard-stream addresses differ; normalize table pointers. */
   uint64_t *table=native?*(uint64_t **)(image+0x4cbe6b0):*(uint64_t **)&dword_140404A6C[19064593];
   if(table&&r->stdio_result==0)for(int k=0;k<3;++k) {
    uint64_t expected=(uintptr_t)(native?image+0x3020e0:sr_standard_streams)+88*k;
    if(table[k]!=expected)return 5;table[k]=0x1000+88*k;
   }
   memcpy(r->blocks,pool,sizeof pool);
  }
  if(memcmp(records,records+1,sizeof records[0])) {
   printf("mismatch count=%d fail=%d inherited=%d handles=%d\n",counts[c],fail_mask,inherit_count,handle_mode);return 3;
  }
  cases++;
 }
 printf("%d native lowio/stdio/inheritance/allocation pipeline comparisons pass\n",cases);
 VirtualFree(image,0,MEM_RELEASE);return 0;
}
'''
        directory=PROJECT/'reports/client-stdio-20261002';directory.mkdir(parents=True,exist_ok=True)
        fixture=directory/'fixture.c';fixture.write_text(text)
        exe=directory/'fixture.exe'
        run=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe',str(fixture),'-O0','-fno-strict-aliasing','-fstack-protector-all','-std=gnu11','-Wno-incompatible-pointer-types','-I',str(PROJECT/'src/rebuild'),'-I',str(PROJECT/'exports/client'),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(run.returncode,0,run.stderr)
        run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (directory/'stdout.txt').write_text(run.stdout);(directory/'stderr.txt').write_text(run.stderr)
        self.assertEqual(run.returncode,0,run.stdout+run.stderr)
        print(run.stdout.strip())


if __name__=='__main__':unittest.main()
