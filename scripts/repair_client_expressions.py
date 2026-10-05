"""Scoped repairs of expressions reviewed in the pinned Windows client.

Called only after reference hash validation. Counts guard against export drift.
See docs/client-expression-repairs.md for instructions and remaining limits.
"""
import re
from tree_sitter import Language, Parser
import tree_sitter_c


ADDRESS_FUNCTIONS = {
    0x140035E50: 3, 0x140037220: 3, 0x14009A370: 1,
    0x1400DDB70: 3, 0x1400DFB70: 3, 0x1400E15A0: 3, 0x1400E21F0: 3,
    0x1400FF660: 4, 0x140103270: 6, 0x140103D50: 6,
    0x140155790: 3, 0x140248A88: 2, 0x1402492BC: 1,
}


def repair_client_address_arithmetic(source, mask_noncode):
    """Preserve 64-bit ADD/SUB address arithmetic without adding C pointers."""
    parser = Parser(Language(tree_sitter_c.language()))
    markers = list(re.finditer(rb"(?m)^//----- \(([0-9A-Fa-f]+)\)", source))
    ranges = {int(m.group(1), 16): (source.index(b"\n", m.end()) + 1,
              markers[i + 1].start() if i + 1 < len(markers) else len(source))
              for i, m in enumerate(markers)}
    edits = []
    for va, expected in ADDRESS_FUNCTIONS.items():
        start, end = ranges[va]
        masked = mask_noncode(source[start:end])
        tree = parser.parse(masked)
        pending = [tree.root_node]
        matches = []
        while pending:
            node = pending.pop()
            pending.extend(node.children)
            if node.type != "binary_expression":
                continue
            operator = node.child_by_field_name("operator")
            if masked[operator.start_byte:operator.end_byte] not in (b"+", b"-"):
                continue
            if node.parent and node.parent.type == "binary_expression":
                parent_op = node.parent.child_by_field_name("operator")
                if masked[parent_op.start_byte:parent_op.end_byte] in (b"+", b"-"):
                    continue
            expression = masked[node.start_byte:node.end_byte]
            if not expression.startswith(b"(char *)"):
                continue
            if not (re.search(rb"\+\s*(?:\(char \*\)|&v\d+\[)", expression)
                    or (va == 0x1400FF660 and b" + v16 " in expression)
                    or (va == 0x140248A88 and b" + a1 " in expression)
                    or (va == 0x1402492BC and b" + v6[4] " in expression)):
                continue
            replacement = source[start + node.start_byte:start + node.end_byte]
            replacement = replacement.replace(b"(char *)", b"(uintptr_t)").replace(b"(_BYTE *)", b"(uintptr_t)")
            replacement = re.sub(rb"&v(150|174|157)\[(-v\d+ - 4)\]",
                                 rb"((uintptr_t)v\1 + (\2))", replacement)
            if va == 0x1400FF660:
                replacement = replacement.replace(b" + v16 ", b" + (uintptr_t)v16 ")
            if va == 0x140248A88:
                replacement = replacement.replace(b" + a1 ", b" + (uintptr_t)a1 ").replace(b" - v11", b" - (uintptr_t)v11")
            if va == 0x1402492BC:
                replacement = replacement.replace(b" + v6[4] - *v6", b" + (uintptr_t)v6[4] - (uintptr_t)*v6")
            edits.append((start + node.start_byte, start + node.end_byte, replacement))
            matches.append(expression)
        if len(matches) != expected:
            raise ValueError(f"Expected {expected} address sums at {va:#x}, found {len(matches)}")
    for start, end, replacement in sorted(edits, reverse=True):
        source = source[:start] + replacement + source[end:]
    return source, len(edits)


SCALAR_FLOAT_FUNCTIONS = {
    0x1400808E0: 3, 0x140088130: 2, 0x14009C680: 1, 0x14009DA10: 1,
    0x140177E50: 4, 0x140179B80: 2, 0x140179E50: 2, 0x14017A640: 4,
    0x14017C040: 1, 0x14017C8A0: 4, 0x14017CDD0: 2,
}

