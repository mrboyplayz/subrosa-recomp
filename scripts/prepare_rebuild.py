"""Produce a build copy with conservative, syntax-tree-based edits."""

import argparse
from bisect import bisect_right
import hashlib
import json
from pathlib import Path
import re
import shutil
import sys

PROJECT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(PROJECT / "work/python-deps"))
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
VAR_FRAME = re.compile(rb"var_([0-9A-Fa-f]+)")
CS_RELATIVE = re.compile(rb"cs:([A-Za-z_][A-Za-z_0-9]*)")
BACKTICK_NAME = re.compile(rb"`([^'\n]*)'")
TEMPLATE_NAME = re.compile(rb"([A-Za-z_][A-Za-z_0-9]*)<((?:[^<>]|<[^<>]*>)+)>(?=\s*[:=(])")
OPERATOR_CALL = re.compile(rb"([A-Za-z_0-9])__operator\s*\(\s*\)")
OPERATOR_ASSIGN = re.compile(rb"([A-Za-z_0-9])__operator\s*=")
AT_REGISTER = re.compile(rb"@<([a-z0-9]+)>")
SPOILS = re.compile(rb"__spoils\s*<[^>\n]*>")
CONST_KEYWORD = re.compile(rb"\bconst\b")
# MSVC call-modifier keywords: no-ops under the single x64 calling
# convention, but tree-sitter cannot parse them after a pointer declarator.
CALLMOD = re.compile(
    rb"__vectorcall|__thiscall|__fastcall|__stdcall_dup\d|__stdcall|__cdecl_dup\d|__cdecl|__clrcall")
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

    Two notations are resolved, both defined by Hex-Rays' own dump convention:
    `var_XX` names the frame slot at [base - 0xXX], and `cs:symbol` is the
    64-bit RIP-relative reference to that symbol. Everything else passes to
    the assembler exactly as Hex-Rays wrote it.
    """
    lines = [re.sub(HEX_H_LITERAL, rb"0x\1", line.strip()) for line in body.split(b"\n")]
    lines = [re.sub(VAR_FRAME, rb"-0x\1", line) for line in lines]
    lines = [re.sub(CS_RELATIVE, rb"[rip+\1]", line) for line in lines]
    lines = [line for line in lines if line]
    text = b"\\n\\t".join(lines)
    escaped = text.replace(b"\\", b"\\\\").replace(b'"', b'\\"')
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


def preprocess(source):
    """Byte-level rewrites that keep the export valid C without changing semantics."""
    report = {"asm_cpuid": 0, "asm_xgetbv": 0, "asm_wrapped": 0,
              "renamed_qualified": 0, "renamed_anonymous": 0,
              "renamed_backtick": 0, "renamed_template": 0,
              "renamed_operator_call": 0, "renamed_operator_assign": 0,
              "register_annotations": 0, "unknown_floats": 0,
              "unknown_initializers": 0, "const_stripped": 0,
              "vector_loads": 0, "vector_moves": 0,
              "split_constants": 0, "unsigned_constants": 0, "callmods_stripped": 0, "vardecls_deduped": 0}
    # PENDING: depth-0 weak-slot declaration dedup; the statement boundaries
    # destabilized prototype handling and stay disabled.
    for direction in ("callmods", "const", "asm", "names",
                      "qualified", "operator_call", "vectors", "constants"):
        edits = []
        if direction == "const":
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
        elif direction == "vectors":
            masked = mask_noncode(source)
            for match in VECTOR_CAST.finditer(masked):
                cast_type = match.group(1)
                prefix = b"__m" + cast_type if cast_type != b"128" else b"__m128"
                target = re.sub(rb"\([^()\n]{1,24}\)\s*", b"", match.group(2))
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


def is_declarator_position(node):
    """True if the identifier is reached from a declaration via declarator fields."""
    current = node
    parent = node.parent
    while parent is not None:
        field_node = parent.child_by_field_name("declarator")
        if field_node is None or not (
                field_node.start_byte <= current.start_byte
                and current.end_byte <= field_node.end_byte):
            # Parenthesized declarators ((*name)(args)) lack a declarator
            # field; any named child that spans the identifier continues the
            # declarator chain.
            field_node = None
            for child in parent.named_children:
                if child.id != current.id and child.start_byte <= current.start_byte \
                        and current.end_byte <= child.end_byte:
                    field_node = child
                    break
            if field_node is None:
                return False
        if parent.type in ("declaration", "function_definition",
                           "parameter_declaration", "field_declaration"):
            return True
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


def enclosing_function_start(node):
    current = node
    while current is not None:
        if current.type == "function_definition":
            return current.start_byte
        current = current.parent
    return 0  # translation-unit scope


def translate(source, functions=None, known_types=None, extra_names=None,
              import_names=None, prepass=None, renamed_names=None):
    if prepass is None:
        source, prepass = preprocess(source)
    else:
        source, prepass = source, prepass
    parser = Parser(Language(tree_sitter_c.language()))
    tree = parser.parse(source)
    line_ends = [index for index, value in enumerate(source) if value == 10]

    def candidate_name(item):
        name = sanitize_name(item.get("name", ""))
        if name in (renamed_names or set()):
            name += "_sr"
        return name

    candidates = {int(item["address"], 16): candidate_name(item) for item in (functions or [])
                  if re.fullmatch(r"[A-Za-z_][A-Za-z_0-9]*", candidate_name(item))}
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
            # definitions parse here as call-assignments. GCC sees the
            # declarations; treat their data symbols as declared.
            text = source[node.start_byte:node.end_byte]
            if b"= &" in text and b"(" in text:
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
            if type_text is not None and re.fullmatch(
                    r"__(m128i?|m128d|m64)", type_text):
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
                            params = source[plist.start_byte:plist.end_byte].decode()
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
                        params = source[sub.start_byte:sub.end_byte].decode()
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
    addresses = set(function_names) | set(extra_names or ())
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
                if name in addresses:
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
    # PENDING: callsites that pass more arguments than the definition declares
    # could gain a variadic tail, but prototype bookkeeping for the edit is
    # not yet reliable; the disagreements remain visible compiler errors.
    for name, plist in [] if True else definition_plists.items():
        if plist is None or name not in call_arities:
            continue
        params_text = definitions.get(name)
        if not params_text or params_text == "(void)":
            continue
        if call_arities[name] <= params_text.count(",") + 1:
            continue
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
    forward_types = sorted(name for name in referenced_types - excluded)
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
    "decomp", "dtest", "fclrf", "fgetwc", "fp_format_e_internal",
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
    "strcpy_s", "strncnt", "_errno",
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
    appended, missing_files = [], []
    for item in manifest["functions"]:
        name = sanitize_name(item.get("name", ""))
        if not name or name in identifiers:
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
    return source + b"".join(appended), len(appended), missing_files


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


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--binary", choices=("client", "dedicated", "all"), default="all")
    args = parser.parse_args()
    for target, stem in (("client", "subrosa"), ("dedicated", "subrosadedicated")):
        if args.binary not in ("all", target):
            continue
        original = PROJECT / "exports" / target
        manifest = json.loads((original / "manifest.json").read_text(encoding="utf-8"))
        if manifest["state"] != "complete":
            raise RuntimeError("Wait for the " + target + " export to complete")
        source = (original / (stem + ".c")).read_bytes()
        source, prepass = preprocess(source)
        source, appended, missing_files = append_missing_functions(original, source, manifest)
        all_imports, undeclared_imports, import_entries = collect_import_names(original / "imports.json")
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
        rename_set |= {slot for slot in iat_slots
                       if slot in source.decode("utf-8", "replace")}
        source, renamed_count = rename_system_definitions(source, rename_set)
        known_types = parse_known_types(original / "defs.h")
        all_imports = all_imports  # already collected above
        prepared, report = translate(source, manifest["functions"], known_types,
                                     extra_names=all_imports, import_names=all_imports,
                                     prepass=prepass, renamed_names=rename_set)
        report["renamed_system_symbols"] = renamed_count
        report["appended_functions"] = appended
        report["missing_per_function_exports"] = missing_files
        includes = []
        if undeclared_imports:
            includes.append('#include "recovered_imports.h"')
        if any(report[key] for key in ("forward_declarations", "data_objects",
                                       "forward_types", "extern_objects",
                                       "tag_declarations", "extern_functions")):
            includes.append('#include "recovered_forward.h"')
        if includes:
            prepared = ("\n".join(includes) + "\n").encode() + prepared
        report.update(input_sha256=hashlib.sha256(source).hexdigest(),
                      output_sha256=hashlib.sha256(prepared).hexdigest(),
                      source=str(original / (stem + ".c")))
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
