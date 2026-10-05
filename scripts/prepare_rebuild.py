"""Produce a build copy with conservative, syntax-tree-based edits."""

import argparse
from bisect import bisect_right
import hashlib
import json
from pathlib import Path
import re
import shutil
import struct
import sys

PROJECT = Path(__file__).resolve().parent.parent
PINNED_CLIENT_SHA256 = "e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e"
sys.path.insert(0, str(PROJECT / "work/python-deps"))
# Keep the server toolchain isolated from other agents' dependency updates.
if (PROJECT / "work/server-python-deps").is_dir():
    sys.path.insert(0, str(PROJECT / "work/server-python-deps"))
from tree_sitter import Language, Parser
import tree_sitter_c


FIELDS = {}
for width in (64, 128, 256, 512):
    prefixes = ("m64",) if width == 64 else ("m%d" % width, "m%di" % width, "m%dd" % width)
    for prefix in prefixes:
        for lane in ("f32", "f64", "i8", "u8", "i16", "u16", "i32", "u32", "i64", "u64"):
            # Only documented Microsoft SIMD fields are accepted.
            if prefix.endswith("d") and lane != "f64":
                continue
            if prefix.endswith("i") and lane.startswith("f"):
                continue
            if prefix == "m%d" % width and lane == "f64":
                continue
            if width >= 256 and prefix == "m%d" % width and lane != "f32":
                continue
            member = lane + "_scalar" if width == 64 and lane in ("i64", "u64") else lane
            FIELDS[(prefix + "_" + lane).encode()] = (width, member)

# Types provided by compiler headers or Hex-Rays macro definitions; never
# forward-declared. defs.h defines _BYTE/_WORD/_DWORD/_QWORD/_OWORD/_UNKNOWN
# as preprocessor macros, the Win32 and CRT typedefs below come from the
# MinGW headers export_compat.h includes, and each entry was confirmed by a
# GCC "conflicting types" diagnostic against a generated forward typedef.
BUILTIN_TYPES = {
    "__m64", "__m128", "__m128i", "__m128d", "__m256", "__m256i", "__m256d",
    "__m512", "__m512i", "__m512d", "FILE", "fpos_t", "size_t", "ptrdiff_t",
    "wchar_t", "va_list", "__builtin_va_list", "time_t", "clock_t",
    "__int8", "__int16", "__int32", "__int64", "__int128",
    "_BYTE", "_WORD", "_DWORD", "_QWORD", "_OWORD", "_UNKNOWN",
    "LARGE_INTEGER", "ULARGE_INTEGER", "fd_set", "fenv_t", "fexcept_t",
    "_onexit_table_t",
    "DWORD64", "DWORD_PTR", "EXCEPTION_DISPOSITION", "HANDLE", "HMODULE",
    "LONGLONG", "LPCWSTR", "LPFILETIME", "LPSTARTUPINFOW",
    "LPTOP_LEVEL_EXCEPTION_FILTER", "LPWSADATA", "PCONTEXT", "PDWORD_PTR",
    "PEXCEPTION_RECORD", "PEXCEPTION_ROUTINE",
    "PKNONVOLATILE_CONTEXT_POINTERS", "PRUNTIME_FUNCTION", "PSLIST_HEADER",
    "PULONG64", "PUNWIND_HISTORY_TABLE", "PVOID", "SOCKET", "UINT", "ULONG",
    "ULONG64", "ULONG_PTR", "_PIFV", "_PVFV", "__time64_t", "_crt_app_type",
    "_crt_argv_mode", "_locale_t", "_onexit_t", "errno_t", "u_long",
    "u_short", "_finddata32_t", "_finddata32i64_t", "__finddata64_t",
    "_finddata64i32_t",
}

NONCODE = re.compile(
    rb'"(?:\\.|[^"\\])*"'
    rb"|'(?:\\.|[^'\\])'"
    rb"|//[^\n]*"
    rb"|/\*.*?\*/",
    re.S)

QUALIFIED = re.compile(rb"[A-Za-z_][A-Za-z_0-9]*(?:::[A-Za-z_][A-Za-z_0-9]*)+")
HEX_H_LITERAL = re.compile(rb"\b([0-9][0-9A-Fa-f]*)[hH]\b")
INTEGER_LITERAL = re.compile(rb"(?<![\w.])(0[xX][0-9A-Fa-f]+|[0-9]+)([uUlL]*)")
ASM_BLOCK = re.compile(rb"__asm\s*\{([^{}]*)\}")
VAR_FRAME = re.compile(rb"\bvar_([0-9A-Fa-f]+)\b")
CS_RELATIVE = re.compile(rb"\bcs:([A-Za-z_][A-Za-z_0-9]*)")
BACKTICK_NAME = re.compile(rb"`([^'\n]*)'")
TEMPLATE_NAME = re.compile(rb"([A-Za-z_][A-Za-z_0-9]*)<((?:[^<>]|<[^<>]*>)+)>(?=\s*[:=(])")
OPERATOR_CALL = re.compile(rb"([A-Za-z_0-9])__operator\s*\(\s*\)")
OPERATOR_TEMPLATE = re.compile(rb"([A-Za-z_][A-Za-z_0-9]*__operator_call)<([^<>]+)>(?=\s*\()")
OPERATOR_ASSIGN = re.compile(rb"([A-Za-z_0-9])__operator\s*=")
AT_REGISTER = re.compile(rb"@<([a-z0-9]+)>")
SPOILS = re.compile(rb"__spoils\s*<[^>\n]*>")
NORETURN = re.compile(rb"\b__noreturn\b")
CONST_KEYWORD = re.compile(rb"\bconst\b")
# MSVC call-modifier keywords: no-ops under the single x64 calling
# convention, but tree-sitter cannot parse them after a pointer declarator.
CALLMOD = re.compile(
    rb"__vectorcall|__thiscall|__fastcall|__stdcall_dup\d|__stdcall|__cdecl_dup\d|__cdecl|__clrcall|__hidden")
EMPTY_INITIALIZER = re.compile(rb"=\s*;")
VECTOR_CAST = re.compile(
    rb"\(__m(128i|128d|128)\)\s*"
    rb"((?:\([^()\n]{1,24}\))?\s*"
    rb"(?:xmmword_[0-9A-Fa-f]+"
    rb"|[a-z]+_[0-9A-Fa-f]+"
    rb"|0[xX][0-9A-Fa-f]+[uUlL]*"
    rb"|[0-9]+[uUlL]*"
    rb"|(?:LODWORD|HIDWORD|COERCE_[A-Z_]+)\([^()\n]*\)"
    rb"|[A-Za-z_][A-Za-z_0-9]*))")


def sanitize_name(name):
    """Return the C identifier the source renames give a Hex-Rays function name.

    Mirrors the preprocess identifier passes exactly so that inventory names
    match their renamed definitions and call sites.
    """
    name = re.sub(r"`([^']*)'", lambda m: "_" + re.sub(r"[^A-Za-z_0-9]+", "_", m.group(1)) + "_", name)
    name = re.sub(r"([A-Za-z_][A-Za-z_0-9]*)<([A-Za-z_0-9, *&]+)>",
                  lambda m: m.group(1) + "__" + re.sub(r"[^A-Za-z_0-9]+", "__", m.group(2)), name)
    name = name.replace("::", "__")
    if name.endswith("__operator"):
        name += "_call"
    return name


def mask_noncode(source):
    """Replace string/char/comment bytes with spaces, preserving all offsets."""
    masked = bytearray(source)
    for match in NONCODE.finditer(source):
        masked[match.start():match.end()] = b" " * (match.end() - match.start())
    return bytes(masked)


def cppuid():
    return (b'__asm__ volatile("cpuid" : "+a"(_RAX), "+b"(_RBX), '
            b'"+c"(_RCX), "+d"(_RDX));')


def xgetbv():
    return (b'__asm__ volatile(".byte 0x0f, 0x01, 0xd0" : "=a"(_RAX), '
            b'"=d"(_RDX) : "c"(_RCX));')


def basic_asm(body):
    """Wrap a MASM instruction dump verbatim in a GNU as .intel_syntax string.

    Operand notations are resolved using Hex-Rays' dump convention:
    `var_XX` names the frame slot at [base - 0xXX], and `cs:symbol` is the
    64-bit RIP-relative reference to that symbol. Everything else passes to
    the assembler as Hex-Rays wrote it. MASM semicolon comments become GAS
    hash comments; GAS otherwise interprets the comment as another instruction.
    """
    lines = [re.sub(HEX_H_LITERAL, rb"0x\1", line.strip()) for line in body.split(b"\n")]
    lines = [re.sub(VAR_FRAME, rb"-0x\1", line) for line in lines]
    lines = [re.sub(CS_RELATIVE, rb"[rip+\1]", line) for line in lines]
    lines = [line.replace(b";", b"#", 1) for line in lines]
    lines = [line for line in lines if line]
    text = b"\n\t".join(lines)
    escaped = (text.replace(b"\\", b"\\\\").replace(b'"', b'\\"')
               .replace(b"\n", b"\\n").replace(b"\t", b"\\t"))
    return (b'__asm__ volatile(".intel_syntax noprefix\\n\\t' + escaped
            + b'\\n\\t.att_syntax prefix");')


def vector_cast_replacement(cast_type, target):
    """Rewrite int-sourced (__m128X) casts as the register moves they denote.

    Hex-Rays writes casts like (__m128)dword_X for reinterpreting an integer
    as vector register content (a movd: low lane set, upper lanes zeroed) and
    (__m128)xmmword_X for 16-byte data loads. GCC rejects int-to-vector casts.
    """
    if cast_type == b"__m128i":
        return b"_mm_load_si128((const __m128i *)&" + target + b")"
    load = b"_mm_load_si128((const __m128i *)&" + target + b")"
    return b"((" + cast_type + b")" + load + b")"


def int_to_vector(cast_type, target, bits):
    if bits == 64:
        convert = b"_mm_cvtsi64_si128((long long)(" + target + b"))"
    else:
        convert = b"_mm_cvtsi32_si128((int)(" + target + b"))"
    if cast_type == b"__m128i":
        return convert
    return b"((" + cast_type + b")" + convert + b")"


def restore_client_float_table(source, client_path):
    """Restore exact bits for the pinned client's 479-word mixed-use table.

    Hex-Rays marks the 0x00000001 words as ?flt. C's smallest positive binary32
    hex literal emits those bits exactly, while the existing 0.0 entries match
    the binary's zero words. The whole array is checked before any replacement.
    """
    binary = client_path.read_bytes()
    if hashlib.sha256(binary).hexdigest() != PINNED_CLIENT_SHA256:
        raise ValueError("Float table recovery requires the pinned client binary")
    raw = binary[0x2B12F4:0x2B12F4 + 479 * 4]
    if len(raw) != 479 * 4:
        raise ValueError("Client float table lies outside the binary")
    words = struct.unpack("<479I", raw)
    pattern = rb"float flt_1402B2CF4\[479\]\s*=\s*\{([^}]*)\};"
    match = re.search(pattern, source, re.S)
    if match is None:
        raise ValueError("Pinned client float table is missing from the export")
    entries = [value.strip() for value in match.group(1).split(b",")]
    if len(entries) != 479:
        raise ValueError("Client float table length changed")
    replacements = {b"0.0": 0, b"?flt": 1}
    if any(replacements.get(value) != word for value, word in zip(entries, words)):
        raise ValueError("Exported float table does not match client data bytes")
    restored = match.group(1).replace(b"?flt", b"0x1p-149f")
    return source[:match.start(1)] + restored + source[match.end(1):], words.count(1)


def restore_client_tls_index(source, client_path):
    """Split an IDA vector that overlaps the TLS index and an adjacent pointer.

    The export treats 0x1403020c0..df as one __m256d. The client bytes and
    uses show a four-byte TLS index at the start, while off_1403020D0 is a
    separately exported pointer halfway through the supposed vector.
    """
    binary = client_path.read_bytes()
    if hashlib.sha256(binary).hexdigest() != PINNED_CLIENT_SHA256:
        raise ValueError("TLS index recovery requires the pinned client binary")
    if binary[0x3006C0:0x3006D0] != b"\xff" * 4 + b"\x00" * 12:
        raise ValueError("Pinned client TLS index bytes changed")
    if struct.unpack_from("<Q", binary, 0x3006D0)[0] != 0x1402842B8:
        raise ValueError("Adjacent pointer bytes changed")
    declaration = b"__m256d dwTlsIndex = { { ?flt, 0.0, ?flt, ?flt } }; // idb"
    if source.count(declaration) != 1:
        raise ValueError("Expected one exported TLS index declaration")
    access = b"dwTlsIndex.m256d_f64[0]"
    if not source.count(access):
        raise ValueError("No exported TLS index accesses")
    if any(match.group() != access for match in re.finditer(
            rb"dwTlsIndex\.m256d_f64\[[^]]+\]", source)):
        raise ValueError("TLS index uses another vector lane")
    source = source.replace(declaration, b"int dwTlsIndex = -1; // recovered 0x1403020c0")
    return source.replace(access, b"dwTlsIndex"), source.count(access)


