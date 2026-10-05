"""Dedicated-export corrections, kept separate from client reconstruction.

Every edit is recorded. No function bodies are removed or replaced with stubs.
"""

from bisect import bisect_right
import re


def prepare(source, imports):
    from prepare_rebuild import mask_noncode, apply_renames
    edits = []
    # Manifest names sometimes denote IAT slots rather than entry points. Use
    # distinct names until the shared system-symbol renamer has finished.
    bindings = {}
    for item in imports:
        name = item.get("name", "")
        if name:
            slot = name if name.startswith("__imp_") else "__imp_" + name
            bindings[slot] = "sr_server_import_" + slot[6:]
    source, count = apply_renames(source, bindings)
    edits.append({"kind": "import_slot_names", "count": count})
    # _daylight/_timezone are object-like CRT macros under MinGW. The export
    # uses those spellings for local thunks, so give the thunks private names.
    source, count = apply_renames(source, {
        "_daylight": "sr_server_daylight", "_timezone": "sr_server_timezone",
        "chdir": "sr_server_chdir", "guard_dispatch_icall_nop": "sr_server_guard_dispatch",
        "atexit": "sr_server_atexit", "tzset": "sr_server_tzset"})
    edits.append({"kind": "crt_macro_collision", "count": count})

    # C has no :: global escape. An assembler alias refers to exactly the same
    # storage while leaving local variables and ordinary name lookup untouched.
    masked = mask_noncode(source)
    scoped = sorted(set(re.findall(rb"(?<![\w:])::([A-Za-z_]\w*)", masked)))
    for name in scoped:
        pattern = rb"(?m)^([^\n;{}]+\b" + name + rb"\s*;)"
        match = re.search(pattern, mask_noncode(source))
        if not match:
            raise ValueError("No global declaration for ::" + name.decode())
        alias = b"sr_server_global_" + name
        spans = list(re.finditer(rb"(?<![\w:])::" + name + rb"\b", mask_noncode(source)))
        for span in reversed(spans):
            source = source[:span.start()] + alias + source[span.end():]
        edits.append({"kind": "global_scope_alias", "name": name.decode(), "count": len(spans)})
    return source, edits, bindings


def finish(source, report, bindings):
    from prepare_rebuild import apply_renames, mask_noncode
    # Calls in the original import thunks now use the actual CRT/Win32 API,
    # with its native header signature, not an integer pretending to be callable.
    source, count = apply_renames(source, {alias: name[6:] for name, alias in bindings.items()})
    report["server_edits"].append({"kind": "native_import_calls", "count": count})
    source, count = apply_renames(source, {
        "qmemcpy": "memcpy", "fsqrt": "sqrt", "crt_at_quick_exit": "_crt_at_quick_exit"})
    report["server_edits"].append({"kind": "native_runtime_helpers", "count": count})
    for edit in report["server_edits"]:
        if edit["kind"] != "global_scope_alias":
            continue
        name = edit["name"].encode()
        match = re.search(rb"(?m)^([^\n;{}]+\b" + name + rb"\s*;)", mask_noncode(source))
        if not match:
            raise ValueError("Global declaration lost: " + name.decode())
        declaration = (b'\nextern __typeof__(' + name + b') sr_server_global_' + name
                       + b' __asm__("' + name + b'");')
        source = source[:match.end()] + declaration + source[match.end():]
    source, fixes = fix_expressions(source)
    report["server_edits"].extend(fixes)
    report["extern_objects"] = {k: v for k, v in report["extern_objects"].items()
                                if "unk_16E18CA40" not in k and "unk_140585570" not in k}
    report["data_objects"] = [name for name in report["data_objects"]
                              if name not in ("sr_mem_140000000", "sr_mem_14000003c")]
    return source


