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
BACKTICK_NAME = re.compile(rb"`([^'\n]*)'")
TEMPLATE_NAME = re.compile(rb"([A-Za-z_][A-Za-z_0-9]*)<([A-Za-z_0-9, *&]+)>(?=\s*[:=(])")
OPERATOR_CALL = re.compile(rb"([A-Za-z_0-9])__operator\s*\(\s*\)")


def sanitize_name(name):
    """Return the C identifier used for a Hex-Rays name containing '::'."""
    return name.replace("::", "__")


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
    """Wrap a MASM instruction dump verbatim in a GNU as .intel_syntax string."""
    lines = [re.sub(HEX_H_LITERAL, rb"0x\1", line.strip()) for line in body.split(b"\n")]
    lines = [line for line in lines if line]
    text = b"\\n\\t".join(lines)
    escaped = text.replace(b"\\", b"\\\\").replace(b'"', b'\\"')
    return (b'__asm__ volatile(".intel_syntax noprefix\\n\\t' + escaped
            + b'\\n\\t.att_syntax prefix");')


def preprocess(source):
    """Byte-level rewrites that keep the export valid C without changing semantics."""
    report = {"asm_cpuid": 0, "asm_xgetbv": 0, "asm_wrapped": 0,
              "renamed_qualified": 0, "renamed_anonymous": 0,
              "renamed_backtick": 0, "renamed_template": 0,
              "renamed_operator_call": 0, "unknown_floats": 0,
              "split_constants": 0, "unsigned_constants": 0}
    for direction in ("asm", "names", "qualified", "operator_call", "constants"):
        edits = []
        if direction == "asm":
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
                edits.append((match.start(), match.end(),
                              match.group(1) + b"__" + match.group(2).replace(b" ", b"")))
                report["renamed_template"] += 1
        elif direction == "qualified":
            masked = mask_noncode(source)
            for match in QUALIFIED.finditer(masked):
                edits.append((match.start(), match.end(),
                              source[match.start():match.end()].replace(b"::", b"__")))
                report["renamed_qualified"] += 1
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
            # Hex-Rays writes ?flt where it could not recover a float constant.
            # The zero is a marked placeholder, not recovered data.
            for match in re.finditer(rb"\?flt\b", masked):
                edits.append((match.start(), match.end(),
                              b"0.0 /* sr_unknown_float */"))
                report["unknown_floats"] += 1
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


def declarator_identifier(declarator, source):
    # Typedef names parse as type_identifier; ordinary declarators as identifier.
    node = declarator
    while node is not None and node.type not in ("identifier", "type_identifier"):
        nxt = node.child_by_field_name("declarator")
        if nxt is None:
            # Parenthesized declarators such as (*name)(args) wrap the inner
            # declarator without a declarator field; skip parameter lists.
            for child in node.named_children:
                if child.type != "parameter_list":
                    nxt = child
                    break
        node = nxt
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


