import os
from pathlib import Path
import subprocess
import tempfile
import unittest

from prepare_rebuild import PROJECT, append_missing_functions, translate
from prepare_server import prepare, finish, fix_expressions


class ServerPreparationTests(unittest.TestCase):
    def compile_and_run(self, source):
        compiler = os.environ.get("CC", "C:/Users/junin/mingw64/bin/gcc.exe")
        with tempfile.TemporaryDirectory(dir=PROJECT / "work") as directory:
            path = Path(directory) / "test.c"
            exe = path.with_suffix(".exe")
            path.write_bytes(source)
            result = subprocess.run([compiler, "-std=gnu11", "-O2", "-fno-strict-aliasing",
                "-Wall", "-Wextra", "-Werror", str(path), "-o", str(exe)], capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stderr)
            self.assertEqual(subprocess.run([str(exe)]).returncode, 0)

    def test_scalar_movd_keeps_bits(self):
        source = b'''#include <stdint.h>
        #include <emmintrin.h>
        int main(void) {
            unsigned int data[2] = {0x80000000u, 0x7fc12345u};
            __m128 a, b;
            a = (__m128)*(unsigned int *)data;
            b = (__m128)*((unsigned int *)data + 1);
            uint32_t x[4], y[4];
            _mm_storeu_si128((__m128i *)x, (__m128i)a);
            _mm_storeu_si128((__m128i *)y, (__m128i)b);
            return x[0] != data[0] || y[0] != data[1] || x[1] || x[2] || x[3] || y[1] || y[2] || y[3];
        }'''
        fixed, edits = fix_expressions(source)
        self.assertEqual(sum(e["kind"] == "scalar_load_movd" for e in edits), 2)
        self.compile_and_run(fixed)

    def test_pointer_difference_stays_signed(self):
        source = b'''#include <stdint.h>
        #include <stddef.h>
        int main(void) {
            char array[8];
            unsigned char *a = (unsigned char *)array;
            char *b = array + 4;
            return a - b != -4;
        }'''
        fixed, _ = fix_expressions(source)
        self.compile_and_run(fixed)

    def test_global_alias_does_not_change_local(self):
        source = b'''#include <stdint.h>
        int Buffer;
        int main(void) {
            int Buffer = 7;
            ::Buffer = 9;
            return Buffer != 7 || ::Buffer != 9;
        }'''
        fixed, edits, bindings = prepare(source, [])
        fixed = finish(fixed, {"server_edits": edits, "extern_objects": {}}, bindings)
        self.compile_and_run(fixed)

    def test_import_binding_survives_local_thunk(self):
        source = b'int puts_sr(char *s) { return __imp_puts(s); }'
        fixed, edits, bindings = prepare(source, [{"name": "puts"}])
        fixed = finish(fixed, {"server_edits": edits, "extern_objects": {}}, bindings)
        self.assertIn(b'return puts(s)', fixed)
        self.assertIn(b'int puts_sr(', fixed)

    def test_vector_pointer_is_not_vector_value(self):
        fixed, _ = translate(b'void f(__m128 *p) { p += 2; }')
        self.assertNotIn(b'_mm_cvtsi', fixed)

    def test_variadic_tail_is_not_duplicated(self):
        fixed, _ = translate(b'int f(int n, ...) { return n; } int g(void) { return f(1,2,3); }')
        self.assertNotIn(b'..., ...', fixed)

    def test_existing_address_prevents_duplicate_body(self):
        source = b'//----- (0000000140001234) ----\nint old_name(void) { return 4; }\n'
        with tempfile.TemporaryDirectory(dir=PROJECT / "work") as directory:
            root = Path(directory)
            (root / 'new.c').write_bytes(b'int renamed(void) { return 4; }')
            manifest = {"functions": [{"address": "0x140001234", "name": "renamed", "file": "new.c"}]}
            fixed, count, missing = append_missing_functions(root, source, manifest)
            self.assertEqual(fixed, source)
            self.assertEqual(count, 0)
            self.assertFalse(missing)

    def test_comment_marker_alone_does_not_hide_missing_body(self):
        source = b'//----- (0000000140001234) ----\n// export failed\n'
        with tempfile.TemporaryDirectory(dir=PROJECT / "work") as directory:
            root = Path(directory)
            (root / 'new.c').write_bytes(b'int renamed(void) { return 4; }')
            manifest = {"functions": [{"address": "0x140001234", "name": "renamed", "file": "new.c"}]}
            _, count, _ = append_missing_functions(root, source, manifest)
            self.assertEqual(count, 1)


if __name__ == "__main__":
    unittest.main()