# Both memory MOVSS and MOVD clear bits 127:32 of the destination.
WORD_LOADS = (
    (0x140072450, b"__m128i", b"v14[3]"),
    (0x1400745F0, b"__m128i", b"v22[3]"),
    (0x140087810, b"__m128i", b"*v20"),
    (0x140087810, b"__m128i", b"*(unsigned int *)v40"),
    (0x140088130, b"__m128i", b"v44[2]"),
    (0x1400C3140, b"__m128", b"*((unsigned int *)a2 + 10)"),
    (0x1400C3140, b"__m128", b"*((unsigned int *)a2 + 15)"),
    (0x1400C3140, b"__m128", b"*((unsigned int *)a2 + 1)"),
    (0x1400C3140, b"__m128", b"*((unsigned int *)a2 + 11)"),
    (0x1400C3140, b"__m128", b"*((unsigned int *)a2 + 13)"),
    (0x1400D1830, b"__m128", b"*(unsigned int *)v128"),
    (0x1400D1830, b"__m128", b"*((unsigned int *)v128 + 1)"),
    (0x1400D1830, b"__m128", b"*((unsigned int *)v128 + 2)"),
    (0x1401178F0, b"__m128", b"*(unsigned int *)((char *)&dword_140404A6C[71859673] + v32)"),
    (0x1401178F0, b"__m128", b"*(unsigned int *)((char *)&dword_140404A6C[71859672] + v62)"),
    (0x14017C040, b"__m128", b"a9"),
)

VA_COPY_FUNCTIONS = (0x14020D938, 0x14020D9C0, 0x14020DA48, 0x14020DAD0,
                     0x14020DB58, 0x14020DBE0, 0x1402253B4, 0x14022543C)

# In each caller the fourth argument is the locale pointer retained in R9.
MBTOWC_CALLERS = {
    0x14021EE18: b"v6", 0x14021EEC0: b"v5", 0x14021EF8C: b"v6",
    0x14021F034: b"v6", 0x14021F0DC: b"v5", 0x14021F1A8: b"v6",
    0x140224138: b"v4", 0x140224240: b"v4", 0x140224348: b"v4",
    0x140224450: b"v4", 0x14022453C: b"v4", 0x140224628: b"v4",
    0x1402365F4: b"v10", 0x1402366A0: b"v11",
}

BYTE_DIFFERENCES = (
    (0x14006D930, b"v16 - a1", b"v16", b"a1"),
    (0x140071C20, b"v24 - ((char *)&dword_140404A6C[v20 + 70290908] + 1)", b"v24", b"((char *)&dword_140404A6C[v20 + 70290908] + 1)"),
    (0x1400C6D90, b"v14 - ((char *)&dword_140404A6C[v3 + 278847154] + 1)", b"v14", b"((char *)&dword_140404A6C[v3 + 278847154] + 1)"),
    (0x140194D40, b"v67 - v33", b"v67", b"v33"),
    (0x14023D5B8, b"&v38 - &v34[v13 + 11]", b"&v38", b"&v34[v13 + 11]"),
    (0x14025378C, b"v8 - v15", b"v8", b"v15"),
    (0x1402538A8, b"v10 - v18", b"v10", b"v18"),
    (0x14025B024, b"a3 - a1", b"a3", b"a1"),
    (0x14025B100, b"a3 - a1", b"a3", b"a1"),
    (0x14025FF68, b"v23 - Block", b"v23", b"Block"),
)

# These conflicts followed implicit-int declarations at earlier call sites.
# Copy the final definition's header, including function-pointer return types.
MISSING_FORWARD_FUNCTIONS = (
    (0x14016DFD0, "sub_14016DFD0"), (0x14023AD00, "j__realloc_base_sr"),
    (0x14023E780, "swprintf_0_sr"), (0x140245570, "try_cor_exit_process"),
    (0x14024F744, "sub_14024F744"), (0x1402541BC, "wctomb_s_l"),
    (0x140256244, "fp_format_e_internal"), (0x1402564C0, "fp_format_f_internal"),
    (0x14025C1D0, "handle_error"), (0x14025C2F8, "handle_errorf"),
    (0x14025F464, "update_thread_multibyte_data_internal"),
    (0x1402654D0, "strnicmp_l"), (0x14026A260, "wcsnicoll_l"),
    (0x14026BF4C, "_acrt_CompareStringA"),
)


