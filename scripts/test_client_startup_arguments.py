"""Exercise the repaired startup bridge with the game's real SDL2 DLL."""
import os
from client_sources import read_client_source
from pathlib import Path
import subprocess
import unittest
import re
import pefile

from repair_client_startup_arguments import BODY, END, PROJECT, repair, repair_vector_stores


class StartupArguments(unittest.TestCase):
    def test_startup_vector_store_alignment(self):
        source = read_client_source()
        pe = pefile.PE(str(PROJECT.parent / 'subrosa.exe'))
        if b'_mm_storeu_si128((__m128i *)(void *)&dword_140404A6C[179457254]' not in source:
            source, _ = repair_vector_stores(source, pe)
        start = source.index(b'//----- (0000000140001330)')
        end = source.index(b'//----- (', start + 10)
        pattern = rb'_mm_storeu_si128\(\(__m128i \*\)\(void \*\)&dword_140404A6C\[(\d+)\], (_mm_load_si128\([^;]+\))\);'
        matches = list(re.finditer(pattern, source[start:end]))
        self.assertEqual(len(matches), 6)
        text = '#include <emmintrin.h>\n#include <string.h>\n#include <stdio.h>\n'
        for match in matches:
            name = re.search(rb'xmmword_([0-9A-F]+)', match[2])[0].decode()
            data = pe.get_data(int(name.split('_')[1], 16) - pe.OPTIONAL_HEADER.ImageBase, 16)
            text += ('__attribute__((aligned(16))) unsigned char ' + name + '[16] = {' +
                     ','.join(str(x) for x in data) + '};\n')
        text += 'int main(void) { unsigned char memory[64];\n'
        for match in matches:
            name = re.search(rb'xmmword_([0-9A-F]+)', match[2])[0].decode()
            statement = match[0].decode()
            statement = re.sub(r'&dword_140404A6C\[\d+\]', 'buffer', statement)
            text += ('for (int skew=0; skew<16; ++skew) { memset(memory,0x5a,sizeof memory); '
                     'unsigned char *buffer=memory+16+skew; ' + statement +
                     ' if (memcmp(buffer,' + name + ',16)) return 1; '
                     'for(int i=0;i<16+skew;++i) if(memory[i]!=0x5a) return 2; '
                     'for(int i=32+skew;i<64;++i) if(memory[i]!=0x5a) return 3; }\n')
        text += 'puts("96 startup vector stores across all alignments pass");return 0;}\n'
        directory = PROJECT / 'reports/client-startup-arguments-20261002'
        directory.mkdir(parents=True, exist_ok=True)
        fixture = directory / 'vector_fixture.c'
        fixture.write_text(text)
        executable = directory / 'vector_fixture.exe'
        result = subprocess.run(['C:/Users/junin/mingw64/bin/gcc.exe', str(fixture),
                                 '-O0', '-msse4.2', '-o', str(executable)],
                                capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)
        result = subprocess.run([str(executable)], capture_output=True, text=True, timeout=15)
        self.assertEqual(result.returncode, 0, result.stderr)

    def test_unicode_command_line_with_real_sdl(self):
        source = read_client_source()
        if b'recovered_startup_argument_bridge' not in source and BODY not in source:
            source, _ = repair(source)
        start = source.index(b'//----- (0000000140001030)')
        end = source.index(END, start)
        directory = PROJECT / 'reports/client-startup-arguments-20261002'
        directory.mkdir(parents=True, exist_ok=True)
        fixture = directory / 'startup_fixture.c'
        fixture.write_bytes(b'''#include <windows.h>
#include <shellapi.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
__int64 SDL_calloc();
__int64 SDL_wcslen();
__int64 SDL_iconv_string();
__int64 SDL_SetMainReady();
__int64 SDL_free();
extern void *__real_SDL_calloc(size_t, size_t);
extern char *__real_SDL_iconv_string(const char *, const char *, const char *, size_t);
void *__wrap_SDL_calloc(size_t count, size_t size) {
  if (size != 8 || !count) exit(92);
  if (getenv("FAIL_CALLOC")) return NULL;
  return __real_SDL_calloc(count, size);
}
char *__wrap_SDL_iconv_string(const char *to, const char *from, const char *input, size_t bytes) {
  if (strcmp(to, "UTF-8") || strcmp(from, "UTF-16LE") || bytes < 2 || (bytes & 1)) exit(93);
  if (getenv("FAIL_ICONV")) return NULL;
  return __real_SDL_iconv_string(to, from, input, bytes);
}
static __int64 sub_140198F95(int a, __int64 b, __int64 c) {
  if (a != 16 || strcmp((const char *)(uintptr_t)b, "Fatal Error") ||
      strcmp((const char *)(uintptr_t)c, "Out of memory - aborting")) exit(94);
  puts("OOM"); return -1;
}
static unsigned int app_main_utf8_candidate(int count, __int64 address) {
  char **args = (char **)(uintptr_t)address;
  if (!args[0] || !*args[0] || args[count]) return 91;
  for (int i = 1; i < count; ++i) {
    for (unsigned char *p = (unsigned char *)args[i]; *p; ++p) printf("%02x", *p);
    puts("");
  }
  return 73;
}
''' + source[start:end] + b'\nint main(void) { return (int)WinMain_0(); }\n')
        executable = directory / 'startup_fixture.exe'
        command = ['C:/Users/junin/mingw64/bin/gcc.exe', str(fixture), '-O0',
                   str(PROJECT / 'reports/client-link-pointer-memory-20261002/libSDL2.a'),
                   '-lshell32', '-Wl,--wrap,SDL_calloc', '-Wl,--wrap,SDL_iconv_string',
                   '-o', str(executable)]
        compiled = subprocess.run(command, capture_output=True, text=True)
        self.assertEqual(compiled.returncode, 0, compiled.stderr)
        env = dict(os.environ)
        env['PATH'] = str(PROJECT.parent) + ';C:/Users/junin/mingw64/bin;' + env['PATH']
        cases = [[], ['plain', 'two words', '', 'quote"inside', 'back\\slash'],
                 ['العربية', '日本語', '😀', 'é', 'trailing\\']]
        for args in cases:
            with self.subTest(args=args):
                result = subprocess.run([str(executable)] + args, cwd=PROJECT.parent,
                                        env=env, capture_output=True, text=True, timeout=15)
                self.assertEqual(result.returncode, 73, result.stderr)
                self.assertEqual(result.stdout.splitlines(),
                                 [arg.encode('utf-8').hex() for arg in args])
        for failure in ('FAIL_CALLOC', 'FAIL_ICONV'):
            result = subprocess.run([str(executable), 'test'], cwd=PROJECT.parent,
                                    env=dict(env, **{failure: '1'}),
                                    capture_output=True, text=True, timeout=15)
            self.assertEqual(result.returncode, 0, result.stderr)
            self.assertEqual(result.stdout.strip(), 'OOM')


if __name__ == '__main__':
    unittest.main()
