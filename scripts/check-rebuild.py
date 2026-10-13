"""Compile-check exports and retain GCC and assembler diagnostics."""

import argparse
from collections import Counter
import hashlib
import json
import re
from pathlib import Path
import shutil
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor


def parse_diagnostics(stderr):
    """Keep GCC SARIF and GNU assembler diagnostics from the same invocation."""
    stripped = stderr.lstrip()
    if not stripped:
        return {"runs": []}, "", []
    sarif, end = json.JSONDecoder().raw_decode(stripped)
    assembler = stripped[end:].strip()
    # -save-temps runs preprocessing separately. Each GCC stage can emit its
    # own SARIF document before the assembler's plain text messages.
    while assembler.startswith("{"):
        following, end = json.JSONDecoder().raw_decode(assembler)
        sarif.setdefault("runs", []).extend(following.get("runs", []))
        assembler = assembler[end:].strip()
    diagnostics = []
    for line in assembler.splitlines():
        match = re.match(r"^(.*):(\d+): (?:(\d+): )?(Error|Warning|Fatal error): (.*)$", line)
        if match:
            path, row, column, kind, message = match.groups()
            diagnostics.append({"kind": kind.lower(), "stage": "assembler",
                                "message": message, "locations": [{"caret": {
                                    "file": path, "line": int(row),
                                    "column": int(column) if column else None}}]})
        elif line and not line.endswith(": Assembler messages:"):
            # Unknown tool output must remain visible and cannot imply success.
            diagnostics.append({"kind": "error", "stage": "toolchain",
                                "message": line, "locations": []})
    return sarif, assembler, diagnostics


def check(compiler, source, header, destination, lenient=False, object_build=False, include_dirs=(), debug_info=False, extra_flags=()):
    before = hashlib.sha256(source.read_bytes()).hexdigest()
    local_inputs = [source]
    if header:
        local_inputs += list(header.parent.glob("*.h")) + list(source.parent.glob("*.h"))
    for directory in include_dirs:
        local_inputs += list(Path(directory).glob("*.h"))
    input_hashes = {str(path.resolve()): hashlib.sha256(path.read_bytes()).hexdigest()
                    for path in local_inputs}
    command = [compiler, "-x", "c", "-std=gnu11", "-fms-extensions",
               "-fno-strict-aliasing", "-fdiagnostics-format=sarif-stderr", "-fmax-errors=0",
               "-I", str(source.parent)]
    for directory in include_dirs:command += ["-I",str(directory)]
    if debug_info:command += ["-g"]
    command += list(extra_flags)
    if object_build:
        command += ["-c", "-O0", "-msse4.2", "-mcmodel=large", "-Wa,-mbig-obj", "-save-temps=obj",
                    "-o", str(destination.with_suffix(".obj"))]
    else:
        command += ["-fsyntax-only"]
    # Hex-Rays type inference stores pointers through inferred-integer views;
    # modern GCC promotes those conversions to errors by default. In lenient
    # mode they are downgraded to warnings (still present in the SARIF) so the
    # remaining structural errors stay visible. Nothing is silently dropped.
    downgrades = []
    if lenient:
        downgrades = ["-Wno-error=int-conversion",
                      "-Wno-error=incompatible-pointer-types",
                      "-Wno-error=pointer-to-int-cast",
                      "-Wno-error=int-to-pointer-cast",
                      "-Wno-error=implicit-function-declaration",
                      "-Wno-error=return-mismatch",
                      "-Wno-error=implicit-int"]
        command += downgrades
    if header:
        command += ["-I", str(header.parent), "-include", str(header)]
    command.append(str(source))
    result = subprocess.run(command, capture_output=True, text=True, encoding="utf-8", errors="replace")
    if hashlib.sha256(source.read_bytes()).hexdigest() != before:
        raise RuntimeError("Export changed during compilation; repeat the check")
    if any(hashlib.sha256(Path(path).read_bytes()).hexdigest() != digest
           for path, digest in input_hashes.items()):
        raise RuntimeError("A local build input changed during compilation; repeat the check")
    destination.with_suffix(".stderr.log").write_text(result.stderr, encoding="utf-8")
    if result.returncode != 0 and not result.stderr.strip():
        raise RuntimeError("Compiler failed without diagnostics; the source has not passed compilation")
    try:
        sarif, assembler, diagnostics = parse_diagnostics(result.stderr)
    except json.JSONDecodeError as exc:
        raise RuntimeError("Compiler did not return SARIF diagnostics; inspect " + str(destination.with_suffix(".stderr.log"))) from exc
    destination.with_suffix(".sarif").write_text(json.dumps(sarif) + "\n", encoding="utf-8")
    destination.with_suffix(".assembler.log").write_text(assembler + "\n", encoding="utf-8")
    for run in sarif.get("runs", []):
        for item in run.get("results", []):
            locations = []
            for location in item.get("locations", []):
                physical = location.get("physicalLocation", {})
                locations.append({"caret": {
                    "file": physical.get("artifactLocation", {}).get("uri"),
                    "line": physical.get("region", {}).get("startLine"),
                    "column": physical.get("region", {}).get("startColumn"),
                }})
            diagnostics.append({"kind": item.get("level", "warning"),
                                "stage": "compiler",
                                "message": item.get("message", {}).get("text", ""),
                                "locations": locations})
    report = {
        "source": str(source), "source_sha256": before,
        "local_input_sha256": input_hashes,
        "compatibility_header": str(header) if header else None,
        "command": command, "exit_code": result.returncode,
        "error_limit": 0,
        "syntax_check_only": not object_build,
        "assembly_file": str(destination.with_suffix(".s"))
            if object_build and destination.with_suffix(".s").exists() else None,
        "assembly_sha256": hashlib.sha256(destination.with_suffix(".s").read_bytes()).hexdigest()
            if object_build and destination.with_suffix(".s").exists() else None,
        "object_file": str(destination.with_suffix(".obj")) if object_build and result.returncode == 0 else None,
        "object_sha256": hashlib.sha256(destination.with_suffix(".obj").read_bytes()).hexdigest()
            if object_build and result.returncode == 0 else None,
        "lenient": lenient,
        "conversion_downgrades": downgrades,
        "diagnostic_counts": dict(Counter(item.get("kind", "unknown") for item in diagnostics)),
        "diagnostic_counts_by_stage": {
            stage: dict(Counter(item["kind"] for item in diagnostics if item.get("stage") == stage))
            for stage in sorted({item.get("stage", "compiler") for item in diagnostics})},
        "diagnostics": diagnostics,
    }
    destination.with_suffix(".json").write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    return report


