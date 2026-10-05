"""Exercise original directory-change machine code with controlled OS boundaries."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import pefile
from repair_client_chdir import PROJECT, repair, CHDIR


class DirectoryChangeRecovery(unittest.TestCase):
    def test_native_directory_change_chain(self):
        source=read_client_source()
        if CHDIR not in source:
            source,_=repair(source)
        def region(marker):
            a=source.index(marker);b=source.index(b'//----- (',a+len(marker))
            return source[a:b]
        # Reuse the actually recovered multibyte converter, but control allocations.
        a=source.index(b'/* Native CRT buffer:');b=source.index(b'//----- (000000014024A574)',a)
        common=source[a:b]
        m=re.search(rb'__int64\s+sr_path_malloc\(',common).start()
        n=re.search(rb'__int64\s+sr_path_mbs\(',common).start()
        common=common[:m]+common[n:]
        common=common[:re.search(rb'__int64\s+sr_path_wide\(',common).start()]
        a=source.index(b'unsigned int sr_chdir_codepage');b=source.index(b'//----- (000000014024BCDC)',a)
        current=source[a:b]
        code=common+current+region(b'//----- (0000000140264844)')+region(b'//----- (0000000140264508)')+region(b'//----- (000000014024C22C)')+region(b'//----- (0000000140258A84)')
        pe=pefile.PE(str(PROJECT.parent/'subrosa.exe'))
        directory=PROJECT/'reports/client-chdir-20261002';directory.mkdir(parents=True,exist_ok=True)
        segments=[(0x24c22c,0x134),(0x264844,0xcf),(0x264508,0x197),
                  (0x24bbc0,0x11c),(0x24bcdc,0xc5),(0x238394,0x176),
                  (0x23850c,0x18a),(0x258a84,0x96),(0x259504,0x5a)]
        copies=[]
        for rva,size in segments:
            data=pe.get_data(rva,size);(directory/('original_%x.bin'%rva)).write_bytes(data)
            copies.append('{unsigned char code[]={'+','.join(str(x) for x in data)+'};memcpy(image+0x%x,code,sizeof code);}'%rva)
        header=r'''#include "export_compat.h"
#include <windows.h>
#include <stdio.h>
typedef void _LocaleUpdate;
static unsigned char thread_data[944],locale_data[32];
static int cp,changed,ansi,mode,fail_allocation,allocations,frees,invalid_calls,query_calls,set_calls,env_calls;
static int error_number,dos_error;
static size_t alloc_sizes[16];
static wchar_t current[800],set_path[800],env_name[800],env_value[800];
static int *errno_sr(void) {return &error_number;}
static int *sub_14024D19C(void) {return &dos_error;}
static long long sub_14024CF6C(void) {++invalid_calls;return 0;}
static void sub_14024D14C(unsigned int error) {error_number=(int)error;dos_error=(int)error;}
static long long sr_path_malloc(unsigned long long size) {
  alloc_sizes[allocations++]=(size_t)size;
  if(allocations==fail_allocation) return 0;
  return (long long)(uintptr_t)malloc((size_t)size);
}
static void free_base(void *p) {++frees;free(p);}
static unsigned int sub_14024EDA4(void) {return ansi;}
static _LocaleUpdate *sub_140213644(_LocaleUpdate *p,void *ignored) {
  uintptr_t *fields=p;fields[0]=(uintptr_t)thread_data;fields[1]=(uintptr_t)locale_data;fields[2]=0;
  ((unsigned char *)p)[24]=(unsigned char)changed;return p;
}
static int fake_upper(int c) {return toupper(c);}
static BOOL WINAPI fake_set_directory(const wchar_t *path) {
  ++set_calls;if(path) wcscpy(set_path,path);
  if(mode==1 || !path) {SetLastError(ERROR_PATH_NOT_FOUND);return 0;}return 1;
}
static DWORD WINAPI fake_get_directory(DWORD size,wchar_t *buffer) {
  ++query_calls;
  if(mode==2 || (mode==3 && query_calls==2)) {SetLastError(ERROR_ACCESS_DENIED);return 0;}
  DWORD length=(DWORD)wcslen(current);
  if(length>=size) return length+1;
  memcpy(buffer,current,(length+1)*2);return length;
}
static BOOL WINAPI fake_set_environment(const wchar_t *name,const wchar_t *value) {
  ++env_calls;if(name) wcscpy(env_name,name);if(value) wcscpy(env_value,value);
  if(mode==4) {SetLastError(ERROR_ACCESS_DENIED);return 0;}return 1;
}
long long _acrt_SetCurrentDirectoryA(_BYTE *);
long long _acrt_SetEnvironmentVariableA(_BYTE *,_BYTE *);
long long sub_140258A84(unsigned int,long long,long long,long long,long long,long long,long long,long long);
#define GetCurrentDirectoryW fake_get_directory
#define SetCurrentDirectoryW fake_set_directory
#define SetEnvironmentVariableW fake_set_environment
'''.encode()
        code=header+code+r'''
#undef GetCurrentDirectoryW
#undef SetCurrentDirectoryW
#undef SetEnvironmentVariableW
static void jump(unsigned char *image,size_t offset,void *target) {
  unsigned char *p=image+offset;p[0]=0x48;p[1]=0xb8;
  uint64_t address=(uint64_t)(uintptr_t)target;memcpy(p+2,&address,8);p[10]=0xff;p[11]=0xe0;
}
typedef long long (*change_function)(_BYTE *);
typedef struct {
  uint64_t result;int error,dos,allocations,frees,invalid,queries,sets,envs;unsigned int flags;
  size_t sizes[16];wchar_t set[800],name[800],value[800];
} observation;
static observation observe(change_function function,const char *input) {
  observation o;memset(&o,0,sizeof o);
  allocations=frees=invalid_calls=query_calls=set_calls=env_calls=0;error_number=55;dos_error=66;
  memset(alloc_sizes,0,sizeof alloc_sizes);memset(set_path,0,sizeof set_path);
  memset(env_name,0,sizeof env_name);memset(env_value,0,sizeof env_value);
  memset(thread_data,0,sizeof thread_data);*(unsigned int *)(thread_data+936)=0x36;
  *(unsigned int *)(locale_data+12)=cp;SetLastError(0);
  o.result=(uint64_t)function((_BYTE *)input);o.error=error_number;o.dos=dos_error;
  o.allocations=allocations;o.frees=frees;o.invalid=invalid_calls;o.queries=query_calls;
  o.sets=set_calls;o.envs=env_calls;o.flags=*(unsigned int *)(thread_data+936);
  memcpy(o.sizes,alloc_sizes,sizeof alloc_sizes);memcpy(o.set,set_path,sizeof set_path);
  memcpy(o.name,env_name,sizeof env_name);memcpy(o.value,env_value,sizeof env_value);return o;
}
int main(void) {
  unsigned char *image=VirtualAlloc(NULL,0x303000,MEM_RESERVE|MEM_COMMIT,PAGE_EXECUTE_READWRITE);
  if(!image) return 1;
'''.encode()+''.join(copies).encode()+r'''
  jump(image,0x213644,sub_140213644);jump(image,0x24eda4,sub_14024EDA4);
  jump(image,0x253f60,sr_path_malloc);jump(image,0x24e018,free_base);
  jump(image,0x24d14c,sub_14024D14C);jump(image,0x24d1bc,errno_sr);
  jump(image,0x24d19c,sub_14024D19C);jump(image,0x24cf6c,sub_14024CF6C);
  jump(image,0x23acb8,fake_upper);
  unsigned char check[]={0x48,0x3b,0x0d,0,0,0,0,0x75,0x01,0xc3,0x0f,0x0b};
  int32_t displacement=0x3020a0-(0x1f8b20+7);memcpy(check+3,&displacement,4);
  memcpy(image+0x1f8b20,check,sizeof check);*(uint64_t *)(image+0x3020a0)=0x2b992ddfa232ULL;
  *(uint64_t *)(image+0x26e138)=(uint64_t)(uintptr_t)fake_get_directory;
  *(uint64_t *)(image+0x26e140)=(uint64_t)(uintptr_t)fake_set_directory;
  *(uint64_t *)(image+0x26e148)=(uint64_t)(uintptr_t)fake_set_environment;
  *(uint64_t *)(image+0x26e260)=(uint64_t)(uintptr_t)GetLastError;
  *(uint64_t *)(image+0x26e0a0)=(uint64_t)(uintptr_t)MultiByteToWideChar;
  *(uint64_t *)(image+0x26e0b0)=(uint64_t)(uintptr_t)WideCharToMultiByte;
  FlushInstructionCache(GetCurrentProcess(),image,0x303000);
  change_function native=(change_function)(image+0x24c22c);
  const char *inputs[]={NULL,".","D:.","\xff"};
  const wchar_t *paths[]={L"d:\\local",L"\\\\server\\share",L"//server/share",L"D:\\日本語"};
  unsigned int cases=0;
  for(int path=0;path<5;++path) {
    if(path<4) wcscpy(current,paths[path]);
    else {current[0]=L'd';current[1]=L':';current[2]=L'\\';for(int i=3;i<703;++i) current[i]=L'a';current[703]=0;}
    for(int input=0;input<4;++input) for(int policy=0;policy<3;++policy)
      for(changed=0;changed<2;++changed) for(mode=0;mode<5;++mode)
        for(fail_allocation=0;fail_allocation<6;++fail_allocation) {
          cp=policy==0?65001:1252;ansi=policy!=2;
          observation a=observe(native,inputs[input]),b=observe(sub_14024C22C,inputs[input]);
          if(memcmp(&a,&b,sizeof a)) {
            fprintf(stderr,"mismatch path %d input %d policy %d changed %d mode %d fail %d returns %llx/%llx errors %d/%d allocations %d/%d frees %d/%d queries %d/%d envs %d/%d\n",path,input,policy,changed,mode,fail_allocation,a.result,b.result,a.error,b.error,a.allocations,b.allocations,a.frees,b.frees,a.queries,b.queries,a.envs,b.envs);return 2;
          }
          ++cases;
        }
  }
  printf("%u native directory-change chain comparisons: returns, buffers, Unicode, UNC, locale flags, allocation failures, environment arguments and cleanup pass\n",cases);
  VirtualFree(image,0,MEM_RELEASE);return 0;
}
'''.encode()
        fixture=directory/'chdir_fixture.c';fixture.write_bytes(code)
        executable=directory/'chdir_fixture.exe'
        result=subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe',str(fixture),
            '-std=gnu11','-O0','-fno-strict-aliasing','-fstack-protector-all',
            '-I',str(PROJECT/'src/rebuild'),'-I',str(PROJECT/'exports/client'),'-o',str(executable)],
            capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result=subprocess.run([str(executable)],capture_output=True,text=True,timeout=30)
        (directory/'stdout.txt').write_text(result.stdout);(directory/'stderr.txt').write_text(result.stderr)
        self.assertEqual(result.returncode,0,result.stderr)
        print(result.stdout.strip())


if __name__=='__main__':unittest.main()
