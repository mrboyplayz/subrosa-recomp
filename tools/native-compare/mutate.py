"""Mutation check: each mutation must make a suite differ from the original.

    python tools/native-compare/mutate.py <suite> <engine file> <mutations file> [--cases N]

The mutations file holds blocks separated by a line '====':
    a one-line label
    the exact text to replace (may span lines)
    ----
    the replacement
Each mutation is applied alone to a copy of src/engine in build/, never to
the live sources. Exit status is 0 only if every mutation was detected.
"""
import argparse
import re
import shutil
import subprocess
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
PROJECT = HERE.parent.parent


def parse(path):
    mutations = []
    for block in path.read_text(encoding='utf-8').split('\n====\n'):
        block = block.strip('\n')
        if not block:
            continue
        label, rest = block.split('\n', 1)
        old, new = re.split(r'\n----(?:\n|$)', rest, maxsplit=1)   # an empty replacement deletes
        mutations.append((label.strip(), old, new))
    return mutations


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('suite')
    parser.add_argument('file')
    parser.add_argument('mutations', type=Path)
    parser.add_argument('--cases', type=int, default=500)
    parser.add_argument('--select', help='comma-separated mutation numbers to run (default: all)')
    parser.add_argument('--timeout', type=int, default=120,
                        help='seconds per program run; a mutant that hangs counts as detected')
    args = parser.parse_args()
    source = PROJECT / 'src/engine'
    work = PROJECT / 'build/mutate' / args.suite
    mutation_root = (PROJECT / 'build/mutate').resolve()
    missed = []
    chosen = {int(x) for x in args.select.split(',')} if args.select else None
    for i, (label, old, new) in enumerate(parse(args.mutations)):
        if chosen is not None and i not in chosen:
            continue
        engine = work / 'engine'
        target_directory = engine.resolve()
        if target_directory == mutation_root or not target_directory.is_relative_to(mutation_root):
            raise SystemExit('mutation engine directory escapes build/mutate: ' + str(target_directory))
        if engine.exists():
            shutil.rmtree(engine)
        shutil.copytree(source, engine)
        target = engine / args.file
        text = target.read_text(encoding='utf-8')
        if text.count(old) != 1:
            print('%2d %-50s NOT APPLICABLE (text found %d times)' % (i, label, text.count(old)))
            missed.append(label)
            continue
        target.write_text(text.replace(old, new), encoding='utf-8')
        result = subprocess.run([sys.executable, str(HERE / 'run.py'), args.suite, '--cases', str(args.cases),
                                 '--engine-dir', str(engine), '--out', str(work / 'out'),
                                 '--timeout', str(args.timeout)],
                                capture_output=True, text=True, errors='replace')
        if 'DIFFERENT' in result.stdout:
            verdict = 'detected'
        elif 'identical' in result.stdout:
            verdict = 'MISSED'
            missed.append(label)
        else:
            verdict = 'INVALID (did not build or run)'
            missed.append(label)
        print('%2d %-50s %s' % (i, label, verdict))
    print('%d mutations run, %d missed' % (len(chosen) if chosen else len(parse(args.mutations)), len(missed)))
    return 1 if missed else 0


if __name__ == '__main__':
    raise SystemExit(main())