def client_definition_forwards(source, mask_noncode):
    markers = list(re.finditer(rb"(?m)^//----- \(([0-9A-Fa-f]+)\)", source))
    ranges = {int(m.group(1), 16): (m.end(), markers[i + 1].start()
              if i + 1 < len(markers) else len(source)) for i, m in enumerate(markers)}
    result = {}
    for va, name in MISSING_FORWARD_FUNCTIONS:
        start, end = ranges[va]
        start = source.index(b"\n", start) + 1
        masked = mask_noncode(source[start:end])
        body_start = masked.index(b"{")
        header_start = re.search(rb"\S", masked[:body_start]).start()
        header = source[start + header_start:start + body_start].strip()
        if name.encode() not in header or not header.endswith(b")"):
            raise ValueError(f"Missing definition header for {name}")
        result[name] = header.decode() + ";"
    return result


def repair_client_expressions(source, mask_noncode):
    markers = list(re.finditer(rb"(?m)^//----- \(([0-9A-Fa-f]+)\)", source))
    ranges = {int(m.group(1), 16): (m.end(), markers[i + 1].start()
              if i + 1 < len(markers) else len(source)) for i, m in enumerate(markers)}
    edits = []
    counts = {}

    def replace(va, expression, replacement, expected=1):
        start, end = ranges[va]
        matches = list(re.finditer(re.escape(expression), mask_noncode(source[start:end])))
        if len(matches) != expected:
            raise ValueError(f"Expected {expected} expressions at {va:#x}, found {len(matches)}: {expression!r}")
        for m in matches:
            edits.append((start + m.start(), start + m.end(), replacement))
        return len(matches)

    word_count = 0
    for va, typ, operand in WORD_LOADS:
        value = b"_mm_cvtsi32_si128((int)(" + operand + b"))"
        if typ == b"__m128":
            value = b"_mm_castsi128_ps(" + value + b")"
        word_count += replace(va, b"(" + typ + b")" + operand, value,
                              2 if va == 0x1400C3140 and operand.endswith(b"+ 15)") else 1)
    counts["reviewed_scalar_word_loads"] = word_count

    float_count = 0
    pattern = re.compile(rb"\((__m128i|__m128)\)COERCE_UNSIGNED_INT\(")
    for va, expected in SCALAR_FLOAT_FUNCTIONS.items():
        start, end = ranges[va]
        body = mask_noncode(source[start:end])
        matches = list(pattern.finditer(body))
        if len(matches) != expected:
            raise ValueError(f"Expected {expected} float scalar casts at {va:#x}, found {len(matches)}")
        for m in matches:
            depth, cursor = 1, m.end()
            while depth and cursor < len(body):
                depth += (body[cursor] == 40) - (body[cursor] == 41)
                cursor += 1
            if depth:
                raise ValueError("Unbalanced scalar bit-cast")
            value = b"_mm_set_ss(" + source[start + m.end():start + cursor - 1] + b")"
            if m.group(1) == b"__m128i":
                value = b"_mm_castps_si128(" + value + b")"
            edits.append((start + m.start(), start + cursor, value))
            float_count += 1
    counts["reviewed_scalar_float_casts"] = float_count

    # Windows x64 va_list is a single cursor pointer. Copy into the actual
    # slot, rather than casting its address to a temporary va_list rvalue.
    counts["reviewed_va_cursor_copies"] = sum(replace(
        va, b"va_copy((va_list)&v8[4], va)", b"memcpy(&v8[4], &va, sizeof(va))")
        for va in VA_COPY_FUNCTIONS)

    # Ten byte string comparisons use SUB to build an integer byte offset.
    byte_pattern = re.compile(rb"\*\(\(unsigned __int8 \*\)(v\d+)\s*\+\s*(\(char \*\)v\d+)\s*-\s*((?:\(char \*\)(?:v\d+|&dword_140404A6C\[[^\]\n]+\]))|v18)\)")
    byte_count = 0
    for va, expected in ((0x1400E6960, 9), (0x1400E7960, 1)):
        start, end = ranges[va]
        matches = list(byte_pattern.finditer(mask_noncode(source[start:end])))
        if len(matches) != expected:
            raise ValueError(f"Expected {expected} byte comparisons at {va:#x}, found {len(matches)}")
        for m in matches:
            value = b"*((unsigned __int8 *)" + m[1] + b" + (" + m[2] + b" - " + m[3] + b"))"
            edits.append((start + m.start(), start + m.end(), value))
            byte_count += 1
    byte_count += replace(0x140133090,
        b"*((_BYTE *)v17 + (char *)Src - (char *)&dword_140404A6C[v14 + 71856254])",
        b"*((_BYTE *)v17 + ((char *)Src - (char *)&dword_140404A6C[v14 + 71856254]))")
    counts["reviewed_additional_byte_displacements"] = byte_count

    counts["recovered_locale_arguments"] = sum(replace(va,
        b"(char *)*(int *)(*(_QWORD *)" + variable + b" + 8LL))",
        b"(char *)*(int *)(*(_QWORD *)" + variable + b" + 8LL), (struct __crt_locale_pointers *)" + variable + b")")
        for va, variable in MBTOWC_CALLERS.items())

    counts["reviewed_byte_differences"] = sum(replace(va, expression,
        b"(intptr_t)((uintptr_t)(" + left + b") - (uintptr_t)(" + right + b"))")
        for va, expression, left, right in BYTE_DIFFERENCES)

    # Import slots hold addresses; restore the signatures of the two thunks.
    counts["recovered_import_slot_calls"] = replace(0x140198FFB,
        b"__imp_inet_addr(cp)", b"((unsigned long (*)(const char *))__imp_inet_addr)(cp)")
    counts["recovered_import_slot_calls"] += replace(0x140199019,
        b"__imp_select(nfds, readfds, writefds, exceptfds, timeout)",
        b"((int (*)(int, fd_set *, fd_set *, fd_set *, const struct timeval *))__imp_select)(nfds, readfds, writefds, exceptfds, timeout)")

    counts["reviewed_qword_vector_casts"] = sum(replace(va, expression, replacement)
        for va, expression, replacement in (
        (0x140240C80, b"(__m128i)v218", b"_mm_cvtsi64_si128((long long)v218)"),
        (0x1402443A0, b"(__m128i)v6", b"_mm_cvtsi64_si128((long long)v6)"),
        (0x1402448D0, b"(__m128i)v6", b"_mm_cvtsi64_si128((long long)v6)")))

    counts["reviewed_vector_storage_copies"] = sum(replace(va, expression, replacement)
        for va, expression, replacement in (
        (0x1400A4DD0, b"v59[0] = _mm_load_si128((     __m128i *)&xmmword_140278F80)",
         b"memcpy(&v59[0], &xmmword_140278F80, 16)"),
        (0x1400A4DD0, b"v59[1] = _mm_load_si128((     __m128i *)&xmmword_140279020)",
         b"memcpy(&v59[1], &xmmword_140279020, 16)"),
        (0x140242320, b"_XMM3 = _mm_shuffle_epi32(*(__m128i *)&X, 238)",
         b"_XMM3 = (unsigned __int128)_mm_shuffle_epi32(*(__m128i *)&X, 238)"),
        (0x140243F90, b"_XMM0 = _mm_move_epi64(*(__m128i *)&X)",
         b"_XMM0 = (unsigned __int128)_mm_move_epi64(*(__m128i *)&X)"),
        (0x140242320, b"_mm_unpacklo_pd(v20, _XMM1)",
         b"_mm_unpacklo_pd(v20, (__m128d)_XMM1)")))

    counts["reviewed_x64_flag_expressions"] = sum(replace(va, expression, replacement,
        2 if va == 0x140242320 else 1)
        for va, expression, replacement in (
        (0x140172080, b"__OFSUB__(v76, v76 + 8)",
         b"sr_export_ofsub32((uint32_t)v76, (uint32_t)v76 + 8u)"),
        (0x140172080, b"__OFSUB__(v76, v76 + 16)",
         b"sr_export_ofsub32((uint32_t)v76, (uint32_t)v76 + 16u)"),
        (0x14026C374, b"__OFSUB__(v10, v6)", b"sr_export_ofsub32(v10, v6)"),
        (0x140242320, b"__CFSHR__(", b"sr_export_cfshr64("),
        (0x14025C4F0, b"__CFSHR__(", b"sr_export_cfshr64("),
        (0x14025C840, b"__CFSHR__(", b"sr_export_cfshr64("),
        (0x14025CC50, b"__CFSHR__(", b"sr_export_cfshr64(")))

    ordered = sorted(edits, reverse=True)
    for i, (start, end, replacement) in enumerate(ordered):
        if i and end > ordered[i - 1][0]:
            raise ValueError("Overlapping expression repairs")
        source = source[:start] + replacement + source[end:]
    return source, counts