def restore_client_wctype(source, client_path):
    """Recover the 257-word CRT character table and its interior byte alias."""
    binary = client_path.read_bytes()
    if hashlib.sha256(binary).hexdigest() != PINNED_CLIENT_SHA256:
        raise ValueError("wctype recovery requires the pinned client binary")
    raw = binary[0x28AF10:0x28AF10 + 257 * 2]
    if len(raw) != 514:
        raise ValueError("Pinned client wctype table lies outside the binary")
    words = struct.unpack("<257H", raw)
    if words[:4] != (0, 32, 32, 32) or words[-1] != 258:
        raise ValueError("Pinned client wctype table boundary changed")
    declaration = b"const unsigned __int16 wctype[] = ;"
    byte_alias = b"_BYTE byte_14028BD12[2] = { 32, 0 }; // weak"
    pointer = b"&byte_14028BD12"
    use = b"byte_14028BD12[2 * (unsigned __int8)v9]"
    if any(source.count(item) != 1 for item in
           (declaration, byte_alias, pointer, use)):
        raise ValueError("Exported wctype declarations or uses changed")
    initializer = b"const unsigned __int16 wctype[257] = {\n  " + b",\n  ".join(
        b", ".join(str(value).encode() for value in words[i:i + 16])
        for i in range(0, len(words), 16)) + b"\n};"
    source = source.replace(declaration, initializer)
    # 0x14028bd12 is &wctype[1], not independent two-byte storage.
    source = source.replace(byte_alias, b"/* byte_14028BD12 aliases wctype[1]. */")
    source = source.replace(pointer, b"(char (*)[2])&wctype[1]")
    source = source.replace(use, b"((const unsigned char *)&wctype[1])[2 * (unsigned __int8)v9]")
    return source, len(words)


def restore_client_simd_table(source, client_path):
    """Encode the pinned 12-vector table with GCC's two-qword initializer."""
    binary = client_path.read_bytes()
    if hashlib.sha256(binary).hexdigest() != PINNED_CLIENT_SHA256:
        raise ValueError("SIMD table recovery requires the pinned client binary")
    raw = binary[0x289060:0x289060 + 12 * 16]
    if len(raw) != 192:
        raise ValueError("Pinned client SIMD table lies outside the binary")
    pattern = rb"__m128i xmmword_140289E60\[12\]\s*=\s*\{(.*?)\}; // weak"
    match = re.search(pattern, source, re.S)
    if match is None:
        raise ValueError("Exported SIMD table declaration missing")
    rows = re.findall(rb"\{\s*\{\s*([^{}]+)\}\s*\}", match.group(1))
    if len(rows) != 12:
        raise ValueError("Exported SIMD table row count changed")
    exported = bytearray()
    for row in rows:
        values = [int(value.strip()) for value in row.split(b",")]
        if len(values) != 16 or any(not -128 <= value <= 255 for value in values):
            raise ValueError("Exported SIMD table is not 16 bytes per row")
        exported.extend(value & 255 for value in values)
    if bytes(exported) != raw:
        raise ValueError("Exported SIMD table bytes differ from client binary")
    words = struct.unpack("<24Q", raw)
    rows_c = [b"  { 0x%xULL, 0x%xULL }" % (words[i], words[i + 1])
              for i in range(0, 24, 2)]
    replacement = b"__m128i xmmword_140289E60[12] = {\n" + b",\n".join(rows_c) + b"\n}; // weak"
    return source[:match.start()] + replacement + source[match.end():], len(rows)


CLIENT_MOVSS_CASTS = (
    (0x14002EDF0, 0x14002EE0B, b"*(unsigned int *)(a2 + 8)"),
    (0x14010E370, 0x14010E370, b"*(unsigned int *)a2"),
    (0x14010E370, 0x14010E377, b"*((unsigned int *)a2 + 4)"),
    (0x14010E370, 0x14010E37F, b"*((unsigned int *)a2 + 8)"),
    (0x14011C6B0, 0x14011C6B4, b"*(unsigned int *)(a1 + 4)"),
    (0x140178E30, 0x140178E94, b"*(unsigned int *)(a1 + 4 * v10 + 8)"),
    (0x140178E30, 0x140178ED5, b"*(unsigned int *)(a1 + 4 * v10 + 12)"),
)


def repair_client_movss_casts(source):
    """Restore seven reviewed memory MOVSS loads, including zeroed upper lanes."""
    markers = list(re.finditer(rb"(?m)^//----- \(([0-9A-Fa-f]+)\)", source))
    ranges = {int(marker.group(1), 16): (marker.end(),
              markers[index + 1].start() if index + 1 < len(markers) else len(source))
              for index, marker in enumerate(markers)}
    edits = []
    for function, instruction, operand in CLIENT_MOVSS_CASTS:
        if function not in ranges:
            raise ValueError(f"MOVSS function {function:#x} missing")
        start, end = ranges[function]
        expression = b"(__m128)" + operand
        masked = mask_noncode(source[start:end])
        matches = list(re.finditer(re.escape(expression) + rb"(?=\s*[;,\)])", masked))
        if len(matches) != 1:
            raise ValueError(f"Expected one MOVSS cast for {instruction:#x}, found {len(matches)}")
        match = matches[0]
        replacement = b"_mm_castsi128_ps(_mm_cvtsi32_si128((int)(" + operand + b")))"
        edits.append((start + match.start(), start + match.end(), replacement))
    for start, end, replacement in sorted(edits, reverse=True):
        source = source[:start] + replacement + source[end:]
    return source, len(edits)


CLIENT_BYTE_DISPLACEMENTS = (
    (0x140027A60, 0x140027AE3, b"v6", b"v5", b"v2", 468676924),
    (0x140027B40, 0x140027BC3, b"v6", b"v5", b"v2", 468658234),
    (0x140027C20, 0x140027CA3, b"v6", b"v5", b"v2", 468653113),
    (0x140028BD0, 0x140028C53, b"v6", b"v5", b"v2", 468653113),
    (0x140028BD0, 0x140028D93, b"v21", b"v20", b"v17", 468676924),
)


def repair_client_byte_displacements(source):
    """Group five reviewed SUB-register byte displacements before pointer addition."""
    markers = list(re.finditer(rb"(?m)^//----- \(([0-9A-Fa-f]+)\)", source))
    ranges = {int(marker.group(1), 16): (marker.end(),
              markers[index + 1].start() if index + 1 < len(markers) else len(source))
              for index, marker in enumerate(markers)}
    edits = []
    for function, instruction, cursor, other, index, offset in CLIENT_BYTE_DISPLACEMENTS:
        if function not in ranges:
            raise ValueError(f"Byte comparison function {function:#x} missing")
        start, end = ranges[function]
        base = b"(char *)&dword_140404A6C[16 * (__int64)" + index + b" + " + str(offset).encode() + b"]"
        displacement = b"(char *)" + other + b" - " + base
        expression = b"*((unsigned __int8 *)" + cursor + b" + " + displacement + b")"
        matches = list(re.finditer(re.escape(expression), mask_noncode(source[start:end])))
        if len(matches) != 1:
            raise ValueError(f"Expected one byte displacement for {instruction:#x}, found {len(matches)}")
        match = matches[0]
        replacement = b"*((unsigned __int8 *)" + cursor + b" + (" + displacement + b"))"
        edits.append((start + match.start(), start + match.end(), replacement))
    for start, end, replacement in sorted(edits, reverse=True):
        source = source[:start] + replacement + source[end:]
    return source, len(edits)


def cast_client_paired_double_results(source, expected_count=None):
    """Preserve xmm0 bits when a paired-double result enters an __m128 local.

    The pinned helper at 0x1401f8a50 returns two binary64 lanes in xmm0.
    Callers use movaps to copy that register, then read its double lanes.
    `_mm_castpd_ps` has no arithmetic or rounding effect and resolves GCC's
    vector type mismatch without changing those bits.
    """
    masked = mask_noncode(source)
    pattern = re.compile(rb"(?m)^[ \t]*(v[0-9]+)[ \t]*=[ \t]*sub_1401F8A50\(")
    markers = [match.start() for match in re.finditer(rb"(?m)^//-----", source)]
    edits = []
    for match in pattern.finditer(masked):
        index = bisect_right(markers, match.start()) - 1
        if index < 0:
            raise ValueError("Paired-double call is outside an exported function")
        function_start = markers[index]
        name = match.group(1)
        declaration = re.compile(rb"\b__m128\s+" + re.escape(name) + rb"\s*;")
        if not declaration.search(masked[function_start:match.start()]):
            continue  # Nested or differently typed uses are reviewed separately.
        open_paren = match.end() - 1
        depth = 0
        close_paren = None
        for cursor in range(open_paren, len(masked)):
            if masked[cursor] == ord("("):
                depth += 1
            elif masked[cursor] == ord(")"):
                depth -= 1
                if depth == 0:
                    close_paren = cursor
                    break
        if close_paren is None or not masked[close_paren + 1:].lstrip().startswith(b";"):
            raise ValueError("Paired-double assignment shape changed")
        call_start = match.end() - len(b"sub_1401F8A50(")
        edits.append((call_start, close_paren + 1))
    if expected_count is not None and len(edits) != expected_count:
        raise ValueError(f"Expected {expected_count} paired-double assignments, found {len(edits)}")
    for start, end in reversed(edits):
        source = source[:start] + b"_mm_castpd_ps(" + source[start:end] + b")" + source[end:]
    return source, len(edits)


def preprocess(source):
    """Produce the C build copy and record every semantic assumption."""
    report = {"asm_cpuid": 0, "asm_xgetbv": 0, "asm_wrapped": 0,
              "renamed_qualified": 0, "renamed_anonymous": 0,
              "renamed_backtick": 0, "renamed_template": 0,
              "renamed_operator_call": 0, "renamed_operator_template": 0,
              "renamed_operator_assign": 0,
              "register_annotations": 0, "unknown_floats": 0,
              "unknown_initializers": 0, "const_stripped": 0,
              "vector_loads": 0, "vector_moves": 0,
              "split_constants": 0, "unsigned_constants": 0, "callmods_stripped": 0, "vardecls_deduped": 0}
    # PENDING: depth-0 weak-slot declaration dedup; the statement boundaries
    # destabilized prototype handling and stay disabled.
    for direction in ("attributes", "callmods", "const", "asm", "names",
                      "qualified", "operator_call", "operator_template",
                      "vectors", "constants"):
        edits = []
        if direction == "attributes":
            # GCC's noreturn attribute retains Hex-Rays' declaration intent
            # and is understood by the C parser used in later passes.
            masked = mask_noncode(source)
            for match in NORETURN.finditer(masked):
                edits.append((match.start(), match.end(), b"__attribute__((noreturn))"))
                report["noreturn_preserved"] = report.get("noreturn_preserved", 0) + 1
        elif direction == "const":
            # Hex-Rays infers const qualifications the original code did not
            # have (it writes through these objects); restore the original
            # permissiveness. Offsets are preserved for the passes below.
            masked = mask_noncode(source)
            for match in CONST_KEYWORD.finditer(masked):
                edits.append((match.start(), match.end(), b"    "))
                report["const_stripped"] += 1
        elif direction == "vardecls":
            # Hex-Rays declares weak fn-pointer slots repeatedly with
            # differing types; the first statement wins, later differing
            # ones are blanked in place (length-preserving). Only
            # brace-depth-0 statements are considered.
            masked = mask_noncode(source)
            pieces = re.split(rb"[{}]", masked)
            offsets = [0]
            for piece in pieces[:-1]:
                offsets.append(offsets[-1] + len(piece) + 1)
            statements = {}
            for index in range(0, len(pieces), 2):
                base = offsets[index]
                piece = pieces[index]
                for m in re.finditer(rb"[A-Za-z_][A-Za-z_0-9]*", piece):
                    identifier = m.group(0).decode()
                    if not DATA_SYMBOL.match(identifier):
                        continue
                    start = max(piece.rfind(b";", 0, m.start()),
                                piece.rfind(b"}", 0, m.start())) + 1
                    end = piece.find(b";", m.end())
                    if end < 0:
                        continue
                    body = piece[start:end]
                    if b"=" not in body or b"(" not in body:
                        continue
                    normalized = re.sub(rb"\s+", b" ", piece[start:end + 1])
                    statements.setdefault(identifier, []).append(
                        (base + start, base + end + 1, normalized.decode()))
            for identifier, entries in statements.items():
                if len(entries) < 2:
                    continue
                first_text = entries[0][2]
                for entry in entries[1:]:
                    if entry[2] != first_text:
                        edits.append((entry[0], entry[1],
                                      b" " * (entry[1] - entry[0])))
                        report["vardecls_deduped"] += 1
        elif direction == "callmods":
            masked = mask_noncode(source)
            for match in CALLMOD.finditer(masked):
                edits.append((match.start(), match.end(), b" " * (match.end() - match.start())))
                report["callmods_stripped"] += 1
        elif direction == "asm":
            masked = mask_noncode(source)
            for match in ASM_BLOCK.finditer(masked):
                inner = source[match.start(1):match.end(1)].strip()
                if inner == b"cpuid":
                    edits.append((match.start(), match.end(), cppuid()))
                    report["asm_cpuid"] += 1
                elif inner == b"xgetbv":
                    edits.append((match.start(), match.end(), xgetbv()))
                    report["asm_xgetbv"] += 1
                else:
                    edits.append((match.start(), match.end(), basic_asm(source[match.start(1):match.end(1)])))
                    report["asm_wrapped"] += 1
        elif direction == "names":
            masked = mask_noncode(source)
            for match in BACKTICK_NAME.finditer(masked):
                inner = re.sub(rb"[^A-Za-z_0-9]+", b"_",
                               source[match.start() + 1:match.end() - 1])
                edits.append((match.start(), match.end(), b"_" + inner + b"_"))
                report["renamed_backtick"] += 1
            for match in TEMPLATE_NAME.finditer(masked):
                args = re.sub(rb"[^A-Za-z_0-9]+", b"__", match.group(2))
                edits.append((match.start(), match.end(),
                              match.group(1) + b"__" + args))
                report["renamed_template"] += 1
        elif direction == "qualified":
            masked = mask_noncode(source)
            for match in QUALIFIED.finditer(masked):
                edits.append((match.start(), match.end(),
                              source[match.start():match.end()].replace(b"::", b"__")))
                report["renamed_qualified"] += 1
            for match in re.finditer(rb"\?\?\$[^\s(,;)]+", masked):
                sane = b"sr_m_" + re.sub(rb"[^A-Za-z0-9_]", b"_", source[match.start():match.end()])
                edits.append((match.start(), match.end(), sane))
                report["renamed_anonymous"] += 1
            for match in re.finditer(rb"#(?=[0-9])", masked):
                edits.append((match.start(), match.end(), b"sr_anon_"))
                report["renamed_anonymous"] += 1
        elif direction == "operator_call":
            # Hex-Rays spells lambda operator() names with a trailing empty pair,
            # which C reads as a function returning a function.
            masked = mask_noncode(source)
            for match in OPERATOR_CALL.finditer(masked):
                edits.append((match.start(), match.end(),
                              match.group(1) + b"__operator_call"))
                report["renamed_operator_call"] += 1
            for match in OPERATOR_ASSIGN.finditer(masked):
                edits.append((match.start(), match.end(),
                              match.group(1) + b"__operator_assign"))
                report["renamed_operator_assign"] += 1
            for match in AT_REGISTER.finditer(masked):
                edits.append((match.start(), match.end(),
                              b"/* " + match.group(1) + b" */"))
                report["register_annotations"] += 1
            for match in SPOILS.finditer(masked):
                edits.append((match.start(), match.end(), b""))
                report["register_annotations"] += 1
        elif direction == "operator_template":
            # The template argument list after operator() survives the earlier
            # generic template pass because that pass sees the empty () first.
            masked = mask_noncode(source)
            for match in OPERATOR_TEMPLATE.finditer(masked):
                args = re.sub(rb"[^A-Za-z_0-9]+", b"_", match.group(2))
                edits.append((match.start(), match.end(), match.group(1) + b"__" + args))
                report["renamed_operator_template"] += 1
        elif direction == "vectors":
            masked = mask_noncode(source)
            for match in VECTOR_CAST.finditer(masked):
                cast_type = match.group(1)
                prefix = b"__m" + cast_type if cast_type != b"128" else b"__m128"
                target = re.sub(rb"^\([^()\n]{1,24}\)\s*", b"", match.group(2))
                if target.startswith(b"_mm"):
                    continue  # already a vector expression; the cast is legal
                if re.fullmatch(rb"[A-Za-z_][A-Za-z_0-9]*", match.group(2)) and not re.match(
                        rb"(dword|qword|byte|word|flt|dbl|unk|xmmword)_", target):
                    continue  # bare identifier: may already hold a vector value
                if target.startswith(b"xmmword_"):
                    edits.append((match.start(), match.end(),
                                  vector_cast_replacement(prefix, target)))
                    report["vector_loads"] += 1
                    continue
                bits = 64 if target.startswith(b"qword_") or target.startswith(b"dbl_") \
                    or (target[:1].isdigit() and int(target.rstrip(b"uUlL"), 0) > 0xFFFFFFFF) \
                    else 32
                edits.append((match.start(), match.end(),
                              int_to_vector(prefix, target, bits)))
                report["vector_moves"] += 1
        else:
            masked = mask_noncode(source)
            for match in INTEGER_LITERAL.finditer(masked):
                digits, suffix = match.group(1), match.group(2)
                value = int(digits, 16 if digits[:2].lower() == b"0x" else 10)
                if value > (1 << 64) - 1:
                    low, high = value & ((1 << 64) - 1), value >> 64
                    replacement = (b"((__int128)0x%xull | ((__int128)0x%xull << 64))"
                                   % (low, high))
                    edits.append((match.start(), match.end(), replacement))
                    report["split_constants"] += 1
                elif value > (1 << 63) - 1 and b"u" not in suffix.lower():
                    edits.append((match.start(), match.end(), digits + b"ull"))
                    report["unsigned_constants"] += 1
            # Hex-Rays writes ?flt where it could not recover a float constant
            # and an empty initializer where it gave up on data entirely; both
            # become marked placeholders, not recovered values.
            for match in re.finditer(rb"\?flt\b", masked):
                edits.append((match.start(), match.end(),
                              b"0.0 /* sr_unknown_float */"))
                report["unknown_floats"] += 1
            for match in EMPTY_INITIALIZER.finditer(masked):
                actual = source[match.start():match.end()]
                if b'"' in actual or b"'" in actual:
                    continue  # a masked string literal, not an empty initializer
                edits.append((match.start(), match.end(),
                              b"= { 0 } /* sr_unknown_data */;"))
                report["unknown_initializers"] += 1
        for start, end, replacement in sorted(edits, reverse=True):
            source = source[:start] + replacement + source[end:]
    return source, report


