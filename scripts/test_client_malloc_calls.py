"""Compare the typed allocator's size/failure/retry ABI with the original malloc."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from repair_client_malloc_calls import PROJECT, repair


class MallocCalls(unittest.TestCase):
    def test_native_allocator_boundaries(self):
        source = read_client_source()
        marker = b'//----- (0000000140091BA0)'
        start = source.index(marker)
        end = source.index(b'//----- (', start + len(marker))
        if b'sr_path_malloc(v9 + 1)' not in source[start:end]:
            source, _ = repair(source)
            start = source.index(marker)
            end = source.index(b'//----- (', start + len(marker))
        self.assertIn(b'sr_path_malloc(v9 + 1)', source[start:end])
        start = source.index(b'__int64            sr_path_malloc(unsigned __int64 v0)')
        # Extract the complete allocator body, not its first local declaration.
        end = source.index(b'\n}', start) + 2
        allocator = source[start:end]
        start = source.index(b'//----- (000000014025A0BC)')
        end = source.index(b'//----- (', start + 10)
        realloc = source[start:end]
        self.assertIn(b'return sr_path_malloc(a2);', realloc)
        pe = pefile.PE(str(PROJECT.parent / 'subrosa.exe'))
        finish = next(e.struct.EndAddress for e in pe.DIRECTORY_ENTRY_EXCEPTION if e.struct.BeginAddress == 0x253f60)
        data = pe.get_data(0x253f60, finish - 0x253f60)
        text = r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
typedef uint64_t _QWORD;
static unsigned dword_140404A6C[19065850];
struct record { uint64_t size,handler_size,heap,block; unsigned flags,allocs,modes,handlers,frees; int error; };
static struct record trace;
static int failed_allocs,mode,handler_budget;
static int *errno_sr(void) {return &trace.error;}
static unsigned sub_14024A06C(void) {trace.modes++;return mode;}
static unsigned callnewh(uint64_t size) {trace.handlers++;trace.handler_size=size;return (int)trace.handlers<=handler_budget;}
static void *sr_mock_heap(HANDLE heap,DWORD flags,SIZE_T size) {
 trace.heap=(uintptr_t)heap;trace.flags=flags;trace.size=size;trace.allocs++;
 return trace.allocs<=(unsigned)failed_allocs ? NULL : (void *)0x12345678abcdef00ULL;
}
static void *sr_mock_realloc(HANDLE heap,DWORD flags,void *block,SIZE_T size) {
 trace.block=(uintptr_t)block;return sr_mock_heap(heap,flags,size);
}
static void free_base(void *block) {trace.block=(uintptr_t)block;trace.frees++;}
#define HeapAlloc sr_mock_heap
#define HeapReAlloc sr_mock_realloc
'''.encode() + allocator + b'\n' + realloc + r'''
#undef HeapAlloc
#undef HeapReAlloc
static void thunk(unsigned char *a,void *p) {a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void) {
 unsigned char *image=VirtualAlloc(0,0x4cc1000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
 unsigned pages[]={0x253000,0x24a000,0x24d000,0x260000,0x26e000,0x4cbf000,0x25a000,0x24e000};
 for(unsigned j=0;j<8;j++)if(!VirtualAlloc(image+pages[j],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 8;
'''.encode()
        text += ('{unsigned char b[]={' + ','.join(map(str, data)) + '};memcpy(image+0x253f60,b,sizeof b);}\n').encode()
        finish = next(e.struct.EndAddress for e in pe.DIRECTORY_ENTRY_EXCEPTION if e.struct.BeginAddress == 0x25a0bc)
        data = pe.get_data(0x25a0bc, finish - 0x25a0bc)
        text += ('{unsigned char b[]={' + ','.join(map(str, data)) + '};memcpy(image+0x25a0bc,b,sizeof b);}\n').encode()
        text += r'''
 thunk(image+0x24a06c,sub_14024A06C);thunk(image+0x260be4,callnewh);thunk(image+0x24d1bc,errno_sr);
 *(uintptr_t *)(image+0x26e130)=(uintptr_t)sr_mock_heap;
 *(uintptr_t *)(image+0x26e098)=(uintptr_t)sr_mock_realloc;
 thunk(image+0x24e018,free_base);
 uintptr_t heap=0x23456789abcdef00ULL;memcpy(image+0x4cbfa48,&heap,8);memcpy(&dword_140404A6C[19065847],&heap,8);
 FlushInstructionCache(GetCurrentProcess(),image,0x4cc1000);
 uint64_t sizes[]={0,1,17,27,64,4096,0x7fffffffULL,0x80000000ULL,0x100000000ULL,0xffffffffffffffdfULL,0xffffffffffffffe0ULL,0xffffffffffffffffULL};
 unsigned count=0;
 for(unsigned operation=0;operation<3;operation++)for(unsigned s=0;s<12;s++)for(mode=0;mode<2;mode++)for(failed_allocs=0;failed_allocs<4;failed_allocs++)for(handler_budget=0;handler_budget<4;handler_budget+=1)for(int initial=0;initial<2;initial++) {
  struct record expected;uint64_t results[2];
  void *block=operation==2?(void *)0x3456789abcdef000ULL:NULL;
  memset(&trace,0,sizeof trace);trace.error=initial?17:0;
  results[0]=operation?(uint64_t)realloc_base(block,sizes[s]):(uint64_t)sr_path_malloc(sizes[s]);expected=trace;
  memset(&trace,0,sizeof trace);trace.error=initial?17:0;
  results[1]=operation?((uint64_t (*)(void *,uint64_t))(image+0x25a0bc))(block,sizes[s]):((uint64_t (*)(uint64_t))(image+0x253f60))(sizes[s]);
  if(results[0]!=results[1] || memcmp(&expected,&trace,sizeof trace)) {
   printf("allocator mismatch size %llu mode %d failures %d handler budget %d\n",(unsigned long long)sizes[s],mode,failed_allocs,handler_budget);return 1;
  }
  count++;
 }
 VirtualFree(image,0,MEM_RELEASE);printf("%u native malloc/realloc size/zero/limit/failure/retry/free/errno/full-width-return cases pass\n",count);return 0;
}
'''.encode()
        directory = PROJECT / 'reports/client-malloc-calls-20261002'
        directory.mkdir(parents=True, exist_ok=True)
        fixture = directory / 'malloc_fixture.c'
        fixture.write_bytes(text)
        exe = fixture.with_suffix('.exe')
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', str(fixture), '-O0',
                                 '-std=gnu11', '-fno-strict-aliasing', '-o', str(exe)], capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)
        result = subprocess.run([str(exe)], capture_output=True, text=True, timeout=20)
        (directory / 'stdout.txt').write_text(result.stdout)
        (directory / 'stderr.txt').write_text(result.stderr)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)


if __name__ == '__main__':
    unittest.main()
