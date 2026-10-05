import os
import re
from pathlib import Path
import shutil
import subprocess
import unittest

from prepare_rebuild import (PROJECT, Parser, Language, tree_sitter_c,
                             build_forward_header, build_import_header,
                             cast_client_paired_double_results,
                             repair_client_movss_casts,
                             repair_client_byte_displacements,
                             preprocess, restore_client_float_table,
                             restore_client_simd_table, restore_client_tls_index,
                             restore_client_wctype,
                             rename_system_definitions, translate)


class PreparationTests(unittest.TestCase):
    def test_client_expression_repairs_are_scoped_and_guarded(self):
        from prepare_rebuild import mask_noncode
        from repair_client_expressions import repair_client_expressions
        source = (PROJECT / "exports/client/subrosa.c").read_bytes()
        source = re.sub(rb"\bconst\b", b"    ", source)
        prepared, counts = repair_client_expressions(source, mask_noncode)
        self.assertEqual(counts, {"reviewed_scalar_word_loads": 17,
                         "reviewed_scalar_float_casts": 26,
                         "reviewed_va_cursor_copies": 8,
                         "reviewed_additional_byte_displacements": 11,
                         "recovered_locale_arguments": 14,
                         "reviewed_byte_differences": 10,
                         "recovered_import_slot_calls": 2,
                         "reviewed_qword_vector_casts": 3,
                         "reviewed_vector_storage_copies": 5,
                         "reviewed_x64_flag_expressions": 8})
        self.assertIn(b"_mm_castps_si128(_mm_set_ss((float)i))", prepared)
        self.assertIn(b"memcpy(&v8[4], &va, sizeof(va))", prepared)
        with self.assertRaises(ValueError):
            repair_client_expressions(prepared, mask_noncode)

    def test_client_address_and_cursor_semantics_against_machine_operations(self):
        from prepare_rebuild import mask_noncode
        from repair_client_expressions import repair_client_address_arithmetic
        source = (PROJECT / "exports/client/subrosa.c").read_bytes()
        prepared, count = repair_client_address_arithmetic(source, mask_noncode)
        self.assertEqual(count, 41)
        self.assertIn(b"(uintptr_t)v89 + (uintptr_t)&v212 - v22 - (uintptr_t)&dword_140404A6C[335170686]", prepared)
        with self.assertRaises(ValueError):
            repair_client_address_arithmetic(prepared, mask_noncode)
        fixture = '''#include "client_x64_semantics.h"
            #include <emmintrin.h>
            #include <stdint.h>
            #include <stdarg.h>
            #include <string.h>
            #include <limits.h>
            static int check_cursor(int ignored, ...) {
                (void)ignored;
                va_list va, copy;
                uintptr_t slots[5] = {0};
                va_start(va, ignored);
                _Static_assert(sizeof(va) == 8, "Windows x64 cursor");
                memcpy(&slots[4], &va, sizeof(va));
                memcpy(&copy, &slots[4], sizeof(copy));
                int a = va_arg(copy, int), b = va_arg(va, int);
                double c = va_arg(copy, double), d = va_arg(va, double);
                va_end(copy); va_end(va);
                return a != 73 || b != 73 || c != 2.5 || d != 2.5;
            }
            int main(void) {
                unsigned saved = _mm_getcsr();
                int values[] = {0, 1, -1, INT_MIN, INT_MAX, 16777217, -16777217};
                for (unsigned mode = 0; mode < 4; ++mode)
                    for (unsigned i = 0; i < sizeof(values)/sizeof(values[0]); ++i) {
                        volatile int value = values[i];
                        _mm_setcsr(0x1f80 | (mode << 13));
                        __m128 result = _mm_set_ss((float)value);
                        unsigned result_flags = _mm_getcsr();
                        _mm_setcsr(0x1f80 | (mode << 13));
                        __m128 reference = _mm_cvtepi32_ps(_mm_cvtsi32_si128(value));
                        if (memcmp(&result, &reference, sizeof(result))) return 1;
                        if (_mm_getcsr() != result_flags) return 2;
                    }
                _mm_setcsr(saved);
                uint64_t state = 0x9abcdef012345678ULL;
                for (unsigned i = 0; i < 4096; ++i) {
                    state = state * 6364136223846793005ULL + 1;
                    uintptr_t a = state, b = state ^ 0xeeeeeeeeeeeeeeeeULL;
                    uintptr_t offset = state >> 17, base = ~state;
                    uintptr_t reference;
                    __asm__("add %2,%0; sub %3,%0; sub %4,%0"
                        : "=&r"(reference) : "0"(a), "r"(b), "r"(offset), "r"(base) : "cc");
                    if (a + b - offset - base != reference) return 3;
                    uint32_t left = (uint32_t)a, right = (uint32_t)b, result = left;
                    unsigned char overflow;
                    __asm__("sub %2,%0; seto %1" : "+r"(result), "=qm"(overflow)
                            : "r"(right) : "cc");
                    if (sr_export_ofsub32(left, right) != overflow) return 4;
                    unsigned count = i & 127u;
                    uint64_t shifted = a;
                    unsigned char carry;
                    __asm__("clc; shr %%cl,%0; setc %1" : "+r"(shifted), "=qm"(carry)
                            : "c"(count) : "cc");
                    if (sr_export_cfshr64(a, count) != carry) return 5;
                    shifted = a;
                    __asm__("clc; shl %%cl,%0; setc %1" : "+r"(shifted), "=qm"(carry)
                            : "c"(count) : "cc");
                    if (sr_export_cfshl64(a, count) != carry) return 6;
                }
                const uint64_t patterns[] = {0, 0x8000000000000000ULL,
                    0x40862e42fefa39eeULL, 0x40862e42fefa39efULL, 0x40862e42fefa39f0ULL,
                    0xc0874046dfefd9cfULL, 0xc0874046dfefd9d0ULL, 0xc0874046dfefd9d1ULL,
                    0x7ff0000000000000ULL, 0xfff0000000000000ULL,
                    0x7ff8000000000001ULL, 0x7ff0000000000001ULL};
                for (unsigned i = 0; i < sizeof(patterns)/sizeof(patterns[0]); ++i) {
                    double value; memcpy(&value, &patterns[i], sizeof(value));
                    _mm_setcsr(0x1f80);
                    unsigned actual = sr_export_exp_range_mask(value);
                    unsigned actual_flags = _mm_getcsr();
                    _mm_setcsr(0x1f80);
                    __m128d left = _mm_set_sd(value), right = left;
                    __m128d upper = _mm_set_sd(0x1.62e42fefa39efp+9);
                    __m128d lower = _mm_set_sd(-0x1.74046dfefd9d0p+9);
                    unsigned char parity;
                    __asm__("cmplesd %3,%1; cmpnltsd %4,%2; andpd %2,%1; ucomisd %1,%1; setp %0"
                            : "=qm"(parity), "+&x"(left), "+&x"(right)
                            : "x"(upper), "x"(lower) : "cc");
                    if (actual != parity || actual_flags != _mm_getcsr()) return 7;
                }
                _mm_setcsr(saved);
                return check_cursor(0, 73, 2.5);
            }'''
        output = PROJECT / "reports/rebuild-tests"
        output.mkdir(parents=True, exist_ok=True)
        path = output / "client_expression_semantics.c"
        executable = output / "client_expression_semantics.exe"
        path.write_text(fixture, encoding="utf-8")
        compiled = subprocess.run([os.environ.get("CC") or shutil.which("gcc"),
                                   "-std=c11", "-O2", "-Werror", "-I", str(PROJECT / "src/rebuild"), str(path), "-o", str(executable)],
                                  capture_output=True, text=True)
        self.assertEqual(compiled.returncode, 0, compiled.stderr)
        ran = subprocess.run([str(executable)], capture_output=True)
        self.assertEqual(ran.returncode, 0, ran.stderr)

    def test_client_forwards_copy_final_headers(self):
        from prepare_rebuild import mask_noncode
        from repair_client_expressions import client_definition_forwards, MISSING_FORWARD_FUNCTIONS
        source = b""
        for va, name in MISSING_FORWARD_FUNCTIONS:
            source += (f"//----- ({va:016X}) ------------------------\n"
                       f"// attributes: thunk\nlong long (*{name}(unsigned int a))(void)\n{{ return 0; }}\n").encode()
        declarations = client_definition_forwards(source, mask_noncode)
        self.assertEqual(len(declarations), 14)
        self.assertEqual(declarations["sub_14016DFD0"],
                         "long long (*sub_14016DFD0(unsigned int a))(void);")

    def test_client_final_sites_preserve_whole_vector_and_store_widths(self):
        from prepare_rebuild import mask_noncode
        from repair_client_expressions import FINAL_SITE_REPAIRS, repair_client_final_sites
        functions = {}
        for va, expression, replacement, expected in FINAL_SITE_REPAIRS:
            functions.setdefault(va, []).extend([expression + b";"] * expected)
        functions[0x140235928] = [b"MEMORY[0x" + f"{address:X}".encode() + b"ull] = 0;"
            for address in (0xFFFFFFFFFFFFFFDC, 0xFFFFFFFFFFFFFFE4, 0xFFFFFFFFFFFFFFE6,
                            0xFFFFFFFFFFFFFFEC, 0xFFFFFFFFFFFFFFF4, 0xFFFFFFFFFFFFFFF8,
                            0xFFFFFFFFFFFFFFFC)]
        functions[0x14013D1B0] = [b"v9 = *(double *)MEMORY[0x1401F8B50](x).m128_u64;"]
        functions.setdefault(0x14019B2E0, []).append(b"v37 = *(double *)sub_140244390(v86->m128i_i32[3]).m128_u64;")
        source = b"".join(f"//----- ({va:016X}) -----\n".encode() + b"\n".join(expressions) + b"\n"
                          for va, expressions in sorted(functions.items()))
        prepared, count = repair_client_final_sites(source, mask_noncode)
        self.assertEqual(count, 33)
        self.assertIn(b"*(_QWORD *)((uintptr_t)a1 + 16)", prepared)
        self.assertIn(b"*(_BYTE *)((uintptr_t)a1 + 44)", prepared)
        self.assertIn(b"*(_DWORD *)((uintptr_t)a1 + 48)", prepared)
        self.assertNotIn(b"_mm_cvtsi64_si128((long long)(v103[v4]))", prepared)
        self.assertIn(b"SR_VEC_PTR_LANES(128, v86, i32)[3]", prepared)
        self.assertIn(b"setvbuf_sr(v3, 0, 4, 0)", prepared)
        self.assertIn(b"__builtin_unreachable();", prepared)
        with self.assertRaises(ValueError):
            repair_client_final_sites(prepared, mask_noncode)

    def test_client_funclet_signatures_and_callback_targets_are_recovered(self):
        from prepare_rebuild import mask_noncode
        from repair_client_expressions import repair_client_funclet_entries
        source = b""
        for va, count in ((0x14020AE90, 2), (0x14020AEE0, 1)):
            signature = f"void sub_{va:X}(__int64 a1, _QWORD *a2, ...)".encode()
            source += signature + b";\n"
            source += f"//----- ({va:016X}) ----\n".encode() + signature + b"\n{\n"
            source += b"void (*v2)(void);\nsub_1401FDA90();\nv2();\n_NLG_Return2_sr();\n"
            if count == 2:
                source += b"sub_1401FDA90();\n"
            source += b"}\n"
        prepared, count = repair_client_funclet_entries(source, mask_noncode)
        self.assertEqual(count, 2)
        self.assertEqual(prepared.count(b"int a3)"), 4)
        self.assertEqual(prepared.count(b"sr_client_call_funclet("), 2)
        self.assertNotIn(b"v2();", prepared)

    def test_reviewed_byte_displacements_preserve_byte_addresses(self):
        source = (PROJECT / "exports/client/subrosa.c").read_bytes()
        restored, count = repair_client_byte_displacements(source)
        self.assertEqual(count, 5)
        self.assertIn(b"*((unsigned __int8 *)v6 + ((char *)v5 - (char *)&dword_140404A6C[16 * (__int64)v2 + 468676924]))", restored)
        with self.assertRaises(ValueError):
            repair_client_byte_displacements(restored)
        fixture = '''#include <stddef.h>
            #include <stdint.h>
            int main(void) {
                unsigned char storage[256];
                for (unsigned i = 0; i < 256; ++i) storage[i] = (unsigned char)(i * 37);
                for (unsigned base = 16; base <= 192; base += 16)
                    for (unsigned other = 16; other <= 192; other += 16)
                        for (unsigned step = 0; step < 32; ++step) {
                            unsigned char *cursor = storage + base + step;
                            ptrdiff_t delta = (char *)(storage + other) - (char *)(storage + base);
                            unsigned char *address = cursor + delta;
                            if (address != storage + other + step) return 1;
                            if (*address != storage[other + step]) return 2;
                        }
                return 0;
            }'''
        output = PROJECT / "reports/rebuild-tests"
        output.mkdir(parents=True, exist_ok=True)
        path = output / "byte_displacement.c"
        executable = output / "byte_displacement.exe"
        path.write_text(fixture, encoding="utf-8")
        compiled = subprocess.run([os.environ.get("CC") or shutil.which("gcc"),
                                   "-std=c11", "-O2", "-Werror", str(path), "-o", str(executable)],
                                  capture_output=True, text=True)
        self.assertEqual(compiled.returncode, 0, compiled.stderr)
        self.assertEqual(subprocess.run([str(executable)], capture_output=True).returncode, 0)

    def test_reviewed_movss_casts_clear_upper_lanes_without_float_conversion(self):
        source = (PROJECT / "exports/client/subrosa.c").read_bytes()
        restored, count = repair_client_movss_casts(source)
        self.assertEqual(count, 7)
        self.assertIn(b"_mm_castsi128_ps(_mm_cvtsi32_si128((int)(*(unsigned int *)(a2 + 8))))", restored)
        fixture = '''#include <emmintrin.h>
            #include <stdint.h>
            #include <string.h>
            int main(void) {
                const uint32_t values[] = {0, 1, 0xffffffffu, 0x80000000u,
                    0x7f800000u, 0xff800000u, 0x7fc00123u, 0x7fa00123u};
                unsigned saved = _mm_getcsr();
                _mm_setcsr(0x1f80);
                for (unsigned i = 0; i < sizeof(values)/sizeof(values[0]); ++i) {
                    volatile uint32_t word = values[i];
                    __m128 value = _mm_castsi128_ps(_mm_cvtsi32_si128((int)word));
                    uint32_t lanes[4];
                    memcpy(lanes, &value, sizeof(lanes));
                    if (lanes[0] != word || lanes[1] || lanes[2] || lanes[3]) return 1;
                    if (_mm_getcsr() != 0x1f80) return 2;
                }
                _mm_setcsr(saved);
                return 0;
            }'''
        output = PROJECT / "reports/rebuild-tests"
        output.mkdir(parents=True, exist_ok=True)
        path = output / "movss_cast.c"
        executable = output / "movss_cast.exe"
        path.write_text(fixture, encoding="utf-8")
        compiled = subprocess.run([os.environ.get("CC") or shutil.which("gcc"),
                                   "-std=c11", "-O2", "-Werror", str(path), "-o", str(executable)],
                                  capture_output=True, text=True)
        self.assertEqual(compiled.returncode, 0, compiled.stderr)
        self.assertEqual(subprocess.run([str(executable)], capture_output=True).returncode, 0)

    def test_paired_double_return_cast_preserves_register_bits(self):
        source = b'''#include <emmintrin.h>
        #include <string.h>
        __m128d sub_1401F8A50(void) { return _mm_set_pd(-0.0, 2.0); }
//----- (00000001400054F0)
        int main(void) { __m128 v1;
            v1 = sub_1401F8A50();
            double low; memcpy(&low, &v1, sizeof(low)); return low != 2.0; }
        '''
        prepared, count = cast_client_paired_double_results(source, expected_count=1)
        self.assertEqual(count, 1)
        self.assertIn(b"v1 = _mm_castpd_ps(sub_1401F8A50())", prepared)
        output = PROJECT / "reports/rebuild-tests"
        output.mkdir(parents=True, exist_ok=True)
        path = output / "paired_double.c"
        executable = output / "paired_double.exe"
        path.write_bytes(prepared)
        compiled = subprocess.run([os.environ.get("CC") or shutil.which("gcc"),
                                   "-std=c11", "-Werror", str(path), "-o", str(executable)],
                                  capture_output=True, text=True)
        self.assertEqual(compiled.returncode, 0, compiled.stderr)
        self.assertEqual(subprocess.run([str(executable)], capture_output=True).returncode, 0)

    def test_local_fenv_names_do_not_collide_with_host_headers(self):
        source = b"int fesetenv(void *p) { return p != 0; } int f(void) { return fesetenv(0); }"
        renamed, count = rename_system_definitions(source, {"fesetenv"})
        self.assertEqual(count, 2)
        self.assertIn(b"int fesetenv_sr(void *p)", renamed)
        self.assertIn(b"return fesetenv_sr(0)", renamed)

    def test_template_operator_call_keeps_one_c_identifier(self):
        source = (b"int __fastcall Box<int>::operator()<Left &,Right>(int x) { return x; } "
                  b"int call(void) { return Box<int>::operator()<Left &,Right>(7); }")
        prepared, report = preprocess(source)
        self.assertEqual(report["renamed_operator_template"], 2)
        self.assertIn(b"Box__int__operator_call__Left_Right", prepared)
        self.assertFalse(Parser(Language(tree_sitter_c.language())).parse(prepared).root_node.has_error)

    def test_hexrays_annotations_leave_parseable_c(self):
        source = b"void __noreturn __fastcall fatal(void); void f(void *__hidden this);"
        prepared, report = preprocess(source)
        self.assertIn(b"__attribute__((noreturn))", prepared)
        self.assertEqual(report["noreturn_preserved"], 1)
        self.assertFalse(Parser(Language(tree_sitter_c.language())).parse(prepared).root_node.has_error)

    def test_empty_parameter_definition_keeps_valid_c(self):
        source = b"int inferred() { return 1; } int caller() { return inferred(2); }"
        translated, _ = translate(source)
        self.assertIn(b"int inferred()", translated)
        self.assertNotIn(b"inferred(, ...)", translated)

    def test_pinned_float_initializer_has_original_bits(self):
        source = (PROJECT / "exports/client/subrosa.c").read_bytes()
        restored, count = restore_client_float_table(source, PROJECT.parent / "subrosa.exe")
        self.assertEqual(count, 54)
        self.assertEqual(restored.count(b"0x1p-149f"), 54)
        self.assertEqual(restored.count(b"?flt"), 3)
        compiled, executable, _ = self.compile_fixture("float_bit", '''
            #include <stdint.h>
            #include <string.h>
            int main(void) {
                float value = 0x1p-149f;
                uint32_t bits = 0;
                memcpy(&bits, &value, sizeof bits);
                return bits != 1;
            }''')
        self.assertEqual(compiled.returncode, 0, compiled.stderr)
        self.assertEqual(subprocess.run([str(executable)], capture_output=True).returncode, 0)

    def test_pinned_tls_index_is_separate_from_adjacent_pointer(self):
        source = (PROJECT / "exports/client/subrosa.c").read_bytes()
        restored, count = restore_client_tls_index(source, PROJECT.parent / "subrosa.exe")
        self.assertEqual(count, 17)
        self.assertIn(b"int dwTlsIndex = -1;", restored)
        self.assertIn(b'off_1403020D0 = "`non-type-template-parameter"', restored)
        self.assertNotIn(b"dwTlsIndex.m256d_f64", restored)
        self.assertEqual(restored.count(b"?flt"), source.count(b"?flt") - 3)

    def test_pinned_wctype_table_and_interior_alias(self):
        source = (PROJECT / "exports/client/subrosa.c").read_bytes()
        restored, count = restore_client_wctype(source, PROJECT.parent / "subrosa.exe")
        self.assertEqual(count, 257)
        self.assertIn(b"wctype[257] = {", restored)
        self.assertIn(b"(char (*)[2])&wctype[1]", restored)
        self.assertIn(b"((const unsigned char *)&wctype[1])[2 * (unsigned __int8)v9]", restored)
        self.assertNotIn(b"wctype[] = ;", restored)

    def test_pinned_simd_table_keeps_all_192_bytes(self):
        source = (PROJECT / "exports/client/subrosa.c").read_bytes()
        restored, rows = restore_client_simd_table(source, PROJECT.parent / "subrosa.exe")
        self.assertEqual(rows, 12)
        declaration = restored.split(b"__m128i xmmword_140289E60[12] = {", 1)[1].split(b"}; // weak", 1)[0]
        self.assertEqual(declaration.count(b"ULL"), 24)
        self.assertNotIn(b"{ { 5, 0, 0, -64", declaration)
        expected = (PROJECT.parent / "subrosa.exe").read_bytes()[0x289060:0x289120]
        fixture = (b"#include <emmintrin.h>\n#include <string.h>\n"
                   + b"__m128i xmmword_140289E60[12] = {" + declaration + b"};\n"
                   + b"unsigned char expected[192] = {"
                   + b", ".join(str(value).encode() for value in expected)
                   + b"};\nint main(void) { return memcmp(xmmword_140289E60, expected, 192); }\n")
        output = PROJECT / "reports/rebuild-tests"
        output.mkdir(parents=True, exist_ok=True)
        path = output / "simd_table.c"
        executable = output / "simd_table.exe"
        path.write_bytes(fixture)
        compiled = subprocess.run([os.environ.get("CC") or shutil.which("gcc"),
                                   "-std=c11", "-Werror", str(path), "-o", str(executable)],
                                  capture_output=True, text=True)
        self.assertEqual(compiled.returncode, 0, compiled.stderr)
        self.assertEqual(subprocess.run([str(executable)], capture_output=True).returncode, 0)

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
        # Unresolved addresses are named honestly as extern functions.
        self.assertIn(b"sr_func_2000(2);", translated)
        self.assertIn(b"sr_func_3000(3);", translated)
        self.assertIn("__int64 __fastcall sr_func_2000();", build_forward_header(report))
        self.assertIn(b'"MEMORY[0x1000](1)"', translated)
        self.assertEqual(sum(e["kind"] == "function_binding" for e in report["edits"]), 1)
        self.assertEqual(sum(e["kind"] == "unknown_call_binding" for e in report["edits"]), 2)

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
        self.assertIn(b"[rsp+0x0D8+-0xB8]", translated)
        self.assertIn(b".att_syntax prefix", translated)
        # Object compilation checks MASM conversion as well as C syntax.
        compiler = os.environ.get("CC") or shutil.which("gcc")
        path = PROJECT / "reports/rebuild-tests" / "wrapped_asm.c"
        path.write_bytes(translated)
        result = subprocess.run([compiler, "-std=c11", "-c", str(path),
                                 "-o", str(path.with_suffix('.obj'))],
                                capture_output=True, text=True)
        self.assertEqual(result.returncode, 0, result.stderr)

    def test_multiline_assembly_has_real_instruction_separators(self):
        from prepare_rebuild import basic_asm
        compiler = os.environ.get("CC") or shutil.which("gcc")
        path = PROJECT / "reports/rebuild-tests" / "multiline_asm.c"
        wrapped = basic_asm(b"mov eax, 11h ; 'number'\nadd eax, 2\nmov dword ptr cs:result, eax")
        self.assertNotIn(b'\\\\n', wrapped)
        self.assertIn(b'[rip+result]', wrapped)
        self.assertIn(b"# 'number'", wrapped)
        path.write_bytes(b'int result; int main(void) { ' + wrapped +
                         b' return result != 19; }')
        exe = path.with_suffix('.exe')
        compiled = subprocess.run([compiler, str(path), '-o', str(exe)],
                                  capture_output=True, text=True)
        self.assertEqual(compiled.returncode, 0, compiled.stderr)
        self.assertEqual(subprocess.run([str(exe)], capture_output=True).returncode, 0)

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
