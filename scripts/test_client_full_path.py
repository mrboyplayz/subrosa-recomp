"""Compare the recovered path pipeline against its complete native code chain."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import pefile
from repair_client_full_path import PROJECT, repair, BODY


class FullPathRecovery(unittest.TestCase):
    def test_native_path_pipeline(self):
        source=read_client_source()
        if BODY not in source:
            source,_=repair(source)
        start=source.index(b'/* Native CRT buffer:')
        end=source.index(b'//----- (000000014024A6EC)',start)
        recovered=source[start:end]
        # Control allocations in both implementations to exercise every failure boundary.
        a=re.search(rb'__int64\s+sr_path_malloc\(',recovered).start()
        b=re.search(rb'__int64\s+sr_path_mbs\(',recovered).start()
        recovered=recovered[:a]+recovered[b:]
        def region(marker):
            a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
            return source[a:b]
        wide_conversion=region(b'//----- (000000014024AAA0)')
        wrapper=region(b'//----- (0000000140258A84)')
        caller=region(b'//----- (000000014024AF64)')
        caller=caller.replace(b'__acrt_get_full_path_name_narrow_acp_or_utf8____crt_win32_buffer_no_resizing',b'capture_path_call')
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'))
        directory=PROJECT/'reports/client-full-path-20261002'
        directory.mkdir(parents=True,exist_ok=True)
        segments=[(0x24a574,0x177),(0x238394,0x176),(0x24a864,0xe2),
                  (0x24aaa0,0x111),(0x258a84,0x96),(0x259504,0x5a),(0x24af64,0x158)]
        copies=[]
        for rva,size in segments:
            data=pe.get_data(rva,size)
            (directory/('original_%x.bin'%rva)).write_bytes(data)
            copies.append('{unsigned char code[]={'+','.join(str(x) for x in data)+
                          '};memcpy(image+0x%x,code,sizeof code);}'%rva)
        header=r'''#include "export_compat.h"
#include <windows.h>
#include <stdio.h>
typedef void _LocaleUpdate;
static unsigned char thread_data[944],locale_data[32];
static int locale_cp,locale_changed,ansi,allocation_fail,allocation_calls,free_calls,error_number;
static size_t allocation_sizes[8];
static int *errno_sr(void) {return &error_number;}
static void sub_14024D14C(unsigned int error) {error_number=(int)error;}
static long long sr_path_malloc(unsigned long long size) {
  allocation_sizes[allocation_calls++]=size;
  if(allocation_calls==allocation_fail) return 0;
  return (long long)(uintptr_t)malloc((size_t)size);
}
static void free_base(void *p) {++free_calls;free(p);}
static unsigned int sub_14024EDA4(void) {return ansi;}
static _LocaleUpdate *sub_140213644(_LocaleUpdate *p,void *ignored) {
  uintptr_t *fields=p;fields[0]=(uintptr_t)thread_data;fields[1]=(uintptr_t)locale_data;
  fields[2]=0;((unsigned char *)p)[24]=(unsigned char)locale_changed;return p;
}
long long sub_140258A84(unsigned int,long long,long long,long long,long long,long long,long long,long long);
long long __acrt_wcs_to_mbs_cp____crt_win32_buffer_no_resizing(_WORD *,long long,unsigned int);
'''.encode()
        code=header+recovered+wide_conversion+wrapper+r'''
static int current_drive;
static unsigned int is_valid_drive(unsigned int drive) {return drive>=1 && drive<=26;}
static int getdrive(void) {return current_drive;}
static int *sub_14024D19C(void) {return &error_number;}
static long long sub_14024CF6C(void) {return 0;}
static long long __acrt_get_full_path_name_narrow_acp_or_utf8____crt_win32_buffer_public_dynamic_resizing(_BYTE *p,long long b) {abort();}
static __m128i *sub_14024B62C(long long *p) {abort();}
static long long capture_path_call(_BYTE *input,long long address) {
  sr_path_buffer *b=(sr_path_buffer *)(uintptr_t)address;
  if(b->initial!=b->buffer || b->initial_capacity!=b->capacity || b->size || b->owned) abort();
  if(!input[0] || strlen((char *)input)>3) abort();
  strcpy((char *)b->buffer,(char *)input);b->size=strlen((char *)input);
  return 0;
}
'''.encode()+caller+r'''
static void jump(unsigned char *image,size_t offset,void *target) {
  unsigned char *p=image+offset;p[0]=0x48;p[1]=0xb8;
  uint64_t address=(uint64_t)(uintptr_t)target;memcpy(p+2,&address,8);p[10]=0xff;p[11]=0xe0;
}
typedef long long (*path_function)(_BYTE *,long long);
typedef struct {
  unsigned int result;int error,allocations,frees;unsigned int flags;
  uint64_t capacity,size;unsigned char owned;size_t alloc_sizes[8];unsigned char bytes[1100];
} observation;
static observation observe(path_function function,const char *input,int capacity,int own) {
  observation o;memset(&o,0,sizeof o);
  unsigned char buffer[1100];memset(buffer,0x5a,sizeof buffer);
  sr_path_buffer output={buffer,(uint64_t)capacity,buffer,(uint64_t)capacity,99,(unsigned char)own};
  error_number=55;allocation_calls=free_calls=0;memset(allocation_sizes,0,sizeof allocation_sizes);
  memset(thread_data,0,sizeof thread_data);*(unsigned int *)(thread_data+936)=0x36;
  *(unsigned int *)(locale_data+12)=locale_cp;
  o.result=(unsigned int)function((_BYTE *)input,(long long)(uintptr_t)&output);
  o.error=error_number;o.allocations=allocation_calls;o.frees=free_calls;
  o.flags=*(unsigned int *)(thread_data+936);o.capacity=output.capacity;
  o.size=output.size;o.owned=output.owned;memcpy(o.alloc_sizes,allocation_sizes,sizeof allocation_sizes);
  memcpy(o.bytes,buffer,sizeof buffer);return o;
}
int main(void) {
  unsigned char *image=VirtualAlloc(NULL,0x303000,MEM_RESERVE|MEM_COMMIT,PAGE_EXECUTE_READWRITE);
  if(!image) return 1;
'''.encode()+''.join(copies).encode()+r'''
  jump(image,0x213644,sub_140213644);jump(image,0x24eda4,sub_14024EDA4);
  jump(image,0x253f60,sr_path_malloc);jump(image,0x24e018,free_base);
  jump(image,0x24d14c,sub_14024D14C);jump(image,0x24d1bc,errno_sr);
  unsigned char check[]={0x48,0x3b,0x0d,0,0,0,0,0x75,0x01,0xc3,0x0f,0x0b};
  int32_t displacement=0x3020a0-(0x1f8b20+7);memcpy(check+3,&displacement,4);
  memcpy(image+0x1f8b20,check,sizeof check);
  *(uint64_t *)(image+0x3020a0)=0x2b992ddfa232ULL;
  *(uint64_t *)(image+0x26e150)=(uint64_t)(uintptr_t)GetFullPathNameW;
  *(uint64_t *)(image+0x26e260)=(uint64_t)(uintptr_t)GetLastError;
  *(uint64_t *)(image+0x26e0a0)=(uint64_t)(uintptr_t)MultiByteToWideChar;
  *(uint64_t *)(image+0x26e0b0)=(uint64_t)(uintptr_t)WideCharToMultiByte;
  FlushInstructionCache(GetCurrentProcess(),image,0x303000);
  path_function native=(path_function)(image+0x24a574);
  char long_path[701];memset(long_path,'a',700);long_path[700]=0;
  const char *inputs[]={NULL,"",".","C:.","../example","../\xe6\x97\xa5\xe6\x9c\xac\xe8\xaa\x9e",long_path,"\xff"};
  int capacities[]={0,1,4,1100};unsigned int cases=0;
  for(int input=0;input<8;++input) for(int cap=0;cap<4;++cap)
    for(int policy=0;policy<3;++policy) for(locale_changed=0;locale_changed<2;++locale_changed)
      for(int own=0;own<2;++own) for(allocation_fail=0;allocation_fail<3;++allocation_fail) {
        locale_cp=policy==0?65001:1252;ansi=policy!=2;
        observation a=observe(native,inputs[input],capacities[cap],own);
        observation b=observe(__acrt_get_full_path_name_narrow_acp_or_utf8____crt_win32_buffer_no_resizing,inputs[input],capacities[cap],own);
        if(memcmp(&a,&b,sizeof a)) {
          fprintf(stderr,"mismatch input %d cap %d policy %d changed %d own %d failure %d native result %u C %u native errno %d C %d allocations %d/%d frees %d/%d\n",input,cap,policy,locale_changed,own,allocation_fail,a.result,b.result,a.error,b.error,a.allocations,b.allocations,a.frees,b.frees);
          return 2;
        }
        ++cases;
      }
  /* Check the actual getcwd caller's contiguous object and return forwarding. */
  jump(image,0x24a574,capture_path_call);jump(image,0x26426c,getdrive);
  jump(image,0x24b7f8,is_valid_drive);
  FlushInstructionCache(GetCurrentProcess(),image,0x303000);
  typedef void *(*caller_function)(unsigned int,_BYTE *,int);
  caller_function native_caller=(caller_function)(image+0x24af64);
  for(current_drive=0;current_drive<=26;current_drive+=2) for(unsigned int drive=0;drive<=26;++drive) {
    unsigned char a[32],b[32];memset(a,0x5a,sizeof a);memset(b,0x5a,sizeof b);
    if(native_caller(drive,a,32)!=a || sub_14024AF64(drive,b,32)!=(__m128i *)b || memcmp(a,b,sizeof a)) return 3;
  }
  printf("%u native full-path pipeline comparisons and 378 getcwd caller comparisons: returns, code pages, buffers, locale flags, allocation sizes/failures and cleanup pass\n",cases);
  VirtualFree(image,0,MEM_RELEASE);return 0;
}
'''.encode()
        fixture=directory/'full_path_fixture.c';fixture.write_bytes(code)
        executable=directory/'full_path_fixture.exe'
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe',str(fixture),
            '-std=gnu11','-O0','-fno-strict-aliasing','-fstack-protector-all',
            '-I',str(PROJECT/'src/rebuild'),'-I',str(PROJECT/'exports/client'),'-o',str(executable)],
            capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(executable)],capture_output=True,text=True,timeout=30)
        (directory/'stdout.txt').write_text(result.stdout);(directory/'stderr.txt').write_text(result.stderr)
        self.assertEqual(result.returncode,0,result.stderr)
        print(result.stdout.strip())


if __name__=='__main__':
    unittest.main()