FINAL_SITE_REPAIRS = (
    (0x1400ABB10, b"(__m128)SR_VEC_LANES(128, v79, u32)[0]",
     b"_mm_castsi128_ps(_mm_cvtsi32_si128((int)SR_VEC_LANES(128, v79, u32)[0]))", 2),
    (0x1400BCA30, b"(__m128)SR_VEC_LANES(128, v159, u32)[3]",
     b"_mm_castsi128_ps(_mm_cvtsi32_si128((int)SR_VEC_LANES(128, v159, u32)[3]))", 1),
    (0x1400BCA30, b"(__m128)SR_VEC_LANES(128, v150, u32)[3]",
     b"_mm_castsi128_ps(_mm_cvtsi32_si128((int)SR_VEC_LANES(128, v150, u32)[3]))", 1),
    (0x1400C3140, b"(__m128)SR_VEC_LANES(128, v78, u32)[0]",
     b"_mm_castsi128_ps(_mm_cvtsi32_si128((int)SR_VEC_LANES(128, v78, u32)[0]))", 1),
    # Original 0x1401833a7 MOVUPS reads all 16 bytes of this stack entry.
    (0x140182AD0, b"_mm_cvtsi64_si128((long long)(v103[v4]))", b"v103[v4]", 1),
    (0x14023FC70, b"(__m128d)COERCE_UNSIGNED_INT64(*(double *)&v3 * 0.6366197723675814 + 0.5)",
     b"_mm_set_sd(*(double *)&v3 * 0.6366197723675814 + 0.5)", 1),
    (0x1402401F0, b"(__m128d)COERCE_UNSIGNED_INT64(*(double *)&v1 * 0.6366197723675814 + 0.5)",
     b"_mm_set_sd(*(double *)&v1 * 0.6366197723675814 + 0.5)", 1),
    (0x1402431F0, b"(__m128d)COERCE_UNSIGNED_INT64(*(double *)&v3 * 0.6366197723675814 + 0.5)",
     b"_mm_set_sd(*(double *)&v3 * 0.6366197723675814 + 0.5)", 1),
    (0x140247A00, b"Last - First", b"(intptr_t)((uintptr_t)Last - (uintptr_t)First)", 1),
    (0x1402494A8, b"v7 - v3", b"(intptr_t)((uintptr_t)v7 - (uintptr_t)v3)", 1),
    (0x140266910, b"v9 - this", b"(intptr_t)((uintptr_t)v9 - (uintptr_t)this)", 1),
    (0x14026AF88, b"String1 - String2", b"(intptr_t)((uintptr_t)String1 - (uintptr_t)String2)", 1),
    # 0x14023223e/241: two byte-address SUBs, no struct-element scaling.
    (0x1402320F0, b"(struct __crt_strtox__big_integer *)((char *)a2 - 4 * v18) - this",
     b"(intptr_t)((uintptr_t)a2 - 4 * (uintptr_t)v18 - (uintptr_t)this)", 1),
    (0x1401F90B4, b"sub_1402474CC()", b"sub_1402474CC(a1)", 1),
    (0x140236ED8, b"isctype_l(a1)", b"isctype_l(a1, a2, a3)", 1),
    (0x14023DF6C, b"setvbuf_sr(v3, 0, 4)", b"setvbuf_sr(v3, 0, 4, 0)", 1),
    (0x14023E008, b"setvbuf_sr(v9, 0, 4)", b"setvbuf_sr(v9, 0, 4, 0)", 1),
    (0x1402609D8, b"msize()", b"msize(a1)", 1),
    (0x14019B2E0, b"sub_1401B0C90(v60, (__int64)v125, i)",
     b"sub_1401B0C90(v60, (__int64)v125, i, v69)", 1),
    (0x1401D1780, b"sub_1401D62A0(v49, (__int64)v38, (char *)v49 + 4752, (__m128i *)(v49 + 37), (__int64)(v49 + 1197))",
     b"sub_1401D62A0(v49, (__int64)v38, (char *)v49 + 4752, (__m128i *)(v49 + 37), (__int64)(v49 + 1197), (__int64)v21)", 1),
    (0x140242320, b"__CFSHL__(_RCX, 44)", b"sr_export_cfshl64(_RCX, 44)", 1),
    (0x140243F90, b"__SETP__(dword_140404A6C[19065824], 0)", b"sr_export_exp_range_mask(X)", 1),
    # The unwind range ends at 0x14025bed0. Its last instruction is INT3;
    # no CALL to the adjacent signal function exists in this range.
    (0x14025BC64, b"return signal();", b"__builtin_unreachable();", 1),
)