def nodes(root):
    cursor = root.walk()
    while True:
        yield cursor.node
        if cursor.goto_first_child():
            continue
        while not cursor.goto_next_sibling():
            if not cursor.goto_parent():
                return


def is_lvalue(node, source):
    if node.type in ("identifier", "subscript_expression", "field_expression"):
        return True
    if node.type == "parenthesized_expression":
        return len(node.named_children) == 1 and is_lvalue(node.named_children[0], source)
    if node.type == "pointer_expression":
        return source[node.start_byte:node.end_byte].lstrip().startswith(b"*")
    return False


def declarator_identifier_node(declarator):
    node = declarator
    while node is not None and node.type not in ("identifier", "type_identifier"):
        nxt = node.child_by_field_name("declarator")
        if nxt is None:
            for child in node.named_children:
                if child.type != "parameter_list":
                    nxt = child
                    break
        node = nxt
    return node


def declarator_identifier(declarator, source):
    # Typedef names parse as type_identifier; ordinary declarators as identifier.
    node = declarator_identifier_node(declarator)
    return None if node is None else source[node.start_byte:node.end_byte].decode()


def declaration_declarator(node):
    """The declarator of a declaration, tolerating MS call modifiers.

    tree-sitter assigns the declarator field to ms_call_modifier when a
    prototype is written as `unsigned __int64 __fastcall name(...)`; the real
    declarator is a sibling named child.
    """
    declarator = node.child_by_field_name("declarator")
    if declarator is not None and declarator.type != "ms_call_modifier":
        return declarator
    for child in node.named_children:
        if child.type in ("function_declarator", "pointer_declarator",
                          "array_declarator", "identifier", "init_declarator"):
            return child
    return declarator


# Hex-Rays names an object after its address and encodes the recovered size
# in the prefix. A referenced-but-never-declared symbol of this shape gets an
# extern object of that prefix's width; the address is recovered, contents are
# pending type recovery.
DATA_SYMBOL = re.compile(r"^(byte|word|dword|qword|off|flt|dbl|unk)_[0-9A-Fa-f]+$")
DATA_SYMBOL_WIDTH = {
    "byte": "unsigned char", "word": "unsigned short",
    "dword": "unsigned int", "flt": "float",
    "qword": "unsigned __int64", "dbl": "double",
    "off": "void *", "unk": "unsigned char",
}


def data_symbol_decl(name):
    prefix = name.split("_", 1)[0]
    if name.startswith("__imp_"):
        # MinGW import libraries expose __imp_<name> data slots for every
        # imported function; the cast-called thunks in the export need them.
        return "extern unsigned __int64 %s;" % name
    kind = DATA_SYMBOL_WIDTH.get(prefix)
    if kind is not None:
        if prefix == "unk":
            return "extern unsigned char %s[1];" % name
        return "extern %s %s;" % (kind, name)
    if re.match(r"^a[A-Z][A-Za-z0-9_]*$", name):
        return "extern char %s[];" % name
    return None


DECLARATOR_CHAIN = {
    "pointer_declarator", "array_declarator", "function_declarator",
    "parenthesized_declarator", "init_declarator", "attributed_declarator",
    "ms_call_modifier",
}


def is_declarator_position(node):
    """True if the identifier names something a declaration declares.

    The chain from the identifier upward must consist solely of declarator
    nodes, each hop inside the parent's declarator field, ending at a
    declaring node. Initializer values and call arguments leave the chain.
    """
    current = node
    parent = node.parent
    while parent is not None:
        field_node = parent.child_by_field_name("declarator")
        if parent.type in ("declaration", "function_definition",
                           "parameter_declaration", "field_declaration"):
            return (field_node is not None
                    and field_node.start_byte <= current.start_byte
                    and current.end_byte <= field_node.end_byte)
        if parent.type not in DECLARATOR_CHAIN:
            return False
        if field_node is not None and not (
                field_node.start_byte <= current.start_byte
                and current.end_byte <= field_node.end_byte):
            return False  # inside an initializer value, not the declarator
        current = parent
        parent = parent.parent
    return False


INTEGER_TYPE = re.compile(r"float|double|__m128|__m64|__OWORD")


def classify_vector_rhs(node, right, rhs, source, var_types, function_returns,
                        fstart, vector_variables):
    """Return (source_kind, wrap_expr) or (None, None) when the RHS already
    holds a vector or its type is unknown. source_kind is 'int' or 'float'."""
    if right.type == "number_literal":
        return "int", None
    if right.type == "identifier":
        vtype = var_types.get((fstart, rhs.decode()))
        if vtype is None or "__m" in vtype:
            return None, None
        if re.search(r"(float|double)", vtype):
            return "float", None
        return "int", None
    if right.type == "subscript_expression":
        base = right.child_by_field_name("argument")
        bname = source[base.start_byte:base.end_byte].decode()             if base is not None and base.type == "identifier" else ""
        vtype = var_types.get((fstart, bname))
        if vtype is None:
            return "int", None
        if re.search(r"flt_", vtype) or vtype == "float":
            return "float", None
        if re.search(r"dbl_", vtype) or vtype == "double":
            return "float", None
        return ("float", None) if re.search(r"float|double", vtype) else ("int", None)
    if right.type == "cast_expression":
        ctype = right.child_by_field_name("type")
        ctext = source[ctype.start_byte:ctype.end_byte].decode()             if ctype is not None else ""
        if "__m" in ctext or "float" in ctext or "double" in ctext:
            return None, None
        return "int", None
    if right.type == "call_expression":
        callee = right.child_by_field_name("function")
        cname = source[callee.start_byte:callee.end_byte].decode()             if callee is not None and callee.type == "identifier" else ""
        rtype = function_returns.get(cname)
        if rtype is None:
            return None, None
        if "__m" in rtype:
            return None, None
        return ("float", None) if re.search(r"(float|double)", rtype) else ("int", None)
    return None, None


def vector_move_replacement(target_type, source_kind, wrap, rhs):
    if source_kind == "float":
        if target_type == "__m128d":
            return "(_mm_set_pd(0.0, (double)(%s)))" % rhs
        if target_type == "__m128i":
            # float bits into an integer vector needs a bitcast; leave visible.
            return None
        return "(_mm_set_ss(%s))" % rhs
    move = "_mm_cvtsi64_si128((long long)(%s))" % rhs
    if target_type in ("__m128", "__m128d"):
        return "((%s)%s)" % (target_type, move)
    return move


def rhs_text(source, node):
    return source[node.start_byte:node.end_byte].decode()


def enclosing_function_start(node):
    current = node
    while current is not None:
        if current.type == "function_definition":
            return current.start_byte
        current = current.parent
    return 0  # translation-unit scope


