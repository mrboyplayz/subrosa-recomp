import os
from pathlib import Path
import shutil
import subprocess
import unittest

from prepare_rebuild import PROJECT, translate


class PreparationTests(unittest.TestCase):
    def compile_fixture(self, name, source, functions=None):
        compiler = os.environ.get("CC") or shutil.which("gcc")
        self.assertTrue(compiler, "GCC must be available for rebuild tests")
        output = PROJECT / "reports/rebuild-tests"
        output.mkdir(parents=True, exist_ok=True)
        translated, report = translate(source.encode(), functions)
        translated = ("\n".join(report["forward_declarations"]) + "\n").encode() + translated
        path = output / (name + ".c")
        path.write_bytes(translated)
        executable = output / (name + ".exe")
        result = subprocess.run([compiler, "-std=c11", "-O2", "-fno-strict-aliasing",
                                 "-Wall", "-Wextra", "-Werror", "-I", str(PROJECT / "src/rebuild"),
                                 str(path), "-o", str(executable)], capture_output=True, text=True)
        return result, executable, report

    def test_comments_strings_and_rvalues_are_not_rewritten(self):
        source = b'''void f(void) {
            /* v.m128_f32[0] */
            const char *s = "v.m128_f32[0]";
            v.m128_f32[0] = 1;
            float x = (make_vector()).m128_f32[0];
        }'''
        translated, report = translate(source)
        self.assertIn(b'/* v.m128_f32[0] */', translated)
        self.assertIn(b'"v.m128_f32[0]"', translated)
        self.assertIn(b'(make_vector()).m128_f32[0]', translated)
        self.assertEqual(len(report["edits"]), 1)
        self.assertEqual(len(report["skipped"]), 1)

    def test_generated_code_preserves_lane_updates(self):
        source = '''#include <emmintrin.h>
        #include "vector_views.h"
        int main(void) {
            __m128 a[2] = {_mm_set_ps(4, 3, 2, 1), _mm_setzero_ps()};
            __m128 *p = a;
            int i = 0;
            a[i++].m128_f32[2] = 9;
            p->m128_u32[0] = 0x80000000u;
            if (i != 1 || a[0].m128_f32[2] != 9) return 1;
            if (a[0].m128_u32[0] != 0x80000000u) return 2;
            if (a[0].m128_f32[1] != 2 || a[0].m128_f32[3] != 4) return 3;
            return 0;
        }'''
        compiled, executable, report = self.compile_fixture("lane_update", source)
        self.assertEqual(compiled.returncode, 0, compiled.stderr)
        self.assertGreater(len(report["edits"]), 0)
        self.assertEqual(subprocess.run([str(executable)], capture_output=True).returncode, 0)

    def test_only_declared_exact_function_targets_are_bound(self):
        source = b'''int known(int x); void f(void) {
            MEMORY[0x1000](1); MEMORY[0x2000](2); MEMORY[0x3000](3);
            const char *s = "MEMORY[0x1000](1)";
        }'''
        functions = [{"address": "0x1000", "name": "known"},
                     {"address": "0x2000", "name": "not_declared"}]
        translated, report = translate(source, functions)
        self.assertIn(b"known(1);", translated)
        self.assertIn(b"MEMORY[0x2000](2)", translated)
        self.assertIn(b"MEMORY[0x3000](3)", translated)
        self.assertIn(b'"MEMORY[0x1000](1)"', translated)
        self.assertEqual(len(report["edits"]), 1)

    def test_address_named_definition_and_its_call_are_bound_together(self):
        source = b'''int MEMORY[0x1234](int value) { return value + 1; }
                    int main(void) { return MEMORY[0x1234](3) != 4; }'''
        prepared, report = translate(source, [{"address": "0x1234", "name": "recovered_function"}])
        self.assertIn(b"int recovered_function(int value)", prepared)
        self.assertIn(b"recovered_function(3)", prepared)
        self.assertEqual(len(report["edits"]), 2)

    def test_address_bound_calls_work_before_the_definition(self):
        source = '''int main(void) { return MEMORY[0x1234](3) != 4; }
                    int MEMORY[0x1234](int value) { return value + 1; }'''
        compiled, executable, _ = self.compile_fixture(
            "bound_function", source, [{"address": "0x1234", "name": "recovered_function"}])
        self.assertEqual(compiled.returncode, 0, compiled.stderr)
        self.assertEqual(subprocess.run([str(executable)], capture_output=True).returncode, 0)

    def test_wrong_storage_width_is_rejected(self):
        source = '''#include "vector_views.h"
        int main(void) { int wrong = 0; wrong.m128_i32[0] = 1; return wrong; }'''
        compiled, _, _ = self.compile_fixture("wrong_width", source)
        self.assertNotEqual(compiled.returncode, 0)
        self.assertIn("negative", compiled.stderr)

    def test_const_storage_remains_readonly(self):
        source = '''#include <emmintrin.h>
        #include "vector_views.h"
        int main(void) { const __m128 v = _mm_setzero_ps(); v.m128_f32[0] = 1; return 0; }'''
        compiled, _, _ = self.compile_fixture("readonly", source)
        self.assertNotEqual(compiled.returncode, 0)
        self.assertIn("read-only", compiled.stderr)


if __name__ == "__main__":
    unittest.main()
