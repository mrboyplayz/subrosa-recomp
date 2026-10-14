"""Mutation check that leaves the source tree alone and rebuilds one object per mutation.

    NATIVE_COMPARE_OUT=<dir> TESTS=<suite> tools/native-compare/run.sh      # once: objects, engine.ld, native output
    python tools/native-compare/mutate_fast.py <suite> <engine source> <mutations file> [first [count]]

Each mutation of the engine source is written to <out>/mut/, compiled with run.sh's flags, linked into the suite's
engine program in place of the real object, run, and its output compared with the native output run.sh left. A
difference, a fault or a timeout counts as caught. The mutations file is mutate.py's: pairs of blocks separated by
lines of `----`, the text to find (once) and its replacement with `====` between them.
"""
import os, subprocess, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent.parent
HERE = ROOT / 'tools/native-compare'
OUT = Path(os.environ.get('NATIVE_COMPARE_OUT', ROOT / 'build/native-compare'))
FLAGS = ('-x c -std=gnu11 -mabi=ms -O2 -g -msse4.2 -mcmodel=large -fno-strict-aliasing -ffp-contract=off -fno-pie '
         '-fno-stack-protector -w').split()
LDFLAGS = '-Wl,--image-base=0x10000000 -Wl,--disable-dynamicbase -D__USE_MINGW_ANSI_STDIO=1'.split()
CLIENT_LIBM = {'acos': 'sr_client_acos', 'sin': 'sr_client_sin', 'cosf': 'sr_client_cosf', 'cos': 'sr_client_cos',
               'rand': 'sr_client_rand'}


def main():
    suite, source, mutations = sys.argv[1], ROOT / sys.argv[2], Path(sys.argv[3]).read_text(encoding='utf-8')
    first = int(sys.argv[4]) if len(sys.argv) > 4 else 0
    count = int(sys.argv[5]) if len(sys.argv) > 5 else 10 ** 9
    original = source.read_text(encoding='utf-8')
    pairs = [tuple(part.strip('\n') for part in block.split('\n====\n')) for block in mutations.split('\n----\n')]
    work = OUT / 'mut' / suite
    work.mkdir(parents=True, exist_ok=True)
    native = (OUT / (suite + '_native.txt')).read_bytes()
    objects = [str(OUT / (f.stem + '.o')) for f in sorted((ROOT / 'src/engine').glob('*.c')) if f != source]
    mutated_c, mutated_o, program = work / source.name, work / (source.stem + '.o'), work / 't_engine.exe'
    missed = 0
    for find, replacement in pairs[first:first + count]:
        if original.count(find) != 1:
            sys.exit('not found exactly once: ' + find)
        mutated_c.write_text(original.replace(find, replacement), encoding='utf-8', newline='\n')
        label = find.split('\n')[0].strip()[:90]
        build = subprocess.run(['gcc', *FLAGS, '-I', str(ROOT / 'src/engine'), '-c', str(mutated_c), '-o', str(mutated_o)],
                               capture_output=True, text=True)
        if build.returncode:
            print('DOES NOT COMPILE |', label, flush=True)
            missed += 1
            continue
        undefined = {line.split()[-1] for line in
                     subprocess.run(['nm', '-u', str(mutated_o)], capture_output=True, text=True).stdout.splitlines()}
        renames = [a for n, alias in CLIENT_LIBM.items() if n in undefined for a in ('--redefine-sym', n + '=' + alias)]
        if renames:
            subprocess.run(['objcopy', *renames, str(mutated_o)], check=True)
        link = subprocess.run(['gcc', '-O1', '-g', '-fno-pie', *LDFLAGS, '-I', str(HERE), '-DENGINE', '-o', str(program),
                               str(HERE / ('t_%s.c' % suite)), *objects, str(mutated_o), str(OUT / 'engine.ld'), '-lm'],
                              capture_output=True, text=True)
        if link.returncode:
            print('DOES NOT LINK |', label, flush=True)
            missed += 1
            continue
        try:
            run = subprocess.run([str(program), str(ROOT / 'reports/current/link/client-link-probe.exe'),
                                  str(OUT / 'recomp.map')], capture_output=True, timeout=300)
            verdict = 'caught (fault)' if b'fault' in run.stderr else 'caught' if run.stdout != native else 'MISSED'
        except subprocess.TimeoutExpired:
            verdict = 'caught (hang)'
        missed += verdict == 'MISSED'
        print(verdict, '|', label, flush=True)
    print('%d missed' % missed)
    return 1 if missed else 0


if __name__ == '__main__':
    sys.exit(main())
