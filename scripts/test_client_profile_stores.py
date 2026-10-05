"""Compare recovered copies with original MOVDQA/MOVDQU/MOVUPS instructions."""
import re
from client_sources import read_client_source
import subprocess
import unittest
import pefile
from capstone import Cs, CS_ARCH_X86, CS_MODE_64
from repair_client_profile_stores import PROJECT, MARKER, repair


class ProfileStores(unittest.TestCase):
    def test_native_profile_copies_all_alignments(self):
        source = read_client_source()
        if b'__builtin_memcpy((void *)&dword_140404A6C[73991224]' not in source:
            source, counts = repair(source)
            self.assertEqual(counts['recovered_profile_unaligned_copies'], 4)
        start = source.index(MARKER)
        end = source.index(b'//----- (', start + len(MARKER))
        region = source[start:end]
        pe = pefile.PE(str(PROJECT.parent / 'subrosa.exe'))
        pairs = [(278520165, 0xeaa38, 0xeaa4a, 0x279080),
                 (278520169, 0xeaa42, 0xeaa59, 0x278ed0),
                 (73991636, 0xeab16, 0xeab1e, 0x279090),
                 (73991224, 0xeaad4, 0xeaae7, 0x276ac8)]
        world_marker = b'//----- (00000001400ECD70)'
        world_start = source.index(world_marker)
        world_end = source.index(b'//----- (', world_start + len(world_marker))
        region += source[world_start:world_end]
        pairs += [(284022485, 0xecd97, 0xecda7, 0x2790f0),
                  (284022493, 0xecdb4, 0xecdbc, 0x279190),
                  (284022489, 0xecd9f, 0xecdcb, 0x279180)]
        versus_marker = b'//----- (00000001400EC7E0)'
        versus_start = source.index(versus_marker)
        versus_end = source.index(b'//----- (', versus_start + len(versus_marker))
        region += source[versus_start:versus_end]
        pairs += [(284022499, 0xec801, 0xec840, 0x278e10)]
        text = '''#include <windows.h>
#include <emmintrin.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
int main(void) {
 unsigned char *arena=VirtualAlloc(0,4096,MEM_RESERVE|MEM_COMMIT,PAGE_EXECUTE_READWRITE);
 if(!arena) return 9;
 unsigned char memory[64];
'''
        for index, load, store, constant in pairs:
            decoder = Cs(CS_ARCH_X86, CS_MODE_64)
            decoder.detail = True
            load_instruction = next(decoder.disasm(pe.get_data(load, 15), 0x140000000+load))
            store_instruction = next(decoder.disasm(pe.get_data(store, 15), 0x140000000+store))
            load_bytes = bytes(load_instruction.bytes)
            store_bytes = bytes(store_instruction.bytes)
            self.assertEqual(load_instruction.operands[0].reg, store_instruction.operands[1].reg)
            code_size = len(load_bytes) + len(store_bytes)
            data = pe.get_data(constant, 16)
            name = 'xmmword_' + hex(0x140000000 + constant)[2:].upper()
            statement = next(line.strip().decode() for line in region.splitlines()
                             if (b'&dword_140404A6C[' + str(index).encode() + b']') in line and
                             (b'_mm_storeu_' in line or b'__builtin_memcpy' in line))
            statement = statement.replace('&dword_140404A6C[' + str(index) + ']', 'buffer')
            statement = statement.replace('si128);', '_mm_load_si128((__m128i *)&' + name + '));')
            text += '{\n__attribute__((aligned(16))) unsigned char ' + name + '[16]={' + ','.join(map(str,data)) + '};\n'
            text += 'unsigned char code[]={' + ','.join(map(str, load_bytes + store_bytes + b'\xc3')) + '};\n'
            text += '''for(int skew=0;skew<16;++skew) {
 memset(arena+512,0x5a,64); memset(memory,0x5a,64);
 memcpy(arena+256,''' + name + ''',16);
 int32_t displacement=256-''' + str(len(load_bytes)) + '''; memcpy(code+''' + str(load_instruction.disp_offset) + ''',&displacement,4);
 displacement=512+16+skew-''' + str(code_size) + '''; memcpy(code+''' + str(len(load_bytes)+store_instruction.disp_offset) + ''',&displacement,4);
 memcpy(arena,code,sizeof code); FlushInstructionCache(GetCurrentProcess(),arena,sizeof code);
 ((void (*)(void))arena)();
 unsigned char *buffer=memory+16+skew;
 ''' + statement + '''
 if(memcmp(memory,arena+512,64)) return 1;
 } }
'''
        text += 'VirtualFree(arena,0,MEM_RELEASE); puts("128 original/recovered configuration copies and guards pass"); return 0; }\n'
        directory = PROJECT / 'reports/client-profile-stores-20261002'
        directory.mkdir(parents=True, exist_ok=True)
        fixture = directory / 'profile_fixture.c'
        fixture.write_text(text)
        executable = directory / 'profile_fixture.exe'
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', str(fixture),
                                 '-O0', '-msse4.2', '-o', str(executable)], capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)
        result = subprocess.run([str(executable)], capture_output=True, text=True, timeout=15)
        (directory / 'stdout.txt').write_text(result.stdout)
        (directory / 'stderr.txt').write_text(result.stderr)
        self.assertEqual(result.returncode, 0, result.stderr)


if __name__ == '__main__':
    unittest.main()
