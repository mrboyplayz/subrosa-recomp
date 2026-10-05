"""Compare copy helper with native overlap, alignment, dispatch and guard paths."""
import hashlib
from client_sources import read_client_source
import subprocess
import unittest
import pefile
from repair_client_copy import PROJECT, PIN, HELPERS, repair


class CopyRecovery(unittest.TestCase):
    def test_native_copy_paths(self):
        binary = PROJECT.parent / 'subrosa.exe'
        self.assertEqual(hashlib.sha256(binary.read_bytes()).hexdigest(), PIN)
        pe = pefile.PE(str(binary), fast_load=True)
        source = read_client_source()
        if HELPERS not in source:
            source, _ = repair(source)
        functions = HELPERS
        for address in [0x1401fc900, 0x1401fc920]:
            marker = ('//----- (%016X)' % address).encode()
            start = source.index(marker)
            end = source.index(b'//----- (', start + len(marker))
            functions += source[start:end].replace(HELPERS, b'')
        text = ('#include "' + (PROJECT / 'src/rebuild/export_compat.h').as_posix() + '"\n').encode()
        text += b'static unsigned dword_140404A6C[19064470];\nstatic uint64_t qword_140302088;\n' + functions
        text += r'''
static uint32_t random_state=0x9e3779b9;
static unsigned next(void) {random_state^=random_state<<13;random_state^=random_state>>17;random_state^=random_state<<5;return random_state;}
static void *(*native_copy)(void *,const void *,uint64_t);
static unsigned cases;
static int check(unsigned from,unsigned to,unsigned size) {
 __attribute__((aligned(32))) unsigned char a[8192],b[8192],expected[8192];
 for(unsigned j=0;j<8192;j++)a[j]=(unsigned char)next();memcpy(b,a,8192);memcpy(expected,a,8192);
 memmove(expected+to,expected+from,size);
 void *actual=sub_1401FC920((__m128i *)(void *)(a+to),(__m128i *)(void *)(a+from),size);
 void *reference=native_copy(b+to,b+from,size);
 if(actual!=a+to || reference!=b+to || memcmp(a,b,8192) || memcmp(a,expected,8192)) {
  fprintf(stderr,"copy mismatch from %u to %u size %u feature %u threshold %llu\n",from,to,size,dword_140404A6C[19064469],(unsigned long long)qword_140302088);return 1;
 }
 cases++;return 0;
}
int main(void) {
 unsigned char *image=VirtualAlloc(0,0x74794000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
 unsigned pages[]={0x1fc000,0x302000,0x4cbe000,0x74792000};
 for(unsigned j=0;j<4;j++)if(!VirtualAlloc(image+pages[j],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 8;
'''.encode()
        for rva, size in [(0x1fc900, 0x410), (0x74792410, 68)]:
            text += ('{unsigned char b[]={' + ','.join(map(str, pe.get_data(rva, size))) + '};memcpy(image+0x%x,b,sizeof b);}\n' % rva).encode()
        text += r'''
 FlushInstructionCache(GetCurrentProcess(),image,0x74794000);native_copy=(void *)(image+0x1fc920);
 unsigned lengths[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,47,48,63,64,65,127,128,129,255,256,257,511,512,513,1023,1024,1025,4095,4096};
 int offsets[]={-129,-33,-17,-16,-15,-1,0,1,15,16,17,33,129};
 unsigned thresholds[]={0,1,32};
 for(unsigned feature=0;feature<=2;feature+=2)for(unsigned threshold=0;threshold<3;threshold++) {
  dword_140404A6C[19064469]=feature;*(unsigned *)(image+0x4cbe4c0)=feature;
  qword_140302088=thresholds[threshold];*(uint64_t *)(image+0x302088)=thresholds[threshold];
  for(unsigned l=0;l<sizeof lengths/sizeof *lengths;l++)for(unsigned skew=0;skew<32;skew++)for(unsigned off=0;off<13;off++) {
   unsigned from=1024+skew,to=from+offsets[off];if(check(from,to,lengths[l]))return 1;
  }
  for(unsigned n=0;n<4096;n++) {unsigned from=1024+(n&31),to=from+(int)(n%1025)-512,size=(n*137)%4097;if(check(from,to,size))return 1;}
 }
 /* Exhaust all independent source/destination alignments for the faulting short path. */
 for(unsigned size=16;size<=32;size++)for(unsigned a=0;a<32;a++)for(unsigned b=0;b<32;b++)if(check(512+a,2048+b,size))return 1;
 unsigned char *src=VirtualAlloc(0,8192,MEM_RESERVE,PAGE_NOACCESS),*dst=VirtualAlloc(0,8192,MEM_RESERVE,PAGE_NOACCESS);
 if(!src || !dst || !VirtualAlloc(src,4096,MEM_COMMIT,PAGE_READWRITE) || !VirtualAlloc(dst,4096,MEM_COMMIT,PAGE_READWRITE))return 7;
 for(unsigned n=0;n<=256;n++) {
  memset(src,0x7b,4096);memset(dst,0xa5,4096);
  if(sub_1401FC920((__m128i *)(dst+4096-n),(__m128i *)(src+4096-n),n)!=(void *)(dst+4096-n))return 2;
  for(unsigned j=0;j<4096;j++)if(dst[j]!=(j>=4096-n?0x7b:0xa5))return 3;
  memset(dst,0xa5,4096);if(native_copy(dst+4096-n,src+4096-n,n)!=dst+4096-n)return 4;
  for(unsigned j=0;j<4096;j++)if(dst[j]!=(j>=4096-n?0x7b:0xa5))return 5;
  cases++;
 }
 if(sub_1401FC920(NULL,NULL,0)!=NULL || native_copy(NULL,NULL,0)!=NULL)return 6;cases++;
 VirtualFree(src,0,MEM_RELEASE);VirtualFree(dst,0,MEM_RELEASE);VirtualFree(image,0,MEM_RELEASE);
 printf("%u native copy cases: alignment, overlap, REP/SSE/streaming, guards and destination return pass\n",cases);return 0;
}
'''.encode()
        directory = PROJECT / 'reports/client-copy-20261002'
        directory.mkdir(parents=True, exist_ok=True)
        fixture = directory / 'copy_fixture.c'
        fixture.write_bytes(text)
        exe = fixture.with_suffix('.exe')
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', str(fixture), '-O0',
                                 '-std=gnu11',
                                 '-I', str(PROJECT / 'src/client'),
                                 '-fno-strict-aliasing', '-msse4.2', '-o', str(exe)], capture_output=True, text=True)
        (directory / 'compile.stderr.txt').write_text(result.stderr)
        self.assertEqual(result.returncode, 0, result.stderr)
        result = subprocess.run([str(exe)], capture_output=True, text=True, timeout=60)
        (directory / 'stdout.txt').write_text(result.stdout)
        (directory / 'stderr.txt').write_text(result.stderr)
        self.assertEqual(result.returncode, 0, result.stderr)


if __name__ == '__main__':
    unittest.main()
