"""Check actual prepared ranges against executed native R8/R9 address setup."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import pefile
from repair_client_api_ranges import PROJECT, arguments, native_ranges, repair


class ApiRanges(unittest.TestCase):
    def test_all_native_module_ranges(self):
        source = read_client_source()
        if b'sr_api_modules_24f1f8' not in source:
            source, counts = repair(source)
            self.assertEqual(counts['recovered_api_module_ranges'],49)
        pe = pefile.PE(str(PROJECT.parent/'subrosa.exe'))
        text = '''#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
static unsigned char *expected; static size_t expected_bytes;
static int check(unsigned int *begin,unsigned int *end) {
 return (unsigned char *)end-(unsigned char *)begin!=expected_bytes || memcmp(begin,expected,expected_bytes);
}
int main(void) {
 unsigned char *arena=VirtualAlloc(0,4096,MEM_RESERVE|MEM_COMMIT,PAGE_EXECUTE_READWRITE);
 if(!arena) return 1;
'''
        for (address,ordinal),(ids,begin_i,end_i,begin,end) in native_ranges(pe).items():
            marker = ('//----- (%016X)' % (0x140000000+address)).encode()
            start = source.index(marker); stop = source.index(b'//----- (',start+len(marker))
            region = source[start:stop]
            declaration = re.search(('static unsigned int sr_api_modules_%x_%d' % (address,ordinal)).encode()+rb'\[\] = \{[^}]+\};',region)[0]
            offset = 0
            for _ in range(ordinal+1):
                parts = arguments(region,offset); offset = parts[3][1]+1
            args = [region[a:b].decode() for a,b in parts[2:]]
            code = bytearray(begin_i.bytes+end_i.bytes)
            code[begin_i.disp_offset:begin_i.disp_offset+4] = (256-begin_i.size).to_bytes(4,'little',signed=True)
            offset = begin_i.size+end_i.disp_offset
            code[offset:offset+4] = (256+end-begin-len(code)).to_bytes(4,'little',signed=True)
            text += '{\n'+declaration.decode()+'\n'
            text += 'unsigned char code[]={'+','.join(map(str,code+bytes.fromhex('4c89c0c3')))+'};\n'
            data = pe.get_data(begin-0x140000000,end-begin)
            text += 'unsigned char data[]={'+','.join(map(str,data))+'};\n'
            text += '''memcpy(arena,code,sizeof code); memcpy(arena+256,data,sizeof data);
 FlushInstructionCache(GetCurrentProcess(),arena,sizeof code);
 expected=((unsigned char *(*)(void))arena)();
 if(expected!=arena+256) return 2;
 unsigned char tail[]={0x4c,0x89,0xc8,0x4c,0x29,0xc0,0xc3};
 memcpy(arena+sizeof(code)-4,tail,sizeof tail);
 FlushInstructionCache(GetCurrentProcess(),arena,32);
 expected_bytes=((size_t (*)(void))arena)();
 if(expected_bytes!=sizeof data || check('''+','.join(args)+''')) return 3;
 }
'''
        text += 'VirtualFree(arena,0,MEM_RELEASE);puts("49 original/recovered API module ranges pass");return 0;}\n'
        directory = PROJECT/'reports/client-api-ranges-20261002'
        directory.mkdir(parents=True,exist_ok=True)
        fixture = directory/'api_ranges_fixture.c'; fixture.write_text(text)
        executable = directory/'api_ranges_fixture.exe'
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe',str(fixture),'-O0','-o',str(executable)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result = subprocess.run([str(executable)],capture_output=True,text=True,timeout=15)
        self.assertEqual(result.returncode,0,result.stderr)
        (directory/'stdout.txt').write_text(result.stdout)


if __name__ == '__main__':
    unittest.main()
