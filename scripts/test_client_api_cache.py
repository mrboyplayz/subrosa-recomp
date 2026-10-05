"""Compare the original encoded-null initializer and exercise the real API lookup."""
from pathlib import Path
from client_sources import read_client_source
import subprocess
import unittest
import pefile
from repair_client_api_cache import PROJECT, repair
from repair_client_api_ranges import repair as repair_ranges, repair_module_names


class ApiCacheRecovery(unittest.TestCase):
    def test_native_initializer_and_windows_lookup(self):
        source = read_client_source()
        if b'  sub_14024FAF0();' not in source:
            source, _ = repair(source)
        if b'sr_api_modules_24f1f8' not in source:
            source, _ = repair_ranges(source)
        pe = pefile.PE(str(PROJECT.parent / 'subrosa.exe'))
        if b'__int16 sr_api_module_name_0[]' not in source:
            source = repair_module_names(source,pe)
        base = pe.OPTIONAL_HEADER.ImageBase
        def region(marker):
            start = source.index(marker)
            end = source.index(b'//----- (', start + len(marker))
            return source[start:end]
        # Find the lookup's original address marker, preserving its actual body.
        definition = source.index(b'__int64            try_get_function(', source.index(b'__int64            try_get_function(') + 1)
        lookup_start = source.rfind(b'//----- (', 0, definition)
        lookup_end = source.index(b'//----- (', definition)
        initializer = region(b'//----- (000000014024FAF0)')
        original = pe.get_data(0x24faf0, 52)
        heap_original = pe.get_data(0x260a78, 28)
        heap_entry = b'  sub_140260A78();' in source
        directory = PROJECT / 'reports/client-api-cache-20261002'
        directory.mkdir(parents=True, exist_ok=True)
        (directory / 'original_initializer.bin').write_bytes(original)
        tables = []
        for index in range(20):
            address = int.from_bytes(pe.get_data(0x28a6f0 + 8 * index, 8), 'little')
            data = pe.get_data(address - base, 512)
            words = []
            for offset in range(0, len(data), 2):
                word = int.from_bytes(data[offset:offset+2], 'little')
                words.append(word)
                if not word:
                    break
            tables.append('static __int16 module_%d[]={%s};\n' %
                          (index, ','.join(str(word) for word in words)))
        # Exercise the actual prepared table, rather than substituting a correct fixture table.
        table_start = source.index(b'__int16 sr_api_module_name_0[]')
        table_end = source.index(b'};',source.index(b'__int16 *off_14028A6F0[20]',table_start))+2
        actual_table = source[table_start:table_end]
        tables.append('static __int16 *expected_modules[20]={' +
                      ','.join('module_%d' % index for index in range(20)) + '};\n')
        module_id = int.from_bytes(pe.get_data(0x28abf8, 4), 'little')
        header = b'''#include "export_compat.h"
#include <windows.h>
#include <stdio.h>
static unsigned int dword_140404A6C[19065850];
static unsigned long long _security_cookie;
static int wcsncmp_sr(const __int16 *a,const wchar_t *b,size_t n) {
  return wcsncmp((const wchar_t *)a,b,n);
}
'''
        code = header + ''.join(tables).encode() + actual_table + b'\n' + initializer + source[lookup_start:lookup_end]
        code += region(b'//----- (0000000140260A78)')
        code += region(b'//----- (000000014024F1F8)')
        code += region(b'//----- (000000014024F02C)')
        code += region(b'//----- (000000014024EFE4)')
        code += b'static int expect_heap_entry=' + (b'1' if heap_entry else b'0') + b';\n'
        if b'crt_initialization_failure:' in source:
            code += b'''static char _acrt_initialize_locks(void) { return 1; }
static char _acrt_uninitialize_locks_0(void) { return 1; }
static char sub_140255CB8(void) { return 1; }
static void sub_1401FBFB8(unsigned code) { abort(); }
'''
        if b'sr_standard_streams' in source:
            code += b'''static char sub_140250554(void) { return 1; }
static char _acrt_uninitialize_ptd_0(void) { return 1; }
static __int64 sub_14020B408(void) { return 0; }
static unsigned sub_1402370D4(void) { return 0; }
static char initialize_global_variables(void) { return 1; }
'''
        code += b'''static __int64 WinMain_0(void) {
  for(int i=0;i<34;++i) {
    uint64_t value;memcpy(&value,&dword_140404A6C[19065329+2*i],8);
    if(value!=_security_cookie) abort();
  }
  if(expect_heap_entry && *(_QWORD *)&dword_140404A6C[19065847]!=(uintptr_t)GetProcessHeap()) abort();
  return 73;
}
''' + region(b'//----- (00000001400011D0)')
        code += r'''
int main(void) {
  for(int i=0;i<20;++i)
    if(wcscmp((wchar_t *)off_14028A6F0[i],(wchar_t *)expected_modules[i])) return 16;
  unsigned char *image=VirtualAlloc(NULL,0x4cc0000,MEM_RESERVE,PAGE_READWRITE);
  if(!image) return 1;
  if(!VirtualAlloc(image+0x24f000,0x2000,MEM_COMMIT,PAGE_EXECUTE_READWRITE) ||
     !VirtualAlloc(image+0x302000,0x1000,MEM_COMMIT,PAGE_READWRITE) ||
     !VirtualAlloc(image+0x260000,0x1000,MEM_COMMIT,PAGE_EXECUTE_READWRITE) ||
     !VirtualAlloc(image+0x26e000,0x1000,MEM_COMMIT,PAGE_READWRITE) ||
     !VirtualAlloc(image+0x4cbf000,0x1000,MEM_COMMIT,PAGE_READWRITE)) return 2;
  unsigned char original[]={''' .encode() + ','.join(str(x) for x in original).encode() + r'''};
  memcpy(image+0x24faf0,original,sizeof original);
  unsigned char heap_original[]={''' .encode() + ','.join(str(x) for x in heap_original).encode() + r'''};
  memcpy(image+0x260a78,heap_original,sizeof heap_original);
  *(uint64_t *)(image+0x26e048)=(uint64_t)(uintptr_t)GetProcessHeap;
  FlushInstructionCache(GetCurrentProcess(),image+0x260a78,sizeof heap_original);
  unsigned char (*native_heap)(void)=(unsigned char (*)(void))(image+0x260a78);
  if(native_heap()!=1 || !sub_140260A78()) return 12;
  if(*(uint64_t *)(image+0x4cbfa48)!=*(_QWORD *)&dword_140404A6C[19065847] ||
     *(_QWORD *)&dword_140404A6C[19065847]!=(uintptr_t)GetProcessHeap()) return 13;
  FlushInstructionCache(GetCurrentProcess(),image+0x24faf0,sizeof original);
  unsigned char (*native)(void)=(unsigned char (*)(void))(image+0x24faf0);
  uint64_t state=0x123456789abcdef0ULL;
  for(int iteration=0;iteration<4096;++iteration) {
    state^=state<<13;state^=state>>7;state^=state<<17;
    _security_cookie=iteration==0?0:iteration==1?UINT64_MAX:state;
    memcpy(image+0x3020a0,&_security_cookie,8);
    memset(image+0x4cbf228,0x5a,288);
    memset((char *)&dword_140404A6C[19065329]-8,0x5a,288);
    if(native()!=1 || sub_14024FAF0()!=1) return 3;
    if(memcmp(image+0x4cbf228,(char *)&dword_140404A6C[19065329]-8,288)) return 4;
    for(int i=0;i<34;++i) {
      uint64_t encoded;memcpy(&encoded,&dword_140404A6C[19065329+2*i],8);
      if(__ROR8__(encoded^_security_cookie,_security_cookie&63)!=0) return 5;
    }
  }
  _security_cookie=0x2b992ddfa232ULL;
  memset(&dword_140404A6C[19065329],0,34*8);
  if(expect_heap_entry) *(_QWORD *)&dword_140404A6C[19065847]=0;
  if(WinMain_sr()!=73) return 11;
  unsigned int ids[]={''' .encode() + str(module_id).encode() + r'''};
  uintptr_t address=(uintptr_t)try_get_function(0,(intptr_t)"AreFileApisANSI",ids,ids+1);
  uintptr_t expected=(uintptr_t)GetProcAddress(GetModuleHandleW(L"kernel32.dll"),"AreFileApisANSI");
  if(!address || address!=expected) return 6;
  if(try_get_function(0,(intptr_t)"AreFileApisANSI",ids,ids+1)!=(intptr_t)address) return 7;
  BOOL actual=((BOOL (*)(void))address)();
  if(actual!=AreFileApisANSI()) return 8;
  if(try_get_function(1,(intptr_t)"SubRosaDefinitelyAbsentAPI",ids,ids+1)!=0) return 9;
  if(try_get_function(1,(intptr_t)"AreFileApisANSI",ids,ids+1)!=0) return 10;
  FILETIME before,actual_time,after;
  GetSystemTimeAsFileTime(&before);
  sub_14024F1F8((intptr_t)&actual_time);
  DWORD fiber_slot=FlsAlloc(NULL);
  if(fiber_slot==FLS_OUT_OF_INDEXES || !sub_14024F02C(fiber_slot,(intptr_t)&actual_time)) return 17;
  if((void *)(uintptr_t)sub_14024EFE4(fiber_slot)!=FlsGetValue(fiber_slot) ||
     FlsGetValue(fiber_slot)!=&actual_time) return 18;
  FlsFree(fiber_slot);
  GetSystemTimeAsFileTime(&after);
  uint64_t low,got,high;memcpy(&low,&before,8);memcpy(&got,&actual_time,8);memcpy(&high,&after,8);
  if(!got || got+10000000<low || got>high+10000000) return 14;
  uintptr_t time_api=(uintptr_t)try_get_function(13,(intptr_t)"GetSystemTimePreciseAsFileTime",NULL,NULL);
  if(!time_api) return 15;
  sub_14024F1F8((intptr_t)&actual_time);
  puts("4096 native cache initializations, 34 decoded nulls each, guard bytes, 20 actual module names, real Windows lookup/cache hit, negative cache, precise-time wrapper and fibers API lookup pass");
  VirtualFree(image,0,MEM_RELEASE);return 0;
}
''' .encode()
        fixture = directory / 'api_cache_fixture.c'
        fixture.write_bytes(code)
        executable = directory / 'api_cache_fixture.exe'
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', str(fixture),
                                 '-std=gnu11', '-O0', '-fno-strict-aliasing', '-I', str(PROJECT / 'src/rebuild'),
                                 '-I', str(PROJECT / 'exports/client'), '-o', str(executable)],
                                capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)
        result = subprocess.run([str(executable)], capture_output=True, text=True, timeout=30)
        (directory / 'stdout.txt').write_text(result.stdout)
        (directory / 'stderr.txt').write_text(result.stderr)
        self.assertEqual(result.returncode, 0, result.stderr)
        print(result.stdout.strip())


if __name__ == '__main__':
    unittest.main()
