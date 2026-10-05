"""Compare file opening through its conversion adapter at the wide-open boundary."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import pefile
from repair_client_file_open import PROJECT, repair


class FileOpenRecovery(unittest.TestCase):
    def test_native_getc_signed_countdown(self):
        source=read_client_source()
        marker=b'//----- (000000014020BAC8)';a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
        body=source[a:b].replace(b'if ( --*((_DWORD *)a1 + 4) < 0 )',b'if ( (int32_t)(*((_DWORD *)a1 + 4) -= 1u) < 0 )').decode()
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'))
        end=next(e.struct.EndAddress for e in pe.DIRECTORY_ENTRY_EXCEPTION if e.struct.BeginAddress==0x20bac8)
        text=r'''#include "export_compat.h"
#include <stdio.h>
static int error,invalid,refills;
static int *errno_sr(void) {return &error;}
static void sub_14024CF6C(void) {invalid++;}
static __int64 sub_140251818(FILE *stream) {refills++;return 0x12345678ffffffffULL;}
'''+body+r'''
static void jump(unsigned char *image,unsigned rva,void *target) {
 unsigned char head[]={0xff,0x25,0,0,0,0};memcpy(image+rva,head,6);memcpy(image+rva+6,&target,8);
}
int main(void) {
 unsigned char *image=VirtualAlloc(0,0x260000,MEM_RESERVE,PAGE_READWRITE);if(!image)return 1;
 unsigned pages[]={0x20b000,0x24c000,0x24d000,0x251000};
 for(int i=0;i<4;++i)if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 2;
 unsigned char original[]={'''+','.join(map(str,pe.get_data(0x20bac8,end-0x20bac8)))+r'''};
 memcpy(image+0x20bac8,original,sizeof original);
 jump(image,0x251818,(void *)sub_140251818);jump(image,0x24d1bc,(void *)errno_sr);jump(image,0x24cf6c,(void *)sub_14024CF6C);
 FlushInstructionCache(GetCurrentProcess(),image,0x260000);
 int32_t counts[]={INT_MIN,INT_MIN+1,-4,-1,0,1,2,INT_MAX};int cases=0;
 struct record {uint64_t result,delta;uint32_t count;int error,invalid,refills;unsigned char stream[96];} records[2];
 for(int count=0;count<8;++count)for(int byte=0;byte<256;++byte)for(int null=0;null<2;++null) {
  unsigned char bytes[32];memset(bytes,0x5a,sizeof bytes);bytes[16]=byte;
  for(int native=0;native<2;++native) {
   unsigned char stream[96];memset(stream,0x5a,sizeof stream);*(void **)stream=bytes+16;*(int32_t *)(stream+16)=counts[count];
   FILE *input=null?NULL:(FILE *)stream;error=55;invalid=refills=0;
   struct record *r=&records[native];memset(r,0,sizeof *r);
   r->result=native?((uint64_t (*)(FILE *))(image+0x20bac8))(input):getc_nolock_0(input);
   r->count=*(uint32_t *)(stream+16);r->delta=*(uintptr_t *)stream-(uintptr_t)(bytes+16);
   r->error=error;r->invalid=invalid;r->refills=refills;
   *(uintptr_t *)stream=r->delta;memcpy(r->stream,stream,sizeof stream);
  }
  if(memcmp(records,records+1,sizeof records[0]))return 3;cases++;
 }
 printf("%d native getc signed-countdown/refill/byte/return comparisons pass\n",cases);
 VirtualFree(image,0,MEM_RELEASE);return 0;
}
'''
        directory=PROJECT/'reports/client-file-open-20261002';directory.mkdir(parents=True,exist_ok=True)
        fixture=directory/'getc_fixture.c';fixture.write_text(text);exe=directory/'getc_fixture.exe'
        run=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe',str(fixture),'-O0','-std=gnu11','-fstack-protector-all','-fno-strict-aliasing','-I',str(PROJECT/'src/rebuild'),'-I',str(PROJECT/'exports/client'),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(run.returncode,0,run.stderr)
        run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=15)
        (directory/'getc-stdout.txt').write_text(run.stdout)
        self.assertEqual(run.returncode,0,run.stdout+run.stderr)
        print(run.stdout.strip())

    def test_native_open_and_conversion_chain(self):
        source=read_client_source()
        if b'sr_file_mode' not in source:source,_=repair(source)
        def body(rva):
            m=('//----- (%016X)'%(0x140000000+rva)).encode();a=source.index(m);b=source.index(b'//----- (',a+len(m));return source[a:b].decode()
        a=source.index(b'/* Native CRT buffer:');b=source.index(b'__int64',a)
        layouts=source[a:b].decode()
        a=re.search(rb'__int64\s+sr_path_mbs\(_BYTE \*a1,',source).start();b=re.search(rb'__int64\s+sr_path_wide\(',source[a:]).start()+a
        converter=source[a:b].decode()
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'))
        text=r'''#include "export_compat.h"
#include <stdio.h>
typedef void _LocaleUpdate;
static unsigned dword_140404A6C[19065404];
static unsigned char thread_data[968],locale_data[32],descriptors[4608];
static uint64_t descriptor_table[2];
static unsigned char *image;
static int cfg_cp,cfg_changed,cfg_ansi,cfg_accept,cfg_failure,cfg_result,cfg_lock;
static unsigned cfg_open,cfg_stream;static const char *cfg_mode,*cfg_name;
static unsigned char allocation[2048] __attribute__((aligned(16)));
struct trace {unsigned char stream[112],wide[2048];uint64_t result,allocation_size;
 unsigned global_count,thread_flags;int err,parses,opens,allocs,frees,invalid,ansi,locale,unlock,flags,sharing;unsigned char permission,descriptor_flags;};
static struct trace trace;
static int error_number;
static int *errno_sr(void) {return &error_number;}
static void sub_14024D14C(unsigned error) {error_number=error;}
static void sub_14024CF6C(void) {trace.invalid++;}
static __int64 sub_140261150(int fd) {if(fd!=7)abort();trace.unlock++;return 0;}
static __int64 sr_path_malloc(uint64_t size) {
 trace.allocs++;trace.allocation_size=size;
 if(cfg_failure)return 0;if(size>sizeof allocation)abort();memset(allocation,0x5a,sizeof allocation);return (intptr_t)allocation;
}
static void free_base(void *p) {if(p!=allocation)abort();trace.frees++;}
static unsigned sub_14024EDA4(void) {trace.ansi++;return cfg_ansi;}
static _LocaleUpdate *sub_140213644(_LocaleUpdate *out,void *provided) {
 if(provided)abort();trace.locale++;uintptr_t *p=out;p[0]=(uintptr_t)thread_data;p[1]=(uintptr_t)locale_data;p[2]=0;
 ((unsigned char *)out)[24]=cfg_changed;return out;
}
static __int64 sub_1402507BC(__int64 out,char *mode) {
 if(mode!=cfg_mode)abort();trace.parses++;
 unsigned int data[]={cfg_open,cfg_stream,(unsigned)cfg_accept};memcpy((void *)out,data,sizeof data);return out;
}
static __int64 wsopen_nolock(_DWORD *lock,unsigned int *fd,__int64 wide,int flags,int sharing,char permission) {
 trace.opens++;trace.flags=flags;trace.sharing=sharing;trace.permission=(unsigned char)permission;
 if(wide) {size_t bytes=(wcslen((wchar_t *)(uintptr_t)wide)+1)*2;if(bytes>sizeof trace.wide)abort();memcpy(trace.wide,(void *)wide,bytes);}
 *lock=cfg_lock;*fd=7;return (unsigned)cfg_result;
}
__int64 sopen_s(unsigned int *,_BYTE *,int,int,int);
__int64 common_sopen_dispatch__char(_BYTE *,int,int,int,unsigned int *,int);
__int64 sopen_nolock(_DWORD *,unsigned int *,_BYTE *,int,int,char);
'''+layouts+converter+body(0x266274)+body(0x26585c)+body(0x26638c)+body(0x251044)+r'''
static void jump(unsigned rva,void *target) {
 unsigned char head[]={0xff,0x25,0,0,0,0};memcpy(image+rva,head,6);memcpy(image+rva+6,&target,8);
}
int main(void) {
 image=VirtualAlloc(0,0x4d00000,MEM_RESERVE,PAGE_READWRITE);if(!image)return 1;
 unsigned pages[]={0x213000,0x238000,0x24c000,0x24d000,0x24e000,0x250000,0x251000,0x253000,0x259000,0x261000,0x265000,0x266000,0x26e000,0x4cbe000,0x4cbf000};
 for(int i=0;i<15;++i)if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 2;
'''
        for rva in [0x251044,0x26585c,0x266274,0x26638c,0x238394,0x259504]:
            end=next((e.struct.EndAddress for e in pe.DIRECTORY_ENTRY_EXCEPTION if e.struct.BeginAddress==rva),rva+0x5a)
            text+=' {unsigned char data[]={'+','.join(map(str,pe.get_data(rva,end-rva)))+'};memcpy(image+'+hex(rva)+',data,sizeof data);}\n'
        for rva,name in [(0x213644,'sub_140213644'),(0x24eda4,'sub_14024EDA4'),(0x253f60,'sr_path_malloc'),(0x24e018,'free_base'),(0x24d14c,'sub_14024D14C'),(0x24d1bc,'errno_sr'),(0x24cf6c,'sub_14024CF6C'),(0x261150,'sub_140261150'),(0x2507bc,'sub_1402507BC'),(0x266430,'wsopen_nolock')]:
            text+=f' jump({hex(rva)},(void *){name});\n'
        text+=r'''
 *(void **)(image+0x26e260)=(void *)GetLastError;*(void **)(image+0x26e0a0)=(void *)MultiByteToWideChar;
 descriptor_table[0]=(uintptr_t)descriptors;
 *(_QWORD *)&dword_140404A6C[19065401]=(uintptr_t)descriptor_table[0];
 *(uint64_t *)(image+0x4cbf350)=descriptor_table[0];
 FlushInstructionCache(GetCurrentProcess(),image,0x4d00000);
 static const char long_name[701]={[0 ... 699]='a',[700]=0};
 const char *inputs[]={NULL,"","profile.txt","../\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e",long_name,"\xff"};
 if((uintptr_t)inputs[2]<=UINT32_MAX)return 8;
 unsigned opening[]={0,0x8000,0x301,0xf1234567},stream_flags[]={0,0x2001,0x80000000,0xffffffff};
 unsigned char records[2][sizeof trace];int cases=0;
 for(int name=0;name<6;++name)for(int policy=0;policy<3;++policy)for(cfg_changed=0;cfg_changed<2;++cfg_changed)
 for(cfg_failure=0;cfg_failure<2;++cfg_failure)for(cfg_accept=0;cfg_accept<2;++cfg_accept)
 for(int flag=0;flag<4;++flag)for(int result=0;result<3;++result)for(cfg_lock=0;cfg_lock<2;++cfg_lock) {
  cfg_name=inputs[name];cfg_mode="rb";cfg_cp=policy==0?65001:1252;cfg_ansi=policy!=2;
  cfg_open=opening[flag];cfg_stream=stream_flags[flag];cfg_result=result==0?0:result==1?13:-1;
  for(int native=0;native<2;++native) {
   memset(&trace,0,sizeof trace);memset(allocation,0x5a,sizeof allocation);
   memset(descriptors,0x5a,sizeof descriptors);memset(thread_data,0,sizeof thread_data);*(unsigned *)(thread_data+936)=0x36;
   *(unsigned *)(locale_data+12)=cfg_cp;error_number=55;SetLastError(0);
   dword_140404A6C[19064595]=0xffffffff;*(unsigned *)(image+0x4cbe6b8)=0xffffffff;
   unsigned char stream[112];memset(stream,0x5a,sizeof stream);
   uint64_t r=native?((uint64_t (*)(const char *,const char *,int,__int64))(image+0x251044))(cfg_name,cfg_mode,64,(intptr_t)(stream+16)):
                    sub_140251044((char *)cfg_name,(char *)cfg_mode,64,(intptr_t)(stream+16));
   trace.result=r?r-(uintptr_t)(stream+16)+1:0;trace.global_count=native?*(unsigned *)(image+0x4cbe6b8):dword_140404A6C[19064595];
   trace.err=error_number;trace.thread_flags=*(unsigned *)(thread_data+936);trace.descriptor_flags=descriptors[7*72+56];
   memcpy(trace.stream,stream,sizeof stream);memcpy(records[native],&trace,sizeof trace);
   for(int k=0;k<16;++k)if(stream[k]!=0x5a||stream[96+k]!=0x5a)return 7;
   if(trace.allocs&&!cfg_failure)for(size_t k=trace.allocation_size;k<sizeof allocation;++k)if(allocation[k]!=0x5a)return 9;
  }
  if(memcmp(records[0],records[1],sizeof trace)) {printf("mismatch input=%d policy=%d changed=%d allocation_failure=%d accept=%d flags=%d result=%d lock=%d\n",name,policy,cfg_changed,cfg_failure,cfg_accept,flag,result,cfg_lock);return 3;}
  cases++;
 }
 printf("%d native fopen/mode/dispatch/filename-conversion comparisons pass\n",cases);
 VirtualFree(image,0,MEM_RELEASE);return 0;
}
'''
        directory=PROJECT/'reports/client-file-open-20261002';directory.mkdir(parents=True,exist_ok=True)
        fixture=directory/'fixture.c';fixture.write_text(text);exe=directory/'fixture.exe'
        run=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe',str(fixture),'-O0','-std=gnu11','-fstack-protector-all','-fno-strict-aliasing','-I',str(PROJECT/'src/rebuild'),'-I',str(PROJECT/'exports/client'),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(run.returncode,0,run.stderr)
        run=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (directory/'stdout.txt').write_text(run.stdout);(directory/'stderr.txt').write_text(run.stderr)
        self.assertEqual(run.returncode,0,run.stdout+run.stderr)
        print(run.stdout.strip())


if __name__=='__main__':unittest.main()
