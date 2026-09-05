"""Compile-check the raw exports and retain structured GCC diagnostics."""

import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import sys


def check(compiler, source, header, destination, lenient=False):
    before = hashlib.sha256(source.read_bytes()).hexdigest()
    command = [compiler, "-x", "c", "-std=gnu11", "-fms-extensions", "-fsyntax-only",
               "-fno-strict-aliasing", "-fdiagnostics-format=sarif-stderr", "-fmax-errors=0",
               "-I", str(source.parent)]
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
        command += ["-include", str(header)]
    command.append(str(source))
    result = subprocess.run(command, capture_output=True, text=True, encoding="utf-8", errors="replace")
    if hashlib.sha256(source.read_bytes()).hexdigest() != before:
        raise RuntimeError("Export changed during compilation; repeat the check")
    destination.with_suffix(".sarif").write_text(result.stderr, encoding="utf-8")
    if result.returncode != 0 and not result.stderr.strip():
        raise RuntimeError("Compiler failed without diagnostics; the source has not passed compilation")
    try:
        sarif = json.loads(result.stderr) if result.stderr.strip() else {"runs": []}
    except json.JSONDecodeError as exc:
        raise RuntimeError("Compiler did not return SARIF diagnostics; inspect " + str(destination.with_suffix(".sarif"))) from exc
    diagnostics = []
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
                                "message": item.get("message", {}).get("text", ""),
                                "locations": locations})
    report = {
        "source": str(source), "source_sha256": before,
        "compatibility_header": str(header) if header else None,
        "command": command, "exit_code": result.returncode,
        "error_limit": 0,
        "syntax_check_only": True,
        "lenient": lenient,
        "conversion_downgrades": downgrades,
        "diagnostic_counts": dict(Counter(item.get("kind", "unknown") for item in diagnostics)),
        "diagnostics": diagnostics,
    }
    destination.with_suffix(".json").write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    return report


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--compiler", default=shutil.which("gcc"))
    parser.add_argument("--binary", choices=("client", "dedicated", "all"), default="all")
    parser.add_argument("--prepared", action="store_true")
    parser.add_argument("--lenient", action="store_true",
                        help="downgrade Hex-Rays pointer/integer conversion artifacts to warnings")
    parser.add_argument("--output", type=Path, default=Path("reports/rebuild"))
    args = parser.parse_args()
    if not args.compiler:
        parser.error("GCC was not found; pass --compiler with its executable path")
    project = Path(__file__).resolve().parent.parent
    destination = args.output.resolve()
    destination.mkdir(parents=True, exist_ok=True)
    summary = ["# Recompilation Check", "", "These are C syntax checks, not a successful game build.", ""]
    if args.lenient:
        summary += ["Lenient mode: Hex-Rays pointer/integer conversion artifacts are downgraded "
                    "to warnings; every diagnostic is still present in the SARIF.", ""]
    failed = False
    for target, stem in (("client", "subrosa"), ("dedicated", "subrosadedicated")):
        if args.binary not in (target, "all"):
            continue
        source = project / "exports" / target / (stem + ".c")
        manifest = json.loads((source.parent / "manifest.json").read_text(encoding="utf-8"))
        if args.prepared:
            source = project / "work/rebuild" / target / (stem + ".c")
        if manifest["state"] != "complete":
            raise RuntimeError(target + " export is still " + manifest["state"])
        modes = (("prepared", project / "src/rebuild/export_compat.h"),) if args.prepared else (
            ("raw", None), ("compat", project / "src/rebuild/export_compat.h"))
        for mode, header in modes:
            report = check(args.compiler, source, header, destination / (target + "-" + mode),
                           lenient=args.lenient)
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