def translate(source, functions=None, known_types=None, extra_names=None,
              import_names=None, prepass=None, renamed_names=None,
              semantic_renames=None):
    if prepass is None:
        source, prepass = preprocess(source)
    else:
        source, prepass = source, prepass
    parser = Parser(Language(tree_sitter_c.language()))
    tree = parser.parse(source)
    line_ends = [index for index, value in enumerate(source) if value == 10]
    semantics = semantic_renames or {}

    def candidate_name(item):
        name = sanitize_name(item.get("name", ""))
        if name in semantics:
            return semantics[name]
        if name in (renamed_names or set()):
            name += "_sr"
        return name

    candidates = {int(item["address"], 16): candidate_name(item) for item in (functions or [])
                  if re.fullmatch(r"[A-Za-z_][A-Za-z_0-9]*", candidate_name(item))}
    # Typedefs declared in the source body (not in defs.h or compiler
    # headers); prototypes referencing them cannot be hoisted to file top.
    early_known = BUILTIN_TYPES | (known_types or set()) | {
        "void", "char", "short", "int", "long", "float", "double",
        "signed", "unsigned", "bool", "_Bool",
    }
    late_typedefs = set()
    for node in nodes(tree.root_node):
        if node.type in ("type_definition", "typedef_declaration"):
            identifier = declarator_identifier(node.child_by_field_name("declarator"), source)
            if identifier is not None and identifier not in early_known:
                late_typedefs.add(identifier.encode())
    prototypes = {}
    definitions = {}
    definition_plists = {}
    definition_counts = {}
    declared = set()
    function_names = set()
    declared_data_symbols_pre = set()
    pointer_variables = set()
    pointer_typedefs = set()
    vector_variables = {}
    var_types = {}
    function_returns = {}
    declaration_edits = []
    forward_declarations = {}
    for node in nodes(tree.root_node):
        if node.type == "function_declarator":
            declarator = node.child_by_field_name("declarator")
            identifier = declarator_identifier(declarator, source)
            if identifier is not None:
                function_names.add(identifier)
            if declarator is not None and declarator.type == "array_declarator":
                base = declarator.child_by_field_name("declarator")
                index = declarator.child_by_field_name("size")
                if (base is not None and index is not None
                        and source[base.start_byte:base.end_byte] == b"MEMORY"):
                    literal = source[index.start_byte:index.end_byte]
                    if re.fullmatch(rb"0[xX][0-9a-fA-F]+", literal):
                        address = int(literal, 16)
                        name = candidates.get(address)
                        if name is not None:
                            declared.add(name)
                            owner = node.parent
                            while owner is not None and owner.type not in ("function_definition", "translation_unit"):
                                owner = owner.parent
                            if owner is not None and owner.type == "function_definition":
                                body = owner.child_by_field_name("body")
                                if body is not None:
                                    prototype = (source[owner.start_byte:declarator.start_byte] + name.encode()
                                                 + source[declarator.end_byte:body.start_byte]).rstrip() + b";"
                                    forward_declarations[name] = prototype.decode()
                            declaration_edits.append({"kind": "function_definition_binding",
                                "start": declarator.start_byte, "end": declarator.end_byte,
                                "line": bisect_right(line_ends, declarator.start_byte) + 1,
                                "address": hex(address), "replacement": name})
            identifier = declarator_identifier(node.child_by_field_name("declarator"), source)
            if identifier is not None:
                declared.add(identifier)
        elif node.type in ("struct_specifier", "union_specifier", "enum_specifier"):
            name = node.child_by_field_name("name")
            if name is not None and name.type == "type_identifier":
                declared.add(source[name.start_byte:name.end_byte].decode())
        elif node.type in ("type_definition", "typedef_declaration"):
            identifier = declarator_identifier(node.child_by_field_name("declarator"), source)
            if identifier is not None:
                declared.add(identifier)
                declarator = node.child_by_field_name("declarator")
                if declarator is not None and b"*" in source[declarator.start_byte:declarator.end_byte]:
                    pointer_typedefs.add(identifier)
        elif node.type == "expression_statement" and node.parent is not None                 and node.parent.type == "translation_unit":
            # defs.h spells __int64 as a macro, so global function-pointer
            # definitions parse here as call-assignments — valid C has no
            # file-scope expression statements. GCC sees the declarations;
            # treat their data symbols as declared.
            text = source[node.start_byte:node.end_byte]
            if b"(" in text:
                for m in re.finditer(rb"[A-Za-z_][A-Za-z_0-9]*", text):
                    identifier = m.group(0).decode()
                    if DATA_SYMBOL.match(identifier):
                        declared_data_symbols_pre.add(identifier)
        elif node.type == "declaration":
            # Variables declared with a pointer declarator keep plain function
            # assignments; only integer storage gets the explicit address cast.
            type_node = node.child_by_field_name("type")
            declarators = declaration_declarator(node)
            type_text = source[type_node.start_byte:type_node.end_byte].decode()                 if type_node is not None else None
            fstart = enclosing_function_start(node)
            if (type_text is not None and re.fullmatch(
                    r"__(m128i?|m128d|m64)", type_text)
                    and declarators is not None
                    and b"*" not in source[declarators.start_byte:declarators.end_byte]):
                # Vector-typed storage: integer assignments to these names are
                # Hex-Rays movd semantics, rewritten as the moves they denote.
                if declarators is not None:
                    for sub in nodes(declarators):
                        if sub.type == "identifier":
                            vector_variables[(fstart, source[sub.start_byte:sub.end_byte].decode())] = type_text
            if type_text is not None and declarators is not None:
                for sub in nodes(declarators):
                    if sub.type == "identifier":
                        var_types[(fstart, source[sub.start_byte:sub.end_byte].decode())] = type_text
            pointer_type = (type_node is not None
                            and source[type_node.start_byte:type_node.end_byte].decode() in pointer_typedefs)
            if declarators is not None and (
                    pointer_type or b"*" in source[declarators.start_byte:declarators.end_byte]):
                for sub in nodes(declarators):
                    if sub.type == "identifier":
                        pointer_variables.add(source[sub.start_byte:sub.end_byte].decode())
            # Top-level prototype-only declarations of functions, used to drop
            # ones that conflict with the definition or a system header.
            if (node.parent is not None and node.parent.type == "translation_unit"
                    and declarators is not None
                    and node.child_by_field_name("type") is not None
                    and b"(" in source[declarators.start_byte:declarators.end_byte]
                    and b"=" not in source[declarators.start_byte:declarators.end_byte]):
                name = declarator_identifier(declarators, source)
                params = None
                plist_span = None
                for sub in nodes(declarators):
                    if sub.type == "function_declarator":
                        plist = sub.child_by_field_name("parameters")
                        if plist is not None:
                            # Whitespace-normalized: Hex-Rays writes the same
                            # signature with different spacing in prototypes
                            # and multi-line definitions.
                            params = re.sub(r"\s+", "", source[plist.start_byte:plist.end_byte].decode())
                            plist_span = (plist.start_byte, plist.end_byte)
                            break
                if name is not None:
                    if type_node is not None:
                        function_returns[name] = source[type_node.start_byte:type_node.end_byte].decode()
                    prototypes.setdefault(name, []).append(
                        {"start": node.start_byte, "end": node.end_byte, "params": params,
                         "plist": plist_span})
        elif node.type == "function_definition":
            declarator = node.child_by_field_name("declarator")
            name = declarator_identifier(declarator, source)
            if name is not None:
                params = None
                plist_span = None
                for sub in nodes(declarator):
                    if sub.type == "parameter_list":
                        params = re.sub(r"\s+", "", source[sub.start_byte:sub.end_byte].decode())
                        plist_span = (sub.start_byte, sub.end_byte)
                        break
                if name in definitions and name != "MEMORY":
                    # Hex-Rays emits repeated template instantiations under one
                    # sanitized name; keep every body by suffixing the rest.
                    # Address-named (MEMORY) definitions are unique by address.
                    identifier_node = declarator_identifier_node(declarator)
                    if identifier_node is not None:
                        suffix = "_dup%d" % (definition_counts[name] + 1)
                        declaration_edits.append({
                            "kind": "duplicate_definition",
                            "start": identifier_node.start_byte,
                            "end": identifier_node.end_byte,
                            "line": bisect_right(line_ends, identifier_node.start_byte) + 1,
                            "replacement": name + suffix})
                        definition_counts[name] += 1
                    continue
                definitions[name] = params
                definition_plists[name] = plist_span
                definition_counts[name] = 1
                def_type = node.child_by_field_name("type")
                if def_type is not None:
                    function_returns.setdefault(name,
                        source[def_type.start_byte:def_type.end_byte].decode())
                # Hex-Rays omits prototypes for some functions, so calls above
                # the definition create implicit declarations that conflict
                # with non-int definitions. A prototype copied verbatim from
                # the definition's own header is always type-correct — but
                # only if every type it names is declared at file top, since
                # the export defines typedefs mid-file.
                body = node.child_by_field_name("body")
                if name != "MEMORY" and body is not None and name not in prototypes:
                    header_text = source[node.start_byte:body.start_byte].rstrip()
                    header_ids = set(re.findall(rb"[A-Za-z_][A-Za-z_0-9]*", header_text))
                    if (b"(" in header_text and header_text.endswith(b")")
                            and not (header_ids & late_typedefs)):
                        forward_declarations.setdefault(name, header_text.decode() + ";")
    # Local function-pointer declarators are variables, not global function
    # addresses. Their names frequently collide with unrelated SIMD locals.
    addresses = set(definitions) | set(prototypes) | set(extra_names or ())
    # Drop the export's own prototypes for names system headers declare, for
    # names that are actually types (Hex-Rays mis-declares some as functions),
    # and prototypes that disagree with the definition or a later prototype.
    system_owned = SYSTEM_DECLARED_NAMES | (import_names or set()) | \
        BUILTIN_TYPES | (known_types or set())
    dropped_prototypes = []
    dropped_ids = set()
    for name, entries in prototypes.items():
        if name in system_owned:
            keep_params = None
        elif name in definitions:
            keep_params = definitions[name]
        elif len(entries) > 1 and len({entry["params"] for entry in entries}) > 1:
            # No definition to arbitrate; the last inference wins.
            keep_params = entries[-1]["params"]
        else:
            continue
        for entry in entries:
            if keep_params is None or entry["params"] != keep_params:
                dropped_prototypes.append(entry)
                dropped_ids.add(id(entry))
    for entry in dropped_prototypes:
        declaration_edits.append(
            {"kind": "prototype_drop", "start": entry["start"], "end": entry["end"],
             "line": bisect_right(line_ends, entry["start"]) + 1,
             "replacement": ""})
    bindings = {address: name for address, name in candidates.items() if name in declared}
    edits, skipped = declaration_edits, []
    data_objects = set()
    referenced_types = set()
    declared_data_symbols = set()
    used_data_symbols = set()
    extern_functions = set()
    call_arities = {}
    seen_spans = set()
    for node in nodes(tree.root_node):
        if node.type == "call_expression":
            function = node.child_by_field_name("function")
            bound_subscript = None
            if function is not None and function.type == "cast_expression":
                cast_value = function.child_by_field_name("value")
                if cast_value is not None and cast_value.type == "subscript_expression":
                    bound_subscript = cast_value
            if function is not None and function.type == "subscript_expression":
                bound_subscript = function
            if bound_subscript is not None:
                base = bound_subscript.child_by_field_name("argument")
                index = bound_subscript.child_by_field_name("index")
                if (base is not None and index is not None and index.type == "number_literal"
                        and source[base.start_byte:base.end_byte] == b"MEMORY"):
                    literal = source[index.start_byte:index.end_byte]
                    if re.fullmatch(rb"0[xX][0-9a-fA-F]+", literal):
                        address = int(literal, 16)
                        name = bindings.get(address)
                        if name is not None:
                            edits.append({"kind": "function_binding", "start": bound_subscript.start_byte,
                                          "end": bound_subscript.end_byte, "line": bisect_right(line_ends, bound_subscript.start_byte) + 1,
                                          "address": hex(address), "replacement": name})
                        elif (bound_subscript.start_byte, bound_subscript.end_byte) not in seen_spans:
                            # A call to an address the inventory never resolved:
                            # name it honestly as an extern function.
                            seen_spans.add((bound_subscript.start_byte, bound_subscript.end_byte))
                            fname = "sr_func_%x" % address
                            extern_functions.add(fname)
                            edits.append({"kind": "unknown_call_binding", "start": bound_subscript.start_byte,
                                          "end": bound_subscript.end_byte, "line": bisect_right(line_ends, bound_subscript.start_byte) + 1,
                                          "address": hex(address), "replacement": fname})
            callee = node.child_by_field_name("function")
            if callee is not None and callee.type == "identifier":
                cname = source[callee.start_byte:callee.end_byte].decode()
                arity = len(node.child_by_field_name("arguments").named_children) \
                    if node.child_by_field_name("arguments") is not None else 0
                if cname in call_arities:
                    call_arities[cname] = max(call_arities[cname], arity)
                else:
                    call_arities[cname] = arity
        elif node.type == "type_identifier":
            # A struct/union/enum tag use is satisfied by the tag itself; only
            # bare type names need forward typedefs.
            parent = node.parent
            if not (parent is not None and parent.type in
                    ("struct_specifier", "union_specifier", "enum_specifier")
                    and parent.child_by_field_name("name") is not None
                    and parent.child_by_field_name("name").id == node.id):
                referenced_types.add(source[node.start_byte:node.end_byte].decode())
        elif node.type == "identifier":
            name = source[node.start_byte:node.end_byte].decode()
            if DATA_SYMBOL.match(name) or re.match(r"^a[A-Z][A-Za-z0-9_]*$", name) \
                    or name.startswith("__imp_"):
                if is_declarator_position(node):
                    declared_data_symbols.add(name)
                else:
                    used_data_symbols.add(name)
        elif node.type == "subscript_expression":
            argument = node.child_by_field_name("argument")
            if argument is not None and argument.type == "subscript_expression":
                # MEMORY[addr][i] with no known function at addr: a data object.
                base = argument.child_by_field_name("argument")
                index = argument.child_by_field_name("index")
                if (base is None or index is None or base.type != "identifier"
                        or source[base.start_byte:base.end_byte] != b"MEMORY"
                        or index.type != "number_literal"):
                    continue
                literal = source[index.start_byte:index.end_byte]
                if not re.fullmatch(rb"0[xX][0-9a-fA-F]+", literal):
                    continue
                address = int(literal, 16)
                if address in candidates:
                    continue
                if (argument.start_byte, argument.end_byte) in seen_spans:
                    continue
                seen_spans.add((argument.start_byte, argument.end_byte))
                name = "sr_mem_%x" % address
                data_objects.add(name)
                edits.append({"kind": "data_object", "start": argument.start_byte,
                              "end": argument.end_byte,
                              "line": bisect_right(line_ends, argument.start_byte) + 1,
                              "address": hex(address), "replacement": name})
                continue
            # Bare scalar MEMORY[addr]: Hex-Rays' qword read of unknown data.
            base = node.child_by_field_name("argument")
            index = node.child_by_field_name("index")
            parent = node.parent
            cast_called = (parent is not None and parent.type == "cast_expression"
                           and parent.parent is not None
                           and parent.parent.type == "call_expression"
                           and parent.parent.child_by_field_name("function") is not None
                           and parent.parent.child_by_field_name("function").id == parent.id)
            if (base is None or index is None or base.type != "identifier"
                    or source[base.start_byte:base.end_byte] != b"MEMORY"
                    or index.type != "number_literal"
                    or parent is None or parent.type in ("subscript_expression", "call_expression")
                    or cast_called):
                continue
            literal = source[index.start_byte:index.end_byte]
            if not re.fullmatch(rb"0[xX][0-9a-fA-F]+", literal):
                continue
            if (node.start_byte, node.end_byte) in seen_spans:
                continue
            seen_spans.add((node.start_byte, node.end_byte))
            address = int(literal, 16)
            name = "sr_mem_%x" % address
            data_objects.add(name)
            edits.append({"kind": "data_object_scalar", "start": node.start_byte,
                          "end": node.end_byte,
                          "line": bisect_right(line_ends, node.start_byte) + 1,
                          "address": hex(address),
                          "replacement": "(*(unsigned __int64 *)&%s[0])" % name})
        elif node.type == "assignment_expression":
            # Hex-Rays stores function addresses through integer views; make the
            # representation explicit instead of relying on legacy conversions.
            right = node.child_by_field_name("right")
            left = node.child_by_field_name("left")
            fstart = enclosing_function_start(node)
            lname = source[left.start_byte:left.end_byte].decode()                 if left is not None and left.type == "identifier" else None
            if (lname is not None and (fstart, lname) in vector_variables
                    and right is not None and right.type == "identifier"
                    and (fstart, source[right.start_byte:right.end_byte].decode()) in vector_variables):
                rtype = vector_variables[(fstart, source[right.start_byte:right.end_byte].decode())]
                ttype = vector_variables[(fstart, lname)]
                if rtype != ttype:
                    # Same-size vector reinterpretation (m128d into m128 etc.).
                    edits.append({"kind": "vector_reinterpret", "start": right.start_byte,
                                  "end": right.end_byte, "line": bisect_right(line_ends, right.start_byte) + 1,
                                  "replacement": "(%s)%s" % (ttype, rhs_text(source, right))})
                    continue
            if lname is not None and (fstart, lname) in vector_variables                     and right is not None:
                # Integer or float-bit assignment to a vector local: rewrite
                # as the register move Hex-Rays denotes, typed by the target.
                # Edits fully contained in the RHS (lane accesses, call
                # bindings) are absorbed into the wrapped text afterwards.
                rhs = source[right.start_byte:right.end_byte]
                source_kind, wrap = classify_vector_rhs(
                    node, right, rhs, source, var_types, function_returns, fstart,
                    vector_variables)
                if source_kind is not None:
                    edits.append({"kind": "vector_move_assign", "start": right.start_byte,
                                  "end": right.end_byte, "line": bisect_right(line_ends, right.start_byte) + 1,
                                  "replacement": None,
                                  "target_type": vector_variables[(fstart, lname)],
                                  "source_kind": source_kind})
                    continue
            if (right is not None and right.type == "identifier" and left is not None
                    and source[left.start_byte:left.end_byte].decode() not in pointer_variables):
                name = source[right.start_byte:right.end_byte].decode()
                if name in addresses and (fstart, name) not in var_types:
                    edits.append({"kind": "address_cast", "start": right.start_byte,
                                  "end": right.end_byte, "line": bisect_right(line_ends, right.start_byte) + 1,
                                  "replacement": "(uintptr_t)" + name})
        elif node.type == "init_declarator":
            declarator = node.child_by_field_name("declarator")
            value = node.child_by_field_name("value")
            if (value is not None and value.type == "identifier" and declarator is not None
                    and b"*" not in source[declarator.start_byte:declarator.end_byte]):
                name = source[value.start_byte:value.end_byte].decode()
                if name in addresses:
                    edits.append({"kind": "address_cast", "start": value.start_byte,
                                  "end": value.end_byte, "line": bisect_right(line_ends, value.start_byte) + 1,
                                  "replacement": "(uintptr_t)" + name})
        if node.type != "field_expression":
            continue
        field = node.child_by_field_name("field")
        argument = node.child_by_field_name("argument")
        if field is None or argument is None:
            continue
        spec = FIELDS.get(source[field.start_byte:field.end_byte])
        if spec is None:
            continue
        operator = source[argument.end_byte:field.start_byte].strip()
        if node.has_error or operator not in (b".", b"->"):
            skipped.append({"line": bisect_right(line_ends, node.start_byte) + 1, "expression": source[node.start_byte:node.end_byte].decode()})
            continue
        width, member = spec
        if operator == b"->":
            # Rvalue pointers read through a single-evaluation temporary too;
            # writes are only valid on lvalues, which keep the pointer macros.
            if not is_lvalue(argument, source):
                macro = b"SR_VEC_READ_PTR_LANES"
                replacement = (macro + b"(" + str(width).encode() + b", "
                               + source[argument.start_byte:argument.end_byte] + b", " + member.encode() + b")")
                edits.append({"kind": "simd_read", "start": node.start_byte, "end": node.end_byte, "line": bisect_right(line_ends, node.start_byte) + 1,
                              "field": source[field.start_byte:field.end_byte].decode(), "replacement": replacement.decode()})
                continue
            macro = b"SR_VEC_PTR_LANES"
        elif not is_lvalue(argument, source):
            # Lane read on an rvalue such as an intrinsic call result.
            macro = b"SR_VEC_READ_LANES"
        else:
            macro = b"SR_VEC_LANES"
        replacement = (macro + b"(" + str(width).encode() + b", "
                       + source[argument.start_byte:argument.end_byte] + b", " + member.encode() + b")")
        edits.append({"kind": "simd" if macro in (b"SR_VEC_LANES", b"SR_VEC_PTR_LANES") else "simd_read",
                      "start": node.start_byte, "end": node.end_byte, "line": bisect_right(line_ends, node.start_byte) + 1,
                      "field": source[field.start_byte:field.end_byte].decode(), "replacement": replacement.decode()})
    # Callsites that pass more arguments than the definition declares get a
    # variadic tail on the definition and its kept prototypes; the callee
    # ignores the extras and the disagreement stays visible in preparation.json.
    for name, plist in definition_plists.items():
        if plist is None or name not in call_arities:
            continue
        params_text = definitions.get(name)
        # An empty K&R parameter list already accepts the export's mixed call
        # arities in C. Appending a variadic tail would emit invalid `(, ...)`.
        if not params_text or params_text in ("()", "(void)") or "..." in params_text:
            continue
        if call_arities[name] <= params_text.count(",") + 1:
            continue
        if name in forward_declarations:
            forward_declarations[name] = re.sub(r"\)\s*;$", ", ...);", forward_declarations[name])
        declaration_edits.append({"kind": "variadic_fix", "start": plist[1] - 1,
                                  "end": plist[1],
                                  "line": bisect_right(line_ends, plist[0]) + 1,
                                  "replacement": ", ...)"})
        for entry in prototypes.get(name, []):
            if id(entry) in dropped_ids:
                continue
            if entry.get("plist") and entry["params"] == params_text:
                declaration_edits.append({"kind": "variadic_fix",
                                          "start": entry["plist"][1] - 1,
                                          "end": entry["plist"][1],
                                          "line": bisect_right(line_ends, entry["plist"][0]) + 1,
                                          "replacement": ", ...)"})
    # Vector moves wrap their whole RHS; fold any smaller edits inside them
    # into the wrapped text so nothing overlaps.
    # into the wrapped text so nothing overlaps.
    remaining = []
    for edit in edits:
        if edit["kind"] != "vector_move_assign":
            remaining.append(edit)
    moves = [e for e in edits if e["kind"] == "vector_move_assign"]
    for move in moves:
        contained = [e for e in remaining
                     if e["start"] >= move["start"] and e["end"] <= move["end"]]
        rhs = source[move["start"]:move["end"]]
        for e in sorted(contained, key=lambda item: -item["start"]):
            offset = e["start"] - move["start"]
            rhs = rhs[:offset] + e["replacement"].encode() + rhs[e["end"] - move["start"]:]
            remaining.remove(e)
        wrapped = vector_move_replacement(
            move["target_type"], move["source_kind"], None, rhs.decode())
        if wrapped is not None:
            remaining.append({
                "kind": "vector_move_assign", "start": move["start"], "end": move["end"],
                "line": move["line"], "replacement": wrapped})
    edits = remaining
    # Nested vector field expressions are unusual; retain them for manual review.
    ordered = sorted(edits, key=lambda item: (item["start"], -item["end"]))
    accepted = []
    for index, edit in enumerate(ordered):
        overlap_previous = index > 0 and ordered[index - 1]["end"] > edit["start"]
        overlap_next = index + 1 < len(ordered) and ordered[index + 1]["start"] < edit["end"]
        if overlap_previous or overlap_next:
            skipped.append({"line": edit["line"], "kind": edit.get("kind"),
                            "reason": "overlapping edits require review"})
        else:
            accepted.append(edit)
    fragments, previous = [], 0
    for edit in accepted:
        fragments += [source[previous:edit["start"]], edit["replacement"].encode()]
        previous = edit["end"]
    fragments.append(source[previous:])
    known = BUILTIN_TYPES | (known_types or set())
    struct_tags = set()
    tag_declarations = []
    for node in nodes(tree.root_node):
        if node.type in ("struct_specifier", "union_specifier", "enum_specifier"):
            name = node.child_by_field_name("name")
            if name is not None and name.type == "type_identifier":
                tname = source[name.start_byte:name.end_byte].decode()
                struct_tags.add(tname)
                if node.type in ("struct_specifier", "union_specifier"):
                    tag_declarations.append("%s %s;" % (node.type[:-10], tname))
    excluded = known | (declared - struct_tags)
    forward_types = sorted(name for name in referenced_types - excluded if name)
    extern_objects = {
        name: decl for name in sorted(used_data_symbols - declared_data_symbols
                                      - declared_data_symbols_pre)
        if (decl := data_symbol_decl(name)) is not None
    }
    report = {"edits": accepted, "skipped": skipped,
              "forward_declarations": list(forward_declarations.values()),
              "data_objects": sorted(data_objects),
              "forward_types": forward_types,
              "tag_declarations": sorted(set(tag_declarations)),
              "extern_functions": sorted(extern_functions),
              "extern_objects": extern_objects,
              "input_has_parse_errors": tree.root_node.has_error}
    report.update(prepass)
    return b"".join(fragments), report


