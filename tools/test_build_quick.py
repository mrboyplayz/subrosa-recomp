"""Integration checks for the quick-build cache using GCC on tiny sources."""
import shutil
import subprocess
import sys
import io
import unittest
import uuid
from contextlib import contextmanager, redirect_stdout
from pathlib import Path
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'scripts'))
import build_quick as quick


@contextmanager
def test_directory():
    parent = (quick.build.PROJECT / 'build/quick-tests').resolve()
    root = parent / ('quick build ' + uuid.uuid4().hex)
    root.mkdir(parents=True)
    try:
        yield root
    finally:
        if root.resolve().parent != parent:
            raise RuntimeError('test cleanup escaped build/quick-tests')
        shutil.rmtree(root)


@unittest.skipUnless(all(shutil.which(t) for t in ('gcc', 'dlltool')), 'requires MinGW')
class QuickBuildTest(unittest.TestCase):
    def test_incremental_dependencies(self):
        with test_directory() as directory:
            root = Path(directory)
            src = root / 'src'
            asm = src / 'rebuild/client_link'
            asm.mkdir(parents=True)
            for name in ('codec_storage', 'time_vtable', 'client_native_gaps'):
                (asm / (name + '.s')).write_text('.text\n')
            main = src / 'main.c'
            helper = src / 'helper.c'
            header = src / 'value.h'
            main.write_text('int value(void); int main(void) { return value() != 7; }\n')
            helper.write_text('#include "value.h"\nint value(void) { return VALUE; }\n')
            header.write_text('#define VALUE 7\n')
            out = root / 'out'
            units = [(main, ['-g', '-O0']), (helper, ['-g', '-O0'])]

            def link(objects, data, libraries, output):
                return ['gcc', *map(str, objects), *map(str, data.values()), '-o', str(output)]

            with patch.object(quick, 'QUICK', out), patch.object(quick.build, 'SRC', src), \
                    patch.object(quick.build, 'LINKED_DATA', ()), \
                    patch.object(quick.build, 'compilation_units', lambda: units), \
                    patch.object(quick.build, 'link_command', link):
                full_symbols = False

                def run():
                    output = io.StringIO()
                    with redirect_stdout(output):
                        quick.compile_incremental(jobs=2, full_symbols=full_symbols)
                    return output.getvalue()

                self.assertIn('LINK', run())
                self.assertEqual(subprocess.run([str(out / 'subrosa-recomp.exe')]).returncode, 0)
                self.assertIn('0 compile/import steps; no link needed', run())
                # Editing a header must rebuild its consumer, but not unrelated main.c.
                header.write_text('#define VALUE 7 /* changed */\n')
                log = run()
                self.assertIn('CC helper.c', log)
                self.assertNotIn('CC main.c', log)
                self.assertIn('LINK', log)
                # Editing a source must rebuild only its translation unit.
                main.write_text(main.read_text() + '/* changed */\n')
                log = run()
                self.assertIn('CC main.c', log)
                self.assertNotIn('CC helper.c', log)
                # A failed compile cannot leave a seemingly valid cache entry.
                helper.write_text('this does not compile\n')
                with self.assertRaises(RuntimeError):
                    run()
                helper.write_text('#include "value.h"\nint value(void) { return VALUE; }\n')
                self.assertIn('CC helper.c', run())
                # Changing symbol flags invalidates existing objects automatically.
                full_symbols = True
                log = run()
                self.assertIn('CC main.c', log)
                self.assertIn('CC helper.c', log)
                self.assertIn('0 compile/import steps; no link needed', run())
                # Losing an object triggers a rebuild even if sources are unchanged.
                (out / 'objects/helper.obj').unlink()
                self.assertIn('CC helper.c', run())


if __name__ == '__main__':
    unittest.main()
