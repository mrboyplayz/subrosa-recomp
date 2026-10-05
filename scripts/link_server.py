"""Link the dedicated object without supplying invented data or no-op stubs.

This diagnoses link readiness only. A linked file is never launched by this tool.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re
import subprocess


def digest(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--object-report", type=Path, default=Path("reports/server-object/dedicated-prepared.json"))
    parser.add_argument("--output", type=Path, default=Path("reports/server-link"))
    args = parser.parse_args()
    report = json.loads(args.object_report.read_text(encoding="utf-8"))
    if report["exit_code"] != 0 or report["syntax_check_only"] or not report.get("object_sha256"):
        parser.error("A successful, hash-recorded native object build is required")
    obj = Path(report["object_file"])
    if digest(obj) != report["object_sha256"]:
        parser.error("Object differs from the recorded build")
    if any(digest(path) != expected for path, expected in report["local_input_sha256"].items()):
        parser.error("Source or local headers changed; rebuild the object first")
    output = args.output.resolve()
    output.mkdir(parents=True, exist_ok=True)
    executable = output / "server-link-probe.exe"
    command = [report["command"][0], str(obj), "-o", str(executable), "-lws2_32", "-lkernel32", "-lm"]
    result = subprocess.run(command, capture_output=True, text=True, encoding="utf-8", errors="replace")
    (output / "link.stderr.txt").write_text(result.stderr, encoding="utf-8")
    unresolved = sorted(set(re.findall(r"undefined reference to [`']([^'\n]+)'", result.stderr)))
    duplicates = sorted(set(re.findall(r"multiple definition of [`']([^'\n]+)'", result.stderr)))
    details = {"command": command, "exit_code": result.returncode,
               "object_sha256": report["object_sha256"], "unresolved_symbols": unresolved,
               "duplicate_symbols": duplicates, "executed": False,
               "executable": str(executable) if result.returncode == 0 else None}
    (output / "link.json").write_text(json.dumps(details, indent=2) + "\n", encoding="utf-8")
    summary = ["# Dedicated Server Link Check", "", "Compiler exit code: " + str(result.returncode), "",
               "No missing-data substitutes or function stubs were supplied. The output is never launched.", "",
               "A successful link does not establish working startup, correct global aliasing, or playable networking.", "",
               "## Unresolved Symbols", ""]
    summary += ["- `" + name + "`" for name in unresolved] or ["None."]
    summary += ["", "## Duplicate Symbols", ""]
    summary += ["- `" + name + "`" for name in duplicates] or ["None."]
    (output / "README.md").write_text("\n".join(summary) + "\n", encoding="utf-8")
    print("Link exit %d: %d unresolved symbols, %d duplicate symbols; not executed." %
          (result.returncode, len(unresolved), len(duplicates)))
    return result.returncode


if __name__ == "__main__":
    raise SystemExit(main())
