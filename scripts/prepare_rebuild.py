"""Produce a build copy with conservative, syntax-tree-based SIMD field edits."""

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


def translate(source, functions=None):
    parser = Parser(Language(tree_sitter_c.language()))
    tree = parser.parse(source)
    line_ends = [index for index, value in enumerate(source) if value == 10]
    candidates = {int(item["address"], 16): item["name"] for item in (functions or [])
                  if re.fullmatch(r"[A-Za-z_][A-Za-z_0-9]*", item["name"])}
    declared = set()
    declaration_edits = []
    forward_declarations = {}
    for node in nodes(tree.root_node):
        if node.type != "function_declarator":
            continue
        declarator = node.child_by_field_name("declarator")
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
        while declarator is not None and declarator.type != "identifier":
            declarator = declarator.child_by_field_name("declarator")
        if declarator is not None:
            declared.add(source[declarator.start_byte:declarator.end_byte].decode())
    bindings = {address: name for address, name in candidates.items() if name in declared}
    edits, skipped = declaration_edits, []
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
    return b"".join(fragments), {"edits": accepted, "skipped": skipped,
                                 "forward_declarations": list(forward_declarations.values()),
                                 "input_has_parse_errors": tree.root_node.has_error}


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
        prepared, report = translate(source, manifest["functions"])
        if report["forward_declarations"]:
            prepared = b'#include "recovered_forward.h"\n' + prepared
        report.update(input_sha256=hashlib.sha256(source).hexdigest(),
                      output_sha256=hashlib.sha256(prepared).hexdigest(),
                      source=str(original / (stem + ".c")))
        destination = PROJECT / "work/rebuild" / target
        destination.mkdir(parents=True, exist_ok=True)
        (destination / (stem + ".c")).write_bytes(prepared)
        (destination / "recovered_forward.h").write_text(
            "/* Declarations copied from address-resolved function definitions. */\n"
            + "\n".join(report["forward_declarations"]) + "\n", encoding="utf-8")
        (destination / "preparation.json").write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
        shutil.copyfile(original / "defs.h", destination / "defs.h")
        print("%s: %d SIMD edits, %d resolved function calls, %d function declarations, %d retained for review" %
              (target, sum(e["kind"] == "simd" for e in report["edits"]),
               sum(e["kind"] == "function_binding" for e in report["edits"]),
               sum(e["kind"] == "function_definition_binding" for e in report["edits"]),
               len(report["skipped"])), flush=True)


if __name__ == "__main__":
    main()
