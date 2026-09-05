import os
from pathlib import Path
import shutil
import subprocess
import unittest

from prepare_rebuild import (PROJECT, build_forward_header, build_import_header,
                             translate)


class PreparationTests(unittest.TestCase):
    def compile_fixture(self, name, source, functions=None):
        compiler = os.environ.get("CC") or shutil.which("gcc")
        self.assertTrue(compiler, "GCC must be available for rebuild tests")
        output = PROJECT / "reports/rebuild-tests"
        output.mkdir(parents=True, exist_ok=True)
        translated, report = translate(source.encode(), functions)
        translated = build_forward_header(report).encode() + translated
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
        # The rvalue lane read becomes a single-evaluation temporary read;
        # string and comment bytes survive untouched.
        self.assertIn(b'SR_VEC_READ_LANES(128, (make_vector()), f32)', translated)
        self.assertEqual(len(report["skipped"]), 0)

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
        # vector_views.h itself must keep const qualification; the prepared
        # export strips Hex-Rays' spurious const before this header is used.
        source = '''#include <emmintrin.h>
        #include "vector_views.h"
        int main(void) {
            const __m128 v = _mm_setzero_ps();
            SR_VEC_LANES(128, v, f32)[0] = 1;
            return 0;
        }'''
        compiler = os.environ.get("CC") or shutil.which("gcc")
        output = PROJECT / "reports/rebuild-tests"
        output.mkdir(parents=True, exist_ok=True)
        path = output / "readonly.c"
        path.write_text(source, encoding="utf-8")
        result = subprocess.run([compiler, "-std=c11", "-O2", "-Werror", "-I", str(PROJECT / "src/rebuild"),
                                 str(path), "-o", str(output / "readonly.exe")], capture_output=True, text=True)
        self.assertNotEqual(result.returncode, 0)
        self.assertIn("read-only", result.stderr)

    def test_cpuid_and_xgetbv_become_extended_assembly(self):
        source = '''typedef unsigned long long u64;
        u64 _RAX, _RBX, _RCX, _RDX;
        int has_sse4(void) {
            _RAX = 1; __asm { cpuid }
            return (_RCX & 0x80000) != 0;
        }
        u64 xcr0(void) { _RCX = 0; __asm { xgetbv } return _RAX | (_RDX << 32); }
        int main(void) { _RAX = 0; _RBX = 0; _RCX = 0; _RDX = 0; return has_sse4() * 0; }'''
        compiled, executable, report = self.compile_fixture("asm_ids", source)
        self.assertEqual(report["asm_cpuid"], 1)
        self.assertEqual(report["asm_xgetbv"], 1)
        self.assertEqual(compiled.returncode, 0, compiled.stderr)
        self.assertIn(b'__asm__ volatile("cpuid"', translated_of(self, "asm_ids"))
        self.assertEqual(subprocess.run([str(executable)], capture_output=True).returncode, 0)

    def test_unknown_assembly_dumps_are_wrapped_verbatim(self):
        source = '''int f(double x) {
            int r = 0;
            __asm { vmulsd xmm3, xmm0, xmm0 }
            __asm
            {
              vmovsd  [rsp+0D8h+var_B8], xmm0
            }
            return r;
        }'''
        translated, report = translate(source.encode())
        self.assertEqual(report["asm_wrapped"], 2)
        self.assertNotIn(b"__asm {", translated)
        self.assertIn(b'.intel_syntax noprefix', translated)
        self.assertIn(b"vmulsd xmm3, xmm0, xmm0", translated)
        self.assertIn(b"[rsp+0x0D8+var_B8]", translated)
        self.assertIn(b".att_syntax prefix", translated)
        # The wrapped dump must at least be valid C; the unresolved var_B8
        # symbol is a later-stage failure by design.
        compiler = os.environ.get("CC") or shutil.which("gcc")
        path = PROJECT / "reports/rebuild-tests" / "wrapped_asm.c"
        path.write_bytes(translated)
        result = subprocess.run([compiler, "-std=c11", "-fsyntax-only", str(path)],
                                capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)

    def test_hexrays_name_shapes_are_sanitized(self):
        source = b'''__int64 __fastcall FindHandler<__FrameHandler4>(int a1);
__int64 __fastcall `anonymous namespace'::scoped_reset(void);
int __fastcall _lambda_532e___operator()(__int64 **a1);
void use(void) {
  FindHandler<__FrameHandler4>(1);
  `anonymous namespace'::scoped_reset();
  _lambda_532e___operator()(0);
}'''
        translated, report = translate(source)
        self.assertEqual(report["renamed_template"], 2)
        self.assertGreaterEqual(report["renamed_backtick"], 2)
        self.assertGreaterEqual(report["renamed_operator_call"], 2)
        self.assertIn(b"FindHandler____FrameHandler4(1)", translated)
        self.assertIn(b"_anonymous_namespace___scoped_reset(void)", translated)
        self.assertIn(b"_lambda_532e___operator_call(__int64 **a1);", translated)
        self.assertIn(b"_lambda_532e___operator_call(0)", translated)
        self.assertNotIn(b"`", translated)
        self.assertNotIn(b"<__FrameHandler4>", translated)

    def test_forward_types_precede_prototypes_that_use_them(self):
        source = b'int MEMORY[0x1234](FH4::FuncInfo4 *info, int a2) { return a2 != 0; }'
        functions = [{"address": "0x1234", "name": "recovered_function"}]
        translated, report = translate(source, functions)
        header = build_forward_header(report)
        self.assertIn(b"FH4__FuncInfo4 *info", header.encode())
        typedef_at = header.index("typedef struct FH4__FuncInfo4")
        prototype_at = header.index("recovered_function(FH4__FuncInfo4")
        self.assertLess(typedef_at, prototype_at)

    def test_function_address_stores_get_explicit_casts(self):
        source = b'''typedef int (*handler_t)(int);
        int known(int x) { return x; }
        unsigned __int64 target;
        uint64 qword_1;
        handler_t callback;
        int main(void) {
            *(_QWORD *)&target = known;
            qword_1 = known;
            callback = known;
            return 0;
        }'''
        translated, report = translate(source)
        casts = [e for e in report["edits"] if e["kind"] == "address_cast"]
        self.assertEqual(len(casts), 2)
        self.assertIn(b"*(_QWORD *)&target = (uintptr_t)known;", translated)
        self.assertIn(b"qword_1 = (uintptr_t)known;", translated)
        # A real function-pointer variable keeps its plain assignment.
        self.assertIn(b"callback = known;", translated)

    def test_import_header_declares_unspecified_entry_points(self):
        header = build_import_header(["SteamAPI_Init", "SHGetSpecialFolderPathA"])
        self.assertIn("__int64 SteamAPI_Init();", header)
        self.assertIn("__int64 SHGetSpecialFolderPathA();", header)

    def test_conflicting_prototypes_are_dropped(self):
        source = b'''int known(int x);
        int known(char *y);
        int known(int x) { return x != 0; }'''
        translated, report = translate(source)
        drops = [e for e in report["edits"] if e["kind"] == "prototype_drop"]
        self.assertEqual(len(drops), 1)
        self.assertIn(b"int known(char *y);", source)
        self.assertNotIn(b"int known(char *y);", translated)
        self.assertIn(b"int known(int x);", translated)

    def test_system_declared_prototypes_are_dropped(self):
        source = b'unsigned __int64 __fastcall fread(__m128i *a1, unsigned __int64 a2);'
        translated, report = translate(source, import_names={"fread"})
        drops = [e for e in report["edits"] if e["kind"] == "prototype_drop"]
        self.assertEqual(len(drops), 1)
        self.assertNotIn(b"fread", translated.replace(b"sr_unknown", b""))

    def test_qualified_and_anonymous_type_names_are_sanitized(self):
        source = b'''struct FH4::FuncInfo4;
        int register_frame(struct FH4::FuncInfo4 *info, void *handler);
        int wide(#49 *buffer);
        void use(void) { /* FH4::FuncInfo4 stays in comments */ }
        const char *s = "FH4::FuncInfo4";'''
        translated, report = translate(source)
        self.assertIn(b"struct FH4__FuncInfo4;", translated)
        self.assertIn(b"struct FH4__FuncInfo4 *info", translated)
        self.assertIn(b"sr_anon_49 *buffer", translated)
        self.assertIn(b"/* FH4::FuncInfo4 stays in comments */", translated)
        self.assertIn(b'"FH4::FuncInfo4"', translated)

    def test_oversized_constants_split_and_signed_constants_widen(self):
        source = '''__int128 banner = 0x594441455220544F4E204556495244LL;
        unsigned __int128 mask = 0xFFFFFFFFFFFFFFFF1LL;
        long long big = 9223372036854775808LL;
        long long ok = 4611686018427387904LL;
        int main(void) {
            if ((unsigned long long)banner != 0x4F4E204556495244ull) return 1;
            if ((unsigned long long)(banner >> 64) != 0x59444145522054ull) return 2;
            if ((unsigned long long)mask != 0xFFFFFFFFFFFFFFF1ull) return 3;
            if ((unsigned long long)(mask >> 64) != 0xF) return 4;
            if (big != -9223372036854775807LL - 1) return 5;
            if (ok != 4611686018427387904LL) return 6;
            return 0;
        }'''
        translated, report = translate(source.encode())
        self.assertEqual(report["split_constants"], 2)
        self.assertEqual(report["unsigned_constants"], 1)
        for value in (0x594441455220544F4E204556495244, 0xFFFFFFFFFFFFFFFF1):
            expected = "((__int128)0x%xull | ((__int128)0x%xull << 64))" % (
                value & ((1 << 64) - 1), value >> 64)
            self.assertIn(expected.encode(), translated)
        self.assertIn(b"9223372036854775808ull", translated)
        self.assertIn(b"4611686018427387904LL", translated)
        compiled, executable, _ = self.compile_fixture("wide_constants", source)
        self.assertEqual(compiled.returncode, 0, compiled.stderr)
        self.assertEqual(subprocess.run([str(executable)], capture_output=True).returncode, 0)

    def test_data_memory_reads_are_named_address_objects(self):
        source = '''int main(void) {
            unsigned char a = MEMORY[0x140277f68][1];
            unsigned char b = MEMORY[0x140277f68][2];
            return a + b - MEMORY[0x1402B21B0][0];
        }'''
        translated, report = translate(source.encode(), [])
        self.assertEqual(report["data_objects"], ["sr_mem_140277f68", "sr_mem_1402b21b0"])
        self.assertEqual(translated.count(b"sr_mem_140277f68["), 2)
        self.assertIn(b"sr_mem_1402b21b0[0]", translated)
        # The extern objects need synthetic storage to link a runnable fixture.
        definitions = "".join("unsigned char %s[1];\n" % name for name in report["data_objects"])
        path = PROJECT / "reports/rebuild-tests" / "data_objects.c"
        path.write_bytes(build_forward_header(report).encode() + definitions.encode() + translated)
        executable = PROJECT / "reports/rebuild-tests" / "data_objects.exe"
        result = subprocess.run([os.environ.get("CC") or shutil.which("gcc"),
                                 "-std=c11", "-O2", "-fno-strict-aliasing", "-Werror",
                                 "-I", str(PROJECT / "src/rebuild"), str(path),
                                 "-o", str(executable)], capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)
        self.assertEqual(subprocess.run([str(executable)], capture_output=True).returncode, 0)

    def test_known_function_addresses_are_not_treated_as_data(self):
        source = b'''int known(int x); void f(void) { MEMORY[0x1000][0] = 1; }'''
        functions = [{"address": "0x1000", "name": "known"}]
        translated, report = translate(source, functions)
        self.assertEqual(report["data_objects"], [])
        self.assertIn(b"MEMORY[0x1000][0]", translated)


def translated_of(test, name):
    return (PROJECT / "reports/rebuild-tests" / (name + ".c")).read_bytes()


if __name__ == "__main__":
    unittest.main()