ENGINE_FLAGS = ("-x", "c", "-std=gnu11", "-O2", "-msse4.2", "-mcmodel=large", "-fno-strict-aliasing",
                "-ffp-contract=off", "-Wall", "-Wextra")


def compile_engine(compiler, engine_dir, output, debug_info=False):
    """Compile the clean engine modules in src/engine.

    These are ordinary C files, not decompiler output: they are built optimized,
    without the compatibility header, and are outside the client ownership
    inventory. Returns (object paths, hashed inputs, diagnostics, failed).
    """
    output.mkdir(parents=True, exist_ok=True)
    # Item types live in their own files under items/ (one per type).
    sources = sorted(engine_dir.glob("*.c")) + sorted(engine_dir.glob("items/*.c"))
    inputs = {str(path.resolve()): hashlib.sha256(path.read_bytes()).hexdigest()
              for path in sources + sorted(engine_dir.glob("*.h")) + sorted(engine_dir.glob("items/*.h"))}
    objects, diagnostics, failed = [], [], False
    for source in sources:
        target = output / (source.stem + ".obj")
        command = [compiler, *ENGINE_FLAGS, *(("-g",) if debug_info else ()),
                   "-c", str(source), "-o", str(target)]
        result = subprocess.run(command, capture_output=True, text=True, encoding="utf-8", errors="replace")
        (output / (source.stem + ".stderr.log")).write_text(result.stderr, encoding="utf-8")
        if result.returncode != 0:
            failed = True
            diagnostics.append({"kind": "error", "stage": "engine",
                                "message": source.name + ": " + result.stderr, "locations": []})
        else:
            objects.append(str(target))
            if result.stderr.strip():
                diagnostics.append({"kind": "warning", "stage": "engine",
                                    "message": source.name + ": " + result.stderr, "locations": []})
    return objects, inputs, diagnostics, failed



