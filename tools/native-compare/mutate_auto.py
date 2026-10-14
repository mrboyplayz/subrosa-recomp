"""Mutation check with generated mutations, against a frozen build.

    python tools/native-compare/mutate_auto.py <suite> <engine source> [--cases N] [--count N] [--seed N] [--lines A,B] [--list]

Environment (as run.sh): NATIVE_COMPARE_OUT (objects, engine.ld of a finished run.sh of the suite),
NATIVE_COMPARE_ENGINE_DIR (the engine sources those objects were built from; headers are taken from there),
NATIVE_EXE, RECOMP_EXE.

Mutations are made mechanically from the source text, one change each: an arithmetic operator swapped, a comparison
weakened or reversed, a `!(` dropped, && and || exchanged, min_float and max_float exchanged, an array index moved to
the next of 0 1 2, a float constant scaled by 1.5, an integer constant changed by one, or a whole assignment or call
statement removed. `--count` of them are drawn at random (same draw for the same seed). Each mutant is compiled with
run.sh's flags, linked with the frozen objects in place of the real one, run, and compared with the original's
output for the same number of cases. A difference, a fault or a timeout counts as caught. The misses are listed
with their line for review: a miss is either an equivalent change or a hole in the test.
"""
import os, random, re, subprocess, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent.parent
HERE = ROOT / 'tools/native-compare'
OUT = Path(os.environ.get('NATIVE_COMPARE_OUT', ROOT / 'build/native-compare')).resolve()
ENGINE = Path(os.environ.get('NATIVE_COMPARE_ENGINE_DIR', ROOT / 'src/engine')).resolve()
NATIVE = os.environ.get('NATIVE_EXE', str(ROOT / 're/binaries/subrosa-vanilla.exe'))
RECOMP = os.environ.get('RECOMP_EXE', str(ROOT / 'reports/current/link/client-link-probe.exe'))
FLAGS = ('-x c -std=gnu11 -mabi=ms -O2 -g -msse4.2 -mcmodel=large -fno-strict-aliasing -ffp-contract=off -fno-pie '
         '-fno-stack-protector -w').split()
LDFLAGS = '-Wl,--image-base=0x10000000 -Wl,--disable-dynamicbase -D__USE_MINGW_ANSI_STDIO=1'.split()
CLIENT_LIBM = {'acos': 'sr_client_acos', 'sin': 'sr_client_sin', 'cosf': 'sr_client_cosf', 'cos': 'sr_client_cos',
               'rand': 'sr_client_rand', 'tan': 'sr_client_tan'}

SWAPS = [(' + ', ' - '), (' - ', ' + '), (' * ', ' + '), (' > ', ' >= '), (' >= ', ' > '), (' < ', ' <= '),
         (' <= ', ' < '), (' == ', ' != '), (' != ', ' == '), (' > ', ' < '), (' >= ', ' <= '), (' && ', ' || '),
         (' || ', ' && '), ('!(', '('), ('min_float(', 'max_float('), ('max_float(', 'min_float('),
         ('[0]', '[1]'), ('[1]', '[2]'), ('[2]', '[0]')]


def candidates(text):
    """(position, length, replacement, label) for every single change the operators allow, outside comments,
    preprocessor lines and declarations of external routines."""
    out = []
    masked = re.sub(r'/\*.*?\*/', lambda m: ' ' * len(m.group()), text, flags=re.S)
    offset = 0
    depth = 0
    for number, line in enumerate(masked.split('\n'), 1):
        start = offset
        offset += len(line) + 1
        stripped = line.strip()
        inside = depth > 0
        depth += line.count('{') - line.count('}')
        if not stripped or stripped.startswith(('#include', 'extern', '_Static_assert')):
            continue
        if not inside and not stripped.startswith('#define'):
            continue
        for find, replacement in SWAPS:
            for m in re.finditer(re.escape(find), line):
                out.append((start + m.start(), len(find), replacement, f'{number}: {find.strip()} -> {replacement.strip()} | {stripped[:70]}'))
        for m in re.finditer(r'(?<![\w.])(\d+\.\d+(?:e[-+]?\d+)?)f\b', line):
            if float(m.group(1)) == 0.0:
                continue
            out.append((start + m.start(), len(m.group()), '(%s * 1.5f)' % m.group(), f'{number}: {m.group()} x 1.5 | {stripped[:70]}'))
        for m in re.finditer(r'(?<![\w.\[])(\d+)(?![\w.xX])', line):
            if stripped.startswith('#define') or re.search(r'[<>=!]=?\s*$', line[:m.start()]) or re.search(r'[=(,]\s*$', line[:m.start()]):
                out.append((start + m.start(), len(m.group()), str(int(m.group()) + 1), f'{number}: {m.group()} + 1 | {stripped[:70]}'))
        if inside and stripped.endswith(';') and not stripped.startswith(('return', 'continue', 'break', 'float ', 'int ', 'const ', 'int32_t ', 'int64_t ', 'uint32_t ', 'uint64_t ', 'struct ', 'static ', 'Physics', 'Vehicle', 'World', 'Street', 'Collision', '}')) \
                and line.count('(') == line.count(')') and re.match(r'^[\w\->\[\]\.\*\(\)& ]+(=|\+=|-=|\()', stripped):
            out.append((start + len(line) - len(line.lstrip()), len(stripped), ';', f'{number}: statement removed | {stripped[:70]}'))
    return out