def build_forward_header(report):
    # File-scope tag declarations must precede the prototypes that reference
    # them: a tag first seen inside a parameter list has prototype scope, and
    # identical-looking prototypes then declare incompatible types.
    lines = []
    if report.get("tag_declarations"):
        lines.append("/* File-scope tag declarations; prototype-scope tags die with their list. */")
        lines += sorted(set(report["tag_declarations"]))
    if report["forward_types"]:
        lines.append("/* Referenced but undeclared type names; layouts are recovered separately. */")
        lines += ["typedef struct %s %s;" % (name, name) for name in report["forward_types"]]
    if report.get("extern_objects"):
        lines.append("/* Referenced data symbols the export never declares; sized by")
        lines.append("   the Hex-Rays name prefix. Contents are pending type recovery. */")
        lines += list(report["extern_objects"].values())
    if report.get("extern_functions"):
        lines.append("/* Call sites to addresses the inventory never resolved. */")
        lines += ["__int64 __fastcall %s();" % name for name in report["extern_functions"]]
    if report["data_objects"]:
        lines.append("/* Data objects named by their image addresses; contents are linked later. */")
        lines += ["extern unsigned char %s[];" % name for name in report["data_objects"]]
    if report["forward_declarations"]:
        lines.append("/* Declarations copied from address-resolved function definitions. */")
        lines += report["forward_declarations"]
    return "".join(line + "\n" for line in lines)


def build_import_header(names, iat_pairs=()):
    lines = [
        "/* MinGW headers do not declare these imported entry points. Calls in the",
        "   export cast them to their documented signatures at each call site; the",
        "   unspecified-argument declarations here only make those casts valid C. */",
    ]
    lines += ["__int64 %s();" % name for name in names]
    if iat_pairs:
        lines.append("/* Renamed IAT slot objects; import_shim.c binds them to the imports. */")
        lines += ["extern __int64 (__fastcall *%s)();" % slot for slot, _ in iat_pairs]
    return "".join(line + "\n" for line in lines)


def build_import_shim(iat_pairs):
    lines = [
        "/* Binds the export's renamed IAT slot objects to the real imports.",
        "   Calling through the slot is the same indirect call the original",
        "   binary made through its import address table. */",
    ]
    lines += ['__int64 (__fastcall *%s)() = (__int64 (__fastcall *)())%s;' % (slot, name)
              for slot, name in iat_pairs if name]
    return "".join(line + "\n" for line in lines)


# Modules whose imports no standard header declares for this build.
IMPORT_MODULES = {"SDL2", "steam_api64"}
IMPORT_EXTRA_NAMES = {"SHGetSpecialFolderPathA"}


def collect_import_names(path):
    """All imported entry points, plus the subset needing our declarations."""
    imports = json.loads(path.read_text(encoding="utf-8"))
    entries = imports if isinstance(imports, list) else imports.get("imports", [])
    all_names = {item["name"] for item in entries if item.get("name")}
    undeclared = {name for name in all_names
                  if any(item.get("module") in IMPORT_MODULES
                         or item.get("name") in IMPORT_EXTRA_NAMES
                         for item in entries if item.get("name") == name)}
    return all_names, undeclared, entries


