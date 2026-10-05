"""Compare version prefixes, capabilities, clamping and return with native code."""
import subprocess
from client_sources import read_client_source
import unittest
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_64
from capstone.x86 import X86_OP_MEM, X86_REG_RIP
from repair_client_gl_version import PROJECT, MARKER


class GLVersion(unittest.TestCase):
    def test_native_version_loader(self):
        source = read_client_source()
        start = source.index(MARKER)
        end = source.index(b'//----- (', start + len(MARKER))
        region = source[start:end]
        self.assertNotIn(b'return sub_1401F8B20', region)
        pe = pefile.PE(str(PROJECT.parent / 'subrosa.exe'))
        native = pe.get_data(0x91880, 0x312)
        decoder = Cs(CS_ARCH_X86, CS_MODE_64)
        decoder.detail = True
        pages = {0x91000, 0x15b000, 0x1f8000, 0x236000, 0x302000}
        for instruction in decoder.disasm(native, 0x140091880):
            for operand in instruction.operands:
                if operand.type == X86_OP_MEM and operand.mem.base == X86_REG_RIP:
                    pages.add((instruction.address + instruction.size + operand.mem.disp - 0x140000000) & ~4095)
        flags = ['dword_140302FF0', 'dword_140302FF4', 'unk_140404090', 'unk_140404094',
                 'unk_140404128', 'unk_14040412C', 'unk_1404044B0', 'unk_1404044B4',
                 'unk_140404788', 'unk_14040478C', 'unk_140404888']
        text = r'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
typedef uint64_t _QWORD;
typedef uint64_t uint64;
static unsigned int *dword_140404A6C;
static int dword_140404A68;
'''.encode()
        for name in flags:
            text += (('static int ' if name.startswith('dword') else 'static char ') + name + ';\n').encode()
        text += r'''
