"""Differential CRT getters, fiber initialization, locks and startup rollback."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_thread_startup import PROJECT, GETTERS, ENTRY, repair


class ThreadStartup(unittest.TestCase):
    def test_entry_order_and_native_rollback(self):
        source=read_client_source()
        if b'crt_initialization_failure:' not in source:source,_=repair(source)
        start=source.index(b'//----- (00000001400011D0)')
        end=source.index(b'//----- (',start+30)
        # Compare the thread-stage entry before later file/stream startup passes.
        entry=ENTRY
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'))
        finish=next(e.struct.EndAddress for e in pe.DIRECTORY_ENTRY_EXCEPTION if e.struct.BeginAddress==0x260aa8)
        data=pe.get_data(0x260aa8,finish-0x260aa8)
        code=r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <setjmp.h>
#include <string.h>
typedef uint64_t _QWORD;
static unsigned dword_140404A6C[19065850];
static jmp_buf escape;
static char events[32];static int event_count,fail_stage,failed,code_value,pt_ready;
static unsigned char sub_14024FAF0(void) {events[event_count++]='A';return 1;}
static unsigned char _acrt_initialize_locks(void) {events[event_count++]='L';return fail_stage!=1;}
static unsigned char _acrt_uninitialize_locks_0(void) {events[event_count++]='l';return 1;}
static unsigned char sub_140260A78(void) {events[event_count++]='H';
 if(fail_stage==2) return 0; *(_QWORD *)&dword_140404A6C[19065847]=123;return 1;}
static unsigned char sub_140255CB8(void) {events[event_count++]='P';pt_ready=fail_stage!=3;return pt_ready;}
static void heap_undo(unsigned ignored) {*(_QWORD *)&dword_140404A6C[19065847]=0;}
static void lock_undo(unsigned ignored) {_acrt_uninitialize_locks_0();}
static __int64 WinMain_0(void) {events[event_count++]='W';if(!pt_ready) exit(8);return 73;}
static void sub_1401FBFB8(unsigned code) {failed=1;code_value=code;longjmp(escape,1);}
'''+entry.decode()+r'''
int main(void) {
 unsigned char *image=VirtualAlloc(0,0x270000,MEM_RESERVE,PAGE_READWRITE);
 if(!image || !VirtualAlloc(image+0x260000,4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE) ||
 !VirtualAlloc(image+0x26e000,4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE)) return 1;
 unsigned char original[]={'''+','.join(map(str,data))+r'''};
 memcpy(image+0x260aa8,original,sizeof original);
 unsigned char dispatch[]={0xff,0xe0};memcpy(image+0x26e800,dispatch,2);
 *(uintptr_t *)(image+0x26e698)=(uintptr_t)(image+0x26e800);
 uintptr_t table[]={(uintptr_t)sub_14024FAF0,0,(uintptr_t)_acrt_initialize_locks,(uintptr_t)lock_undo,
 (uintptr_t)sub_140260A78,(uintptr_t)heap_undo,(uintptr_t)sub_140255CB8,0};
 FlushInstructionCache(GetCurrentProcess(),image,0x270000);
 struct {char events[32];int failed,code,ready;uint64_t heap,result;} results[2];
 for(fail_stage=0;fail_stage<4;++fail_stage) {
  memset(results,0,sizeof results);
  for(int native=0;native<2;++native) {
   memset(events,0,sizeof events);event_count=failed=code_value=pt_ready=0;
   *(_QWORD *)&dword_140404A6C[19065847]=0;
   if(!_setjmp(escape,NULL)) {
    if(native) {
     if(!((unsigned char (*)(uintptr_t *,uintptr_t *))(image+0x260aa8))(table,table+8)) sub_1401FBFB8(7);
     results[native].result=WinMain_0();
    } else results[native].result=WinMain_sr();
   }
   memcpy(results[native].events,events,32);results[native].failed=failed;results[native].code=code_value;
   results[native].ready=pt_ready;results[native].heap=*(_QWORD *)&dword_140404A6C[19065847];
  }
  if(memcmp(results,results+1,sizeof results[0])) return 2;
 }
 VirtualFree(image,0,MEM_RELEASE);puts("4 startup order/failure/rollback comparisons with native dispatcher pass");return 0;
}
'''
        directory=PROJECT/'reports/client-thread-startup-20261002';directory.mkdir(parents=True,exist_ok=True)
        fixture=directory/'entry_fixture.c';fixture.write_text(code)
        executable=directory/'entry_fixture.exe'
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe',str(fixture),'-O0','-std=gnu11','-o',str(executable)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(executable)],capture_output=True,text=True,timeout=15)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)
        (directory/'entry-stdout.txt').write_text(result.stdout)

    def test_native_thread_state_and_lock_paths(self):
        source = read_client_source()
        if b'crt_initialization_failure:' not in source: source,_=repair(source)
        def region(address):
            marker=('//----- (%016X)'%(0x140000000+address)).encode()
            a=source.index(marker);b=source.index(b'//----- (',a+len(marker));return source[a:b]
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'))
        native_addresses=GETTERS+[0x255cb8,0x255cf4,0x258b1c,0x258b80]
        text=r'''#include "export_compat.h"
#include <windows.h>
#include <setjmp.h>
#include <stdio.h>
struct __acrt_ptd;
static unsigned int dword_140404A6C[19065850];
static int dword_140302410;
static unsigned char buffer[968];
static unsigned char *image,*lock_base;
static jmp_buf escape;
static uintptr_t cached; static int allocation_failure,set_failure,lock_failure,slot_failure;
static unsigned error_value;
static int expect_native;
struct trace { uint64_t result,count,width; uintptr_t set_values[4]; unsigned slots[4];
 int gets,sets,allocs,frees,nonnull_frees,initialized,aborted,lock_calls,deletes;
 int lock_indices[14],delete_indices[14],slot_allocs,slot_frees,callback_ok; unsigned error; int final_slot; };
static struct trace observed;
static DWORD WINAPI test_get_error(void) {return error_value;}
static void WINAPI test_set_error(DWORD value) {error_value=value;}
#define GetLastError test_get_error
#define SetLastError test_set_error
static __int64 sub_14024EFE4(unsigned slot) {observed.gets++;return cached;}
static __int64 sub_14024F02C(unsigned slot,__int64 value) {
 int index=observed.sets++;observed.slots[index]=slot;observed.set_values[index]=value;
 return slot!=UINT32_MAX && observed.sets!=set_failure;
}
static __int64 sr_directory_calloc(uint64_t count,uint64_t width) {
 observed.allocs++;observed.count=count;observed.width=width;
 if(count!=1 || width!=968) exit(90);
 memset(buffer,0,sizeof buffer); return allocation_failure?0:(intptr_t)buffer;
}
static void free_base(void *ptr) {observed.frees++;observed.nonnull_frees+=ptr!=NULL;}
static __int64 sub_140255524(struct __acrt_ptd *p) {
 observed.initialized++;if((void *)p!=buffer) exit(91);return 0;
}
static void sub_1402555F8(void **ptr) { }
static __int64 sub_14024EF54(__int64 callback) {
 observed.slot_allocs++;
 observed.callback_ok=(uintptr_t)callback==(expect_native?(uintptr_t)(image+0x2555f8):(uintptr_t)sub_1402555F8);
 return slot_failure?UINT32_MAX:7;
}
static __int64 sub_14024EF9C(unsigned slot) {observed.slot_frees++;return 1;}
static void test_abort(void) {observed.aborted++;longjmp(escape,1);}
static __int64 _acrt_InitializeCriticalSectionEx(__int64 ptr,unsigned spin,unsigned flags) {
 int index=observed.lock_calls++;int offset=((unsigned char *)(uintptr_t)ptr-lock_base)/40;
 observed.lock_indices[index]=offset;
 if(spin!=4000 || flags || offset!=index) exit(92);
 return offset!=lock_failure;
}
static void WINAPI test_delete(CRITICAL_SECTION *ptr) {
 observed.delete_indices[observed.deletes++]=((unsigned char *)ptr-lock_base)/40;
}
#define DeleteCriticalSection test_delete
static char _acrt_uninitialize_ptd_0(void);
static char _acrt_uninitialize_locks_0(void);
static __int64 sub_140255BEC(void);
'''
        for address in native_addresses:
            text+=region(address).decode().replace('abort();','test_abort();')+'\n'
        text+=r'''
static void jump(unsigned rva,void *target) {
 unsigned char bytes[]={0xff,0x25,0,0,0,0};memcpy(image+rva,bytes,6);memcpy(image+rva+6,&target,8);
}
static void reset(int native,int slot,int cache,int fail_alloc,int fail_set,unsigned error) {
 memset(&observed,0,sizeof observed);error_value=error;expect_native=native;
 cached=cache==0?0:cache==1?UINT64_MAX:(uintptr_t)buffer;
 allocation_failure=fail_alloc;set_failure=fail_set;
 dword_140302410=slot;*(int *)(image+0x302410)=slot;
 lock_base=native?image+0x4cbf780:(unsigned char *)&dword_140404A6C[19065669];
 dword_140404A6C[19065809]=0;*(unsigned *)(image+0x4cbf9b0)=0;
}
static uintptr_t call_c(int index) {
 switch(index) {case 0:return (uintptr_t)internal_get_ptd_head();case 1:return (uintptr_t)unknown_libname_876();
 case 2:return sub_140255A70();case 3:return (uintptr_t)sub_140255B44();default:return sub_140255BEC();}
}
int main(void) {
 image=VirtualAlloc(NULL,0x4cc0000,MEM_RESERVE,PAGE_READWRITE);
 if(!image || !VirtualAlloc(image+0x24c000,0x4000,MEM_COMMIT,PAGE_EXECUTE_READWRITE) ||
 !VirtualAlloc(image+0x255000,0x1000,MEM_COMMIT,PAGE_EXECUTE_READWRITE) ||
 !VirtualAlloc(image+0x258000,0x1000,MEM_COMMIT,PAGE_EXECUTE_READWRITE) ||
 !VirtualAlloc(image+0x26e000,0x1000,MEM_COMMIT,PAGE_READWRITE) ||
 !VirtualAlloc(image+0x302000,0x1000,MEM_COMMIT,PAGE_READWRITE) ||
 !VirtualAlloc(image+0x4cbf000,0x1000,MEM_COMMIT,PAGE_READWRITE)) return 1;
'''
        for address in native_addresses:
            finish=next(e.struct.EndAddress for e in pe.DIRECTORY_ENTRY_EXCEPTION if e.struct.BeginAddress==address)
            data=pe.get_data(address,finish-address)
            text+='{unsigned char code[]={'+','.join(map(str,data))+'};memcpy(image+%d,code,sizeof code);}\n'%address
        mapping={0x24efe4:'sub_14024EFE4',0x24f02c:'sub_14024F02C',0x24df98:'sr_directory_calloc',
                 0x24e018:'free_base',0x255524:'sub_140255524',0x24c754:'test_abort',
                 0x24ef54:'sub_14024EF54',0x24ef9c:'sub_14024EF9C',0x24f3a4:'_acrt_InitializeCriticalSectionEx'}
        for address,name in mapping.items():text+='jump(%d,(void *)%s);\n'%(address,name)
        text+=r'''
 *(uintptr_t *)(image+0x26e260)=(uintptr_t)test_get_error;
 *(uintptr_t *)(image+0x26e258)=(uintptr_t)test_set_error;
 *(uintptr_t *)(image+0x26e240)=(uintptr_t)test_delete;
 FlushInstructionCache(GetCurrentProcess(),image,0x4cc0000);
 unsigned addresses[]={0x255818,0x2558b8,0x255a70,0x255b44,0x255bec};int comparisons=0;
 for(int getter=0;getter<5;++getter) for(int slot_case=0;slot_case<2;++slot_case)
 for(int cache=0;cache<3;++cache) for(int fail_alloc=0;fail_alloc<2;++fail_alloc)
 for(int fail_set=0;fail_set<4;++fail_set) for(unsigned error=0;error<8;++error) {
  struct trace records[2];
  for(int native=0;native<2;++native) {
   reset(native,slot_case?-1:7,cache,fail_alloc,fail_set,error*987);
   /* Null unwind frame permits leaving unregistered original-code fixtures. */
   if(!_setjmp(escape,NULL)) observed.result=native?((uintptr_t (*)(void))(image+addresses[getter]))():call_c(getter);
   observed.error=error_value;records[native]=observed;
  }
  if(memcmp(records,records+1,sizeof(struct trace))) {printf("getter mismatch %d %d %d %d %d\n",getter,slot_case,cache,fail_alloc,fail_set);return 2;}
  comparisons++;
 }
 for(slot_failure=0;slot_failure<2;++slot_failure) for(int fail_alloc=0;fail_alloc<2;++fail_alloc)
 for(int fail_set=0;fail_set<4;++fail_set) {
  struct trace records[2];
  for(int native=0;native<2;++native) {
   reset(native,-1,0,fail_alloc,fail_set,123);
   observed.result=native?((unsigned char (*)(void))(image+0x255cb8))():(unsigned char)sub_140255CB8();
   observed.final_slot=native?*(int *)(image+0x302410):dword_140302410;
   observed.error=error_value;records[native]=observed;
  }
  if(memcmp(records,records+1,sizeof(struct trace))) return 3;
  comparisons++;
 }
 for(lock_failure=-1;lock_failure<14;++lock_failure) {
  struct trace records[2];
  for(int native=0;native<2;++native) {
   reset(native,7,0,0,0,123);
   observed.result=native?((unsigned char (*)(void))(image+0x258b1c))():(unsigned char)_acrt_initialize_locks();
   unsigned count=native?*(unsigned *)(image+0x4cbf9b0):dword_140404A6C[19065809];
   if(count!=(lock_failure==-1?14:0)) return 4;
   if(lock_failure==-1) {
    if(native) ((unsigned char (*)(void))(image+0x258b80))();else _acrt_uninitialize_locks_0();
   }
   records[native]=observed;
  }
  if(memcmp(records,records+1,sizeof(struct trace))) return 5;
  comparisons++;
 }
 printf("%d native CRT getter, fiber-init and lock comparisons pass\n",comparisons);
 VirtualFree(image,0,MEM_RELEASE);return 0;
}
'''
        directory=PROJECT/'reports/client-thread-startup-20261002';directory.mkdir(parents=True,exist_ok=True)
        fixture=directory/'thread_fixture.c';fixture.write_text(text)
        executable=directory/'thread_fixture.exe'
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe',str(fixture),'-std=gnu11','-O0','-fno-strict-aliasing','-I',str(PROJECT/'src/rebuild'),'-I',str(PROJECT/'exports/client'),'-o',str(executable)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(executable)],capture_output=True,text=True,timeout=30)
        (directory/'stdout.txt').write_text(result.stdout);(directory/'stderr.txt').write_text(result.stderr)
        self.assertEqual(result.returncode,0,result.stdout+result.stderr)
        print(result.stdout.strip())


if __name__=='__main__':unittest.main()
