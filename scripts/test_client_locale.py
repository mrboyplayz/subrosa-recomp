"""Native descriptor, locale getter and high-address scanner boundary checks."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import pefile
from repair_client_locale import PROJECT, TARGETS, POINTERS


def region(source, address):
    marker = ('//----- (%016X)' % address).encode()
    start = source.index(marker)
    end = source.index(b'//----- (', start + len(marker))
    return source[start:end]


class LocaleRecovery(unittest.TestCase):
    def run_fixture(self, name, code):
        directory = PROJECT / 'reports/client-locale-20261002'
        directory.mkdir(parents=True, exist_ok=True)
        path = directory / (name + '.c')
        path.write_bytes(code)
        exe = path.with_suffix('.exe')
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', str(path), '-O0',
                                 '-fno-strict-aliasing', '-o', str(exe)], capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)
        result = subprocess.run([str(exe)], capture_output=True, text=True, timeout=20)
        path.with_suffix('.stdout.txt').write_text(result.stdout)
        path.with_suffix('.stderr.txt').write_text(result.stderr)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)

    def test_native_locale_storage_and_getter(self):
        source = read_client_source()
        pe = pefile.PE(str(PROJECT.parent / 'subrosa.exe'))
        header = b'''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
typedef char _UNKNOWN;
typedef uint64_t _QWORD;
static __int16 asc_14028B810[256];
static _UNKNOWN off_14028B0E0[704];
_UNKNOWN *off_140302AE0;
'''
        for name in ['sr_locale_lower', 'sr_locale_upper', 'sr_locale_name']:
            match = re.search(rb'unsigned char ' + name.encode() + rb'\[\d+\] = \{[^}]+\};\nextern _UNKNOWN [^;]+;\n__asm__\([^;]+;', source)
            self.assertIsNotNone(match)
            header += match[0] + b'\n'
        start = source.index(b'extern _UNKNOWN unk_140302588;\nextern _UNKNOWN *off_140302AE0;')
        end = source.index(b' // weak', start)
        header += source[start:end] + b'\n'
        header += b'''static unsigned int *dword_140404A6C;
static int dword_140302B88=-2;
static unsigned char ptd[968];
static int updates;
static __int64 sub_140255A70(void) {return (__int64)(uintptr_t)ptd;}
static __int64 sub_140262ADC(void) { uintptr_t value; memcpy(&value,&dword_140404A6C[19065667],8);memcpy(ptd+144,&value,8);updates++;return value; }
'''
        header += region(source, 0x140255d2c) + region(source, 0x140256dc0)
        text = header + b'''static void thunk(unsigned char *a,void *p) {a[0]=0x48;a[1]=0xb8;memcpy(a+2,&p,8);a[10]=0xff;a[11]=0xe0;}
int main(void) {
 unsigned char *image=VirtualAlloc(0,0x4d00000,MEM_RESERVE,PAGE_NOACCESS);
 if(!image) return 9;
 unsigned pages[]={0x247000,0x255000,0x256000,0x262000,0x302000,0x4cbf000};
 for(unsigned i=0;i<6;i++) if(!VirtualAlloc(image+pages[i],4096,MEM_COMMIT,PAGE_EXECUTE_READWRITE)) return 8;
'''
        for address, length in [(0x247248, 17), (0x255d2c, 0x46), (0x256dc0, 0x2f)]:
            # Use the precise complete native updater function from unwind metadata.
            if address == 0x255d2c:
                length = next(e.struct.EndAddress for e in pe.DIRECTORY_ENTRY_EXCEPTION if e.struct.BeginAddress == address) - address
            data = pe.get_data(address, length)
            text += ('{unsigned char b[]={' + ','.join(map(str, data)) + '};memcpy(image+0x%x,b,sizeof b);}\n' % address).encode()
        data = pe.get_data(0x302420, 344)
        text += ('unsigned char expected[344]={' + ','.join(map(str, data)) + '};\n').encode()
        for off, expression in POINTERS.items():
            text += ('{uintptr_t p=(uintptr_t)(%s);memcpy(expected+%d,&p,8);}\n' % (expression, off)).encode()
        text += b'''if(memcmp(expected,sr_c_locale,344)) return 1;
'''
        for name, rva in [('sr_locale_lower', 0x28ba10), ('sr_locale_upper', 0x28bb90)]:
            data = pe.get_data(rva, 384)
            text += ('{unsigned char expected[]={' + ','.join(map(str, data)) + '};if(memcmp(expected,%s,384))return 2;}\n' % name).encode()
        text += b'''
 if(sr_locale_name[0]!=67 || sr_locale_name[1] || sr_locale_name[2] || sr_locale_name[3]) return 3;
 *(int *)(image+0x302b88)=-2;
 thunk(image+0x255a70,sub_140255A70);thunk(image+0x262adc,sub_140262ADC);
 FlushInstructionCache(GetCurrentProcess(),image,0x4d00000);
 if(!((unsigned char (*)(void))(image+0x247248))())return 4;
 uintptr_t initial;memcpy(&initial,image+0x4cbf778,8);if(initial!=(uintptr_t)(image+0x302420))return 5;
 unsigned short alternate_ctype[256];for(int i=0;i<256;i++){asc_14028B810[i]=i*3;alternate_ctype[i]=i*7;}
 uintptr_t alternate[43];memcpy(alternate,sr_c_locale,344);alternate[0]=(uintptr_t)alternate_ctype;
 dword_140404A6C=VirtualAlloc(0,0x4900000,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);if(!dword_140404A6C)return 7;
 int cases=0; unsigned flags[]={0,1,2,3,0xffffffff};
 for(int g=0;g<2;g++)for(int t=0;t<3;t++)for(int f=0;f<5;f++) {
  if(t==0 && (flags[f]&~1u))continue;
  uintptr_t global=(uintptr_t)(g?alternate:sr_c_locale),thread=t==0?0:(uintptr_t)(t==1?sr_c_locale:alternate);
  uintptr_t results[2],after[2];int counts[2];
  for(int native=0;native<2;native++) {
   memset(ptd,0,sizeof ptd);memcpy(ptd+144,&thread,8);memcpy(ptd+936,&flags[f],4);updates=0;
   memcpy(&dword_140404A6C[19065667],&global,8);memcpy(image+0x4cbf778,&global,8);
   results[native]=(uintptr_t)(native?((unsigned short *(*)(void))(image+0x256dc0))():sub_140256DC0());
   memcpy(&after[native],ptd+144,8);counts[native]=updates;
  }
  if(results[0]!=results[1] || after[0]!=after[1] || counts[0]!=counts[1])return 6;
  cases++;
 }
 VirtualFree(dword_140404A6C,0,MEM_RELEASE);VirtualFree(image,0,MEM_RELEASE);
 printf("344 locale bytes, ten relocated pointers, 768 case bytes, native initializer and %d locale getter cases pass\\n",cases);return 0;
}
'''
        # Literal fixture strings above intentionally use C escapes.
        text = text.replace(b'"C\\\\0"', b'"C\\0"').replace(b'pass\\\\n', b'pass\\n')
        self.run_fixture('locale_fixture', text)

    def test_gl_scanner_high_output_addresses(self):
        source = read_client_source()
        caller = region(source, 0x140091880)
        line = next(line.strip() for line in caller.splitlines() if b'sub_14015B0D0(v2,' in line)
        text = b'''#include <windows.h>
#include <stdint.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
static int *outputs;
#define v18 outputs[0]
#define v19 outputs[1]
static void sub_14015B0D0(__int64 input,const char *format,...) {
 va_list va;va_start(va,format);int *a=va_arg(va,int *),*b=va_arg(va,int *);va_end(va);
 if(a!=outputs || b!=outputs+1 || strcmp(format,"%d.%d") || strcmp((char *)(uintptr_t)input,"4.6"))ExitProcess(1);
 *a=4;*b=6;
}
int main(void) {
 outputs=VirtualAlloc((void *)0x123400000000ULL,65536,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);if(!outputs)return 9;
 __int64 v2=(__int64)(uintptr_t)"4.6";
''' + line + b'''
 if(v18!=4 || v19!=6)return 2;
 VirtualFree(outputs,0,MEM_RELEASE);puts("GL scanner output pointers above 4 GiB pass");return 0;
}
'''
        self.run_fixture('scan_pointer_fixture', text)


if __name__ == '__main__':
    unittest.main()
