"""Check mutations against a passing baseline, using private source/object copies.

python tools/native-compare/mutate_snapshot.py SUITE SOURCE MUTATIONS
    --out COMPARISON_DIR --recomp EXECUTABLE_COPY --cases BASELINE_CASES

SOURCE may be in a source snapshot. No live source, baseline object, executable
or comparison output is overwritten. run.sh must have run with the same cases.
"""
import argparse
import hashlib
import json
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
HERE = ROOT / "tools/native-compare"
FLAGS = ("-std=gnu11 -mabi=ms -O2 -g -msse4.2 -mcmodel=large "
         "-fno-strict-aliasing -ffp-contract=off -fno-pie -fno-stack-protector -Wall -Wextra").split()
LDFLAGS = ("-Wl,--image-base=0x10000000 -Wl,--disable-dynamicbase "
           "-D__USE_MINGW_ANSI_STDIO=1").split()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    for name in ("suite", "source", "mutations"):
        parser.add_argument(name)
    parser.add_argument("--out", type=Path, required=True)
    parser.add_argument("--recomp", type=Path, required=True)
    parser.add_argument("--cases", type=int, required=True)
    parser.add_argument("--label", help="Separate output directory for concurrent mutation sets")
    args = parser.parse_args()
    out, source = args.out.resolve(), Path(args.source).resolve()
    recomp = args.recomp.resolve()
    native = (out / (args.suite + "_native.txt")).read_bytes()
    baseline = (out / (args.suite + "_engine.txt")).read_bytes()
    if not native or native != baseline:
        parser.error("baseline is empty or differs; mutations cannot establish coverage")
    original_bytes = source.read_bytes()
    original = original_bytes.decode("utf-8")
    pairs = [tuple(s.strip("\n") for s in block.split("\n====\n"))
             for block in Path(args.mutations).read_text(encoding="utf-8").split("\n----\n")]
    objects = sorted(p for p in out.glob("*.o") if p.name != source.stem + ".o")
    if not (out / (source.stem + ".o")).exists():
        parser.error("source object's baseline is missing")
    work = out / "mut" / (args.label or args.suite)
    work.mkdir(parents=True, exist_ok=True)
    results = []
    for i, pair in enumerate(pairs):
        if len(pair) != 2 or original.count(pair[0]) != 1:
            parser.error("mutation must replace exactly one block: " + pair[0])
        find, replacement = pair
        mutated = work / (source.stem + ".c")
        obj, program = work / (source.stem + ".o"), work / "engine.exe"
        mutated.write_text(original.replace(find, replacement), encoding="utf-8", newline="\n")
        commands = [
            ["gcc", *FLAGS, "-I", str(source.parent), "-c", str(mutated), "-o", str(obj)],
            ["gcc", "-O1", "-g", "-fno-pie", *LDFLAGS, "-I", str(HERE), "-DENGINE",
             "-o", str(program), str(HERE / ("t_" + args.suite + ".c")),
             *map(str, objects), str(obj), str(out / "engine.ld"), "-lm"]]
        verdict = None
        for command in commands:
            built = subprocess.run(command, capture_output=True)
            if built.returncode:
                verdict = "does not build"
                (work / ("build-error-%d.txt" % i)).write_bytes(built.stdout + built.stderr)
                break
        if verdict is None:
            try:
                run = subprocess.run([str(program), str(recomp), str(out / "recomp.map"), str(args.cases)],
                                     capture_output=True, timeout=60)
                verdict = ("caught (fault)" if run.returncode == 99 and b"fault" in run.stderr
                           else "run failed" if run.returncode else "caught" if run.stdout != native else "MISSED")
            except subprocess.TimeoutExpired:
                verdict = "caught (timeout)"
        results.append({"find": find, "replacement": replacement, "verdict": verdict})
        print(verdict, "|", find.splitlines()[0].strip(), flush=True)
    if source.read_bytes() != original_bytes:
        parser.error("source changed during mutation check; inspect concurrent work")
    missed = sum(not r["verdict"].startswith("caught") for r in results)
    (work / "results.json").write_text(json.dumps({"suite": args.suite, "cases": args.cases,
                                                  "source_sha256": hashlib.sha256(original_bytes).hexdigest(),
                                                  "fixture_sha256": hashlib.sha256((HERE / ("t_" + args.suite + ".c")).read_bytes()).hexdigest(),
                                                  "baseline_sha256": hashlib.sha256(native).hexdigest(),
                                                  "executable_sha256": hashlib.sha256(recomp.read_bytes()).hexdigest(),
                                                  "missed": missed, "mutations": results}, indent=2))
    print("%d mutations, %d missed" % (len(results), missed), flush=True)
    return bool(missed)


if __name__ == "__main__":
    raise SystemExit(main())