def repair_client_final_sites(source, mask_noncode):
    markers = list(re.finditer(rb"(?m)^//----- \(([0-9A-Fa-f]+)\)", source))
    ranges = {int(m.group(1), 16): (m.end(), markers[i + 1].start()
              if i + 1 < len(markers) else len(source)) for i, m in enumerate(markers)}
    edits = []

    def add(va, pattern, replacement, expected=1):
        start, end = ranges[va]
        matches = list(re.finditer(pattern, mask_noncode(source[start:end]), re.S))
        if len(matches) != expected:
            raise ValueError(f"Expected {expected} final repairs at {va:#x}, found {len(matches)}")
        for m in matches:
            value = replacement(m) if callable(replacement) else replacement
            edits.append((start + m.start(), start + m.end(), value))

    for va, expression, replacement, expected in FINAL_SITE_REPAIRS:
        add(va, re.escape(expression), replacement, expected)

    # Recover operand widths and relative addresses from 0x14023594a..965.
    for address, offset, typ in (
        (0xFFFFFFFFFFFFFFDC, 16, b"_QWORD"), (0xFFFFFFFFFFFFFFE4, 24, b"_WORD"),
        (0xFFFFFFFFFFFFFFE6, 26, b"_BYTE"), (0xFFFFFFFFFFFFFFEC, 32, b"_QWORD"),
        (0xFFFFFFFFFFFFFFF4, 40, b"_DWORD"), (0xFFFFFFFFFFFFFFF8, 44, b"_BYTE"),
        (0xFFFFFFFFFFFFFFFC, 48, b"_DWORD")):
        add(0x140235928, re.escape(b"MEMORY[0x" + f"{address:X}".encode() + b"ull]"),
            b"*(" + typ + b" *)((uintptr_t)a1 + " + str(offset).encode() + b")")

    # Resolve two previously skipped nested edits as complete expressions.
    add(0x14013D1B0, rb"v9 = \*\(double \*\)MEMORY\[0x1401F8B50\]\((.*?)\)\.m128_u64;",
        lambda m: b"v9 = SR_VEC_READ_LANES(128, sub_1401F8B50(" + m[1] + b"), f64)[0];")
    add(0x14019B2E0, rb"v37 = \*\(double \*\)sub_140244390\((.*?)\)\.m128_u64;",
        lambda m: b"v37 = SR_VEC_READ_LANES(128, sub_140244390(" +
        m[1].replace(b"v86->m128i_i32", b"SR_VEC_PTR_LANES(128, v86, i32)") + b"), f64)[0];")

    for start, end, replacement in sorted(edits, reverse=True):
        source = source[:start] + replacement + source[end:]
    return source, len(edits)


