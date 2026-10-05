"""Compare recovered fread argument forwarding with its original x64 wrapper."""
import hashlib
from client_sources import read_client_source
from pathlib import Path
import re
import subprocess
import unittest
import pefile
from repair_client_file_abi import PROJECT, PIN


class FileAbiTests(unittest.TestCase):
    def test_fread_native_register_forwarding(self):
        binary=PROJECT.parent/'subrosa.exe'
        self.assertEqual(hashlib.sha256(binary.read_bytes()).hexdigest(),PIN)
        pe=pefile.PE(str(binary),fast_load=True)
        code=pe.get_data(0x20c0c8,29)
        self.assertEqual(code.hex(),'4883ec384c894c24204d8bc84c8bc24883caffe8080000004883c438c3')
        source=read_client_source().decode('utf-8')
        match=re.search(r'unsigned __int64\s+fread_sr\(void \*a1,[^\n]+\)\n\{[^}]+\}',source)
        self.assertIsNotNone(match,'Prepared fread definition is missing')
        body=r'''
#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <immintrin.h>
struct capture {uintptr_t buffer,stream;uint64_t capacity,size,count;} seen;
uint64_t sub_14020C0E8(__m128i *buffer,uint64_t capacity,uint64_t size,uint64_t count,FILE *stream) {
    seen=(struct capture){(uintptr_t)buffer,(uintptr_t)stream,capacity,size,count};
    return ((uintptr_t)buffer^(uintptr_t)stream^capacity^size^count);
}
RECOVERED_WRAPPER
int main(void) {
    const unsigned char code[]={NATIVE_BYTES};
    unsigned char *image=VirtualAlloc(NULL,64,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
    if(!image)return 2;memcpy(image,code,sizeof(code));
    // The original wrapper's relative call reaches offset 32. Its test-only
    // trampoline forwards all five argument registers/stack slots to capture.
    image[32]=0x48;image[33]=0xb8;uintptr_t target=(uintptr_t)sub_14020C0E8;
    memcpy(image+34,&target,8);image[42]=0xff;image[43]=0xe0;
    DWORD old;if(!VirtualProtect(image,64,PAGE_EXECUTE_READ,&old))return 2;
    FlushInstructionCache(GetCurrentProcess(),image,64);
    uint64_t (*original)(void *,uint64_t,uint64_t,FILE *)=(void *)image;
    uint64_t state=0x9e3779b97f4a7c15ULL;
    for(unsigned i=0;i<4096;++i) {
        state^=state<<13;state^=state>>7;state^=state<<17;
        uintptr_t buffer=(uintptr_t)(state&0x7fffffffffffULL);
        uintptr_t stream=(uintptr_t)((state>>3)&0x7fffffffffffULL);
        uint64_t size=state,count=(state>>4)^0xa5a5a5a5a5a5a5a5ULL;
        if(i%7==0)buffer=0;if(i%11==0)stream=0;
        uint64_t a=fread_sr((void *)buffer,size,count,(FILE *)stream);struct capture first=seen;
        uint64_t b=original((void *)buffer,size,count,(FILE *)stream);struct capture second=seen;
        if(a!=b||memcmp(&first,&second,sizeof(first))||first.buffer!=buffer||first.stream!=stream||
           first.capacity!=UINT64_MAX||first.size!=size||first.count!=count)return 1;
    }
    VirtualFree(image,0,MEM_RELEASE);puts("4096 fread argument/return comparisons pass");return 0;
}'''.replace('NATIVE_BYTES',','.join(str(x) for x in code)).replace('RECOVERED_WRAPPER',match[0])
        out=PROJECT/'reports/client-file-abi-tests-20261002';out.mkdir(exist_ok=True)
        c,exe=out/'fread_fixture.c',out/'fread_fixture.exe';c.write_text(body)
        compiled=subprocess.run(['gcc','-O2',str(c),'-o',str(exe)],capture_output=True,text=True)
        self.assertEqual(compiled.returncode,0,compiled.stderr)
        result=subprocess.run([str(exe)],capture_output=True,text=True,timeout=30)
        (out/'stdout.txt').write_text(result.stdout);(out/'stderr.txt').write_text(result.stderr)
        self.assertEqual(result.returncode,0,result.stderr)
        print(result.stdout.strip())


if __name__=='__main__':
    unittest.main()