static const char *version;
static int major,minor,scans,comparisons;
static char scanned[64];
static __int64 get_string(unsigned which) { if(which!=7938)ExitProcess(20); return (__int64)(uintptr_t)version; }
static __int64 (*qword_140302FA8)(unsigned)=get_string;
static unsigned int strncmp_sr(const char *a,const char *b,size_t n) {comparisons++;return (unsigned int)strncmp(a,b,n);}
static __int64 sub_14015B0D0(__int64 input,const char *format,...) {
 va_list ap;va_start(ap,format);int *a=va_arg(ap,int *),*b=va_arg(ap,int *);va_end(ap);
 if(strcmp(format,"%d.%d"))ExitProcess(21);strcpy(scanned,(char *)(uintptr_t)input);*a=major;*b=minor;scans++;return 2;
}
'''.encode() + region + r'''
static void thunk(unsigned char *a,void *p) { a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0; }
struct result { uint64_t value; unsigned words[16]; int scans,comparisons; char scanned[64]; };
int main(void) {
 unsigned char *image=VirtualAlloc(0,0x49a0000,MEM_RESERVE,PAGE_NOACCESS);if(!image)return 9;
'''.encode()
        text += ('unsigned pages[]={' + ','.join(hex(p) for p in sorted(pages)) + '};\n').encode()
        text += b'for(unsigned i=0;i<sizeof pages/sizeof *pages;i++)if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE))return 8;\n'
        text += ('{unsigned char b[]={' + ','.join(map(str, native)) + '};memcpy(image+0x91880,b,sizeof b);}\n').encode()
        # Recover the three original prefix strings and the scanner format at their native RVAs.
        strings = set()
        for ins in decoder.disasm(native, 0x140091880):
            if ins.mnemonic == 'lea' and ins.operands[1].type == X86_OP_MEM and ins.operands[1].mem.base == X86_REG_RIP:
                rva = ins.address + ins.size + ins.operands[1].mem.disp - 0x140000000
                if 0x270000 <= rva < 0x290000:
                    strings.add(rva)
        for rva in strings:
            data = pe.get_data(rva, 64).split(b'\0')[0] + b'\0'
            text += ('{unsigned char b[]={' + ','.join(map(str, data)) + '};memcpy(image+0x%x,b,sizeof b);}\n' % rva).encode()
        text += r'''
 thunk(image+0x15b0d0,sub_14015B0D0);thunk(image+0x236ff0,strncmp_sr);
 *(uintptr_t *)(image+0x302fa8)=(uintptr_t)get_string;
 const uint64_t cookie=0x123456789abcdefULL;memcpy(image+0x3020a0,&cookie,8);
 /* Native checker: compare RCX with the real cookie, trap on mismatch, preserve EAX/RAX. */
 unsigned char checker[]={0x48,0xba,0,0,0,0,0,0,0,0,0x48,0x39,0xd1,0x74,0x02,0x0f,0x0b,0xc3};
 memcpy(checker+2,&cookie,8);memcpy(image+0x1f8b20,checker,sizeof checker);
 FlushInstructionCache(GetCurrentProcess(),image,0x49a0000);
 dword_140404A6C=VirtualAlloc(0,0x4900000,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);if(!dword_140404A6C)return 7;
 const char *inputs[]={"4.6 Vendor", "OpenGL ES-CM 3.2 Vendor", "OpenGL ES-CL 1.1 Vendor", "OpenGL ES 3.0 Vendor", "OpenGL Vendor", NULL};
 int values[]={-1,0,1,2,3,4,0x7fffffff,(int)0x80000000u};int count=0;
 for(unsigned k=0;k<6;k++)for(unsigned a=0;a<8;a++)for(unsigned b=0;b<8;b++) {
  version=inputs[k];major=values[a];minor=values[b];struct result results[2];memset(results,0,sizeof results);
  for(int n=0;n<2;n++) {
   scans=comparisons=0;memset(scanned,0,sizeof scanned);
   if(n) {
    unsigned addresses[]={0x404a68,0x404a6c,0x4980d98,0x4980d9c,0x4980cb0,0x302ff0,0x302ff4,0x404090,0x404094,0x404128,0x40412c,0x4044b0,0x4044b4,0x404788,0x40478c,0x404888};
    for(unsigned j=0;j<16;j++) *(unsigned *)(image+addresses[j])=0;
    results[n].value=((uint64_t (*)(void))(image+0x91880))();
    for(unsigned j=0;j<16;j++) results[n].words[j]=*(unsigned *)(image+addresses[j]);
   } else {
    dword_140404A68=0;dword_140404A6C[0]=0;dword_140404A6C[18215115]=dword_140404A6C[18215116]=dword_140404A6C[18215057]=0;
'''.encode()
        text += ('='.join(flags) + '=0;\n').encode()
        text += b'results[n].value=sub_140091880();\n'
        expressions = ['dword_140404A68', 'dword_140404A6C[0]', 'dword_140404A6C[18215115]', 'dword_140404A6C[18215116]', 'dword_140404A6C[18215057]'] + flags
        for j, expression in enumerate(expressions):
            text += ('results[n].words[%d]=%s;\n' % (j, expression)).encode()
        text += r'''
   }
   results[n].scans=scans;results[n].comparisons=comparisons;memcpy(results[n].scanned,scanned,sizeof scanned);
  }
  if(memcmp(results,results+1,sizeof results[0])) {printf("mismatch input %u major %d minor %d\n",k,major,minor);return 1;}
  count++;
 }
 VirtualFree(dword_140404A6C,0,MEM_RELEASE);VirtualFree(image,0,MEM_RELEASE);
 printf("%d native GL prefix/capability/clamp/return comparisons pass\n",count);return 0;
}
'''.encode()
        directory = PROJECT / 'reports/client-gl-version-20261002'
        directory.mkdir(parents=True, exist_ok=True)
        fixture = directory / 'version_fixture.c'
        fixture.write_bytes(text)
        exe = fixture.with_suffix('.exe')
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', str(fixture), '-O0',
                                 '-fstack-protector-all', '-o', str(exe)], capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)
        result = subprocess.run([str(exe)], capture_output=True, text=True, timeout=20)
        (directory / 'stdout.txt').write_text(result.stdout)
        (directory / 'stderr.txt').write_text(result.stderr)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)


if __name__ == '__main__':
    unittest.main()