def translate(source, functions=None, known_types=None, extra_names=None,
              import_names=None):
    source, prepass = preprocess(source)
    parser = Parser(Language(tree_sitter_c.language()))
    tree = parser.parse(source)
    line_ends = [index for index, value in enumerate(source) if value == 10]
    candidates = {int(item["address"], 16): sanitize_name(item["name"]) for item in (functions or [])
                  if re.fullmatch(r"[A-Za-z_][A-Za-z_0-9]*", sanitize_name(item["name"]))}
    prototypes = {}
    definitions = {}
    declared = set()
    function_names = set()
    pointer_variables = set()
    pointer_typedefs = set()
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
        elif node.type == "declaration":
            # Variables declared with a pointer declarator keep plain function
            # assignments; only integer storage gets the explicit address cast.
            type_node = node.child_by_field_name("type")
            declarators = declaration_declarator(node)
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
                for sub in nodes(declarators):
                    if sub.type == "function_declarator":
                        plist = sub.child_by_field_name("parameters")
                        if plist is not None:
                            params = source[plist.start_byte:plist.end_byte].decode()
                            break
                if name is not None:
                    prototypes.setdefault(name, []).append(
                        {"start": node.start_byte, "end": node.end_byte, "params": params})
        elif node.type == "function_definition":
            declarator = node.child_by_field_name("declarator")
            name = declarator_identifier(declarator, source)
            if name is not None:
                params = None
                for sub in nodes(declarator):
                    if sub.type == "parameter_list":
                        params = source[sub.start_byte:sub.end_byte].decode()
                        break
                definitions[name] = params
    addresses = set(function_names) | set(extra_names or ())
    # Drop the export's own prototypes for names system headers declare, for
    # names that are actually types (Hex-Rays mis-declares some as functions),
    # and prototypes that disagree with the definition or a later prototype.
    system_owned = SYSTEM_DECLARED_NAMES | (import_names or set()) | \
        BUILTIN_TYPES | (known_types or set())
    dropped_prototypes = []
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
    for entry in dropped_prototypes:
        declaration_edits.append(
            {"kind": "prototype_drop", "start": entry["start"], "end": entry["end"],
             "line": bisect_right(line_ends, entry["start"]) + 1,
             "replacement": ""})
    bindings = {address: name for address, name in candidates.items() if name in declared}
    edits, skipped = declaration_edits, []
    data_objects = set()
    referenced_types = set()
    seen_spans = set()
    for node in nodes(tree.root_node):
        if node.type == "call_expression":
            function = node.child_by_field_name("function")
            if function is not None and function.type == "subscript_expression":
                base = function.child_by_field_name("argument")
                index = function.child_by_field_name("index")
                if (base is not None and index is not None and index.type == "number_literal"
                        and source[base.start_byte:base.end_byte] == b"MEMORY"):
                    literal = source[index.start_byte:index.end_byte]
                    if re.fullmatch(rb"0[xX][0-9a-fA-F]+", literal):
                        address = int(literal, 16)
                        name = bindings.get(address)
                        if name is not None:
                            edits.append({"kind": "function_binding", "start": function.start_byte,
                                          "end": function.end_byte, "line": bisect_right(line_ends, function.start_byte) + 1,
                                          "address": hex(address), "replacement": name})
        elif node.type == "type_identifier":
            # A struct/union/enum tag use is satisfied by the tag itself; only
            # bare type names need forward typedefs.
            parent = node.parent
            if not (parent is not None and parent.type in
                    ("struct_specifier", "union_specifier", "enum_specifier")
                    and parent.child_by_field_name("name") is not None
                    and parent.child_by_field_name("name").id == node.id):
                referenced_types.add(source[node.start_byte:node.end_byte].decode())
        elif node.type == "subscript_expression":
            # MEMORY[addr][i] with no known function at addr reads a data object.
            argument = node.child_by_field_name("argument")
            if argument is None or argument.type != "subscript_expression":
                continue
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
        elif node.type == "assignment_expression":
            # Hex-Rays stores function addresses through integer views; make the
            # representation explicit instead of relying on legacy conversions.
            right = node.child_by_field_name("right")
            left = node.child_by_field_name("left")
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
        # Rvalues and damaged parse nodes need individual review, not address-taking.
        valid = is_lvalue(argument, source)
        if node.has_error or not valid or operator not in (b".", b"->"):
            skipped.append({"line": bisect_right(line_ends, node.start_byte) + 1, "expression": source[node.start_byte:node.end_byte].decode()})
            continue
        width, member = spec
        macro = b"SR_VEC_PTR_LANES" if operator == b"->" else b"SR_VEC_LANES"
        replacement = (macro + b"(" + str(width).encode() + b", "
                       + source[argument.start_byte:argument.end_byte] + b", " + member.encode() + b")")
        edits.append({"kind": "simd", "start": node.start_byte, "end": node.end_byte, "line": bisect_right(line_ends, node.start_byte) + 1,
                      "field": source[field.start_byte:field.end_byte].decode(), "replacement": replacement.decode()})
    # Nested vector field expressions are unusual; retain them for manual review.
    ordered = sorted(edits, key=lambda item: (item["start"], -item["end"]))
    accepted = []
    for index, edit in enumerate(ordered):
        overlap_previous = index > 0 and ordered[index - 1]["end"] > edit["start"]
        overlap_next = index + 1 < len(ordered) and ordered[index + 1]["start"] < edit["end"]
        if overlap_previous or overlap_next:
            skipped.append({"line": edit["line"], "reason": "overlapping edits require review"})
        else:
            accepted.append(edit)
    fragments, previous = [], 0
    for edit in accepted:
        fragments += [source[previous:edit["start"]], edit["replacement"].encode()]
        previous = edit["end"]
    fragments.append(source[previous:])
    known = BUILTIN_TYPES | (known_types or set())
    struct_tags = set()
    for node in nodes(tree.root_node):
        if node.type in ("struct_specifier", "union_specifier", "enum_specifier"):
            name = node.child_by_field_name("name")
            if name is not None and name.type == "type_identifier":
                struct_tags.add(source[name.start_byte:name.end_byte].decode())
    excluded = known | (declared - struct_tags)
    forward_types = sorted(name for name in referenced_types - excluded)
    report = {"edits": accepted, "skipped": skipped,
              "forward_declarations": list(forward_declarations.values()),
              "data_objects": sorted(data_objects),
              "forward_types": forward_types,
              "input_has_parse_errors": tree.root_node.has_error}
    report.update(prepass)
    return b"".join(fragments), report


def build_forward_header(report):
    # Types must be declared before the prototypes that reference them.
    lines = []
    if report["forward_types"]:
        lines.append("/* Referenced but undeclared type names; layouts are recovered separately. */")
        lines += ["typedef struct %s %s;" % (name, name) for name in report["forward_types"]]
    if report["data_objects"]:
        lines.append("/* Data objects named by their image addresses; contents are linked later. */")
        lines += ["extern unsigned char %s[];" % name for name in report["data_objects"]]
    if report["forward_declarations"]:
        lines.append("/* Declarations copied from address-resolved function definitions. */")
        lines += report["forward_declarations"]
    return "".join(line + "\n" for line in lines)


def build_import_header(names):
    lines = [
        "/* MinGW headers do not declare these imported entry points. Calls in the",
        "   export cast them to their documented signatures at each call site; the",
        "   unspecified-argument declarations here only make those casts valid C. */",
    ]
    lines += ["__int64 %s();" % name for name in names]
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
    return all_names, undeclared


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
        known_types = parse_known_types(original / "defs.h")
        all_imports, undeclared_imports = collect_import_names(original / "imports.json")
        prepared, report = translate(source, manifest["functions"], known_types,
                                     extra_names=all_imports, import_names=all_imports)
        includes = []
        if undeclared_imports:
            includes.append('#include "recovered_imports.h"')
        if any(report[key] for key in ("forward_declarations", "data_objects", "forward_types")):
            includes.append('#include "recovered_forward.h"')
        if includes:
            prepared = ("\n".join(includes) + "\n").encode() + prepared
        report.update(input_sha256=hashlib.sha256(source).hexdigest(),
                      output_sha256=hashlib.sha256(prepared).hexdigest(),
                      source=str(original / (stem + ".c")))
        destination = PROJECT / "work/rebuild" / target
        destination.mkdir(parents=True, exist_ok=True)
        (destination / (stem + ".c")).write_bytes(prepared)
        if undeclared_imports:
            (destination / "recovered_imports.h").write_text(
                build_import_header(sorted(undeclared_imports)), encoding="utf-8")
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