# CRT, Winsock, and MFC entry points whose declarations come from the headers
# export_compat.h includes even though the statically linked client does not
# import them. Each name here produced a GCC "conflicting types" diagnostic
# against the export's own mis-inferred prototype, so Hex-Rays' guess is
# dropped and the system declaration governs.
SYSTEM_DECLARED_NAMES = {
    "AfxSafeArrayInit", "InternalGetLocaleInfoA", "LcidFromHexString",
    "WinMain", "_GSHandlerCheckCommon", "_NLG_Return2", "_WSAFDIsSet",
    "__crt_win32_buffer_internal_dynamic_resizing__allocate", "__daylight",
    "__timezone", "_acrt_GetLocaleInfoA",
    "_acrt_fenv_get_common_round_control", "_acrt_fenv_get_control",
    "_acrt_fenv_get_fp_status_word_from_exception_mask", "_acrt_initialize",
    "_acrt_locale_changed", "_ascii_wcsnicmp", "_common_ssin_cout_rare",
    "_current_exception", "_current_exception_context",
    "_dcrt_set_variable_in_narrow_environment_nolock", "_errno",
    "_finddata32_t", "_finddata32i64_t", "_finddata64i32_t",
    "_libm_sse2_sincos_", "_libm_sse2_sincosf_", "_loctotime32_t",
    "_loctotime64_t", "_mbrtowc_s_l", "_mbsrtowcs_helper", "_p___argc",
    "_p___argv", "_p__commode", "_report_rangecheckfailure",
    "_report_securityfailure", "_security_init_cookie", "_setusermatherr",
    "_sse2_sin2", "_sse2_sinf4", "_sse4_sin2", "_sse4_sinf4", "_strncnt",
    "bind", "btowc", "capture_current_context", "capture_previous_context",
    "cexit", "closesocket", "connect", "cos_special", "cosf_special",
    "decomp", "dtest", "fclrf", "fesetenv", "fesetexceptflag",
    "feholdexcept", "fgetwc", "fp_format_e_internal",
    "fp_format_f_internal", "fread", "fseek", "ftell", "ftelli64_nolock",
    "get_initial_narrow_environment", "get_or_create_lc_time",
    "get_startup_file_mode", "getenv_s", "getsockopt", "handle_nan",
    "handle_nanf", "htonl", "htons", "inet_addr", "initterm", "ioctlsocket",
    "lseeki64", "mbrlen", "mbrtowc", "mbsrtowcs_s", "mbstowcs_s",
    "mbstowcs", "ntohl", "ntohs", "onexit", "recv", "recvfrom", "send",
    "sendto", "set_app_type", "set_exp", "set_fpsr", "setSBCS", "setSBUpLow",
    "setmbcp_internal", "setvbuf", "sptype", "socket", "strcat_s", "strncmp",
    "strncat_s", "strncpy_s", "strnicmp", "strnicoll", "strnlen",
    "swprintf_0", "terminate", "ungetwc", "wcscmp", "wcsncmp", "wcspbrk",
    "wcsnicmp", "wctomb",
    "fopen", "fopen_s", "fwrite", "memcmp", "memcpy", "memmove", "strcmp",
    "swprintf", "vsnprintf", "gethostbyname", "getservbyname", "select",
    "strpbrk", "strnicmp_l", "wcsnicoll_l", "wctomb_s_l", "ultoa",
    "handle_error", "handle_errorf", "handle_qnan2", "initialize_lc_time",
    "mbsdec", "sin_special", "tan_special", "j__realloc_base",
    "_acrt_CompareStringA", "register_thread_local_exe_atexit_callback",
    "replace_current_thread_locale_nolock", "update_thread_multibyte_data_internal",
        "unknown_libname_671", "unknown_libname_673", "cos_special", "dtest",
    "strcpy_s", "strncnt", "_errno", "errno",
}


def parse_known_types(path):
    parser = Parser(Language(tree_sitter_c.language()))
    source = path.read_bytes()
    tree = parser.parse(source)
    known = set()
    for node in nodes(tree.root_node):
        if node.type in ("struct_specifier", "union_specifier", "enum_specifier"):
            name = node.child_by_field_name("name")
            if name is not None and name.type == "type_identifier":
                known.add(source[name.start_byte:name.end_byte].decode())
        elif node.type in ("type_definition", "typedef_declaration"):
            identifier = declarator_identifier(node.child_by_field_name("declarator"), source)
            if identifier is not None:
                known.add(identifier)
        elif node.type == "preproc_def":
            # defs.h spells the Hex-Rays type aliases (_BYTE, _QWORD, ...) as
            # object-like macros; forward-typedefs would collide with them.
            name = node.child_by_field_name("name")
            if name is not None:
                known.add(source[name.start_byte:name.end_byte].decode())
    return known


def append_missing_functions(original, source, manifest):
    """Append per-function exports the combined file never included.

    The combined export predates the final analysis pass: some decompiled
    functions exist under exports/<target>/functions/ but appear nowhere in
    the combined translation unit, leaving their MEMORY[address] call sites
    unbound. Appending their definitions lets those calls resolve.
    """
    identifiers = set(re.findall(r"[A-Za-z_][A-Za-z_0-9]*", source.decode("utf-8", "replace")))
    # Names can change between IDA analysis passes. A body already present at
    # the manifest address must not be appended again under an older spelling.
    markers = list(re.finditer(rb"(?m)^//----- \(([0-9A-Fa-f]+)\)", source))
    starts = [m.start() for m in markers]
    present_addresses = set()
    parser = Parser(Language(tree_sitter_c.language()))
    tree = parser.parse(source)
    for node in nodes(tree.root_node):
        if node.type != "function_definition" or node.child_by_field_name("body") is None:
            continue
        index = bisect_right(starts, node.start_byte) - 1
        if index >= 0:
            present_addresses.add(int(markers[index].group(1), 16))
    appended, missing_files = [], []
    for item in manifest["functions"]:
        name = sanitize_name(item.get("name", ""))
        if not name or name in identifiers:
            continue
        # The combined file may define the function under its address form
        # (MEMORY[0x...]), which only becomes the manifest name after the
        # binding pass — treat that as present.
        address = item.get("address")
        if address:
            try:
                value = int(address, 16)
            except ValueError:
                value = None
            if value in present_addresses:
                continue
            if value is not None and (b"MEMORY[0x%x]" % value in source
                                      or b"MEMORY[0x%X]" % value in source):
                continue
        relative = item.get("file")
        if not relative:
            continue
        path = original / relative
        if not path.exists():
            missing_files.append(str(relative))
            continue
        body = path.read_bytes()
        if len(body.strip()) < 8:
            continue
        # The combined file was already preprocessed, so the appended raw
        # exports need the same treatment before they join the unit.
        body, _ = preprocess(body)
        appended.append(b"\n/* Recovered from the per-function export "
                        + relative.encode() + b"; the combined file omitted it. */\n"
                        + body)
        # Two manifest entries can carry the same name; a second definition
        # would be a redefinition.
        identifiers.update(re.findall(r"[A-Za-z_][A-Za-z_0-9]*",
                                      body.decode("utf-8", "replace")))
    return source + b"".join(appended), len(appended), missing_files


def find_defined_system_names(source, names):
    """System-owned names the export itself defines (proof by shape).

    A function definition is a line whose declarator ends in NAME(...) with
    only type tokens before the name and `{` on the next non-empty line;
    calls and prototypes never satisfy that. Renaming is only safe for
    names with such a definition (or a data declaration), because renaming
    a merely-called system function would leave name_sr undefined.
    """
    if not names:
        return set()
    masked = mask_noncode(source).split(b"\n")
    name_set = {n.encode() for n in names}
    defined = set()
    for index, line in enumerate(masked):
        stripped = line.strip()
        if not stripped.endswith(b")"):
            continue
        head = stripped[:-1].rfind(b"(")
        if head < 0:
            continue
        before = stripped[:head].rstrip()
        name = before.rsplit(b" ", 1)[-1].lstrip(b"*")
        if not name or name not in name_set:
            continue
        # Only type tokens may precede the name on the line; anything else
        # (assignments, nested calls) marks an expression, not a definition.
        prefix = before[: -len(name)] if before.endswith(name) else before
        if re.search(rb"[^A-Za-z_0-9 \t\*]", prefix):
            continue
        for follow in masked[index + 1:index + 4]:
            if not follow.strip():
                continue
            if follow.strip() == b"{":
                defined.add(name.decode())
            break
    return defined


def rename_system_definitions(source, names):
    """Rename local definitions of system-owned symbols to <name>_sr.

    Hex-Rays' decompiled CRT/imports re-define symbols like _errno and
    closesocket with inferred signatures that conflict with the real header
    declarations. Renaming every free occurrence keeps the export's internal
    consistency while the system symbol remains untouched. Occurrences that
    are struct/union member accesses (x.name, p->name) are left alone.
    """
    if not names:
        return source, 0
    masked = mask_noncode(source)
    alternation = b"|".join(re.escape(n.encode()) for n in sorted(names, key=len, reverse=True))
    pattern = re.compile(b"\\b(" + alternation + b")\\b")
    replacements = []
    for m in pattern.finditer(masked):
        before = masked[max(0, m.start() - 2):m.start()].rstrip()
        if before.endswith(b".") or before.endswith(b">"):
            continue  # member access, not a free symbol
        replacements.append((m.start(), m.end(), m.group(1) + b"_sr"))
    for start, end, replacement in sorted(replacements, reverse=True):
        source = source[:start] + replacement + source[end:]
    return source, len(replacements)


# Suitium variant-A identities are scoped to the exact input image. Client and
# dedicated addresses overlap; manifest membership alone does not disambiguate.
CLIENT_SHA256 = "e9500422582b7e550be25f6b31e8cdf00b728ae733d5444868c89982c1526c5e"
DEDICATED_SHA256 = "955a6078a8fdea82dd66f59c45233a31d73f64d6eeace92b423b7f52600831f5"
CLIENT_IDENTITIES = {
    0x140096440: "ClientMain", 0x1400A3F30: "ConnectMasterServer",
    0x140054130: "CreateItem", 0x14005BCA0: "CreateVehicle",
    0x14006D300: "CSDrawAtlasEntry", 0x14006D930: "CSDrawText",
    0x140072450: "DrawMenu", 0x14006F1F0: "DrawMenuButton",
    0x14006F5A0: "DrawMenuButtonSelectable", 0x14006F8D0: "DrawMenuList",
    0x140071440: "DrawMenuSlider", 0x140070060: "DrawMenuTextBox",
    0x140071910: "DrawMenuToggle", 0x140127910: "ResetGame",
    0x1401402C0: "SetupItemTypes", 0x140145BB0: "SetupVehicleTypes",
}
DEDICATED_IDENTITIES = {
    0x14004FEB0: "ConnectMasterServer", 0x14003B080: "CreateItem",
    0x1400414B0: "CreateVehicle", 0x1400B36F0: "Printf",
    0x1400B4790: "ResetGame", 0x14004AF40: "ServerMain",
    0x1400C7A70: "SetupItemTypes", 0x1400CBEB0: "SetupVehicleTypes",
}
VERIFIED_IDENTITIES = {CLIENT_SHA256: CLIENT_IDENTITIES, DEDICATED_SHA256: DEDICATED_IDENTITIES}


def build_semantic_renames(manifest):
    """Map only identities belonging to the manifest's hash-pinned binary."""
    identities = VERIFIED_IDENTITIES.get(str(manifest.get("sha256", "")).lower(), {})
    renames = {}
    for item in manifest["functions"]:
        try:
            address = int(item.get("address", ""), 16)
        except ValueError:
            continue
        semantic = identities.get(address)
        if semantic is None:
            continue
        name = sanitize_name(item.get("name", ""))
        if name and re.fullmatch(r"[A-Za-z_][A-Za-z_0-9]*", name):
            renames[name] = "sr_" + semantic
    return renames