def fix_expressions(source):
    from prepare_rebuild import (Parser, Language, tree_sitter_c, nodes,
                                 enclosing_function_start, declarator_identifier,
                                 mask_noncode)
    parser = Parser(Language(tree_sitter_c.language()))
    tree = parser.parse(source)
    line_ends = [index for index, value in enumerate(source) if value == 10]
    types = {}
    edits = []

    def text(node):
        return source[node.start_byte:node.end_byte].decode() if node is not None else ""

    for node in nodes(tree.root_node):
        if node.type not in ("declaration", "parameter_declaration"):
            continue
        decl = node.child_by_field_name("declarator")
        name = declarator_identifier(decl, source)
        if name:
            kind_str = text(node.child_by_field_name("type"))
            if "*" in text(decl) or "[" in text(decl):
                kind_str += "*"
            types[(enclosing_function_start(node), name)] = kind_str

    def kind(node, scope):
        if node is None:
            return ""
        if node.type == "identifier":
            name = text(node)
            fallback = "_UNKNOWN" if name.startswith("unk_") else "char*" if name.startswith("byte_") else ""
            return types.get((scope, name), types.get((0, name), fallback))
        if node.type == "parenthesized_expression":
            return kind(node.named_children[0], scope) if node.named_children else ""
        if node.type == "cast_expression":
            return text(node.child_by_field_name("type"))
        if node.type == "pointer_expression":
            arg = kind(node.child_by_field_name("argument"), scope)
            return arg + "*" if text(node).lstrip().startswith("&") else arg.rstrip(" *")
        if node.type == "subscript_expression":
            base = node.child_by_field_name("argument")
            if text(base).startswith("SR_VEC_"):
                return "unsigned int" if ", u32)" in text(base) else ""
            return kind(base, scope).rstrip(" *")
        if node.type == "call_expression" and text(node.child_by_field_name("function")).startswith("_mm_"):
            name = text(node.child_by_field_name("function"))
            if name.endswith("si128") or name.endswith("_epi32") or name.endswith("_epi64"):
                return "__m128i"
            if name.endswith("_ps"):
                return "__m128"
        if node.type == "update_expression":
            return kind(node.child_by_field_name("argument"), scope)
        if node.type == "binary_expression":
            a = kind(node.child_by_field_name("left"), scope)
            b = kind(node.child_by_field_name("right"), scope)
            return a if "*" in a else b if "*" in b else ""
        return ""

    def edit(node, replacement, why):
        edits.append({"start": node.start_byte, "end": node.end_byte,
                      "replacement": replacement, "kind": why,
                      "line": bisect_right(line_ends, node.start_byte) + 1})

    for node in nodes(tree.root_node):
        scope = enclosing_function_start(node)
        if (node.type == "binary_expression"
                and text(node.child_by_field_name("operator")) == "*"
                and text(node.child_by_field_name("left")).strip() == "(__m128)"):
            # External typedefs leave this cast/dereference ambiguous to the
            # grammar; the operand's pointer type establishes a scalar load.
            value = node.child_by_field_name("right")
            if re.fullmatch(r"\s*(?:unsigned\s+int|uint32_t|_DWORD)\s*\*", kind(value, scope)):
                edit(node, "_mm_castsi128_ps(_mm_cvtsi32_si128((int)*(%s)))" % text(value), "scalar_load_movd")
        elif node.type == "cast_expression" and text(node.child_by_field_name("type")) == "__m128":
            value = node.child_by_field_name("value")
            if kind(value, scope).strip() in ("unsigned int", "uint32_t", "_DWORD"):
                edit(node, "_mm_castsi128_ps(_mm_cvtsi32_si128((int)(%s)))" % text(value), "scalar_movd")
        elif node.type == "assignment_expression":
            left, right = node.child_by_field_name("left"), node.child_by_field_name("right")
            if kind(left, scope) == "_OWORD" and kind(right, scope) in ("__m128", "__m128i"):
                edit(right, "SR_SERVER_BITS128(%s)" % text(right), "oword_bit_copy")
            if text(left) == "unk_16E18CA40" and not text(right).startswith("(float)"):
                edit(left, "(*(uint32_t *)&unk_16E18CA40)", "physics_float_bit_store")
        elif node.type == "cast_expression" and text(node.child_by_field_name("type")) == "struct _FILETIME":
            edit(node, "sr_server_filetime(%s)" % text(node.child_by_field_name("value")), "filetime_bits")

    def additive(node):
        return node.type == "binary_expression" and text(node.child_by_field_name("operator")) in ("+", "-")

    def leaves(node):
        if additive(node):
            return leaves(node.child_by_field_name("left")) + leaves(node.child_by_field_name("right"))
        return [node]

    for node in nodes(tree.root_node):
        if not additive(node) or (node.parent and additive(node.parent)):
            continue
        scope = enclosing_function_start(node)
        parts = leaves(node)
        pointers = [p for p in parts if "*" in kind(p, scope)]
        if len(pointers) < 2:
            continue
        if not all(re.fullmatch(r"\s*(?:unsigned\s+)?char\s*\*|uint8\s*\*|_BYTE\s*\*|_UNKNOWN\s*\*", kind(p, scope)) for p in pointers):
            continue
        difference = len(parts) == 2 and text(node.child_by_field_name("operator")) == "-"
        for p in pointers:
            edit(p, "((%s)(%s))" % ("char *" if difference else "uintptr_t", text(p)), "byte_address_arithmetic")

    replacements = {
        "NtCurrentTeb()->NtTib": "(*(NT_TIB *)NtCurrentTeb())",
        "v8->_ptr": "(*(char **)v8)",
        "*((unsigned __int8 *)&v8->_ptr + (char *)(v17 + 1268) - v18)": "*(unsigned char *)((uintptr_t)v8 + (uintptr_t)(v17 + 1268) - (uintptr_t)v18)",
        "timeout = (struct timeval)3LL;": "timeout = (struct timeval){3, 0};",
        "SystemTimeAsFileTime = 0;": "SystemTimeAsFileTime = (struct _FILETIME){0, 0};",
        "_UNKNOWN unk_191536D68;": "__m128i unk_191536D68;",
        "_UNKNOWN unk_191536DAC;": "__m128i unk_191536DAC;",
        "COERCE_DOUBLE(1040187392)": "COERCE_DOUBLE(UINT64_C(1040187392))",
        "COERCE_DOUBLE(1044381696)": "COERCE_DOUBLE(UINT64_C(1044381696))",
        # Both targets are INT3 padding after a fast-fail call, not functions.
        "JUMPOUT(0x1400EFC7DLL);": '__asm__ volatile("int3"); __builtin_unreachable();',
        "JUMPOUT(0x1400F1F5ELL);": '__asm__ volatile("int3"); __builtin_unreachable();',
        "return _sse4_sin2_sr();": "return _sse4_sin2_sr(a1);",
        "return _sse2_sin2_sr();": "return _sse2_sin2_sr(a1);",
        "return _sse4_sinf4_sr();": "return _sse4_sinf4_sr(a1, a2, a3);",
        "return _sse2_sinf4_sr();": "return _sse2_sinf4_sr(a1, a2, a3);",
        "void            sub_1400E3430(__int64 a1, __int64 a2, int *a3);": "void            sub_1400E3430(void);",
        "void            sub_1400E3430(__int64 a1, __int64 a2, int *a3)\n{": "void            sub_1400E3430(void)\n{\n  __int64 a1 = 0, a2 = 0;\n  int *a3 = NULL;",
        "__int64            sub_14009C7C0(__int64 a1);": "__int64            sub_14009C7C0(void);",
        "__int64            sub_14009C7C0(__int64 a1)\n{": "__int64            sub_14009C7C0(void)\n{\n  __int64 a1 = 0;",
    }
    masked = mask_noncode(source)
    for before, after in replacements.items():
        pattern = re.escape(before.encode()).replace(re.escape(bytes([10])), rb"\r?\n")
        for match in re.finditer(pattern, masked):
            edits.append({"start": match.start(), "end": match.end(), "replacement": after,
                          "kind": "reviewed_representation",
                          "line": bisect_right(line_ends, match.start()) + 1})

    # Reviewed Windows routines 0x140046C40 and 0x1400EFA24 explicitly zero
    # ECX before every CPU query. Hex-Rays dropped those register inputs.
    cpuid = '__asm__ volatile("cpuid" : "+a"(_RAX), "+b"(_RBX), "+c"(_RCX), "+d"(_RDX));'
    xgetbv = '__asm__ volatile(".byte 0x0f, 0x01, 0xd0" : "=a"(_RAX), "=d"(_RDX) : "c"(_RCX));'
    for node in nodes(tree.root_node):
        if node.type != "function_definition":
            continue
        name = declarator_identifier(node.child_by_field_name("declarator"), source)
        if name == "_scrt_is_nonwritable_in_current_image":
            body = node.child_by_field_name("body")
            edit(body, "{\n  return sr_server_current_image_readonly((uintptr_t)a1);\n}", "reviewed_pe_section_check")
            continue
        if name not in ("sub_140046C40", "_isa_available_init"):
            continue
        body = node.child_by_field_name("body")
        original = text(body)
        expected = 2 if name == "sub_140046C40" else 3
        if original.count(cpuid) != expected:
            raise ValueError("CPU-query body changed: " + name)
        fixed = original.replace(cpuid, "sr_server_cpuid(_RAX, 0, &_RAX, &_RBX, &_RCX, &_RDX);")
        fixed = fixed.replace(xgetbv, "sr_server_xgetbv0(&_RAX, &_RDX);")
        fixed = fixed[:1] + "\n  uint32_t _RAX, _RBX, _RCX, _RDX;\n" + fixed[1:]
        edit(body, fixed, "reviewed_cpu_query_registers")

    accepted = []
    for item in sorted(edits, key=lambda e: (e["start"], -e["end"])):
        if accepted and item["start"] < accepted[-1]["end"]:
            continue
        accepted.append(item)
    for item in reversed(accepted):
        source = source[:item["start"]] + item["replacement"].encode() + source[item["end"]:]
    return source, accepted