def repair_client_funclet_entries(source, mask_noncode):
    edits = []
    for va, final_notification in ((0x14020AE90, 1), (0x14020AEE0, 0)):
        name = f"sub_{va:X}".encode()
        marker = re.search(rb"(?m)^//----- \(" + f"{va:016X}".encode() + rb"\)", source)
        if marker is None:
            raise ValueError(f"Funclet {va:#x} missing")
        next_marker = re.search(rb"(?m)^//-----", source[marker.end():])
        end = marker.end() + next_marker.start() if next_marker else len(source)
        start = source.index(b"{", marker.end(), end)
        close = source.index(b"}", start, end) + 1
        body = mask_noncode(source[start:close])
        if (body.count(b"v2();") != 1 or body.count(b"_NLG_Return2_sr();") != 1
                or body.count(b"sub_1401FDA90();") != 1 + final_notification):
            raise ValueError(f"Funclet body differs at {va:#x}")
        replacement = (b"{\n  return (__int64)sr_client_call_funclet((uintptr_t)a1, "
                       b"(const uintptr_t *)a2, (unsigned)a3, " + str(final_notification).encode() + b");\n}")
        edits.append((start, close, replacement))
        signature = re.compile(rb"void\s+" + name + rb"\(__int64 a1, _QWORD \*a2, \.\.\.\)")
        matches = list(signature.finditer(mask_noncode(source)))
        if len(matches) != 2:
            raise ValueError(f"Expected definition and prototype for {name!r}, found {len(matches)}")
        for m in matches:
            edits.append((m.start(), m.end(), b"__int64 " + name + b"(__int64 a1, _QWORD *a2, int a3)"))
    for start, end, replacement in sorted(edits, reverse=True):
        source = source[:start] + replacement + source[end:]
    return source, 2
