"""Compare recovered DName leaves with hash-pinned original instruction bytes."""
import hashlib
from pathlib import Path
import shutil
import subprocess
import unittest

import pefile

PROJECT = Path(__file__).resolve().parent.parent


class DNameTests(unittest.TestCase):
    def test_four_native_vtable_targets(self):
        binary = PROJECT.parent / 'subrosa.exe'
        self.assertEqual(hashlib.sha256(binary.read_bytes()).hexdigest(),
                         'e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e')
        pe = pefile.PE(str(binary), fast_load=True)
        image = bytearray(164)
        for offset,rva,size in ((0,0x205bb8,4),(16,0x205d6c,4),(32,0x2025f4,12),(64,0x204090,70)):
            image[offset:offset+size] = pe.get_data(rva,size)
        self.assertEqual(image[91:94], bytes.fromhex('4c8d0d'))
        image[94:98] = (160-98).to_bytes(4,'little',signed=True)
        image[160:164] = pe.get_data(0x2848b0,4)
        body = r'''
#include <windows.h>
#include <stdint.h>
#include <string.h>
uint32_t sr_client_dname_length(const void *);
uint32_t sr_client_dname_status(const void *);
uint8_t sr_client_dname_last_char(const void *);
char *sr_client_dname_copy(const void *,char *,char *);
int main(void) {
    const unsigned char code[]={NATIVE_BYTES};
    unsigned char *image=VirtualAlloc(NULL,sizeof(code),MEM_COMMIT|MEM_RESERVE,PAGE_READWRITE);
    if(!image) return 2;memcpy(image,code,sizeof(code));DWORD old;
    if(!VirtualProtect(image,sizeof(code),PAGE_EXECUTE_READ,&old)) return 2;
    FlushInstructionCache(GetCurrentProcess(),image,sizeof(code));
    uint32_t (*length)(const void *)=(void *)image;
    uint32_t (*status)(const void *)=(void *)(image+16);
    uint8_t (*last)(const void *)=(void *)(image+32);
    char *(*copy)(const void *,char *,char *)=(void *)(image+64);
    uint32_t state=0x9e3779b9u;
    for(unsigned i=0;i<8192;++i) {
        state^=state<<13;state^=state>>17;state^=state<<5;
        unsigned char object[32];memset(object,0xa5,sizeof(object));
        void *self=object+(i&7);uint32_t tag=(i&1)?1:state;
        memcpy((char *)self+8,&tag,4);memcpy((char *)self+12,&state,4);
        if(sr_client_dname_length(self)!=length(self) || sr_client_dname_status(self)!=status(self)
           || sr_client_dname_last_char(self)!=last(self)) return 1;
        char actual[64],expected[64];memset(actual,0xa5,sizeof(actual));memcpy(expected,actual,sizeof(actual));
        unsigned offset=i&7,count=(i>>3)%33;
        char *a=sr_client_dname_copy(self,actual+offset,actual+offset+count);
        char *e=copy(self,expected+offset,expected+offset+count);
        if(a-actual!=e-expected || memcmp(actual,expected,sizeof(actual))) return 1;
    }
    VirtualFree(image,0,MEM_RELEASE);return 0;
}'''.replace('NATIVE_BYTES',','.join(str(b) for b in image))
        output = PROJECT / 'reports/rebuild-tests'
        output.mkdir(exist_ok=True)
        source,exe = output/'client_dname_native.c',output/'client_dname_native.exe'
        source.write_text(body,encoding='utf-8')
        compiled = subprocess.run([shutil.which('gcc'),'-O2',str(source),
                                   str(PROJECT/'src/recovered/client_dname.c'),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(compiled.returncode,0,compiled.stderr)
        self.assertEqual(subprocess.run([str(exe)],timeout=30).returncode,0)


if __name__ == '__main__':
    unittest.main()