def main():
    args = sys.argv[1:]
    def option(name, default):
        return int(args[args.index(name) + 1]) if name in args else default
    suite, source = args[0], Path(args[1])
    cases, count, seed = option('--cases', 400), option('--count', 60), option('--seed', 1)
    source = (ENGINE / source.name) if not source.is_absolute() and (ENGINE / source.name).exists() else (ROOT / source)
    original = source.read_text(encoding='utf-8')
    found = candidates(original)
    random.Random(seed).shuffle(found)
    chosen = found[:count]
    if '--lines' in args:       # every candidate on the given source lines (comma separated)
        wanted = {int(n) for n in args[args.index('--lines') + 1].split(',')}
        chosen = [c for c in found if int(c[3].split(':')[0]) in wanted]
    if '--list' in args:
        for c in sorted(chosen, key=lambda c: c[0]):
            print(c[3])
        print(len(found), 'candidates,', len(chosen), 'chosen')
        return
    work = OUT / 'mut-auto' / suite / ('%s-%d' % (source.stem, seed))
    work.mkdir(parents=True, exist_ok=True)
    test = HERE / ('t_%s.c' % suite)
    native_program = work / 't_native.exe'
    subprocess.run(['gcc', '-O1', '-g', '-fno-pie', *LDFLAGS, '-I', str(HERE), '-o', str(native_program), str(test), '-lm'], check=True)
    native = subprocess.run([str(native_program), NATIVE, '', str(cases)], capture_output=True).stdout
    objects = [str(o) for o in sorted(OUT.glob('*.o')) if o.stem != source.stem]
    mutated_c, mutated_o, program = work / source.name, work / (source.stem + '.o'), work / 't_engine.exe'

    def run_mutant(text):
        mutated_c.write_text(text, encoding='utf-8', newline='\n')
        build = subprocess.run(['gcc', *FLAGS, '-I', str(ENGINE), '-I', str(ENGINE / 'items'), '-c', str(mutated_c), '-o', str(mutated_o)],
                               capture_output=True, text=True)
        if build.returncode:
            return 'does not compile'
        undefined = {line.split()[-1] for line in
                     subprocess.run(['nm', '-u', str(mutated_o)], capture_output=True, text=True).stdout.splitlines()}
        renames = [a for n, alias in CLIENT_LIBM.items() if n in undefined for a in ('--redefine-sym', n + '=' + alias)]
        if renames:
            subprocess.run(['objcopy', *renames, str(mutated_o)], check=True)
        link = subprocess.run(['gcc', '-O1', '-g', '-fno-pie', *LDFLAGS, '-I', str(HERE), '-DENGINE', '-o', str(program),
                               str(test), *objects, str(mutated_o), str(OUT / 'engine.ld'), '-lm'], capture_output=True, text=True)
        if link.returncode:
            return 'does not link'
        try:
            run = subprocess.run([str(program), RECOMP, str(OUT / 'recomp.map'), str(cases)], capture_output=True, timeout=300)
        except subprocess.TimeoutExpired:
            return 'caught'
        return 'missed' if run.returncode == 0 and run.stdout == native else 'caught'

    baseline = run_mutant(original)
    if baseline != 'missed':
        sys.exit(f'{suite}: the unchanged source does not reproduce the original ({baseline}); no mutation results')
    tally = {}
    for position, length, replacement, label in chosen:
        result = run_mutant(original[:position] + replacement + original[position + length:])
        tally[result] = tally.get(result, 0) + 1
        if result != 'caught':
            print(f'{result.upper()} | {source.name}:{label}', flush=True)
    print(f'{suite} {source.name}: {len(chosen)} mutations of {len(found)} candidates, {cases} cases:', ', '.join(f'{v} {k}' for k, v in sorted(tally.items())), flush=True)


if __name__ == '__main__':
    main()
