"""Compare recovered getdrive with original code using controlled OS boundaries."""
from pathlib import Path
from client_sources import read_client_source
import subprocess
import unittest
import pefile
from repair_client_directory import PROJECT, BODY, repair


class DirectoryRecovery(unittest.TestCase):
    def test_original_getdrive_equivalence(self):
        source = read_client_source()
        if BODY not in source:
            source, _ = repair(source)
        start = source.index(b'//----- (000000014026426C)')
        end = source.index(b'//----- (0000000140264364)', start)
        pe = pefile.PE(str(PROJECT.parent / 'subrosa.exe'))
        original = pe.get_data(0x26426c, 0xf8)
        directory = PROJECT / 'reports/client-directory-20261002'
        directory.mkdir(parents=True, exist_ok=True)
        (directory / 'original_getdrive.bin').write_bytes(original)
        code = r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static unsigned short first, second;
static int mode, error_number, calls, allocations, frees;
static unsigned int capacity;
static unsigned long long alloc_count, alloc_width;
static int *errno_sr(void) { return &error_number; }
static DWORD WINAPI fake_directory(DWORD size, wchar_t *buffer) {
  ++calls; capacity=size;
  if(mode==1 && calls==1) return 0;
  if(mode>=2 && calls==1) return 300;
  if(mode==4 && calls==2) return 0;
  if(size<3) abort(); buffer[0]=first;buffer[1]=second;buffer[2]=0;
  return 2;
}
static long long sr_directory_calloc(unsigned long long count,unsigned long long width) {
  ++allocations;alloc_count=count;alloc_width=width;
  if(mode==3) return 0;
  return (long long)(uintptr_t)calloc(count,width);
}
static void free_base(void *p) { ++frees;free(p); }
static void *fake_fill(void *p,unsigned char value,unsigned long long size) {
  if(size!=522) abort();return memset(p,value,size);
}
#define GetCurrentDirectoryW fake_directory
''' .encode() + source[start:end] + r'''
#undef GetCurrentDirectoryW
static void jump(unsigned char *image,size_t offset,void *target) {
  unsigned char *p=image+offset; p[0]=0x48;p[1]=0xb8;
  uint64_t address=(uint64_t)(uintptr_t)target; memcpy(p+2,&address,8);
  p[10]=0xff;p[11]=0xe0;
}
typedef struct {int result,error,calls,allocations,frees;unsigned int capacity;
                unsigned long long count,width;} observation;
static observation observe(int (*function)(void)) {
  error_number=55;calls=allocations=frees=0;capacity=0;alloc_count=alloc_width=0;
  observation o;memset(&o,0,sizeof o);o.result=function();
  o.error=error_number;o.calls=calls;o.allocations=allocations;o.frees=frees;
  o.capacity=capacity;o.count=alloc_count;o.width=alloc_width;return o;
}
int main(void) {
  unsigned char *image=VirtualAlloc(NULL,0x303000,MEM_RESERVE|MEM_COMMIT,PAGE_EXECUTE_READWRITE);
  if(!image) return 1;
  unsigned char original[] = {''' .encode() + ','.join(str(x) for x in original).encode() + r'''};
  memcpy(image+0x26426c,original,sizeof original);
  jump(image,0x1fcd30,fake_fill);jump(image,0x24df98,sr_directory_calloc);
  jump(image,0x24d1bc,errno_sr);jump(image,0x24e018,free_base);
  /* Check the original frame cookie while preserving the EAX drive result. */
  unsigned char cookie_check[]={0x48,0x3b,0x0d,0,0,0,0,0x75,0x01,0xc3,0x0f,0x0b};
  int32_t cookie_disp=0x3020a0-(0x1f8b20+7);
  memcpy(cookie_check+3,&cookie_disp,4);memcpy(image+0x1f8b20,cookie_check,sizeof cookie_check);
  *(uint64_t *)(image+0x3020a0)=UINT64_C(0x2b992ddfa232);
  *(uint64_t *)(image+0x26e138)=(uint64_t)(uintptr_t)fake_directory;
  FlushInstructionCache(GetCurrentProcess(),image,0x303000);
  int (*native)(void)=(int (*)(void))(image+0x26426c);
  unsigned long total=0;
  for(unsigned int letter=0;letter<65536;letter+=7)
    for(int colon=0;colon<2;++colon)
      for(mode=0;mode<5;++mode) {
        first=(unsigned short)letter;second=colon?L':':L'x';
        observation a=observe(native),b=observe(getdrive);
        if(memcmp(&a,&b,sizeof a)) {
          fprintf(stderr,"mismatch letter %u colon %d mode %d native %d C %d\n",letter,colon,mode,a.result,b.result);return 2;
        }
        ++total;
      }
  puts("getdrive native return, errno, buffer capacity, allocation arguments and cleanup pass");
  printf("%lu native directory comparisons\n",total);
  VirtualFree(image,0,MEM_RELEASE);return 0;
}
''' .encode()
        fixture = directory / 'directory_fixture.c'
        fixture.write_bytes(code)
        executable = directory / 'directory_fixture.exe'
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', str(fixture),
                                 '-O0', '-fstack-protector-all', '-o', str(executable)],
                                capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)
        result = subprocess.run([str(executable)], capture_output=True, text=True, timeout=30)
        (directory / 'stdout.txt').write_text(result.stdout)
        (directory / 'stderr.txt').write_text(result.stderr)
        self.assertEqual(result.returncode, 0, result.stderr)
        print(result.stdout.strip())


if __name__ == '__main__':
    unittest.main()
