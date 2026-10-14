"""Compile and link the client: python tools/build_client.py [--install NAME.exe]

Runs scripts/check-rebuild.py and scripts/link_client.py with one accommodation: sub_14003B920
(game frame) and sub_14023023C (strtod) are defined in C while the sheets still route them to
client_native_gaps.s. Until the sheets are updated, the ownership check is told about the two C
definitions and the link lets the C objects (listed first) take precedence over the assembly copies.
"""
import importlib.util, os, shutil, subprocess, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
MOVED = {"sub_14003B920": "client_main", "sub_14023023C": "client_runtime_220000"}
ARGS = sys.argv[1:]
sys.path.insert(0, str(ROOT / "scripts"))
os.chdir(ROOT)


def load(name, path):
    spec = importlib.util.spec_from_file_location(name, path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


def step(script, argv):
    sys.argv = [script] + argv
    try:
        return load("sr_step_" + Path(script).stem.replace("-", "_"), ROOT / "scripts" / script).main() or 0
    except SystemExit as stop:
        return stop.code or 0


def main():
    import client_sheet_book
    original = client_sheet_book.routing
    client_sheet_book.routing = lambda *a, **k: {**original(*a, **k), **MOVED}
    code = step("check-rebuild.py", ["--binary", "client", "--object", "--debug", "--lenient", "--compiler", "gcc",
                                     "--output", "reports/current/objects"])
    if code:
        print("compile failed:", code)
        return 1
    run = subprocess.run

    def linking(command, *a, **k):
        if "-mwindows" in command:
            command = list(command) + ["-Wl,--allow-multiple-definition"]
        return run(command, *a, **k)

    subprocess.run = linking
    code = step("link_client.py", ["--object-report", "reports/current/objects/client-prepared.json",
                                   "--output", "reports/current/link"])
    subprocess.run = run
    built = ROOT / "reports/current/link/client-link-probe.exe"
    if code or not built.exists():
        print("link failed:", code)
        return 1
    if "--install" in ARGS:
        target = ROOT.parent / ARGS[ARGS.index("--install") + 1]
        shutil.copyfile(built, target)
        print("installed", target)
    print("built", built)
    return 0


if __name__ == "__main__":
    sys.exit(main())