def check_split(compiler, source, header, destination, lenient=False, object_build=False, debug_info=False):
    from client_sources import load_modules
    from client_sheet_book import preflight,routing
    preflight()
    manifest=load_modules(source.parent)
    if {f['name']:f['module'][:-2] for f in manifest['functions']}!=routing():
        raise ValueError('Maintained C ownership differs from the canonical plan')
    units=destination.parent/'units';units.mkdir(parents=True,exist_ok=True)
    def compile_unit(unit):
        path=Path(unit['path'])
        return check(compiler,path,header,units/path.stem,lenient,object_build,(source.parent,),debug_info=debug_info,
                     extra_flags=("-DSR_CLIENT_DEBUG_CONSOLE",))
    with ThreadPoolExecutor(max_workers=4) as executor:
        reports=list(executor.map(compile_unit,manifest['translation_units']))
    diagnostics=[d for report in reports for d in report['diagnostics']]
    raw_diagnostic_counts=dict(Counter(d['kind'] for d in diagnostics))
    diagnostics=list({json.dumps(d,sort_keys=True):d for d in diagnostics}.values())
    failed=any(r['exit_code'] for r in reports)
    engine_objects,engine_inputs=[],{}
    engine_dir=source.parent.parent/'engine'
    if object_build and engine_dir.is_dir():
        engine_objects,engine_inputs,engine_diagnostics,engine_failed=compile_engine(
            compiler,engine_dir,destination.parent/'engine',debug_info)
        diagnostics+=engine_diagnostics
        failed=failed or engine_failed
    command=[compiler,'-r','-nostdlib']
    if object_build and not failed:
        command += [r['object_file'] for r in reports]+engine_objects+['-o',str(destination.with_suffix('.obj'))]
        result=subprocess.run(command,capture_output=True,text=True,encoding='utf-8',errors='replace')
        destination.with_suffix('.aggregate.log').write_text(result.stderr,encoding='utf-8')
        failed=result.returncode!=0
        if failed:diagnostics.append({'kind':'error','stage':'aggregate','message':result.stderr,'locations':[]})
    inputs={p:h for report in reports for p,h in report['local_input_sha256'].items()}
    inputs.update(engine_inputs)
    manifest_path=source
    inputs[str(manifest_path.resolve())]=hashlib.sha256(manifest_path.read_bytes()).hexdigest()
    report={'source':str(source),'source_sha256':inputs[str(source.resolve())],
            'local_input_sha256':inputs,'compatibility_header':str(header),
            'command':command,'exit_code':int(failed),'syntax_check_only':not object_build,
            'object_file':str(destination.with_suffix('.obj')) if object_build and not failed else None,
            'object_sha256':hashlib.sha256(destination.with_suffix('.obj').read_bytes()).hexdigest() if object_build and not failed else None,
            'assembly_file':None,'assembly_sha256':None,'lenient':lenient,'error_limit':0,
            'conversion_downgrades':reports[0]['conversion_downgrades'],
            'diagnostic_counts':dict(Counter(d['kind'] for d in diagnostics)),
            'raw_diagnostic_counts':raw_diagnostic_counts,
            'diagnostic_counts_by_stage':{},'diagnostics':diagnostics,
            'build_layout':'multiple_translation_units','translation_unit_count':len(reports),
            'unit_reports':[str(units/Path(u['path']).stem)+'.json' for u in manifest['translation_units']],
            'function_count':manifest['function_count'],'static_linkage_promotions':manifest['static_linkage_promotions'],
            'engine_objects':engine_objects}
    destination.with_suffix('.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    return report


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--compiler", default=shutil.which("gcc"))
    parser.add_argument("--binary", choices=("client", "dedicated", "all"), default="all")
    parser.add_argument("--prepared", action="store_true")
    parser.add_argument("--object", action="store_true", help="compile a native object without linking an executable")
    parser.add_argument("--debug", action="store_true", help="include source lines and frame metadata for crash recovery")
    parser.add_argument("--lenient", action="store_true",
                        help="downgrade Hex-Rays pointer/integer conversion artifacts to warnings")
    parser.add_argument("--output", type=Path, default=Path("reports/rebuild"))
    args = parser.parse_args()
    if not args.compiler:
        parser.error("GCC was not found; pass --compiler with its executable path")
    project = Path(__file__).resolve().parent.parent
    destination = args.output.resolve()
    destination.mkdir(parents=True, exist_ok=True)
    summary = ["# Recompilation Check", "", "Native object compilation; no executable is linked." if args.object else
               "These are C syntax checks, not a successful game build.", ""]
    if args.lenient:
        summary += ["Lenient mode: Hex-Rays pointer/integer conversion artifacts are downgraded "
                    "to warnings. GCC diagnostics remain in SARIF; assembler messages are "
                    "retained in the assembler log and structured report.", ""]
    failed = False
    for target, stem in (("client", "subrosa"), ("dedicated", "subrosadedicated")):
        if args.binary not in (target, "all"):
            continue
        source = project / "exports" / target / (stem + ".c")
        manifest = json.loads((source.parent / "manifest.json").read_text(encoding="utf-8"))
        if target == 'client':
            source = project / 'src/client/manifest.json'
        elif args.prepared:
            source = project / "work/rebuild" / target / (stem + ".c")
        if manifest["state"] != "complete":
            raise RuntimeError(target + " export is still " + manifest["state"])
        modes = (("prepared", project / "src/rebuild/export_compat.h"),) if args.prepared or target=='client' else (
            ("raw", None), ("compat", project / "src/rebuild/export_compat.h"))
        for mode, header in modes:
            compile_check=check_split if target=='client' else check
            report = compile_check(args.compiler, source, header, destination / (target + "-" + mode),
                           lenient=args.lenient, object_build=args.object, debug_info=args.debug)
            failed |= report["exit_code"] != 0
            summary += ["## " + target + " / " + mode, "",
                        "Compiler exit code: " + str(report["exit_code"]), "",
                        "Diagnostic counts: " + json.dumps(report["diagnostic_counts"]), "",
                        "No error cap. Diagnostics can include cascading errors; "
                        "these counts are not independent defects.", ""]
            errors = [item for item in report["diagnostics"] if item.get("kind") in ("error", "fatal error")]
            for item in errors[:8]:
                locations = item.get("locations", [])
                caret = locations[0].get("caret", {}) if locations else {}
                summary.append("- Line %s: %s" % (caret.get("line", "?"), item["message"]))
            summary += [""]
            print("%s %s: exit %d, %s" % (target, mode, report["exit_code"], report["diagnostic_counts"]))
    (destination / "README.md").write_text("\n".join(summary), encoding="utf-8")
    print("Report: " + str(destination / "README.md"))
    return 1 if failed else 0


if __name__ == "__main__":
    sys.exit(main())
