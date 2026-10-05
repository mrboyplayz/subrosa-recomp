"""Exercise real console creation, persisted progress and hardware-exception logging."""
from pathlib import Path
import subprocess
import tempfile
import unittest

PROJECT = Path(__file__).resolve().parent.parent
COMPILER = 'C:/Users/junin/mingw64/bin/gcc.exe'


class DebugConsole(unittest.TestCase):
    def test_native_console_progress_and_exception(self):
        with tempfile.TemporaryDirectory(prefix='sr-debug-console-') as directory:
            root = Path(directory)
            source = root / 'probe.c'
            source.write_text(r'''
#define SR_CLIENT_DEBUG_CONSOLE
#include "client_debug_console.h"
#include <windows.h>
#include <stdint.h>
#include <string.h>
int main(int argc, char **argv) {
    unsigned int bodies[94] = {0};
    DWORD console_mode;
    HANDLE console;
    (void)argv;
    SetErrorMode(SEM_NOGPFAULTERRORBOX | SEM_FAILCRITICALERRORS);
    SR_DEBUG_START();
    console = CreateFileA("CONOUT$", GENERIC_READ | GENERIC_WRITE,
        FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);
    if (!GetConsoleMode(console, &console_mode)) {
        SR_DEBUG_LOG("Console test failed: Win32 error %lu", GetLastError());
        return 9;
    }
    CloseHandle(console);
    SR_DEBUG_STAGE("Generating level: fixture geometry");
    SR_DEBUG_LOG("Literal format characters: %s", "100% ready");
    SR_DEBUG_STAGE("Generating game: fixture spawn");
    bodies[0] = bodies[47] = 1;
    SR_DEBUG_CHECK_BODIES(bodies, 2, "fixture spawn");
    SR_DEBUG_TICK_BEGIN();
    SR_DEBUG_TICK_STAGE("Physics: fixture human bounds");
    if (argc > 1 && !strcmp(argv[1], "crash")) {
        *(volatile unsigned int *)(uintptr_t)1 = 7;
        return 8;
    }
    unsigned int field = argc > 1 ? 27 : 6;
    bodies[47 + field] = 0x7fc00000;
    SR_DEBUG_CHECK_BODIES(bodies, 2, "fixture integration");
    if (bodies[47 + field] != 0x7fc00000) return 10;
    if (argc == 1) Sleep(5500);
    SR_DEBUG_TICK_END();
    SR_DEBUG_STOP(0);
    return 0;
}
''', encoding='utf-8')
            exe = root / 'probe.exe'
            result = subprocess.run([COMPILER, '-std=gnu11', '-O0', '-g',
                '-Wall', '-Wextra', '-Werror', '-mwindows', '-I', str(PROJECT / 'src/rebuild'),
                str(source), str(PROJECT / 'src/rebuild/client_debug_console.c'),
                '-o', str(exe)], capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stderr)
            result = subprocess.run([str(exe)], cwd=root, capture_output=True,
                timeout=15, creationflags=subprocess.CREATE_NO_WINDOW)
            self.assertEqual(result.returncode, 0, result.stderr)
            log = (root / 'subrosa-recomp-debug.log').read_text()
            for message in ('Generating level:', 'Generating game:', '100% ready',
                '2 active bodies', 'INVALID PHYSICS: body 1, position word 6',
                'STATUS:', '1 started, 0 completed', 'Physics tick 1 completed',
                'exit code 0'):
                self.assertIn(message, log)
            result = subprocess.run([str(exe), 'angular'], cwd=root,
                capture_output=True, timeout=15,
                creationflags=subprocess.CREATE_NO_WINDOW)
            self.assertEqual(result.returncode, 0, result.stderr)
            log = (root / 'subrosa-recomp-debug.log').read_text()
            self.assertIn('INVALID PHYSICS: body 1, angular velocity word 27', log)
            result = subprocess.run([str(exe), 'crash'], cwd=root,
                capture_output=True, timeout=15,
                creationflags=subprocess.CREATE_NO_WINDOW)
            self.assertEqual(result.returncode & 0xffffffff, 0xc0000005)
            log = (root / 'subrosa-recomp-debug.log').read_text()
            self.assertIn('EXCEPTION 0xc0000005', log)
            self.assertIn('Fault instruction:', log)
            self.assertIn('Physics: fixture human bounds', log)
            self.assertIn('Memory operation 1', log)
            self.assertNotIn('exit code 0', log)  # Fresh log per launch.


if __name__ == '__main__':
    unittest.main()