def apply_renames(source, mapping):
    """Rename each key to its exact mapped value at word boundaries.

    Member accesses (x.name, p->name) are left alone, matching
    rename_system_definitions' field-aware behavior.
    """
    if not mapping:
        return source, 0
    masked = mask_noncode(source)
    encoded = {key.encode(): value.encode() for key, value in mapping.items()}
    replacements = []
    previous = None
    for token in re.finditer(rb"[A-Za-z_][A-Za-z_0-9]*|->|[^\s]", masked):
        value = token.group()
        if value in encoded and previous not in (b".", b"->"):
            replacements.append((token.start(), token.end(), encoded[value]))
        previous = value
    chunks = []
    cursor = 0
    for start, end, replacement in replacements:
        chunks.extend((source[cursor:start], replacement))
        cursor = end
    chunks.append(source[cursor:])
    return b"".join(chunks), len(replacements)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--binary", choices=("client", "dedicated", "all"), default="all")
    args = parser.parse_args()
    if args.binary in ('client', 'all'):
        parser.error('Client C sources are maintained directly in src/client. '
                     'Build with scripts/check-rebuild.py --binary client --object --lenient; '
                     'client source regeneration is retired. Use --binary dedicated for the server.')
    for target, stem in (("client", "subrosa"), ("dedicated", "subrosadedicated")):
        if args.binary not in ("all", target):
            continue
        original = PROJECT / "exports" / target
        manifest = json.loads((original / "manifest.json").read_text(encoding="utf-8"))
        if manifest["state"] != "complete":
            raise RuntimeError("Wait for the " + target + " export to complete")
        if target == "dedicated" and manifest.get("sha256", "").lower() != DEDICATED_SHA256:
            raise RuntimeError("Dedicated fixes require the reviewed Windows binary hash")
        source = (original / (stem + ".c")).read_bytes()
        recovered_float_bits = 0
        recovered_tls_uses = 0
        recovered_wctype_words = 0
        recovered_simd_rows = 0
        if target == "client":
            source, recovered_float_bits = restore_client_float_table(
                source, PROJECT.parent / "subrosa.exe")
            source, recovered_tls_uses = restore_client_tls_index(
                source, PROJECT.parent / "subrosa.exe")
            source, recovered_wctype_words = restore_client_wctype(
                source, PROJECT.parent / "subrosa.exe")
            source, recovered_simd_rows = restore_client_simd_table(
                source, PROJECT.parent / "subrosa.exe")
        source, prepass = preprocess(source)
        prepass["recovered_float_bits"] = recovered_float_bits
        prepass["recovered_tls_uses"] = recovered_tls_uses
        prepass["recovered_wctype_words"] = recovered_wctype_words
        prepass["recovered_simd_rows"] = recovered_simd_rows
        source, appended, missing_files = append_missing_functions(original, source, manifest)
        print(target + ": preprocessed exports", flush=True)
        all_imports, undeclared_imports, import_entries = collect_import_names(original / "imports.json")
        server_edits, server_bindings = [], {}
        if target == "dedicated":
            from prepare_server import prepare as prepare_server
            source, server_edits, server_bindings = prepare_server(source, import_entries)
        # Field-aware renaming (member accesses skipped) of system-owned
        # symbols the export also defines, plus IAT slot objects that Hex-Rays
        # calls as functions.
        iat_slots = {}
        for item in import_entries:
            address = int(item.get("address", "0x0"), 16)
            iat_slots["off_%X" % address] = item.get("name", "")
        manifest_names = {sanitize_name(item.get("name", "")) for item in manifest["functions"]}
        rename_set = {n for n in manifest_names
                      if n and (n in all_imports or n in SYSTEM_DECLARED_NAMES)}
        # System-owned names the export defines under a different spelling
        # than the manifest (e.g. errno vs _errno) still conflict with the
        # header declarations; rename only with proof of a local definition.
        rename_set |= find_defined_system_names(source, SYSTEM_DECLARED_NAMES)
        if target == "dedicated":
            # A manifest entry for an imported address is not a local body.
            rename_set -= all_imports - find_defined_system_names(source, all_imports)
        rename_set |= {slot for slot in iat_slots
                       if slot in source.decode("utf-8", "replace")}
        source, renamed_count = rename_system_definitions(source, rename_set)
        # Suitium-verified identities rename the manifest name at each
        # address to sr_<Semantic>, consistently across definitions and
        # call sites; candidates follow via semantic_renames.
        semantic_renames = build_semantic_renames(manifest)
        source, semantic_count = apply_renames(source, semantic_renames)
        print(target + ": resolved symbol names", flush=True)
        known_types = parse_known_types(original / "defs.h")
        if target == "dedicated":
            known_types |= {"_CoreCrtNonSecureSearchSortCompareFunction",
                            "_UserMathErrorFunctionPointer", "_tls_callback_type",
                            "Buffer", "Src", "PerformanceCount"}
        all_imports = all_imports  # already collected above
        prepared, report = translate(source, manifest["functions"], known_types,
                                     extra_names=all_imports, import_names=all_imports,
                                     prepass=prepass, renamed_names=rename_set,
                                     semantic_renames=semantic_renames)
        if target == "client":
            prepared, report["paired_double_return_casts"] = cast_client_paired_double_results(
                prepared, expected_count=69)
            prepared, report["reviewed_movss_casts"] = repair_client_movss_casts(prepared)
            prepared, report["reviewed_byte_displacements"] = repair_client_byte_displacements(prepared)
            from repair_client_expressions import repair_client_expressions, client_definition_forwards
            prepared, expression_counts = repair_client_expressions(prepared, mask_noncode)
            report.update(expression_counts)
            missing_forwards = client_definition_forwards(prepared, mask_noncode)
            report["forward_declarations"].extend(missing_forwards.values())
            report["recovered_definition_forwards"] = len(missing_forwards)
            from repair_client_expressions import repair_client_address_arithmetic
            prepared, report["reviewed_address_arithmetic"] = repair_client_address_arithmetic(prepared, mask_noncode)
            from repair_client_expressions import repair_client_final_sites
            prepared, report["reviewed_final_expression_sites"] = repair_client_final_sites(prepared, mask_noncode)
            from repair_client_expressions import repair_client_funclet_entries
            prepared, report["recovered_funclet_entries"] = repair_client_funclet_entries(prepared, mask_noncode)
            from repair_client_abi_storage import repair as repair_abi_storage
            prepared, abi_counts = repair_abi_storage(prepared)
            report.update(abi_counts)
            from repair_client_register_helpers import repair as repair_register_helpers
            prepared, register_counts = repair_register_helpers(prepared)
            report.update(register_counts)
            from repair_client_control_flow import repair as repair_control_flow
            prepared, control_counts = repair_control_flow(prepared)
            report.update(control_counts)
            from recover_client_opaque import repair_declarations
            prepared, report['recovered_codec_declarations'] = repair_declarations(prepared)
            from recover_client_time_vtable import repair_declarations as repair_time_declaration
            prepared, report['recovered_time_object_declarations'] = repair_time_declaration(prepared)
            from recover_client_native_gaps import repair as repair_native_gaps
            prepared, native_counts = repair_native_gaps(prepared)
            report.update(native_counts)
            from repair_client_c_primitives import repair as repair_c_primitives
            prepared, c_primitive_counts = repair_c_primitives(prepared)
            report.update(c_primitive_counts)
            from repair_client_file_abi import repair as repair_file_abi
            prepared, file_counts = repair_file_abi(prepared)
            report.update(file_counts)
            from repair_client_pointer_storage import repair as repair_pointer_storage
            prepared, pointer_counts = repair_pointer_storage(prepared)
            report.update(pointer_counts)
            from repair_client_memory_abi import repair as repair_memory_abi
            prepared, memory_counts = repair_memory_abi(prepared, report)
            report.update(memory_counts)
            from repair_client_startup_arguments import repair as repair_startup_arguments
            prepared, startup_counts = repair_startup_arguments(prepared)
            report.update(startup_counts)
            from repair_client_directory import repair as repair_directory
            prepared, directory_counts = repair_directory(prepared)
            report.update(directory_counts)
            from repair_client_api_cache import repair as repair_api_cache
            prepared, api_cache_counts = repair_api_cache(prepared)
            report.update(api_cache_counts)
            from repair_client_full_path import repair as repair_full_path
            prepared, full_path_counts = repair_full_path(prepared)
            report.update(full_path_counts)
            from repair_client_chdir import repair as repair_chdir
            prepared, chdir_counts = repair_chdir(prepared)
            report.update(chdir_counts)
            from repair_client_profile_stores import repair as repair_profile_stores
            prepared, profile_counts = repair_profile_stores(prepared)
            report.update(profile_counts)
            from repair_client_api_ranges import repair as repair_api_ranges
            prepared, api_range_counts = repair_api_ranges(prepared)
            report.update(api_range_counts)
            from repair_client_thread_startup import repair as repair_thread_startup
            prepared, thread_counts = repair_thread_startup(prepared)
            report.update(thread_counts)
            from repair_client_formatter import repair as repair_formatter
            prepared, formatter_counts = repair_formatter(prepared)
            report.update(formatter_counts)
            from repair_client_format_emission import repair as repair_format_emission
            prepared, emission_counts = repair_format_emission(prepared)
            report.update(emission_counts)
            from repair_client_stdio import repair as repair_stdio
            prepared, stdio_counts = repair_stdio(prepared)
            report.update(stdio_counts)
            from repair_client_file_open import repair as repair_file_open
            prepared, file_open_counts = repair_file_open(prepared)
            report.update(file_open_counts)
            from repair_client_scan_input import repair as repair_scan_input
            prepared, scan_counts = repair_scan_input(prepared)
            report.update(scan_counts)
            from repair_client_sdl_window import repair as repair_sdl_window
            prepared, window_counts = repair_sdl_window(prepared)
            report.update(window_counts)
            from repair_client_locale import repair as repair_locale
            prepared, locale_counts = repair_locale(prepared)
            report.update(locale_counts)
            from repair_client_gl_version import repair as repair_gl_version
            prepared, gl_version_counts = repair_gl_version(prepared)
            report.update(gl_version_counts)
            from repair_client_copy import repair as repair_copy
            prepared, copy_counts = repair_copy(prepared)
            report.update(copy_counts)
            from repair_client_malloc_calls import repair as repair_malloc_calls
            prepared, malloc_counts = repair_malloc_calls(prepared)
            report.update(malloc_counts)
            from repair_client_shader_source import repair as repair_shader_source
            prepared, shader_counts = repair_shader_source(prepared)
            report.update(shader_counts)
            from repair_client_image_reader import repair as repair_image_reader
            prepared, image_counts = repair_image_reader(prepared)
            report.update(image_counts)
            from repair_client_ui_return import repair as repair_ui_return
            prepared, ui_counts = repair_ui_return(prepared)
            report.update(ui_counts)
            from repair_client_huffman import repair as repair_huffman
            prepared, huffman_counts = repair_huffman(prepared)
            report.update(huffman_counts)
            from repair_client_dynamic_huffman import repair as repair_dynamic_huffman
            prepared, dynamic_counts = repair_dynamic_huffman(prepared)
            report.update(dynamic_counts)
            from repair_client_inflate_context import repair as repair_inflate_context
            prepared, inflate_counts = repair_inflate_context(prepared)
            report.update(inflate_counts)
            from repair_client_joystick_startup import repair as repair_joystick_startup
            prepared, joystick_counts = repair_joystick_startup(prepared)
            report.update(joystick_counts)
            from repair_client_audio_startup import repair as repair_audio_startup
            prepared, audio_counts = repair_audio_startup(prepared)
            report.update(audio_counts)
            from repair_client_matrix_multiply import repair as repair_matrix_multiply
            prepared, matrix_counts = repair_matrix_multiply(prepared)
            report.update(matrix_counts)
            from repair_client_text_startup import repair as repair_text_startup
            prepared, text_counts = repair_text_startup(prepared)
            report.update(text_counts)
            from repair_client_swap_window import repair as repair_swap_window
            prepared, swap_counts = repair_swap_window(prepared)
            report.update(swap_counts)
            from repair_client_codec_options import repair as repair_codec_options
            prepared, codec_counts = repair_codec_options(prepared)
            report.update(codec_counts)
            from repair_client_shader_status import repair as repair_shader_status
            prepared, shader_status_counts = repair_shader_status(prepared)
            report.update(shader_status_counts)
            from repair_client_file_formatter import repair as repair_file_formatter
            prepared, file_formatter_counts = repair_file_formatter(prepared)
            report.update(file_formatter_counts)
            from repair_client_camera_shader_cache import repair as repair_camera_shader_cache
            prepared, camera_shader_counts = repair_camera_shader_cache(prepared)
            report.update(camera_shader_counts)
            from repair_client_generation_stores import repair as repair_generation_stores
            prepared, generation_store_counts = repair_generation_stores(prepared)
            report.update(generation_store_counts)
            from repair_client_item_stores import repair as repair_item_stores
            prepared, item_store_counts = repair_item_stores(prepared)
            report.update(item_store_counts)
            from repair_client_world_default_stores import repair as repair_world_default_stores
            prepared, world_default_counts = repair_world_default_stores(prepared)
            report.update(world_default_counts)
            from repair_client_vehicle_storage import repair as repair_vehicle_storage
            prepared, vehicle_storage_counts = repair_vehicle_storage(prepared)
            report.update(vehicle_storage_counts)
            from repair_client_geometry_vectors import repair as repair_geometry_vectors
            prepared, geometry_vector_counts = repair_geometry_vectors(prepared)
            report.update(geometry_vector_counts)
            from repair_client_itemset_storage import repair as repair_itemset_storage
            prepared, itemset_storage_counts = repair_itemset_storage(prepared)
            report.update(itemset_storage_counts)
            from repair_client_find_files import repair as repair_find_files
            prepared, find_files_counts = repair_find_files(prepared)
            report.update(find_files_counts)
            from repair_client_timezone_startup import repair as repair_timezone_startup
            prepared, timezone_startup_counts = repair_timezone_startup(prepared)
            report.update(timezone_startup_counts)
            from repair_client_local_time import repair as repair_local_time
            prepared, local_time_counts = repair_local_time(prepared)
            report.update(local_time_counts)
            from repair_client_find_next import repair as repair_find_next
            prepared, find_next_counts = repair_find_next(prepared)
            report.update(find_next_counts)
            from repair_client_sorter import repair as repair_sorter
            prepared, sorter_counts = repair_sorter(prepared)
            report.update(sorter_counts)
            from repair_client_itemset_loader import repair as repair_itemset_loader
            prepared, itemset_loader_counts = repair_itemset_loader(prepared)
            report.update(itemset_loader_counts)
            from repair_client_mesh_storage import repair as repair_mesh_storage
            prepared, mesh_storage_counts = repair_mesh_storage(prepared)
            report.update(mesh_storage_counts)
            from repair_client_model_loader import repair as repair_model_loader
            prepared, model_loader_counts = repair_model_loader(prepared)
            report.update(model_loader_counts)
            from repair_client_procedural_shape import repair as repair_procedural_shape
            prepared, procedural_shape_counts = repair_procedural_shape(prepared)
            report.update(procedural_shape_counts)
            from repair_client_quad_shape import repair as repair_quad_shape
            prepared, quad_shape_counts = repair_quad_shape(prepared)
            report.update(quad_shape_counts)
            from repair_client_quad_extrusion import repair as repair_quad_extrusion
            prepared, quad_extrusion_counts = repair_quad_extrusion(prepared)
            report.update(quad_extrusion_counts)
            from repair_client_layered_shape import repair as repair_layered_shape
            prepared, layered_shape_counts = repair_layered_shape(prepared)
            report.update(layered_shape_counts)
            from repair_client_branch_shape import repair as repair_branch_shape
            prepared, branch_shape_counts = repair_branch_shape(prepared)
            report.update(branch_shape_counts)
            from repair_client_item_header import repair as repair_item_header
            prepared, item_header_counts = repair_item_header(prepared)
            report.update(item_header_counts)
            from repair_client_character_loader import repair as repair_character_loader
            prepared, character_loader_counts = repair_character_loader(prepared)
            report.update(character_loader_counts)
            from repair_client_body_indices import repair as repair_body_indices
            prepared, body_indices_counts = repair_body_indices(prepared)
            report.update(body_indices_counts)
            from repair_client_render_cookie import repair as repair_render_cookie
            prepared, render_cookie_counts = repair_render_cookie(prepared)
            report.update(render_cookie_counts)
            from repair_client_texture_slot import repair as repair_texture_slot
            prepared, texture_slot_counts = repair_texture_slot(prepared)
            report.update(texture_slot_counts)
            from repair_client_sound_load import repair as repair_sound_load
            prepared, sound_load_counts = repair_sound_load(prepared)
            report.update(sound_load_counts)
            from repair_client_integer_locale import repair as repair_integer_locale
            prepared, integer_locale_counts = repair_integer_locale(prepared)
            report.update(integer_locale_counts)
            from repair_client_sound_gain_alignment import repair as repair_sound_gain_alignment
            prepared, sound_gain_counts = repair_sound_gain_alignment(prepared)
            report.update(sound_gain_counts)
            from repair_client_building_return import repair as repair_building_return
            prepared, building_return_counts = repair_building_return(prepared)
            report.update(building_return_counts)
            from repair_client_building_catalog import repair as repair_building_catalog
            prepared, building_catalog_counts = repair_building_catalog(prepared)
            report.update(building_catalog_counts)
            from repair_client_master_connect import repair as repair_master_connect
            prepared, master_connect_counts = repair_master_connect(prepared)
            report.update(master_connect_counts)
            from repair_client_steam_context import repair as repair_steam_context
            prepared, steam_context_counts = repair_steam_context(prepared)
            report.update(steam_context_counts)
            from repair_client_steam_friend_storage import repair as repair_steam_friend_storage
            prepared, steam_friend_counts = repair_steam_friend_storage(prepared)
            report.update(steam_friend_counts)
            from repair_client_event_pump import repair as repair_event_pump
            prepared, event_pump_counts = repair_event_pump(prepared)
            report.update(event_pump_counts)
            from repair_client_master_auth import repair as repair_master_auth
            prepared, master_auth_counts = repair_master_auth(prepared)
            report.update(master_auth_counts)
            from repair_client_main_menu import repair as repair_main_menu
            prepared, main_menu_counts = repair_main_menu(prepared)
            report.update(main_menu_counts)
            from repair_client_frame_presentation import repair as repair_frame_presentation
            prepared, frame_presentation_counts = repair_frame_presentation(prepared)
            report.update(frame_presentation_counts)
            from repair_client_terrain_raycast import repair as repair_terrain_raycast
            prepared, terrain_raycast_counts = repair_terrain_raycast(prepared)
            report.update(terrain_raycast_counts)
            from repair_client_scene_raycast import repair as repair_scene_raycast
            prepared, scene_raycast_counts = repair_scene_raycast(prepared)
            report.update(scene_raycast_counts)
            from repair_client_spatial_audio import repair as repair_spatial_audio
            prepared, spatial_audio_counts = repair_spatial_audio(prepared)
            report.update(spatial_audio_counts)
            from repair_client_audio_buffer import repair as repair_audio_buffer
            prepared, audio_buffer_counts = repair_audio_buffer(prepared)
            report.update(audio_buffer_counts)
            from repair_client_audio_resample import repair as repair_audio_resample
            prepared, audio_resample_counts = repair_audio_resample(prepared)
            report.update(audio_resample_counts)
            from repair_client_audio_window import repair as repair_audio_window
            prepared, audio_window_counts = repair_audio_window(prepared)
            report.update(audio_window_counts)
            from repair_client_codec_scratch import repair as repair_codec_scratch
            prepared, codec_scratch_counts = repair_codec_scratch(prepared)
            report.update(codec_scratch_counts)
            from repair_client_audio_filter import repair as repair_audio_filter
            prepared, audio_filter_counts = repair_audio_filter(prepared)
            report.update(audio_filter_counts)
            from repair_client_celt_scratch import repair as repair_celt_scratch
            prepared, celt_scratch_counts = repair_celt_scratch(prepared)
            report.update(celt_scratch_counts)
            from repair_client_codec_returns import repair as repair_codec_returns
            prepared, codec_return_counts = repair_codec_returns(prepared)
            report.update(codec_return_counts)
            from repair_client_audio_correlation import repair as repair_audio_correlation
            prepared, audio_correlation_counts = repair_audio_correlation(prepared)
            report.update(audio_correlation_counts)
            from repair_client_audio_bands import repair as repair_audio_bands
            prepared, audio_band_counts = repair_audio_bands(prepared)
            report.update(audio_band_counts)
            from repair_client_gl_attribute_layout import repair as repair_gl_attribute_layout
            prepared, gl_attribute_counts = repair_gl_attribute_layout(prepared)
            report.update(gl_attribute_counts)
            from repair_client_png_store_alignment import repair as repair_png_store_alignment
            prepared, png_store_counts = repair_png_store_alignment(prepared)
            report.update(png_store_counts)
            from repair_client_font_startup import repair as repair_font_startup
            prepared, font_counts = repair_font_startup(prepared)
            report.update(font_counts)
            from repair_client_options_menu import repair as repair_options_menu
            prepared, options_counts = repair_options_menu(prepared)
            from repair_client_menu_actions import repair as repair_menu_actions
            prepared, menu_action_counts = repair_menu_actions(prepared)
            options_counts.update(menu_action_counts)
            report.update(options_counts)
            from repair_client_dynamic_image_addresses import repair as repair_dynamic_addresses
            prepared, dynamic_address_counts = repair_dynamic_addresses(prepared)
            report.update(dynamic_address_counts)
            from repair_client_ignored_cookie_exits import repair as repair_ignored_cookie_exits
            prepared, ignored_cookie_counts = repair_ignored_cookie_exits(prepared)
            report.update(ignored_cookie_counts)
            from repair_client_orientation_blend import repair as repair_orientation_blend
            prepared, orientation_blend_counts = repair_orientation_blend(prepared)
            report.update(orientation_blend_counts)
            from repair_client_rotation_step import repair as repair_rotation_step
            prepared, rotation_step_counts = repair_rotation_step(prepared)
            report.update(rotation_step_counts)
            from repair_client_collision_query import repair as repair_collision_query
            prepared, collision_query_counts = repair_collision_query(prepared)
            report.update(collision_query_counts)
            from repair_client_mesh_query import repair as repair_mesh_query
            prepared, mesh_query_counts = repair_mesh_query(prepared)
            report.update(mesh_query_counts)
            from repair_client_human_orientation import repair as repair_human_orientation
            prepared, human_orientation_counts = repair_human_orientation(prepared)
            report.update(human_orientation_counts)
            from repair_client_shadow_uniform import repair as repair_shadow_uniform
            prepared, shadow_uniform_counts = repair_shadow_uniform(prepared)
            report.update(shadow_uniform_counts)
            from repair_client_stored_deflate import repair as repair_stored_deflate
            prepared, stored_deflate_counts = repair_stored_deflate(prepared)
            report.update(stored_deflate_counts)
            from repair_client_swept_collision import repair as repair_swept_collision
            prepared, swept_collision_counts = repair_swept_collision(prepared)
            report.update(swept_collision_counts)
            from repair_client_shape_contacts import repair as repair_shape_contacts
            prepared, shape_contact_counts = repair_shape_contacts(prepared)
            report.update(shape_contact_counts)
            from repair_client_human_tick_storage import repair as repair_human_tick_storage
            prepared, human_tick_counts = repair_human_tick_storage(prepared)
            report.update(human_tick_counts)
            from repair_client_practice_spawn_storage import repair as repair_practice_spawn_storage
            prepared, spawn_storage_counts = repair_practice_spawn_storage(prepared)
            report.update(spawn_storage_counts)
            from repair_client_item_collision_storage import repair as repair_item_collision_storage
            prepared, item_collision_counts = repair_item_collision_storage(prepared)
            report.update(item_collision_counts)
            from repair_client_geometry_tables import repair as repair_geometry_tables
            prepared, geometry_table_counts = repair_geometry_tables(prepared)
            report.update(geometry_table_counts)
            from repair_client_static_sphere_query import repair as repair_static_sphere_query
            prepared, static_sphere_counts = repair_static_sphere_query(prepared)
            report.update(static_sphere_counts)
            from repair_client_tick_effect_storage import repair as repair_tick_effect_storage
            prepared, tick_effect_counts = repair_tick_effect_storage(prepared)
            report.update(tick_effect_counts)
            from repair_client_sphere_geometry_storage import repair as repair_sphere_geometry_storage
            prepared, sphere_geometry_counts = repair_sphere_geometry_storage(prepared)
            report.update(sphere_geometry_counts)
            from repair_client_snapshot_storage import repair as repair_snapshot_storage
            prepared, snapshot_counts = repair_snapshot_storage(prepared)
            report.update(snapshot_counts)
            from repair_client_view_storage import repair as repair_view_storage
            prepared, view_storage_counts = repair_view_storage(prepared)
            report.update(view_storage_counts)
            from repair_client_color_masks import repair as repair_color_masks
            prepared, color_mask_counts = repair_color_masks(prepared)
            report.update(color_mask_counts)
            from repair_client_joint_storage import repair as repair_joint_storage
            prepared, joint_storage_counts = repair_joint_storage(prepared)
            report.update(joint_storage_counts)
            from repair_client_pose_targets import repair as repair_pose_targets
            prepared, pose_target_counts = repair_pose_targets(prepared)
            report.update(pose_target_counts)
            from repair_client_tick_calls import repair as repair_tick_calls
            prepared, tick_call_counts = repair_tick_calls(prepared)
            report.update(tick_call_counts)
            from repair_client_world_gl_calls import repair as repair_world_gl_calls
            prepared, world_gl_counts = repair_world_gl_calls(prepared)
            report.update(world_gl_counts)
            from repair_client_vertex_layouts import repair as repair_vertex_layouts
            prepared, vertex_layout_counts = repair_vertex_layouts(prepared)
            report.update(vertex_layout_counts)
            from repair_client_indexed_gl_calls import repair as repair_indexed_gl_calls
            prepared, indexed_gl_counts = repair_indexed_gl_calls(prepared)
            report.update(indexed_gl_counts)
            from repair_client_base_vertex_draws import repair as repair_base_vertex_draws
            prepared, base_vertex_counts = repair_base_vertex_draws(prepared)
            report.update(base_vertex_counts)
            from repair_client_render_float_calls import repair as repair_render_float_calls
            prepared, render_float_counts = repair_render_float_calls(prepared)
            report.update(render_float_counts)
            from repair_client_render_workspaces import repair as repair_render_workspaces
            prepared, render_workspace_counts = repair_render_workspaces(prepared)
            report.update(render_workspace_counts)
            from repair_client_health_pose import repair as repair_health_pose
            prepared, health_pose_counts = repair_health_pose(prepared)
            report.update(health_pose_counts)
            from repair_client_character_preview import repair as repair_character_preview
            prepared, character_preview_counts = repair_character_preview(prepared)
            report.update(character_preview_counts)
            from repair_client_image_tls import repair as repair_image_tls
            prepared, image_tls_counts = repair_image_tls(prepared)
            report.update(image_tls_counts)
        report["renamed_system_symbols"] = renamed_count
        report["semantic_renames_applied"] = semantic_count
        report["semantic_renames"] = semantic_renames
        report["appended_functions"] = appended
        report["missing_per_function_exports"] = missing_files
        print(target + ": translated C syntax", flush=True)
        if target == "client":
            adapter = (PROJECT / "src/rebuild/client_leaf_adapter.inc").read_bytes()
            prepared += b"\n" + adapter + b"\n"
            report["client_leaf_adapter_sha256"] = hashlib.sha256(adapter).hexdigest()
        if target == "dedicated":
            from prepare_server import finish as finish_server
            report["server_edits"] = server_edits
            prepared = finish_server(prepared, report, server_bindings)
        includes = []
        if undeclared_imports:
            includes.append('#include "recovered_imports.h"')
        if any(report[key] for key in ("forward_declarations", "data_objects",
                                       "forward_types", "extern_objects",
                                       "tag_declarations", "extern_functions")):
            includes.append('#include "recovered_forward.h"')
        if includes:
            prepared = ("\n".join(includes) + "\n").encode() + prepared
        if target == "client":
            prepared = b'#include "client_leaf_shim.h"\n' + prepared
        if target == "dedicated":
            prepared = b'#include "server_compat.h"\n' + prepared
        report.update(input_sha256=hashlib.sha256(source).hexdigest(),
                      output_sha256=hashlib.sha256(prepared).hexdigest(),
                      source=str(original / (stem + ".c")))
        if target == "client":
            from extend_client_borderless import extend as extend_borderless
            prepared, borderless_counts = extend_borderless(prepared)
            report.update(borderless_counts)
        destination = PROJECT / "work/rebuild" / target
        destination.mkdir(parents=True, exist_ok=True)
        (destination / (stem + ".c")).write_bytes(prepared)
        if undeclared_imports or iat_slots:
            renamed_iat = sorted((slot + "_sr", real) for slot, real in iat_slots.items()
                                 if slot in rename_set and real)
            (destination / "recovered_imports.h").write_text(
                build_import_header(sorted(undeclared_imports), renamed_iat), encoding="utf-8")
        if any(slot in rename_set for slot in iat_slots):
            renamed_iat = sorted((slot + "_sr", real) for slot, real in iat_slots.items()
                                 if slot in rename_set and real)
            (destination / "import_shim.c").write_text(build_import_shim(renamed_iat), encoding="utf-8")
        (destination / "recovered_forward.h").write_text(build_forward_header(report), encoding="utf-8")
        (destination / "preparation.json").write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
        shutil.copyfile(original / "defs.h", destination / "defs.h")
        if target == "client":
            shutil.copyfile(PROJECT / "src/recovered/client_leaf.h", destination / "client_leaf.h")
            shutil.copyfile(PROJECT / "src/rebuild/client_leaf_shim.h",
                            destination / "client_leaf_shim.h")
            from split_client_sources import split
            split(destination / (stem + ".c"))
        print("%s: %d SIMD edits, %d resolved function calls, %d function declarations, "
              "%d data objects, %d forward types, %d wrapped asm blocks, "
              "%d prototype drops, %d address casts, %d retained for review" %
              (target, sum(e["kind"] == "simd" for e in report["edits"]),
               sum(e["kind"] == "function_binding" for e in report["edits"]),
               sum(e["kind"] == "function_definition_binding" for e in report["edits"]),
               len(report["data_objects"]), len(report["forward_types"]),
               report["asm_wrapped"],
               sum(e["kind"] == "prototype_drop" for e in report["edits"]),
               sum(e["kind"] == "address_cast" for e in report["edits"]),
               len(report["skipped"])), flush=True)


if __name__ == "__main__":
    main()
